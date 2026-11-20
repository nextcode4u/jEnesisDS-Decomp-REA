#include "frontend.h"
#include "frontend_assets.h"

#include <nds.h>
#include <stdarg.h>
#include <stdio.h>

static uint16_t *text_map;
static uint16_t *panel_map;
static int text_column;
static int text_row;

static void load_menu_tiles(uint16_t *destination)
{
    // The release moves these three artwork groups to their menu palette ranges.
    static const struct {
        unsigned end_tile;
        unsigned palette_shift;
    } groups[] = {{77, 0}, {106, 0x40}, {126, 0x20}, {MENU_TILES, 0x50}};

    unsigned pixel = 0;
    for (unsigned group = 0; group < sizeof(groups) / sizeof(groups[0]); ++group) {
        unsigned end = groups[group].end_tile * TILE_PIXELS;
        unsigned shift = groups[group].palette_shift;
        while (pixel < end) {
            uint8_t first = frontend_assets.menu_tiles[pixel] - shift;
            uint8_t second = frontend_assets.menu_tiles[pixel + 1] - shift;
            destination[pixel / 2] = first | (second << 8);
            pixel += 2;
        }
    }
}

static void load_font_tiles(uint16_t *destination)
{
    for (unsigned i = 0; i < sizeof(frontend_assets.font_tiles); i += 2) {
        unsigned first = frontend_assets.font_tiles[i];
        unsigned second = frontend_assets.font_tiles[i + 1];
        if (first)
            first += FONT_PALETTE_START;
        if (second)
            second += FONT_PALETTE_START;
        destination[i / 2] = first | (second << 8);
    }
}

void frontend_init(void)
{
    vramSetBankC(VRAM_C_SUB_BG);
    videoSetModeSub(MODE_0_2D);
    int text = bgInitSub(2, BgType_Text8bpp, BgSize_T_256x256, 31, 4);
    int panel = bgInitSub(3, BgType_Text8bpp, BgSize_T_256x256, 2, 2);
    bgSetPriority(text, 0);
    bgSetPriority(panel, 1);
    text_map = bgGetMapPtr(text);
    panel_map = bgGetMapPtr(panel);
    load_font_tiles(bgGetGfxPtr(text));
    load_menu_tiles(bgGetGfxPtr(panel));
    for (unsigned i = 0; i < FONT_PALETTE_START; ++i)
        BG_PALETTE_SUB[i] = frontend_assets.menu_palette[i];
    for (unsigned i = 0; i < 16; ++i)
        BG_PALETTE_SUB[FONT_PALETTE_START + i] = frontend_assets.font_palette[i];
}

void frontend_cursor(int column, int row)
{
    text_column = column;
    text_row = row;
}

void frontend_write(const char *message)
{
    for (; *message && text_column < UI_COLUMNS; ++message, ++text_column) {
        unsigned glyph = (unsigned char)*message - FONT_FIRST_CHARACTER;
        if (glyph >= FONT_TILES)
            glyph = '?' - FONT_FIRST_CHARACTER;
        text_map[text_row * UI_COLUMNS + text_column] = glyph;
    }
}

void frontend_printf(const char *format, ...)
{
    char line[UI_COLUMNS + 1];
    va_list args;
    va_start(args, format);
    vsnprintf(line, sizeof(line), format, args);
    va_end(args);
    frontend_write(line);
}

void frontend_draw(int selected_row)
{
    for (unsigned i = 0; i < UI_COLUMNS * UI_ROWS; ++i) {
        text_map[i] = 0;
        panel_map[i] = frontend_assets.menu_map[i];
    }
    if (selected_row >= 0 && selected_row < UI_ROWS) {
        uint16_t *row = panel_map + selected_row * UI_COLUMNS;
        row[0] = 0x4b;
        for (unsigned col = 1; col < UI_COLUMNS - 1; ++col)
            row[col] = 0x4c;
        row[UI_COLUMNS - 1] = 0x44b;
    }
}

static void draw_indicator(unsigned column, unsigned width, unsigned top_tile, unsigned bottom_tile)
{
    unsigned cell = 21 * UI_COLUMNS + column;
    for (unsigned i = 0; i < width; ++i) {
        panel_map[cell + i] = top_tile + i;
        panel_map[cell + UI_COLUMNS + i] = bottom_tile + i;
    }
}

void frontend_draw_fps(unsigned frames_per_second)
{
    unsigned tile = 0x6a + frames_per_second / 100 % 10;
    draw_indicator(1, 1, tile, tile + 10);
    tile = 0x6a + frames_per_second / 10 % 10;
    draw_indicator(2, 1, tile, tile + 10);
    tile = 0x6a + frames_per_second % 10;
    draw_indicator(3, 1, tile, tile + 10);
}

void frontend_draw_indicators(unsigned region, const bool slots[2])
{
    enum { EUROPE = 2 };
    bool pal = region == EUROPE;
    draw_indicator(5, 2, pal ? 0x5a : 0x58, pal ? 0x68 : 0x66);
    draw_indicator(17, 3, 0x8a, 0x99);
    for (unsigned slot = 0; slot < 2; ++slot) {
        unsigned tile = 0x7e + slot * 6 + (slots[slot] ? 0 : 3);
        draw_indicator(20 + slot * 3, 3, tile, tile + 15);
    }
    static const uint8_t flag_tiles[] = {0x52, 0x4f, 0x55};
    draw_indicator(28, 3, flag_tiles[region], flag_tiles[region] + 14);
}
