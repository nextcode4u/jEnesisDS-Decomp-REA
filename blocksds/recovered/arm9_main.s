/* Recovered ARM and Thumb code with data at its mapped address. */
.syntax unified
.arm
.section .text.payload, "ax", %progbits
.include "arm9/frame_scheduler.inc"
.include "arm9/frontend_and_storage.inc"
.include "arm9/machine_bus.inc"
.include "arm9/audio_commands.inc"
.include "arm9/frontend_graphics.inc"
.include "arm9/video/tile_and_sprite_rendering.inc"
.include "arm9/video/vdp_ports_and_dma.inc"
.include "arm9/ipc_savestates_and_text.inc"
.include "arm9/cpu/z80_dispatch_and_opcodes.inc"
.include "arm9/cpu/m68k_opcode_handlers.inc"
.include "arm9/cpu/dispatch_tables.inc"
.include "arm9/platform/storage_and_dldi.inc"
.include "arm9/platform/libnds_and_runtime.inc"
.include "arm9/frontend_assets_and_configuration.inc"
