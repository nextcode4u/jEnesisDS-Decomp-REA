/* Reset the Genesis CPU, controller, video, and audio state for a loaded cartridge. */
#include "controller_port.h"

#include <nds/bios.h>

typedef struct M68kContext M68kContext;
typedef struct Z80Context Z80Context;

typedef struct {
    unsigned total_lines;
    unsigned active_lines;
    unsigned frame_count;
    unsigned current_scanline;
    unsigned m68k_active_cycles;
    unsigned m68k_cycles_per_line;
    unsigned z80_cycles_per_line;
    unsigned region_version;
    unsigned ntsc;
    unsigned partial_frame;
    unsigned state_before_controllers[2];
    GenesisControllerPort *controller_port_1;
    GenesisControllerPort *controller_port_2;
    unsigned state_before_scheduler[28];
    unsigned check_scheduler;
} FrameState;

extern FrameState frame_timing;
extern M68kContext m68k_context;
extern Z80Context z80_context;
extern unsigned emulator_option_flags;

void reset_m68k_registers_and_load_vectors(M68kContext *);
void reset_z80_cpu_registers_and_latches(Z80Context *);
void reset_bus_tables_work_ram_and_z80_bus_lines(void);
void clear_z80_work_ram(void);
void reset_vdp_memory_and_renderer_state(void);
int request_arm7_audio_stop(void);
void clear_audio_queues_and_reset_or_stop_arm7_audio(int reset_arm7);
int request_arm7_audio_start(void);
void select_vdp_scanline_render_callback(void);

void reset_emulation_for_cartridge(void)
{
    frame_timing.total_lines = frame_timing.ntsc ? 262 : 312;
    frame_timing.active_lines = 224;
    frame_timing.m68k_cycles_per_line = 487;
    frame_timing.z80_cycles_per_line = 227;
    frame_timing.m68k_active_cycles = 413;
    frame_timing.frame_count = 0;
    frame_timing.partial_frame = 0;
    frame_timing.check_scheduler = 0;
    frame_timing.current_scanline = 0;

    reset_m68k_registers_and_load_vectors(&m68k_context);
    reset_z80_cpu_registers_and_latches(&z80_context);

    if (emulator_option_flags & 1) {
        set_controller_six_button_mode(frame_timing.controller_port_1, 1);
        set_controller_six_button_mode(frame_timing.controller_port_2, 1);
    } else {
        set_controller_six_button_mode(frame_timing.controller_port_1, 0);
        set_controller_six_button_mode(frame_timing.controller_port_2, 0);
    }
    reset_genesis_controller_port(frame_timing.controller_port_1);
    reset_genesis_controller_port(frame_timing.controller_port_2);
    reset_bus_tables_work_ram_and_z80_bus_lines();
    clear_z80_work_ram();
    reset_vdp_memory_and_renderer_state();
    request_arm7_audio_stop();
    swiWaitForVBlank();
    swiWaitForVBlank();
    clear_audio_queues_and_reset_or_stop_arm7_audio(1);
    swiWaitForVBlank();
    swiWaitForVBlank();
    request_arm7_audio_start();
    select_vdp_scanline_render_callback();
}
