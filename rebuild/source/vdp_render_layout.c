/* DS sprite attributes, tile destinations and name-table sizes used by the VDP. */
#include <nds/arm9/sprite.h>
#include <nds/arm9/video.h>
#include <stdint.h>

#define TILE_COUNT(width) {(width), (width) * 2, (width) * 3, (width) * 4}
#define SQUARE ATTR0_SQUARE
#define WIDE ATTR0_WIDE
#define TALL ATTR0_TALL
#define SIZE_8 ATTR1_SIZE_8
#define SIZE_16 ATTR1_SIZE_16
#define SIZE_32 ATTR1_SIZE_32

const struct {
    uint8_t sprite_tile_count[4][4];
    uint16_t sprite_attr0_shape[4][4];
    uint16_t sprite_attr1_size[4][4];
    uint32_t background_map_address[6];
    uint32_t background_tiles_address[3];
    uint32_t plane_table_size_bytes[4][4];
    uint8_t plane_table_width_tiles[4];
} vdp_render_layout = {
    /* Rows are Genesis sprite widths, columns are heights, both in tiles. */
    {TILE_COUNT(1), TILE_COUNT(2), TILE_COUNT(3), TILE_COUNT(4)},
    {
        {SQUARE, TALL, TALL, TALL},
        {WIDE, SQUARE, TALL, TALL},
        {WIDE, WIDE, SQUARE, SQUARE},
        {WIDE, WIDE, SQUARE, SQUARE},
    },
    {
        {SIZE_8, SIZE_8, SIZE_16, SIZE_16},
        {SIZE_8, SIZE_16, SIZE_32, SIZE_32},
        {SIZE_16, SIZE_32, SIZE_32, SIZE_32},
        {SIZE_16, SIZE_32, SIZE_32, SIZE_32},
    },
    {BG_MAP_RAM(0), BG_MAP_RAM(8), BG_MAP_RAM(4), BG_MAP_RAM(12), BG_MAP_RAM(16), BG_MAP_RAM(20)},
    {BG_TILE_RAM(8), BG_TILE_RAM(10), BG_TILE_RAM(12)},
    {
        {0x800, 0x1000, 0x1000, 0x2000},
        {0x1000, 0x2000, 0x2000, 0x2000},
        {0x1000, 0x2000, 0x2000, 0x2000},
        {0x2000, 0x2000, 0x2000, 0x2000},
    },
    {32, 64, 64, 128},
};
