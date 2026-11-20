#ifndef JENESIS_FM_H
#define JENESIS_FM_H

#include <stdbool.h>
#include <stdint.h>

enum { FM_CHANNELS = 6, FM_OPERATORS = 4 };

struct fm_operator {
    uint32_t phase, step;
    uint16_t attenuation, total_level, sustain_level;
    uint8_t rate[4], stage;
    bool keyed, amplitude_modulation;
};

struct fm_channel {
    struct fm_operator op[FM_OPERATORS];
    int16_t history[2];
    uint8_t algorithm, feedback, pan, am_depth;
};

struct fm_chip {
    struct fm_channel channels[FM_CHANNELS];
    uint8_t registers[2][256];
    uint16_t frequency[FM_CHANNELS], special_frequency[3];
    uint32_t envelope_clock, envelope_tick, lfo_clock;
    int32_t previous_left, previous_right, delta_left, delta_right;
    uint16_t output_clock;
    uint8_t samples_remaining;
    uint8_t lfo_phase, frequency_high[2], active_channels;
};

extern const uint16_t fm_sine[512], fm_exponent[256];

void fm_reset(struct fm_chip *fm, bool pal);
void fm_write(struct fm_chip *fm, unsigned reg, uint8_t value);
void fm_restore(struct fm_chip *fm, bool pal, const uint8_t registers[2][256],
                const uint8_t keys[FM_CHANNELS]);
void fm_sample(struct fm_chip *fm, int *left, int *right);

#endif
