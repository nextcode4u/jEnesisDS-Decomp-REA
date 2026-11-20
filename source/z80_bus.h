#ifndef JENESIS_Z80_BUS_H
#define JENESIS_Z80_BUS_H

#include <stdint.h>

struct megadrive;

void genesis_z80_reset(struct megadrive *md);
void genesis_z80_bind(struct megadrive *md);
void genesis_z80_sync(struct megadrive *md, unsigned m68k_cycle);
void genesis_z80_vblank(struct megadrive *md, unsigned m68k_cycle);
void megadrive_ym_advance(struct megadrive *md, unsigned master_clocks);
uint8_t megadrive_ym_status(const struct megadrive *md);
void megadrive_ym_write(struct megadrive *md, unsigned port, uint8_t data);

#endif
