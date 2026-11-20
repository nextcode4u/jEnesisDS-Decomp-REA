/* Advance the DS display IRQ phases during Genesis video rendering. */
#include <nds/interrupts.h>
#include <nds/system.h>

extern unsigned ds_display_compare_phase;
extern const unsigned short ds_display_compare_lines[4];

void apply_prepared_scanline_display_state(unsigned scanline);

void advance_ds_display_compare_irq_phase(void)
{
    if (ds_display_compare_phase == 1) {
        apply_prepared_scanline_display_state(0);
        ds_display_compare_phase = 2;
    } else if (ds_display_compare_phase == 2) {
        irqEnable(IRQ_HBLANK);
        ds_display_compare_phase = 0;
    } else if (ds_display_compare_phase == 0) {
        irqDisable(IRQ_HBLANK);
        ds_display_compare_phase = 1;
    }

    unsigned line = ds_display_compare_lines[ds_display_compare_phase];
    REG_DISPSTAT = (REG_DISPSTAT & 0x7f) | (line << 8) | ((line & 0x100) >> 1);
}
