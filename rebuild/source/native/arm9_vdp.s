/* Genesis VDP frame setup and scanline recording. Assembled in release address order. */
.syntax unified
.arm
.section .native.arm9_vdp, "ax", %progbits

.include "native/arm9/vdp/background_refresh_and_vdp_reset.inc"
.include "native/arm9/vdp/scaled_scroll_modes_0_and_3.inc"
.include "native/arm9/vdp/scaled_scroll_modes_2_and_1.inc"
.include "native/arm9/vdp/unscaled_scanline.inc"
