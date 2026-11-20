/* Decode one SN76489 latch or data byte and update the selected register. */
#define PSG_ORDER_NOISE_STORES
#include "arm7_psg_registers.h"

void write_psg_register_byte(int data)
{
    if (data & 0x80) {
        psg_single_write_state.latched_register = (data >> 4) & 7;
        psg_single_write_state.registers[psg_single_write_state.latched_register] =
            (psg_single_write_state.registers[psg_single_write_state.latched_register] & 0x3f0) | (data & 15);
    } else if (!(psg_single_write_state.latched_register & 1) &&
               psg_single_write_state.latched_register < 5) {
        psg_single_write_state.registers[psg_single_write_state.latched_register] =
            (psg_single_write_state.registers[psg_single_write_state.latched_register] & 15) | ((data & 0x3f) << 4);
    } else {
        psg_single_write_state.registers[psg_single_write_state.latched_register] = data & 15;
    }
    switch (psg_single_write_state.latched_register) {
    case 0:
    case 2:
    case 4:
        if (!psg_single_write_state.registers[psg_single_write_state.latched_register])
            psg_single_write_state.registers[psg_single_write_state.latched_register] = 1;
        break;
    case 6:
        /* This entry updates the period before reseeding noise. */
        psg_single_write_state.noise_period = 16u << (psg_single_write_state.registers[6] & 3);
        psg_single_write_state.noise_shift_register = 0x8000;
        break;
    }
}
