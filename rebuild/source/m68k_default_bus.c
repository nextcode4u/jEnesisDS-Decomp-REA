/* Return the default values on unmapped 68000 and Z80 bus accesses. */
__attribute__((noinline))
unsigned read_default_m68k_bus_byte(unsigned address)
{
    return address & 1 ? 0x4e : 0x71;
}

unsigned default_m68k_byte_read_entry(unsigned address)
{
    return read_default_m68k_bus_byte(address);
}

__attribute__((noinline))
unsigned read_default_m68k_bus_word(unsigned unmapped)
{
    return unmapped ? 0x4e00 : 0x4e71;
}

unsigned default_m68k_word_read_entry(void)
{
    return read_default_m68k_bus_word(1);
}

unsigned return_zero_for_unhandled_z80_vdp_access(unsigned address)
{
    return 0;
}

void ignore_unmapped_m68k_byte_write(void)
{
}

void ignore_unmapped_m68k_word_write(void)
{
}
