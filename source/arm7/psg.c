#include "../psg.h"

#include <string.h>

// The gain and short-period treatment match the recovered 0.7.4 PSG mixer.
static const uint16_t volume[16] = {
    6553, 5205, 4135, 3284, 2609, 2072, 1646, 1307,
    1039, 825, 655, 521, 413, 328, 261, 0,
};

void psg_reset(struct psg *psg, bool pal)
{
    memset(psg, 0, sizeof(*psg));
    psg->pal = pal;
    psg->noise = 0x8000;
    for (unsigned i = 1; i < PSG_REGISTERS; i += 2)
        psg->registers[i] = 15;
}

void psg_update(struct psg *psg, const uint16_t registers[PSG_REGISTERS])
{
    if ((psg->registers[6] ^ registers[6]) & 7) {
        psg->noise = 0x8000;
        psg->counter[3] = 0;
    }
    memcpy(psg->registers, registers, sizeof(psg->registers));
}

static void shift_noise(struct psg *psg)
{
    uint16_t feedback = psg->noise;
    if (psg->registers[6] & 4)
        feedback ^= psg->noise >> 3;
    psg->noise = (psg->noise >> 1) | ((feedback & 1) << 15);
}

void psg_render(struct psg *psg, int16_t *output, size_t count)
{
    uint32_t clock = psg->pal ? 3546893 : 3579545;
    enum { DIVIDER = 16 * PSG_RATE };
    for (size_t i = 0; i < count; ++i) {
        psg->clock_phase += clock;
        unsigned ticks = psg->clock_phase / DIVIDER;
        psg->clock_phase -= ticks * DIVIDER;
        unsigned noise_mode = psg->registers[6] & 3;
        int sample = 0;
        for (unsigned channel = 0; channel < 3; ++channel) {
            unsigned period = psg->registers[channel * 2] & 1023;
            if (period == 0)
                period = 1;
            psg->counter[channel] -= ticks;
            while (psg->counter[channel] <= 0) {
                psg->counter[channel] += period;
                psg->positive[channel] = !psg->positive[channel];
                if (channel == 2 && noise_mode == 3 && psg->positive[channel])
                    shift_noise(psg);
            }
            int level = volume[psg->registers[channel * 2 + 1] & 15];
            sample += period < 7 || psg->positive[channel] ? level : -level;
        }
        if (noise_mode != 3) {
            psg->counter[3] -= ticks;
            while (psg->counter[3] <= 0) {
                psg->counter[3] += 32 << noise_mode;
                shift_noise(psg);
            }
        }
        if (psg->noise & 1)
            sample += volume[psg->registers[7] & 15] * 2;
        output[i] = sample / 2;
    }
}
