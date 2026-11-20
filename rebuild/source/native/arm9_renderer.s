/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_tile_and_sprite_rendering, "ax", %progbits
.include "native/arm9/renderer/tile_and_sprite_rendering.inc"
.include "native/arm9/renderer/tile_cache.inc"
.include "native/arm9/renderer/tilemap_writes.inc"
.include "native/arm9/renderer/tilemap_transfers.inc"
.include "native/arm9/renderer/display_and_sprites.inc"
