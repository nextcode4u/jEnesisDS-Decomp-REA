#ifndef JENESIS_VDP_RENDER_H
#define JENESIS_VDP_RENDER_H

#include <stdint.h>

struct megadrive;

enum { VDP_VIEW_WIDTH = 256, VDP_VIEW_HEIGHT = 192 };

static inline unsigned vdp_hscroll_address(const uint8_t *registers, unsigned y)
{
    unsigned address = (registers[13] & 0x3f) << 10;
    switch (registers[11] & 3) {
    case 1: return address + (y & 7) * 4;
    case 2: return address + (y & ~7U) * 4;
    case 3: return address + y * 4;
    default: return address;
    }
}

/* Two palette indices per halfword, ready for the DS bitmap BG. */
void vdp_render_frame(const struct megadrive *md, uint16_t *pixels);
uint16_t vdp_ds_color(uint16_t cram);

#endif
