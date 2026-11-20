#ifndef JENESIS_M68K_CONTEXT_H
#define JENESIS_M68K_CONTEXT_H

typedef struct __attribute__((packed)) {
    unsigned char state_before_pc[0x44];
    unsigned pc;
    unsigned char state_before_status[4];
    unsigned char ccr;
    unsigned char state_before_status_high[4];
    unsigned char status_high;
    unsigned char state_before_pc_base[2];
    unsigned pc_base;
    unsigned char state_before_cycles[0x3c];
    unsigned cycles;
    unsigned extended_flags;
    unsigned page_bits;
    unsigned char pending_irq_level;
    unsigned char irq_pending;
} M68kContext;

extern M68kContext m68k_context;

void set_m68k_interrupt_level(M68kContext *state, int level);
unsigned get_m68k_cycle_counter_field(const M68kContext *state);

#endif
