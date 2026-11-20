#ifndef JENESIS_FRAME_CALLBACKS_H
#define JENESIS_FRAME_CALLBACKS_H

typedef struct {
    unsigned state_before_frame_callbacks[14];
    void (*run_frame)(void);
    void (*update_display_offset)(void);
    void (*run_m68k_budget)(unsigned cycles);
} FrameCallbacks;

extern volatile FrameCallbacks frame_timing;

void run_m68k_cycles(unsigned cycles);
void update_vdp_timing_and_run_m68k_configured(unsigned cycles);
void run_frame_h_int_off(void);
void run_frame_h_int_on(void);
void run_frame_with_current_h_int(void);

#endif
