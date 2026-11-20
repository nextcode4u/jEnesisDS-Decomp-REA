/* Account for Z80 cycles and execute batches while the Genesis bus is released. */
typedef struct Z80Context Z80Context;

typedef struct {
    unsigned state_before_scheduler_check[42];
    volatile unsigned check_scheduler;
} FrameTiming;

extern FrameTiming frame_timing;
extern Z80Context z80_context;
extern unsigned long long z80_scheduled_cycles;
extern unsigned long long z80_accounted_cycles;
extern unsigned emulator_option_flags;
extern unsigned char z80_reset_released;
extern unsigned char z80_bus_request_asserted;

void run_z80_cycle_budget(Z80Context *state, unsigned cycles);

static inline void run_if_bus_released(unsigned cycles)
{
    if (!(emulator_option_flags & 2) && z80_reset_released == 1 && !z80_bus_request_asserted)
        run_z80_cycle_budget(&z80_context, cycles);
}

static inline void account_for_z80_cycles(unsigned cycles)
{
    /* The execution engine takes a maximum budget of 0x3fff cycles. */
    while (cycles > 0x3fff) {
        cycles -= 0x3fff;
        run_if_bus_released(0x3fff);
    }
    if (cycles)
        run_if_bus_released(cycles);
    z80_accounted_cycles = z80_scheduled_cycles;
    frame_timing.check_scheduler = 0;
}

void run_remaining_z80_cycles(void)
{
    unsigned cycles = (unsigned)z80_scheduled_cycles - (unsigned)z80_accounted_cycles;
    account_for_z80_cycles(cycles);
}

void accrue_z80_cycles_for_scanline(void)
{
    z80_scheduled_cycles += 0xe3;
    unsigned cycles = (unsigned)z80_scheduled_cycles - (unsigned)z80_accounted_cycles;
    unsigned need_check = frame_timing.check_scheduler;
    if (cycles >= 0x3fff || need_check)
        account_for_z80_cycles(cycles);
}

void run_z80_if_enabled_and_bus_released(unsigned cycles)
{
    run_if_bus_released(cycles);
}
