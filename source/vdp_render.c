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

static uint16_t vram_little_endian_word(const uint8_t *vram, unsigned address)
{
    // Tilemap entries and horizontal scroll values are word-aligned.
    const uint8_t *bytes = vram + (uint16_t)address;
    uint16_t word;
    memcpy(&word, __builtin_assume_aligned(bytes, 2), sizeof(word));
#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
    word = __builtin_bswap16(word);
#endif
    return word;
}

static uint32_t pattern_row(const uint8_t *vram, unsigned address)
{
    const uint8_t *p = vram + (uint16_t)address;
    uint32_t row;
    memcpy(&row, __builtin_assume_aligned(p, 4), sizeof(row));
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
    row = __builtin_bswap32(row);
#endif
    return row;
}

static inline __attribute__((always_inline)) void draw_full_tile(
    uint8_t *dest, uint32_t row, unsigned flags, bool flipped, bool check_priority)
{
    #pragma GCC unroll 8
    for (unsigned i = 0; i < 8; ++i) {
        // The high nibble comes first in each byte of pattern storage.
        unsigned shift = (i & ~1U) * 4 + (i & 1 ? 0 : 4);
        unsigned color = row >> shift & 15;
        unsigned x = flipped ? 7 - i : i;
        if (color && (!check_priority || !(dest[x] & HIGH_PRIORITY)))
            dest[x] = flags | color;
    }
}

static inline __attribute__((always_inline)) void draw_plane_tile(
    const uint8_t *vram, uint8_t *dest, unsigned entry_address,
    unsigned tile_mask, unsigned tile_row, unsigned last_tile_row, unsigned cell_shift,
    unsigned offset, unsigned count, bool foreground)
{
    // The attribute byte is in the low lane of the VRAM load.
    unsigned entry = vram_little_endian_word(vram, entry_address);
    unsigned tile = ((entry << 8) | (entry >> 8)) & tile_mask;
    unsigned address = tile << (cell_shift + 2);
    address += (entry & 0x10) ? last_tile_row - tile_row : tile_row;
    const uint8_t *pattern = vram + (uint16_t)address;
    uint32_t row;
    memcpy(&row, __builtin_assume_aligned(pattern, 4), sizeof(row));
    if (!row)
        return;
#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
    row = __builtin_bswap32(row);
#endif
    bool flipped = entry & 8;
    unsigned priority = entry & HIGH_PRIORITY;
    unsigned flags = (entry >> 1 & 0x30) | priority;
    bool check_priority = foreground && !priority;
    if (count == 8) {
        if (flipped) {
            if (check_priority)
                draw_full_tile(dest, row, flags, true, true);
            else
                draw_full_tile(dest, row, flags, true, false);
        } else if (check_priority) {
            draw_full_tile(dest, row, flags, false, true);
        } else {
            draw_full_tile(dest, row, flags, false, false);
        }
        return;
    }

    if (flipped)
        row = ((row & 0x0f0f0f0f) << 4) | ((row & 0xf0f0f0f0) >> 4);
    else
        row = __builtin_bswap32(row);
    row <<= offset * 4;
    for (unsigned i = 0; i < count; ++i, row <<= 4) {
        unsigned color = row >> 28;
        if (color && (!check_priority || !(dest[i] & HIGH_PRIORITY)))
            dest[i] = flags | color;
    }
}

static inline __attribute__((always_inline)) void draw_plane_span(const uint8_t *vram, uint8_t *line,
                            unsigned length, unsigned x, unsigned y,
                            unsigned stride, unsigned base, unsigned cell_shift,
                            bool foreground)
{
    const unsigned cell_height = 1U << cell_shift;
    const unsigned row_address = base + (y >> cell_shift) * stride * 2;
    const unsigned tile_mask = (0x800 >> (cell_shift - 3)) - 1;
    const unsigned tile_row = (y & (cell_height - 1)) * 4;
    const unsigned last_tile_row = (cell_height - 1) * 4;
    unsigned column = x >> 3;
    unsigned offset = x & 7;
    if (offset) {
        unsigned count = 8 - offset;
        if (count > length)
            count = length;
        unsigned address = row_address + (column & (stride - 1)) * 2;
        draw_plane_tile(vram, line, address, tile_mask, tile_row, last_tile_row, cell_shift,
                        offset, count, foreground);
        line += count;
        length -= count;
        ++column;
    }
    while (length >= 8) {
        unsigned address = row_address + (column & (stride - 1)) * 2;
        draw_plane_tile(vram, line, address, tile_mask, tile_row, last_tile_row, cell_shift,
                        0, 8, foreground);
        line += 8;
        length -= 8;
        ++column;
    }
    if (length) {
        unsigned address = row_address + (column & (stride - 1)) * 2;
        draw_plane_tile(vram, line, address, tile_mask, tile_row, last_tile_row, cell_shift,
                        0, length, foreground);
    }
}

static ARM9_ITCM __attribute__((noinline)) void draw_progressive_background_span(
    const uint8_t *vram, uint8_t *line, unsigned length, unsigned x, unsigned y,
    unsigned stride, unsigned base)
{
    draw_plane_span(vram, line, length, x, y, stride, base, 3, false);
}

static __attribute__((noinline)) void draw_progressive_foreground_span(
    const uint8_t *vram, uint8_t *line, unsigned length, unsigned x, unsigned y,
    unsigned stride, unsigned base)
{
    draw_plane_span(vram, line, length, x, y, stride, base, 3, true);
}

static __attribute__((noinline)) void draw_interlaced_plane_span(
    const uint8_t *vram, uint8_t *line, unsigned length, unsigned x, unsigned y,
    unsigned stride, unsigned base, bool foreground)
{
    draw_plane_span(vram, line, length, x, y, stride, base, 4, foreground);
}

static void draw_plane_line(const struct megadrive *md, uint8_t *line,
                            unsigned screen_x, unsigned screen_y, unsigned view_width,
                            bool wide, unsigned plane,
                            unsigned cell_shift, const uint16_t *column_scroll,
                            const uint8_t *column_ends, bool background_high)
{
    const uint8_t *regs = md->vdp_registers;
    static const unsigned cells[4] = {32, 64, 32, 128};
    unsigned width = cells[regs[16] & 3];
    unsigned height = cells[(regs[16] >> 4) & 3];
    unsigned plane_a_base = screen_y < md->vdp_row_count ?
                            md->memory->vdp_rows[screen_y].plane_a_base : regs[2];
    unsigned base = plane ? (regs[4] & 7) << 13 : (plane_a_base & 0x38) << 10;
    unsigned scroll_word = vram_little_endian_word(md->memory->vram,
                                                    vdp_hscroll_address(regs, screen_y) + plane * 2);
    unsigned hscroll = ((scroll_word << 8) | (scroll_word >> 8)) & 0x3ff;
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
            if (column_ends) {
                // A partial tile column enters from the left as the plane scrolls.
                unsigned shift = hscroll & 15;
                unsigned column_end = shift;
                if (x < shift) {
                    vscroll = wide ? column_scroll[38] & column_scroll[39] : 0;
                } else {
                    unsigned column = (x - shift) / 16;
                    column_end += column_ends[column] * 16;
                    vscroll = column_scroll[column * 2 + plane];
                }
                if (column_end < span_end)
                    span_end = column_end;
            }
            px = x + 1024 - hscroll;
            py = (field_y + vscroll) & ((height << cell_shift) - 1);
        }
        unsigned stride = window ? (wide ? 64 : 32) : width;
        unsigned tile_base = window ? window_base : base;
        uint8_t *output = line + x - screen_x;
        if (cell_shift == 4)
            draw_interlaced_plane_span(md->memory->vram, output, span_end - x,
                                       px, py, stride, tile_base, plane == 0);
        else if (plane == 0 && background_high)
            draw_progressive_foreground_span(md->memory->vram, output, span_end - x,
                                             px, py, stride, tile_base);
        else
            draw_progressive_background_span(md->memory->vram, output, span_end - x,
                                             px, py, stride, tile_base);
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

#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
static inline uint32_t fit_pixel_group(uint32_t first_four, uint32_t last_pixel, bool odd_group)
{
    uint32_t alternating = ((first_four ^ (first_four >> 16)) & 0x3f3f) |
                           ((first_four ^ last_pixel) & PIXEL_COLOR);
    uint32_t result = (first_four & 0xffff) | ((first_four >> 8) & 0xff0000) | (last_pixel << 24);
    if (!alternating) {
        unsigned pair = odd_group ? result >> 16 : result & 0xffff;
        result = pair | (pair << 16);
    }
    return result & (PIXEL_COLOR * UINT32_C(0x01010101));
}
#endif

static void store_scanline(uint16_t *pixels, const uint8_t *line, bool fit)
{
    if (fit) {
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
        if (!((uintptr_t)pixels & 3)) {
            // Every four groups start at an aligned, 20-byte boundary.
            line = __builtin_assume_aligned(line, 4);
            uint16_t *out = __builtin_assume_aligned(pixels, 4);
            for (unsigned x = 0; x < VDP_VIEW_WIDTH; x += 16, line += 20) {
                uint32_t words[5], scaled[4];
                memcpy(words, line, sizeof(words));
                scaled[0] = fit_pixel_group(words[0], words[1], false);
                scaled[1] = fit_pixel_group((words[1] >> 8) | (words[2] << 24), words[2] >> 8, true);
                scaled[2] = fit_pixel_group((words[2] >> 16) | (words[3] << 16), words[3] >> 16, false);
                scaled[3] = fit_pixel_group((words[3] >> 24) | (words[4] << 8), words[4] >> 24, true);
                memcpy(out + x / 2, scaled, sizeof(scaled));
            }
            return;
        }
#endif
        // Sample both edges of each five-pixel group to fit 320 pixels into 256.
        for (unsigned x = 0; x < VDP_VIEW_WIDTH; x += 4, line += 5) {
            unsigned first = line[0] | (line[1] << 8);
            unsigned last = line[3] | (line[4] << 8);
            unsigned alternating = (line[0] ^ line[2]) | (line[0] ^ line[4]) |
                                   (line[1] ^ line[3]);
            if (!(alternating & PIXEL_COLOR)) {
                // A five-pixel source step flips the phase of alternating
                // colors. Preserve the checkerboard in the four-pixel output.
                first = last = (x & 4) ? last : first;
            }
            pixels[x / 2] = first & (PIXEL_COLOR * 0x101);
            pixels[x / 2 + 1] = last & (PIXEL_COLOR * 0x101);
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
    const uint8_t *vram = md->memory->vram;
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
            uint32_t row = pattern_row(vram, row_address);
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

static __attribute__((noinline)) bool background_has_priority(const struct megadrive *md)
{
    static const unsigned cells[4] = {32, 64, 32, 128};
    unsigned width = cells[md->vdp_registers[16] & 3];
    unsigned height = cells[(md->vdp_registers[16] >> 4) & 3];
    unsigned address = (md->vdp_registers[4] & 7) << 13;
    unsigned words = width * height / 2;
    for (unsigned i = 0; i < words; ++i, address += 4) {
        uint32_t entries;
        memcpy(&entries, __builtin_assume_aligned(md->memory->vram + (uint16_t)address, 4),
               sizeof(entries));
#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
        entries >>= 8;
#endif
        if (entries & 0x00800080u)
            return true;
    }
    return false;
}

ARM9_ITCM void vdp_render_frame(const struct megadrive *md, uint16_t *pixels, bool vertical_scaling,
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
    // Neighboring columns with equal scroll can share a tile span.
    unsigned columns = (wide ? VDP_WIDE_WIDTH : VDP_VIEW_WIDTH) / 16;
    uint8_t column_ends[2][VDP_WIDE_WIDTH / 16];
    const uint16_t *last_column_scroll = NULL;
    bool frame_column_scroll = (md->vdp_registers[11] & 4) != 0;
    unsigned indexed_until = 0;
    bool background_high = cell_shift == 4 || background_has_priority(md);
    for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y) {
        unsigned guest_y = vdp_viewport_scanline(y, top, scale);
        const struct vdp_scanline *row = guest_y < md->vdp_row_count ?
                                         &md->memory->vdp_rows[guest_y] : NULL;
        _Alignas(4) uint8_t line[VDP_WIDE_WIDTH] = {0};
        if (row ? row->display_enabled : display_enabled) {
            bool column_mode = row ? row->column_scroll : frame_column_scroll;
            const uint16_t *scroll = column_mode ?
                (row ? md->memory->vdp_column_scroll[guest_y] : md->vsram) : NULL;
            if (scroll && scroll != last_column_scroll) {
                if (!last_column_scroll ||
                    memcmp(last_column_scroll, scroll, columns * 2 * sizeof(*scroll))) {
                    for (unsigned plane = 0; plane < 2; ++plane) {
                        unsigned end = columns;
                        for (unsigned col = columns; col-- > 0;) {
                            if (col + 1 < columns && scroll[col * 2 + plane] != scroll[(col + 1) * 2 + plane])
                                end = col + 1;
                            column_ends[plane][col] = end;
                        }
                    }
                }
                last_column_scroll = scroll;
            }
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
            draw_plane_line(md, line, screen_x, guest_y, view_width, wide, 1, cell_shift,
                            scroll, scroll ? column_ends[1] : NULL, background_high);
            draw_plane_line(md, line, screen_x, guest_y, view_width, wide, 0, cell_shift,
                            scroll, scroll ? column_ends[0] : NULL, background_high);
            draw_sprites_line(md, line, screen_x, top + y, view_width, sprites, visible.indices[y], visible.counts[y], cell_shift);
        }
        store_scanline(pixels, line, fit);
        pixels += VDP_VIEW_WIDTH / 2;
    }
}
