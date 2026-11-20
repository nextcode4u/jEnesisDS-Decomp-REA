#include "frontend.h"

#include <nds.h>
#include <stdio.h>

enum {
    SCREEN_COLS = 32,
    SCREEN_ROWS = 24,
    PALETTE_BANK = 13,
    EDGE_LEFT = 1,
    EDGE_RIGHT = 2,
    EDGE_TOP = 4,
    EDGE_BOTTOM = 8,
};

enum color {
    INK = 1,
    CHARCOAL,
    SELECTED,
    STRIP,
    COPPER,
    STEEL,
    SHADOW,
    PAPER,
    JADE,
};

enum tile {
    TILE_INK = 1,
    TILE_ACTIVE,
    TILE_SLOT,
    TILES_PANEL = 16,
    TILES_SELECTION = 32,
    TILES_FOOTER = 48,
    TILES_CARTRIDGE_ICON = 64,
    TILES_PAD_ICON = 72,
};

static PrintConsole *text;
static uint16_t *panel_map;
static uint16_t *panel_tiles;

static void write_tile(int index, const uint8_t pixels[64])
{
    // Four 4-bit pixels per halfword. DS video memory takes halfword writes.
    for (int i = 0; i < 64; i += 4)
        panel_tiles[index * 16 + i / 4] = pixels[i] | (pixels[i + 1] << 4) |
            (pixels[i + 2] << 8) | (pixels[i + 3] << 12);
}

static void fill_tiles(int x, int y, int width, int height, int tile)
{
    uint16_t entry = TILE_PALETTE(PALETTE_BANK) | tile;
    for (int row = y; row < y + height; ++row)
        for (int col = x; col < x + width; ++col)
            panel_map[row * SCREEN_COLS + col] = entry;
}

static void make_frame_tiles(int base, enum color fill, enum color border, int inset)
{
    for (int edges = 0; edges < 16; ++edges) {
        uint8_t pixels[64];
        for (int y = 0; y < 8; ++y) {
            for (int x = 0; x < 8; ++x) {
                int distance = 8;
                if (edges & EDGE_LEFT)
                    distance = x;
                if ((edges & EDGE_RIGHT) && 7 - x < distance)
                    distance = 7 - x;
                if ((edges & EDGE_TOP) && y + 3 - inset < distance)
                    distance = y + 3 - inset;
                if ((edges & EDGE_BOTTOM) && 10 - y - inset < distance)
                    distance = 10 - y - inset;
                pixels[y * 8 + x] = distance < 3 ? INK : distance == 3 ? border : fill;
            }
        }
        write_tile(base + edges, pixels);
    }
}

static enum color cartridge_pixel(int x, int y)
{
    if (x < 4 || x > 27 || y < 2 || y > 13 ||
        ((x == 4 || x == 27) && y == 2))
        return INK;
    if (y == 13 || x == 4 || x == 27)
        return COPPER;
    if (x >= 8 && x <= 23 && y >= 5 && y <= 9)
        return x < 12 ? JADE : PAPER;
    return y >= 11 ? SHADOW : STEEL;
}

static enum color pad_pixel(int x, int y)
{
    int taper = y < 6 ? 6 - y : 0;
    if (y < 2 || y > 13 || x < 2 + taper || x > 29 - taper ||
        (y > 10 && x > 8 && x < 23))
        return INK;
    if ((x == 9 && y >= 5 && y <= 9) || (y == 7 && x >= 7 && x <= 11))
        return PAPER;
    if ((x == 21 && y == 8) || (x == 24 && y == 6))
        return JADE;
    if (y < 4 || y == 13 || x == 2 + taper || x == 29 - taper)
        return COPPER;
    return y > 9 ? SHADOW : STEEL;
}

static void make_icon(int base, enum color (*pixel)(int, int))
{
    for (int tile_y = 0; tile_y < 2; ++tile_y) {
        for (int tile_x = 0; tile_x < 4; ++tile_x) {
            uint8_t pixels[64];
            for (int y = 0; y < 8; ++y)
                for (int x = 0; x < 8; ++x)
                    pixels[y * 8 + x] = pixel(tile_x * 8 + x, tile_y * 8 + y);
            write_tile(base + tile_y * 4 + tile_x, pixels);
        }
    }
}

static void draw_icon(int column, int base, bool active)
{
    for (int y = 0; y < 2; ++y)
        for (int x = 0; x < 4; ++x)
            fill_tiles(column + x, y, 1, 1, base + 4 * y + x);
    if (active)
        fill_tiles(column + 1, 2, 2, 1, TILE_ACTIVE);
}

static void draw_frame(int first, int last, int base, int selected)
{
    for (int y = first; y <= last; ++y) {
        int edges = (y == first ? EDGE_TOP : 0) | (y == last ? EDGE_BOTTOM : 0);
        int row = (y == selected ? TILES_SELECTION : base) + edges;
        fill_tiles(0, y, 1, 1, row + EDGE_LEFT);
        fill_tiles(1, y, SCREEN_COLS - 2, 1, row);
        fill_tiles(SCREEN_COLS - 1, y, 1, 1, row + EDGE_RIGHT);
    }
}

void frontend_init(void)
{
    videoSetMode(MODE_0_2D);
    BG_PALETTE[0] = 0;
    text = consoleDemoInit();
    int panel = bgInitSub(1, BgType_Text4bpp, BgSize_T_256x256, 20, 0);
    bgSetPriority(panel, 1);
    panel_map = bgGetMapPtr(panel);
    panel_tiles = bgGetGfxPtr(panel);

    for (int i = 0; i < 16; ++i) {
        panel_tiles[TILE_INK * 16 + i] = INK * 0x1111;
        panel_tiles[TILE_ACTIVE * 16 + i] = (i < 2 ? JADE : INK) * 0x1111;
        panel_tiles[TILE_SLOT * 16 + i] = SHADOW * 0x1111;
    }
    make_frame_tiles(TILES_PANEL, CHARCOAL, COPPER, 3);
    make_frame_tiles(TILES_SELECTION, SELECTED, COPPER, 3);
    make_frame_tiles(TILES_FOOTER, STRIP, STEEL, 0);
    make_icon(TILES_CARTRIDGE_ICON, cartridge_pixel);
    make_icon(TILES_PAD_ICON, pad_pixel);

    uint16_t *palette = BG_PALETTE_SUB + PALETTE_BANK * 16;
    palette[INK] = RGB15(2, 2, 3);
    palette[CHARCOAL] = RGB15(10, 10, 11);
    palette[SELECTED] = RGB15(7, 15, 13);
    palette[STRIP] = RGB15(6, 6, 7);
    palette[COPPER] = RGB15(23, 14, 8);
    palette[STEEL] = RGB15(13, 14, 15);
    palette[SHADOW] = RGB15(5, 5, 6);
    palette[PAPER] = RGB15(26, 23, 17);
    palette[JADE] = RGB15(12, 23, 17);
}

void frontend_cursor(int column, int row)
{
    consoleSetCursor(text, column, row);
}

void frontend_draw(enum frontend_view view, int selected_row)
{
    fill_tiles(0, 0, SCREEN_COLS, SCREEN_ROWS, TILE_INK);
    draw_frame(3, 20, TILES_PANEL, selected_row);
    draw_frame(21, 22, TILES_FOOTER, -1);
    draw_icon(1, TILES_CARTRIDGE_ICON, view == VIEW_BROWSER);
    draw_icon(6, TILES_PAD_ICON, view == VIEW_SETTINGS);
    if (view == VIEW_CARTRIDGE || view == VIEW_PAUSED)
        fill_tiles(20, 21, 6, 1, TILE_SLOT);
    consoleClear();
    consoleSetColor(text, CONSOLE_LIGHT_YELLOW);
    frontend_cursor(21, 1);
    fputs("jEnesisDS", stdout);
    consoleSetColor(text, CONSOLE_WHITE);
}
