/* ARM9 tightly coupled instruction memory code. Assembled in release address order. */
.syntax unified
.arm
.section .native.arm9_itcm, "ax", %progbits

.include "native/arm9/itcm/z80_loads_and_control.inc"
.include "native/arm9/itcm/z80_arithmetic_and_flags.inc"
.include "native/arm9/itcm/z80_stack_and_control.inc"
.include "native/arm9/itcm/z80_memory_and_alternate_decode.inc"
.include "native/arm9/itcm/m68k_execution_and_interrupts.inc"
.include "native/arm9/itcm/m68k_hot_bus_and_register_handlers.inc"
.include "native/arm9/itcm/sprite_tile_copy.inc"
