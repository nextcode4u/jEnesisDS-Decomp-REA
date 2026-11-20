/* Install dispatch entries for each 64 KiB page of the 68000 bus. */
typedef unsigned M68kRead(unsigned address);
typedef void M68kWrite(unsigned address, unsigned value);

extern M68kRead *m68k_byte_read_handlers[256];
extern M68kRead *m68k_word_read_handlers[256];
extern M68kWrite *m68k_byte_write_handlers[256];
extern M68kWrite *m68k_word_write_handlers[256];

M68kRead *select_m68k_byte_read_handler(unsigned page);
M68kRead *select_m68k_word_read_handler(unsigned page);

M68kWrite m68k_write_cartridge_byte;
M68kWrite m68k_write_z80_window_byte;
M68kWrite m68k_write_io_or_mapper_byte;
M68kWrite m68k_write_vdp_byte;
M68kWrite m68k_write_work_ram_byte;
M68kWrite ignore_m68k_unmapped_byte_page_write;

M68kWrite *select_m68k_byte_write_handler(unsigned page)
{
    page &= 0xffffff;
    switch ((page >> 4) & 0xf) {
    case 0:
    case 1:
    case 2:
    case 3:
        return m68k_write_cartridge_byte;
    case 10:
        if ((page & 0xf) == 0)
            return m68k_write_z80_window_byte;
        if ((page & 0xf) == 1)
            return m68k_write_io_or_mapper_byte;
        return ignore_m68k_unmapped_byte_page_write;
    case 12:
    case 13:
        return m68k_write_vdp_byte;
    case 14:
    case 15:
        return m68k_write_work_ram_byte;
    default:
        return ignore_m68k_unmapped_byte_page_write;
    }
}

M68kWrite m68k_write_cartridge_word;
M68kWrite m68k_write_z80_window_word;
M68kWrite m68k_write_io_or_mapper_word;
M68kWrite m68k_write_vdp_word;
M68kWrite m68k_write_work_ram_word;
M68kWrite ignore_m68k_unmapped_word_page_write;

M68kWrite *select_m68k_word_write_handler(unsigned page)
{

    switch ((page >> 4) & 0xf) {
    case 0:
    case 1:
    case 2:
    case 3:
        return m68k_write_cartridge_word;
    case 10:
        if ((page & 0xf) == 0)
            return m68k_write_z80_window_word;
        if ((page & 0xf) == 1)
            return m68k_write_io_or_mapper_word;
        return ignore_m68k_unmapped_word_page_write;
    case 12:
    case 13:
        return m68k_write_vdp_word;
    case 14:
    case 15:
        return m68k_write_work_ram_word;
    default:
        return ignore_m68k_unmapped_word_page_write;
    }
}

void initialize_m68k_bus_dispatch_tables(void)
{
    unsigned page;
    for (page = 0; page < 256; ++page) {
        m68k_byte_read_handlers[page] = select_m68k_byte_read_handler(page);
        m68k_word_read_handlers[page] = select_m68k_word_read_handler(page);
        m68k_byte_write_handlers[page] = select_m68k_byte_write_handler(page);
        m68k_word_write_handlers[page] = select_m68k_word_write_handler(page);
    }
}
