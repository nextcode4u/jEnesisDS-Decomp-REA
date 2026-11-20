/* Genesis H-INT and VBlank state updated once per scanline. */
typedef struct {
    unsigned reserved_before_blanking;
    int first_vblank_line;
    unsigned state_before_vblank_status_bit[29];
    unsigned vblank_status_bit;
    unsigned state_before_v_interrupt_status_bit[3];
    unsigned v_interrupt_status_bit;
} VdpTimingRegion;

extern VdpTimingRegion vdp_timing;
extern int vdp_scanline;
extern int vdp_h_interrupt_counter;
extern short vdp_h_interrupt_reload;
extern int vdp_h_interrupt_serviced_this_line;
extern unsigned char vdp_h_interrupt_pending;
extern unsigned char vdp_v_interrupt_pending;

void tick_vdp_horizontal_interrupt_counter(int scanline)
{
    vdp_scanline = scanline;
    --vdp_h_interrupt_counter;
    vdp_h_interrupt_serviced_this_line = 0;
    if (vdp_h_interrupt_counter < 0) {
        vdp_h_interrupt_counter = vdp_h_interrupt_reload;
        vdp_h_interrupt_pending = 1;
    }
}

void begin_vdp_vertical_blanking(int scanline)
{
    --vdp_h_interrupt_counter;
    vdp_h_interrupt_serviced_this_line = 0;
    vdp_scanline = scanline;
    if (vdp_h_interrupt_counter < 0) {
        vdp_h_interrupt_counter = vdp_h_interrupt_reload;
        vdp_h_interrupt_pending = 1;
    }
    if (scanline == vdp_timing.first_vblank_line) {
        vdp_timing.vblank_status_bit = 8;
        vdp_timing.v_interrupt_status_bit = 0x80;
        vdp_v_interrupt_pending = 1;
    }
}

void reload_vdp_counter_during_vertical_blanking(int scanline)
{
    vdp_scanline = scanline;
    vdp_h_interrupt_counter = vdp_h_interrupt_reload;
}
