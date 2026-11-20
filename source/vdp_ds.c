#include "vdp_ds.h"
#include "megadrive.h"
#include "vdp_render.h"

#include <nds.h>
#include <string.h>

enum {
    SCREEN_WORDS = 1024,
    SCREENS_PER_PAGE = 16,
    MAX_MAPS = 3,
    BG_PATTERNS = 1024,
    GENESIS_PATTERNS = 2048,
    OBJ_PATTERNS = 512,
    OBJECTS = 128,
    TILE_BYTES = 32,
    ALL_TILE_ROWS = 0xff,
    VISIBLE_LAYERS = 0x1f,
};

struct tile_map {
    uint16_t base;
    uint8_t parity;
};

struct scanline {
    uint32_t scroll[2];
    uint16_t control_a[2];
    uint8_t layers;
};

struct page {
    struct scanline lines[VDP_VIEW_HEIGHT];
    uint16_t control[MAX_MAPS][2];
    uint16_t objects[OBJECTS][4];
    // Only a changed source pattern or a dirty VRAM block needs an upload.
    uint16_t tile_slots[GENESIS_PATTERNS];
    uint16_t pattern_sources[BG_PATTERNS];
    uint32_t pattern_revisions[BG_PATTERNS];
    uint32_t map_revision, last_revision;
    struct tile_map maps[MAX_MAPS];
    unsigned map_count, width, height;
    bool maps_cached, interlace, raster;
    uint32_t sprite_sources[OBJ_PATTERNS * 4];
    uint32_t sprite_revisions[OBJ_PATTERNS * 4];
    unsigned used_patterns;
    unsigned used_sprite_patterns;
};

static struct page pages[2];
static unsigned visible_page;
static bool visible;
static bool ready;

static uint16_t vram_word(const struct megadrive *md, unsigned offset)
{
    return (md->vram[(uint16_t)offset] << 8) | md->vram[(uint16_t)(offset + 1)];
}

static void upload_pattern(volatile uint16_t *dest, const uint8_t *source,
                           bool interlace, unsigned parity, unsigned rows)
{
    if (!interlace && rows == ALL_TILE_ROWS) {
        for (unsigned i = 0; i < TILE_BYTES / 2; ++i) {
            unsigned pair = source[2*i] | (source[2*i+1] << 8);
            dest[i] = ((pair & 0x0f0f) << 4) | ((pair & 0xf0f0) >> 4);
        }
        return;
    }
    source += parity * 4;
    for (unsigned row = 0; row < 8; ++row) {
        unsigned word = 0;
        if (rows & (1U << row)) {
            const uint8_t *p = source + row * (interlace ? 8 : 4);
            word = p[0] | p[1] << 8 | p[2] << 16 | (uint32_t)p[3] << 24;
        }
        word = ((word & 0x0f0f0f0f) << 4) | ((word & 0xf0f0f0f0) >> 4);
        dest[2*row] = word;
        dest[2*row + 1] = word >> 16;
    }
}

static void set_scroll(unsigned y)
{
    const struct page *page = &pages[visible_page];
    const struct scanline *line = &page->lines[y];
    volatile uint32_t *scroll = (volatile uint32_t *)&REG_BG0HOFS;
    // BG0/BG2 share plane A and BG1/BG3 share plane B.
    scroll[0] = scroll[2] = line->scroll[0];
    scroll[1] = scroll[3] = line->scroll[1];
    if (page->raster && (!y || line->layers != line[-1].layers ||
                         line->control_a[0] != line[-1].control_a[0])) {
        REG_BG0CNT = line->control_a[0];
        REG_BG2CNT = line->control_a[1];
        REG_WINOUT = line->layers;
    }
}

static ITCM_CODE void hblank(void)
{
    unsigned line = REG_VCOUNT;
    if (line + 1 < VDP_VIEW_HEIGHT)
        set_scroll(line + 1);
}

void vdp_ds_frame_start(void)
{
    if (visible)
        set_scroll(0);
}

void vdp_ds_init(void)
{
    vramSetBankA(VRAM_A_MAIN_BG);
    vramSetBankB(VRAM_B_MAIN_SPRITE);
    irqSet(IRQ_HBLANK, hblank);
}

static uint32_t pattern_revision(const struct megadrive *md, unsigned key, bool interlace)
{
    if (!interlace)
        return md->vram_revisions[key];
    unsigned block = key & ~1U;
    uint32_t first = md->vram_revisions[block], second = md->vram_revisions[block + 1];
    return first > second ? first : second;
}

static void refresh_pattern(const struct megadrive *md, struct page *page,
                            volatile uint16_t *tiles, unsigned slot,
                            unsigned pattern, bool already_written)
{
    uint32_t revision = pattern_revision(md, pattern, page->interlace);
    if (!already_written || page->pattern_sources[slot] != pattern ||
        page->pattern_revisions[slot] != revision) {
        unsigned parity = page->interlace ? pattern & 1 : 0;
        unsigned block = pattern - parity;
        upload_pattern(tiles + slot * (TILE_BYTES / 2), md->vram + block * TILE_BYTES,
                       page->interlace, parity, ALL_TILE_ROWS);
        page->pattern_sources[slot] = pattern;
        page->pattern_revisions[slot] = revision;
    }
}

static bool same_map(struct tile_map a, struct tile_map b)
{
    return a.base == b.base && a.parity == b.parity;
}

static bool update_map(const struct megadrive *md, struct page *page, unsigned map,
                       unsigned next, struct tile_map layout, unsigned width, unsigned height,
                       unsigned old_count, bool incremental)
{
    unsigned tile_base = 4 + next * 2;
    volatile uint16_t *tiles = (uint16_t *)BG_GFX + tile_base * 8192;
    unsigned screens = (width / 32) * (height / 32);
    unsigned high_map = next * SCREENS_PER_PAGE + map * 2 * screens;
    unsigned low_map = high_map + screens;
    volatile uint16_t *high = (uint16_t *)BG_GFX + high_map * SCREEN_WORDS;
    volatile uint16_t *low = (uint16_t *)BG_GFX + low_map * SCREEN_WORDS;
    unsigned size = (width == 64 ? 1 : 0) | (height == 64 ? 2 : 0);
    page->control[map][0] = BG_MAP_BASE(high_map) | BG_TILE_BASE(tile_base) | size << 14;
    page->control[map][1] = BG_MAP_BASE(low_map) | BG_TILE_BASE(tile_base) | size << 14 | 2;

    unsigned row_shift = width == 64 ? 6 : 5;
    for (unsigned cell = 0; cell < width * height; cell += 16) {
        unsigned address = layout.base + cell * 2;
        if (incremental && (int32_t)(md->vram_revisions[address / TILE_BYTES] -
                                     page->map_revision) <= 0)
            continue;
        // Genesis rows are linear. DS text maps split into 32 x 32 screens.
        unsigned x = cell & (width - 1), y = cell >> row_shift;
        unsigned index = ((y >> 5) * (width >> 5) + (x >> 5)) * SCREEN_WORDS +
                         (y & 31) * 32 + (x & 31);
        for (unsigned j = 0; j < 16; ++j) {
            uint16_t attr = vram_word(md, address + 2*j);
            unsigned pattern = attr & 0x7ff;
            if (page->interlace)
                pattern = ((attr & 0x3ff) << 1) | (layout.parity ^ ((attr >> 12) & 1));
            unsigned slot = page->tile_slots[pattern];
            if (slot == UINT16_MAX) {
                if (page->used_patterns == BG_PATTERNS)
                    return false;
                page->tile_slots[pattern] = slot = page->used_patterns++;
                refresh_pattern(md, page, tiles, slot, pattern, slot < old_count);
            }
            unsigned entry = slot | ((attr >> 1) & 0x3c00);
            high[index + j] = (attr & 0x8000) ? entry : 0;
            low[index + j] = (attr & 0x8000) ? 0 : entry;
        }
    }
    return true;
}

static bool prepare_maps(const struct megadrive *md, struct page *page, unsigned next,
                         unsigned width, unsigned height, const struct tile_map *maps,
                         unsigned count, bool interlace)
{
    // The first half of bank A is two pages of maps. Tile data follows them.
    unsigned cells = width * height;
    if (cells / SCREEN_WORDS * count * 2 > SCREENS_PER_PAGE)
        return false;
    unsigned tile_base = 4 + next * 2;
    volatile uint16_t *tiles = (uint16_t *)BG_GFX + tile_base * 8192;
    bool cacheable = true;
    bool incremental = page->maps_cached && page->width == width && page->height == height &&
        page->map_count == count && page->interlace == interlace &&
        md->video_revision - page->map_revision < UINT32_C(0x80000000);
    for (unsigned i = 0; i < count; ++i) {
        cacheable &= maps[i].base + cells * 2 <= 0x10000;
        incremental &= same_map(page->maps[i], maps[i]);
    }
    incremental &= cacheable;
    unsigned old_count = page->used_patterns;
    bool reuse_patterns = page->interlace == interlace;
    page->interlace = interlace;
    if (incremental) {
        for (unsigned i = 0; i < count; ++i)
            if (!update_map(md, page, i, next, maps[i], width, height, old_count, true)) {
                incremental = false;
                break;
            }
    }
    if (incremental) {
        for (unsigned slot = 1; slot < old_count; ++slot)
            refresh_pattern(md, page, tiles, slot, page->pattern_sources[slot], true);
    } else {
        page->maps_cached = false;
        old_count = reuse_patterns ? page->used_patterns : 0;
        memset(page->tile_slots, 0xff, sizeof(page->tile_slots));
        if (!old_count)
            for (unsigned i = 0; i < TILE_BYTES / 2; ++i)
                tiles[i] = 0;
        page->used_patterns = 1;
        for (unsigned i = 0; i < count; ++i)
            if (!update_map(md, page, i, next, maps[i], width, height, old_count, false)) {
                page->used_patterns = 0;
                return false;
            }
    }
    memcpy(page->maps, maps, count * sizeof(*maps));
    page->map_count = count;
    page->map_revision = md->video_revision;
    page->width = width;
    page->height = height;
    page->maps_cached = cacheable;
    return true;
}

static unsigned object_dimension(unsigned remaining)
{
    return remaining >= 4 ? 4 : remaining >= 2 ? 2 : 1;
}

static bool prepare_sprite_span(const struct megadrive *md, struct page *page, unsigned next,
                                bool wide, int left, int top, const uint8_t *table,
                                int first, int last, unsigned *object_count,
                                unsigned *pattern_count)
{
    unsigned limit = wide ? 80 : 64;
    unsigned link = 0, count = *object_count, seen = 0, blocks = *pattern_count;
    bool interlace = page->interlace;
    unsigned old_blocks = page->used_sprite_patterns;
    uint8_t line_counts[VDP_VIEW_HEIGHT] = {0};
    do {
        const uint8_t *entry = table + link * 8;
        uint16_t size_link = entry[2] << 8 | entry[3];
        uint16_t attr = entry[4] << 8 | entry[5];
        int y = (entry[0] << 8 | entry[1]) & (interlace ? 0x3ff : 0x1ff);
        unsigned parity = 0;
        if (interlace) {
            y -= 256 + md->vdp_odd_field;
            // Round up to the first output line covered by the sprite.
            parity = (y & 1) ^ ((attr >> 12) & 1);
            y = (y + 1) >> 1;
        } else {
            y -= 128;
        }
        y -= top;
        int x = ((entry[6] << 8 | entry[7]) & 0x1ff) - 128 - left;
        unsigned width = ((size_link >> 10) & 3) + 1, height = ((size_link >> 8) & 3) + 1;
        int bottom = y + (int)(height * 8);
        for (int row = y < first ? first : y; row < bottom && row < last; ++row) {
            if (++line_counts[row] > (wide ? 20 : 16)) {
                page->used_sprite_patterns = 0;
                return false;
            }
        }
        // Nintendo DS OBJ shapes support powers of two. Split any 3-cell
        // dimension into 2 + 1 and preserve Genesis column-major tile order.
        for (unsigned col = 0, w; col < width; col += w) {
            w = object_dimension(width - col);
            int sx = x + (int)(col * 8);
            if (sx <= -(int)(w * 8) || sx >= VDP_VIEW_WIDTH)
                continue;
            for (unsigned row = 0, h; row < height; row += h) {
                h = object_dimension(height - row);
                int sy = y + (int)(row * 8);
                if (sy + (int)(h * 8) <= first || sy >= last)
                    continue;
                unsigned needed = (w*h + 3) / 4;
                if (count == OBJECTS || blocks + needed > OBJ_PATTERNS) {
                    page->used_sprite_patterns = 0;
                    return false;
                }
                unsigned tx = (attr & 0x0800) ? width - w - col : col;
                unsigned ty = (attr & 0x1000) ? height - h - row : row;
                unsigned slot = next * OBJ_PATTERNS + blocks;
                volatile uint16_t *tiles = (uint16_t *)SPRITE_GFX + slot * 64;
                for (unsigned oy = 0; oy < h; ++oy) {
                    for (unsigned ox = 0; ox < w; ++ox) {
                        unsigned pattern = (attr & (interlace ? 0x3ff : 0x7ff)) +
                                           (tx+ox)*height + ty+oy;
                        unsigned key = interlace ? ((pattern & 0x3ff) << 1) | parity :
                                                   pattern & 0x7ff;
                        unsigned block = interlace ? key & ~1U : key;
                        unsigned offset = oy*w + ox;
                        unsigned index = blocks*4 + offset;
                        unsigned rows = ALL_TILE_ROWS;
                        if ((first > 0 && sy < first) ||
                            (last < VDP_VIEW_HEIGHT && sy + (int)(h * 8) > last)) {
                            // Mask rows outside this raster span before the DS
                            // applies the object's vertical flip.
                            unsigned row_index = (attr & 0x1000) ? h - 1 - oy : oy;
                            int tile_y = sy + (int)row_index * 8;
                            rows = 0;
                            for (unsigned k = 0; k < 8; ++k) {
                                int line = tile_y + (int)((attr & 0x1000) ? 7 - k : k);
                                if (line >= first && line < last)
                                    rows |= 1U << k;
                            }
                        }
                        unsigned source = (rows << 12) | (interlace ? 1U << 11 : 0) | key;
                        uint32_t revision = pattern_revision(md, key, interlace);
                        if (index/4 >= old_blocks || page->sprite_sources[index] != source ||
                            page->sprite_revisions[index] != revision) {
                            upload_pattern(tiles + offset * (TILE_BYTES / 2), md->vram + block * TILE_BYTES,
                                           interlace, parity, rows);
                            page->sprite_sources[index] = source;
                            page->sprite_revisions[index] = revision;
                        }
                    }
                }
                unsigned shape = w == h ? 0 : w > h ? 1 : 2;
                unsigned size = w == h ? (w >> 1) : (w == 4 || h == 4) ? (w+h == 6 ? 2 : 1) : 0;
                page->objects[count][0] = (sy & 0xff) | shape << 14;
                page->objects[count][1] = (sx & 0x1ff) | ((attr >> 11) & 3) << 12 | size << 14;
                page->objects[count][2] = slot | ((attr & 0x8000) ? 0 : 1 << 10) |
                                         ((attr >> 1) & 0x3000);
                blocks += needed;
                ++count;
            }
        }
        link = size_link & 0x7f;
    } while (link && link < limit && ++seen < limit);
    *object_count = count;
    *pattern_count = blocks;
    return true;
}

static const struct vdp_scanline *raster_row(const struct megadrive *md, unsigned y)
{
    return y < md->vdp_row_count ? &md->vdp_rows[y] : NULL;
}

static bool prepare_sprites(const struct megadrive *md, struct page *page, unsigned next,
                            bool wide, unsigned left, unsigned top, const uint8_t *tables)
{
    unsigned table_base = (md->vdp_registers[5] & (wide ? 0x7e : 0x7f)) << 9;
    unsigned count = 0, blocks = 0;
    for (unsigned first = 0, last; first < VDP_VIEW_HEIGHT; first = last) {
        last = first + 1;
        while (last < VDP_VIEW_HEIGHT && tables[first] == tables[last])
            ++last;
        unsigned table = tables[first];
        if (table == UINT8_MAX)
            continue;
        const uint8_t *data = table ? md->vdp_sprite_tables[table - 1] : md->vram + table_base;
        if (!prepare_sprite_span(md, page, next, wide, left, top, data, first, last, &count, &blocks))
            return false;
    }
    page->used_sprite_patterns = blocks;
    for (; count < OBJECTS; ++count)
        page->objects[count][0] = 0x0200;
    return true;
}

bool vdp_ds_prepare(const struct megadrive *md)
{
    const uint8_t *regs = md->vdp_registers;
    unsigned mode = regs[12] & 6;
    bool interlace = mode == 6;
    bool enabled = (regs[1] & 0x40) != 0;
    if ((!md->vdp_row_count && !enabled) || (regs[11] & 4) || (regs[12] & 8) ||
        (mode && !interlace) || (regs[16] & 0x22) || (regs[17] & 0x9f) || (regs[18] & 0x9f))
        return false;
    bool wide = (regs[12] & 1) != 0;
    unsigned left = wide ? 32 : 0, top = (regs[1] & 8) ? 24 : 16;
    unsigned next = visible_page ^ 1;
    struct page *page = &pages[next];
    if (md->video_revision < page->last_revision) {
        page->used_patterns = 0;
        page->used_sprite_patterns = 0;
        page->maps_cached = false;
    }
    page->last_revision = md->video_revision;

    // Maps 0 and 2 are Plane A variants. Map 1 is the fixed Plane B.
    struct tile_map maps[MAX_MAPS] = {[1] = {.base = (regs[4] & 7) << 13}};
    uint8_t map_indices[VDP_VIEW_HEIGHT], sprite_tables[VDP_VIEW_HEIGHT];
    unsigned map_count = 0;
    bool blanking = false;
    for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y) {
        const struct vdp_scanline *row = raster_row(md, y + top);
        bool active = row ? row->display_enabled : enabled;
        sprite_tables[y] = active ? (row ? row->sprite_table : 0) : UINT8_MAX;
        if (!active) {
            map_indices[y] = 0;
            page->lines[y].scroll[0] = page->lines[y].scroll[1] = 0;
            blanking = true;
            continue;
        }
        unsigned scroll = vdp_hscroll_address(regs, y + top);
        unsigned parity[2];
        for (unsigned plane = 0; plane < 2; ++plane) {
            unsigned h = (left - vram_word(md, scroll + plane * 2)) & 0x1ff;
            unsigned v = megadrive_scanline_vscroll(md, y + top, plane);
            if (interlace)
                v += md->vdp_odd_field;
            parity[plane] = interlace ? v & 1 : 0;
            v = (top + (v >> interlace)) & 0x1ff;
            page->lines[y].scroll[plane] = h | (v << 16);
        }
        struct tile_map a = {((row ? row->plane_a_base : regs[2]) & 0x38) << 10, parity[0]};
        unsigned index = 0;
        if (!map_count) {
            maps[0] = a;
            maps[1].parity = parity[1];
            map_count = 2;
        } else if (!same_map(maps[0], a)) {
            index = 2;
            if (map_count == 2) {
                maps[2] = a;
                map_count = 3;
            } else if (!same_map(maps[2], a)) {
                return false;
            }
        }
        if (maps[1].parity != parity[1])
            return false;
        map_indices[y] = index;
    }
    if (!map_count ||
        !prepare_maps(md, page, next, (regs[16] & 1) ? 64 : 32, (regs[16] & 0x10) ? 64 : 32,
                      maps, map_count, interlace) ||
        !prepare_sprites(md, page, next, wide, left, top, sprite_tables))
        return false;
    page->raster = blanking || map_count > 2;
    for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y) {
        unsigned map = map_indices[y];
        page->lines[y].control_a[0] = page->control[map][0];
        page->lines[y].control_a[1] = page->control[map][1];
        page->lines[y].layers = sprite_tables[y] == UINT8_MAX ? 0 : VISIBLE_LAYERS;
    }
    ready = true;
    return true;
}

void vdp_ds_present(void)
{
    if (!ready)
        return;
    irqDisable(IRQ_HBLANK);
    visible_page ^= 1;
    const struct page *page = &pages[visible_page];
    videoSetMode(MODE_0_2D | DISPLAY_BG0_ACTIVE | DISPLAY_BG1_ACTIVE |
                 DISPLAY_BG2_ACTIVE | DISPLAY_BG3_ACTIVE | DISPLAY_SPR_ACTIVE |
                 DISPLAY_SPR_1D | DISPLAY_SPR_1D_SIZE_128 |
                 (page->raster ? DISPLAY_WIN0_ON : 0));
    // With an empty window, WINOUT controls all layers over the entire line.
    REG_WIN0H = 0;
    REG_WIN0V = 0;
    REG_WININ = 0;
    REG_BG0CNT = page->control[0][0];
    REG_BG2CNT = page->control[0][1];
    REG_BG1CNT = page->control[1][0];
    REG_BG3CNT = page->control[1][1];
    volatile uint16_t *oam = (uint16_t *)OAM;
    for (unsigned i = 0; i < OBJECTS; ++i) {
        oam[4*i] = page->objects[i][0];
        oam[4*i+1] = page->objects[i][1];
        oam[4*i+2] = page->objects[i][2];
    }
    set_scroll(0);
    irqEnable(IRQ_HBLANK);
    visible = true;
    ready = false;
}

void vdp_ds_hide(void)
{
    ready = false;
    if (visible) {
        irqDisable(IRQ_HBLANK);
        visible = false;
    }
}

void vdp_ds_invalidate(void)
{
    for (unsigned i = 0; i < 2; ++i) {
        pages[i].used_patterns = 0;
        pages[i].used_sprite_patterns = 0;
        memset(pages[i].sprite_sources, 0, sizeof(pages[i].sprite_sources));
        pages[i].maps_cached = false;
    }
}
