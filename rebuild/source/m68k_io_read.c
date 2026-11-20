/* Decode the 68000 bus addresses for the VDP, Genesis I/O and cartridge mapper. */
extern unsigned char sram_control;
extern unsigned ssf2_mapper_pages[8];

unsigned read_genesis_io_register_byte(unsigned offset);
unsigned read_z80_bus_request_status(void);
unsigned read_default_m68k_bus_byte(unsigned address);

unsigned read_vdp_byte_port(unsigned port);
unsigned return_zero_for_unhandled_z80_vdp_access(unsigned address);

unsigned read_vdp_byte_from_m68k(unsigned address)
{
    if ((address & 0xe700e0) == 0xc00000)
        return read_vdp_byte_port(address & 0x1f);
    return return_zero_for_unhandled_z80_vdp_access(address);
}

unsigned read_m68k_io_or_mapper_byte(unsigned address)
{
    if (address < 0xa10020)
        return read_genesis_io_register_byte(address & 0xff) & 0xff;
    if (address == 0xa11100)
        return read_z80_bus_request_status();
    if (address == 0xa130f1)
        return sram_control & 1;
    if (address - 0xa130f3 <= 12)
        return (unsigned char)ssf2_mapper_pages[(address & 0xf) >> 1];
    return read_default_m68k_bus_byte(address);
}
