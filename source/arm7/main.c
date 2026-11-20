#include <nds.h>
#include <string.h>

#include "../psg.h"

enum { BLOCK_SAMPLES = 48, PSG_CHANNEL = 0, AUDIO_TIMER = 1 };
static int16_t samples[2][BLOCK_SAMPLES] __attribute__((aligned(4)));
static struct psg chip;
static uint16_t sound_generation;
static bool sound_active;
static unsigned next_block;

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
    }
    psg_update(&chip, message.registers);
    sound_active = message.enabled;
}

static void fill_sound_block(void)
{
    if (sound_active)
        psg_render(&chip, samples[next_block], BLOCK_SAMPLES);
    else
        memset(samples[next_block], 0, sizeof(samples[next_block]));
    next_block ^= 1;
}

static void start_audio(void)
{
    psg_reset(&chip, false);
    enableSound();
    fifoSetDatamsgHandler(FIFO_USER_01, receive_psg, NULL);
    SCHANNEL_CR(PSG_CHANNEL) = 0;
    SCHANNEL_SOURCE(PSG_CHANNEL) = (uint32_t)samples;
    SCHANNEL_TIMER(PSG_CHANNEL) = SOUNDXTMR_FREQ(PSG_RATE);
    SCHANNEL_REPEAT_POINT(PSG_CHANNEL) = 0;
    SCHANNEL_LENGTH(PSG_CHANNEL) = sizeof(samples) / 4;
    SCHANNEL_CR(PSG_CHANNEL) = SOUNDXCNT_ENABLE | SOUNDXCNT_REPEAT | SOUNDXCNT_FORMAT_16BIT |
                               SOUNDXCNT_PAN(64) | SOUNDXCNT_VOL_MUL(127);
    int sample_ticks = -(int16_t)SOUNDXTMR_FREQ(PSG_RATE) * 2;
    timerStart(AUDIO_TIMER, ClockDivider_1, (uint16_t)(-sample_ticks * BLOCK_SAMPLES),
               fill_sound_block);
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
