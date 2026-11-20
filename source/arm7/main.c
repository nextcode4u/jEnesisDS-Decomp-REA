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
static uint16_t sound_generation;
static bool sound_active;
static unsigned next_block;

static void release_dac_slots(void)
{
    for (unsigned slot = 0; slot < DAC_TRANSFER_SLOTS; ++slot)
        if ((pending_releases & (1U << slot)) && fifoSendValue32(FIFO_USER_02, slot))
            pending_releases &= ~(1U << slot);
}

static void discard_dac(void)
{
    dac_read = dac_count = dac_sample_index = 0;
}

static void receive_psg(int size, void *context)
{
    (void)context;
    struct psg_message message;
    if (size != sizeof(message) ||
        fifoGetDatamsg(FIFO_USER_01, sizeof(message), (uint8_t *)&message) != sizeof(message))
        return;
    if (message.generation != sound_generation || chip.pal != (bool)message.pal) {
        psg_reset(&chip, message.pal);
        sound_generation = message.generation;
        discard_dac();
    }
    psg_update(&chip, message.registers);
    sound_active = message.enabled;
    if (!sound_active)
        discard_dac();
}

static void receive_dac(void *address, void *context)
{
    (void)context;
    const struct dac_frame *frame = address;
    unsigned slot = frame->slot;
    if (slot >= DAC_TRANSFER_SLOTS)
        return;
    if (sound_active && frame->generation == sound_generation &&
        frame->count && frame->count <= DAC_PCM_CAPACITY) {
        if (dac_count == DAC_QUEUE_SIZE) {
            dac_read = (dac_read + 1) % DAC_QUEUE_SIZE;
            --dac_count;
            dac_sample_index = 0;
        }
        unsigned tail = (dac_read + dac_count) % DAC_QUEUE_SIZE;
        dac_queue[tail].count = frame->count;
        memcpy(dac_queue[tail].samples, frame->samples,
               frame->count * sizeof(frame->samples[0]));
        ++dac_count;
    }
    pending_releases |= 1U << slot;
    release_dac_slots();
}

static void fill_sound_block(void)
{
    int16_t *left = samples[0][next_block];
    int16_t *right = samples[1][next_block];
    if (sound_active) {
        psg_render(&chip, left, BLOCK_SAMPLES);
        for (unsigned i = 0; i < BLOCK_SAMPLES; ++i) {
            right[i] = left[i];
            if (dac_count) {
                const struct dac_frame *frame = &dac_queue[dac_read];
                struct dac_sample sample = frame->samples[dac_sample_index++];
                left[i] += sample.left * 64;
                right[i] += sample.right * 64;
                if (dac_sample_index == frame->count) {
                    dac_read = (dac_read + 1) % DAC_QUEUE_SIZE;
                    --dac_count;
                    dac_sample_index = 0;
                }
            }
        }
    } else {
        memset(left, 0, sizeof(samples[0][0]));
        memset(right, 0, sizeof(samples[1][0]));
    }
    next_block ^= 1;
    if (pending_releases)
        release_dac_slots();
}

static void start_audio(void)
{
    psg_reset(&chip, false);
    enableSound();
    fifoSetDatamsgHandler(FIFO_USER_01, receive_psg, NULL);
    fifoSetAddressHandler(FIFO_USER_02, receive_dac, NULL);
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
               fill_sound_block);
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

    for (;;)
        swiWaitForVBlank();
}
