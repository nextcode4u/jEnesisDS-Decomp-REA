#include "cartridge.h"
#include "frontend.h"
#include "megadrive.h"

#include <dirent.h>
#include <errno.h>
#include <fat.h>
#include <nds.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

struct entry {
    char *name;
    bool directory;
};

struct browser {
    struct entry *entries;
    size_t count;
    size_t selected;
    size_t first_visible;
};

static void clear_listing(struct browser *browser)
{
    for (size_t i = 0; i < browser->count; ++i)
        free(browser->entries[i].name);
    free(browser->entries);
    *browser = (struct browser){0};
}

static bool is_cartridge_name(const char *name)
{
    const char *dot = strrchr(name, '.');
    return dot && (strcasecmp(dot, ".bin") == 0 ||
                   strcasecmp(dot, ".gen") == 0 ||
                   strcasecmp(dot, ".md") == 0 ||
                   strcasecmp(dot, ".smd") == 0);
}

static int compare_entries(const void *left, const void *right)
{
    const struct entry *a = left;
    const struct entry *b = right;
    if (a->directory != b->directory)
        return a->directory ? -1 : 1;
    return strcasecmp(a->name, b->name);
}

static const char *read_directory(struct browser *browser)
{
    clear_listing(browser);
    DIR *directory = opendir(".");
    if (!directory)
        return "Cannot open current directory";

    size_t capacity = 0;
    const char *error = NULL;
    for (;;) {
        errno = 0;
        struct dirent *entry = readdir(directory);
        if (!entry) {
            if (errno)
                error = "Cannot read directory";
            break;
        }
        const char *name = entry->d_name;
        if (strcmp(name, ".") == 0 || strcmp(name, "..") == 0)
            continue;
        bool folder = entry->d_type == DT_DIR;
        if (!folder && !is_cartridge_name(name))
            continue;

        if (browser->count == capacity) {
            capacity = capacity ? capacity * 2 : 32;
            struct entry *grown = realloc(browser->entries, capacity * sizeof(*grown));
            if (!grown) {
                error = "Not enough memory for directory";
                break;
            }
            browser->entries = grown;
        }
        char *copy = strdup(name);
        if (!copy) {
            error = "Not enough memory for filename";
            break;
        }
        browser->entries[browser->count++] = (struct entry){copy, folder};
    }
    closedir(directory);
    if (browser->count > 1)
        qsort(browser->entries, browser->count, sizeof(*browser->entries), compare_entries);
    return error;
}

struct application {
    struct browser browser;
    struct cartridge cart;
    struct megadrive md;
    char filename[29];
    enum frontend_view view;
    enum frontend_view before_settings;
    enum genesis_region region;
};

static void draw_browser(const struct browser *browser)
{
    if (!browser->count) {
        frontend_cursor(2, MENU_FIRST_ROW);
        fputs("No ROMs in this folder", stdout);
    }
    for (size_t row = 0; row < MENU_ROW_COUNT; ++row) {
        size_t index = browser->first_visible + row;
        if (index >= browser->count)
            break;
        const struct entry *entry = &browser->entries[index];
        frontend_cursor(1, MENU_FIRST_ROW + (int)row);
        printf("%s%.28s", entry->directory ? "/" : "", entry->name);
    }
    frontend_cursor(2, 21);
    fputs("A Open      B Parent folder", stdout);
}

static void draw_cartridge(const struct application *app)
{
    const struct m68k *cpu = &app->md.cpu;
    frontend_cursor(2, 4);
    fputs(app->view == VIEW_PAUSED ? "Paused" : "Now Playing", stdout);
    frontend_cursor(2, 6);
    printf("%.28s", app->filename);
    frontend_cursor(2, 7);
    printf("%.28s", app->cart.international_title);
    frontend_cursor(2, 9);
    printf("ROM Size      %lu", (unsigned long)app->cart.size);
    frontend_cursor(2, 10);
    printf("ROM Checksum  %04X", (unsigned)app->cart.header_checksum);
    frontend_cursor(2, 11);
    printf("ROM Type      %s", app->cart.format == CARTRIDGE_SMD ? "SMD" : "BIN");
    if (cpu->stopped) {
        frontend_cursor(2, 14);
        printf("Stopped at %06lX (%04X)", (unsigned long)(cpu->instruction_address & 0xffffff),
               (unsigned)cpu->opcode);
    }
    if (!cpu->stopped) {
        frontend_cursor(2, 18);
        fputs(app->view == VIEW_PAUSED ? "Touch or SELECT to resume" : "Touch the panel to pause", stdout);
    }

    frontend_cursor(2, 21);
    fputs((app->md.version & 0x40) ? "PAL" : "NTSC", stdout);
    frontend_cursor(15, 21);
    fputs("SAVE", stdout);
    frontend_cursor(20, 21);
    fputs("[1][2]", stdout);
}

static void draw_settings(enum genesis_region region)
{
    static const char *const regions[] = {"Auto", "USA", "Japan", "Europe"};
    frontend_cursor(2, 5);
    fputs("Configuration", stdout);
    frontend_cursor(2, 8);
    printf("Country          %s", regions[region]);
    frontend_cursor(2, 11);
    fputs("Applies to the next ROM", stdout);
    frontend_cursor(2, 21);
    fputs("A Change       SELECT Back", stdout);
}

static void draw_screen(const struct application *app, const char *message)
{
    const struct browser *browser = &app->browser;
    bool has_notice = message != NULL;
    int selected = -1;
    if (app->view == VIEW_BROWSER && browser->count)
        selected = MENU_FIRST_ROW + (int)(browser->selected - browser->first_visible);
    if (app->view == VIEW_SETTINGS)
        selected = 8;

    frontend_draw(app->view, selected);
    switch (app->view) {
    case VIEW_BROWSER:
        draw_browser(browser);
        if (!message && app->cart.data)
            message = "SELECT  Continue";
        break;
    case VIEW_CARTRIDGE:
    case VIEW_PAUSED:
        draw_cartridge(app);
        if (!message)
            message = app->view == VIEW_PAUSED ? "SELECT  Continue" : "SELECT  ROM browser";
        break;
    case VIEW_SETTINGS:
        draw_settings(app->region);
        break;
    }
    if (message) {
        frontend_cursor(2, 22);
        printf("%.28s", message);
    }
    if (app->view == VIEW_BROWSER && browser->count && !has_notice) {
        unsigned current = browser->first_visible / MENU_ROW_COUNT + 1;
        unsigned total = (browser->count - 1) / MENU_ROW_COUNT + 1;
        frontend_cursor(20, 22);
        printf("%u / %u", current, total);
    }
}

static const char *open_selection(struct application *app)
{
    struct browser *browser = &app->browser;
    const struct entry *entry = &browser->entries[browser->selected];
    if (entry->directory)
        return chdir(entry->name) == 0 ? read_directory(browser) : "Cannot open folder";

    // Keep one cartridge in memory so a large ROM can replace another.
    cartridge_unload(&app->cart);
    BG_PALETTE[0] = 0;
    const char *error = cartridge_load(&app->cart, entry->name);
    if (!error) {
        snprintf(app->filename, sizeof(app->filename), "%.28s", entry->name);
        megadrive_reset(&app->md, &app->cart, app->region);
        app->view = VIEW_CARTRIDGE;
    }
    return error;
}

static void change_selection(struct browser *browser, uint32_t keys)
{
    if (!browser->count)
        return;
    if ((keys & KEY_LEFT) && browser->first_visible > 0)
        browser->selected = browser->first_visible - MENU_ROW_COUNT;
    else if ((keys & KEY_RIGHT) && browser->first_visible + MENU_ROW_COUNT < browser->count)
        browser->selected = browser->first_visible + MENU_ROW_COUNT;
    else if ((keys & KEY_UP) && browser->selected > 0)
        --browser->selected;
    else if ((keys & KEY_DOWN) && browser->selected + 1 < browser->count)
        ++browser->selected;
    browser->first_visible = browser->selected / MENU_ROW_COUNT * MENU_ROW_COUNT;
}

static bool handle_menu(struct application *app, uint32_t keys, const touchPosition *touch,
                        const char **message)
{
    bool tapped_header = touch && touch->py < 24;
    bool tapped_rom = tapped_header && touch->px >= 8 && touch->px < 40;
    bool tapped_settings = tapped_header && touch->px >= 48 && touch->px < 88;
    if (app->view == VIEW_SETTINGS) {
        if ((keys & (KEY_SELECT | KEY_B)) || tapped_settings)
            app->view = app->before_settings;
        else if ((keys & KEY_A) || (touch && touch->py >= 64 && touch->py < 72))
            app->region = (app->region + 1) % GENESIS_REGION_COUNT;
        else
            return false;
        return true;
    }
    if (tapped_settings) {
        app->before_settings = app->view;
        app->view = VIEW_SETTINGS;
        return true;
    }
    if (tapped_rom || (keys & KEY_SELECT)) {
        if (app->view == VIEW_BROWSER && app->cart.data)
            app->view = VIEW_CARTRIDGE;
        else if (app->view == VIEW_PAUSED && !tapped_rom)
            app->view = VIEW_CARTRIDGE;
        else if (app->view != VIEW_BROWSER)
            app->view = VIEW_BROWSER;
        else
            return false;
        return true;
    }
    if (app->view == VIEW_BROWSER) {
        if (keys & KEY_B) {
            *message = chdir("..") == 0 ? read_directory(&app->browser) : "Cannot open parent folder";
        } else if ((keys & KEY_A) && app->browser.count) {
            *message = open_selection(app);
        } else if (keys & (KEY_UP | KEY_DOWN | KEY_LEFT | KEY_RIGHT)) {
            change_selection(&app->browser, keys);
        } else {
            return false;
        }
        return true;
    }
    if (!touch || touch->py < 24)
        return false;
    if (touch->py >= 168 && touch->px >= 160 && touch->px < 208) {
        *message = "Save states pending";
    } else if (!app->md.cpu.stopped) {
        app->view = app->view == VIEW_PAUSED ? VIEW_CARTRIDGE : VIEW_PAUSED;
    } else {
        return false;
    }
    return true;
}

int main(void)
{
    frontend_init();
    if (!fatInitDefault()) {
        frontend_draw(VIEW_BROWSER, -1);
        frontend_cursor(2, MENU_FIRST_ROW);
        fputs("Could not mount the SD card.", stdout);
        frontend_cursor(2, MENU_FIRST_ROW + 2);
        fputs("Check the DLDI driver.", stdout);
        for (;;)
            swiWaitForVBlank();
    }
    static struct application app;
    keysSetRepeat(18, 4);
    draw_screen(&app, read_directory(&app.browser));

    for (;;) {
        swiWaitForVBlank();
        scanKeys();
        uint32_t keys = keysDown() | (keysDownRepeat() & (KEY_UP | KEY_DOWN));
        touchPosition touch;
        if (keys & KEY_TOUCH)
            touchRead(&touch);
        const char *message = NULL;
        if (handle_menu(&app, keys, keys & KEY_TOUCH ? &touch : NULL, &message))
            draw_screen(&app, message);
        if (app.view == VIEW_CARTRIDGE && !app.md.cpu.stopped) {
            megadrive_run_frame(&app.md);
            BG_PALETTE[0] = megadrive_backdrop(&app.md);
            if (app.md.cpu.stopped)
                draw_screen(&app, NULL);
        }
    }
}
