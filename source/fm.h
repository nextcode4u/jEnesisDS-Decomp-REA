#ifndef JENESIS_FM_H
#define JENESIS_FM_H

#include <stdbool.h>
#include <stdint.h>

enum { FM_CHANNELS = 6, FM_OPERATORS = 4 };

// The normal F-number high latch is shared by both banks. Channel 3's
// per-operator frequencies use their own high latch.
struct fm_pitch {
    uint16_t channel[FM_CHANNELS], special[3];
    uint8_t channel_high, special_high;
};

// Returns the channel whose committed frequency changed, or -1 for a latch
// write or unsupported address.
static inline int fm_pitch_write(struct fm_pitch *pitch, unsigned reg, uint8_t value)
{
    unsigned group = reg & 0xfc, channel = reg & 3, bank = reg >> 8;
    if (channel == 3 || bank > 1)
        return -1;
    if (group == 0xa4) {
        pitch->channel_high = value & 0x3f;
    } else if (group == 0xa0) {
        unsigned index = bank * 3 + channel;
        pitch->channel[index] = value | pitch->channel_high << 8;
        return index;
    } else if (!bank && group == 0xac) {
        pitch->special_high = value & 0x3f;
    } else if (!bank && group == 0xa8) {
        pitch->special[channel] = value | pitch->special_high << 8;
        return 2;
    }
    return -1;
}

struct fm_operator {
    uint32_t phase, step;
    uint16_t attenuation, total_level, sustain_level;
    uint8_t rate[4], stage;
    bool keyed;
};

struct fm_channel {
    struct fm_operator op[FM_OPERATORS];
    int16_t history[2], delayed;
    uint8_t algorithm, feedback, pan;
};

struct fm_chip {
    struct fm_channel channels[FM_CHANNELS];
    uint8_t registers[2][256];
    struct fm_pitch pitch;
    uint32_t envelope_clock, envelope_tick;
    uint8_t active_channels;
};

extern const uint16_t fm_log_sine[1024];
extern const int16_t fm_levels[6656];
extern const uint32_t fm_frequency[2048];

void fm_reset(struct fm_chip *fm);
void fm_write(struct fm_chip *fm, unsigned reg, uint8_t value);
void fm_restore(struct fm_chip *fm, const uint8_t registers[2][256],
                const uint8_t keys[FM_CHANNELS], const struct fm_pitch *pitch);
// Render one block per voice. Each output channel starts stride samples
// after the previous one and needs samples + 1 entries for feedback.
void fm_render(struct fm_chip *fm, unsigned samples, unsigned stride, int16_t *output);

#endif
