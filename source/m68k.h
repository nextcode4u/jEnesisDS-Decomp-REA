#ifndef JENESIS_M68K_H
#define JENESIS_M68K_H

#include <stdbool.h>
#include <stdint.h>

struct megadrive;

struct m68k {
    uint32_t d[8];
    uint32_t a[8];
    uint32_t pc;
    uint32_t inactive_sp;
    uint16_t sr;
    uint32_t instruction_address;
    uint16_t opcode;
    bool stopped;
};

void m68k_reset(struct m68k *cpu, struct megadrive *md);
unsigned m68k_run_slice(struct megadrive *md, unsigned cycles, unsigned boundary,
                        unsigned end, bool *long_poll);
unsigned m68k_step(struct m68k *cpu, struct megadrive *md);
unsigned m68k_skip_idle(struct m68k *cpu, struct megadrive *md, unsigned budget);
unsigned m68k_interrupt(struct m68k *cpu, struct megadrive *md, unsigned level);

#endif
