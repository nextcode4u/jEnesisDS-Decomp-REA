/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm7_veneers, "ax", %progbits
.include "native/arm7/service/interworking_veneers.inc"

.section .native.arm7_audio_service, "ax", %progbits
.include "native/arm7/service/audio_service.inc"

.section .native.arm7_psg, "ax", %progbits
.include "native/arm7/service/psg.inc"

.section .native.arm7_audio_bridge, "ax", %progbits
.include "native/arm7/service/audio_bridge.inc"

.section .native.arm7_dac_service, "ax", %progbits
.include "native/arm7/service/dac_service.inc"

.section .native.arm7_audio_clocks, "ax", %progbits
.include "native/arm7/service/audio_clocks.inc"

.section .native.arm7_audio_ipc_commands, "ax", %progbits
.include "native/arm7/service/audio_ipc_commands.inc"
