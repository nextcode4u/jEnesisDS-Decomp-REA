/* Report whether YM2612 register 0x2b has enabled PCM output. */
typedef struct {
    unsigned char channels_and_registers[0x970];
    unsigned dac_enabled;
} Ym2612State;

extern Ym2612State ym2612_state;

unsigned read_ym2612_dac_enable(void)
{
    return ym2612_state.dac_enabled;
}
