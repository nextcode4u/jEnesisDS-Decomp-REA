/* Select the backing page for the mapped 68000 instruction fetch pointer. */
#include "m68k_memory_page.h"

volatile M68kMemoryPage *get_m68k_fetch_mapping(unsigned address)
{
    M68kMemoryPage volatile *mapping = &cartridge_mapping;
    if (address & 0xc00000)
        mapping = &genesis_work_ram_mapping;
    return mapping;
}
