/* Vdp port reads. Release range 0x020092e0–0x02009570. */


/* 0x020092e0 */
.global read_vdp_status_and_clear_read_side_effects
read_vdp_status_and_clear_read_side_effects:
    push       {r4, r5, r6, lr}
    ldr        r6, .L_02009374
    ldr        r0, [r6, #0x90]
    ldr        r1, [r6, #0x8c]
    ldr        r3, [r6, #0x88]
    ldr        r2, [r6, #0x84]
    ldr        r4, [r6, #0x94]
    ldr        r5, [r6, #0x98]
    orr        r2, r2, r3
    orr        r1, r1, r0
    ldr        r0, [r6, #0x7c]
    ldr        r3, [r6, #0x9c]
    ldr        ip, [r6, #0x20]
    ldr        lr, [r6, #0x80]
    orr        r2, r2, r4
    orr        r1, r1, r5
    orr        r2, r2, r0
    rsbs       ip, ip, #1
    movlo      ip, #0
    orr        r1, r1, lr
    orr        r2, r2, r3
    ldr        r3, .L_02009378
    orr        r1, r1, ip
    ldrb       r0, [r3]
    orr        r2, r2, r1
    lsl        r2, r2, #0x10
    cmp        r0, #0
    ldr        r3, .L_0200937c
    lsr        r0, r2, #0x10
    mov        r1, #0
    orreq      r0, r0, #8
    strb       r1, [r3]
    str        ip, [r6, #0xa0]
    str        r1, [r6, #0x90]
    str        r1, [r6, #0x8c]
    str        r1, [r6, #0x94]
    pop        {r4, r5, r6, pc}
.L_02009374:
    .word frame_timing
.L_02009378:
    .word vdp_display_enabled
.L_0200937c:
    .word vdp_control_word_pending

/* 0x02009380 */
.global read_vdp_data_word_and_advance_address
read_vdp_data_word_and_advance_address:
    ldr        r3, .L_0200942c
    mov        r0, #0
    ldr        r2, [r3]
    ldr        r3, .L_02009430
    and        r2, r2, #0xf
    cmp        r2, #4
    ldr        ip, .L_02009434
    strb       r0, [r3]
    beq        .L_020093dc
    cmp        r2, #8
    beq        .L_02009404
    cmp        r2, r0
    ldr        r1, .L_02009438
    ldreq      r2, [ip]
    ldreq      r3, .L_0200943c
    andeq      r1, r2, r1
    ldrheq     r0, [r1, r3]
    ldr        r2, .L_02009440
    ldr        r3, [ip]
    ldr        r1, [r2]
    add        r3, r3, r1
    str        r3, [ip]
    bx         lr
.L_020093dc:
    ldr        r2, [ip]
    ldr        r3, .L_02009444
    and        r2, r2, #0x7e
    ldrh       r0, [r2, r3]
    ldr        r2, .L_02009440
    ldr        r3, [ip]
    ldr        r1, [r2]
    add        r3, r3, r1
    str        r3, [ip]
    bx         lr
.L_02009404:
    ldr        r2, [ip]
    ldr        r3, .L_02009448
    and        r2, r2, #0x7e
    ldrh       r0, [r2, r3]
    ldr        r2, .L_02009440
    ldr        r3, [ip]
    ldr        r1, [r2]
    add        r3, r3, r1
    str        r3, [ip]
    bx         lr
.L_0200942c:
    .word vdp_access_code
.L_02009430:
    .word vdp_control_word_pending
.L_02009434:
    .word vdp_address
.L_02009438:
    .word 0x0000fffe
.L_0200943c:
    .word vdp_vram
.L_02009440:
    .word vdp_address_increment
.L_02009444:
    .word vdp_vsram
.L_02009448:
    .word vdp_cram

/* 0x0200944c */
.global read_vdp_word_port
read_vdp_word_port:
    str        lr, [sp, #-4]!
    and        r0, r0, #0x1e
    cmp        r0, #0xe
    sub        sp, sp, #4
    ldr        r2, .L_020094b0
    bhi        .L_0200947c
    mov        r3, #1
    lsl        r0, r3, r0
    tst        r0, #0x5500
    beq        .L_02009488
    bl         read_vdp_horizontal_and_vertical_counters
    mov        r2, r0
.L_0200947c:
    mov        r0, r2
    add        sp, sp, #4
    ldm        sp!, {pc}
.L_02009488:
    tst        r0, #0x50
    bne        .L_020094a4
    tst        r0, #5
    beq        .L_0200947c
    bl         read_vdp_data_word_and_advance_address
    mov        r2, r0
    b          .L_0200947c
.L_020094a4:
    bl         read_vdp_status_and_clear_read_side_effects
    mov        r2, r0
    b          .L_0200947c
.L_020094b0:
    .word 0x00004e71

/* 0x020094b4 */
.global read_vdp_byte_port
read_vdp_byte_port:
    str        lr, [sp, #-4]!
    sub        sp, sp, #4
    cmp        r0, #0xf
    ldrls      pc, [pc, r0, lsl #2]
    b          .L_02009508
    .word .L_02009560
    .word .L_02009554
    .word .L_02009560
    .word .L_02009554
    .word .L_02009544
    .word .L_02009538
    .word .L_02009544
    .word .L_02009538
    .word .L_02009528
    .word .L_0200951c
    .word .L_02009528
    .word .L_0200951c
    .word .L_02009528
    .word .L_0200951c
    .word .L_02009528
    .word .L_0200951c
.L_02009508:
    tst        r0, #1
    moveq      r0, #0x4e
    movne      r0, #0x71
.L_02009514:
    add        sp, sp, #4
    ldm        sp!, {pc}
.L_0200951c:
    bl         read_vdp_horizontal_and_vertical_counters
    and        r0, r0, #0xff
    b          .L_02009514
.L_02009528:
    bl         read_vdp_horizontal_and_vertical_counters
    lsr        r0, r0, #8
    and        r0, r0, #0xff
    b          .L_02009514
.L_02009538:
    bl         read_vdp_status_and_clear_read_side_effects
    and        r0, r0, #0xff
    b          .L_02009514
.L_02009544:
    bl         read_vdp_status_and_clear_read_side_effects
    lsr        r0, r0, #8
    and        r0, r0, #0xff
    b          .L_02009514
.L_02009554:
    bl         read_vdp_data_word_and_advance_address
    and        r0, r0, #0xff
    b          .L_02009514
.L_02009560:
    bl         read_vdp_data_word_and_advance_address
    lsr        r0, r0, #8
    and        r0, r0, #0xff
    b          .L_02009514
