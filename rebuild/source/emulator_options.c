/* The option model stores a caption pointer, a value encoding and a mask or shift. */
typedef enum {
    OPTION_TOGGLE = 0,
    OPTION_H_INTERRUPT_MODE = 2,
    OPTION_REGION_PREFERENCE = 3,
} OptionEncoding;

typedef struct {
    const char *caption;
    OptionEncoding encoding;
    unsigned mask_or_shift;
} EmulatorOption;

extern const char force_update_caption[];
extern const char vertical_scaling_caption[];
extern const char checksum_fix_caption[];
extern const char wait_vsync_caption[];
extern const char h_interrupt_caption[];
extern const char fake_z80_caption[];
extern const char country_preference_caption[];
extern const char six_button_caption[];
extern const char sprite_masking_caption[];
extern const char follow_dpad_caption[];

const EmulatorOption emulator_options[10] = {
    {force_update_caption, OPTION_TOGGLE, 1u << 3},
    {vertical_scaling_caption, OPTION_TOGGLE, 1u << 2},
    {checksum_fix_caption, OPTION_TOGGLE, 1u << 5},
    {wait_vsync_caption, OPTION_TOGGLE, 1u << 6},
    {h_interrupt_caption, OPTION_H_INTERRUPT_MODE, 12},
    {fake_z80_caption, OPTION_TOGGLE, 1u << 1},
    {country_preference_caption, OPTION_REGION_PREFERENCE, 16},
    {six_button_caption, OPTION_TOGGLE, 1u << 0},
    {sprite_masking_caption, OPTION_TOGGLE, 1u << 8},
    {follow_dpad_caption, OPTION_TOGGLE, 1u << 9},
};
