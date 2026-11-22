#ifndef JENESIS_VDP_RENDER_H
#define JENESIS_VDP_RENDER_H

#include <stdbool.h>
#include <stdint.h>

struct megadrive;

enum { VDP_VIEW_WIDTH = 256, VDP_VIEW_HEIGHT = 192, VDP_WIDE_WIDTH = 320 };

enum vdp_horizontal_view {
    VDP_VIEW_FIT,
    VDP_VIEW_LEFT,
    VDP_VIEW_CENTER,
    VDP_HORIZONTAL_VIEWS,
};

static inline unsigned vdp_viewport_left(bool wide, enum vdp_horizontal_view view)
{
    return wide && view == VDP_VIEW_CENTER ? (VDP_WIDE_WIDTH - VDP_VIEW_WIDTH) / 2 : 0;
}

static inline unsigned vdp_viewport_top(const uint8_t *registers, bool scale)
{
    return scale ? 0 : (registers[1] & 8) ? 24 : 16;
}

static inline unsigned vdp_viewport_scanline(unsigned y, unsigned top, bool scale)
{
    // jEnesisDS drops the seventh background line in each group.
    return y + top + (scale ? y / 6 : 0);
}

static inline int vdp_viewport_sprite_y(int y, bool scale)
{
    // The original moves the sprite origin and keeps its DS tiles intact.
    return scale && y > 0 ? y - (y + 6) / 7 : y;
}

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
void vdp_render_frame(const struct megadrive *md, uint16_t *pixels, bool vertical_scaling,
                      enum vdp_horizontal_view view);
uint16_t vdp_ds_color(uint16_t cram);

#endif
