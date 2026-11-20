/* Frontend captions and messages, with the release alignment between strings. */

const struct {
    char filesystem_error[48];
    char paused[16];
    char resume_key[24];
    char resume_touch[20];
    char viewport_help[29];
    unsigned char alignment[3];
} pause_messages __attribute__((section(".rodata.pause_messages"))) = {
    .filesystem_error = "Error accessing file system...shutting down!\n",
    .paused = "-= PAUSED =-",
    .resume_key = "Continue with [SELECT]",
    .resume_touch = "   or TOUCH BOTTOM",
    .viewport_help = "Use [D-Pad] to adjust screen",
    .alignment = {0xff, 0xff, 0xff},
};

const struct {
    char option_on[8];
    char option_off[8];
    char option_hardware[8];
    char option_software[8];
    char option_auto[8];
    char region_usa[4];
    char region_japan[4];
    char region_europe[4];
    char loading[12];
    char now_playing[16];
    char rom_size[12];
    char rom_checksum[16];
    char rom_type[12];
    char type_smd[4];
    char type_bin[4];
    char separator[32];
    char file_menu_help[28];
    char pause_help[28];
    char open_bracket[4];
    char close_bracket[4];
    char configuration[16];
    char change_option[24];
    char continue_game[24];
    char continue_label[20];
    char savestate_slot[16];
    char load[8];
    char save[8];
    char cancel[8];
    char loading_warning[28];
    char saving_warning[28];
} menu_messages __attribute__((section(".rodata.menu_messages"))) = {
    .option_on = "on   ",
    .option_off = "off  ",
    .option_hardware = "HW   ",
    .option_software = "SW   ",
    .option_auto = "auto ",
    .region_usa = "USA",
    .region_japan = "JAP",
    .region_europe = "EUR",
    .loading = "Loading:",
    .now_playing = "Now Playing:",
    .rom_size = "Rom Size:",
    .rom_checksum = "Rom Checksum:",
    .rom_type = "Rom Type:",
    .type_smd = "SMD",
    .type_bin = "BIN",
    .separator = "______________________________",
    .file_menu_help = "   [SELECT]:Open File Menu",
    .pause_help = "    TOUCH screen to pause",
    .open_bracket = "[",
    .close_bracket = "]",
    .configuration = "Configuration",
    .change_option = "[A]:     Change Option",
    .continue_game = "[SELECT]:Continue Game",
    .continue_label = "[SELECT]:Continue",
    .savestate_slot = "Savestate Slot",
    .load = "LOAD",
    .save = "SAVE",
    .cancel = "CANCEL",
    .loading_warning = "Loading.. DONT switch off!",
    .saving_warning = "Saving... DONT switch off!",
};

const struct {
    char start_game[24];
    char continue_browsing[20];
} browser_messages __attribute__((section(".rodata.browser_messages"))) = {
    .start_game = "[A]     : Start Game",
    .continue_browsing = "[SELECT]: Continue",
};

const struct {
    char force_update[16];
    char vertical_scaling[20];
    char autofix_checksum[20];
    char wait_vsync[12];
    char horizontal_interrupts[16];
    char fake_z80[12];
    char region_preference[20];
    char six_button_pad[16];
    char sprite_masking[16];
    char follow_dpad[12];
} option_captions __attribute__((section(".rodata.option_captions"))) = {
    .force_update = "Force Update",
    .vertical_scaling = "Vertical Scaling",
    .autofix_checksum = "Autofix Checksum",
    .wait_vsync = "Wait VSYNC",
    .horizontal_interrupts = "H-INT Emulation",
    .fake_z80 = "Fake Z80",
    .region_preference = "Country Preference",
    .six_button_pad = "6-Button Pad",
    .sprite_masking = "Sprite Masking",
    .follow_dpad = "Follow DPad",
};
