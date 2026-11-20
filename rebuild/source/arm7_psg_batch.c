/* Apply a sequence of PSG latch and data bytes in queue order. */
#include "arm7_psg_registers.h"

static inline void write_psg(unsigned data)
{
    /* Keep the data-byte path as the fall-through in the release layout. */
    if (__builtin_expect(!(data & 0x80), 1)) {
        if (!(psg.latched_register & 1) && psg.latched_register < 5) {
            psg.registers[psg.latched_register] =
                (psg.registers[psg.latched_register] & 15) | ((data & 0x3f) << 4);
        } else {
            psg.registers[psg.latched_register] = data & 15;
        }
    } else {
        psg.latched_register = (data >> 4) & 7;
        psg.registers[psg.latched_register] =
                (psg.registers[psg.latched_register] & 0x3f0) | (data & 15);
    }
    switch (psg.latched_register) {
    case 0:
    case 2:
    case 4:
        if (!psg.registers[psg.latched_register])
            psg.registers[psg.latched_register] = 1;
        break;
    case 6:
        psg.noise_shift_register = 0x8000;
        psg.noise_period = 16u << (psg.registers[6] & 3);
        break;
    }
}

void apply_psg_latch_and_data_bytes(const unsigned char *bytes, unsigned count)
{
    unsigned i;
    for (i = 0; i < count; ++i)
        write_psg(bytes[i]);
}
