#ifndef JENESIS_FRONTEND_ASSETS_H
#define JENESIS_FRONTEND_ASSETS_H

#include <stdint.h>

enum {
    UI_COLUMNS = 32,
    UI_ROWS = 24,
    TILE_PIXELS = 64,
    FONT_FIRST_CHARACTER = 32,
    FONT_TILES = 96,
    MENU_TILES = 156,
    FONT_PALETTE_START = 240,
};

struct frontend_assets {
    uint16_t font_palette[16];
    uint8_t font_tiles[FONT_TILES * TILE_PIXELS];
    uint16_t menu_palette[256];
    uint8_t menu_tiles[MENU_TILES * TILE_PIXELS];
    uint16_t menu_map[UI_COLUMNS * UI_ROWS];
};

extern const struct frontend_assets frontend_assets;

#endif
