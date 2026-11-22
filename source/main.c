#include "frame_pacing.h"
#include "cartridge.h"
#include "frontend.h"
#include "megadrive.h"
#include "psg.h"
#include "profile.h"
#include "savestate.h"
#include "vdp_ds.h"
#include "vdp_render.h"

#include <dirent.h>
#include <errno.h>
#include <fat.h>
#ifdef JENESIS_PROFILE
#include <fcntl.h>
#endif
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
    struct megadrive *md;
    char filename[29];
    char *save_path;
    char *sram_path;
    uint32_t save_identity;
    uint16_t sound_generation;
    unsigned save_slot;
    unsigned measured_fps;
    unsigned measured_video_fps;
    int save_line;
    int settings_line;
    bool slots[2];
    bool vertical_scaling;
    enum vdp_horizontal_view horizontal_view;
    enum frontend_view view;
    enum frontend_view before_settings;
    enum frontend_view before_save;
    enum genesis_region region;
};

// The bitmap renderer writes cached RAM. Upload the completed page in one
// transfer to avoid contending with the display on every pixel store.
static uint16_t bitmap_pixels[VDP_VIEW_WIDTH * VDP_VIEW_HEIGHT / 2] __attribute__((aligned(32)));
static int display_bg;
static unsigned bitmap_visible, bitmap_queued;
static volatile bool field_visible;
static bool field_queued;
static uint32_t display_revision;
static bool display_visible;
enum game_output { OUTPUT_NONE, OUTPUT_BITMAP, OUTPUT_TILES };
static enum game_output current_output;
static volatile enum game_output pending_output;
static uint16_t palette_queued[64];
static uint16_t palette_source[64];
static bool palette_valid;
static volatile bool palette_pending;
static volatile uint32_t vblank_count;
static volatile uint32_t presented_frames;
enum { FRAME_TIMER = 0, FRAME_TIMER_DIVIDER = 64 };

#ifdef JENESIS_PROFILE
enum { PROFILE_WINDOWS = 128, PROFILE_WINDOW_FRAMES = 60 };

struct profile_window {
    unsigned frames, vblanks, core_ticks, max_core_ticks, z80_ticks;
    unsigned draw_ticks, draws, submit_ticks, submitted, no_slot, send_failed;
    struct audio_profile audio;
};

static struct profile_window profile_window, profile_windows[PROFILE_WINDOWS];
static struct audio_profile profile_audio;
static unsigned profile_window_count;

static void profile_receive_audio(void)
{
    while (fifoCheckDatamsg(PROFILE_AUDIO_FIFO)) {
        struct audio_profile report;
        if (fifoGetDatamsg(PROFILE_AUDIO_FIFO, sizeof(report), (uint8_t *)&report) == sizeof(report))
            profile_audio = report;
    }
}

static void profile_store_window(void)
{
    if (!profile_window.frames)
        return;
    profile_window.audio = profile_audio;
    profile_windows[profile_window_count++ % PROFILE_WINDOWS] = profile_window;
    profile_window = (struct profile_window){0};
}

static bool profile_export(void)
{
    profile_store_window();
    if (!profile_window_count)
        return true;
    char path[sizeof("nand:/jenesis-profile.csv")];
    int path_size = snprintf(path, sizeof(path), "%sjenesis-profile.csv", fatGetDefaultDrive());
    if (path_size < 0 || (size_t)path_size >= sizeof(path))
        return false;
    int file = open(path, O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (file < 0)
        return false;
    static const char header[] =
        "window,frames,vblanks,core_ticks,max_core_ticks,z80_ticks,draw_ticks,draws,"
        "submit_ticks,submitted,no_slot,send_failed,arm7_received,arm7_mixed,"
        "arm7_starved,arm7_deferred,arm7_missed,arm7_max_mix_ticks\n";
    bool ok = write(file, header, sizeof(header) - 1) == sizeof(header) - 1;
    unsigned first = profile_window_count > PROFILE_WINDOWS ? profile_window_count - PROFILE_WINDOWS : 0;
    for (unsigned i = first; ok && i < profile_window_count; ++i) {
        const struct profile_window *row = &profile_windows[i % PROFILE_WINDOWS];
        char line[208];
        int size = snprintf(line, sizeof(line), "%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u\n",
                            i, row->frames, row->vblanks, row->core_ticks, row->max_core_ticks, row->z80_ticks,
                            row->draw_ticks, row->draws, row->submit_ticks, row->submitted, row->no_slot,
                            row->send_failed, row->audio.received, row->audio.mixed, row->audio.starved,
                            row->audio.deferred, row->audio.missed, row->audio.max_mix_ticks);
        ok = size > 0 && (size_t)size < sizeof(line) && write(file, line, size) == size;
    }
    if (ok && fsync(file) != 0)
        ok = false;
    return close(file) == 0 && ok;
}
#endif

static void init_game_display(void)
{
    videoSetMode(MODE_5_2D);
    vdp_ds_init();
    vramSetBankD(VRAM_D_MAIN_BG_0x06040000);
    bitmap_visible = 16;
    display_bg = bgInit(2, BgType_Bmp8, BgSize_B8_256x256, bitmap_visible, 0);
    bgHide(display_bg);
    BG_PALETTE[0] = 0;
}

static void present_game_frame(void)
{
    if (pending_output == OUTPUT_TILES) {
        vdp_ds_present();
    } else if (pending_output == OUTPUT_BITMAP) {
        if (current_output != OUTPUT_BITMAP) {
            vdp_ds_hide();
            videoSetMode(MODE_5_2D);
            display_bg = bgInit(2, BgType_Bmp8, BgSize_B8_256x256, bitmap_queued, 0);
        } else {
            bgSetMapBase(display_bg, bitmap_queued);
        }
        bitmap_visible = bitmap_queued;
        bgShow(display_bg);
    } else {
        return;
    }
    field_visible = field_queued;
    current_output = pending_output;
    pending_output = OUTPUT_NONE;
    ++presented_frames;
}

static void video_vblank(void)
{
    present_game_frame();
    vdp_ds_frame_start();
    if (palette_pending) {
        // Preserve the high bit used by the original jEnesisDS palette.
        BG_PALETTE[0] = palette_queued[0] | BIT(15);
        for (unsigned i = 1; i < 64; ++i) {
            uint16_t color = palette_queued[i] | BIT(15);
            BG_PALETTE[i] = color;
            SPRITE_PALETTE[i] = color;
        }
        palette_pending = false;
    }
    ++vblank_count;
}

static void draw_game_frame(const struct application *app)
{
    const struct megadrive *md = app->md;
    enum game_output output = OUTPUT_NONE;
    if (!display_visible || display_revision != md->video_revision) {
        // Replace an undisplayed frame before touching its off-screen page.
        int critical = enterCriticalSection();
        pending_output = OUTPUT_NONE;
        if (palette_pending) {
            palette_pending = false;
            palette_valid = false;
        }
        leaveCriticalSection(critical);
        if (vdp_ds_prepare(md, app->vertical_scaling, app->horizontal_view)) {
            output = OUTPUT_TILES;
        } else {
            bitmap_queued = bitmap_visible ^ 4;
            uint16_t *bitmap = (uint16_t *)BG_GFX + bitmap_queued * (0x4000 / sizeof(uint16_t));
            vdp_render_frame(md, bitmap_pixels, app->vertical_scaling, app->horizontal_view);
            DC_FlushRange(bitmap_pixels, sizeof(bitmap_pixels));
            dmaCopyWords(3, bitmap_pixels, bitmap, sizeof(bitmap_pixels));
            output = OUTPUT_BITMAP;
        }
        display_revision = md->video_revision;
        display_visible = true;
    }
    uint16_t backdrop = megadrive_backdrop(md);
    bool update_palette = !palette_valid || backdrop != palette_queued[0] ||
                          memcmp(palette_source, md->cram, sizeof(palette_source));
    uint16_t palette[64];
    if (update_palette) {
        palette[0] = backdrop;
        for (unsigned i = 1; i < 64; ++i)
            palette[i] = vdp_ds_color(md->cram[i]);
        memcpy(palette_source, md->cram, sizeof(palette_source));
        palette_valid = true;
    }
    int critical = enterCriticalSection();
    if (update_palette) {
        memcpy(palette_queued, palette, sizeof(palette));
        palette_pending = true;
    }
    if (output != OUTPUT_NONE) {
        field_queued = md->vdp_odd_field;
        pending_output = output;
    }
    leaveCriticalSection(critical);
}

static bool draw_paced_frame(const struct application *app, struct video_pacing *video,
                             unsigned budget)
{
    if (app->horizontal_view != VDP_VIEW_FIT || !(app->md->vdp_registers[12] & 1)) {
#ifdef JENESIS_PROFILE
        uint16_t start = timerTick(FRAME_TIMER);
#endif
        draw_game_frame(app);
#ifdef JENESIS_PROFILE
        profile_window.draw_ticks += (uint16_t)(timerTick(FRAME_TIMER) - start);
        ++profile_window.draws;
#endif
        return true;
    }
    uint32_t vblank = vblank_count;
    if (display_visible && (pending_output != OUTPUT_NONE || !video_pacing_due(video, vblank)))
        return false;
    uint16_t start = timerTick(FRAME_TIMER);
    draw_game_frame(app);
    uint16_t draw_ticks = timerTick(FRAME_TIMER) - start;
    video_pacing_drawn(video, draw_ticks, vblank, budget);
#ifdef JENESIS_PROFILE
    profile_window.draw_ticks += draw_ticks;
    ++profile_window.draws;
#endif
    return true;
}

static void draw_browser(const struct browser *browser)
{
    if (!browser->count) {
        frontend_cursor(2, MENU_FIRST_ROW);
        frontend_write("No ROMs in this folder");
    }
    for (size_t row = 0; row < MENU_ROW_COUNT; ++row) {
        size_t index = browser->first_visible + row;
        if (index >= browser->count)
            break;
        const struct entry *entry = &browser->entries[index];
        frontend_cursor(1, MENU_FIRST_ROW + (int)row);
        frontend_printf("%s%.28s", entry->directory ? "/" : "", entry->name);
    }
}

static void draw_cartridge(const struct application *app)
{
    const struct m68k *cpu = &app->md->cpu;
    frontend_cursor(1, 6);
    frontend_write(cpu->stopped ? "Cartridge Loaded" :
                   app->view == VIEW_PAUSED ? "-= PAUSED =-" : "Now Playing:");
    frontend_cursor(1, 7);
    frontend_printf("%.28s", app->filename);
    frontend_cursor(1, 9);
    frontend_printf("Rom Size:     %lu", (unsigned long)app->cart.size);
    frontend_cursor(1, 10);
    frontend_printf("Rom Checksum: %04X", (unsigned)app->cart.header_checksum);
    frontend_cursor(1, 11);
    frontend_printf("Rom Type:     %s", app->cart.format == CARTRIDGE_SMD ? "SMD" : "BIN");
    frontend_cursor(1, 13);
    frontend_write("______________________________");
    if (cpu->stopped) {
        frontend_cursor(1, 16);
        frontend_printf("Stopped at %06lX (%04X)", (unsigned long)(cpu->instruction_address & 0xffffff),
                        (unsigned)cpu->opcode);
    } else if (app->view != VIEW_SAVE) {
        frontend_cursor(4, 16);
        frontend_write(app->view == VIEW_PAUSED ? "Continue with [SELECT]" : "[SELECT]:Open File Menu");
        frontend_cursor(5, 17);
        frontend_write(app->view == VIEW_PAUSED ? "or TOUCH BOTTOM" : "TOUCH screen to pause");
    }

    unsigned region = (app->md->version & 0x40) ? 2 : (app->md->version & 0x80) ? 1 : 0;
    frontend_draw_indicators(region, app->slots);
    frontend_draw_fps(app->measured_fps);
}

static void draw_settings(const struct application *app)
{
    static const char *const regions[] = {"Auto", "USA", "Japan", "Europe"};
    frontend_cursor(2, 5);
    frontend_write("Configuration");
    frontend_cursor(2, 8);
    frontend_printf("Country          %s", regions[app->region]);
    frontend_cursor(2, 10);
    frontend_printf("Controller       %u Button", app->md->six_button ? 6 : 3);
    frontend_cursor(2, 12);
    frontend_printf("Vertical Scaling %s", app->vertical_scaling ? "On" : "Off");
    static const char *const views[] = {"Fit", "Left", "Center"};
    frontend_cursor(2, 14);
    frontend_printf("Horizontal View  %s", views[app->horizontal_view]);
    frontend_cursor(2, 17);
    frontend_write("Country applies to next ROM");
    frontend_cursor(2, 19);
    if (isDSiMode())
        frontend_printf("DSi %u MHz  Video %u FPS", (REG_SCFG_CLK & SCFG_CLK_ARM9_TWL) ? 134 : 67,
                        app->measured_video_fps);
    else
        frontend_printf("DS mode  Video %u FPS", app->measured_video_fps);
    frontend_cursor(2, 21);
    frontend_write("A Change       SELECT Back");
}

static void draw_save_menu(const struct application *app)
{
    draw_cartridge(app);
    frontend_cursor(8, 14);
    frontend_printf("Savestate Slot %u", app->save_slot + 1);
    if (app->slots[app->save_slot]) {
        frontend_cursor(14, SAVE_LOAD_ROW);
        frontend_write("LOAD");
    }
    frontend_cursor(14, SAVE_WRITE_ROW);
    frontend_write("SAVE");
    frontend_cursor(13, SAVE_CANCEL_ROW);
    frontend_write("CANCEL");
}

static void draw_screen(const struct application *app, const char *message)
{
    const struct browser *browser = &app->browser;
    bool has_notice = message != NULL;
    int selected = -1;
    if (app->view == VIEW_BROWSER && browser->count)
        selected = MENU_FIRST_ROW + (int)(browser->selected - browser->first_visible);
    if (app->view == VIEW_SETTINGS)
        selected = app->settings_line;
    if (app->view == VIEW_CARTRIDGE || app->view == VIEW_PAUSED)
        selected = 7;
    if (app->view == VIEW_SAVE)
        selected = app->save_line;

    frontend_draw(selected);
    switch (app->view) {
    case VIEW_BROWSER:
        draw_browser(browser);
        if (!message && app->cart.data) {
            frontend_cursor(1, 21);
            frontend_write("[A]     : Start Game");
            message = "[SELECT]: Continue";
        }
        break;
    case VIEW_CARTRIDGE:
    case VIEW_PAUSED:
        draw_cartridge(app);
        break;
    case VIEW_SETTINGS:
        draw_settings(app);
        break;
    case VIEW_SAVE:
        draw_save_menu(app);
        break;
    }
    if (message) {
        int row = app->view == VIEW_CARTRIDGE || app->view == VIEW_PAUSED ? 19 : 22;
        frontend_cursor(1, row);
        frontend_printf("%.28s", message);
    }
    if (app->view == VIEW_BROWSER && browser->count && !has_notice) {
        unsigned current = browser->first_visible / MENU_ROW_COUNT + 1;
        unsigned total = (browser->count - 1) / MENU_ROW_COUNT + 1;
        frontend_cursor(26, 21);
        frontend_printf("%u / %u", current, total);
    }
}

static void select_save_path(struct application *app, unsigned slot)
{
    // The slot digit is directly before the four-character extension ".jsc".
    app->save_path[strlen(app->save_path) - 5] = '1' + slot;
}

static void setup_savestates(struct application *app, const char *name)
{
    char *directory = getcwd(NULL, 0);
    if (!directory)
        return;
    size_t length = strlen(directory);
    const char *extension = strrchr(name, '.');
    size_t stem = extension ? (size_t)(extension - name) : strlen(name);
    if (stem > 200)
        stem = 200;
    size_t capacity = length + stem + 20;
    const char *separator = length && directory[length - 1] == '/' ? "" : "/";
    app->save_path = malloc(capacity);
    if (app->save_path) {
        app->save_identity = savestate_identity(app->md);
        snprintf(app->save_path, capacity, "%s%s%.*s-%08lX_1.jsc", directory, separator,
                 (int)stem, name, (unsigned long)app->save_identity);
        for (unsigned i = 0; i < 2; ++i) {
            select_save_path(app, i);
            app->slots[i] = savestate_exists(app->save_path);
        }
    }
    if (app->md->sram_size) {
        app->sram_path = malloc(capacity);
        if (app->sram_path) {
                snprintf(app->sram_path, capacity, "%s%s%.*s.srm", directory, separator,
                     (int)stem, name);
            saveram_load(app->sram_path, app->md);
        }
    }
    free(directory);
}

static const char *open_selection(struct application *app)
{
    struct browser *browser = &app->browser;
    const struct entry *entry = &browser->entries[browser->selected];
    if (entry->directory)
        return chdir(entry->name) == 0 ? read_directory(browser) : "Cannot open folder";

    if (!saveram_flush(app->sram_path, app->md))
        return "Cannot write cartridge SRAM";
    free(app->sram_path);
    app->sram_path = NULL;

    // Keep one cartridge in memory so a large ROM can replace another.
    cartridge_unload(&app->cart);
    free(app->save_path);
    app->save_path = NULL;
    app->slots[0] = app->slots[1] = false;
    int critical = enterCriticalSection();
    vdp_ds_hide();
    vdp_ds_invalidate();
    videoSetMode(MODE_5_2D);
    current_output = pending_output = OUTPUT_NONE;
    palette_pending = false;
    palette_valid = false;
    display_visible = false;
    BG_PALETTE[0] = 0;
    leaveCriticalSection(critical);
    const char *error = cartridge_load(&app->cart, entry->name);
    if (!error) {
        snprintf(app->filename, sizeof(app->filename), "%.28s", entry->name);
        bool six_button = app->md->six_button;
        megadrive_reset(app->md, &app->cart, app->region);
        app->md->six_button = six_button;
        ++app->sound_generation;
        setup_savestates(app, entry->name);
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

static bool handle_save_menu(struct application *app, uint32_t keys, const char **message)
{
    int first = app->slots[app->save_slot] ? SAVE_LOAD_ROW : SAVE_WRITE_ROW;
    if (keys & (KEY_SELECT | KEY_B)) {
        app->view = app->before_save;
    } else if ((keys & KEY_UP) && app->save_line > first) {
        --app->save_line;
    } else if ((keys & KEY_DOWN) && app->save_line < SAVE_CANCEL_ROW) {
        ++app->save_line;
    } else if (keys & KEY_A) {
        select_save_path(app, app->save_slot);
        if (app->save_line == SAVE_LOAD_ROW) {
            bool loaded = savestate_load(app->save_path, app->save_identity, app->md);
            if (loaded) {
                ++app->sound_generation;
                vdp_ds_invalidate();
                draw_game_frame(app);
            }
            *message = loaded ? "State loaded" : "Unable to load state";
        } else if (app->save_line == SAVE_WRITE_ROW) {
            bool saved = savestate_save(app->save_path, app->save_identity, app->md);
            if (saved)
                app->slots[app->save_slot] = true;
            *message = saved ? "State saved" : "Unable to save state";
        }
        app->view = app->before_save;
    } else {
        return false;
    }
    return true;
}

static bool handle_menu(struct application *app, uint32_t keys, const touchPosition *touch,
                        const char **message)
{
    if (app->view == VIEW_SAVE)
        return handle_save_menu(app, keys, message);
    bool tapped_header = touch && touch->py < 24;
    bool tapped_rom = tapped_header && touch->px >= 8 && touch->px < 40;
    bool tapped_settings = tapped_header && touch->px >= 48 && touch->px < 88;
    if (app->view == VIEW_SETTINGS) {
        int row = touch ? touch->py / 8 : -1;
        bool tapped_option = row >= 8 && row <= 14 && !(row & 1);
        if ((keys & (KEY_SELECT | KEY_B)) || tapped_settings) {
            app->view = app->before_settings;
        } else if (keys & KEY_UP) {
            app->settings_line = app->settings_line == 8 ? 14 : app->settings_line - 2;
        } else if (keys & KEY_DOWN) {
            app->settings_line = app->settings_line == 14 ? 8 : app->settings_line + 2;
        } else if ((keys & KEY_A) || tapped_option) {
            if (tapped_option)
                app->settings_line = row;
            if (app->settings_line == 8)
                app->region = (app->region + 1) % GENESIS_REGION_COUNT;
            else if (app->settings_line == 10) {
                app->md->six_button = !app->md->six_button;
                memset(app->md->th_phase, 0, sizeof(app->md->th_phase));
            } else {
                if (app->settings_line == 12)
                    app->vertical_scaling = !app->vertical_scaling;
                else
                    app->horizontal_view = (app->horizontal_view + 1) % VDP_HORIZONTAL_VIEWS;
                if (app->cart.data) {
                    display_visible = false;
                    draw_game_frame(app);
                }
            }
        } else {
            return false;
        }
        return true;
    }
    if (tapped_settings) {
        app->before_settings = app->view;
        app->settings_line = 8;
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
        if (!app->save_path) {
            *message = "SD path unavailable";
        } else {
            app->before_save = app->view;
            app->save_slot = touch->px < 184 ? 0 : 1;
            app->save_line = SAVE_CANCEL_ROW;
            app->view = VIEW_SAVE;
        }
    } else if (!app->md->cpu.stopped) {
        app->view = app->view == VIEW_PAUSED ? VIEW_CARTRIDGE : VIEW_PAUSED;
    } else {
        return false;
    }
    return true;
}

static uint16_t genesis_buttons(uint32_t keys, bool six_button)
{
    unsigned extra = 0, start = keys & KEY_START ? GENESIS_START : 0;
    if (six_button) {
        extra = ((keys & KEY_X) ? GENESIS_X : 0) |
                ((keys & KEY_L) ? GENESIS_Y : 0) |
                ((keys & KEY_R) ? GENESIS_Z : 0);
        if ((keys & (KEY_L | KEY_R | KEY_START)) == (KEY_L | KEY_R | KEY_START)) {
            extra |= GENESIS_MODE;
            start = 0;
        }
    }
    return ((keys & KEY_UP) ? GENESIS_UP : 0) |
           ((keys & KEY_DOWN) ? GENESIS_DOWN : 0) |
           ((keys & KEY_LEFT) ? GENESIS_LEFT : 0) |
           ((keys & KEY_RIGHT) ? GENESIS_RIGHT : 0) |
           ((keys & KEY_Y) ? GENESIS_A : 0) |
           ((keys & KEY_B) ? GENESIS_B : 0) |
           ((keys & KEY_A) ? GENESIS_C : 0) |
           start | extra;
}

static struct dac_frame dac_transfers[DAC_TRANSFER_SLOTS];
static unsigned dac_in_use;
static unsigned dac_phase;
static uint16_t dac_generation, audio_sequence;

static struct dac_frame *begin_audio_frame(struct application *app, bool pal)
{
    while (fifoCheckValue32(FIFO_USER_02)) {
        unsigned slot = fifoGetValue32(FIFO_USER_02);
        if (slot < DAC_TRANSFER_SLOTS)
            dac_in_use &= ~(1U << slot);
    }
    if (app->sound_generation != dac_generation) {
        dac_phase = 0;
        dac_generation = app->sound_generation;
    }

    ++audio_sequence;
    unsigned refresh = pal ? PAL_REFRESH : DS_REFRESH;
    dac_phase += PSG_RATE * 100;
    unsigned count = dac_phase / refresh;
    dac_phase %= refresh;
    for (unsigned slot = 0; slot < DAC_TRANSFER_SLOTS; ++slot) {
        if (!(dac_in_use & (1U << slot))) {
            struct dac_frame *frame = &dac_transfers[slot];
            frame->count = count;
            frame->generation = app->sound_generation;
            frame->slot = slot;
            frame->sequence = audio_sequence;
            dac_begin(app->md, frame);
            return frame;
        }
    }
    return NULL;
}

static void submit_dac_frame(struct dac_frame *frame)
{
    if (frame) {
        DC_FlushRange(frame, offsetof(struct dac_frame, fm_writes) +
                             frame->fm_count * sizeof(frame->fm_writes[0]));
        if (fifoSendAddress(FIFO_USER_02, frame)) {
            dac_in_use |= 1U << frame->slot;
#ifdef JENESIS_PROFILE
            ++profile_window.submitted;
        } else {
            ++profile_window.send_failed;
#endif
        }
    }
}

static void send_audio(const struct application *app)
{
    static struct psg_message last;
    struct psg_message msg = {
        .generation = app->sound_generation,
        .enabled = app->view == VIEW_CARTRIDGE && !app->md->cpu.stopped,
        .pal = (app->md->version & 0x40) != 0,
    };
    if (memcmp(&last, &msg, sizeof(msg)) &&
        fifoSendDatamsg(FIFO_USER_01, sizeof(msg), (uint8_t *)&msg))
        last = msg;
}

int main(void)
{
    if (isDSiMode())
        setCpuClock(true);

    frontend_init();
    init_game_display();
    irqSet(IRQ_VBLANK, video_vblank);
    if (!fatInitDefault()) {
        frontend_draw(-1);
        frontend_cursor(2, MENU_FIRST_ROW);
        frontend_write("Could not mount the SD card.");
        frontend_cursor(2, MENU_FIRST_ROW + 2);
        frontend_write("Check the DLDI driver.");
        for (;;)
            swiWaitForVBlank();
    }
    static uint8_t sound_ram[Z80_RAM_SIZE] DTCM_DATA;
    static struct megadrive_memory game_memory;
    game_memory.z80_ram = sound_ram;
    static struct megadrive game_core DTCM_DATA = {.memory = &game_memory};
    static struct application app = {
        .md = &game_core, .vertical_scaling = true, .horizontal_view = VDP_VIEW_FIT,
    };
    keysSetRepeat(18, 4);
    draw_screen(&app, read_directory(&app.browser));

    // The DS display runs at about 59.83 Hz. A 313-line PAL cartridge
    // runs at about 49.70 Hz, so present it on a subset of DS VBlanks.
    struct frame_pacing pacing = {0};
    struct video_pacing video = {0};
    timerStart(FRAME_TIMER, ClockDivider_64, 0, NULL);
    bool was_running = false;
    uint32_t observed_vblank = vblank_count;
    unsigned measurement_vblanks = 0;
    unsigned measurement_frames = 0;
    uint32_t video_measurement_start = presented_frames;
    for (;;) {
        if (!pacing.pending_frames && observed_vblank == vblank_count)
            swiWaitForVBlank();
        uint32_t current_vblank = vblank_count;
        unsigned elapsed_vblanks = current_vblank - observed_vblank;
        observed_vblank = current_vblank;
        scanKeys();
        uint32_t keys = keysDown() | (keysDownRepeat() & (KEY_UP | KEY_DOWN));
        touchPosition touch;
        if (keys & KEY_TOUCH)
            touchRead(&touch);
        const char *message = NULL;
        if (handle_menu(&app, keys, keys & KEY_TOUCH ? &touch : NULL, &message))
            draw_screen(&app, message);
        bool running = app.view == VIEW_CARTRIDGE && !app.md->cpu.stopped;
        if (running && !was_running) {
            // ROM loading can span several VBlanks. Start pacing when the
            // cartridge is ready so those VBlanks do not become guest work.
            observed_vblank = vblank_count;
            elapsed_vblanks = 0;
        }
        bool pal = running && (app.md->version & 0x40);
        unsigned frame_budget = frame_pacing_batch(&pacing, elapsed_vblanks, running, was_running, pal);
        if (!running || !was_running)
            video = (struct video_pacing){0};
        else
            video_pacing_observe(&video, elapsed_vblanks);
#ifdef JENESIS_PROFILE
        profile_receive_audio();
        if (running)
            profile_window.vblanks += elapsed_vblanks;
#endif
        if (running && frame_budget) {
            // Reserve part of each period for input, display IRQs and the frontend.
            enum { NTSC_WORK_TICKS = (BUS_CLOCK / FRAME_TIMER_DIVIDER) * 97 / DS_REFRESH,
                   PAL_WORK_TICKS = (BUS_CLOCK / FRAME_TIMER_DIVIDER) * 97 / PAL_REFRESH };
            unsigned work_ticks = pal ? PAL_WORK_TICKS : NTSC_WORK_TICKS;
            app.md->pad1_pressed = genesis_buttons(keysHeld(), app.md->six_button);
            bool presented_first_field = false;
            for (unsigned frame = 0; frame < frame_budget && !app.md->cpu.stopped; ++frame) {
                uint16_t frame_start = timerTick(FRAME_TIMER);
                struct dac_frame *audio = begin_audio_frame(&app, pal);
#ifdef JENESIS_PROFILE
                uint16_t core_start = timerTick(FRAME_TIMER);
                unsigned z80_start = profile_z80_ticks;
                if (!audio)
                    ++profile_window.no_slot;
#endif
                megadrive_run_frame(app.md);
#ifdef JENESIS_PROFILE
                unsigned core_ticks = (uint16_t)(timerTick(FRAME_TIMER) - core_start);
                profile_window.core_ticks += core_ticks;
                profile_window.z80_ticks += profile_z80_ticks - z80_start;
                if (core_ticks > profile_window.max_core_ticks)
                    profile_window.max_core_ticks = core_ticks;
                ++profile_window.frames;
                uint16_t submit_start = timerTick(FRAME_TIMER);
#endif
                dac_end(app.md);
                ++measurement_frames;
                send_audio(&app);
                if (!app.md->cpu.stopped)
                    submit_dac_frame(audio);
#ifdef JENESIS_PROFILE
                profile_window.submit_ticks += (uint16_t)(timerTick(FRAME_TIMER) - submit_start);
#endif
                video_pacing_advance(&video, (uint16_t)(timerTick(FRAME_TIMER) - frame_start), work_ticks);
                // With two emulated fields before a VBlank, choose the one
                // opposite the field currently on screen.
                if (frame == 0 && frame_budget == 2 &&
                    (app.md->vdp_registers[12] & 6) == 6 &&
                    app.md->vdp_odd_field != field_visible) {
                    presented_first_field = draw_paced_frame(&app, &video, work_ticks);
                }
            }
            if (!presented_first_field)
                draw_paced_frame(&app, &video, work_ticks);
            if (app.md->cpu.stopped)
                draw_screen(&app, NULL);
        }
        static unsigned sram_flush_vblank;
        if (app.md->sram_dirty &&
            ((was_running && !running) || vblank_count - sram_flush_vblank >= 120)) {
            sram_flush_vblank = vblank_count;
            if (!saveram_flush(app.sram_path, app.md))
                draw_screen(&app, "Cannot write cartridge SRAM");
        }
#ifdef JENESIS_PROFILE
        if (profile_window.frames >= PROFILE_WINDOW_FRAMES)
            profile_store_window();
        if ((was_running || running) && (!running || app.md->cpu.stopped)) {
            if (!profile_export())
                draw_screen(&app, "Could not write profile CSV");
            observed_vblank = vblank_count;
        }
#endif
        was_running = running && !app.md->cpu.stopped;
        if (running && !app.md->cpu.stopped) {
            measurement_vblanks += elapsed_vblanks;
            if (measurement_vblanks >= 60) {
                app.measured_fps = (60 * measurement_frames + measurement_vblanks / 2) /
                                   measurement_vblanks;
                uint32_t presented = presented_frames;
                app.measured_video_fps = (60 * (presented - video_measurement_start) +
                                          measurement_vblanks / 2) / measurement_vblanks;
                video_measurement_start = presented;
                frontend_draw_fps(app.measured_fps);
                measurement_frames = 0;
                measurement_vblanks = 0;
            }
        } else {
            measurement_frames = 0;
            measurement_vblanks = 0;
            video_measurement_start = presented_frames;
        }
        send_audio(&app);
    }
}
