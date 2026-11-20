/* Install frame, viewport and 68000 timing callbacks from the options. */
#include "frame_callbacks.h"

extern unsigned emulator_option_flags;

void update_display_offset_for_current_viewport(void);
void mark_background_tile_cache_for_refresh(unsigned plane);
void select_vdp_scanline_render_callback(void);
void invalidate_viewport_mode_cache(void);

void configure_frame_timing_callbacks(void)
{
    frame_timing.update_display_offset = update_display_offset_for_current_viewport;
    mark_background_tile_cache_for_refresh(0);
    mark_background_tile_cache_for_refresh(1);
    select_vdp_scanline_render_callback();
    invalidate_viewport_mode_cache();

    unsigned h_interrupt_mode = (emulator_option_flags >> 12) & 3;
    switch (h_interrupt_mode) {
    case 1:
        frame_timing.run_m68k_budget = update_vdp_timing_and_run_m68k_configured;
        frame_timing.run_frame = run_frame_h_int_on;
        break;
    case 0:
        frame_timing.run_m68k_budget = run_m68k_cycles;
        frame_timing.run_frame = run_frame_h_int_off;
        break;
    case 2:
        frame_timing.run_frame = run_frame_with_current_h_int;
        break;
    }
}
