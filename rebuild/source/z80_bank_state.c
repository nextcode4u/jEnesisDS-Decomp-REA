/* Preserve the Z80 cartridge bank latch across a save-state restore. */
extern unsigned z80_cartridge_bank_base;

unsigned get_z80_bank_latch_for_savestate(void)
{
    return z80_cartridge_bank_base;
}

void restore_z80_bank_latch_from_savestate(unsigned bank)
{
    z80_cartridge_bank_base = bank;
}
