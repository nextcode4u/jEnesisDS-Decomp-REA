/* Direct access to the Z80 work RAM in ARM9 DTCM. */
extern unsigned char z80_work_ram[];

unsigned char *get_z80_work_ram_buffer(void)
{
    return z80_work_ram;
}

unsigned char read_z80_work_ram_byte(unsigned address)
{
    return z80_work_ram[address];
}

void write_z80_work_ram_byte(unsigned address, unsigned char byte)
{
    z80_work_ram[address] = byte;
}
