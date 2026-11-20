/* Frontend panels. Release range 0x020023dc–0x020025a8. */


/* 0x020023dc */
.global display_fps_count
display_fps_count:
    b          set_fps_overlay_digits

/* 0x020023e0 */
.global write_popup_text_tiles
write_popup_text_tiles:
    mov        r1, #6
    mov        r2, #1
    b          write_text_at_tile_position

/* 0x020023ec */
.global draw_on_off_option_text
draw_on_off_option_text:
    push       {r4, r5, lr}
    ldr        r3, [r0, #4]
    sub        sp, sp, #4
    mov        r4, r0
    add        r5, r1, #8
    cmp        r3, #3
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_0200241c
    .word .L_02002424
    .word .L_02002464
    .word .L_02002490
    .word .L_020024d8
.L_0200241c:
    add        sp, sp, #4
    pop        {r4, r5, pc}
.L_02002424:
    ldr        r0, [r0]
    mov        r1, r5
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r3, .L_02002580
    ldr        r1, [r4, #8]
    ldr        r2, [r3]
    ldr        r0, .L_02002584
    ldr        r3, .L_02002588
    tst        r1, r2
.L_0200244c:
    moveq      r0, r3
    mov        r1, r5
    mov        r2, #0x16
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          write_text_at_tile_position
.L_02002464:
    ldr        r0, [r0]
    mov        r1, r5
    mov        r2, #1
    bl         write_text_at_tile_position
    ldr        r3, .L_02002580
    ldr        r1, [r4, #8]
    ldr        r2, [r3]
    ldr        r0, .L_0200258c
    ldr        r3, .L_02002590
    tst        r1, r2
    b          .L_0200244c
.L_02002490:
    mov        r1, r5
    mov        r2, #1
    ldr        r0, [r0]
    bl         write_text_at_tile_position
    ldr        r2, .L_02002580
    ldr        r1, [r4, #8]
    ldr        r3, [r2]
    lsr        r3, r3, r1
    ands       r3, r3, #3
    beq        .L_02002538
    cmp        r3, #1
    beq        .L_02002568
    ldr        r0, .L_02002594
    mov        r1, r5
    mov        r2, #0x16
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          write_text_at_tile_position
.L_020024d8:
    mov        r1, r5
    mov        r2, #1
    ldr        r0, [r0]
    bl         write_text_at_tile_position
    ldr        r2, .L_02002580
    ldr        r1, [r4, #8]
    ldr        r3, [r2]
    lsr        r3, r3, r1
    ands       r3, r3, #3
    beq        .L_02002520
    cmp        r3, #1
    beq        .L_02002550
    ldr        r0, .L_02002598
    mov        r1, r5
    mov        r2, #0x16
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          write_text_at_tile_position
.L_02002520:
    ldr        r0, .L_0200259c
    mov        r1, r5
    mov        r2, #0x16
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          write_text_at_tile_position
.L_02002538:
    ldr        r0, .L_02002588
    mov        r1, r5
    mov        r2, #0x16
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          write_text_at_tile_position
.L_02002550:
    ldr        r0, .L_020025a0
    mov        r1, r5
    mov        r2, #0x16
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          write_text_at_tile_position
.L_02002568:
    ldr        r0, .L_02002584
    mov        r1, r5
    mov        r2, #0x16
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          write_text_at_tile_position
.L_02002580:
    .word emulator_option_flags
.L_02002584:
    .word address_0208f078
.L_02002588:
    .word address_0208f080
.L_0200258c:
    .word address_0208f088
.L_02002590:
    .word address_0208f090
.L_02002594:
    .word address_0208f098
.L_02002598:
    .word address_0208f0a8
.L_0200259c:
    .word address_0208f0a0
.L_020025a0:
    .word address_0208f0a4

/* 0x020025a4 */
.global arm_tail_branch_to_load_subscreen_palette_tiles_and_map
arm_tail_branch_to_load_subscreen_palette_tiles_and_map:
    b          load_subscreen_palette_tiles_and_map
