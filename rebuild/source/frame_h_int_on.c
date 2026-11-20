/* Run an emulated Genesis frame with per-scanline horizontal interrupt timing. */
typedef struct Z80Context Z80Context;

typedef struct {
    unsigned total_lines;
    unsigned active_lines;
    unsigned frame_count;
    unsigned current_scanline;
    unsigned m68k_active_cycles;
    unsigned m68k_cycles_per_line;
    unsigned z80_cycles_per_line;
    unsigned state_before_vblank[24];
    unsigned vblank_status;
    unsigned hblank_status;
} FrameState;

extern FrameState frame_timing;
extern Z80Context z80_context;
extern void (*record_vdp_scanline_state)(unsigned scanline);

void begin_vdp_frame_and_refresh_backgrounds(void);
void tick_vdp_horizontal_interrupt_counter(unsigned line);
void begin_vdp_vertical_blanking(unsigned line);
void reload_vdp_counter_during_vertical_blanking(unsigned line);
void update_vdp_timing_and_run_m68k_configured(unsigned cycles);
void update_vdp_timing_and_run_m68k_scanline(unsigned cycles);
void accrue_z80_cycles_for_scanline(unsigned line);
void set_or_clear_z80_pending_interrupt_bits(Z80Context *, unsigned bits, int asserted);
void run_remaining_z80_cycles(void);
int submit_arm7_dac_sample_buffer(void);

static inline void run_active_scanline(unsigned line, unsigned m68k_cycles)
{
    tick_vdp_horizontal_interrupt_counter(line);
    frame_timing.hblank_status = 4;
    update_vdp_timing_and_run_m68k_configured(0x22);
    frame_timing.hblank_status = 0;
    record_vdp_scanline_state(line);
    update_vdp_timing_and_run_m68k_scanline(m68k_cycles);
    accrue_z80_cycles_for_scanline(line);
}

void run_frame_h_int_on(void)
{
    begin_vdp_frame_and_refresh_backgrounds();
    unsigned cycles = frame_timing.m68k_active_cycles;
    unsigned active_lines = frame_timing.active_lines;
    unsigned total_lines = frame_timing.total_lines;
    unsigned line = 0;
    run_active_scanline(line, cycles);
    set_or_clear_z80_pending_interrupt_bits(&z80_context, 1, 0);

    for (line = 1; line < active_lines; ++line)
        run_active_scanline(line, cycles);
    begin_vdp_vertical_blanking(line);
    frame_timing.vblank_status = 8;
    frame_timing.hblank_status = 4;
    update_vdp_timing_and_run_m68k_scanline(0x4a);
    set_or_clear_z80_pending_interrupt_bits(&z80_context, 1, 1);
    frame_timing.hblank_status = 0;
    update_vdp_timing_and_run_m68k_scanline(cycles);
    accrue_z80_cycles_for_scanline(line);
    ++line;
    for (; line < total_lines; ++line) {
        reload_vdp_counter_during_vertical_blanking(line);
        frame_timing.hblank_status = 4;
        update_vdp_timing_and_run_m68k_configured(0x22);
        frame_timing.hblank_status = 0;
        update_vdp_timing_and_run_m68k_scanline(cycles);
        accrue_z80_cycles_for_scanline(line);
        frame_timing.hblank_status = 4;
        update_vdp_timing_and_run_m68k_scanline(0x26);
        frame_timing.hblank_status = 0;
    }

    run_remaining_z80_cycles();
    submit_arm7_dac_sample_buffer();
    ++frame_timing.frame_count;
}
