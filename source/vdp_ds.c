#include "vdp_ds.h"
#include "megadrive.h"
#include "vdp_render.h"

#include <nds.h>
#include <string.h>

enum {
    MAP_WORDS = 4096,
    BG_PATTERNS = 1024,
    GENESIS_PATTERNS = 2048,
    OBJ_PATTERNS = 512,
    OBJECTS = 128,
    TILE_BYTES = 32,
    MAPS_PER_PAGE = 4,
};

struct page {
    uint32_t scroll[VDP_VIEW_HEIGHT][2];
    uint16_t control[4];
    uint16_t objects[OBJECTS][4];
    // Only a changed source pattern or a dirty VRAM block needs an upload.
    uint16_t tile_slots[GENESIS_PATTERNS];
    uint16_t pattern_sources[BG_PATTERNS];
    uint32_t pattern_revisions[BG_PATTERNS];
    uint32_t map_revision, last_revision;
    unsigned map_base[2], width, height;
    bool maps_cached;
    uint16_t sprite_sources[OBJ_PATTERNS * 4];
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

static void upload_pattern(volatile uint16_t *dest, const uint8_t *source)
{
    for (unsigned i = 0; i < TILE_BYTES / 2; ++i) {
        unsigned pair = source[2*i] | (source[2*i+1] << 8);
        dest[i] = ((pair & 0x0f0f) << 4) | ((pair & 0xf0f0) >> 4);
    }
}

static void set_scroll(unsigned y)
{
    const uint32_t *entry = pages[visible_page].scroll[y];
    volatile uint32_t *scroll = (volatile uint32_t *)0x04000010;
    // BG0/BG2 share plane A and BG1/BG3 share plane B.
    scroll[0] = scroll[2] = entry[0];
    scroll[1] = scroll[3] = entry[1];
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

static void refresh_pattern(const struct megadrive *md, struct page *page,
                            volatile uint16_t *tiles, unsigned slot,
                            unsigned pattern, bool already_written)
{
    uint32_t revision = md->vram_revisions[pattern];
    if (!already_written || page->pattern_sources[slot] != pattern ||
        page->pattern_revisions[slot] != revision) {
        upload_pattern(tiles + slot * (TILE_BYTES / 2), md->vram + pattern * TILE_BYTES);
        page->pattern_sources[slot] = pattern;
        page->pattern_revisions[slot] = revision;
    }
}

static bool update_map(const struct megadrive *md, struct page *page, unsigned plane,
                       unsigned next, unsigned base, unsigned width, unsigned height,
                       unsigned old_count, bool incremental)
{
    unsigned tile_base = 4 + next * 2;
    volatile uint16_t *tiles = (uint16_t *)BG_GFX + tile_base * 8192;
    unsigned high_map = next * MAPS_PER_PAGE + plane;
    unsigned low_map = high_map + 2;
    volatile uint16_t *high = (uint16_t *)BG_GFX + high_map * MAP_WORDS;
    volatile uint16_t *low = (uint16_t *)BG_GFX + low_map * MAP_WORDS;
    unsigned size = (width == 64 ? 1 : 0) | (height == 64 ? 2 : 0);
    page->control[plane] = BG_MAP_BASE(high_map * 4) | BG_TILE_BASE(tile_base) | size << 14;
    page->control[plane + 2] = BG_MAP_BASE(low_map * 4) | BG_TILE_BASE(tile_base) | size << 14 | 2;

    unsigned row_shift = width == 64 ? 6 : 5;
    for (unsigned cell = 0; cell < width * height; cell += 16) {
        unsigned address = base + cell * 2;
        if (incremental && (int32_t)(md->vram_revisions[address / TILE_BYTES] -
                                     page->map_revision) <= 0)
            continue;
        // Genesis rows are linear. DS text maps split into 32 x 32 screens.
        unsigned x = cell & (width - 1), y = cell >> row_shift;
        unsigned index = ((y >> 5) * (width >> 5) + (x >> 5)) * 1024 +
                         (y & 31) * 32 + (x & 31);
        for (unsigned j = 0; j < 16; ++j) {
            uint16_t attr = vram_word(md, address + 2*j);
            unsigned pattern = attr & 0x7ff;
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
                         unsigned width, unsigned height)
{
    // The first half of bank A is two pages of maps. Tile data follows them.
    unsigned tile_base = 4 + next * 2;
    volatile uint16_t *tiles = (uint16_t *)BG_GFX + tile_base * 8192;
    unsigned bytes = width * height * 2;
    unsigned bases[2] = {(md->vdp_registers[2] & 0x38) << 10, (md->vdp_registers[4] & 7) << 13};
    bool cacheable = bases[0] + bytes <= 0x10000 && bases[1] + bytes <= 0x10000;
    unsigned old_count = page->used_patterns;
    bool incremental = cacheable && page->maps_cached && page->width == width &&
        page->height == height && page->map_base[0] == bases[0] &&
        page->map_base[1] == bases[1] &&
        md->video_revision - page->map_revision < UINT32_C(0x80000000);
    if (incremental && update_map(md, page, 0, next, bases[0], width, height, old_count, true) &&
        update_map(md, page, 1, next, bases[1], width, height, old_count, true)) {
        for (unsigned slot = 1; slot < old_count; ++slot)
            refresh_pattern(md, page, tiles, slot, page->pattern_sources[slot], true);
    } else {
        page->maps_cached = false;
        old_count = page->used_patterns;
        memset(page->tile_slots, 0xff, sizeof(page->tile_slots));
        if (!old_count)
            for (unsigned i = 0; i < TILE_BYTES / 2; ++i)
                tiles[i] = 0;
        page->used_patterns = 1;
        if (!update_map(md, page, 0, next, bases[0], width, height, old_count, false) ||
            !update_map(md, page, 1, next, bases[1], width, height, old_count, false)) {
            page->used_patterns = 0;
            return false;
        }
    }
    page->map_base[0] = bases[0];
    page->map_base[1] = bases[1];
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

static bool prepare_sprites(const struct megadrive *md, struct page *page, unsigned next,
                            bool wide, int left, int top)
{
    unsigned table = (md->vdp_registers[5] & (wide ? 0x7e : 0x7f)) << 9;
    unsigned limit = wide ? 80 : 64;
    unsigned link = 0, count = 0, seen = 0, blocks = 0;
    unsigned old_blocks = page->used_sprite_patterns;
    uint8_t line_counts[VDP_VIEW_HEIGHT] = {0};
    do {
        unsigned address = table + link * 8;
        uint16_t size_link = vram_word(md, address + 2);
        uint16_t attr = vram_word(md, address + 4);
        int y = (vram_word(md, address) & 0x1ff) - 128 - top;
        int x = (vram_word(md, address + 6) & 0x1ff) - 128 - left;
        unsigned width = ((size_link >> 10) & 3) + 1, height = ((size_link >> 8) & 3) + 1;
        int bottom = y + (int)(height * 8);
        for (int row = y < 0 ? 0 : y; row < bottom && row < VDP_VIEW_HEIGHT; ++row) {
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
                if (sy <= -(int)(h * 8) || sy >= VDP_VIEW_HEIGHT)
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
                        unsigned pattern = ((attr & 0x7ff) + (tx+ox)*height + ty+oy) & 0x7ff;
                        unsigned offset = oy*w + ox;
                        unsigned index = blocks*4 + offset;
                        uint32_t revision = md->vram_revisions[pattern];
                        if (index/4 >= old_blocks || page->sprite_sources[index] != pattern + 1 ||
                            page->sprite_revisions[index] != revision) {
                            upload_pattern(tiles + offset * (TILE_BYTES / 2), md->vram + pattern * TILE_BYTES);
                            page->sprite_sources[index] = pattern + 1;
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
    page->used_sprite_patterns = blocks;
    for (; count < OBJECTS; ++count)
        page->objects[count][0] = 0x0200;
    return true;
}

bool vdp_ds_prepare(const struct megadrive *md)
{
    const uint8_t *regs = md->vdp_registers;
    if (md->vdp_raster_layout || !(regs[1] & 0x40) || (regs[11] & 4) || (regs[12] & 0x0e) ||
        (regs[16] & 0x22) || (regs[17] & 0x9f) || (regs[18] & 0x9f))
        return false;
    bool wide = (regs[12] & 1) != 0;
    unsigned left = wide ? 32 : 0, top = (regs[1] & 8) ? 24 : 16;
    unsigned next = visible_page ^ 1;
    struct page *page = &pages[next];
    if (md->video_revision < page->last_revision) {
        page->used_patterns = 0;
        page->used_sprite_patterns = 0;
        memset(page->sprite_sources, 0, sizeof(page->sprite_sources));
        page->maps_cached = false;
    }
    page->last_revision = md->video_revision;
    if (!prepare_maps(md, page, next, (regs[16] & 1) ? 64 : 32, (regs[16] & 0x10) ? 64 : 32) ||
        !prepare_sprites(md, page, next, wide, left, top))
        return false;
    for (unsigned y = 0; y < VDP_VIEW_HEIGHT; ++y) {
        unsigned scroll = vdp_hscroll_address(regs, y + top);
        for (unsigned plane = 0; plane < 2; ++plane) {
            unsigned h = (left - vram_word(md, scroll + plane * 2)) & 0x1ff;
            unsigned v = (top + megadrive_scanline_vscroll(md, y + top, plane)) & 0x1ff;
            page->scroll[y][plane] = h | (v << 16);
        }
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
                 DISPLAY_SPR_1D | DISPLAY_SPR_1D_SIZE_128);
    volatile uint16_t *control = &REG_BG0CNT;
    for (unsigned i = 0; i < 4; ++i)
        control[i] = page->control[i];
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
