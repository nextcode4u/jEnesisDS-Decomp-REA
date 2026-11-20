/* ARM9 operations on the packed 68000 state. */
#include "m68k_context.h"

void set_m68k_interrupt_level(M68kContext *state, int level)
{
    if (level == 0) {
        state->irq_pending = 0;
        state->pending_irq_level = 0;
    } else {
        state->irq_pending = 1;
        state->pending_irq_level = level;
    }
    state->cycles -= 4;
}

unsigned get_m68k_status_register(const M68kContext *state)
{
    return (state->status_high << 8 & 0xa700) | (state->ccr & 0x1f);
}

unsigned get_m68k_cycle_counter_field(const M68kContext *state)
{
    return state->cycles;
}
