/* Recovered ARM and Thumb code with data at its mapped address. */
.syntax unified
.arm
.section .text.payload, "ax", %progbits
.include "arm7/startup_and_psg.inc"
.include "arm7/ym2612/operator_registers.inc"
.include "arm7/ym2612/mixer_and_channels.inc"
.include "arm7/dac_and_audio_ipc.inc"
.include "arm7/ym2612/algorithms.inc"
.include "arm7/platform_runtime_and_tables.inc"
