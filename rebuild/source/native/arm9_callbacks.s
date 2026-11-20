/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_gameplay_irq, "ax", %progbits
.include "native/arm9/callbacks/gameplay_irq.inc"

.section .native.arm9_menu_irq, "ax", %progbits
.include "native/arm9/callbacks/menu_irq.inc"

.section .native.arm9_bios_wait_wrapper, "ax", %progbits
.include "native/arm9/callbacks/bios_wait_wrapper.inc"

.section .native.arm9_format_hexadecimal, "ax", %progbits
.include "native/arm9/callbacks/format_hexadecimal.inc"
