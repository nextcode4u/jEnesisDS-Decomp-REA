/* ARM9 tightly coupled instruction memory code. 0x01002f60–0x01003c6c. */


/* 0x01002f60 */
.global run_m68k
run_m68k:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        sb, .L_010030ac
    mov        r6, r0
    ldr        r2, [r6, #0x94]
    ldrb       r3, [r6, #0xa1]
    add        r2, r2, r1
    ldr        r7, [r6, #0x4c]
    ldr        sl, [r6, #0x44]
    add        r7, r7, r1, lsl #16
    str        r2, [r6, #0x94]
    ldr        r8, [r6, #0x64]
    cmp        r3, #0
    beq        .L_01003070
    ldr        r2, [r6, #0x50]
    ldrb       r0, [r6, #0xa0]
    lsr        r1, r2, #8
    and        r1, r1, #7
    cmp        r0, #6
    cmple      r0, r1
    ble        .L_01003070
    ldr        lr, [r6, #0x54]
    orr        r2, r2, r7
    tst        r2, #0x2000
    ldrne      r3, [r6, #0x3c]
    bne        .L_01002fd0
    ldr        r4, [r6, #0x3c]
    ldr        r3, [r6, #0x48]
    str        r4, [r6, #0x48]
.L_01002fd0:
    sub        r3, r3, #6
    str        r3, [r6, #0x3c]
    mov        r1, #0x2000
    orr        r1, r1, r0, lsl #8
    str        r1, [r6, #0x50]
    lsl        r3, r3, #0x10
    add        r4, r8, r3, lsr #16
    strh       r2, [r4], #2
    ldr        r1, [r6, #0x9c]
    sub        r5, sl, lr
    orr        r5, r5, r1
    lsr        r1, r5, #0x10
    strh       r1, [r4], #2
    lsl        r3, r5, #0x10
    lsr        r3, r3, #0x10
    strh       r3, [r4]
    ldr        r5, [r6, #0x60]
    add        r2, r0, #0x18
    ldr        r3, [r5, r2, lsl #2]
    mov        r1, #0x80000000
    ror        r3, r3, #0x10
    tst        r3, #0xc00000
    moveq      lr, r5
    asreq      r1, r1, #9
    movne      lr, r8
    asrne      r1, r1, #0xf
    and        r2, r3, r1
    str        r2, [r6, #0x9c]
    str        lr, [r6, #0x54]
    mvn        r1, r1
    and        r3, r3, r1
    add        sl, lr, r3
    mov        r1, #0
    strb       r1, [r6, #0xa1]
    mov        r2, #0
    strb       r2, [r6, #0xa2]
    strb       r1, [r6, #0xa3]
    ldr        lr, .L_010030b0
    sub        r7, r7, #0x2c0000
    ldr        pc, [r6, #0x84]
.L_01003070:
    ldrb       r3, [r6, #0xa2]
    tst        r3, r3
    bne        address_01003094
.L_0100307c:
    ldrh       fp, [sl], #2
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003084 */
.global address_01003084
address_01003084:
    asr        r0, r7, #0x10
    str        r7, [r6, #0x4c]
    str        sl, [r6, #0x44]
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}

/* 0x01003094 */
.global address_01003094
address_01003094:
    mvn        r0, #5
    and        r7, r7, #0x1f
    orr        r7, r7, r0, lsl #16
    str        r7, [r6, #0x4c]
    str        sl, [r6, #0x44]
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_010030ac:
    .word m68k_immediate_bit_dispatch
.L_010030b0:
    .word .L_0100307c

/* 0x010030b4 */
.global m68k_move_word_010030b4
m68k_move_word_010030b4:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    add        r0, r0, r3
    bl         read_m68k_bus_word
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x010030f4 */
.global m68k_bhi_010030f4
m68k_bhi_010030f4:
    tst        r7, #5
    andeq      r1, fp, #0xff
    addeq      sl, sl, r1
    subeq      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003114 */
.global m68k_bhi_01003114
m68k_bhi_01003114:
    tst        r7, #5
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100312c */
.global m68k_bhi_0100312c
m68k_bhi_0100312c:
    tst        r7, #5
    ldrsheq    r1, [sl]
    addne      sl, sl, #2
    subne      r7, r7, #0x20000
    addeq      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003150 */
.global m68k_bls_01003150
m68k_bls_01003150:
    tst        r7, #5
    andne      r1, fp, #0xff
    addne      sl, sl, r1
    subne      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003170 */
.global m68k_bls_01003170
m68k_bls_01003170:
    mov        r0, sl
    bl         classify_and_rewrite_m68k_short_loop_branch
    tst        r7, #5
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003190 */
.global address_01003190
address_01003190:
    tst        r7, #5
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010031a8 */
.global address_010031a8
address_010031a8:
    tst        r7, #5
    bne        .L_010037ec
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010031c0 */
.global m68k_bls_010031c0
m68k_bls_010031c0:
    tst        r7, #5
    ldrshne    r1, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x20000
    addne      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010031e4 */
.global m68k_bcc_010031e4
m68k_bcc_010031e4:
    tst        r7, #1
    andeq      r1, fp, #0xff
    addeq      sl, sl, r1
    subeq      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003204 */
.global m68k_bcc_01003204
m68k_bcc_01003204:
    mov        r0, sl
    bl         classify_and_rewrite_m68k_short_loop_branch
    tst        r7, #1
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003224 */
.global address_01003224
address_01003224:
    tst        r7, #1
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100323c */
.global address_0100323c
address_0100323c:
    tst        r7, #1
    beq        .L_010037ec
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003254 */
.global m68k_bcc_01003254
m68k_bcc_01003254:
    tst        r7, #1
    ldrsheq    r1, [sl]
    addne      sl, sl, #2
    subne      r7, r7, #0x20000
    addeq      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003278 */
.global m68k_bcs_01003278
m68k_bcs_01003278:
    tst        r7, #1
    andne      r1, fp, #0xff
    addne      sl, sl, r1
    subne      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003298 */
.global m68k_bcs_01003298
m68k_bcs_01003298:
    mov        r0, sl
    bl         classify_and_rewrite_m68k_short_loop_branch
    tst        r7, #1
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010032b8 */
.global address_010032b8
address_010032b8:
    tst        r7, #1
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010032d0 */
.global address_010032d0
address_010032d0:
    tst        r7, #1
    bne        .L_010037ec
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010032e8 */
.global m68k_bcs_010032e8
m68k_bcs_010032e8:
    tst        r7, #1
    ldrshne    r1, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x20000
    addne      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100330c */
.global m68k_bne_0100330c
m68k_bne_0100330c:
    tst        r7, #4
    andeq      r1, fp, #0xff
    addeq      sl, sl, r1
    subeq      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100332c */
.global m68k_bne_0100332c
m68k_bne_0100332c:
    mov        r0, sl
    bl         classify_and_rewrite_m68k_short_loop_branch
    tst        r7, #4
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100334c */
.global address_0100334c
address_0100334c:
    tst        r7, #4
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003364 */
.global address_01003364
address_01003364:
    tst        r7, #4
    beq        .L_010037ec
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100337c */
.global m68k_bne_0100337c
m68k_bne_0100337c:
    tst        r7, #4
    ldrsheq    r1, [sl]
    addne      sl, sl, #2
    subne      r7, r7, #0x20000
    addeq      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010033a0 */
.global m68k_beq_010033a0
m68k_beq_010033a0:
    tst        r7, #4
    andne      r1, fp, #0xff
    addne      sl, sl, r1
    subne      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010033c0 */
.global m68k_beq_010033c0
m68k_beq_010033c0:
    mov        r0, sl
    bl         classify_and_rewrite_m68k_short_loop_branch
    tst        r7, #4
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010033e0 */
.global address_010033e0
address_010033e0:
    tst        r7, #4
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010033f8 */
.global address_010033f8
address_010033f8:
    tst        r7, #4
    bne        .L_010037ec
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003410 */
.global m68k_beq_01003410
m68k_beq_01003410:
    tst        r7, #4
    ldrshne    r1, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x20000
    addne      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003434 */
.global m68k_bvc_01003434
m68k_bvc_01003434:
    tst        r7, #2
    andeq      r1, fp, #0xff
    addeq      sl, sl, r1
    subeq      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003454 */
.global m68k_bvc_01003454
m68k_bvc_01003454:
    tst        r7, #2
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100346c */
.global m68k_bvc_0100346c
m68k_bvc_0100346c:
    tst        r7, #2
    ldrsheq    r1, [sl]
    addne      sl, sl, #2
    subne      r7, r7, #0x20000
    addeq      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003490 */
.global m68k_bvs_01003490
m68k_bvs_01003490:
    tst        r7, #2
    andne      r1, fp, #0xff
    addne      sl, sl, r1
    subne      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010034b0 */
.global m68k_bvs_010034b0
m68k_bvs_010034b0:
    tst        r7, #2
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010034c8 */
.global m68k_bvs_010034c8
m68k_bvs_010034c8:
    tst        r7, #2
    ldrshne    r1, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x20000
    addne      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010034ec */
.global m68k_bpl_010034ec
m68k_bpl_010034ec:
    tst        r7, #8
    andeq      r1, fp, #0xff
    addeq      sl, sl, r1
    subeq      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100350c */
.global m68k_bpl_0100350c
m68k_bpl_0100350c:
    mov        r0, sl
    bl         classify_and_rewrite_m68k_short_loop_branch
    tst        r7, #8
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100352c */
.global address_0100352c
address_0100352c:
    tst        r7, #8
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003544 */
.global address_01003544
address_01003544:
    tst        r7, #8
    beq        .L_010037ec
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100355c */
.global m68k_bpl_0100355c
m68k_bpl_0100355c:
    tst        r7, #8
    ldrsheq    r1, [sl]
    addne      sl, sl, #2
    subne      r7, r7, #0x20000
    addeq      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003580 */
.global m68k_bmi_01003580
m68k_bmi_01003580:
    tst        r7, #8
    andne      r1, fp, #0xff
    addne      sl, sl, r1
    subne      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010035a0 */
.global m68k_bmi_010035a0
m68k_bmi_010035a0:
    tst        r7, #8
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010035b8 */
.global m68k_bmi_010035b8
m68k_bmi_010035b8:
    tst        r7, #8
    ldrshne    r1, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x20000
    addne      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010035dc */
.global m68k_bge_010035dc
m68k_bge_010035dc:
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    andeq      r1, fp, #0xff
    addeq      sl, sl, r1
    subeq      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003600 */
.global m68k_bge_01003600
m68k_bge_01003600:
    mov        r0, sl
    bl         classify_and_rewrite_m68k_short_loop_branch
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003624 */
.global address_01003624
address_01003624:
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003640 */
.global address_01003640
address_01003640:
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    beq        .L_010037ec
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0100365c */
.global m68k_bge_0100365c
m68k_bge_0100365c:
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    ldrsheq    r1, [sl]
    addne      sl, sl, #2
    subne      r7, r7, #0x20000
    addeq      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003684 */
.global m68k_blt_01003684
m68k_blt_01003684:
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    andne      r1, fp, #0xff
    addne      sl, sl, r1
    subne      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010036a8 */
.global m68k_blt_010036a8
m68k_blt_010036a8:
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010036c4 */
.global m68k_blt_010036c4
m68k_blt_010036c4:
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    ldrshne    r1, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x20000
    addne      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010036ec */
.global m68k_bgt_010036ec
m68k_bgt_010036ec:
    tst        r7, #4
    eoreq      r5, r7, r7, lsr #2
    tsteq      r5, #2
    andeq      r1, fp, #0xff
    addeq      sl, sl, r1
    subeq      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003714 */
.global m68k_bgt_01003714
m68k_bgt_01003714:
    tst        r7, #4
    eoreq      r5, r7, r7, lsr #2
    tsteq      r5, #2
    beq        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003734 */
.global m68k_bgt_01003734
m68k_bgt_01003734:
    tst        r7, #4
    eoreq      r5, r7, r7, lsr #2
    tsteq      r5, #2
    ldrsheq    r1, [sl]
    addne      sl, sl, #2
    subne      r7, r7, #0x20000
    addeq      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003760 */
.global m68k_ble_01003760
m68k_ble_01003760:
    tst        r7, #4
    eoreq      r5, r7, r7, lsr #2
    tsteq      r5, #2
    andne      r1, fp, #0xff
    addne      sl, sl, r1
    subne      r7, r7, #0x20000
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003788 */
.global m68k_ble_01003788
m68k_ble_01003788:
    tst        r7, #4
    eoreq      r5, r7, r7, lsr #2
    tsteq      r5, #2
    bne        .L_010037d4
    subs       r7, r7, #0x80000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010037a8 */
.global m68k_ble_010037a8
m68k_ble_010037a8:
    tst        r7, #4
    eoreq      r5, r7, r7, lsr #2
    tsteq      r5, #2
    ldrshne    r1, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x20000
    addne      sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_010037d4:
    lsl        r1, fp, #0x18
    add        sl, sl, r1, asr #24
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_010037ec:
    lsl        r1, fp, #0x18
    add        sl, sl, r1, asr #24
    b          address_01003094

/* 0x010037f8 */
.global m68k_dbra_010037f8
m68k_dbra_010037f8:
    ldrh       r2, [r6]
    subs       r3, r2, #1
    bmi        .L_01003820
    ldrsh      r0, [sl]
    strh       r3, [r6]
    add        sl, sl, r0
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_01003820:
    strh       r3, [r6]
    add        sl, sl, #2
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003838 */
.global m68k_dbra_01003838
m68k_dbra_01003838:
    ldrh       r2, [r6, #4]
    subs       r3, r2, #1
    bmi        .L_01003860
    ldrsh      r0, [sl]
    strh       r3, [r6, #4]
    add        sl, sl, r0
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_01003860:
    strh       r3, [r6, #4]
    add        sl, sl, #2
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003878 */
.global m68k_dbra_01003878
m68k_dbra_01003878:
    ldrh       r2, [r6, #8]
    subs       r3, r2, #1
    bmi        .L_010038a0
    ldrsh      r0, [sl]
    strh       r3, [r6, #8]
    add        sl, sl, r0
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_010038a0:
    strh       r3, [r6, #8]
    add        sl, sl, #2
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010038b8 */
.global m68k_dbra_010038b8
m68k_dbra_010038b8:
    ldrh       r2, [r6, #0xc]
    subs       r3, r2, #1
    bmi        .L_010038e0
    ldrsh      r0, [sl]
    strh       r3, [r6, #0xc]
    add        sl, sl, r0
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_010038e0:
    strh       r3, [r6, #0xc]
    add        sl, sl, #2
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010038f8 */
.global m68k_dbra_010038f8
m68k_dbra_010038f8:
    ldrh       r2, [r6, #0x10]
    subs       r3, r2, #1
    bmi        .L_01003920
    ldrsh      r0, [sl]
    strh       r3, [r6, #0x10]
    add        sl, sl, r0
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_01003920:
    strh       r3, [r6, #0x10]
    add        sl, sl, #2
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003938 */
.global m68k_dbra_01003938
m68k_dbra_01003938:
    ldrh       r2, [r6, #0x14]
    subs       r3, r2, #1
    bmi        .L_01003960
    ldrsh      r0, [sl]
    strh       r3, [r6, #0x14]
    add        sl, sl, r0
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_01003960:
    strh       r3, [r6, #0x14]
    add        sl, sl, #2
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003978 */
.global m68k_dbra_01003978
m68k_dbra_01003978:
    ldrh       r2, [r6, #0x18]
    subs       r3, r2, #1
    bmi        .L_010039a0
    ldrsh      r0, [sl]
    strh       r3, [r6, #0x18]
    add        sl, sl, r0
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_010039a0:
    strh       r3, [r6, #0x18]
    add        sl, sl, #2
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010039b8 */
.global m68k_dbra_010039b8
m68k_dbra_010039b8:
    ldrh       r2, [r6, #0x1c]
    subs       r3, r2, #1
    bmi        .L_010039e0
    ldrsh      r0, [sl]
    strh       r3, [r6, #0x1c]
    add        sl, sl, r0
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_010039e0:
    strh       r3, [r6, #0x1c]
    add        sl, sl, #2
    subs       r7, r7, #0xe0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x010039f8 */
.global m68k_tst_byte_010039f8
m68k_tst_byte_010039f8:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003a1c */
.global m68k_tst_word_01003a1c
m68k_tst_word_01003a1c:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003a40 */
.global m68k_tst_long_01003a40
m68k_tst_long_01003a40:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003a64 */
.global m68k_tst_byte_01003a64
m68k_tst_byte_01003a64:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003a90 */
.global m68k_tst_word_01003a90
m68k_tst_word_01003a90:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003abc */
.global m68k_tst_long_01003abc
m68k_tst_long_01003abc:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003ae8 */
.global m68k_move_word_01003ae8
m68k_move_word_01003ae8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    bic        r7, r7, #0xf
    and        fp, fp, #0xe00
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        fp, fp, #7
    strh       r0, [r6, fp]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003b20 */
.global m68k_rts
m68k_rts:
    ldr        r3, [r6, #0x3c]
    mov        r5, #0x80000000
    lsl        r1, r3, #0x10
    add        r3, r3, #4
    str        r3, [r6, #0x3c]
    add        r1, r8, r1, lsr #16
    ldrh       r2, [r1], #2
    ldrh       r3, [r1]
    tst        r2, #0xc0
    ldreq      lr, [r6, #0x60]
    asreq      r5, r5, #9
    movne      lr, r8
    asrne      r5, r5, #0xf
    orr        r2, r3, r2, lsl #16
    and        r1, r2, r5
    str        r1, [r6, #0x9c]
    mvn        r5, r5
    and        r2, r2, r5
    add        sl, lr, r2
    subs       r7, r7, #0x100000
    ldrhgt     fp, [sl], #2
    str        lr, [r6, #0x54]
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084

/* 0x01003b80 */
.global m68k_rte
m68k_rte:
    ldr        r1, [r6, #0x50]
    sub        r7, r7, #0x140000
    tst        r1, #0x2000
    moveq      r0, #8
    beq        start_m68k_move_handlers
    ldr        r2, [r6, #0x3c]
    lsl        r1, r2, #0x10
    add        r2, r2, #6
    add        r1, r8, r1, lsr #16
    ldrh       r0, [r1], #2
    ldrh       r5, [r1], #2
    bic        r7, r7, #0x1f
    and        r3, r0, #0x1f
    orr        r7, r7, r3
    and        r0, r0, #0xa700
    ldrh       r3, [r1]
    tst        r0, #0x2000
    str        r0, [r6, #0x50]
    ldreq      r1, [r6, #0x48]
    strne      r2, [r6, #0x3c]
    streq      r2, [r6, #0x48]
    streq      r1, [r6, #0x3c]
    mov        r0, #0x80000000
    tst        r5, #0xc0
    ldreq      lr, [r6, #0x60]
    asreq      r0, r0, #9
    movne      lr, r8
    asrne      r0, r0, #0xf
    orr        r5, r3, r5, lsl #16
    and        r1, r5, r0
    str        r1, [r6, #0x9c]
    str        lr, [r6, #0x54]
    mvn        r0, r0
    and        r5, r5, r0
    add        sl, lr, r5
    asrs       r0, r7, #0x10
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003c1c */
.global m68k_bra_01003c1c
m68k_bra_01003c1c:
    and        r1, fp, #0xff
    add        sl, sl, r1
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003c34 */
.global m68k_bra_01003c34
m68k_bra_01003c34:
    lsl        r1, fp, #0x18
    add        sl, sl, r1, asr #24
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003c4c */
.global address_01003c4c
address_01003c4c:
    sub        sl, sl, #2
    b          address_01003094

/* 0x01003c54 */
.global m68k_bra_01003c54
m68k_bra_01003c54:
    ldrsh      r1, [sl]
    subs       r7, r7, #0xa0000
    add        sl, sl, r1
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
