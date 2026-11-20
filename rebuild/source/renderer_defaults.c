/* Initialized state shared by VDP background setup and text tile conversion. */
struct RendererDefaults {
    unsigned previous_window_width_mode;
    unsigned previous_background_layout;
    unsigned tile_patterns_dirty;
    unsigned background_layout_dirty;
    unsigned first_text_codepoint;
};

struct RendererDefaults renderer_defaults = {
    0xff, 0xff, 1, 1, ' ',
};
