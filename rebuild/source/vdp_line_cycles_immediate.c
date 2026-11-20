/* VDP interrupt callbacks that deliver pending requests without a cycle threshold. */
extern unsigned vdp_line_cycle_position;
extern int vdp_h_interrupt_serviced_this_line;
extern unsigned char vdp_h_interrupt_enabled;
extern unsigned char vdp_v_interrupt_enabled;
extern unsigned char vdp_h_interrupt_pending;
extern unsigned char vdp_v_interrupt_pending;

void queue_m68k_interrupt_level(int level);

void update_vdp_line_cycles_and_queue_pending_interrupts(unsigned cycles)
{
    vdp_line_cycle_position = cycles;
    if (vdp_h_interrupt_enabled && vdp_h_interrupt_pending) {
        if (vdp_h_interrupt_serviced_this_line == 0) {
            queue_m68k_interrupt_level(4);
            vdp_h_interrupt_serviced_this_line = 1;
        }
    }

    if (vdp_v_interrupt_enabled && vdp_v_interrupt_pending)
        queue_m68k_interrupt_level(6);
}

void update_vdp_line_cycles_and_queue_v_interrupt(unsigned cycles)
{
    vdp_line_cycle_position = cycles;
    if (vdp_v_interrupt_enabled && vdp_v_interrupt_pending && !vdp_h_interrupt_pending)
        queue_m68k_interrupt_level(6);
}
