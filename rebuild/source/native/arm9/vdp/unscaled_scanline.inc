/* Genesis VDP frame setup and scanline recording. 0x0200c280–0x0200c4a8. */


/* 0x0200c280 */
.global record_unscaled_scanline_scroll_and_backdrop
record_unscaled_scanline_scroll_and_backdrop:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r3, .L_0200c468
    ldr        r2, .L_0200c46c
    ldrb       r1, [r3]
    ldrb       r3, [r2]
    ldr        r2, .L_0200c470
    lsl        r1, r1, #1
    cmp        r3, #0
    ldrh       r1, [r1, r2]
    ldr        r3, .L_0200c474
    lsl        ip, r0, #1
    strh       r1, [ip, r3]
    ldreq      r3, .L_0200c478
    moveq      r2, #1
    strbeq     r2, [r3, r0]
    popeq      {r4, r5, r6, r7, r8, pc}
    ldr        r3, .L_0200c47c
    mov        r1, #0
    ldrb       r2, [r3]
    ldr        r3, .L_0200c478
    cmp        r2, #0
    strb       r1, [r3, r0]
    bne        .L_0200c398
    ldr        r3, .L_0200c480
    ldr        r2, [r3]
    cmp        r0, r2
    bhs        .L_0200c3a8
.L_0200c2ec:
    ldr        r3, .L_0200c484
    ldr        lr, .L_0200c488
    ldr        r4, .L_0200c48c
    mov        r2, #1
    strb       r2, [r3, r0]
    ldr        r8, .L_0200c490
    mov        r3, #0
    ldr        r7, .L_0200c494
    ldr        r6, .L_0200c498
    ldr        r5, .L_0200c49c
    strh       r3, [ip, lr]
    strh       r3, [ip, r4]
.L_0200c31c:
    ldrb       r2, [r7]
    ldrh       r3, [r8]
    cmp        r2, #2
    add        r1, r3, #2
    biceq      r3, r0, #7
    addeq      r1, r1, r3, lsl #2
    beq        .L_0200c350
    cmp        r2, #3
    addeq      r1, r1, r0, lsl #2
    beq        .L_0200c350
    cmp        r2, #1
    andeq      r3, r0, #7
    addeq      r1, r1, r3, lsl #2
.L_0200c350:
    bic        r3, r1, #1
    ldrh       r2, [r3, r6]
    ldrb       r1, [r5]
    lsl        r2, r2, #0x12
    add        r3, ip, lr
    lsr        r2, r2, #0x12
    add        r3, r3, #0x1e0
    rsb        r2, r2, #0
    cmp        r1, #0
    strh       r2, [r3]
    beq        .L_0200c444
    cmp        r1, #1
    movne      r2, #0
    beq        .L_0200c444
    add        r3, ip, r4
    add        r3, r3, #0x1e0
    strh       r2, [r3]
    pop        {r4, r5, r6, r7, r8, pc}
.L_0200c398:
    ldr        r3, .L_0200c480
    ldr        r2, [r3]
    cmp        r0, r2
    bhs        .L_0200c2ec
.L_0200c3a8:
    ldr        r3, .L_0200c4a0
    ldr        r2, [r3]
    cmp        r2, #0
    bne        .L_0200c2ec
    ldr        r7, .L_0200c494
    ldr        r8, .L_0200c490
    ldrb       r3, [r7]
    ldrh       r2, [r8]
    cmp        r3, #2
    biceq      r3, r0, #7
    addeq      r2, r2, r3, lsl #2
    beq        .L_0200c3f0
    cmp        r3, #3
    addeq      r2, r2, r0, lsl #2
    beq        .L_0200c3f0
    cmp        r3, #1
    andeq      r3, r0, #7
    addeq      r2, r2, r3, lsl #2
.L_0200c3f0:
    ldr        r6, .L_0200c498
    bic        r2, r2, #1
    ldrh       r3, [r2, r6]
    ldr        r5, .L_0200c49c
    lsl        r3, r3, #0x12
    ldrb       r2, [r5]
    lsr        r3, r3, #0x12
    ldr        lr, .L_0200c488
    rsb        r3, r3, #0
    cmp        r2, #0
    strh       r3, [ip, lr]
    beq        .L_0200c45c
    cmp        r2, #1
    movne      r1, #0
    beq        .L_0200c45c
.L_0200c42c:
    ldr        r4, .L_0200c48c
    ldr        r3, .L_0200c484
    mov        r2, #0
    strb       r2, [r3, r0]
    strh       r1, [ip, r4]
    b          .L_0200c31c
.L_0200c444:
    ldr        r3, .L_0200c4a4
    ldrh       r2, [r3, #2]
    add        r3, ip, r4
    add        r3, r3, #0x1e0
    strh       r2, [r3]
    pop        {r4, r5, r6, r7, r8, pc}
.L_0200c45c:
    ldr        r3, .L_0200c4a4
    ldrh       r1, [r3]
    b          .L_0200c42c
.L_0200c468:
    .word vdp_backdrop_color_index
.L_0200c46c:
    .word vdp_display_enabled
.L_0200c470:
    .word ds_converted_vdp_palette
.L_0200c474:
    .word scanline_backdrop_color
.L_0200c478:
    .word scanline_display_blanked
.L_0200c47c:
    .word vdp_window_y_from_bottom
.L_0200c480:
    .word vdp_window_y_split_pixels
.L_0200c484:
    .word scanline_window_selected
.L_0200c488:
    .word scanline_plane_a_hscroll
.L_0200c48c:
    .word scanline_plane_a_vscroll
.L_0200c490:
    .word vdp_hscroll_table_base
.L_0200c494:
    .word vdp_hscroll_mode
.L_0200c498:
    .word vdp_vram
.L_0200c49c:
    .word vdp_vscroll_mode
.L_0200c4a0:
    .word 0x023dcfa8
.L_0200c4a4:
    .word vdp_vsram
