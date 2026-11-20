/* Map Z80 byte and little-endian word accesses to RAM and devices. */
extern unsigned char z80_work_ram[];
void write_z80_banked_byte(unsigned address, unsigned value);
void queue_ym2612_register_or_dac_write(unsigned port, unsigned value);
void queue_psg_register_write(unsigned value);
void shift_z80_cartridge_bank_latch(unsigned value);
unsigned read_z80_banked_cartridge_byte(unsigned address);
unsigned read_ym2612_timer_status(void);

void write_z80_mapped_byte(int address, unsigned value)
{
    switch ((address >> 13) & 7) {
    case 0:
    case 1:
        z80_work_ram[address & 0x1fff] = value;
        return;
    case 2:
        queue_ym2612_register_or_dac_write(address & 3, value & 255);
        return;
    case 3:
        switch (address & 0xff00) {
        case 0x6000:
            shift_z80_cartridge_bank_latch(value & 1);
            return;
        case 0x7f00:
            switch (address & 0x1f) {
            case 0x11:
            case 0x13:
            case 0x15:
            case 0x17:
                queue_psg_register_write(value & 255);
            }
        }
        return;
    default:
        write_z80_banked_byte(address & 0x7fff, value);
    }
}

void write_z80_mapped_little_endian_word(int address, unsigned value)
{
    write_z80_mapped_byte(address, value & 255);
    write_z80_mapped_byte(address + 1, (value & 0xff00) >> 8);
}

unsigned read_z80_mapped_byte(int address)
{
    switch ((address >> 13) & 7) {
    case 0:
    case 1:
        return z80_work_ram[address & 0x1fff];
    case 2:
        return read_ym2612_timer_status();
    case 3:
        return 0;
    default:
        return read_z80_banked_cartridge_byte(address & 0x7fff);
    }
}

unsigned read_z80_mapped_little_endian_word(int address)
{
    unsigned low = read_z80_mapped_byte(address);
    unsigned high = read_z80_mapped_byte(address + 1);
    return (low & 255) | high << 8;
}
