/* Genesis VDP frame setup and scanline recording. 0x0200b438–0x0200bbd0. */


/* 0x0200b438 */
.global begin_vdp_frame_and_refresh_backgrounds
begin_vdp_frame_and_refresh_backgrounds:
    ldr        r0, .L_0200b650
    ldr        r3, .L_0200b654
    push       {r4, r5, r6, r7, lr}
    ldr        r2, [r0, #0x98]
    ldr        r6, .L_0200b658
    ldr        r5, .L_0200b65c
    ldrsh      lr, [r3]
    ldr        r3, .L_0200b660
    ldrh       r1, [r5]
    eor        r2, r2, #0x10
    ldrh       ip, [r6]
    str        r2, [r0, #0x98]
    str        lr, [r3]
    ldr        r2, .L_0200b664
    ldr        r3, .L_0200b668
    cmp        ip, r1
    mov        r1, #0
    sub        sp, sp, #4
    str        r1, [r2]
    str        r1, [r3]
    str        r1, [r0, #0x7c]
    str        r1, [r0, #0x8c]
    str        r1, [r0, #0x90]
    str        r1, [r0, #0x94]
    beq        .L_0200b638
.L_0200b49c:
    ldr        r3, .L_0200b66c
    ldrb       r0, [r3]
    cmp        r0, #0
    beq        .L_0200b588
    mov        r0, #1
    bl         select_window_tilemap_layout
    ldr        r3, .L_0200b670
    ldr        r7, .L_0200b674
    ldr        r0, [r3, #8]
    mov        r1, #0x1000
    add        r0, r0, r7
    mov        r2, #2
    bl         rebuild_background_tilemap_from_vdp_words
.L_0200b4d0:
    ldr        r2, .L_0200b678
    ldr        r3, .L_0200b67c
    ldrh       r2, [r2]
    ldr        r1, .L_0200b680
    ldr        ip, .L_0200b684
    strh       r2, [r3]
    ldrh       r1, [r1]
    ldr        r3, .L_0200b688
    ldr        r2, .L_0200b68c
    ldr        r4, [ip]
    strh       r1, [r3]
    ldrh       r2, [r2]
    ldr        r3, .L_0200b690
    ldrh       r5, [r5]
    cmp        r4, #0
    strh       r2, [r3]
    strh       r5, [r6]
    beq        .L_0200b5ac
    ldr        r3, .L_0200b694
    ldr        r6, .L_0200b670
    mov        r4, #0
    ldr        r0, [r3]
    str        r4, [ip]
    bl         select_background_tilemap_layout
    ldr        r5, .L_0200b698
    ldr        r0, [r6]
    mov        r2, r4
    add        r0, r0, r7
    ldr        r1, [r5]
    bl         rebuild_background_tilemap_from_vdp_words
    ldr        r0, [r6, #4]
    ldr        r1, [r5]
    add        r0, r0, r7
    mov        r2, #1
    bl         rebuild_background_tilemap_from_vdp_words
.L_0200b55c:
    ldr        r3, .L_0200b69c
    ldr        r4, .L_0200b6a0
    ldrsh      r1, [r3]
    mov        r3, #1
    strb       r3, [r4]
    ldr        r0, .L_0200b674
    bl         build_ds_sprite_attributes_from_genesis_sprite_table
    mov        r3, #0
    strb       r3, [r4]
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, pc}
.L_0200b588:
    bl         select_window_tilemap_layout
    ldr        r3, .L_0200b670
    ldr        r7, .L_0200b674
    ldr        r0, [r3, #8]
    mov        r1, #0x800
    add        r0, r0, r7
    mov        r2, #2
    bl         rebuild_background_tilemap_from_vdp_words
    b          .L_0200b4d0
.L_0200b5ac:
    mov        r0, r4
    bl         read_background_tile_cache_refresh_flag
    cmp        r0, #0
    bne        .L_0200b610
    ldr        r5, .L_0200b6a4
    ldr        r3, [r5]
    cmp        r3, #0
    bne        .L_0200b614
.L_0200b5cc:
    mov        r0, #1
    bl         read_background_tile_cache_refresh_flag
    cmp        r0, #0
    bne        .L_0200b5e8
    ldr        r3, [r5, #4]
    cmp        r3, #0
    beq        .L_0200b55c
.L_0200b5e8:
    ldr        r3, .L_0200b670
    ldr        r2, .L_0200b698
    ldr        r0, [r3, #4]
    ldr        r1, [r2]
    add        r0, r0, r7
    mov        r2, #1
    bl         rebuild_background_tilemap_from_vdp_words
    mov        r3, #0
    str        r3, [r5, #4]
    b          .L_0200b55c
.L_0200b610:
    ldr        r5, .L_0200b6a4
.L_0200b614:
    ldr        r3, .L_0200b670
    ldr        r2, .L_0200b698
    ldr        r0, [r3]
    ldr        r1, [r2]
    add        r0, r0, r7
    mov        r2, #0
    bl         rebuild_background_tilemap_from_vdp_words
    str        r4, [r5]
    b          .L_0200b5cc
.L_0200b638:
    mov        r0, #2
    bl         read_background_tile_cache_refresh_flag
    cmp        r0, #0
    ldreq      r7, .L_0200b674
    beq        .L_0200b4d0
    b          .L_0200b49c
.L_0200b650:
    .word frame_timing
.L_0200b654:
    .word vdp_h_interrupt_reload
.L_0200b658:
    .word frame_window_map_stride_tiles
.L_0200b65c:
    .word vdp_window_map_stride_tiles
.L_0200b660:
    .word vdp_h_interrupt_counter
.L_0200b664:
    .word vdp_line_cycle_position
.L_0200b668:
    .word address_0b00361c
.L_0200b66c:
    .word vdp_wide_display_mode
.L_0200b670:
    .word vdp_plane_a_name_table_base
.L_0200b674:
    .word vdp_vram
.L_0200b678:
    .word vdp_active_width_tiles
.L_0200b67c:
    .word frame_active_width_tiles
.L_0200b680:
    .word vdp_active_width_pixels
.L_0200b684:
    .word background_layout_refresh_pending
.L_0200b688:
    .word frame_active_width_pixels
.L_0200b68c:
    .word vdp_active_height_pixels
.L_0200b690:
    .word frame_active_height_pixels
.L_0200b694:
    .word vdp_background_layout_code
.L_0200b698:
    .word plane_name_table_span_bytes
.L_0200b69c:
    .word vdp_sprite_count_limit
.L_0200b6a0:
    .word 0x020b4c15
.L_0200b6a4:
    .word plane_a_tilemap_refresh_pending

/* 0x0200b6a8 */
.global reset_vdp_memory_and_renderer_state
reset_vdp_memory_and_renderer_state:
    push       {r4, r5, r6, lr}
    ldr        r4, .L_0200bab0
    mov        r1, #0
    mov        r3, r4
    add        r2, r4, #0x10000
.L_0200b6bc:
    strb       r1, [r3], #1
    cmp        r3, r2
    bne        .L_0200b6bc
    ldr        r5, .L_0200bab4
    mov        r1, #0
    mov        r3, r5
    add        r2, r5, #0x8000
.L_0200b6d8:
    strb       r1, [r3], #1
    cmp        r3, r2
    bne        .L_0200b6d8
    ldr        r3, .L_0200bab8
    add        r2, r3, #0x100
.L_0200b6ec:
    mov        r0, #0
    strh       r0, [r3], #2
    cmp        r3, r2
    bne        .L_0200b6ec
    ldr        r3, .L_0200babc
    mov        r1, #0
    add        r2, r3, #0xa0
.L_0200b708:
    mov        r6, #0
    strh       r6, [r3], #2
    cmp        r3, r2
    bne        .L_0200b708
    ldr        r3, .L_0200bac0
    ldr        r2, .L_0200bac4
    str        r1, [r3, #0xc]
    str        r1, [r3]
    str        r1, [r3, #4]
    str        r1, [r3, #8]
    add        r3, r2, #0x20
.L_0200b734:
    strb       r1, [r2], #1
    cmp        r2, r3
    bne        .L_0200b734
    ldr        r0, .L_0200bac8
    ldr        ip, .L_0200bacc
    add        lr, r0, #0x80
    mov        r3, #0x8000
    add        r1, r0, #0x200
    mov        r2, lr
.L_0200b758:
    add        r0, r0, #2
    cmp        r0, lr
    strh       r3, [r2, #-0x80]
    strh       r3, [r2]
    strh       r3, [r2, #0x80]
    strh       r3, [ip], #2
    strh       r3, [r1, #-0x80]
    strh       r3, [r1]
    strh       r3, [r1, #0x80]
    add        r2, r2, #2
    add        r1, r1, #2
    bne        .L_0200b758
    ldr        r3, .L_0200bad0
    mov        r0, #0
    add        r2, r3, #0x380
.L_0200b794:
    str        r0, [r3], #4
    cmp        r3, r2
    bne        .L_0200b794
    ldr        r3, .L_0200bad4
    ldr        r2, .L_0200bad8
    str        r0, [r3, #4]
    str        r0, [r3]
    mov        r6, r0
    add        r3, r2, #8
.L_0200b7b8:
    strb       r6, [r2], #1
    cmp        r2, r3
    bne        .L_0200b7b8
    ldr        r3, .L_0200badc
    mov        r2, #0x200
    str        r2, [r3, #0x84]
    ldr        r2, .L_0200bae0
    mov        r1, #0x10
    strb       r6, [r2]
    ldr        r2, .L_0200bae4
    str        r1, [r3, #0x98]
    strb       r6, [r2]
    ldr        r1, .L_0200bae8
    ldr        r2, .L_0200baec
    strb       r6, [r1]
    strb       r6, [r2]
    ldr        r1, .L_0200baf0
    ldr        r2, .L_0200baf4
    strb       r6, [r1]
    strb       r6, [r2]
    ldr        r1, .L_0200baf8
    ldr        r2, .L_0200bafc
    strb       r6, [r1]
    strb       r6, [r2]
    ldr        r1, .L_0200bb00
    ldr        r2, .L_0200bb04
    str        r4, [r3, #0x74]
    str        r6, [r3, #0xa0]
    str        r6, [r3, #0x44]
    str        r6, [r3, #0x54]
    str        r6, [r3, #0x64]
    str        r6, [r3, #0x48]
    str        r6, [r3, #0x58]
    str        r6, [r3, #0x68]
    str        r6, [r3, #0x4c]
    str        r6, [r3, #0x5c]
    str        r6, [r3, #0x6c]
    str        r6, [r3, #0x50]
    str        r6, [r3, #0x60]
    str        r6, [r3, #0x70]
    str        r6, [r3, #0x78]
    str        r6, [r3, #0x7c]
    str        r6, [r3, #0x80]
    str        r6, [r3, #0x88]
    str        r6, [r3, #0x8c]
    str        r6, [r3, #0x90]
    str        r6, [r3, #0x94]
    str        r6, [r3, #0x9c]
    ldr        r3, .L_0200bb08
    strb       r6, [r1]
    strb       r6, [r2]
    mov        r1, #2
    ldr        r2, .L_0200bb0c
    str        r1, [r3]
    ldr        r3, .L_0200bb10
    strb       r6, [r2]
    ldr        r2, .L_0200bb14
    strb       r6, [r3]
    ldr        r3, .L_0200bb18
    strb       r6, [r2]
    ldr        r2, .L_0200bb1c
    strb       r6, [r3]
    ldr        r3, .L_0200bb20
    strb       r6, [r2]
    ldr        r2, .L_0200bb24
    strb       r6, [r3]
    ldr        r3, .L_0200bb28
    strb       r6, [r2]
    ldr        r2, .L_0200bb2c
    strb       r6, [r3]
    ldr        r3, .L_0200bb30
    strb       r6, [r2]
    ldr        r2, .L_0200bb34
    str        r6, [r3]
    ldr        r3, .L_0200bb38
    str        r6, [r2]
    ldr        r2, .L_0200bb3c
    str        r6, [r3]
    ldr        r3, .L_0200bb40
    strb       r6, [r2]
    ldr        r2, .L_0200bb44
    strb       r6, [r3]
    ldr        r3, .L_0200bb48
    strh       r6, [r2]
    ldr        r2, .L_0200bb4c
    strh       r6, [r3]
    ldr        r3, .L_0200bb50
    strh       r6, [r2]
    ldr        r2, .L_0200bb54
    strb       r6, [r3]
    ldr        r3, .L_0200bb58
    strb       r6, [r2]
    ldr        r2, .L_0200bb5c
    strh       r6, [r3]
    ldr        r3, .L_0200bb60
    str        r6, [r2]
    ldr        r2, .L_0200bb64
    mov        r1, #0x140
    strh       r6, [r3]
    ldr        r3, .L_0200bb68
    strh       r1, [r2]
    ldr        r2, .L_0200bb6c
    strh       r1, [r3]
    mov        r3, #0xf0
    strh       r3, [r2]
    ldr        r3, .L_0200bb70
    mov        r1, #0xf0
    strh       r1, [r3]
    ldr        r2, .L_0200bb74
    ldr        r3, .L_0200bb78
    strh       r6, [r2]
    strh       r6, [r3]
    ldr        r2, .L_0200bb7c
    ldr        r3, .L_0200bb80
    str        r6, [r2]
    strh       r6, [r3]
    ldr        r2, .L_0200bb84
    ldr        r3, .L_0200bb88
    strh       r6, [r2]
    strb       r6, [r3]
    ldr        r2, .L_0200bb8c
    ldr        r3, .L_0200bb90
    str        r6, [r2]
    strb       r6, [r3]
    ldr        r2, .L_0200bb94
    ldr        r3, .L_0200bb98
    str        r5, [r2]
    str        r4, [r3]
    ldr        r2, .L_0200bb9c
    ldr        r3, .L_0200bba0
    str        r4, [r2]
    str        r6, [r3]
    bl         configure_ds_display_windows
    ldr        r0, .L_0200bba4
    ldr        ip, .L_0200bba8
    ldr        r3, .L_0200bbac
    ldr        r2, .L_0200bbb0
    mov        r1, #0x800
    ldr        lr, .L_0200bbb4
    ldr        r5, .L_0200bbb8
    ldr        r4, .L_0200bbbc
    str        r1, [r3]
    str        r6, [r0, #4]
    str        r6, [r0]
    str        r6, [r2]
    mov        r0, r6
    add        r1, ip, #0x1e0
.L_0200ba04:
    mov        r2, #0
    strh       r2, [ip]
    add        r2, ip, #0x1e0
    add        ip, ip, #2
    mov        r6, #0
    add        r3, lr, #0x1e0
    cmp        ip, r1
    strh       r6, [lr]
    strh       r6, [r2]
    strh       r6, [r3]
    strb       r0, [r5], #1
    strh       r6, [r4], #2
    add        lr, lr, #2
    bne        .L_0200ba04
    mov        r3, #0
    ldr        r0, .L_0200bbc0
    ldr        r1, .L_0200bbc4
    mov        r2, r3
.L_0200ba4c:
    str        r2, [r3, r0]
    str        r2, [r3, r1]
    add        r3, r3, #4
    cmp        r3, #0x10
    bne        .L_0200ba4c
    ldr        r4, .L_0200bbc8
    mov        r0, r2
    mov        lr, r2
    strb       r2, [r4]
    b          .L_0200ba98
.L_0200ba74:
    ldr        r3, .L_0200bbcc
    strb       lr, [ip, #1]!
    umull      r1, r2, r3, r0
    rsb        r1, r2, r0
    add        r2, r2, r1, lsr #1
    lsr        r2, r2, #2
    rsb        r2, r2, r2, lsl #3
    cmp        r0, r2
    bne        .L_0200baa0
.L_0200ba98:
    add        lr, lr, #1
    add        ip, r0, r4
.L_0200baa0:
    add        r0, r0, #1
    cmp        r0, #0xef
    bls        .L_0200ba74
    pop        {r4, r5, r6, pc}
.L_0200bab0:
    .word vdp_vram
.L_0200bab4:
    .word vram_word_change_flags
.L_0200bab8:
    .word vdp_cram
.L_0200babc:
    .word vdp_vsram
.L_0200bac0:
    .word vdp_plane_a_name_table_base
.L_0200bac4:
    .word vdp_registers
.L_0200bac8:
    .word 0x023dc8ca
.L_0200bacc:
    .word ds_converted_vdp_palette
.L_0200bad0:
    .word scanline_pending_palette_changes
.L_0200bad4:
    .word plane_a_word_change_flags
.L_0200bad8:
    .word 0x023dde95
.L_0200badc:
    .word frame_timing
.L_0200bae0:
    .word 0x020b4c14
.L_0200bae4:
    .word vdp_control_word_pending
.L_0200bae8:
    .word 0x020b4bf4
.L_0200baec:
    .word 0x020b4bf0
.L_0200baf0:
    .word 0x020b4bf1
.L_0200baf4:
    .word vdp_h_interrupt_enabled
.L_0200baf8:
    .word vdp_v_interrupt_enabled
.L_0200bafc:
    .word vdp_window_x_from_right
.L_0200bb00:
    .word vdp_window_y_from_bottom
.L_0200bb04:
    .word vdp_wide_display_mode
.L_0200bb08:
    .word vdp_address_increment
.L_0200bb0c:
    .word vdp_240_line_mode
.L_0200bb10:
    .word vdp_dma_enabled
.L_0200bb14:
    .word vdp_display_enabled
.L_0200bb18:
    .word vdp_dma_mode
.L_0200bb1c:
    .word 0x020b4c04
.L_0200bb20:
    .word vdp_hscroll_mode
.L_0200bb24:
    .word vdp_vscroll_mode
.L_0200bb28:
    .word 0x023ddeb0
.L_0200bb2c:
    .word 0x023ddb04
.L_0200bb30:
    .word vdp_dma_length_register
.L_0200bb34:
    .word vdp_address
.L_0200bb38:
    .word vdp_dma_source_address
.L_0200bb3c:
    .word 0x023dcea6
.L_0200bb40:
    .word 0x023dd372
.L_0200bb44:
    .word 0x023dcdaa
.L_0200bb48:
    .word vdp_hscroll_table_base
.L_0200bb4c:
    .word vdp_h_interrupt_reload
.L_0200bb50:
    .word vdp_backdrop_color_index
.L_0200bb54:
    .word 0x020b4bf6
.L_0200bb58:
    .word 0x020b4c08
.L_0200bb5c:
    .word vdp_access_code
.L_0200bb60:
    .word vdp_sprite_count_limit
.L_0200bb64:
    .word vdp_active_width_pixels
.L_0200bb68:
    .word frame_active_width_pixels
.L_0200bb6c:
    .word vdp_active_height_pixels
.L_0200bb70:
    .word frame_active_height_pixels
.L_0200bb74:
    .word vdp_window_map_stride_tiles
.L_0200bb78:
    .word frame_window_map_stride_tiles
.L_0200bb7c:
    .word 0x023dcfa8
.L_0200bb80:
    .word frame_active_width_tiles
.L_0200bb84:
    .word 0x023ddb08
.L_0200bb88:
    .word 0x020b4c07
.L_0200bb8c:
    .word vdp_dma_remaining
.L_0200bb90:
    .word vdp_mode_5_bit
.L_0200bb94:
    .word vram_word_change_flags_base
.L_0200bb98:
    .word vdp_sat_host_pointer
.L_0200bb9c:
    .word vdp_vram_base_pointer
.L_0200bba0:
    .word 0x023dc8c4
.L_0200bba4:
    .word plane_a_tilemap_refresh_pending
.L_0200bba8:
    .word scanline_plane_a_hscroll
.L_0200bbac:
    .word plane_name_table_span_bytes
.L_0200bbb0:
    .word vdp_background_layout_code
.L_0200bbb4:
    .word scanline_plane_a_vscroll
.L_0200bbb8:
    .word scanline_display_blanked
.L_0200bbbc:
    .word scanline_backdrop_color
.L_0200bbc0:
    .word 0x023dd374
.L_0200bbc4:
    .word vdp_plane_a_name_table_end
.L_0200bbc8:
    .word sprite_y_scale_adjustments
.L_0200bbcc:
    .word 0x24924925
