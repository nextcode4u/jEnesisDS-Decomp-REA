#ifndef JENESIS_ARM7_PSG_REGISTERS_H
#define JENESIS_ARM7_PSG_REGISTERS_H

/* The single-write and batch entries use different noise-store ordering. */
#ifdef PSG_ORDER_NOISE_STORES
#define PSG_NOISE_FIELD volatile
#else
#define PSG_NOISE_FIELD
#endif

typedef struct {
    int ticks_per_sample_q12;
    int fractional_ticks;
    int elapsed_ticks;
    int reserved;
    int latched_register;
    PSG_NOISE_FIELD unsigned noise_shift_register;
    PSG_NOISE_FIELD unsigned noise_period;
    unsigned registers[8];
} PsgWriteState;

#undef PSG_NOISE_FIELD

#ifdef PSG_ORDER_NOISE_STORES
extern PsgWriteState psg_single_write_state;
#else
extern PsgWriteState psg;
#endif

#endif
