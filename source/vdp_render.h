#ifndef JENESIS_VDP_RENDER_H
#define JENESIS_VDP_RENDER_H

#include <stdint.h>

struct megadrive;

enum { VDP_VIEW_WIDTH = 256, VDP_VIEW_HEIGHT = 192 };

/* Two palette indices per halfword, ready for the DS bitmap BG. */
void vdp_render_frame(const struct megadrive *md, uint16_t *pixels);
uint16_t vdp_ds_color(uint16_t cram);

#endif
