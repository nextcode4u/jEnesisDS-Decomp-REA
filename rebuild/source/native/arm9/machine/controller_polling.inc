/* Controller polling. Release range 0x020021cc–0x020023dc. */


/* 0x020021cc */
.global update_genesis_controller_state
update_genesis_controller_state:
    push       {r4, r5, r6, r7, lr}
    sub        sp, sp, #4
    bl         address_020858ec
    bl         address_020858f8
    mov        r4, r0
    ldr        r0, .L_020023d0
    lsr        r3, r4, #0xb
    ldr        r1, [r0, #0x30]
    eor        r3, r3, #1
    and        r3, r3, #1
    strb       r3, [r1, #0x20]
    lsr        r2, r4, #1
    ldr        r3, [r0, #0x30]
    eor        r2, r2, #1
    and        r2, r2, #1
    strb       r2, [r3, #0x21]
    ldr        r1, [r0, #0x30]
    and        r3, r4, #1
    eor        r3, r3, #1
    strb       r3, [r1, #0x22]
    lsr        r2, r4, #7
    ldr        r1, [r0, #0x30]
    eor        r2, r2, #1
    and        r2, r2, #1
    strb       r2, [r1, #0x24]
    lsr        r3, r4, #6
    ldr        r2, [r0, #0x30]
    eor        r3, r3, #1
    and        r3, r3, #1
    strb       r3, [r2, #0x23]
    ldr        r1, [r0, #0x30]
    ands       r6, r4, #0x20
    movne      r3, #0
    moveq      r3, #1
    strb       r3, [r1, #0x25]
    ands       r7, r4, #0x10
    ldr        r1, [r0, #0x30]
    movne      r2, #0
    moveq      r2, #1
    ldr        r5, .L_020023d4
    strb       r2, [r1, #0x26]
    ldr        r3, [r5]
    tst        r3, #1
    beq        .L_02002350
    lsr        r3, r4, #0xa
    eor        r3, r3, #1
    ldr        r1, [r0, #0x30]
    and        r2, r4, #0x308
    and        r3, r3, #1
    cmp        r2, #0x308
    strb       r3, [r1, #0x27]
    beq        .L_02002388
    ldr        r1, [r0, #0x30]
    mov        r2, #1
    strb       r2, [r1, #0x2b]
    lsr        r3, r4, #3
    ldr        r1, [r0, #0x30]
    eor        r3, r3, r2
    and        r3, r3, r2
    strb       r3, [r1, #0x2a]
    lsr        r2, r4, #9
    ldr        r1, [r0, #0x30]
    eor        r2, r2, #1
    and        r2, r2, #1
    strb       r2, [r1, #0x29]
    lsr        r3, r4, #8
    ldr        r2, [r0, #0x30]
    eor        r3, r3, #1
    and        r3, r3, #1
    strb       r3, [r2, #0x28]
.L_020022e4:
    ldr        r3, [r5]
    tst        r3, #0x200
    beq        .L_02002394
    tst        r4, #0x400
    bne        .L_020023a4
.L_020022f8:
    cmp        r6, #0
    beq        .L_0200231c
    ldr        r3, .L_020023d8
    ldr        r0, [r3]
    cmn        r0, #0x200
    subgt      r0, r0, #0x40
    strgt      r0, [r3]
    cmp        r0, #0
    blt        .L_020023c4
.L_0200231c:
    cmp        r7, #0
    beq        .L_02002394
    ldr        r3, .L_020023d8
    ldr        r0, [r3]
    cmp        r0, #0x200
    addlt      r0, r0, #0x40
    strlt      r0, [r3]
    cmp        r0, #0
    ble        .L_02002394
    asr        r0, r0, #8
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, lr}
    b          adjust_horizontal_viewport_offset
.L_02002350:
    lsr        r3, r4, #3
    ldr        r2, [r0, #0x30]
    eor        r3, r3, #1
    and        r3, r3, #1
    tst        r4, #0x400
    strb       r3, [r2, #0x2a]
    bne        .L_0200239c
    tst        r4, #0x200
    bne        .L_020023b8
    tst        r4, #0x100
    beq        .L_020022e4
    mvn        r0, #3
    bl         adjust_horizontal_viewport_offset
    b          .L_020022e4
.L_02002388:
    ldr        r2, [r0, #0x30]
    mov        r3, #0
    strb       r3, [r2, #0x2b]
.L_02002394:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, pc}
.L_0200239c:
    bl         center_viewport
    b          .L_020022e4
.L_020023a4:
    ldr        r3, .L_020023d8
    mov        r2, #0
    str        r2, [r3]
    bl         center_viewport
    b          .L_020022f8
.L_020023b8:
    mov        r0, #4
    bl         adjust_horizontal_viewport_offset
    b          .L_020022e4
.L_020023c4:
    asr        r0, r0, #8
    bl         adjust_horizontal_viewport_offset
    b          .L_0200231c
.L_020023d0:
    .word frame_timing
.L_020023d4:
    .word emulator_option_flags
.L_020023d8:
    .word 0x02098ff8
