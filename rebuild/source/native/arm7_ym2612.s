/* YM2612 fixed-point PCM sample loops by FM algorithm. Assembled in release address order. */
.syntax unified
.arm
.section .native.arm7_ym2612, "ax", %progbits

.include "native/arm7/ym2612/algorithm_0.inc"
.include "native/arm7/ym2612/algorithm_1.inc"
.include "native/arm7/ym2612/algorithm_2.inc"
.include "native/arm7/ym2612/algorithm_3.inc"
.include "native/arm7/ym2612/algorithm_4.inc"
.include "native/arm7/ym2612/algorithm_5.inc"
.include "native/arm7/ym2612/algorithm_6.inc"
.include "native/arm7/ym2612/algorithm_7_and_return.inc"
