/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_paused_viewport, "ax", %progbits
.include "native/arm9/viewport/paused_viewport.inc"

.section .native.arm9_viewport_coordinates, "ax", %progbits
.include "native/arm9/viewport/viewport_coordinates.inc"
