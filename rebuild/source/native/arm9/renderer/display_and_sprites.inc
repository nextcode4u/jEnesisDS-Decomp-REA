/* Display and sprites. Release range 0x020083ec–0x020090e8. */


/* 0x020083ec */
.global apply_prepared_scanline_display_state
apply_prepared_scanline_display_state:
    ldr        r3, .L_02008570
    push       {r4, r5, r6, r7, lr}
    ldr        r4, [r3]
    ldr        r1, .L_02008574
    add        r2, r4, #1
    add        r0, r0, r2
    lsl        lr, r0, #1
    ldrh       r1, [lr, r1]
    mov        r3, #0x5000000
    ldr        r2, .L_02008578
    strh       r1, [r3]
    ldrb       r3, [r2, r0]
    cmp        r3, #0
    beq        .L_0200843c
    mov        r1, #0x4000000
    ldrh       r2, [r1]
    ldr        r3, .L_0200857c
    and        r3, r2, r3
    strh       r3, [r1]
    pop        {r4, r5, r6, r7, pc}
.L_0200843c:
    ldr        r6, .L_02008580
    ldr        r1, .L_02008584
    add        r3, lr, r6
    add        r3, r3, #0x1e0
    ldrh       r2, [r3]
    ldr        r5, [r1]
    ldr        r7, .L_02008588
    add        r2, r2, r5
    lsl        r2, r2, #0x10
    mov        ip, #0x4000000
    lsr        r2, r2, #0x10
    add        r1, lr, r7
    strh       r2, [ip, #0x1c]
    add        r1, r1, #0x1e0
    strh       r2, [ip, #0x14]
    ldrh       r3, [r1]
    ldr        r2, .L_0200858c
    add        r3, r4, r3
    lsl        r3, r3, #0x10
    lsr        r3, r3, #0x10
    strh       r3, [ip, #0x1e]
    strh       r3, [ip, #0x16]
    ldrb       r3, [r2, r0]
    cmp        r3, #1
    ldreq      r1, .L_02008590
    ldrne      r1, .L_02008594
    ldm        r1, {r2, r3}
    lsl        r2, r2, #0x10
    lsl        r3, r3, #0x10
    lsr        r3, r3, #0x10
    lsr        r2, r2, #0x10
    strh       r3, [ip, #8]
    strh       r2, [ip, #0xc]
    ldrh       r2, [lr, r6]
    mov        ip, #0x4000000
    add        r2, r5, r2
    lsl        r2, r2, #0x10
    lsr        r2, r2, #0x10
    strh       r2, [ip, #0x18]
    strh       r2, [ip, #0x10]
    ldrh       r3, [lr, r7]
    add        r3, r4, r3
    lsl        r3, r3, #0x10
    lsr        r3, r3, #0x10
    strh       r3, [ip, #0x1a]
    strh       r3, [ip, #0x12]
    ldrh       r2, [ip]
    ldr        r3, .L_02008598
    orr        r2, r2, #0x1f00
    strh       r2, [ip]
    ldr        r2, .L_0200859c
    ldrb       r1, [r3, r0]
    ldrb       r3, [r2]
    ldr        r4, .L_020085a0
    cmp        r1, r3
    moveq      r3, #0xf
    movne      r3, #0x1f
    strheq     r3, [ip, #0x48]
    strhne     r3, [ip, #0x48]
    ldr        r3, [r4, r0, lsl #2]
    cmp        r3, #0
    popeq      {r4, r5, r6, r7, pc}
    ldr        r1, .L_020085a4
    ldr        ip, .L_020085a8
    add        r2, r3, #2
    mov        lr, #0x8000
.L_02008544:
    ldrh       r3, [r2]
    cmp        r3, #0x8000
    strhne     r3, [r1]
    add        r1, r1, #2
    strhne     lr, [r2]
    cmp        r1, ip
    add        r2, r2, #2
    bne        .L_02008544
    mov        r3, #0
    str        r3, [r4, r0, lsl #2]
    pop        {r4, r5, r6, r7, pc}
.L_02008570:
    .word viewport_offset_y
.L_02008574:
    .word scanline_backdrop_color
.L_02008578:
    .word scanline_display_blanked
.L_0200857c:
    .word 0x0000e0ff
.L_02008580:
    .word scanline_plane_a_hscroll
.L_02008584:
    .word viewport_offset_x
.L_02008588:
    .word scanline_plane_a_vscroll
.L_0200858c:
    .word scanline_window_selected
.L_02008590:
    .word 0x023dc5ac
.L_02008594:
    .word 0x023dc6a4
.L_02008598:
    .word sprite_line_mask_tags
.L_0200859c:
    .word sprite_line_mask_generation
.L_020085a0:
    .word scanline_pending_palette_changes
.L_020085a4:
    .word 0x05000002
.L_020085a8:
    .word 0x05000080
    bx         lr
    bx         lr

/* 0x020085b4 */
.global update_ds_sprite_position_from_genesis_attributes
update_ds_sprite_position_from_genesis_attributes:
    ldr        r2, .L_020086c4
    push       {r4, r5, r6, lr}
    ldrh       ip, [r0, #6]
    mov        r5, r0
    ldrh       r0, [r0]
    ldr        lr, [r2]
    ldr        r3, .L_020086c8
    bic        r0, r0, #0xfe00
    ldr        r4, [r3]
    rsb        r0, lr, r0
    ldr        r3, .L_020086cc
    bic        ip, ip, #0xfe00
    sub        r0, r0, #0x80
    rsb        ip, r4, ip
    ldr        r2, [r3]
    lsl        r0, r0, #0x10
    ldr        r6, .L_020086d0
    sub        ip, ip, #0x80
    lsr        r0, r0, #0x10
    lsl        ip, ip, #0x10
    sub        r3, r0, #1
    lsl        lr, r1, #3
    tst        r2, #4
    lsl        r3, r3, #0x10
    lsr        ip, ip, #0x10
    add        r4, lr, r6
    beq        .L_02008638
    cmp        r3, #0xee0000
    ldrls      r2, .L_020086d4
    ldrbls     r3, [r2, r0]
    rsbls      r3, r3, r0
    lslls      r3, r3, #0x10
    lsrls      r0, r3, #0x10
.L_02008638:
    ldrh       r3, [r5, #2]
    lsr        r2, r3, #8
    lsr        r3, r3, #0xa
    and        r3, r3, #3
    cmp        r3, #2
    and        r1, r2, #3
    beq        .L_020086ac
.L_02008654:
    cmp        r1, #2
    bic        ip, ip, #0xfe00
    bne        .L_02008674
    ldrh       r2, [r5, #4]
    sub        r3, r0, #8
    lsl        r3, r3, #0x10
    tst        r2, #0x1000
    lsrne      r0, r3, #0x10
.L_02008674:
    ldrh       r2, [lr, r6]
    and        r1, r0, #0xff
    bic        r2, r2, #0xff
    strh       r2, [lr, r6]
    ldrh       r3, [r4, #2]
    and        r3, r3, #0xfe00
    strh       r3, [r4, #2]
    ldrh       r2, [lr, r6]
    orr        r2, r2, r1
    strh       r2, [lr, r6]
    ldrh       r3, [r4, #2]
    orr        r3, r3, ip
    strh       r3, [r4, #2]
    pop        {r4, r5, r6, pc}
.L_020086ac:
    ldrh       r2, [r5, #4]
    sub        r3, ip, #8
    lsl        r3, r3, #0x10
    tst        r2, #0x800
    lsrne      ip, r3, #0x10
    b          .L_02008654
.L_020086c4:
    .word viewport_offset_y
.L_020086c8:
    .word viewport_offset_x
.L_020086cc:
    .word emulator_option_flags
.L_020086d0:
    .word ds_oam_staging_attr0
.L_020086d4:
    .word sprite_y_scale_adjustments

/* 0x020086d8 */
.global copy_sprite_tiles_for_sprite_shape
copy_sprite_tiles_for_sprite_shape:
    push       {r4, r5, r6, r7, lr}
    ldrh       ip, [r0, #6]
    ldrh       lr, [r0]
    ldr        r3, .L_02008900
    mov        r6, r0
    ldr        r0, .L_02008904
    ldr        r5, [r3]
    ldr        r4, [r0]
    ldr        r3, .L_02008908
    bic        ip, ip, #0xfe00
    bic        lr, lr, #0xfe00
    rsb        ip, r5, ip
    rsb        lr, r4, lr
    ldr        r0, [r3]
    sub        ip, ip, #0x80
    sub        lr, lr, #0x80
    tst        r0, #4
    lsl        ip, ip, #0x10
    lsl        lr, lr, #0x10
    sub        sp, sp, #4
    mov        r0, r1
    mov        r7, r2
    lsr        r5, ip, #0x10
    lsr        r4, lr, #0x10
    beq        .L_0200875c
    sub        r3, r4, #1
    lsl        r3, r3, #0x10
    cmp        r3, #0xee0000
    ldrls      r2, .L_0200890c
    ldrbls     r3, [r2, r4]
    rsbls      r3, r3, r4
    lslls      r3, r3, #0x10
    lsrls      r4, r3, #0x10
.L_0200875c:
    ldrh       r3, [r6, #2]
    ldrh       r1, [r6, #4]
    lsr        r2, r3, #8
    lsl        r1, r1, #0x15
    lsl        r3, r3, #0x16
    and        r2, r2, #0xc
    lsr        r1, r1, #0x15
    orr        r2, r2, r3, lsr #30
    lsl        r3, r7, #9
    add        r0, r0, r1, lsl #5
    add        r1, r3, #0x6400000
    cmp        r2, #0xf
    ldrls      pc, [pc, r2, lsl #2]
    b          .L_020087d8
    .word .L_0200880c
    .word .L_020088f8
    .word .L_020088e4
    .word .L_020088dc
    .word .L_020088d4
    .word .L_020088cc
    .word .L_020088b8
    .word .L_020088b0
    .word .L_0200889c
    .word .L_02008888
    .word .L_02008864
    .word .L_02008844
    .word .L_0200883c
    .word .L_02008834
    .word .L_02008814
    .word .L_020087d4
.L_020087d4:
    bl         copy_sprite_tiles_4x4
.L_020087d8:
    ldr        r0, .L_02008910
    lsl        r1, r7, #3
    ldrh       r3, [r1, r0]
    and        r2, r4, #0xff
    orr        r3, r3, r2
    strh       r3, [r1, r0]
    add        r1, r1, r0
    ldrh       r3, [r1, #2]
    bic        r2, r5, #0xfe00
    orr        r3, r3, r2
    strh       r3, [r1, #2]
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, pc}
.L_0200880c:
    bl         copy_sprite_tiles_1x1
    b          .L_020087d8
.L_02008814:
    bl         copy_sprite_tiles_4x3
    ldrh       r3, [r6, #4]
    tst        r3, #0x1000
    beq        .L_020087d8
.L_02008824:
    sub        r3, r4, #8
    lsl        r3, r3, #0x10
    lsr        r4, r3, #0x10
    b          .L_020087d8
.L_02008834:
    bl         copy_sprite_tiles_4x2
    b          .L_020087d8
.L_0200883c:
    bl         copy_sprite_tiles_4x1
    b          .L_020087d8
.L_02008844:
    bl         copy_sprite_tiles_3x4
    ldrh       r3, [r6, #4]
    tst        r3, #0x800
    beq        .L_020087d8
.L_02008854:
    sub        r3, r5, #8
    lsl        r3, r3, #0x10
    lsr        r5, r3, #0x10
    b          .L_020087d8
.L_02008864:
    bl         copy_sprite_tiles_3x3
    ldrh       r0, [r6, #4]
    tst        r0, #0x1000
    subne      r3, r4, #8
    lslne      r3, r3, #0x10
    lsrne      r4, r3, #0x10
    tst        r0, #0x800
    bne        .L_02008854
    b          .L_020087d8
.L_02008888:
    bl         copy_sprite_tiles_3x2
    ldrh       r3, [r6, #4]
    tst        r3, #0x800
    bne        .L_02008854
    b          .L_020087d8
.L_0200889c:
    bl         copy_sprite_tiles_3x1
    ldrh       r3, [r6, #4]
    tst        r3, #0x800
    bne        .L_02008854
    b          .L_020087d8
.L_020088b0:
    bl         copy_sprite_tiles_2x4
    b          .L_020087d8
.L_020088b8:
    bl         copy_sprite_tiles_2x3
    ldrh       r3, [r6, #4]
    tst        r3, #0x1000
    bne        .L_02008824
    b          .L_020087d8
.L_020088cc:
    bl         copy_sprite_tiles_2x2
    b          .L_020087d8
.L_020088d4:
    bl         copy_sprite_tiles_2x1
    b          .L_020087d8
.L_020088dc:
    bl         copy_sprite_tiles_1x4
    b          .L_020087d8
.L_020088e4:
    bl         copy_sprite_tiles_1x3
    ldrh       r3, [r6, #4]
    tst        r3, #0x1000
    bne        .L_02008824
    b          .L_020087d8
.L_020088f8:
    bl         copy_sprite_tiles_1x2
    b          .L_020087d8
.L_02008900:
    .word viewport_offset_x
.L_02008904:
    .word viewport_offset_y
.L_02008908:
    .word emulator_option_flags
.L_0200890c:
    .word sprite_y_scale_adjustments
.L_02008910:
    .word ds_oam_staging_attr0

/* 0x02008914 */
.global copy_sprite_attribute_buffer_to_ds_oam
copy_sprite_attribute_buffer_to_ds_oam:
    ldr        r2, .L_0200897c
    push       {r4, r5, lr}
    ldr        r4, [r2]
    ldr        r5, .L_02008980
    cmp        r0, r4
    movhs      r4, r0
    mov        r3, r0
    lsl        r4, r4, #3
    str        r3, [r2]
    mov        r1, r4
    sub        sp, sp, #4
    mov        r0, r5
    lsr        r4, r4, #1
    bl         DC_FlushRange
    orr        r4, r4, #0x80000000
    mov        r3, #0x4000000
    mov        r2, #0x7000000
    str        r5, [r3, #0xd4]
    str        r2, [r3, #0xd8]
    str        r4, [r3, #0xdc]
    mov        r2, r3
.L_02008968:
    ldr        r3, [r2, #0xdc]
    cmp        r3, #0
    blt        .L_02008968
    add        sp, sp, #4
    pop        {r4, r5, pc}
.L_0200897c:
    .word previous_oam_sprite_count
.L_02008980:
    .word ds_oam_staging_attr0

/* 0x02008984 */
.global build_ds_sprite_attributes_from_genesis_sprite_table
build_ds_sprite_attributes_from_genesis_sprite_table:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        r2, .L_02008e18
    sub        sp, sp, #0xc
    ldrb       r3, [r2]
    mov        r7, #0
    add        r3, r3, #1
    and        r3, r3, #0xff
    cmp        r3, #0
    strb       r3, [r2]
    ldr        sb, .L_02008e1c
    addeq      r3, r3, #1
    str        r0, [sp, #4]
    mov        fp, r1
    strbeq     r3, [r2]
    mov        r4, r7
.L_020089c0:
    ldr        r1, .L_02008e20
    ldr        r2, .L_02008e24
    ldr        r3, [r1]
    ldr        r0, [r2]
    add        r5, r3, r4, lsl #3
    ldrh       lr, [r5, #2]
    ldr        r1, .L_02008e28
    lsr        r2, lr, #8
    ldrh       r8, [r5, #4]
    and        r2, r2, #0xc
    lsr        r3, lr, #8
    and        r3, r3, #3
    add        r2, r2, r1
    ldrb       r1, [r2, r3]
    lsl        ip, r8, #0x15
    ldr        r2, .L_02008e2c
    add        r3, r4, r4, lsl #1
    lsr        ip, ip, #0x15
    cmp        r0, #0
    add        r6, r2, r3, lsl #2
    add        sl, ip, r1
    bne        .L_02008a40
    ldrh       r4, [r6, #2]
    and        r2, lr, #0x7f
    and        r3, r4, #0x7f
    cmp        r2, r3
    ldrne      r3, .L_02008e24
    movne      r2, #1
    strne      r2, [r3]
    ldrh       r3, [r6, #8]
    cmp        r7, r3
    beq        .L_02008cd0
.L_02008a40:
    ldrh       r1, [r5]
    lsl        r3, r7, #0x10
    strh       r1, [r6]
    ldrh       r2, [r5, #2]
    lsr        r8, r3, #0x10
    strh       r2, [r6, #2]
    ldrh       r1, [r5, #4]
    strh       r1, [r6, #4]
    ldrh       r2, [r5, #6]
    strh       r8, [r6, #8]
    strh       r2, [r6, #6]
    ldrh       r0, [r5, #6]
    ldr        r2, .L_02008e30
    lsl        r3, r0, #0x17
    lsr        r3, r3, #0x17
    ldrh       r1, [r2]
    sub        r3, r3, #0x80
    cmp        r3, r1
    bge        .L_02008c00
    ldrh       ip, [r5, #2]
    bic        r3, r0, #0xfe00
    lsr        r2, ip, #0xa
    and        lr, r2, #3
    add        r1, lr, #1
    add        r3, r3, r1, lsl #3
    sub        r3, r3, #0x80
    tst        r3, #0x8000
    bne        .L_02008c00
    ldrh       r0, [r5]
    ldr        r2, .L_02008e34
    lsl        r3, r0, #0x17
    lsr        r3, r3, #0x17
    ldrh       r1, [r2]
    sub        r3, r3, #0x80
    cmp        r3, r1
    bge        .L_02008c00
    lsr        r3, ip, #8
    and        r1, r3, #3
    bic        r2, r0, #0xfe00
    add        r3, r1, #1
    add        r2, r2, r3, lsl #3
    sub        r2, r2, #0x80
    tst        r2, #0x8000
    bne        .L_02008c00
    add        r1, r1, lr, lsl #2
    ldr        r3, .L_02008e38
    lsl        r1, r1, #1
    ldrh       r3, [r1, r3]
    strh       r3, [sb, #-2]
    ldrh       r2, [r5, #4]
    ldr        r3, .L_02008e3c
    and        r4, r2, #0x8000
    cmp        r4, #0
    and        ip, r2, #0x1800
    ldrh       r0, [r1, r3]
    moveq      r4, #0x800
    movne      r4, #0
    and        r2, r2, #0x6000
    lsl        ip, ip, #1
    orr        r4, r4, r2, lsr #1
    eor        ip, ip, #0x1000
    orr        ip, ip, r0
    orr        r4, r4, r8, lsl #3
    mov        r0, r5
    ldr        r1, [sp, #4]
    mov        r2, r7
    strh       ip, [sb]
    strh       r4, [sb, #2]
    bl         copy_sprite_tiles_for_sprite_shape
    ldrh       r3, [r5, #4]
    lsl        r3, r3, #0x15
    lsr        r3, r3, #0x15
    cmp        sl, r3
    bls        .L_02008b84
    ldr        r0, .L_02008e40
    mov        r1, #0
    add        r2, sl, r0
    add        r3, r3, r0
.L_02008b78:
    strb       r1, [r3], #1
    cmp        r3, r2
    bne        .L_02008b78
.L_02008b84:
    mov        r3, #1
    strh       r3, [r6, #0xa]
    ldrh       lr, [r5, #2]
.L_02008b90:
    ands       r3, lr, #0x7f
    movne      r3, #1
    add        r7, r7, #1
    cmp        r7, fp
    movhs      r3, #0
    andlo      r3, r3, #1
    cmp        r3, #0
    add        sb, sb, #8
    and        r4, lr, #0x7f
    bne        .L_020089c0
    ldr        r3, .L_02008e44
    mov        r0, r7
    ldr        r2, [r3]
    cmp        r7, r2
    bhs        .L_02008be8
    ldr        r3, .L_02008e48
    add        r3, r3, r7, lsl #3
.L_02008bd4:
    add        r7, r7, #1
    mov        r1, #0x200
    cmp        r7, r2
    strh       r1, [r3], #8
    blo        .L_02008bd4
.L_02008be8:
    bl         copy_sprite_attribute_buffer_to_ds_oam
    ldr        r2, .L_02008e24
    mov        r3, #0
    str        r3, [r2]
    add        sp, sp, #0xc
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02008c00:
    ldr        r3, .L_02008e4c
    mov        r1, #0
    ldr        r2, [r3]
    mov        r3, #0x200
    tst        r2, #0x100
    strh       r1, [r6, #0xa]
    strh       r3, [sb, #-2]
    beq        .L_02008cc8
    cmp        r7, #0xb
    bhi        .L_02008cc8
    ldrh       r3, [r5, #6]
    lsl        r3, r3, #0x17
    lsr        r3, r3, #0x17
    cmp        r3, #0
    bne        .L_02008cc8
    ldrh       r3, [r5]
    lsl        r3, r3, #0x17
    lsr        r3, r3, #0x17
    sub        r1, r3, #0x80
    cmp        r1, #0xdf
    bhi        .L_02008cc8
    ldr        r4, .L_02008e50
    ldrh       lr, [r5, #2]
    ldrb       r0, [r4, r1]
    lsr        r3, lr, #8
    and        r3, r3, #3
    add        r3, r3, #1
    cmp        r0, #0xc8
    lsl        ip, r3, #3
    addeq      r3, r1, r4
    ldrbeq     r3, [r3, #-1]
    movne      r3, r0
    tst        r2, #4
    and        r1, r3, #0xff
    ldrne      r3, .L_02008e54
    add        r0, ip, r1
    ldrbne     r2, [r3, ip]
    rsbne      r0, r2, r0
    cmp        r0, #0xbf
    movhs      r0, #0xbf
    cmp        r0, r1
    bls        .L_02008b90
    ldr        r3, .L_02008e18
    ldrb       r2, [r3]
    ldr        r3, .L_02008e58
    add        r3, r1, r3
.L_02008cb8:
    add        r1, r1, #1
    cmp        r0, r1
    strb       r2, [r3], #1
    bhi        .L_02008cb8
.L_02008cc8:
    ldrh       lr, [r5, #2]
    b          .L_02008b90
.L_02008cd0:
    cmp        ip, sl
    bhs        .L_02008d14
    ldr        r0, .L_02008e40
    ldrb       r3, [r0, ip]
    cmp        r3, #0
    addeq      r2, ip, r0
    rsbeq      r1, ip, sl
    beq        .L_02008d00
    b          .L_02008a40
.L_02008cf4:
    ldrb       r3, [r2, #1]!
    cmp        r3, #0
    bne        .L_02008a40
.L_02008d00:
    add        r3, r1, ip
    sub        r3, r3, #1
    add        r3, r3, r0
    cmp        r2, r3
    bne        .L_02008cf4
.L_02008d14:
    ldr        r2, [r5]
    ldr        r3, [r6]
    cmp        r2, r3
    beq        .L_02008dec
.L_02008d24:
    ldrh       r3, [r6, #0xa]
    cmp        r3, #0
    beq        .L_02008a40
    cmp        lr, r4
    bne        .L_02008a40
    ldrh       r3, [r6, #4]
    cmp        r3, r8
    bne        .L_02008a40
    ldrh       r3, [r5]
    ldr        r2, .L_02008e30
    strh       r3, [r6]
    ldrh       r1, [r5, #6]
    strh       r1, [r6, #6]
    ldrh       r0, [r5, #6]
    ldrh       r1, [r2]
    lsl        r3, r0, #0x17
    lsr        r3, r3, #0x17
    sub        r3, r3, #0x80
    cmp        r3, r1
    bge        .L_02008e00
    ldrh       ip, [r5, #2]
    bic        r2, r0, #0xfe00
    lsr        r3, ip, #0xa
    and        r3, r3, #3
    add        r3, r3, #1
    add        r2, r2, r3, lsl #3
    sub        r2, r2, #0x80
    tst        r2, #0x8000
    bne        .L_02008e00
    ldrh       r0, [r5]
    ldr        r2, .L_02008e34
    lsl        r3, r0, #0x17
    lsr        r3, r3, #0x17
    ldrh       r1, [r2]
    sub        r3, r3, #0x80
    cmp        r3, r1
    bge        .L_02008e00
    lsr        r3, ip, #8
    and        r3, r3, #3
    bic        r2, r0, #0xfe00
    add        r3, r3, #1
    add        r2, r2, r3, lsl #3
    sub        r2, r2, #0x80
    tst        r2, #0x8000
    bne        .L_02008e00
    mov        r0, r5
    mov        r1, r7
    bl         update_ds_sprite_position_from_genesis_attributes
    ldrh       lr, [r5, #2]
    b          .L_02008b90
.L_02008dec:
    ldr        r2, [r5, #4]
    ldr        r3, [r6, #4]
    cmp        r2, r3
    bne        .L_02008d24
    b          .L_02008b90
.L_02008e00:
    mov        r2, #0
    mov        r3, #0x200
    strh       r2, [r6, #0xa]
    strh       r3, [sb, #-2]
    ldrh       lr, [r5, #2]
    b          .L_02008b90
.L_02008e18:
    .word sprite_line_mask_generation
.L_02008e1c:
    .word ds_oam_staging_attr1
.L_02008e20:
    .word vdp_sat_host_pointer
.L_02008e24:
    .word sprite_cache_rebuild_pending
.L_02008e28:
    .word address_0208e528
.L_02008e2c:
    .word sprite_cache_word_0
.L_02008e30:
    .word frame_active_width_pixels
.L_02008e34:
    .word frame_active_height_pixels
.L_02008e38:
    .word address_0208e538
.L_02008e3c:
    .word address_0208e558
.L_02008e40:
    .word sprite_pattern_dirty_flags
.L_02008e44:
    .word previous_oam_sprite_count
.L_02008e48:
    .word ds_oam_staging_attr0
.L_02008e4c:
    .word emulator_option_flags
.L_02008e50:
    .word ds_line_from_genesis_scanline
.L_02008e54:
    .word ds_sprite_height_lines_removed
.L_02008e58:
    .word sprite_line_mask_tags
    ldr        r3, .L_02008e8c
    ldr        r2, .L_02008e90
    push       {r4, lr}
    ldr        r4, .L_02008e94
    ldr        r0, [r3]
    ldr        r1, [r2]
    mov        r3, #1
    str        r3, [r4]
    bl         build_ds_sprite_attributes_from_genesis_sprite_table
    mov        r3, #0
    str        r3, [r4]
    pop        {r4, pc}
.L_02008e8c:
    .word vdp_vram_base_pointer
.L_02008e90:
    .word previous_oam_sprite_count
.L_02008e94:
    .word sprite_cache_rebuild_pending
.L_02008e98:
    push       {r4, lr}
    ldr        r4, .L_02008ed4
    mov        r1, #0x400
    mov        r0, r4
    bl         DC_FlushRange
    ldr        r2, .L_02008ed8
    mov        r1, #0x4000000
    mov        r3, #0x7000000
    str        r4, [r1, #0xd4]
    str        r3, [r1, #0xd8]
    str        r2, [r1, #0xdc]
.L_02008ec4:
    ldr        r3, [r1, #0xdc]
    cmp        r3, #0
    blt        .L_02008ec4
    pop        {r4, pc}
.L_02008ed4:
    .word ds_oam_staging_attr0
.L_02008ed8:
    .word 0x80000200

/* 0x02008edc */
.global initialize_ds_sprite_attribute_buffer
initialize_ds_sprite_attribute_buffer:
    ldr        r2, .L_02008f70
    add        r3, r2, #0x400
.L_02008ee4:
    mov        r1, #0
    mov        r0, #0x200
    strh       r0, [r2]
    strh       r1, [r2, #2]
    strh       r1, [r2, #4]
    strh       r1, [r2, #6]
    add        r2, r2, #8
    cmp        r2, r3
    bne        .L_02008ee4
    sub        r2, r2, #0x400
    ldr        r3, .L_02008f74
    mov        r0, #0x100
    strh       r0, [r2, #6]
    mov        r0, #0
    ldr        r1, .L_02008f78
    strh       r3, [r2, #0x3e]
    strh       r0, [r2, #0xe]
    strh       r0, [r2, #0x16]
    strh       r3, [r2, #0x1e]
    strh       r0, [r2, #0x2e]
    mvn        r3, #0xf9
    strh       r0, [r2, #0x36]
    mov        r0, #0x100
    strh       r3, [r2, #0x26]
    strh       r0, [r2, #0x46]
    mov        r3, #0
    mvn        r0, #0xf9
    strh       r1, [r2, #0x7e]
    strh       r3, [r2, #0x4e]
    strh       r3, [r2, #0x56]
    strh       r1, [r2, #0x5e]
    strh       r0, [r2, #0x66]
    strh       r3, [r2, #0x6e]
    strh       r3, [r2, #0x76]
    b          .L_02008e98
.L_02008f70:
    .word ds_oam_staging_attr0
.L_02008f74:
    .word 0x00000122
.L_02008f78:
    .word 0xfffffede

/* 0x02008f7c */
.global configure_ds_display_windows
configure_ds_display_windows:
    push       {r4, r5, r6, lr}
    mov        r0, #0
    bl         select_background_tilemap_layout
    mov        r0, #0
    bl         select_window_tilemap_layout
    ldr        r6, .L_0200907c
    bl         clear_and_initialize_renderer_vram
    mov        r2, #0x4000000
    mov        r1, #0
    mvn        r3, #0
    strb       r1, [r2, #0x41]
    strb       r3, [r2, #0x40]
    sub        r3, r3, #0x3b
    strb       r1, [r2, #0x45]
    add        r0, r6, #0xff0
    strb       r3, [r2, #0x44]
    ldr        lr, .L_02009080
    mov        r3, #0x1f
    ldr        ip, .L_02009084
    strh       r3, [r2, #0x48]
    add        r0, r0, #0xe
    strh       r3, [r2, #0x4a]
    mov        r3, r6
.L_02008fd8:
    mov        r2, #0x2000
    strh       r2, [r3, #2]
    strh       r2, [r3, lr]
    strh       r2, [r3, ip]
    add        r3, r3, #2
    cmp        r3, r0
    bne        .L_02008fd8
    ldr        r3, .L_02009088
    mov        r5, #0
    add        r2, r3, #0xe0
.L_02009000:
    strb       r5, [r3], #1
    cmp        r3, r2
    bne        .L_02009000
    mov        r0, #0x8000
    mov        r3, #0x2000
    strh       r0, [r6, r3]
    ldr        r3, .L_0200908c
    ldr        ip, .L_02009090
    ldr        lr, .L_02009094
    ldr        r4, .L_02009098
    mov        r1, #0x50
    mov        r2, #0x1000
    str        r1, [r3]
    mov        r3, #1
    strh       r0, [r6, r2]
    strh       r3, [ip, #4]
    strh       r3, [ip]
    strh       r3, [ip, #2]
    str        r5, [lr, #8]
    strh       r0, [r6]
    str        r5, [lr]
    str        r5, [lr, #4]
    add        r3, r4, #0x800
    mov        r2, #1
.L_02009060:
    strb       r2, [r4], #1
    cmp        r4, r3
    bne        .L_02009060
    ldr        r3, .L_0200909c
    strb       r2, [r3]
    pop        {r4, r5, r6, lr}
    b          address_02072c30
.L_0200907c:
    .word background_pattern_tile_map
.L_02009080:
    .word 0x00001002
.L_02009084:
    .word 0x00002002
.L_02009088:
    .word sprite_line_mask_tags
.L_0200908c:
    .word previous_oam_sprite_count
.L_02009090:
    .word background_next_ds_tile
.L_02009094:
    .word background_cache_refresh_flags
.L_02009098:
    .word sprite_pattern_dirty_flags
.L_0200909c:
    .word sprite_line_mask_generation

/* 0x020090a0 */
.global copy_prepared_palette_to_main_bg_and_obj
copy_prepared_palette_to_main_bg_and_obj:
    push       {r4, lr}
    ldr        r4, .L_020090e0
    mov        r1, #0x80
    mov        r0, r4
    bl         DC_FlushRange
    mov        r2, #0x4000000
    ldr        r1, .L_020090e4
    mov        r3, #0x5000000
    str        r4, [r2, #0xd4]
    str        r3, [r2, #0xd8]
    add        r3, r3, #0x200
    str        r1, [r2, #0xdc]
    str        r4, [r2, #0xd4]
    str        r3, [r2, #0xd8]
    str        r1, [r2, #0xdc]
    pop        {r4, pc}
.L_020090e0:
    .word ds_converted_vdp_palette
.L_020090e4:
    .word 0x80000040
