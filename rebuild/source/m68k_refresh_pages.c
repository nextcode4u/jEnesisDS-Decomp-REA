/* Refresh the cartridge portion of the 68000 read tables after a mapper change. */
typedef unsigned (*M68kBusHandler)(unsigned address);

extern M68kBusHandler m68k_byte_read_handlers[256];
extern M68kBusHandler m68k_word_read_handlers[256];

M68kBusHandler select_m68k_byte_read_handler(unsigned page);
M68kBusHandler select_m68k_word_read_handler(unsigned page);

void refresh_m68k_cartridge_read_pages(void)
{
    M68kBusHandler *read_byte = m68k_byte_read_handlers;
    M68kBusHandler *read_word = m68k_word_read_handlers;
    unsigned page = 0;

    do {
        *read_byte = select_m68k_byte_read_handler(page);
        M68kBusHandler word_handler = select_m68k_word_read_handler(page);
        ++page;
        *read_word = word_handler;
        ++read_word;
        ++read_byte;
    } while (page != 64);
}
