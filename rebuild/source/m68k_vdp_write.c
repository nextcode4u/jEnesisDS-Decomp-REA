/* Send 68000 VDP writes to video or the PSG, depending on the port. */
void queue_psg_register_write(unsigned value);
void write_vdp_word_port(unsigned port, unsigned value);

void m68k_write_vdp_word(unsigned address, unsigned value)
{
    if (address & 0x10)
        queue_psg_register_write(value & 0xff);
    else
        write_vdp_word_port(address & 0x1f, value);
}

void m68k_write_vdp_byte(unsigned address, unsigned value)
{
    if (address & 0x10)
        queue_psg_register_write(value);
    else
        write_vdp_word_port(address & 0x1f, value | (value << 8));
}
