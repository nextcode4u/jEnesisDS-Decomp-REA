#include "cartridge.h"

#include <dirent.h>
#include <errno.h>
#include <fat.h>
#include <nds.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

enum { VISIBLE_FILES = 16 };

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

static void draw_browser(const struct browser *browser, const char *error)
{
    consoleClear();
    puts("jEnesisDS\n\nSelect a Genesis ROM");
    if (!browser->count)
        puts("No ROMs in this folder");
    for (size_t row = 0; row < VISIBLE_FILES; ++row) {
        size_t index = browser->first_visible + row;
        if (index >= browser->count)
            break;
        const struct entry *entry = &browser->entries[index];
        printf("%c %c %.27s\n", index == browser->selected ? '>' : ' ',
               entry->directory ? '/' : ' ', entry->name);
    }
    puts("\nD-pad  Select   A  Open\nB  Parent folder");
    if (error)
        printf("%.31s\n", error);
}

static void draw_cartridge(const struct cartridge *cart)
{
    consoleClear();
    puts("Cartridge loaded\n");
    puts(cart->international_title);
    printf("\nFormat       %s\n", cart->format == CARTRIDGE_SMD ? "SMD" : "BIN");
    printf("Size         %lu bytes\n", (unsigned long)cart->size);
    printf("Region       %s\n", cart->region);
    printf("ROM checksum %04X\n", (unsigned)cart->header_checksum);
    printf("Computed     %04X\n", (unsigned)cart->computed_checksum);
    puts("\nGameplay is not available.\nB  Return to ROM browser");
}

int main(void)
{
    videoSetMode(MODE_0_2D);
    BG_PALETTE[0] = RGB15(0, 0, 0);
    consoleDemoInit();
    if (!fatInitDefault()) {
        puts("Could not mount the SD card.\nCheck the DLDI driver.");
        for (;;)
            swiWaitForVBlank();
    }
    struct browser browser = {0};
    struct cartridge cart = {0};
    draw_browser(&browser, read_directory(&browser));

    for (;;) {
        swiWaitForVBlank();
        scanKeys();
        uint32_t keys = keysDown();
        if (cart.data) {
            if (keys & KEY_B) {
                cartridge_unload(&cart);
                draw_browser(&browser, NULL);
            }
            continue;
        }
        if (keys & KEY_B) {
            const char *error = chdir("..") == 0 ? read_directory(&browser) : "Cannot open parent folder";
            draw_browser(&browser, error);
        } else if ((keys & KEY_A) && browser.count) {
            const struct entry *entry = &browser.entries[browser.selected];
            if (entry->directory) {
                const char *error = chdir(entry->name) == 0 ? read_directory(&browser) : "Cannot open folder";
                draw_browser(&browser, error);
            } else {
                const char *error = cartridge_load(&cart, entry->name);
                if (error)
                    draw_browser(&browser, error);
                else
                    draw_cartridge(&cart);
            }
        } else if (keys & (KEY_UP | KEY_DOWN)) {
            if ((keys & KEY_UP) && browser.selected > 0)
                --browser.selected;
            if ((keys & KEY_DOWN) && browser.selected + 1 < browser.count)
                ++browser.selected;
            if (browser.selected < browser.first_visible)
                browser.first_visible = browser.selected;
            if (browser.selected >= browser.first_visible + VISIBLE_FILES)
                browser.first_visible = browser.selected - VISIBLE_FILES + 1;
            draw_browser(&browser, NULL);
        }
    }
}
