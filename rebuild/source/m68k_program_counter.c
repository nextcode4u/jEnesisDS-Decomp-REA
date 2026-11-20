/* Recover the guest PC from the packed live mapping. */
#include "m68k_context.h"

unsigned read_m68k_program_counter(void)
{
    return (m68k_context.pc - m68k_context.pc_base) | m68k_context.page_bits;
}
