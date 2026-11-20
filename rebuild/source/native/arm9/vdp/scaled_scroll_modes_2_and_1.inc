/* Genesis VDP frame setup and scanline recording. 0x0200bf18–0x0200c280. */


/* 0x0200bf18 */
.global record_scaled_scanline_hscroll_mode_2
record_scaled_scanline_hscroll_mode_2:
    ldr        r3, .L_0200c08c
    push       {r4, r5, r6, r7, r8, sb, sl, lr}
    ldrb       ip, [r3, r0]
    cmp        ip, #0xc8
    popeq      {r4, r5, r6, r7, r8, sb, sl, pc}
    ldr        r3, .L_0200c090
    ldr        r2, .L_0200c094
    ldrb       r1, [r3]
    ldrb       r3, [r2]
    ldr        r2, .L_0200c098
    lsl        r1, r1, #1
    cmp        r3, #0
    ldrh       r1, [r1, r2]
    ldr        r3, .L_0200c09c
    lsl        lr, ip, #1
    strh       r1, [lr, r3]
    ldreq      r3, .L_0200c0a0
    moveq      r2, #1
    strbeq     r2, [r3, ip]
    popeq      {r4, r5, r6, r7, r8, sb, sl, pc}
    ldr        r3, .L_0200c0a4
    mov        r1, #0
    ldrb       r2, [r3]
    ldr        r3, .L_0200c0a0
    cmp        r2, #0
    strb       r1, [r3, ip]
    beq        .L_0200c010
    ldr        r3, .L_0200c0a8
    ldr        r2, [r3]
    cmp        r0, r2
    blo        .L_0200c020
.L_0200bf94:
    ldr        r3, .L_0200c0ac
    bic        r2, r0, #7
    ldrb       r4, [r3, ip]
    lsl        r5, r2, #2
.L_0200bfa4:
    ldr        r3, .L_0200c0b0
    ldr        r7, .L_0200c0b4
    ldr        r6, .L_0200c0b8
    mov        r2, #1
    strb       r2, [r3, ip]
    ldr        sl, .L_0200c0bc
    mov        r3, #0
    ldr        sb, .L_0200c0c0
    ldr        r8, .L_0200c0c4
    strh       r3, [lr, r7]
    strh       r4, [lr, r6]
.L_0200bfd0:
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
.L_0200c010:
    ldr        r3, .L_0200c0a8
    ldr        r2, [r3]
    cmp        r0, r2
    blo        .L_0200bf94
.L_0200c020:
    ldr        r3, .L_0200c0c8
    bic        r1, r0, #7
    ldr        r2, [r3]
    ldr        r3, .L_0200c0ac
    cmp        r2, #0
    ldrb       r4, [r3, ip]
    lsl        r5, r1, #2
    bne        .L_0200bfa4
    ldr        sl, .L_0200c0bc
    ldr        sb, .L_0200c0c0
    ldrh       r3, [sl]
    ldr        r8, .L_0200c0c4
    add        r3, r5, r3
    bic        r3, r3, #1
    ldrh       r2, [r3, sb]
    ldrh       r0, [r8]
    bic        r2, r2, #0xc000
    ldr        r7, .L_0200c0b4
    ldr        r6, .L_0200c0b8
    ldr        r3, .L_0200c0b0
    rsb        r2, r2, #0
    add        r0, r4, r0
    mov        r1, #0
    strb       r1, [r3, ip]
    strh       r2, [lr, r7]
    strh       r0, [lr, r6]
    b          .L_0200bfd0
.L_0200c08c:
    .word ds_line_from_genesis_scanline
.L_0200c090:
    .word vdp_backdrop_color_index
.L_0200c094:
    .word vdp_display_enabled
.L_0200c098:
    .word ds_converted_vdp_palette
.L_0200c09c:
    .word scanline_backdrop_color
.L_0200c0a0:
    .word scanline_display_blanked
.L_0200c0a4:
    .word vdp_window_y_from_bottom
.L_0200c0a8:
    .word vdp_window_y_split_pixels
.L_0200c0ac:
    .word ds_sprite_height_lines_removed
.L_0200c0b0:
    .word scanline_window_selected
.L_0200c0b4:
    .word scanline_plane_a_hscroll
.L_0200c0b8:
    .word scanline_plane_a_vscroll
.L_0200c0bc:
    .word vdp_hscroll_table_base
.L_0200c0c0:
    .word vdp_vram
.L_0200c0c4:
    .word vdp_vsram
.L_0200c0c8:
    .word 0x023dcfa8

/* 0x0200c0cc */
.global record_scaled_scanline_hscroll_mode_1
record_scaled_scanline_hscroll_mode_1:
    ldr        r3, .L_0200c240
    push       {r4, r5, r6, r7, r8, sb, sl, lr}
    ldrb       ip, [r3, r0]
    cmp        ip, #0xc8
    popeq      {r4, r5, r6, r7, r8, sb, sl, pc}
    ldr        r3, .L_0200c244
    ldr        r2, .L_0200c248
    ldrb       r1, [r3]
    ldrb       r3, [r2]
    ldr        r2, .L_0200c24c
    lsl        r1, r1, #1
    cmp        r3, #0
    ldrh       r1, [r1, r2]
    ldr        r3, .L_0200c250
    lsl        lr, ip, #1
    strh       r1, [lr, r3]
    ldreq      r3, .L_0200c254
    moveq      r2, #1
    strbeq     r2, [r3, ip]
    popeq      {r4, r5, r6, r7, r8, sb, sl, pc}
    ldr        r3, .L_0200c258
    mov        r1, #0
    ldrb       r2, [r3]
    ldr        r3, .L_0200c254
    cmp        r2, #0
    strb       r1, [r3, ip]
    beq        .L_0200c1c4
    ldr        r3, .L_0200c25c
    ldr        r2, [r3]
    cmp        r0, r2
    blo        .L_0200c1d4
.L_0200c148:
    ldr        r3, .L_0200c260
    and        r2, r0, #7
    ldrb       r4, [r3, ip]
    lsl        r5, r2, #2
.L_0200c158:
    ldr        r3, .L_0200c264
    ldr        r7, .L_0200c268
    ldr        r6, .L_0200c26c
    mov        r2, #1
    strb       r2, [r3, ip]
    ldr        sl, .L_0200c270
    mov        r3, #0
    ldr        sb, .L_0200c274
    ldr        r8, .L_0200c278
    strh       r3, [lr, r7]
    strh       r4, [lr, r6]
.L_0200c184:
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
.L_0200c1c4:
    ldr        r3, .L_0200c25c
    ldr        r2, [r3]
    cmp        r0, r2
    blo        .L_0200c148
.L_0200c1d4:
    ldr        r3, .L_0200c27c
    and        r1, r0, #7
    ldr        r2, [r3]
    ldr        r3, .L_0200c260
    cmp        r2, #0
    ldrb       r4, [r3, ip]
    lsl        r5, r1, #2
    bne        .L_0200c158
    ldr        sl, .L_0200c270
    ldr        sb, .L_0200c274
    ldrh       r3, [sl]
    ldr        r8, .L_0200c278
    add        r3, r5, r3
    bic        r3, r3, #1
    ldrh       r2, [r3, sb]
    ldrh       r0, [r8]
    bic        r2, r2, #0xc000
    ldr        r7, .L_0200c268
    ldr        r6, .L_0200c26c
    ldr        r3, .L_0200c264
    rsb        r2, r2, #0
    add        r0, r4, r0
    mov        r1, #0
    strb       r1, [r3, ip]
    strh       r2, [lr, r7]
    strh       r0, [lr, r6]
    b          .L_0200c184
.L_0200c240:
    .word ds_line_from_genesis_scanline
.L_0200c244:
    .word vdp_backdrop_color_index
.L_0200c248:
    .word vdp_display_enabled
.L_0200c24c:
    .word ds_converted_vdp_palette
.L_0200c250:
    .word scanline_backdrop_color
.L_0200c254:
    .word scanline_display_blanked
.L_0200c258:
    .word vdp_window_y_from_bottom
.L_0200c25c:
    .word vdp_window_y_split_pixels
.L_0200c260:
    .word ds_sprite_height_lines_removed
.L_0200c264:
    .word scanline_window_selected
.L_0200c268:
    .word scanline_plane_a_hscroll
.L_0200c26c:
    .word scanline_plane_a_vscroll
.L_0200c270:
    .word vdp_hscroll_table_base
.L_0200c274:
    .word vdp_vram
.L_0200c278:
    .word vdp_vsram
.L_0200c27c:
    .word 0x023dcfa8
