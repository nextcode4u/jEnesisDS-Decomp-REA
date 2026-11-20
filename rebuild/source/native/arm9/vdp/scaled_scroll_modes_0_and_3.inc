/* Genesis VDP frame setup and scanline recording. 0x0200bbd0–0x0200bf18. */


/* 0x0200bbd0 */
.global record_scaled_scanline_hscroll_mode_0
record_scaled_scanline_hscroll_mode_0:
    ldr        r3, .L_0200bd2c
    push       {r4, r5, r6, r7, r8, sl, lr}
    ldrb       ip, [r3, r0]
    cmp        ip, #0xc8
    popeq      {r4, r5, r6, r7, r8, sl, pc}
    ldr        r3, .L_0200bd30
    ldr        r2, .L_0200bd34
    ldrb       r1, [r3]
    ldrb       r3, [r2]
    ldr        r2, .L_0200bd38
    lsl        r1, r1, #1
    cmp        r3, #0
    ldrh       r1, [r1, r2]
    ldr        r3, .L_0200bd3c
    lsl        lr, ip, #1
    strh       r1, [lr, r3]
    ldreq      r3, .L_0200bd40
    moveq      r2, #1
    strbeq     r2, [r3, ip]
    popeq      {r4, r5, r6, r7, r8, sl, pc}
    ldr        r3, .L_0200bd44
    mov        r1, #0
    ldrb       r2, [r3]
    ldr        r3, .L_0200bd40
    cmp        r2, #0
    strb       r1, [r3, ip]
    beq        .L_0200bcbc
    ldr        r3, .L_0200bd48
    ldr        r2, [r3]
    cmp        r0, r2
    blo        .L_0200bccc
.L_0200bc4c:
    ldr        r3, .L_0200bd4c
    ldrb       r4, [r3, ip]
.L_0200bc54:
    ldr        r3, .L_0200bd50
    ldr        r6, .L_0200bd54
    ldr        r5, .L_0200bd58
    mov        r2, #1
    strb       r2, [r3, ip]
    ldr        r8, .L_0200bd5c
    mov        r3, #0
    ldr        sl, .L_0200bd60
    ldr        r7, .L_0200bd64
    strh       r3, [lr, r6]
    strh       r4, [lr, r5]
.L_0200bc80:
    ldrh       r3, [r8]
    ldrh       r0, [r7, #2]
    add        r3, r3, #2
    bic        r3, r3, #1
    ldrh       r2, [r3, sl]
    add        r1, lr, r5
    add        r3, lr, r6
    bic        r2, r2, #0xc000
    add        r0, r4, r0
    add        r3, r3, #0x1e0
    rsb        r2, r2, #0
    add        r1, r1, #0x1e0
    strh       r2, [r3]
    strh       r0, [r1]
    pop        {r4, r5, r6, r7, r8, sl, pc}
.L_0200bcbc:
    ldr        r3, .L_0200bd48
    ldr        r2, [r3]
    cmp        r0, r2
    blo        .L_0200bc4c
.L_0200bccc:
    ldr        r3, .L_0200bd68
    ldr        r2, .L_0200bd4c
    ldr        r1, [r3]
    ldrb       r4, [r2, ip]
    cmp        r1, #0
    bne        .L_0200bc54
    ldr        r8, .L_0200bd5c
    ldr        sl, .L_0200bd60
    ldrh       r3, [r8]
    ldr        r7, .L_0200bd64
    bic        r3, r3, #1
    ldrh       r2, [r3, sl]
    ldrh       r0, [r7]
    bic        r2, r2, #0xc000
    ldr        r6, .L_0200bd54
    ldr        r5, .L_0200bd58
    ldr        r3, .L_0200bd50
    rsb        r2, r2, #0
    add        r0, r4, r0
    mov        r1, #0
    strb       r1, [r3, ip]
    strh       r2, [lr, r6]
    strh       r0, [lr, r5]
    b          .L_0200bc80
.L_0200bd2c:
    .word ds_line_from_genesis_scanline
.L_0200bd30:
    .word vdp_backdrop_color_index
.L_0200bd34:
    .word vdp_display_enabled
.L_0200bd38:
    .word ds_converted_vdp_palette
.L_0200bd3c:
    .word scanline_backdrop_color
.L_0200bd40:
    .word scanline_display_blanked
.L_0200bd44:
    .word vdp_window_y_from_bottom
.L_0200bd48:
    .word vdp_window_y_split_pixels
.L_0200bd4c:
    .word ds_sprite_height_lines_removed
.L_0200bd50:
    .word scanline_window_selected
.L_0200bd54:
    .word scanline_plane_a_hscroll
.L_0200bd58:
    .word scanline_plane_a_vscroll
.L_0200bd5c:
    .word vdp_hscroll_table_base
.L_0200bd60:
    .word vdp_vram
.L_0200bd64:
    .word vdp_vsram
.L_0200bd68:
    .word 0x023dcfa8

/* 0x0200bd6c */
.global record_scaled_scanline_hscroll_mode_3
record_scaled_scanline_hscroll_mode_3:
    ldr        r3, .L_0200bed8
    push       {r4, r5, r6, r7, r8, sb, sl, lr}
    ldrb       ip, [r3, r0]
    cmp        ip, #0xc8
    popeq      {r4, r5, r6, r7, r8, sb, sl, pc}
    ldr        r3, .L_0200bedc
    ldr        r2, .L_0200bee0
    ldrb       r1, [r3]
    ldrb       r3, [r2]
    ldr        r2, .L_0200bee4
    lsl        r1, r1, #1
    cmp        r3, #0
    ldrh       r1, [r1, r2]
    ldr        r3, .L_0200bee8
    lsl        lr, ip, #1
    strh       r1, [lr, r3]
    ldreq      r3, .L_0200beec
    moveq      r2, #1
    strbeq     r2, [r3, ip]
    popeq      {r4, r5, r6, r7, r8, sb, sl, pc}
    ldr        r3, .L_0200bef0
    mov        r1, #0
    ldrb       r2, [r3]
    ldr        r3, .L_0200beec
    cmp        r2, #0
    strb       r1, [r3, ip]
    beq        .L_0200be60
    ldr        r3, .L_0200bef4
    ldr        r2, [r3]
    cmp        r0, r2
    blo        .L_0200be70
.L_0200bde8:
    ldr        r3, .L_0200bef8
    lsl        r5, r0, #2
    ldrb       r4, [r3, ip]
.L_0200bdf4:
    ldr        r3, .L_0200befc
    ldr        r7, .L_0200bf00
    ldr        r6, .L_0200bf04
    mov        r2, #1
    strb       r2, [r3, ip]
    ldr        sl, .L_0200bf08
    mov        r3, #0
    ldr        sb, .L_0200bf0c
    ldr        r8, .L_0200bf10
    strh       r3, [lr, r7]
    strh       r4, [lr, r6]
.L_0200be20:
    ldrh       r3, [sl]
    ldrh       r0, [r8, #2]
    add        r3, r3, #2
    add        r3, r3, r5
    bic        r3, r3, #1
    ldrh       r2, [r3, sb]
    add        r1, lr, r6
    add        r3, lr, r7
    bic        r2, r2, #0xc000
    add        r0, r4, r0
    add        r3, r3, #0x1e0
    rsb        r2, r2, #0
    add        r1, r1, #0x1e0
    strh       r2, [r3]
    strh       r0, [r1]
    pop        {r4, r5, r6, r7, r8, sb, sl, pc}
.L_0200be60:
    ldr        r3, .L_0200bef4
    ldr        r2, [r3]
    cmp        r0, r2
    blo        .L_0200bde8
.L_0200be70:
    ldr        r3, .L_0200bf14
    ldr        r2, .L_0200bef8
    ldr        r1, [r3]
    ldrb       r4, [r2, ip]
    cmp        r1, #0
    lsl        r5, r0, #2
    bne        .L_0200bdf4
    ldr        sl, .L_0200bf08
    ldr        sb, .L_0200bf0c
    ldrh       r3, [sl]
    ldr        r8, .L_0200bf10
    add        r3, r5, r3
    bic        r3, r3, #1
    ldrh       r2, [r3, sb]
    ldrh       r0, [r8]
    bic        r2, r2, #0xc000
    ldr        r7, .L_0200bf00
    ldr        r6, .L_0200bf04
    ldr        r3, .L_0200befc
    rsb        r2, r2, #0
    add        r0, r4, r0
    mov        r1, #0
    strb       r1, [r3, ip]
    strh       r2, [lr, r7]
    strh       r0, [lr, r6]
    b          .L_0200be20
.L_0200bed8:
    .word ds_line_from_genesis_scanline
.L_0200bedc:
    .word vdp_backdrop_color_index
.L_0200bee0:
    .word vdp_display_enabled
.L_0200bee4:
    .word ds_converted_vdp_palette
.L_0200bee8:
    .word scanline_backdrop_color
.L_0200beec:
    .word scanline_display_blanked
.L_0200bef0:
    .word vdp_window_y_from_bottom
.L_0200bef4:
    .word vdp_window_y_split_pixels
.L_0200bef8:
    .word ds_sprite_height_lines_removed
.L_0200befc:
    .word scanline_window_selected
.L_0200bf00:
    .word scanline_plane_a_hscroll
.L_0200bf04:
    .word scanline_plane_a_vscroll
.L_0200bf08:
    .word vdp_hscroll_table_base
.L_0200bf0c:
    .word vdp_vram
.L_0200bf10:
    .word vdp_vsram
.L_0200bf14:
    .word 0x023dcfa8
