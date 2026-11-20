/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_ym2612_queue, "ax", %progbits
.include "native/arm9/audio/ym2612_queue.inc"

.section .native.arm9_audio_submit, "ax", %progbits
.include "native/arm9/audio/audio_submit.inc"

.section .native.arm9_arm7_audio_reset, "ax", %progbits
.include "native/arm9/audio/arm7_audio_reset.inc"

.section .native.arm9_arm7_audio_restart, "ax", %progbits
.include "native/arm9/audio/arm7_audio_restart.inc"
