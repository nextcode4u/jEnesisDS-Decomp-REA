#ifndef JENESIS_FRONTEND_H
#define JENESIS_FRONTEND_H

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
};

void frontend_init(void);
void frontend_draw(enum frontend_view view, int selected_row);
void frontend_cursor(int column, int row);

#endif
