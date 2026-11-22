#ifndef JENESIS_DAC_H
#define JENESIS_DAC_H

#include "fm.h"
#include "psg.h"

#include <stdbool.h>
#include <stdint.h>

enum { DAC_PCM_CAPACITY = 564, DAC_TRANSFER_SLOTS = 4, FM_FRAME_WRITES = 512 };

struct dac_sample {
    int8_t left, right;
};

struct fm_write_event {
    uint32_t sample : 10;
    uint32_t reg : 9;
    uint32_t value : 8;
};

_Static_assert(sizeof(struct fm_write_event) == 4, "FM event must fit in one IPC word");
_Static_assert(DAC_PCM_CAPACITY <= (1U << 10), "DAC frame must fit the FM sample index");

// Both processors communicate through aligned buffers in main RAM.
struct dac_frame {
    uint16_t count, generation, sequence, fm_count;
    uint8_t slot;
    bool fm_overflow, dac_audible;
    uint16_t psg_registers[PSG_REGISTERS];
    uint8_t fm_registers[2][256], fm_keys[FM_CHANNELS];
    struct fm_pitch fm_pitch;
    struct dac_sample samples[DAC_PCM_CAPACITY];
    struct fm_write_event fm_writes[FM_FRAME_WRITES];
} __attribute__((aligned(32)));

struct dac_capture {
    struct dac_frame *frame;
    unsigned position;
};

struct megadrive;
void dac_begin(struct megadrive *md, struct dac_frame *frame);
void dac_write_sample(struct megadrive *md, uint8_t sample, unsigned cycle);
void dac_sync(struct megadrive *md, unsigned cycle);
void capture_fm_write(struct megadrive *md, unsigned reg, uint8_t value, unsigned cycle);
void dac_end(struct megadrive *md);

#endif
