/* YM2612 envelope stepping and register decoding. Assembled in release address order. */
.syntax unified
.arm
.section .native.arm7_ym2612_operators, "ax", %progbits

.include "native/arm7/ym2612_operators/envelope.inc"
.include "native/arm7/ym2612_operators/channel_and_operator_registers.inc"
.include "native/arm7/ym2612_operators/reset.inc"
