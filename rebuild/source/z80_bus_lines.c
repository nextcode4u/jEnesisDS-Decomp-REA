/* Update the Genesis Z80 bus request and active-low reset. */
typedef struct {
    unsigned reserved[42];
    unsigned check_scheduler;
} FrameTiming;

extern FrameTiming frame_timing;
extern unsigned char z80_bus_request_asserted;
extern unsigned char z80_reset_released;
extern unsigned char z80_bus_blocked_for_m68k;
extern unsigned z80_bus_poll_count;
extern unsigned emulator_option_flags;

void reset_fm_and_clear_queued_sound_writes(void);
void reset_z80_core_state(void);
void run_z80_if_enabled_and_bus_released(unsigned cycles);

void set_z80_reset_line(unsigned released)
{
    released &= 1;
    unsigned blocked = (released & z80_bus_request_asserted) ^ 1;
    frame_timing.check_scheduler = 1;
    z80_bus_blocked_for_m68k = blocked;
    z80_reset_released = released;
    if (!released) {
        reset_fm_and_clear_queued_sound_writes();
        reset_z80_core_state();
    }
    z80_bus_poll_count = 0;
}

void set_z80_bus_request(unsigned asserted)
{
    asserted &= 1;
    unsigned released = z80_reset_released;
    unsigned blocked = (asserted & released) ^ 1;
    frame_timing.check_scheduler = 1;
    z80_bus_blocked_for_m68k = blocked;
    z80_bus_request_asserted = asserted;
    if (!asserted) {
        if (released == 1) {
            if (!(emulator_option_flags & 2))
                run_z80_if_enabled_and_bus_released(asserted + 32);
        }
    }
    z80_bus_poll_count = 0;
}
