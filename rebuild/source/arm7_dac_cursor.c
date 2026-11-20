/* Set the resampling step for the DAC bytes collected in the last frame. */
extern unsigned dac_source_index;
extern unsigned dac_source_fraction_q16;
extern unsigned dac_source_step_q16;
extern unsigned dac_staged_byte_count;

void reset_dac_sample_cursor(unsigned output_sample_count)
{
    dac_source_index = 0;
    dac_source_fraction_q16 = 0;
    unsigned step = (dac_staged_byte_count << 16) / output_sample_count;
    dac_staged_byte_count = 0;
    dac_source_step_q16 = step;
}
