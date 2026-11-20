#ifndef JENESIS_FRONTEND_H
#define JENESIS_FRONTEND_H

#include <stdbool.h>

enum frontend_view {
    VIEW_BROWSER,
    VIEW_CARTRIDGE,
    VIEW_PAUSED,
    VIEW_SETTINGS,
    VIEW_SAVE,
};

enum {
    MENU_FIRST_ROW = 4,
    MENU_ROW_COUNT = 16,
    SAVE_LOAD_ROW = 17,
    SAVE_WRITE_ROW,
    SAVE_CANCEL_ROW,
};

void frontend_init(void);
void frontend_draw(int selected_row);
void frontend_draw_fps(unsigned frames_per_second);
void frontend_draw_indicators(unsigned region, const bool slots[2]);
void frontend_cursor(int column, int row);
void frontend_write(const char *message);
void frontend_printf(const char *format, ...) __attribute__((format(printf, 1, 2)));

#endif
