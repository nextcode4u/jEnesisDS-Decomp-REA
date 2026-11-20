/* YM2612 setup, channel preparation, and PCM mixing. Assembled in release address order. */
.syntax unified
.arm
.section .native.arm7_ym2612_mixer, "ax", %progbits

.include "native/arm7/ym2612_mixer/tables_and_channels.inc"
.include "native/arm7/ym2612_mixer/prepare_channel.inc"
.include "native/arm7/ym2612_mixer/bank0_and_timers.inc"
.include "native/arm7/ym2612_mixer/mix_six_channels.inc"
.include "native/arm7/ym2612_mixer/ds_audio_channels.inc"
