/* Initialized state for browser navigation, touch input and cartridge mapping. */
struct {
    unsigned char highlighted_row;
    unsigned char touch_column;
    unsigned char reset_browser_on_entry;
    unsigned char touch_action;
    unsigned char menu_state;
    unsigned char z80_bus_blocked;
    unsigned char cartridge_map_mode;
    unsigned char cartridge_map_cache;
} frontend_initial_state = {4, 0xff, 1, 2, 4, 1, 1, 0xff};
