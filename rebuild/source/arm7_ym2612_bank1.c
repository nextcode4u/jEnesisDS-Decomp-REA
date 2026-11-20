/* Forward the ARM9 register-and-value pairs to the second FM bank. */
void write_ym2612_channel_or_operator_register(unsigned address, unsigned value);

void apply_ym2612_bank1_writes(const unsigned char *writes, unsigned byte_count)
{
    const unsigned char *cursor = writes;
    if (byte_count) {
        do {
            unsigned address = cursor[0] | 0x100;
            unsigned value = cursor[1];
            cursor += 2;
            write_ym2612_channel_or_operator_register(address, value);
        } while ((unsigned)(cursor - writes) < byte_count);
    }
}
