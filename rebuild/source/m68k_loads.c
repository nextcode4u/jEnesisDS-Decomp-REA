/* Read through the 68000 page tables and the contiguous cartridge backing store. */
typedef unsigned M68kRead(unsigned address);
typedef unsigned short __attribute__((may_alias)) M68kWord;

extern M68kRead *m68k_byte_read_handlers[256];
extern M68kRead *m68k_word_read_handlers[256];
extern unsigned char cartridge_rom_bytes[];

unsigned read_m68k_byte_from_page(unsigned address)
{
    address &= 0xffffff;
    return m68k_byte_read_handlers[address >> 16](address);
}

unsigned read_m68k_word_from_page(unsigned address)
{
    address &= 0xffffff;
    return m68k_word_read_handlers[address >> 16](address);
}

unsigned read_m68k_long_from_page(unsigned address)
{
    address &= 0xffffff;
    unsigned page = address >> 16;
    unsigned upper = m68k_word_read_handlers[page](address);
    unsigned lower = m68k_word_read_handlers[page](address + 2);
    return lower | upper << 16;
}

unsigned read_m68k_byte_rom_or_page(unsigned address)
{
    address &= 0xffffff;
    if (!(address & 0xc00000))
        return cartridge_rom_bytes[address ^ 1];
    return m68k_byte_read_handlers[address >> 16](address);
}

unsigned read_m68k_word_rom_or_page(unsigned address)
{
    address &= 0xffffff;
    if (!(address & 0xc00000))
        return *(const M68kWord *)(cartridge_rom_bytes + address);
    return m68k_word_read_handlers[address >> 16](address);
}
