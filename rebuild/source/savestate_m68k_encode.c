/* Serialize the mapped 68000 program counter as a guest address. */
#include "m68k_context.h"

void encode_m68k_program_counter_for_savestate(M68kContext *state)
{
    state->pc = (state->pc - state->pc_base) | state->page_bits;
}
