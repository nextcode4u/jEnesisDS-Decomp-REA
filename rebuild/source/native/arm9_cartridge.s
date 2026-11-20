/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_cartridge_checksum, "ax", %progbits
.include "native/arm9/cartridge/cartridge_checksum.inc"

.section .native.arm9_cartridge_storage, "ax", %progbits
.include "native/arm9/cartridge/cartridge_storage.inc"
.include "native/arm9/cartridge/rom_loading.inc"

.section .native.arm9_savestate_io, "ax", %progbits
.include "native/arm9/cartridge/savestate_io.inc"
