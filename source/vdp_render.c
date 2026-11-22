#include "vdp_render.h"
#include "megadrive.h"

#include <string.h>

// Keep layer priority and sprite ownership alongside the six-bit palette index.
enum { PIXEL_COLOR = 0x3f, SPRITE_CLAIMED = 0x40, HIGH_PRIORITY = 0x80 };

struct sprite {
    int x, y;
    unsigned width, height;
    uint16_t attributes;
};

enum { MAX_SPRITES_PER_LINE = 20 };

struct sprite_index {
    uint8_t counts[VDP_VIEW_HEIGHT];
    uint8_t indices[VDP_VIEW_HEIGHT][MAX_SPRITES_PER_LINE];
};

uint16_t vdp_ds_color(uint16_t cram)
{
    // jEnesisDS expands each Genesis channel to DS levels 0, 4, ..., 28.
    return ((cram & 0x00e) << 1) | ((cram & 0x0e0) << 2) | ((cram & 0xe00) << 3);
}

static uint16_t vram_word(const struct megadrive *md, unsigned address)
{
    return (md->memory->vram[(uint16_t)address] << 8) | md->memory->vram[(uint16_t)(address + 1)];
}

static uint32_t pattern_row(const struct megadrive *md, unsigned address)
{
    const uint8_t *p = md->memory->vram + (uint16_t)address;
    uint32_t row;
    memcpy(&row, __builtin_assume_aligned(p, 4), sizeof(row));
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    row = __builtin_bswap32(row);
#endif
    return row;
}

static void draw_plane_span(const struct megadrive *md, uint8_t *line,
                                unsigned length, unsigned px, unsigned py,
                                unsigned stride, unsigned base, unsigned cell_shift,
                                bool foreground)
{
    const unsigned cell_height = 1U << cell_shift;
    const unsigned row_address = base + (py >> cell_shift) * stride * 2;
    const unsigned tile_mask = (0x800 >> (cell_shift - 3)) - 1;
    const unsigned tile_row = (py & (cell_height - 1)) * 4;
    unsigned drawn = 0;
    while (drawn < length) {
        unsigned offset = px & 7;
        unsigned count = 8 - offset;
        if (count > length - drawn)
            count = length - drawn;
        uint16_t entry = vram_word(md, row_address + ((px >> 3) & (stride - 1)) * 2);
        unsigned address = (entry & tile_mask) << (cell_shift + 2);
        address += (entry & 0x1000) ? (cell_height - 1) * 4 - tile_row : tile_row;
        uint32_t row = pattern_row(md, address);
        if (row) {
            if (entry & 0x0800) {
                row = __builtin_bswap32(row);
                row = ((row & 0x0f0f0f0f) << 4) | ((row & 0xf0f0f0f0) >> 4);
            }
            row <<= offset * 4;
            unsigned priority = (entry >> 8) & HIGH_PRIORITY;
            unsigned flags = (entry >> 9 & 0x30) | priority;
            uint8_t *dest = line + drawn;
            if (!foreground || priority) {
                if (count == 8) {
                    #pragma GCC unroll 8
                    for (unsigned i = 0; i < 8; ++i) {
                        unsigned color = row >> (28 - i * 4) & 15;
                        if (color)
                            dest[i] = flags | color;
                    }
                } else {
                    for (unsigned i = 0; i < count; ++i, row <<= 4)
                        if (row >> 28)
                            dest[i] = flags | (row >> 28);
                }
            } else {
                if (count == 8) {
                    #pragma GCC unroll 8
                    for (unsigned i = 0; i < 8; ++i) {
                        unsigned color = row >> (28 - i * 4) & 15;
                        if (color && !(dest[i] & HIGH_PRIORITY))
                            dest[i] = flags | color;
                    }
                } else {
                    for (unsigned i = 0; i < count; ++i, row <<= 4)
                        if ((row >> 28) && !(dest[i] & HIGH_PRIORITY))
                            dest[i] = flags | (row >> 28);
                }
            }
        }
        drawn += count;
        px += count;
    }
}

static void draw_plane_line(const struct megadrive *md, uint8_t *line,
                            unsigned screen_x, unsigned screen_y, unsigned view_width,
                            bool wide, unsigned plane,
                            unsigned cell_shift)
{
    const uint8_t *regs = md->vdp_registers;
    static const unsigned cells[4] = {32, 64, 32, 128};
    unsigned width = cells[regs[16] & 3];
    unsigned height = cells[(regs[16] >> 4) & 3];
    unsigned plane_a_base = screen_y < md->vdp_row_count ?
                            md->memory->vdp_rows[screen_y].plane_a_base : regs[2];
    unsigned base = plane ? (regs[4] & 7) << 13 : (plane_a_base & 0x38) << 10;
    unsigned hscroll = vram_word(md, vdp_hscroll_address(regs, screen_y) + plane * 2) & 0x3ff;
    bool column_scroll = (regs[11] & 4) != 0;
    unsigned line_scroll = megadrive_scanline_vscroll(md, screen_y, plane);
    unsigned window_x = (regs[17] & 0x1f) * 16;
    unsigned window_y = (regs[18] & 0x1f) * 8;
    bool window_row = (regs[18] & 0x80) ? screen_y >= window_y : screen_y < window_y;
    bool window_right = (regs[17] & 0x80) != 0;
    unsigned field_y = cell_shift == 4 ? screen_y * 2 + md->vdp_odd_field : screen_y;
    unsigned window_base = (regs[3] & (wide ? 0x3c : 0x3e)) << 10;
    const unsigned end = screen_x + view_width;
    for (unsigned x = screen_x; x < end;) {
        bool window = plane == 0 && (window_row || (window_right ? x >= window_x : x < window_x));
        unsigned span_end = end;
        if (plane == 0 && !window_row && window_x > x && window_x < end)
            span_end = window_x;

        unsigned px = x, py = field_y;
        if (!window) {
            unsigned vscroll = line_scroll;
            if (column_scroll) {
                unsigned column_end = (x | 15) + 1;
                if (column_end < span_end)
                    span_end = column_end;
                vscroll = md->vsram[(x / 16) * 2 + plane];
            }
            px = x + 1024 - hscroll;
            py = (field_y + vscroll) & ((height << cell_shift) - 1);
        }
        draw_plane_span(md, line + x - screen_x, span_end - x, px, py,
                        window ? (wide ? 64 : 32) : width, window ? window_base : base,
                        cell_shift, plane == 0);
        x = span_end;
    }
}

static unsigned load_sprites(const uint8_t *table, bool wide, unsigned cell_shift,
                             bool scale, struct sprite *sprites)
{
    unsigned link = 0, count = 0;
    unsigned limit = wide ? 80 : 64;
    do {
        const uint8_t *entry = table + link * 8;
        uint16_t size_link = entry[2] << 8 | entry[3];
        unsigned y = entry[0] << 8 | entry[1];
        unsigned x = entry[6] << 8 | entry[7];
        int sprite_y = (y & (cell_shift == 4 ? 0x3ff : 0x1ff)) -
                       (cell_shift == 4 ? 256 : 128);
        sprites[count++] = (struct sprite){
            .y = vdp_viewport_sprite_y(sprite_y, scale),
            .x = (x & 0x1ff) - 128,
            .width = ((size_link >> 10) & 3) + 1,
            .height = ((size_link >> 8) & 3) + 1,
            .attributes = entry[4] << 8 | entry[5],
        };
        link = size_link & 0x7f;
    } while (link && link < limit && count < limit);
    return count;
}

static void index_sprite_lines(struct sprite_index *index, unsigned first, unsigned last,
                               const struct sprite *sprites, unsigned count,
                               unsigned top, bool wide, unsigned cell_shift, bool odd)
{
    const unsigned limit = wide ? MAX_SPRITES_PER_LINE : 16;
    const bool interlace = cell_shift == 4;
    const int field_top = (top << interlace) + (interlace && odd);
    memset(index->counts + first, 0, last - first);
    for (unsigned i = 0; i < count; ++i) {
        int start = sprites[i].y - field_top;
        int end = start + (int)(sprites[i].height << cell_shift);
        if (start < 0)
            start = 0;
        if (end <= 0)
            continue;
        unsigned from = (start + interlace) >> interlace;
        unsigned through = (end + interlace) >> interlace;
        if (from < first)
            from = first;
        if (through > last)
            through = last;
        // Offscreen sprites still occupy evaluation slots, so clipping X
        // stays in the pixel renderer.
        for (unsigned line = from; line < through; ++line)
            if (index->counts[line] < limit)
                index->indices[line][index->counts[line]++] = i;
    }
}

static void store_scanline(uint16_t *pixels, const uint8_t *line, bool fit)
{
    if (fit) {
        // Sample both edges of each five-pixel group to fit 320 pixels into 256.
        for (unsigned x = 0; x < VDP_VIEW_WIDTH; x += 4, line += 5) {
            pixels[x / 2] = (line[0] | (line[1] << 8)) & (PIXEL_COLOR * 0x101);
            pixels[x / 2 + 1] = (line[3] | (line[4] << 8)) & (PIXEL_COLOR * 0x101);
        }
        return;
    }
    line = __builtin_assume_aligned(line, 4);
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    if (!((uintptr_t)pixels & 3)) {
        uint16_t *out = __builtin_assume_aligned(pixels, 4);
        for (unsigned x = 0; x < VDP_VIEW_WIDTH; x += 4) {
            uint32_t word;
            memcpy(&word, line + x, sizeof(word));
            word &= PIXEL_COLOR * UINT32_C(0x01010101);
            memcpy(out + x / 2, &word, sizeof(word));
        }
        return;
    }
#endif
    for (unsigned x = 0; x < VDP_VIEW_WIDTH; x += 2)
        pixels[x / 2] = (line[x] | (line[x + 1] << 8)) & (PIXEL_COLOR * 0x101);
}

static void draw_sprites_line(const struct megadrive *md, uint8_t *line,
                              int screen_x, int screen_y, int view_width, const struct sprite *sprites,
                              const uint8_t *visible, unsigned count, unsigned cell_shift)
{
    const unsigned cell_height = 1U << cell_shift;
    if (cell_shift == 4)
        screen_y = screen_y * 2 + md->vdp_odd_field;
    for (unsigned i = 0; i < count; ++i) {
        const struct sprite *sprite = &sprites[visible[i]];
        int y = screen_y - sprite->y;
        uint16_t entry = sprite->attributes;
        if (entry & 0x1000)
            y = sprite->height * cell_height - 1 - y;
        int left = sprite->x - screen_x, width = sprite->width * 8;
        int first = left < 0 ? -left : 0;
        int last = left + width > view_width ? view_width - left : width;
        unsigned palette = (entry >> 9) & 0x30;
        bool high_priority = (entry & 0x8000) != 0;
        bool flipped = (entry & 0x0800) != 0;
        unsigned pattern = (entry & (cell_shift == 4 ? 0x3ff : 0x7ff)) + ((unsigned)y >> cell_shift);
        for (int column = first; column < last;) {
            unsigned x = flipped ? width - 1 - column : column;
            unsigned tile = pattern + (x / 8) * sprite->height;
            unsigned row_address = (tile << (cell_shift + 2)) + (y & (cell_height - 1)) * 4;
            uint32_t row = pattern_row(md, row_address);
            unsigned shift = 28 - (x & 7) * 4;
            int step = flipped ? 4 : -4;
            int end = (column | 7) + 1;
            if (end > last)
                end = last;
            for (; row && column < end; ++column) {
                uint8_t *dest = &line[left + column];
                unsigned color = row >> shift & 15;
                if (color && !(*dest & SPRITE_CLAIMED)) {
                    if (high_priority || !(*dest & HIGH_PRIORITY))
                        *dest = palette | color;
                    *dest |= SPRITE_CLAIMED;
                }
                shift += step;
            }
            column = end;
        }
    }
}

void vdp_render_frame(const struct megadrive *md, uint16_t *pixels, bool vertical_scaling,
                      enum vdp_horizontal_view view)
{
    bool display_enabled = (md->vdp_registers[1] & 0x40) != 0;
    if (!display_enabled && !md->vdp_row_count) {
        for (unsigned i = 0; i < VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2; ++i)
            pixels[i] = 0;
        return;
    }
    bool wide = (md->vdp_registers[12] & 1) != 0;
    bool fit = wide && view == VDP_VIEW_FIT;
    unsigned view_width = fit ? VDP_WIDE_WIDTH : VDP_VIEW_WIDTH;
    unsigned screen_x = vdp_viewport_left(wide, view);
    // The DS presents one Genesis field at a time. Interlace mode 2 selects
    // alternate rows from double-height tiles in each successive field.
    unsigned cell_shift = (md->vdp_registers[12] & 6) == 6 ? 4 : 3;
    bool scale = vertical_scaling && cell_shift == 3;
    unsigned top = vdp_viewport_top(md->vdp_registers, scale);
    unsigned sprite_base = (md->vdp_registers[5] & (wide ? 0x7e : 0x7f)) << 9;
    struct sprite sprites[80];
#ifdef __NDS__
    // Only the ARM9 main loop renders frames. Keep the 4 KiB line index
    // in main RAM so a bitmap frame cannot exhaust the DTCM stack.
    static struct sprite_index visible;
#else
    struct sprite_index visible;
#endif
    unsigned indexed_until = 0;
    for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y) {
        unsigned guest_y = vdp_viewport_scanline(y, top, scale);
        const struct vdp_scanline *row = guest_y < md->vdp_row_count ?
                                         &md->memory->vdp_rows[guest_y] : NULL;
        _Alignas(4) uint8_t line[VDP_WIDE_WIDTH] = {0};
        if (row ? row->display_enabled : display_enabled) {
            if (y >= indexed_until) {
                unsigned table = row ? row->sprite_table : 0;
                indexed_until = y + 1;
                while (indexed_until < VDP_VIEW_HEIGHT) {
                    unsigned guest = vdp_viewport_scanline(indexed_until, top, scale);
                    unsigned next_table = guest < md->vdp_row_count ? md->memory->vdp_rows[guest].sprite_table : 0;
                    if (next_table != table)
                        break;
                    ++indexed_until;
                }
                const uint8_t *sprite_data = table ? md->memory->vdp_sprite_tables[table - 1] :
                                                      md->memory->vram + sprite_base;
                unsigned count = load_sprites(sprite_data, wide, cell_shift, scale, sprites);
                index_sprite_lines(&visible, y, indexed_until, sprites, count, top,
                                   wide, cell_shift, md->vdp_odd_field);
            }
            draw_plane_line(md, line, screen_x, guest_y, view_width, wide, 1, cell_shift);
            draw_plane_line(md, line, screen_x, guest_y, view_width, wide, 0, cell_shift);
            draw_sprites_line(md, line, screen_x, top + y, view_width, sprites, visible.indices[y], visible.counts[y], cell_shift);
        }
        store_scanline(pixels, line, fit);
        pixels += VDP_VIEW_WIDTH / 2;
    }
}
