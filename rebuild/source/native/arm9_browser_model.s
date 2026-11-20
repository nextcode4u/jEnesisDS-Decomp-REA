/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_browser_page_and_settings_state, "ax", %progbits
.include "native/arm9/browser_model/browser_page_and_settings_state.inc"

.section .native.arm9_browser_entries_and_cartridge_selection, "ax", %progbits
.include "native/arm9/browser_model/browser_entries_and_cartridge_selection.inc"
