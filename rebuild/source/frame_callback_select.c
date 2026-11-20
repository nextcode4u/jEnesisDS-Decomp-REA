/* Select the frame driver using the VDP interrupt-enable bit. */
#include "frame_callbacks.h"

extern unsigned char vdp_h_interrupt_enabled;

void run_frame_with_current_h_int(void)
{
    if (vdp_h_interrupt_enabled == 0) {
        frame_timing.run_m68k_budget = run_m68k_cycles;
        run_frame_h_int_off();
    } else {
        frame_timing.run_m68k_budget = update_vdp_timing_and_run_m68k_configured;
        run_frame_h_int_on();
    }
}
