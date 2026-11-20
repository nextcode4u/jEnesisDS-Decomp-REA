/* ARM9 wrappers for the Genesis 68000 interrupt and cycle state. */
typedef struct {
    unsigned lines_per_frame;
    unsigned reserved;
    unsigned elapsed_frames;
    unsigned fields_before_startup_cycles[2];
    unsigned startup_cycles_per_line;
} FrameTiming;

extern FrameTiming frame_timing;
extern unsigned char m68k_context[];

void set_m68k_interrupt_level(unsigned char *context, int level);
unsigned get_m68k_cycle_counter_field(const unsigned char *context);

unsigned read_m68k_cycle_counter(void)
{
    return get_m68k_cycle_counter_field(m68k_context);
}

unsigned calculate_m68k_cycles_per_frame_line(void)
{
    unsigned cycles;

    if (!frame_timing.elapsed_frames)
        return frame_timing.startup_cycles_per_line;
    cycles = get_m68k_cycle_counter_field(m68k_context);
    return cycles / (frame_timing.lines_per_frame * frame_timing.elapsed_frames);
}
void queue_m68k_interrupt_level(int irq_level)
{
    set_m68k_interrupt_level(m68k_context, irq_level);
}
