/* Service 68000 writes to Genesis I/O, the Z80 window, and cartridge mapper. */
extern unsigned char z80_bus_blocked_for_m68k;
extern unsigned char sram_control;
extern unsigned ssf2_mapper_pages[8];
extern unsigned char tmss_register_latch;

void write_genesis_io_register_word(unsigned offset, unsigned value);
void write_genesis_io_register_byte(unsigned offset, unsigned value);
void set_z80_bus_request(unsigned asserted);
void set_z80_reset_line(unsigned released);
void write_z80_work_ram_byte(unsigned offset, unsigned value);
void queue_ym2612_register_or_dac_write(unsigned port, unsigned value);
void shift_z80_cartridge_bank_latch(unsigned bit);
void update_cartridge_sram_mapping(unsigned enabled);

void m68k_write_io_or_mapper_word(unsigned address, unsigned value)
{
    if (address < 0xa10020)
        write_genesis_io_register_word(address & 0x1f, value);
    else if (address == 0xa11100)
        set_z80_bus_request((value >> 8) & 1);
    else if (address == 0xa11200)
        set_z80_reset_line((value >> 8) & 1);
}

void m68k_write_z80_window_word(unsigned address, unsigned value)
{
    if (z80_bus_blocked_for_m68k != 1) {
        switch (address & 0x6000) {
        case 0:
        case 0x2000:
            write_z80_work_ram_byte(address & 0x1fff, value >> 8);
            break;
        case 0x4000:
            queue_ym2612_register_or_dac_write(address & 3, value >> 8);
            break;
        case 0x6000:
            if ((address & 0x7f00) == 0x6000)
                shift_z80_cartridge_bank_latch((value >> 8) & 1);
            break;
        }
    }
}

void m68k_write_z80_window_byte(unsigned address, unsigned value)
{
    if (z80_bus_blocked_for_m68k == 0) {
        switch (address & 0x6000) {
        case 0:
        case 0x2000:
            write_z80_work_ram_byte(address & 0x1fff, value);
            break;
        case 0x4000:
            queue_ym2612_register_or_dac_write(address & 3, value);
            break;
        case 0x6000:
            if ((address & 0xff00) == 0x6000)
                shift_z80_cartridge_bank_latch(value & 1);
            break;
        }
    }
}

void m68k_write_io_or_mapper_byte(unsigned address, unsigned value)
{
    if (address < 0xa10020) {
        write_genesis_io_register_byte(address & 0x1f, value);
    } else if (address == 0xa11100) {
        set_z80_bus_request(value & 1);
    } else if (address == 0xa11200) {
        set_z80_reset_line(value & 1);
    } else if (address == 0xa130f1) {
        sram_control = value & 1;
        update_cartridge_sram_mapping(sram_control);
    } else if (address - 0xa130f3 <= 12) {
        ssf2_mapper_pages[(address & 0xf) >> 1] = value & 0x3f;
    } else if (address == 0xa14101) {
        if (tmss_register_latch == 0) {
            if (!(value & 1))
                ++tmss_register_latch;
        } else if (value & 1) {
            tmss_register_latch = 0;
        }
    }
}
