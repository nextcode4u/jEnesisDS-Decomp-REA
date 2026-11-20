#ifndef JENESIS_DAC_H
#define JENESIS_DAC_H

#include <stdbool.h>
#include <stdint.h>

enum { DAC_PCM_CAPACITY = 564, DAC_TRANSFER_SLOTS = 3 };

struct dac_sample {
    int8_t left, right;
};

// Both processors communicate through aligned buffers in main RAM.
struct dac_frame {
    uint16_t count, generation;
    uint8_t slot;
    struct dac_sample samples[DAC_PCM_CAPACITY];
} __attribute__((aligned(32)));

struct dac_capture {
    struct dac_frame *frame;
    unsigned position;
};

struct megadrive;
void dac_begin(struct megadrive *md, struct dac_frame *frame);
void dac_sync(struct megadrive *md, unsigned cycle);
void dac_end(struct megadrive *md);

#endif
