/* Cartridge-bank access and serialization for the Z80. */
extern unsigned z80_cartridge_bank_base;
extern unsigned char cartridge_rom_bytes[];

unsigned get_z80_bank_latch_for_savestate(void)
{
    return z80_cartridge_bank_base;
}

void restore_z80_bank_latch_from_savestate(unsigned bank)
{
    z80_cartridge_bank_base = bank;
}

unsigned read_z80_banked_cartridge_byte(unsigned address)
{
    /* The cartridge buffer stores adjacent bytes in 68000 word order. */
    return cartridge_rom_bytes[((z80_cartridge_bank_base | address) & 0x3fffff) ^ 1];
}
