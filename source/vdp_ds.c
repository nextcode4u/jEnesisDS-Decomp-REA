#include "vdp_ds.h"
#include "megadrive.h"
#include "vdp_render.h"

#include <nds.h>
#include <string.h>

enum {
    SCREEN_WORDS = 1024,
    SCREENS_PER_PAGE = 16,
    MAX_MAPS = 4,
    BG_PATTERNS = 1024,
    GENESIS_PATTERNS = 2048,
    OBJ_PATTERNS = 512,
    OBJECTS = 128,
    TILE_BYTES = 32,
    FIRST_TILE_BLOCK = 0x20000 / 0x4000,
    FIELD_TILE_BLOCKS = BG_PATTERNS * TILE_BYTES / 0x4000,
    ALL_TILE_ROWS = 0xff,
    VISIBLE_LAYERS = 0x1f,
    SCROLL_DMA = 0,
};

struct tile_map {
    uint16_t base;
    uint8_t parity, width, height, columns, first_column;
};

struct scanline {
    uint32_t scroll[2];
    uint16_t control_a[2];
    uint8_t layers, map_b;
};

struct background_pattern {
    uint32_t revisions[2];
    uint16_t sources[2];
    uint16_t key;
};

struct page {
    struct scanline lines[VDP_VIEW_HEIGHT];
    _Alignas(32) uint32_t hblank_scroll[VDP_VIEW_HEIGHT][4];
    uint8_t changes[VDP_VIEW_HEIGHT];
    unsigned change_count;
    uint16_t control[MAX_MAPS][2];
    uint16_t objects[OBJECTS][4];
    // Only a changed source pattern or a dirty VRAM block needs an upload.
    uint16_t tile_slots[GENESIS_PATTERNS];
    // Shared map slots index two independently cached sets of field tiles.
    struct background_pattern patterns[BG_PATTERNS];
    uint32_t map_revision, last_revision;
    struct tile_map maps[MAX_MAPS];
    unsigned map_count;
    bool maps_cached, interlace, raster;
    unsigned parity_bias;
    uint32_t sprite_sources[OBJ_PATTERNS * 4];
    uint32_t sprite_revisions[OBJ_PATTERNS * 4];
    unsigned used_patterns;
    unsigned used_sprite_patterns;
};

static struct page pages[2];
static unsigned visible_page;
static bool visible;
static bool ready;
static unsigned change_index;

static uint16_t vram_word(const struct megadrive *md, unsigned offset)
{
    return (md->memory->vram[(uint16_t)offset] << 8) | md->memory->vram[(uint16_t)(offset + 1)];
}

static void upload_pattern(volatile uint16_t *dest, const uint8_t *source,
                           bool interlace, unsigned parity, unsigned rows)
{
    // Tile rows are four aligned bytes. Store all eight DS pixels together.
    volatile uint32_t *words = (volatile uint32_t *)dest;
    source += parity * 4;
    unsigned stride = interlace ? 8 : 4;
    for (unsigned row = 0; row < 8; ++row) {
        uint32_t word = 0;
        if (rows & (1U << row))
            memcpy(&word, __builtin_assume_aligned(source + row * stride, 4), sizeof(word));
        words[row] = ((word & 0x0f0f0f0f) << 4) | ((word & 0xf0f0f0f0) >> 4);
    }
}

static void set_raster_controls(const struct page *page, unsigned y)
{
    const struct scanline *line = &page->lines[y];
    REG_BG0CNT = line->control_a[0];
    REG_BG2CNT = line->control_a[1];
    REG_BG1CNT = page->control[line->map_b][0];
    REG_BG3CNT = page->control[line->map_b][1];
    REG_WINOUT = line->layers;
}

static ITCM_CODE void hblank(void)
{
    const struct page *page = &pages[visible_page];
    unsigned line = REG_VCOUNT;
    if (line + 1 < VDP_VIEW_HEIGHT)
        set_raster_controls(page, line + 1);

    // Keep HBlank enabled for neighboring changes. Consecutive VCOUNT
    // matches can leave the match flag set and suppress a second IRQ.
    while (change_index < page->change_count && page->changes[change_index] <= line)
        ++change_index;

    if (change_index < page->change_count) {
        unsigned next = page->changes[change_index];
        if (next == line + 1)
            return;
        SetYtrigger(next);
        REG_IF = IRQ_VCOUNT;
        irqEnable(IRQ_VCOUNT);
    }
    irqDisable(IRQ_HBLANK);
}

static ITCM_CODE void vcount(void)
{
    // Arm HBlank on the preceding line so control writes land between draws.
    irqDisable(IRQ_VCOUNT);
    REG_IF = IRQ_HBLANK;
    irqEnable(IRQ_HBLANK);
}

void vdp_ds_frame_start(void)
{
    if (!visible)
        return;
    const struct page *page = &pages[visible_page];

    // During HBlank after line y, DMA installs the scroll words for y+1.
    // The final transfer repeats line zero so it stays in bounds.
    volatile uint32_t *scroll = (volatile uint32_t *)&REG_BG0HOFS;
    scroll[0] = scroll[2] = page->lines[0].scroll[0];
    scroll[1] = scroll[3] = page->lines[0].scroll[1];
    DMA_CR(SCROLL_DMA) = 0;
    DMA_SRC(SCROLL_DMA) = (uint32_t)page->hblank_scroll;
    DMA_DEST(SCROLL_DMA) = (uint32_t)scroll;
    DMA_CR(SCROLL_DMA) = DMA_ENABLE | DMA_START_HBL | DMA_REPEAT | DMA_DST_RESET | DMA_32_BIT | 4;

    irqDisable(IRQ_HBLANK);
    irqDisable(IRQ_VCOUNT);
    if (page->raster)
        set_raster_controls(page, 0);
    if (page->change_count) {
        change_index = 0;
        SetYtrigger(page->changes[0]);
        REG_IF = IRQ_VCOUNT;
        irqEnable(IRQ_VCOUNT);
    }
}

void vdp_ds_init(void)
{
    // Bank E holds both map pages. Bank A holds their two interlace fields.
    vramSetBankA(VRAM_A_MAIN_BG_0x06020000);
    vramSetBankE(VRAM_E_MAIN_BG);
    vramSetBankB(VRAM_B_MAIN_SPRITE);
    irqSet(IRQ_HBLANK, hblank);
    irqSet(IRQ_VCOUNT, vcount);
}

static uint32_t pattern_revision(const struct megadrive *md, unsigned key, bool interlace)
{
    if (!interlace)
        return md->memory->vram_revisions[key];
    unsigned block = key & ~1U;
    uint32_t first = md->memory->vram_revisions[block], second = md->memory->vram_revisions[block + 1];
    return first > second ? first : second;
}

static void refresh_pattern(const struct megadrive *md, struct page *page,
                            volatile uint16_t *tiles, unsigned slot)
{
    struct background_pattern *cached = &page->patterns[slot];
    unsigned field = page->parity_bias;
    unsigned pattern = cached->key ^ field;
    uint32_t revision = pattern_revision(md, pattern, page->interlace);
    if (cached->sources[field] != pattern ||
        cached->revisions[field] != revision) {
        unsigned parity = page->interlace ? pattern & 1 : 0;
        unsigned block = pattern - parity;
        upload_pattern(tiles + slot * (TILE_BYTES / 2), md->memory->vram + block * TILE_BYTES,
                       page->interlace, parity, ALL_TILE_ROWS);
        cached->sources[field] = pattern;
        cached->revisions[field] = revision;
    }
}

static unsigned background_tile_base(unsigned page, unsigned parity)
{
    return FIRST_TILE_BLOCK + (page * 2 + parity) * FIELD_TILE_BLOCKS;
}

static bool same_map(struct tile_map a, struct tile_map b)
{
    return a.base == b.base && a.parity == b.parity &&
           a.width == b.width && a.height == b.height &&
           a.columns == b.columns && a.first_column == b.first_column;
}

static bool update_map(const struct megadrive *md, struct page *page, unsigned map,
                       unsigned next, unsigned high_map, struct tile_map layout,
                       bool incremental)
{
    unsigned tile_base = background_tile_base(next, page->parity_bias);
    volatile uint16_t *tiles = BG_TILE_RAM(tile_base);
    unsigned width = layout.width, height = layout.height;
    unsigned screens = width * height / SCREEN_WORDS;
    unsigned low_map = high_map + screens;
    volatile uint16_t *high = BG_MAP_RAM(high_map);
    volatile uint16_t *low = BG_MAP_RAM(low_map);
    unsigned size = (width == 64 ? 1 : 0) | (height == 64 ? 2 : 0);
    page->control[map][0] = BG_MAP_BASE(high_map) | BG_TILE_BASE(tile_base) | size << 14;
    page->control[map][1] = BG_MAP_BASE(low_map) | BG_TILE_BASE(tile_base) | size << 14 | 2;

    unsigned row_shift = width == 64 ? 6 : 5;
    for (unsigned cell = 0; cell < width * height; cell += 16) {
        unsigned x = cell & (width - 1), y = cell >> row_shift;
        unsigned address = layout.base + cell * 2;
        if (layout.columns != width) {
            unsigned source_x = (layout.first_column + x) & (layout.columns - 1);
            address = layout.base + (y * layout.columns + source_x) * 2;
        }
        if (incremental && (int32_t)(md->memory->vram_revisions[address / TILE_BYTES] -
                                     page->map_revision) <= 0)
            continue;
        // Genesis rows are linear. DS text maps split into 32 x 32 screens.
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
                page->patterns[slot].key = pattern;
                refresh_pattern(md, page, tiles, slot);
            }
            unsigned entry = slot | ((attr >> 1) & 0x3c00);
            high[index + j] = (attr & 0x8000) ? entry : 0;
            low[index + j] = (attr & 0x8000) ? 0 : entry;
        }
    }
    return true;
}

static void reset_pattern_cache(struct page *page, unsigned next)
{
    page->maps_cached = false;
    page->used_patterns = 0;
    memset(page->patterns, 0xff, sizeof(page->patterns));
    for (unsigned parity = 0; parity < 2; ++parity) {
        volatile uint16_t *tiles = BG_TILE_RAM(background_tile_base(next, parity));
        for (unsigned i = 0; i < TILE_BYTES / 2; ++i)
            tiles[i] = 0;
    }
}

static bool prepare_maps(const struct megadrive *md, struct page *page, unsigned next,
                         struct tile_map *maps, unsigned count, bool interlace)
{
    if (count > MAX_MAPS)
        return false;
    // Normalize every map to Plane A's parity. A field change can then
    // select a different tile bank without changing the maps' tile indices.
    unsigned parity_bias = interlace ? maps[0].parity : 0;
    for (unsigned i = 0; i < count; ++i)
        maps[i].parity ^= parity_bias;

    unsigned used = 0, screen_base[MAX_MAPS];
    bool cacheable = true;
    bool incremental = page->maps_cached && page->map_count == count &&
        page->interlace == interlace &&
        md->video_revision - page->map_revision < UINT32_C(0x80000000);
    for (unsigned i = 0; i < count; ++i) {
        unsigned cells = maps[i].width * maps[i].height;
        screen_base[i] = next * SCREENS_PER_PAGE + used;
        used += cells / SCREEN_WORDS * 2;
        cacheable &= maps[i].base + maps[i].columns * maps[i].height * 2 <= 0x10000;
        incremental &= same_map(page->maps[i], maps[i]);
    }
    if (used > SCREENS_PER_PAGE)
        return false;
    if (!page->used_patterns || page->interlace != interlace) {
        reset_pattern_cache(page, next);
        incremental = false;
    }
    incremental &= cacheable;
    unsigned old_count = page->used_patterns;
    page->interlace = interlace;
    page->parity_bias = parity_bias;
    if (incremental) {
        for (unsigned i = 0; i < count; ++i)
            if (!update_map(md, page, i, next, screen_base[i], maps[i], true)) {
                incremental = false;
                break;
            }
    }
    if (incremental) {
        unsigned tile_base = background_tile_base(next, page->parity_bias);
        volatile uint16_t *tiles = BG_TILE_RAM(tile_base);
        for (unsigned slot = 1; slot < old_count; ++slot)
            refresh_pattern(md, page, tiles, slot);
    } else {
        page->maps_cached = false;
        memset(page->tile_slots, 0xff, sizeof(page->tile_slots));
        page->used_patterns = 1;
        for (unsigned i = 0; i < count; ++i)
            if (!update_map(md, page, i, next, screen_base[i], maps[i], false)) {
                page->used_patterns = 0;
                return false;
            }
    }
    memcpy(page->maps, maps, count * sizeof(*maps));
    page->map_count = count;
    page->map_revision = md->video_revision;
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
                            upload_pattern(tiles + offset * (TILE_BYTES / 2), md->memory->vram + block * TILE_BYTES,
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
    return y < md->vdp_row_count ? &md->memory->vdp_rows[y] : NULL;
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
        const uint8_t *data = table ? md->memory->vdp_sprite_tables[table - 1] : md->memory->vram + table_base;
        if (!prepare_sprite_span(md, page, next, wide, left, top, data, first, last, &count, &blocks))
            return false;
    }
    page->used_sprite_patterns = blocks;
    for (; count < OBJECTS; ++count)
        page->objects[count][0] = 0x0200;
    return true;
}

static unsigned column_origins(unsigned x)
{
    // Candidate bases are a multiple of 16 tiles. A 64-tile map covers
    // the 32-tile viewport when its left edge is within the first 256 pixels.
    unsigned block = x / 128;
    unsigned valid = (1U << block) | (1U << ((block + 7) & 7));
    if (x % 128 == 0)
        valid |= 1U << ((block + 6) & 7);
    return valid;
}

static bool split_map_columns(const struct page *page, unsigned plane,
                              const uint8_t *tables, uint8_t *maps, unsigned map,
                              unsigned extra, unsigned *first, unsigned *second)
{
    // For every possible first origin, retain the second origins that
    // cover every scanline the first origin cannot cover.
    uint8_t partners[8];
    memset(partners, 0xff, sizeof(partners));
    for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y) {
        if (tables[y] == UINT8_MAX || maps[y] != map)
            continue;
        unsigned valid = column_origins(page->lines[y].scroll[plane] & 0x3ff);
        for (unsigned candidate = 0; candidate < 8; ++candidate)
            if (!(valid & (1U << candidate)))
                partners[candidate] &= valid;
    }
    for (unsigned candidate = 0; candidate < 8; ++candidate) {
        if (!partners[candidate])
            continue;
        *first = candidate * 16;
        *second = (unsigned)__builtin_ctz(partners[candidate]) * 16;
        for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y)
            if (tables[y] != UINT8_MAX && maps[y] == map &&
                !(column_origins(page->lines[y].scroll[plane] & 0x3ff) & (1U << candidate)))
                maps[y] = extra;
        return true;
    }
    return false;
}

static void rebase_scroll(struct scanline *line, unsigned plane, const struct tile_map *map)
{
    uint32_t scroll = line->scroll[plane];
    line->scroll[plane] = (scroll & 0xffff0000) | ((scroll - map->first_column * 8) & 0x1ff);
}

bool vdp_ds_prepare(const struct megadrive *md)
{
    const uint8_t *regs = md->vdp_registers;
    unsigned mode = regs[12] & 6;
    bool interlace = mode == 6;
    unsigned horizontal = regs[16] & 3;
    bool enabled = (regs[1] & 0x40) != 0;
    if ((!md->vdp_row_count && !enabled) || (regs[11] & 4) || (regs[12] & 8) ||
        (mode && !interlace) || horizontal == 2 || (regs[16] & 0x20))
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

    unsigned width = horizontal ? 64 : 32;
    unsigned columns = horizontal == 3 ? 128 : width;
    unsigned height = (regs[16] & 0x10) ? 64 : 32;
    unsigned window_x = (regs[17] & 0x1f) * 16;
    unsigned window_y = (regs[18] & 0x1f) * 8;
    bool window_right = (regs[17] & 0x80) != 0;
    bool window_below = (regs[18] & 0x80) != 0;
    bool window_partial = window_x > left && window_x < left + VDP_VIEW_WIDTH;
    bool window_full = window_right ? window_x <= left : window_x >= left + VDP_VIEW_WIDTH;
    // Maps 0 and 2 are Plane A or window variants. Map 1 is the fixed Plane B.
    struct tile_map maps[MAX_MAPS] = {
        [1] = {.base = (regs[4] & 7) << 13, .width = width, .height = height, .columns = columns},
    };
    uint8_t map_a[VDP_VIEW_HEIGHT], map_b[VDP_VIEW_HEIGHT], sprite_tables[VDP_VIEW_HEIGHT];
    memset(map_b, 1, sizeof(map_b));
    unsigned map_count = 0;
    unsigned origins[MAX_MAPS] = {0xff, 0xff, 0xff, 0xff};
    bool blanking = false;
    const uint8_t *vram = md->memory->vram;
    unsigned hscroll_base = vdp_hscroll_address(regs, 0);
    unsigned hscroll_mask = vdp_hscroll_line_mask(regs);
    unsigned hmask = columns == 128 ? 0x3ff : 0x1ff;
    unsigned field = interlace && md->vdp_odd_field;
    for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y) {
        const struct vdp_scanline *row = raster_row(md, y + top);
        bool active = row ? row->display_enabled : enabled;
        sprite_tables[y] = active ? (row ? row->sprite_table : 0) : UINT8_MAX;
        if (!active) {
            map_a[y] = 0;
            page->lines[y].scroll[0] = page->lines[y].scroll[1] = 0;
            blanking = true;
            continue;
        }
        unsigned guest_y = y + top;
        bool window_row = window_below ? guest_y >= window_y : guest_y < window_y;
        // A DS BG cannot change its map partway across a scanline. Use the
        // bitmap renderer if both Plane A and the window are visible here.
        if (!window_row && window_partial)
            return false;
        bool window = window_row || window_full;
        unsigned offset = (uint16_t)(hscroll_base + (guest_y & hscroll_mask) * 4);
        // VRAM holds the two horizontal scroll words in Genesis byte order.
        uint32_t packed;
        memcpy(&packed, __builtin_assume_aligned(vram + offset, 4), sizeof(packed));
        unsigned horizontal_a = __builtin_bswap16((uint16_t)packed);
        unsigned horizontal_b = __builtin_bswap16((uint16_t)(packed >> 16));
        unsigned h_a = window ? left : (left - horizontal_a) & hmask;
        unsigned h_b = (left - horizontal_b) & hmask;
        const uint16_t *vertical = row ? row->vscroll : md->vsram;
        unsigned v_a = (window ? 0 : vertical[0]) + field;
        unsigned v_b = vertical[1] + field;
        unsigned parity_a = interlace ? v_a & 1 : 0;
        unsigned parity_b = interlace ? v_b & 1 : 0;
        page->lines[y].scroll[0] = h_a | (((top + (v_a >> interlace)) & 0x1ff) << 16);
        page->lines[y].scroll[1] = h_b | (((top + (v_b >> interlace)) & 0x1ff) << 16);
        struct tile_map a = {
            .base = window ? (regs[3] & (wide ? 0x3c : 0x3e)) << 10 :
                             ((row ? row->plane_a_base : regs[2]) & 0x38) << 10,
            .parity = parity_a,
            .width = window ? (wide ? 64 : 32) : width,
            .height = window ? 32 : height,
            .columns = window ? (wide ? 64 : 32) : columns,
        };
        unsigned index = 0;
        if (!map_count) {
            maps[0] = a;
            maps[1].parity = parity_b;
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
        if (maps[1].parity != parity_b)
            return false;
        map_a[y] = index;
        if (columns == 128) {
            if (!window)
                origins[index] &= column_origins(page->lines[y].scroll[0] & 0x3ff);
            origins[1] &= column_origins(page->lines[y].scroll[1] & 0x3ff);
        }
    }
    if (columns == 128) {
        unsigned original_count = map_count;
        for (unsigned i = 0; i < original_count; ++i) {
            if (maps[i].columns != 128)
                continue;
            if (origins[i]) {
                unsigned old = page->maps[i].first_column / 16;
                unsigned block = (origins[i] & (1U << old)) ? old : (unsigned)__builtin_ctz(origins[i]);
                maps[i].first_column = block * 16;
                continue;
            }
            unsigned first, second;
            if (map_count == MAX_MAPS || height != 32 ||
                !split_map_columns(page, i == 1, sprite_tables, i == 1 ? map_b : map_a,
                                   i, map_count, &first, &second))
                return false;
            maps[i].first_column = first;
            maps[map_count] = maps[i];
            maps[map_count++].first_column = second;
        }
    }
    if (!map_count ||
        !prepare_maps(md, page, next, maps, map_count, interlace) ||
        !prepare_sprites(md, page, next, wide, left, top, sprite_tables))
        return false;
    page->raster = blanking || map_count > 2;
    page->change_count = 0;
    for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y) {
        unsigned map = map_a[y];
        if (columns == 128) {
            rebase_scroll(&page->lines[y], 0, &maps[map]);
            rebase_scroll(&page->lines[y], 1, &maps[map_b[y]]);
        }
        page->lines[y].control_a[0] = page->control[map][0];
        page->lines[y].control_a[1] = page->control[map][1];
        page->lines[y].map_b = map_b[y];
        page->lines[y].layers = sprite_tables[y] == UINT8_MAX ? 0 : VISIBLE_LAYERS;
        const struct scanline *line = &page->lines[y];
        uint32_t *scroll = page->hblank_scroll[y ? y - 1 : VDP_VIEW_HEIGHT - 1];
        scroll[0] = scroll[2] = line->scroll[0];
        scroll[1] = scroll[3] = line->scroll[1];
        if (y && page->raster && (line->layers != line[-1].layers ||
                                line->control_a[0] != line[-1].control_a[0] ||
                                line->map_b != line[-1].map_b))
            page->changes[page->change_count++] = y - 1;
    }
    DC_FlushRange(page->hblank_scroll, sizeof(page->hblank_scroll));
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
    visible = true;
    ready = false;
}

void vdp_ds_hide(void)
{
    ready = false;
    if (visible) {
        irqDisable(IRQ_HBLANK);
        irqDisable(IRQ_VCOUNT);
        DMA_CR(SCROLL_DMA) = 0;
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
