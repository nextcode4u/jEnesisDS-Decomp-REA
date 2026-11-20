/* Decode the mirrored VDP window before reading a 68000 word. */
unsigned read_vdp_word_port(unsigned port);
unsigned return_zero_for_unhandled_z80_vdp_access(unsigned address);

unsigned read_vdp_word_from_m68k(unsigned address)
{
    if ((address & 0xe700e0) == 0xc00000)
        return read_vdp_word_port(address & 0x1f);
    return return_zero_for_unhandled_z80_vdp_access(address);
}
