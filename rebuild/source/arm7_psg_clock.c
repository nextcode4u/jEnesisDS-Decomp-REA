/* Configure the ARM7 PSG clock step and reset the channels. */
extern int psg_ticks_per_sample_q12;
extern unsigned psg_ring_samples;

void reset_psg_channel_state(int clock, int legacy_gain, int sample_rate);

void initialize_psg_clock_and_state(int clock, int legacy_gain, int sample_rate, unsigned ring_samples)
{
    /* Convert the PSG clock to the renderer's fixed-point step. */
    psg_ticks_per_sample_q12 = (int)((unsigned)clock << 8) / sample_rate;
    reset_psg_channel_state(clock, legacy_gain, sample_rate);
    psg_ring_samples = ring_samples;
}
