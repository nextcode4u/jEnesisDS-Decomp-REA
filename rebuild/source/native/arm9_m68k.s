/* 68000 instruction handlers in ARM9 main memory. Assembled in release address order. */
.syntax unified
.arm
.section .native.arm9_m68k, "ax", %progbits

.include "native/arm9/m68k/moves_register_and_indirect.inc"
.include "native/arm9/m68k/moves_displacement_and_indexed.inc"
.include "native/arm9/m68k/moves_to_register_and_memory.inc"
.include "native/arm9/m68k/moves_absolute_and_immediate.inc"
.include "native/arm9/m68k/addition.inc"
.include "native/arm9/m68k/subtraction.inc"
.include "native/arm9/m68k/comparison_and_negation.inc"
.include "native/arm9/m68k/clear_multiply_and_divide.inc"
.include "native/arm9/m68k/logical_and_or.inc"
.include "native/arm9/m68k/logical_xor_and_not.inc"
.include "native/arm9/m68k/shift_and_rotate.inc"
.include "native/arm9/m68k/bcd_bounds_and_status.inc"
.include "native/arm9/m68k/jump_and_multiple_register_transfers.inc"
.include "native/arm9/m68k/peripheral_moves_and_extended_arithmetic.inc"
.include "native/arm9/m68k/register_shifts_and_bit_changes.inc"
.include "native/arm9/m68k/loop_trap_and_shared_handlers.inc"
