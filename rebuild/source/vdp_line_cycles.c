/* Schedule 68000 interrupts from the current Genesis VDP scanline. */
extern unsigned vdp_line_cycle_position;
extern int vdp_h_interrupt_serviced_this_line;
extern unsigned char vdp_h_interrupt_enabled;
extern unsigned char vdp_v_interrupt_enabled;
extern unsigned char vdp_h_interrupt_pending;
extern unsigned char vdp_v_interrupt_pending;

void queue_m68k_interrupt_level(int level);

void update_vdp_line_cycles_and_queue_m68k_interrupts(unsigned cycles)
{
    vdp_line_cycle_position = cycles;
    if (vdp_h_interrupt_enabled && vdp_h_interrupt_pending) {
        if (vdp_h_interrupt_serviced_this_line == 0) {
            if (cycles > 0x22) {
                queue_m68k_interrupt_level(4);
                vdp_h_interrupt_serviced_this_line = 1;
            }
        }
    }

    if (vdp_v_interrupt_enabled && vdp_v_interrupt_pending) {
        if (vdp_line_cycle_position > 0x8e
                || (!vdp_h_interrupt_pending && vdp_line_cycle_position > 0xc))
            queue_m68k_interrupt_level(6);
    }
}
