/* Read handlers and ignored writes used by the 68000 page tables. */

extern unsigned char cartridge_rom_bytes[];

unsigned m68k_read_cartridge_sram_byte(unsigned address)
{
    return 0;
}

unsigned m68k_read_cartridge_byte(unsigned address)
{
    return 0;
}

unsigned m68k_read_cartridge_mapped_byte(unsigned address)
{
    return 0;
}

unsigned m68k_read_work_ram_byte(unsigned address)
{
    return 0;
}

unsigned m68k_read_cartridge_sram_word(unsigned address)
{
    return 0;
}

unsigned m68k_read_cartridge_word(unsigned address)
{
    return *(const unsigned short *)(cartridge_rom_bytes + (address & 0x3ffffe));
}

unsigned m68k_read_cartridge_mapped_word(unsigned address)
{
    return 0;
}

unsigned m68k_read_work_ram_word(unsigned address)
{
    return 0;
}

void ignore_m68k_unmapped_byte_page_write(unsigned address, unsigned value)
{
}

void ignore_m68k_unmapped_word_page_write(unsigned address, unsigned value)
{
}
