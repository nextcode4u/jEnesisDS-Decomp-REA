#ifndef JENESIS_MEGADRIVE_H
#define JENESIS_MEGADRIVE_H

#include "m68k.h"

#include <stddef.h>

struct cartridge;

enum genesis_region {
    GENESIS_REGION_AUTO,
    GENESIS_REGION_USA,
    GENESIS_REGION_JAPAN,
    GENESIS_REGION_EUROPE,
    GENESIS_REGION_COUNT,
};

struct megadrive {
    struct m68k cpu;
    const uint8_t *rom;
    size_t rom_size;
    uint8_t ram[0x10000];
    uint16_t cram[64];
    uint8_t vdp_registers[24];
    uint16_t vdp_address;
    uint8_t vdp_code;
    bool vdp_command_pending;
    uint8_t version;
    unsigned frame_cycles;
    unsigned cycle_carry;
};

void megadrive_reset(struct megadrive *md, const struct cartridge *cart, enum genesis_region region);
void megadrive_run_frame(struct megadrive *md);
uint16_t megadrive_backdrop(const struct megadrive *md);
uint8_t megadrive_read_byte(const struct megadrive *md, uint32_t address);
bool megadrive_write_byte(struct megadrive *md, uint32_t address, uint8_t value);
bool megadrive_write_word(struct megadrive *md, uint32_t address, uint16_t value);

#endif
