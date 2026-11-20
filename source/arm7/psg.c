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

enum { PSG_CLOCK_DIVIDER = 16 * PSG_RATE };

static unsigned advance_counter(int16_t *counter, unsigned ticks, unsigned period)
{
    int left = *counter - (int)ticks;
    unsigned transitions = left <= 0 ? 1 + (unsigned)-left / period : 0;
    *counter = left + (int)(transitions * period);
    return transitions;
}

static void advance_muted(struct psg *psg, uint32_t clock, size_t count)
{
    // With all four channels muted, skip the per-sample mix but keep the
    // oscillators and noise feedback running for the next audible block.
    unsigned noise_mode = psg->registers[6] & 3;
    while (count) {
        unsigned block = count > 1024 ? 1024 : (unsigned)count;
        psg->clock_phase += clock * block;
        unsigned ticks = psg->clock_phase / PSG_CLOCK_DIVIDER;
        psg->clock_phase -= ticks * PSG_CLOCK_DIVIDER;
        unsigned noise_shifts = 0;
        for (unsigned channel = 0; channel < 3; ++channel) {
            unsigned period = psg->registers[channel * 2] & 1023;
            unsigned transitions = advance_counter(&psg->counter[channel], ticks, period ? period : 1);
            if (channel == 2 && noise_mode == 3)
                noise_shifts = (transitions + !psg->positive[channel]) / 2;
            psg->positive[channel] ^= transitions & 1;
        }
        if (noise_mode != 3)
            noise_shifts = advance_counter(&psg->counter[3], ticks, 32 << noise_mode);
        while (noise_shifts) {
            shift_noise(psg);
            --noise_shifts;
        }
        count -= block;
    }
}

void psg_render(struct psg *psg, int16_t *output, size_t count)
{
    uint32_t clock = psg->pal ? 3546893 : 3579545;
    if ((psg->registers[1] & psg->registers[3] &
         psg->registers[5] & psg->registers[7] & 15) == 15) {
        advance_muted(psg, clock, count);
        if (count)
            memset(output, 0, count * sizeof(*output));
        return;
    }
    for (size_t i = 0; i < count; ++i) {
        psg->clock_phase += clock;
        unsigned ticks = psg->clock_phase / PSG_CLOCK_DIVIDER;
        psg->clock_phase -= ticks * PSG_CLOCK_DIVIDER;
        unsigned noise_mode = psg->registers[6] & 3;
        int sample = 0;
        for (unsigned channel = 0; channel < 3; ++channel) {
            unsigned period = psg->registers[channel * 2] & 1023;
            if (period == 0)
                period = 1;
            psg->counter[channel] -= ticks;
            if (period == 1 && !(channel == 2 && noise_mode == 3)) {
                if (psg->counter[channel] <= 0) {
                    psg->positive[channel] ^= (1 - psg->counter[channel]) & 1;
                    psg->counter[channel] = 1;
                }
            }
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
