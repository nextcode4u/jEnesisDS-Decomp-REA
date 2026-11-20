/* Select the VDP scanline recorder for the active display options and scroll mode. */
typedef void (*RenderScanline)(unsigned scanline);

extern unsigned emulator_option_flags;
extern unsigned char vdp_hscroll_mode;
extern RenderScanline record_vdp_scanline_state;

void record_unscaled_scanline_scroll_and_backdrop(unsigned scanline);
void record_scaled_scanline_hscroll_mode_0(unsigned scanline);
void record_scaled_scanline_hscroll_mode_1(unsigned scanline);
void record_scaled_scanline_hscroll_mode_2(unsigned scanline);
void record_scaled_scanline_hscroll_mode_3(unsigned scanline);

void select_vdp_scanline_render_callback(void)
{
    if (emulator_option_flags & 4) {
        /* Keep the release jump table's case block order. */
        switch (vdp_hscroll_mode) {
        case 0:
            record_vdp_scanline_state = record_scaled_scanline_hscroll_mode_0;
            return;
        case 3:
            record_vdp_scanline_state = record_scaled_scanline_hscroll_mode_3;
            return;
        case 2:
            record_vdp_scanline_state = record_scaled_scanline_hscroll_mode_2;
            return;
        case 1:
            record_vdp_scanline_state = record_scaled_scanline_hscroll_mode_1;
            return;
        }
    } else {
        record_vdp_scanline_state = record_unscaled_scanline_scroll_and_backdrop;
    }
}
