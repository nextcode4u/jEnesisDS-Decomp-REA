/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_frame_without_h_interrupts, "ax", %progbits
.include "native/arm9/machine/frame_without_h_interrupts.inc"

.section .native.arm9_shared_audio_startup, "ax", %progbits
.include "native/arm9/machine/shared_audio_startup.inc"

.section .native.arm9_controller_polling, "ax", %progbits
.include "native/arm9/machine/controller_polling.inc"

.section .native.arm9_controller_inputs, "ax", %progbits
.include "native/arm9/machine/controller_inputs.inc"

.section .native.arm9_m68k_rom_long_read, "ax", %progbits
.include "native/arm9/machine/m68k_rom_long_read.inc"

.section .native.arm9_m68k_bus_writes, "ax", %progbits
.include "native/arm9/machine/m68k_bus_writes.inc"

.section .native.arm9_m68k_page_reads, "ax", %progbits
.include "native/arm9/machine/m68k_page_reads.inc"

.section .native.arm9_z80_bus_status, "ax", %progbits
.include "native/arm9/machine/z80_bus_status.inc"

.section .native.arm9_m68k_external_bus, "ax", %progbits
.include "native/arm9/machine/m68k_external_bus.inc"

.section .native.arm9_z80_write_and_read_window, "ax", %progbits
.include "native/arm9/machine/z80_write_and_read_window.inc"

.section .native.arm9_z80_memory_stubs, "ax", %progbits
.include "native/arm9/machine/z80_memory_stubs.inc"

.section .native.arm9_z80_reset, "ax", %progbits
.include "native/arm9/machine/z80_reset.inc"

.section .native.arm9_m68k_restore_pc, "ax", %progbits
.include "native/arm9/machine/m68k_restore_pc.inc"

.section .native.arm9_m68k_reset_and_loop_detection, "ax", %progbits
.include "native/arm9/machine/m68k_reset_and_loop_detection.inc"

.section .native.arm9_z80_opcode_bridges, "ax", %progbits
.include "native/arm9/machine/z80_opcode_bridges.inc"
