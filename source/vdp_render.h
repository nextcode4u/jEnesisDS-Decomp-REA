#ifndef JENESIS_VDP_RENDER_H
#define JENESIS_VDP_RENDER_H

#include <stdint.h>

struct megadrive;

enum { VDP_VIEW_WIDTH = 256, VDP_VIEW_HEIGHT = 192 };

static inline unsigned vdp_hscroll_line_mask(const uint8_t *registers)
{
    static const unsigned masks[] = {0, 7, ~7U, ~0U};
    return masks[registers[11] & 3];
}

static inline unsigned vdp_hscroll_address(const uint8_t *registers, unsigned y)
{
    return ((registers[13] & 0x3f) << 10) + (y & vdp_hscroll_line_mask(registers)) * 4;
}

/* Two palette indices per halfword, ready for the DS bitmap BG. */
void vdp_render_frame(const struct megadrive *md, uint16_t *pixels);
uint16_t vdp_ds_color(uint16_t cram);

#endif
