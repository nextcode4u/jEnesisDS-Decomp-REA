#include <nds.h>
#include <string.h>

#include "../dac.h"
#include "../psg.h"

enum { BLOCK_SAMPLES = 48, DAC_QUEUE_SIZE = 3, AUDIO_TIMER = 1 };
static int16_t samples[2][2][BLOCK_SAMPLES] __attribute__((aligned(4)));
static struct dac_frame dac_queue[DAC_QUEUE_SIZE];
static unsigned dac_read, dac_count, dac_sample_index;
static unsigned pending_releases;
static struct psg chip;
static struct fm_chip fm;
static unsigned fm_write_index;
static uint16_t next_fm_sequence;
static bool fm_synced;
static uint16_t sound_generation;
static bool sound_active;
static volatile unsigned audio_ticks;

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
}

static void receive_psg(void)
{
    struct psg_message message;
    if (fifoGetDatamsg(FIFO_USER_01, sizeof(message), (uint8_t *)&message) != sizeof(message))
        return;
    if (message.generation != sound_generation || chip.pal != (bool)message.pal) {
        psg_reset(&chip, message.pal);
        fm_reset(&fm, message.pal);
        sound_generation = message.generation;
        discard_dac();
    }
    psg_update(&chip, message.registers);
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
        if (dac_count == DAC_QUEUE_SIZE) {
            fm_synced = false;
            dac_read = (dac_read + 1) % DAC_QUEUE_SIZE;
            --dac_count;
            dac_sample_index = 0;
        }
        unsigned tail = (dac_read + dac_count) % DAC_QUEUE_SIZE;
        memcpy(&dac_queue[tail], frame, offsetof(struct dac_frame, fm_writes) +
               frame->fm_count * sizeof(frame->fm_writes[0]));
        ++dac_count;
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

static void fill_sound_block(int16_t *left, int16_t *right)
{
    if (sound_active) {
        psg_render(&chip, left, BLOCK_SAMPLES);
        for (unsigned i = 0; i < BLOCK_SAMPLES; ++i) {
            int l = left[i], r = left[i];
            if (dac_count) {
                const struct dac_frame *frame = &dac_queue[dac_read];
                if (dac_sample_index == 0) {
                    if (!fm_synced || next_fm_sequence != frame->sequence)
                        fm_restore(&fm, chip.pal, frame->fm_registers, frame->fm_keys,
                                   &frame->fm_pitch);
                    next_fm_sequence = frame->sequence + 1;
                    fm_synced = !frame->fm_overflow;
                    fm_write_index = 0;
                }
                while (fm_write_index < frame->fm_count &&
                       frame->fm_writes[fm_write_index].sample == dac_sample_index) {
                    const struct fm_write_event *event = &frame->fm_writes[fm_write_index++];
                    fm_write(&fm, event->reg, event->value);
                }
                struct dac_sample sample = frame->samples[dac_sample_index++];
                l += sample.left * 64;
                r += sample.right * 64;
                if (dac_sample_index == frame->count) {
                    dac_read = (dac_read + 1) % DAC_QUEUE_SIZE;
                    --dac_count;
                    dac_sample_index = 0;
                }
            }
            fm_sample(&fm, &l, &r);
            left[i] = clamp_sample(l);
            right[i] = clamp_sample(r);
        }
    } else {
        memset(left, 0, sizeof(samples[0][0]));
        memset(right, 0, sizeof(samples[1][0]));
    }
}

static void audio_tick(void)
{
    ++audio_ticks;
}

static void start_audio(void)
{
    psg_reset(&chip, false);
    enableSound();
    for (unsigned channel = 0; channel < 2; ++channel) {
        SCHANNEL_CR(channel) = 0;
        SCHANNEL_SOURCE(channel) = (uint32_t)samples[channel];
        SCHANNEL_TIMER(channel) = SOUNDXTMR_FREQ(PSG_RATE);
        SCHANNEL_REPEAT_POINT(channel) = 0;
        SCHANNEL_LENGTH(channel) = sizeof(samples[channel]) / 4;
    }
    int critical = enterCriticalSection();
    for (unsigned channel = 0; channel < 2; ++channel)
        SCHANNEL_CR(channel) = SOUNDXCNT_ENABLE | SOUNDXCNT_REPEAT |
                               SOUNDXCNT_FORMAT_16BIT | SOUNDXCNT_PAN(channel * 127) |
                               SOUNDXCNT_VOL_MUL(127);
    int sample_ticks = -(int16_t)SOUNDXTMR_FREQ(PSG_RATE) * 2;
    timerStart(AUDIO_TIMER, ClockDivider_1, (uint16_t)(-sample_ticks * BLOCK_SAMPLES),
               audio_tick);
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

    unsigned observed = audio_ticks;
    for (;;) {
        if (audio_ticks == observed)
            swiIntrWait(INTRWAIT_KEEP_FLAGS, IRQ_TIMER1);
        unsigned tick = audio_ticks;
        if (tick == observed)
            continue;
        observed = tick;

        // The FIFO thread may be interrupted by the timer. Keep the mixer and
        // its queues in the ARM7 main thread so the IRQ never touches them.
        while (fifoCheckDatamsg(FIFO_USER_01))
            receive_psg();
        while (fifoCheckAddress(FIFO_USER_02))
            receive_dac(fifoGetAddress(FIFO_USER_02));
        if (pending_releases)
            release_dac_slots();

        int16_t left[BLOCK_SAMPLES], right[BLOCK_SAMPLES];
        fill_sound_block(left, right);
        if (tick == audio_ticks) {
            unsigned slot = (tick - 1) & 1;
            memcpy(samples[0][slot], left, sizeof(left));
            memcpy(samples[1][slot], right, sizeof(right));
        }
    }
}
