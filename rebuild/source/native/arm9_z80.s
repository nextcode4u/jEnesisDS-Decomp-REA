/* Z80 execution and prefixed instruction handlers. Assembled in release address order. */
.syntax unified
.arm
.section .native.arm9_z80, "ax", %progbits

.include "native/arm9/z80/cycle_loop.inc"
.include "native/arm9/z80/cb_rotate_and_shift.inc"
.include "native/arm9/z80/cb_bit_operations.inc"
.include "native/arm9/z80/ed_operations.inc"
.include "native/arm9/z80/index_operations.inc"
.include "native/arm9/z80/indexed_rotate_and_shift.inc"
.include "native/arm9/z80/indexed_test_and_reset.inc"
.include "native/arm9/z80/indexed_set.inc"
