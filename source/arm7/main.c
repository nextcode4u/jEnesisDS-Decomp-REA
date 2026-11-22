#include <nds.h>
#include <stdatomic.h>
#include <string.h>

#include "../dac.h"
#include "../psg.h"

enum {
    BLOCK_SAMPLES = 192,
    // An extra scratch sample is required for the feedback loop. Keep the
    // stride even so each channel's staging buffer is word-aligned.
    FM_STRIDE = BLOCK_SAMPLES + 2,
    FADE_SAMPLES = 32,
    AUDIO_BLOCKS = 4,
    AUDIO_LEAD_BLOCKS = 3,
    AUDIO_PREROLL_FRAMES = 3,
    DAC_QUEUE_SIZE = 6,
    AUDIO_TIMER = 0,
    AUDIO_BLOCK_COUNTER = 1,
    FM_OUTPUT_CHANNELS = 2 * FM_CHANNELS,
    AUDIO_TIMER_TICKS = -(int16_t)SOUNDXTMR_FREQ(PSG_RATE) * 2 * BLOCK_SAMPLES / 64,
};
static int16_t samples[2][AUDIO_BLOCKS][BLOCK_SAMPLES] __attribute__((aligned(4)));
static int16_t fm_samples[FM_CHANNELS][AUDIO_BLOCKS][BLOCK_SAMPLES] __attribute__((aligned(4)));
static uint8_t fm_pan[AUDIO_BLOCKS][FM_CHANNELS];
static volatile uint16_t prepared_blocks[AUDIO_BLOCKS];
static struct dac_frame dac_queue[DAC_QUEUE_SIZE];
static unsigned dac_read, dac_count, dac_sample_index;
static unsigned pending_releases;
static struct psg chip;
static struct fm_chip fm;
static unsigned fm_write_index;
static uint16_t next_fm_sequence;
static bool fm_synced;
static bool playback_ready;
static uint16_t sound_generation;
static bool sound_active;
static int16_t previous_left, previous_right;

static void release_dac_slots(void)
{
    for (unsigned slot = 0; slot < DAC_TRANSFER_SLOTS; ++slot)
        if ((pending_releases & (1U << slot)) && fifoSendValue32(FIFO_USER_02, slot))
            pending_releases &= ~(1U << slot);
}

static void discard_dac(void)
{
    dac_read = dac_count = dac_sample_index = 0;
    fm_synced = false;
    playback_ready = false;
}

static void receive_psg(void)
{
    struct psg_message message;
    if (fifoGetDatamsg(FIFO_USER_01, sizeof(message), (uint8_t *)&message) != sizeof(message))
        return;
    if (message.generation != sound_generation || chip.pal != (bool)message.pal) {
        psg_reset(&chip, message.pal);
        fm_reset(&fm);
        sound_generation = message.generation;
        discard_dac();
    }
    sound_active = message.enabled;
    if (!sound_active)
        discard_dac();
}

static void receive_dac(const void *address)
{
    const struct dac_frame *frame = address;
    unsigned slot = frame->slot;
    if (slot >= DAC_TRANSFER_SLOTS)
        return;
    if (sound_active && frame->generation == sound_generation &&
        frame->count && frame->count <= DAC_PCM_CAPACITY &&
        frame->fm_count <= FM_FRAME_WRITES) {
        // Never discard the tail of a frame the mixer is already playing.
        if (dac_count < DAC_QUEUE_SIZE) {
            unsigned tail = (dac_read + dac_count) % DAC_QUEUE_SIZE;
            memcpy(&dac_queue[tail], frame, offsetof(struct dac_frame, fm_writes) +
                   frame->fm_count * sizeof(frame->fm_writes[0]));
            ++dac_count;
        }
    }
    pending_releases |= 1U << slot;
    release_dac_slots();
}

static int16_t clamp_sample(int value)
{
    if (value > INT16_MAX)
        return INT16_MAX;
    return value < INT16_MIN ? INT16_MIN : value;
}

static void fade_to_silence(int16_t *left, int16_t *right, unsigned count,
                            int from_left, int from_right)
{
    int fade = count < FADE_SAMPLES ? count : FADE_SAMPLES;
    unsigned i = 0;
    for (int remaining = fade - 1; remaining > 0; --remaining, ++i) {
        left[i] = from_left * remaining / fade;
        right[i] = from_right * remaining / fade;
    }
    memset(left + i, 0, (count - i) * sizeof(*left));
    memset(right + i, 0, (count - i) * sizeof(*right));
}

static void fill_sound_block(int16_t *left, int16_t *right, int16_t *voices, uint8_t *pan)
{
    bool was_ready = playback_ready;
    if (dac_count >= AUDIO_PREROLL_FRAMES)
        playback_ready = true;
    if (!playback_ready) {
        fade_to_silence(left, right, BLOCK_SAMPLES, previous_left, previous_right);
        previous_left = previous_right = 0;
        for (unsigned i = 0; i < FM_CHANNELS; ++i)
            memset(voices + i * FM_STRIDE, 0, BLOCK_SAMPLES * sizeof(*voices));
        return;
    }

    unsigned pos = 0, psg_until = 0;
    while (pos < BLOCK_SAMPLES) {
        unsigned count = BLOCK_SAMPLES - pos;
        if (dac_count) {
            const struct dac_frame *frame = &dac_queue[dac_read];
            if (dac_sample_index == 0) {
                psg_update(&chip, frame->psg_registers);
                if (!fm_synced || next_fm_sequence != frame->sequence)
                    fm_restore(&fm, frame->fm_registers, frame->fm_keys,
                               &frame->fm_pitch);
                next_fm_sequence = frame->sequence + 1;
                fm_synced = !frame->fm_overflow;
                fm_write_index = 0;
            }
            if (pos == psg_until) {
                unsigned remaining = frame->count - dac_sample_index;
                unsigned span = remaining < count ? remaining : count;
                psg_render(&chip, left + pos, span);
                memcpy(right + pos, left + pos, span * sizeof(*left));
                psg_until += span;
            }
            while (fm_write_index < frame->fm_count &&
                   frame->fm_writes[fm_write_index].sample == dac_sample_index) {
                const struct fm_write_event *event = &frame->fm_writes[fm_write_index++];
                fm_write(&fm, event->reg, event->value);
            }
            if (pos == 0) {
                for (unsigned i = 0; i < FM_CHANNELS; ++i)
                    pan[i] = fm.channels[i].pan;
            }
            unsigned next = fm_write_index < frame->fm_count ?
                            frame->fm_writes[fm_write_index].sample : frame->count;
            if (count > next - dac_sample_index)
                count = next - dac_sample_index;
            for (unsigned i = 0; i < count; ++i) {
                struct dac_sample sample = frame->samples[dac_sample_index + i];
                int psg = left[pos + i];
                left[pos + i] = clamp_sample(psg + sample.left * 64);
                right[pos + i] = clamp_sample(psg + sample.right * 64);
            }
            dac_sample_index += count;
            if (dac_sample_index == frame->count) {
                dac_read = (dac_read + 1) % DAC_QUEUE_SIZE;
                --dac_count;
                dac_sample_index = 0;
            }
        } else {
            // Hold the YM2612 at the guest sample boundary until the queue
            // refills. Free-running here makes later writes arrive off time.
            playback_ready = false;
            fade_to_silence(left + pos, right + pos, count,
                            pos ? left[pos - 1] : previous_left,
                            pos ? right[pos - 1] : previous_right);
            for (unsigned i = 0; i < FM_CHANNELS; ++i)
                memset(voices + i * FM_STRIDE + pos, 0, count * sizeof(*voices));
            break;
        }
        fm_render(&fm, count, FM_STRIDE, voices + pos);
        pos += count;
    }
    if (!was_ready) {
        for (unsigned i = 0; i < FADE_SAMPLES; ++i) {
            left[i] = left[i] * (int)i / FADE_SAMPLES;
            right[i] = right[i] * (int)i / FADE_SAMPLES;
        }
    }
    previous_left = left[BLOCK_SAMPLES - 1];
    previous_right = right[BLOCK_SAMPLES - 1];
}

static void audio_wake(void)
{
    uint16_t tick = timerTick(AUDIO_BLOCK_COUNTER);
    unsigned block = tick % AUDIO_BLOCKS;
    // On a missed deadline, mute the block instead of replaying old PCM.
    bool ready = prepared_blocks[block] == tick;
    atomic_signal_fence(memory_order_acquire);
    for (unsigned channel = 0; channel < FM_CHANNELS; ++channel) {
        unsigned pan = ready ? fm_pan[block][channel] : 0;
        unsigned side = pan == 2 ? 0 : pan == 1 ? 127 : 64;
        unsigned volume = pan == 3 ? 127 : pan ? 63 : 0;
        uint32_t control = SOUNDXCNT_ENABLE | SOUNDXCNT_REPEAT | SOUNDXCNT_FORMAT_16BIT |
            SOUNDXCNT_PAN(side) | SOUNDXCNT_VOL_MUL(volume);
        if (SCHANNEL_CR(channel) != control) {
            SCHANNEL_CR(channel) = control;
            SCHANNEL_CR(channel + FM_CHANNELS) = control;
        }
    }
    for (unsigned side = 0; side < 2; ++side) {
        uint32_t control = SOUNDXCNT_ENABLE | SOUNDXCNT_REPEAT | SOUNDXCNT_FORMAT_16BIT |
            SOUNDXCNT_PAN(side * 127) | SOUNDXCNT_VOL_MUL(ready ? 127 : 0);
        if (SCHANNEL_CR(FM_OUTPUT_CHANNELS + side) != control)
            SCHANNEL_CR(FM_OUTPUT_CHANNELS + side) = control;
    }
}

static void start_audio(void)
{
    psg_reset(&chip, false);
    enableSound();
    for (unsigned channel = 0; channel < FM_OUTPUT_CHANNELS + 2; ++channel) {
        SCHANNEL_CR(channel) = 0;
        SCHANNEL_SOURCE(channel) = channel < FM_OUTPUT_CHANNELS ?
            (uint32_t)fm_samples[channel % FM_CHANNELS] : (uint32_t)samples[channel - FM_OUTPUT_CHANNELS];
        SCHANNEL_TIMER(channel) = SOUNDXTMR_FREQ(PSG_RATE);
        SCHANNEL_REPEAT_POINT(channel) = 0;
        SCHANNEL_LENGTH(channel) = sizeof(samples[0]) / 4;
    }

    int critical = enterCriticalSection();
    TIMER_CR(AUDIO_BLOCK_COUNTER) = 0;
    TIMER_DATA(AUDIO_BLOCK_COUNTER) = 0;
    TIMER_CR(AUDIO_BLOCK_COUNTER) = TIMER_ENABLE | TIMER_CASCADE;
    for (unsigned channel = 0; channel < FM_OUTPUT_CHANNELS + 2; ++channel) {
        unsigned pan = channel < FM_OUTPUT_CHANNELS ? 64 : (channel - FM_OUTPUT_CHANNELS) * 127;
        unsigned volume = channel < FM_OUTPUT_CHANNELS ? 0 : 127;
        SCHANNEL_CR(channel) = SOUNDXCNT_ENABLE | SOUNDXCNT_REPEAT | SOUNDXCNT_FORMAT_16BIT |
            SOUNDXCNT_PAN(pan) | SOUNDXCNT_VOL_MUL(volume);
    }
    timerStart(AUDIO_TIMER, ClockDivider_64, (uint16_t)-AUDIO_TIMER_TICKS, audio_wake);
    leaveCriticalSection(critical);
}

int main(void)
{
    irqInit();
    fifoInit();

    // Storage requests and firmware access arrive through the system FIFO.
    installSystemFIFO();
    readUserSettings();
    touchInit();
    start_audio();

    // The ARM9 frontend receives keys and touchscreen samples every VBlank.
    irqSet(IRQ_VBLANK, inputGetAndSend);
    irqEnable(IRQ_VBLANK);

    uint16_t next_block = AUDIO_LEAD_BLOCKS;
    for (;;) {
        uint16_t tick = timerTick(AUDIO_BLOCK_COUNTER);
        int16_t distance = next_block - tick;
        if (distance > AUDIO_LEAD_BLOCKS) {
            swiIntrWait(INTRWAIT_KEEP_FLAGS, IRQ_TIMER(AUDIO_TIMER));
            continue;
        }
        if (distance < 2)
            next_block = tick + 2;

        // The FIFO thread may be interrupted by the timer. Keep the mixer and
        // its queues in the ARM7 main thread so the IRQ never touches them.
        while (fifoCheckDatamsg(FIFO_USER_01))
            receive_psg();
        while (fifoCheckAddress(FIFO_USER_02))
            receive_dac(fifoGetAddress(FIFO_USER_02));
        if (pending_releases)
            release_dac_slots();

        int16_t left[BLOCK_SAMPLES], right[BLOCK_SAMPLES];
        int16_t voices[FM_CHANNELS * FM_STRIDE] __attribute__((aligned(4)));
        uint8_t pan[FM_CHANNELS] = {0};
        fill_sound_block(left, right, voices, pan);
        tick = timerTick(AUDIO_BLOCK_COUNTER);
        distance = next_block - tick;
        // Leave the last quarter of the preceding block for DMA prefetch.
        if (distance < 1 || (distance == 1 &&
                            TIMER_DATA(AUDIO_TIMER) >= (uint16_t)(-AUDIO_TIMER_TICKS / 4))) {
            next_block = tick + 2;
            continue;
        }
        unsigned slot = next_block % AUDIO_BLOCKS;
        memcpy(fm_pan[slot], pan, sizeof(pan));
        for (unsigned i = 0; i < FM_CHANNELS; ++i)
            memcpy(fm_samples[i][slot], voices + i * FM_STRIDE, sizeof(fm_samples[i][slot]));
        memcpy(samples[0][slot], left, sizeof(left));
        memcpy(samples[1][slot], right, sizeof(right));
        atomic_signal_fence(memory_order_release);
        prepared_blocks[slot] = next_block++;
    }
}
