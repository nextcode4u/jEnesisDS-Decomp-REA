#include "../fm.h"

#include <string.h>

enum { ATTACK, DECAY, SUSTAIN, RELEASE, SILENT };

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

static void update_channel(struct fm_chip *fm, unsigned index)
{
    unsigned bank = index / 3, channel = index % 3;
    const uint8_t *reg = fm->registers[bank];
    struct fm_channel *ch = &fm->channels[index];
    ch->algorithm = reg[0xb0 + channel] & 7;
    ch->feedback = (reg[0xb0 + channel] >> 3) & 7;
    ch->pan = reg[0xb4 + channel] >> 6;
    ch->am_depth = (reg[0xb4 + channel] >> 4) & 3;
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
        int pitch = (number << block) >> 1;

        static const uint8_t detune_curve[3][32] = {
            { 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 8, 8, 8, 8 },
            { 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 8, 8, 9, 10, 11, 12, 13, 14, 16, 16, 16, 16 },
            { 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 6, 6, 7, 8, 8, 9, 10, 11, 12, 13, 14, 16, 17, 19, 20, 22, 22, 22, 22 },
        };
        unsigned adjustment = detune & 3;
        if (adjustment)
            pitch += (detune & 4 ? -1 : 1) * (int)detune_curve[adjustment - 1][code];
        unsigned phase_step = ((unsigned)pitch & 0x1ffff) * (multiplier ? multiplier * 2 : 1) / 2;
        struct fm_operator *op = &ch->op[slot];
        op->step = phase_step * fm->output_clock;
        op->total_level = (reg[0x40 + offset] & 127) * 8;
        unsigned scale = code >> (3 - (reg[0x50 + offset] >> 6));
        op->rate[ATTACK] = rate_with_key_scale((reg[0x50 + offset] & 31) * 2, scale);
        op->rate[DECAY] = rate_with_key_scale((reg[0x60 + offset] & 31) * 2, scale);
        op->rate[SUSTAIN] = rate_with_key_scale((reg[0x70 + offset] & 31) * 2, scale);
        op->rate[RELEASE] = rate_with_key_scale((reg[0x80 + offset] & 15) * 4 + 2, scale);
        op->amplitude_modulation = (reg[0x60 + offset] & 0x80) != 0;
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
            if (op->rate[ATTACK] >= 62) {
                op->attenuation = 0;
                op->stage = DECAY;
            }
        } else if (!on && op->keyed && op->stage != SILENT) {
            op->stage = RELEASE;
        }
        op->keyed = on;
    }
}

void fm_reset(struct fm_chip *fm, bool pal)
{
    memset(fm, 0, sizeof(*fm));
    // Native clock divided by 144, converted to one third of the 28 kHz mixer rate in Q12.
    fm->output_clock = pal ? 23167 : 23378;
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

void fm_restore(struct fm_chip *fm, bool pal, const uint8_t registers[2][256],
                const uint8_t keys[FM_CHANNELS], const struct fm_pitch *pitch)
{
    fm_reset(fm, pal);
    memcpy(fm->registers, registers, sizeof(fm->registers));
    fm->pitch = *pitch;
    for (unsigned index = 0; index < FM_CHANNELS; ++index) {
        update_channel(fm, index);
        key_change(fm, index, keys[index]);
    }
}

static __attribute__((noinline)) void envelope(struct fm_operator *op, unsigned tick, unsigned rate)
{
    static const uint32_t patterns[17] = {
        0x208208, 0x209208, 0x248248, 0x249248, 0x249249, 0x449449,
        0x451451, 0x491491, 0x492492, 0x692692, 0x69a69a, 0x6da6da,
        0x6db6db, 0x8db8db, 0x8e38e3, 0x923923, 0x924924,
    };
    unsigned coarse = rate >> 2;
    unsigned shift = coarse < 11 ? 11 - coarse : 0;
    if (tick & ((1U << shift) - 1))
        return;
    unsigned phase = (tick >> shift) & 7;
    unsigned pattern = rate < 48 ? rate & 3 : rate - 44;
    if (pattern > 16)
        pattern = 16;
    unsigned step = (1U << ((patterns[pattern] >> (phase * 3)) & 7)) >> 1;
    unsigned level = op->attenuation;
    if (op->stage == ATTACK) {
        unsigned decrease = ((level + 1) * step + 15) >> 4;
        op->attenuation = decrease < level ? level - decrease : 0;
        if (op->attenuation == 0)
            op->stage = DECAY;
    } else {
        level += step;
        op->attenuation = level < 1023 ? level : 1023;
        if (op->stage == DECAY && op->attenuation >= op->sustain_level)
            op->stage = SUSTAIN;
        else if (level >= 1023)
            op->stage = SILENT;
    }
}

static inline __attribute__((always_inline)) int wave(struct fm_operator *op, int modulation, unsigned am, unsigned tick, bool extra_tick)
{
    unsigned stage = op->stage;
    if (stage == SILENT)
        return 0;
    if (tick && op->rate[stage]) {
        envelope(op, tick, op->rate[stage]);
        stage = op->stage;
        if (extra_tick && stage != SILENT && op->rate[stage])
            envelope(op, tick + 1, op->rate[stage]);
    }
    op->phase += op->step;
    unsigned phase = ((op->phase >> 22) + modulation) & 1023;
    unsigned level = (op->total_level + op->attenuation) * 4 + fm_sine[phase & 511];
    if (op->amplitude_modulation)
        level += am * 4;
    unsigned shift = level >> 8;
    if (shift >= 13)
        return 0;
    int value = fm_exponent[level & 255] >> shift;
    return phase & 512 ? -value : value;
}

static int channel_sample(struct fm_chip *fm, unsigned channel, unsigned tick, unsigned am, bool extra_tick)
{
    struct fm_channel *ch = &fm->channels[channel];
    struct fm_operator *op = ch->op;
    if ((op[0].stage == SILENT && op[1].stage == SILENT &&
         op[2].stage == SILENT && op[3].stage == SILENT)) {
        fm->active_channels &= ~(1U << channel);
        return 0;
    }
    static const uint8_t am_shift[] = {7, 3, 1, 0};
    am = am ? am >> am_shift[ch->am_depth] : 0;
    int feedback = ch->feedback ? (ch->history[0] + ch->history[1]) >> (10 - ch->feedback) : 0;
    int a = wave(&op[0], feedback, am, tick, extra_tick);
    ch->history[1] = ch->history[0];
    ch->history[0] = a;
    int b = wave(&op[1], (ch->algorithm == 1 || ch->algorithm == 2 || ch->algorithm == 7) ? 0 : a >> 1, am, tick, extra_tick);
    int c, d;
    switch (ch->algorithm) {
    case 0: c = wave(&op[2], b >> 1, am, tick, extra_tick); d = c; break;
    case 1: c = wave(&op[2], (a + b) >> 1, am, tick, extra_tick); d = c; break;
    case 2: c = wave(&op[2], b >> 1, am, tick, extra_tick); d = a + c; break;
    case 3: c = wave(&op[2], 0, am, tick, extra_tick); d = b + c; break;
    case 4: c = wave(&op[2], 0, am, tick, extra_tick); d = c; break;
    case 5: c = wave(&op[2], a >> 1, am, tick, extra_tick); d = a; break;
    default: c = wave(&op[2], 0, am, tick, extra_tick); d = 0; break;
    }
    int result = wave(&op[3], d >> 1, am, tick, extra_tick);
    if (ch->algorithm >= 4)
        result += b;
    if (ch->algorithm >= 5)
        result += c;
    if (ch->algorithm == 7)
        result += a;
    return result;
}

void fm_sample(struct fm_chip *fm, int *left, int *right)
{
    if (fm->samples_remaining) {
        --fm->samples_remaining;
        *left += fm->previous_left - fm->delta_left * fm->samples_remaining;
        *right += fm->previous_right - fm->delta_right * fm->samples_remaining;
        return;
    }

    unsigned tick = 0;
    bool extra_tick = false;
    fm->envelope_clock += fm->output_clock;
    if (fm->envelope_clock >= 3 * 4096) {
        fm->envelope_clock -= 3 * 4096;
        tick = ++fm->envelope_tick;
        if (fm->envelope_clock >= 3 * 4096) {
            fm->envelope_clock -= 3 * 4096;
            ++fm->envelope_tick;
            extra_tick = true;
        }
    }
    unsigned am = 0;
    if (fm->registers[0][0x22] & 8) {
        static const uint8_t periods[] = {108, 77, 71, 67, 62, 44, 8, 5};
        fm->lfo_clock += fm->output_clock;
        unsigned period = periods[fm->registers[0][0x22] & 7] * 4096;
        if (fm->lfo_clock >= period) {
            fm->lfo_clock -= period;
            ++fm->lfo_phase;
        }
        unsigned triangle = fm->lfo_phase & 63;
        am = ((fm->lfo_phase & 64) ? triangle : 63 - triangle) * 2;
    }
    unsigned channels = fm->registers[0][0x2b] & 0x80 ? 5 : FM_CHANNELS;
    int l = 0, r = 0;
    for (unsigned i = 0, active = fm->active_channels; active; ++i, active >>= 1) {
        if (!(active & 1))
            continue;
        int sample = channel_sample(fm, i, tick, am, extra_tick);
        if (i >= channels)
            continue;
        unsigned pan = fm->channels[i].pan;
        if (pan & 2)
            l += sample;
        if (pan & 1)
            r += sample;
    }
    // Interpolate two samples between consecutive FM outputs.
    l /= 4;
    r /= 4;
    fm->delta_left = (l - fm->previous_left) / 3;
    fm->delta_right = (r - fm->previous_right) / 3;
    *left += fm->previous_left + fm->delta_left;
    *right += fm->previous_right + fm->delta_right;
    fm->previous_left = l;
    fm->previous_right = r;
    fm->samples_remaining = 2;
}
