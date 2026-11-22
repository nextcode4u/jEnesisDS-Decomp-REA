#include "../fm.h"

#include <string.h>

enum {
    ATTACK, DECAY, SUSTAIN, RELEASE, SILENT,
    FM_CHIP_CLOCK = 0x750ab5,
    FM_SAMPLE_RATE = 27563,
    FM_CLOCK_DIVIDER = FM_SAMPLE_RATE * 144,
    ENVELOPE_STEP = (uint32_t)((uint64_t)FM_CHIP_CLOCK * 65536 / FM_CLOCK_DIVIDER),
};

static const uint8_t key_code[16] = {
    0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 3, 3, 3, 3, 3, 3,
};

static unsigned rate_with_key_scale(unsigned rate, unsigned scale)
{
    if (rate == 0)
        return 0;
    rate += scale;
    return rate < 63 ? rate : 63;
}

static uint32_t phase_increment(unsigned number)
{
    // The fractional multiplier is in units of 2^-21. For all 11-bit
    // F-numbers this gives the same integer as floor(number * 1963635968 / 248067).
    return 7915U * number + ((1569591U * number) >> 21);
}

static void update_channel(struct fm_chip *fm, unsigned index)
{
    unsigned bank = index / 3, channel = index % 3;
    const uint8_t *reg = fm->registers[bank];
    struct fm_channel *ch = &fm->channels[index];
    ch->algorithm = reg[0xb0 + channel] & 7;
    ch->feedback = (reg[0xb0 + channel] >> 3) & 7;
    ch->pan = reg[0xb4 + channel] >> 6;
    static const uint8_t offsets[] = {0, 8, 4, 12};
    static const uint8_t special_slots[] = {1, 2, 0};

    for (unsigned slot = 0; slot < FM_OPERATORS; ++slot) {
        unsigned frequency = fm->pitch.channel[index];
        if (index == 2 && slot < 3 && (fm->registers[0][0x27] & 0xc0))
            frequency = fm->pitch.special[special_slots[slot]];
        unsigned block = frequency >> 11;
        unsigned number = frequency & 0x7ff;
        unsigned code = block * 4 + key_code[number >> 7];
        unsigned offset = offsets[slot] + channel;
        unsigned detune = reg[0x30 + offset] >> 4 & 7;
        unsigned multiplier = reg[0x30 + offset] & 15;
        int pitch = phase_increment(number) >> (7 - block);

        static const uint8_t detune_curve[3][32] = {
            { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 8, 8, 8, 8 },
            { 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 8, 8, 9, 10, 11, 12, 13, 14, 16, 16, 16, 16 },
            { 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 8, 8, 9, 10, 11, 12, 13, 14, 16, 17, 19, 20, 22, 22, 22, 22 },
        };
        unsigned adjustment = detune & 3;
        if (adjustment)
            pitch += (detune & 4 ? -1 : 1) *
                     (int)(phase_increment(detune_curve[adjustment - 1][code]) >> 6);
        unsigned phase_step = (pitch * (int)(multiplier ? multiplier * 2 : 1)) >> 1;
        struct fm_operator *op = &ch->op[slot];
        op->step = phase_step;
        op->total_level = (reg[0x40 + offset] & 127) * 8;
        unsigned scale = code >> (3 - (reg[0x50 + offset] >> 6));
        op->rate[ATTACK] = rate_with_key_scale((reg[0x50 + offset] & 31) * 2, scale);
        op->rate[DECAY] = rate_with_key_scale((reg[0x60 + offset] & 31) * 2, scale);
        op->rate[SUSTAIN] = rate_with_key_scale((reg[0x70 + offset] & 31) * 2, scale);
        op->rate[RELEASE] = rate_with_key_scale((reg[0x80 + offset] & 15) * 4 + 2, scale);
        unsigned sustain = reg[0x80 + offset] >> 4;
        op->sustain_level = (sustain == 15 ? 31 : sustain) * 32;
    }
}

static void key_change(struct fm_chip *fm, unsigned channel, unsigned keys)
{
    struct fm_channel *ch = &fm->channels[channel];
    if (keys)
        fm->active_channels |= 1U << channel;
    for (unsigned slot = 0; slot < FM_OPERATORS; ++slot) {
        bool on = (keys & (1U << slot)) != 0;
        struct fm_operator *op = &ch->op[slot];
        if (on && !op->keyed) {
            op->phase = 0;
            op->stage = ATTACK;
        } else if (!on && op->keyed && op->stage != SILENT) {
            op->stage = RELEASE;
        }
        op->keyed = on;
    }
}

void fm_reset(struct fm_chip *fm)
{
    memset(fm, 0, sizeof(*fm));
    for (unsigned channel = 0; channel < FM_CHANNELS; ++channel) {
        fm->registers[channel / 3][0xb4 + channel % 3] = 0xc0;
        fm->channels[channel].pan = 3;
        for (unsigned slot = 0; slot < FM_OPERATORS; ++slot) {
            fm->channels[channel].op[slot].stage = SILENT;
            fm->channels[channel].op[slot].attenuation = 1023;
        }
    }
}

void fm_write(struct fm_chip *fm, unsigned reg, uint8_t value)
{
    unsigned bank = reg >> 8;
    unsigned address = reg & 255;
    if (bank > 1)
        return;
    if (reg == 0x28) {
        unsigned channel = value & 3;
        if (channel != 3)
            key_change(fm, channel + ((value & 4) ? 3 : 0), value >> 4);
        return;
    }
    fm->registers[bank][address] = value;

    if (reg == 0x27) {
        update_channel(fm, 2);
        return;
    }
    unsigned channel = address & 3;
    if (channel == 3)
        return;
    unsigned group = address & 0xfc;
    if ((address & 0xf0) == 0xa0) {
        int updated = fm_pitch_write(&fm->pitch, reg, value);
        if (updated >= 0)
            update_channel(fm, updated);
    } else if ((address >= 0x30 && address < 0xa0) || group == 0xb0 || group == 0xb4) {
        update_channel(fm, 3 * bank + channel);
    }
}

void fm_restore(struct fm_chip *fm, const uint8_t registers[2][256],
                const uint8_t keys[FM_CHANNELS], const struct fm_pitch *pitch)
{
    fm_reset(fm);
    memcpy(fm->registers, registers, sizeof(fm->registers));
    fm->pitch = *pitch;
    for (unsigned index = 0; index < FM_CHANNELS; ++index) {
        update_channel(fm, index);
        key_change(fm, index, keys[index]);
    }
}

static const uint32_t rate_patterns[] = {
    0x208208, 0x209208, 0x248248, 0x249248, 0x249249, 0x449449,
    0x451451, 0x491491, 0x492492, 0x692692, 0x69a69a, 0x6da6da,
    0x6db6db, 0x8db8db, 0x8e38e3, 0x923923, 0x924924, 0xb6db6d,
};
static void envelope(struct fm_operator *op, unsigned begin, unsigned end)
{
    unsigned level = op->attenuation;
    unsigned time = begin;
    while (time < end && op->stage != SILENT) {
        unsigned stage = op->stage;
        unsigned rate = op->rate[stage];
        unsigned coarse = rate >> 2;
        unsigned shift = rate && coarse < 11 ? 11 - coarse : 0;
        unsigned pattern = rate < 48 ? rate & 3 : rate - 44;
        if (pattern > 16)
            pattern = 16;
        if (stage == ATTACK && rate >= 62)
            pattern = 17;
        uint32_t step_pattern = rate ? rate_patterns[pattern] : 0;
        unsigned mask = (1U << shift) - 1;
        ++time;
        if (time & mask)
            time = (time + mask) & ~mask;
        if (time > end)
            break;

        if (stage == ATTACK || stage == DECAY) {
            unsigned target = stage == ATTACK ? 0 : op->sustain_level;
            while (time < end && (stage == ATTACK ? level > target : level < target)) {
                unsigned phase = time >> shift & 7;
                unsigned step = (1U << ((step_pattern >> (phase * 3)) & 7)) >> 1;
                if (stage == ATTACK) {
                    unsigned decrease = ((level + 1) * step + 15) >> 4;
                    level = decrease < level ? level - decrease : 0;
                } else {
                    level += step;
                }
                if (stage == ATTACK ? level == 0 : level >= target) {
                    ++time;
                    break;
                }
                time += 1U << shift;
            }
            if (stage == ATTACK ? level == 0 : level >= target)
                op->stage = stage == ATTACK ? DECAY : SUSTAIN;
            if (time >= end)
                break;
        } else {
            for (; time < end && level < 1023; time += 1U << shift) {
                unsigned phase = time >> shift & 7;
                level += (1U << ((step_pattern >> (phase * 3)) & 7)) >> 1;
            }
            if (level >= 1023 && stage == RELEASE)
                op->stage = SILENT;
            break;
        }
    }
    op->attenuation = level < 1023 ? level : 1023;
}

static inline __attribute__((always_inline)) int wave(unsigned phase, unsigned attenuation)
{
    unsigned offset = attenuation + fm_log_sine[phase >> 16 & 1023];
    const uint8_t *samples = (const uint8_t *)fm_levels;
    return offset < sizeof(fm_levels) ? *(const int16_t *)(samples + offset) : 0;
}

static inline int modulation(int sample)
{
    return sample * 32768;
}

static inline __attribute__((always_inline)) void render_algorithm(
    struct fm_channel *restrict ch, int16_t *restrict output, unsigned count, unsigned algorithm)
{
    unsigned a_phase = ch->op[0].phase, b_phase = ch->op[1].phase;
    unsigned c_phase = ch->op[2].phase, d_phase = ch->op[3].phase;
    unsigned a_level = (ch->op[0].total_level + ch->op[0].attenuation) * 16;
    unsigned b_level = (ch->op[1].total_level + ch->op[1].attenuation) * 16;
    unsigned c_level = (ch->op[2].total_level + ch->op[2].attenuation) * 16;
    unsigned d_level = (ch->op[3].total_level + ch->op[3].attenuation) * 16;
    int a = ch->history[0], prior = ch->history[1], delayed = ch->delayed;
    // The original silent-operator loops flush the two feedback samples at
    // the start of a multi-sample block.
    bool a_silent = a_level >= sizeof(fm_levels);
    int last_a = a;
    if (a_silent && count >= 2)
        a = prior = 0;
    const unsigned feedback_shift = ch->feedback ? ch->feedback + 6 : 32;
    // The feedback bits occupy the low byte of the original loop counter.
    // A nonzero feedback setting runs one extra oscillator step.
    const unsigned steps = count + (ch->feedback != 0);
    for (unsigned i = 0; i < steps; ++i) {
        unsigned feedback = feedback_shift < 32 ? (unsigned)(int16_t)(a + prior) << feedback_shift : 0;
        int next_a = wave((a_phase & ~0x8000U) + feedback, a_level);
        int b_input = algorithm == 1 || algorithm == 2 || algorithm == 7 ? 0 : a;
        int b = wave((b_phase & ~0x8000U) + modulation(b_input), b_level);
        int c_input = 0, d_input = 0;
        switch (algorithm) {
        case 0: case 1: c_input = delayed; break;
        case 2: c_input = delayed; d_input = a; break;
        case 3: d_input = delayed; break;
        case 5: c_input = delayed; d_input = a; break;
        default: break;
        }
        if (algorithm <= 3)
            delayed = algorithm == 1 ? b + a : b;
        else if (algorithm == 5)
            delayed = a_silent && count == 1 ? last_a : a;
        int c = wave((c_phase & ~0x8000U) + modulation(c_input), c_level);
        if (algorithm <= 4)
            d_input += c;
        int d = wave((d_phase & ~0x8000U) + modulation(d_input), d_level);
        if (algorithm >= 4)
            d += b;
        if (algorithm >= 5)
            d += c;
        if (algorithm == 7)
            d += a;
        prior = a;
        a = next_a;
        a_phase += ch->op[0].step;
        b_phase += ch->op[1].step;
        c_phase += ch->op[2].step;
        d_phase += ch->op[3].step;
        output[i] = d;
    }
    // With algorithm 2's carrier silent, the original finishes by sampling
    // operator B at its advanced phase for the next block.
    if (algorithm == 2 && d_level >= sizeof(fm_levels))
        delayed = wave(b_phase, b_level);
    ch->history[0] = a;
    ch->history[1] = a_silent && count == 1 ? last_a : prior;
    ch->delayed = delayed;
    ch->op[0].phase = a_phase;
    ch->op[1].phase = b_phase;
    ch->op[2].phase = c_phase;
    ch->op[3].phase = d_phase;
}

static __attribute__((noinline)) void render_channel(struct fm_channel *ch,
                                                      int16_t *output, unsigned samples)
{
    switch (ch->algorithm) {
    case 0: render_algorithm(ch, output, samples, 0); break;
    case 1: render_algorithm(ch, output, samples, 1); break;
    case 2: render_algorithm(ch, output, samples, 2); break;
    case 3: render_algorithm(ch, output, samples, 3); break;
    case 4: render_algorithm(ch, output, samples, 4); break;
    case 5: render_algorithm(ch, output, samples, 5); break;
    case 6: render_algorithm(ch, output, samples, 6); break;
    case 7: render_algorithm(ch, output, samples, 7); break;
    }
}

void fm_render(struct fm_chip *fm, unsigned samples, unsigned stride, int16_t *output)
{
    if (!samples)
        return;
    unsigned begin = fm->envelope_tick;
    unsigned clock = fm->envelope_clock + samples * ENVELOPE_STEP;
    unsigned end = begin + clock / (3 * 65536);
    fm->envelope_tick = end;
    fm->envelope_clock = clock % (3 * 65536);

    for (unsigned channel = 0; channel < FM_CHANNELS; ++channel, output += stride) {
        if (!(fm->active_channels & (1U << channel)) ||
            (channel == 5 && (fm->registers[0][0x2b] & 0x80))) {
            memset(output, 0, samples * sizeof(*output));
            continue;
        }
        struct fm_channel *ch = &fm->channels[channel];
        render_channel(ch, output, samples);
        bool remains_active = false;
        for (unsigned i = 0; i < 4; ++i) {
            envelope(&ch->op[i], begin, end);
            remains_active |= ch->op[i].stage != SILENT;
        }
        if (!remains_active)
            fm->active_channels &= ~(1U << channel);
    }
}
