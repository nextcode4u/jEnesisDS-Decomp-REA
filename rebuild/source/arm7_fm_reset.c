/* Reset the YM2612 registers when the audio service restarts. */
void reset_ym2612_registers(void);

void reset_fm_register_state(void)
{
    reset_ym2612_registers();
}
