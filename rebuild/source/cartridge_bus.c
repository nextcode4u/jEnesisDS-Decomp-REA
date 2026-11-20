/* ARM9 access to cartridge ROM, work RAM, and the Z80 bank latch. */
extern unsigned char cartridge_rom_bytes[];
extern unsigned char genesis_work_ram_bytes[];
extern unsigned z80_cartridge_bank_base;

unsigned char *get_cartridge_rom_buffer(void)
{
    return cartridge_rom_bytes;
}

unsigned char *get_genesis_work_ram_buffer(void)
{
    return genesis_work_ram_bytes;
}

unsigned *get_z80_bank_latch_address(void)
{
    return &z80_cartridge_bank_base;
}

unsigned char *get_vdp_dma_backing_pointer(unsigned address)
{
    unsigned char *source = genesis_work_ram_bytes + (address & 0xffff);

    if (!(address & 0xc00000))
        source = cartridge_rom_bytes + (address & 0xffffff);
    return source;
}
