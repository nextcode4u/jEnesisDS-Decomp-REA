/* Read the Genesis VDP counters using the current emulated scanline and cycle. */
typedef struct {
    unsigned state_before_line_budget[5];
    unsigned max_counter_cycle;
} FrameTiming;

extern FrameTiming frame_timing;
extern unsigned vdp_line_cycle_position;
extern unsigned char vdp_wide_display_mode;
extern unsigned vdp_scanline;
extern const unsigned char vdp_vertical_counter[];
extern const unsigned char vdp_horizontal_counter_h32[];
extern const unsigned char vdp_horizontal_counter_h40[];

unsigned short read_vdp_horizontal_and_vertical_counters(void)
{
    unsigned cycles = frame_timing.max_counter_cycle;
    if (vdp_line_cycle_position <= cycles)
        cycles = vdp_line_cycle_position;

    unsigned vertical = vdp_vertical_counter[vdp_scanline];
    unsigned horizontal;
    if (vdp_wide_display_mode)
        horizontal = vdp_horizontal_counter_h40[cycles];
    else
        horizontal = vdp_horizontal_counter_h32[cycles];
    return horizontal | vertical << 8;
}
