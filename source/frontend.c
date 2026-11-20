#include "frontend.h"

#include <nds.h>
#include <stdio.h>

enum {
    SCREEN_COLS = 32,
    SCREEN_ROWS = 24,
    PALETTE_BANK = 13,
};

enum panel_tile {
    TILE_FRAME = 1,
    TILE_CONTENT,
    TILE_HIGHLIGHT,
    TILE_BUTTON,
    TILE_ACTIVE,
    TILE_FOOTER,
};

static PrintConsole *text;
static uint16_t *panel_map;

static void fill_tiles(int x, int y, int width, int height, enum panel_tile tile)
{
    uint16_t entry = TILE_PALETTE(PALETTE_BANK) | tile;
    for (int row = y; row < y + height; ++row)
        for (int col = x; col < x + width; ++col)
            panel_map[row * SCREEN_COLS + col] = entry;
}

void frontend_init(void)
{
    videoSetMode(MODE_0_2D);
    BG_PALETTE[0] = 0;
    text = consoleDemoInit();
    int panel = bgInitSub(1, BgType_Text4bpp, BgSize_T_256x256, 20, 0);
    bgSetPriority(panel, 1);
    panel_map = bgGetMapPtr(panel);
    uint16_t *graphics = bgGetGfxPtr(panel);
    for (unsigned tile = TILE_FRAME; tile <= TILE_FOOTER; ++tile)
        for (unsigned word = 0; word < 16; ++word)
            graphics[tile * 16 + word] = tile * 0x1111;

    uint16_t *palette = BG_PALETTE_SUB + PALETTE_BANK * 16;
    palette[TILE_FRAME] = RGB15(3, 6, 12);
    palette[TILE_CONTENT] = RGB15(6, 9, 17);
    palette[TILE_HIGHLIGHT] = RGB15(5, 16, 22);
    palette[TILE_BUTTON] = RGB15(9, 11, 22);
    palette[TILE_ACTIVE] = RGB15(10, 16, 25);
    palette[TILE_FOOTER] = RGB15(5, 7, 15);
}

void frontend_cursor(int column, int row)
{
    consoleSetCursor(text, column, row);
}

void frontend_draw(enum frontend_view view, int selected_row)
{
    fill_tiles(0, 0, SCREEN_COLS, SCREEN_ROWS, TILE_FRAME);
    fill_tiles(1, 3, 30, 17, TILE_CONTENT);
    fill_tiles(1, 21, 30, 2, TILE_FOOTER);
    fill_tiles(1, 0, 4, 3, view == VIEW_BROWSER ? TILE_ACTIVE : TILE_BUTTON);
    fill_tiles(6, 0, 5, 3, view == VIEW_SETTINGS ? TILE_ACTIVE : TILE_BUTTON);
    if (view == VIEW_CARTRIDGE || view == VIEW_PAUSED)
        fill_tiles(20, 21, 6, 1, TILE_BUTTON);
    if (selected_row >= MENU_FIRST_ROW && selected_row < MENU_FIRST_ROW + MENU_ROW_COUNT)
        fill_tiles(1, selected_row, 30, 1, TILE_HIGHLIGHT);
    consoleClear();
    frontend_cursor(1, 1);
    fputs(" ROM", stdout);
    frontend_cursor(6, 1);
    fputs(" SET", stdout);
    frontend_cursor(21, 1);
    fputs("jEnesisDS", stdout);
}
