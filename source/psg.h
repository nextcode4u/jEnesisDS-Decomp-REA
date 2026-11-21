#ifndef JENESIS_PSG_H
#define JENESIS_PSG_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

enum { PSG_RATE = 27563, PSG_REGISTERS = 8 };

struct psg_message {
    uint16_t registers[PSG_REGISTERS];
    uint16_t generation;
    uint8_t enabled;
    uint8_t pal;
};

struct psg {
    uint16_t registers[PSG_REGISTERS];
    uint32_t clock_phase;
    int16_t counter[4];
    uint16_t noise;
    bool positive[3];
    bool pal;
};

void psg_reset(struct psg *psg, bool pal);
void psg_update(struct psg *psg, const uint16_t registers[PSG_REGISTERS]);
void psg_render(struct psg *psg, int16_t *output, size_t count);

#endif
