/* Clear work RAM and restore the initial cartridge mapper and Z80 bus state. */
#include <string.h>

extern unsigned char genesis_work_ram_bytes[];
extern volatile unsigned z80_cartridge_bank_base;
extern volatile unsigned char sram_control;
extern volatile unsigned cartridge_mapper_reset_word;
extern volatile unsigned char z80_reset_released;
extern volatile unsigned char z80_bus_request_asserted;
extern volatile unsigned char z80_bus_blocked_for_m68k;
extern unsigned char use_ssf2_mapper;

void initialize_m68k_bus_dispatch_tables(void);

void clear_work_ram_and_bus_state(void)
{
    memset(genesis_work_ram_bytes, 0, 0x10000);
    z80_cartridge_bank_base = 0;
    sram_control = 1;
    cartridge_mapper_reset_word = 0;
    z80_reset_released = 0;
    z80_bus_request_asserted = 0;
    z80_bus_blocked_for_m68k = 1;
}

void reset_bus_tables_work_ram_and_z80_bus_lines(void)
{
    use_ssf2_mapper = 0;
    initialize_m68k_bus_dispatch_tables();
    clear_work_ram_and_bus_state();
}
