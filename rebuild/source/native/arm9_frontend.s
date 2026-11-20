/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_frontend_main, "ax", %progbits
.include "native/arm9/frontend/frontend_main.inc"

.section .native.arm9_frontend_panels, "ax", %progbits
.include "native/arm9/frontend/frontend_panels.inc"
.include "native/arm9/frontend/gameplay_input.inc"
.include "native/arm9/frontend/cartridge_information_and_browser.inc"
.include "native/arm9/frontend/configuration_and_savestates.inc"

.section .native.arm9_frontend_rom_browser, "ax", %progbits
.include "native/arm9/frontend/frontend_rom_browser.inc"

.section .native.arm9_frontend_indicators, "ax", %progbits
.include "native/arm9/frontend/frontend_indicators.inc"

.section .native.arm9_frontend_graphics, "ax", %progbits
.include "native/arm9/frontend/frontend_graphics.inc"

.section .native.arm9_frontend_text, "ax", %progbits
.include "native/arm9/frontend/frontend_text.inc"

.section .native.arm9_frontend_hex_tiles, "ax", %progbits
.include "native/arm9/frontend/frontend_hex_tiles.inc"
