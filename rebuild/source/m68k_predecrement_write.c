/* Write the low word first for a 68000 longword predecrement access. */
typedef void M68kWrite(unsigned address, unsigned value);

extern M68kWrite *m68k_word_write_handlers[256];

void write_m68k_bus_long_for_predecrement(unsigned address, unsigned value)
{
    address &= 0xffffff;
    unsigned page = address >> 16;
    m68k_word_write_handlers[page](address + 2, value & 0xffff);
    m68k_word_write_handlers[page](address, value >> 16);
}
