/* Vdp registers. Release range 0x02009614–0x02009cb0. */


/* 0x02009614 */
.global write_vdp_register_and_update_render_state
write_vdp_register_and_update_render_state:
    push       {r4, r5, lr}
    ldr        r5, .L_02009bcc
    mov        r4, r1
    ldrb       r3, [r5]
    rsbs       r2, r3, #1
    movlo      r2, #0
    cmp        r0, #0xb
    movls      r2, #0
    ldr        r3, .L_02009bd0
    cmp        r2, #0
    strb       r1, [r3, r0]
    popne      {r4, r5, pc}
    cmp        r0, #0x17
    ldrls      pc, [pc, r0, lsl #2]
    b          .L_020096d8
    .word .L_020096dc
    .word .L_02009704
    .word .L_0200977c
    .word .L_020097e4
    .word .L_02009818
    .word .L_02009880
    .word .L_020096d8
    .word .L_020098b0
    .word .L_020096d8
    .word .L_020096d8
    .word .L_020098c8
    .word .L_020098d4
    .word .L_02009908
    .word .L_020099c4
    .word .L_020096d8
    .word .L_020099e4
    .word .L_020099f0
    .word .L_02009a70
    .word .L_02009aa8
    .word .L_02009b1c
    .word .L_02009ad0
    .word .L_02009ae4
    .word .L_02009b00
    .word .L_020096b0
.L_020096b0:
    ldr        r0, .L_02009bd4
    and        r2, r1, #0x7f
    ldr        r3, [r0]
    lsr        r1, r1, #6
    bic        r3, r3, #0xff000000
    bic        r3, r3, #0xfe0000
    orr        r3, r3, r2, lsl #17
    ldr        r2, .L_02009bd8
    str        r3, [r0]
    strb       r1, [r2]
.L_020096d8:
    pop        {r4, r5, pc}
.L_020096dc:
    lsr        r0, r1, #1
    lsr        r3, r1, #4
    eor        r0, r0, #1
    ldr        r2, .L_02009bdc
    ldr        r1, .L_02009be0
    and        r3, r3, #1
    and        r0, r0, #1
    strb       r3, [r2]
    strb       r0, [r1]
    pop        {r4, r5, pc}
.L_02009704:
    lsr        lr, r1, #3
    and        r3, r4, #4
    ldr        r2, .L_02009be4
    lsr        r1, r1, #6
    and        r1, r1, #1
    lsr        r0, r4, #5
    strb       r3, [r5]
    ldr        r3, .L_02009be8
    strb       r1, [r2]
    and        lr, lr, #1
    ldr        r2, .L_02009bec
    lsr        ip, r4, #4
    and        r0, r0, #1
    cmp        lr, #0
    and        ip, ip, #1
    strb       r0, [r3]
    ldr        r3, .L_02009bf0
    strb       ip, [r2]
    ldrne      r1, .L_02009bf4
    ldrne      r2, .L_02009bf8
    ldreq      r2, .L_02009bf8
    ldreq      r1, .L_02009bf4
    strb       lr, [r3]
    movne      r3, #0xf0
    moveq      r3, #0xe0
    strhne     r3, [r2]
    strne      r3, [r1, #4]
    strheq     r3, [r2]
    streq      r3, [r1, #4]
    pop        {r4, r5, pc}
.L_0200977c:
    ldr        r3, .L_02009bfc
    and        r1, r1, #0x38
    ldr        r2, [r3]
    ldr        r3, .L_02009c00
    lsl        r0, r1, #0xa
    tst        r2, #8
    ldr        r1, .L_02009c04
    ldr        r2, .L_02009c08
    add        r3, r3, r0, lsr #1
    str        r0, [r1]
    str        r3, [r2]
    ldreq      r1, .L_02009c0c
    beq        .L_020097c8
    ldr        r1, .L_02009c0c
    ldr        r3, [r1]
    cmp        r0, r3
    ldrne      r3, .L_02009c10
    movne      r2, #1
    strne      r2, [r3]
.L_020097c8:
    ldr        r3, .L_02009c14
    str        r0, [r1]
    ldr        r2, [r3]
    ldr        r3, .L_02009c18
    add        r2, r0, r2
    str        r2, [r3]
    pop        {r4, r5, pc}
.L_020097e4:
    ldr        r2, .L_02009c1c
    and        r0, r1, #0x3e
    ldrb       r3, [r2]
    lsl        r0, r0, #0xa
    cmp        r3, #0
    moveq      r3, #0x800
    movne      r3, #0x1000
    ldr        r2, .L_02009c18
    ldr        r1, .L_02009c04
    add        r3, r3, r0
    str        r3, [r2, #8]
    str        r0, [r1, #8]
    pop        {r4, r5, pc}
.L_02009818:
    ldr        r3, .L_02009bfc
    and        r1, r1, #7
    ldr        r2, [r3]
    ldr        r3, .L_02009c00
    lsl        r0, r1, #0xd
    tst        r2, #8
    ldr        r1, .L_02009c04
    ldr        r2, .L_02009c08
    add        r3, r3, r0, lsr #1
    str        r0, [r1, #4]
    str        r3, [r2, #4]
    ldreq      r1, .L_02009c0c
    beq        .L_02009864
    ldr        r1, .L_02009c0c
    ldr        r3, [r1, #4]
    cmp        r0, r3
    ldrne      r3, .L_02009c10
    movne      r2, #1
    strne      r2, [r3, #4]
.L_02009864:
    ldr        r3, .L_02009c14
    str        r0, [r1, #4]
    ldr        r2, [r3]
    ldr        r3, .L_02009c18
    add        r2, r0, r2
    str        r2, [r3, #4]
    pop        {r4, r5, pc}
.L_02009880:
    ldr        lr, .L_02009c04
    and        r0, r1, #0x7f
    ldr        r1, .L_02009c20
    lsl        r0, r0, #9
    ldr        ip, [lr, #0xc]
    ldr        r3, .L_02009c24
    ldr        r2, .L_02009c28
    add        r1, r0, r1
    str        ip, [r3]
    str        r1, [r2]
    str        r0, [lr, #0xc]
    pop        {r4, r5, pc}
.L_020098b0:
    and        r3, r1, #0x3f
    ldr        r2, .L_02009c2c
    ldr        r1, .L_02009c30
    str        r3, [r2]
    strb       r3, [r1]
    pop        {r4, r5, pc}
.L_020098c8:
    ldr        r3, .L_02009c34
    strh       r1, [r3]
    pop        {r4, r5, pc}
.L_020098d4:
    ldr        r3, .L_02009c38
    lsr        r1, r1, #3
    and        r1, r1, #1
    lsr        r0, r4, #2
    strb       r1, [r3]
    ldr        r2, .L_02009c3c
    ldr        r3, .L_02009c40
    and        r0, r0, #1
    and        ip, r4, #3
    strb       r0, [r2]
    strb       ip, [r3]
    pop        {r4, r5, lr}
    b          select_vdp_scanline_render_callback
.L_02009908:
    ldr        ip, .L_02009c44
    lsr        r2, r1, #3
    ldrb       r0, [ip]
    tst        r1, #0x81
    and        r2, r2, #1
    ldr        r3, .L_02009c1c
    moveq      r1, #0
    movne      r1, #1
    cmp        r0, r2
    strb       r1, [r3]
    beq        .L_02009940
    rsbs       r3, r0, #1
    movlo      r3, #0
    strb       r3, [ip]
.L_02009940:
    cmp        r1, #0
    beq        .L_02009b6c
    ldr        r3, .L_02009c04
    ldr        r2, .L_02009c18
    ldr        r1, [r3, #8]
    ldr        r3, .L_02009c48
    mov        r0, #0xf000
    add        r1, r1, #0x1000
    str        r0, [r3]
    ldr        r3, .L_02009c4c
    str        r1, [r2, #8]
    mov        r2, #0x50
    strh       r2, [r3]
    ldr        r2, .L_02009c50
    mov        r3, #0x28
    strh       r3, [r2]
    ldr        r3, .L_02009c54
    mov        r2, #0x140
    strh       r2, [r3]
    ldr        r2, .L_02009c58
    mov        r3, #0x40
    strh       r3, [r2]
.L_02009998:
    ldr        r3, .L_02009c5c
    ldrb       r2, [r3]
    cmp        r2, #0
    beq        .L_02009b4c
    ldr        r3, .L_02009c60
    ldrb       r2, [r3]
    rsbs       r1, r2, #1
    movlo      r1, #0
.L_020099b8:
    ldr        r3, .L_02009c64
    str        r1, [r3]
    pop        {r4, r5, pc}
.L_020099c4:
    lsl        r1, r1, #0x1a
    lsr        r1, r1, #0x10
    ldr        r3, .L_02009c68
    ldr        r2, .L_02009c6c
    add        r0, r1, #0x380
    strh       r0, [r3]
    strh       r1, [r2]
    pop        {r4, r5, pc}
.L_020099e4:
    ldr        r3, .L_02009c70
    str        r1, [r3]
    pop        {r4, r5, pc}
.L_020099f0:
    ldr        r0, .L_02009c74
    lsr        r3, r1, #4
    and        r5, r3, #3
    and        lr, r1, #3
    ldrb       r2, [r0]
    orr        r1, r5, lr, lsl #4
    ldr        r3, .L_02009c78
    cmp        r1, r2
    ldr        r2, .L_02009c7c
    strb       r5, [r3]
    ldrne      r3, .L_02009c80
    strb       lr, [r2]
    movne      r2, #1
    ldr        ip, .L_02009c04
    strne      r2, [r3]
    ldr        r3, .L_02009c84
    str        r1, [r0]
    add        r1, r5, lr, lsl #2
    ldr        r0, [r3, r1, lsl #2]
    ldm        ip, {r1, r2}
    ldr        r3, .L_02009c88
    ldr        ip, .L_02009c18
    add        r2, r0, r2
    ldrb       lr, [r3, lr]
    str        r2, [ip, #4]
    ldr        r3, .L_02009c8c
    ldr        r2, .L_02009c14
    add        r1, r0, r1
    strh       lr, [r3]
    str        r0, [r2]
    str        r1, [ip]
    pop        {r4, r5, pc}
.L_02009a70:
    lsl        r2, r1, #1
    and        r4, r2, #0x3f
    lsr        r1, r1, #7
    ldr        r3, .L_02009c5c
    ldr        r2, .L_02009c60
    cmp        r1, #0
    strb       r1, [r3]
    strb       r4, [r2]
    beq        .L_02009b34
    rsbs       r2, r4, #1
    movlo      r2, #0
.L_02009a9c:
    ldr        r3, .L_02009c64
    str        r2, [r3]
    pop        {r4, r5, pc}
.L_02009aa8:
    ldr        r3, .L_02009c90
    and        ip, r1, #0x1f
    lsr        r1, r1, #7
    strb       r1, [r3]
    ldr        r2, .L_02009c94
    ldr        r3, .L_02009c98
    lsl        r0, ip, #3
    str        r0, [r2]
    strb       ip, [r3]
    pop        {r4, r5, pc}
.L_02009ad0:
    ldr        r2, .L_02009c9c
    ldrb       r3, [r2]
    orr        r3, r3, r1, lsl #8
    str        r3, [r2]
    pop        {r4, r5, pc}
.L_02009ae4:
    ldr        r3, .L_02009bd4
    ldr        r2, .L_02009ca0
    ldr        r1, [r3]
    and        r2, r1, r2
    orr        r2, r2, r4, lsl #1
    str        r2, [r3]
    pop        {r4, r5, pc}
.L_02009b00:
    ldr        r3, .L_02009bd4
    ldr        r2, .L_02009ca4
    ldr        r1, [r3]
    and        r2, r1, r2
    orr        r2, r2, r4, lsl #9
    str        r2, [r3]
    pop        {r4, r5, pc}
.L_02009b1c:
    ldr        r2, .L_02009c9c
    ldr        r3, [r2]
    and        r3, r3, #0xff00
    orr        r3, r3, r1
    str        r3, [r2]
    pop        {r4, r5, pc}
.L_02009b34:
    ldr        r3, .L_02009ca8
    ldrh       r2, [r3]
    cmp        r4, r2
    movlo      r2, #0
    movhs      r2, #1
    b          .L_02009a9c
.L_02009b4c:
    ldr        r3, .L_02009c60
    ldr        r2, .L_02009ca8
    ldrb       r1, [r3]
    ldrh       r3, [r2]
    cmp        r1, r3
    movlo      r1, #0
    movhs      r1, #1
    b          .L_020099b8
.L_02009b6c:
    ldr        r3, .L_02009c04
    mov        r2, #0xf800
    ldr        r0, [r3, #8]
    ldr        r3, .L_02009c48
    mov        r1, #1
    str        r2, [r3]
    ldr        r3, .L_02009cac
    ldr        r2, .L_02009c18
    add        r0, r0, #0x800
    strb       r1, [r3]
    ldr        r3, .L_02009c4c
    str        r0, [r2, #8]
    mov        r2, #0x40
    strh       r2, [r3]
    ldr        r2, .L_02009c50
    mov        r3, #0x20
    strh       r3, [r2]
    ldr        r3, .L_02009c54
    mov        r2, #0x100
    strh       r2, [r3]
    ldr        r2, .L_02009c58
    mov        r3, #0x20
    strh       r3, [r2]
    b          .L_02009998
.L_02009bcc:
    .word vdp_mode_5_bit
.L_02009bd0:
    .word vdp_registers
.L_02009bd4:
    .word vdp_dma_source_address
.L_02009bd8:
    .word vdp_dma_mode
.L_02009bdc:
    .word vdp_h_interrupt_enabled
.L_02009be0:
    .word 0x020b4bf1
.L_02009be4:
    .word vdp_display_enabled
.L_02009be8:
    .word vdp_v_interrupt_enabled
.L_02009bec:
    .word vdp_dma_enabled
.L_02009bf0:
    .word vdp_240_line_mode
.L_02009bf4:
    .word frame_timing
.L_02009bf8:
    .word vdp_active_height_pixels
.L_02009bfc:
    .word emulator_option_flags
.L_02009c00:
    .word vram_word_change_flags
.L_02009c04:
    .word vdp_plane_a_name_table_base
.L_02009c08:
    .word plane_a_word_change_flags
.L_02009c0c:
    .word 0x023dd374
.L_02009c10:
    .word plane_a_tilemap_refresh_pending
.L_02009c14:
    .word plane_name_table_span_bytes
.L_02009c18:
    .word vdp_plane_a_name_table_end
.L_02009c1c:
    .word vdp_wide_display_mode
.L_02009c20:
    .word vdp_vram
.L_02009c24:
    .word 0x0209cbe0
.L_02009c28:
    .word vdp_sat_host_pointer
.L_02009c2c:
    .word address_0b003640
.L_02009c30:
    .word vdp_backdrop_color_index
.L_02009c34:
    .word vdp_h_interrupt_reload
.L_02009c38:
    .word 0x020b4bf0
.L_02009c3c:
    .word vdp_vscroll_mode
.L_02009c40:
    .word vdp_hscroll_mode
.L_02009c44:
    .word 0x020b4bf4
.L_02009c48:
    .word 0x020b4c0c
.L_02009c4c:
    .word vdp_sprite_count_limit
.L_02009c50:
    .word vdp_active_width_tiles
.L_02009c54:
    .word vdp_active_width_pixels
.L_02009c58:
    .word vdp_window_map_stride_tiles
.L_02009c5c:
    .word vdp_window_x_from_right
.L_02009c60:
    .word 0x023ddb04
.L_02009c64:
    .word 0x023dcfa8
.L_02009c68:
    .word 0x023dcdaa
.L_02009c6c:
    .word vdp_hscroll_table_base
.L_02009c70:
    .word vdp_address_increment
.L_02009c74:
    .word vdp_background_layout_code
.L_02009c78:
    .word 0x023dd372
.L_02009c7c:
    .word 0x023dcea6
.L_02009c80:
    .word background_layout_refresh_pending
.L_02009c84:
    .word address_0208e59c
.L_02009c88:
    .word address_0208e5dc
.L_02009c8c:
    .word 0x023ddb08
.L_02009c90:
    .word vdp_window_y_from_bottom
.L_02009c94:
    .word vdp_window_y_split_pixels
.L_02009c98:
    .word 0x023ddeb0
.L_02009c9c:
    .word vdp_dma_length_register
.L_02009ca0:
    .word 0x00fffe00
.L_02009ca4:
    .word 0x00fe01ff
.L_02009ca8:
    .word frame_active_width_tiles
.L_02009cac:
    .word 0x020b4c14
