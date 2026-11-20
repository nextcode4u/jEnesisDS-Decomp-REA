/* ARM9 entry points for running the 68000 with the current cycle budget. */
#include "m68k_context.h"

void update_vdp_timing(unsigned cycles);
void run_m68k(M68kContext *state, unsigned cycles);

void update_vdp_timing_and_run_m68k_scanline(unsigned cycles)
{
    update_vdp_timing(cycles);
    run_m68k(&m68k_context, cycles);
}

void run_m68k_cycles(unsigned cycles)
{
    run_m68k(&m68k_context, cycles);
}

void update_vdp_timing_and_run_m68k_configured(unsigned cycles)
{
    update_vdp_timing(cycles);
    run_m68k(&m68k_context, cycles);
}
