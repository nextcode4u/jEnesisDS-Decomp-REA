#include "vdp_render.h"
#include "megadrive.h"

#include <string.h>

struct raster {
    uint8_t color[VDP_VIEW_WIDTH];
    uint8_t priority[VDP_VIEW_WIDTH];
};

struct sprite {
    int x, y;
    unsigned width, height;
    uint16_t attributes;
};

uint16_t vdp_ds_color(uint16_t cram)
{
    // jEnesisDS expands each Genesis channel to DS levels 0, 4, ..., 28.
    return ((cram & 0x00e) << 1) | ((cram & 0x0e0) << 2) | ((cram & 0xe00) << 3);
}

static uint16_t vram_word(const struct megadrive *md, unsigned address)
{
    return (md->vram[(uint16_t)address] << 8) | md->vram[(uint16_t)(address + 1)];
}

static unsigned pattern_pixel(const struct megadrive *md, unsigned pattern, unsigned x, unsigned y,
                              unsigned cell_shift)
{
    unsigned address = (pattern << (cell_shift + 2)) + y * 4 + x / 2;
    uint8_t pair = md->vram[(uint16_t)address];
    return (x & 1) ? pair & 15 : pair >> 4;
}

static void draw_plane_line(const struct megadrive *md, struct raster *line,
                            unsigned screen_x, unsigned screen_y, bool wide, unsigned plane,
                            unsigned cell_shift)
{
    const unsigned cell_height = 1U << cell_shift;
    const uint8_t *regs = md->vdp_registers;
    static const unsigned cells[4] = {32, 64, 32, 128};
    unsigned width = cells[regs[16] & 3];
    unsigned height = cells[(regs[16] >> 4) & 3];
    unsigned base = plane ? (regs[4] & 7) << 13 : (regs[2] & 0x38) << 10;
    unsigned hscroll_base = (regs[13] & 0x3f) << 10;
    unsigned hscroll_mode = regs[11] & 3;
    if (hscroll_mode == 2)
        hscroll_base += (screen_y & ~7U) * 4;
    else if (hscroll_mode == 3)
        hscroll_base += screen_y * 4;
    unsigned hscroll = vram_word(md, hscroll_base + plane * 2) & 0x3ff;
    unsigned window_x = (regs[17] & 0x1f) * 16;
    unsigned window_y = (regs[18] & 0x1f) * 8;
    bool window_row = (regs[18] & 0x80) ? screen_y >= window_y : screen_y < window_y;
    unsigned field_y = cell_shift == 4 ? screen_y * 2 + md->vdp_odd_field : screen_y;
    unsigned window_base = (regs[3] & (wide ? 0x3c : 0x3e)) << 10;
    for (unsigned i = 0; i < VDP_VIEW_WIDTH;) {
        unsigned x = screen_x + i;
        bool in_window_x = (regs[17] & 0x80) ? x >= window_x : x < window_x;
        bool window = plane == 0 && (window_row || in_window_x);
        unsigned scroll_column = (regs[11] & 4) ? x / 16 : 0;
        unsigned px = window ? x : (x - hscroll) & (width * 8 - 1);
        unsigned py = window ? field_y :
            (field_y + md->vsram[scroll_column * 2 + plane]) & (height * cell_height - 1);
        unsigned stride = window ? (wide ? 64 : 32) : width;
        unsigned table = window ? window_base : base;
        uint16_t entry = vram_word(md, table + ((py >> cell_shift) * stride + px / 8) * 2);
        unsigned y = py & (cell_height - 1);
        if (entry & 0x1000)
            y ^= cell_height - 1;
        unsigned pattern = entry & (cell_shift == 4 ? 0x3ff : 0x7ff);
        unsigned flip_x = (entry & 0x0800) ? 7 : 0;
        unsigned palette = (entry >> 9) & 0x30;
        unsigned priority = ((entry & 0x8000) ? 4 : 1) + (plane == 0);
        unsigned count = 8 - (px & 7);
        // Window and vertical column scroll both switch at 16-dot boundaries.
        if (count > 16 - (x & 15))
            count = 16 - (x & 15);
        if (count > VDP_VIEW_WIDTH - i)
            count = VDP_VIEW_WIDTH - i;
        for (unsigned n = 0; n < count; ++n) {
            unsigned color = pattern_pixel(md, pattern, ((px + n) & 7) ^ flip_x, y, cell_shift);
            if (color && priority >= line->priority[i + n]) {
                line->color[i + n] = palette | color;
                line->priority[i + n] = priority;
            }
        }
        i += count;
    }
}

static unsigned load_sprites(const struct megadrive *md, bool wide, unsigned cell_shift,
                             struct sprite *sprites)
{
    unsigned table = (md->vdp_registers[5] & (wide ? 0x7e : 0x7f)) << 9;
    unsigned link = 0, count = 0;
    unsigned limit = wide ? 80 : 64;
    do {
        unsigned address = table + link * 8;
        uint16_t size_link = vram_word(md, address + 2);
        sprites[count++] = (struct sprite){
            .y = (vram_word(md, address) & (cell_shift == 4 ? 0x3ff : 0x1ff)) -
                 (cell_shift == 4 ? 256 : 128),
            .x = (vram_word(md, address + 6) & 0x1ff) - 128,
            .width = ((size_link >> 10) & 3) + 1,
            .height = ((size_link >> 8) & 3) + 1,
            .attributes = vram_word(md, address + 4),
        };
        link = size_link & 0x7f;
    } while (link && link < limit && count < limit);
    return count;
}

static void draw_sprites_line(const struct megadrive *md, struct raster *line,
                              int screen_x, int screen_y, const struct sprite *sprites,
                              unsigned count, bool wide, unsigned cell_shift)
{
    const unsigned cell_height = 1U << cell_shift;
    if (cell_shift == 4)
        screen_y = screen_y * 2 + md->vdp_odd_field;
    bool drawn[VDP_VIEW_WIDTH] = {0};
    unsigned remaining = wide ? 20 : 16;
    for (unsigned i = 0; i < count && remaining; ++i) {
        const struct sprite *sprite = &sprites[i];
        int y = screen_y - sprite->y;
        if (y < 0 || y >= (int)(sprite->height * cell_height))
            continue;
        --remaining;
        uint16_t entry = sprite->attributes;
        if (entry & 0x1000)
            y = sprite->height * cell_height - 1 - y;
        int left = sprite->x - screen_x, width = sprite->width * 8;
        unsigned palette = (entry >> 9) & 0x30;
        unsigned priority = (entry & 0x8000) ? 6 : 3;
        unsigned pattern = entry & (cell_shift == 4 ? 0x3ff : 0x7ff);
        for (int column = 0; column < width; ++column) {
            int destination = left + column;
            if (destination < 0 || destination >= VDP_VIEW_WIDTH || drawn[destination])
                continue;
            unsigned x = (entry & 0x0800) ? width - 1 - column : column;
            unsigned tile = pattern + (x / 8) * sprite->height + ((unsigned)y >> cell_shift);
            unsigned color = pattern_pixel(md, tile, x & 7, (unsigned)y & (cell_height - 1),
                                           cell_shift);
            if (color) {
                drawn[destination] = true;
                if (priority >= line->priority[destination])
                    line->color[destination] = palette | color;
            }
        }
    }
}

void vdp_render_frame(const struct megadrive *md, uint16_t *pixels)
{
    if (!(md->vdp_registers[1] & 0x40)) {
        for (unsigned i = 0; i < VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2; ++i)
            pixels[i] = 0;
        return;
    }
    bool wide = (md->vdp_registers[12] & 1) != 0;
    unsigned screen_x = wide ? 32 : 0;
    unsigned screen_y = (md->vdp_registers[1] & 8) ? 24 : 16;
    // The DS presents one Genesis field at a time. Interlace mode 2 selects
    // alternate rows from double-height tiles in each successive field.
    unsigned cell_shift = (md->vdp_registers[12] & 6) == 6 ? 4 : 3;
    struct sprite sprites[80];
    unsigned count = load_sprites(md, wide, cell_shift, sprites);
    for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y) {
        struct raster line;
        memset(&line, 0, sizeof(line));
        draw_plane_line(md, &line, screen_x, screen_y + y, wide, 1, cell_shift);
        draw_plane_line(md, &line, screen_x, screen_y + y, wide, 0, cell_shift);
        draw_sprites_line(md, &line, screen_x, screen_y + y, sprites, count, wide, cell_shift);
        for (unsigned x = 0; x < VDP_VIEW_WIDTH; x += 2)
            *pixels++ = line.color[x] | (line.color[x + 1] << 8);
    }
}
