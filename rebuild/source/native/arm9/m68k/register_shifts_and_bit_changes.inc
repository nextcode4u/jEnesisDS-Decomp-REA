/* 68000 instruction handlers in ARM9 main memory. 0x02030fa8–0x02032400. */


/* 0x02030fa8 */
.global m68k_asl_byte_02030fa8
m68k_asl_byte_02030fa8:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    beq        .L_0203100c
    sub        r7, r7, r2, lsl #17
    bic        r7, r7, #0x1f
    lsl        r3, r0, #0x18
    lsls       r3, r3, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r3, r3, #0x18
    strb       r3, [r6, r1, lsl #2]
    mov        r5, #0x80000000
    add        r2, r2, #0x18
    asr        r5, r5, r2
    and        r5, r5, #0xff
    and        r0, r0, r5
    tst        r0, r0
    cmpne      r0, r5
    orrne      r7, r7, #2
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_0203100c:
    bic        r7, r7, #0x1f
    tst        r0, r0
    orrne      r7, r7, #2
    orr        r7, r7, #4
    movne      r0, #0
    strb       r0, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031030 */
.global m68k_asl_byte_02031030
m68k_asl_byte_02031030:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    ands       r2, r2, #0x3f
    beq        .L_020310c4
    sub        r7, r7, r2, lsl #17
    cmp        r2, #8
    bge        .L_020310a0
    bic        r7, r7, #0x1f
    lsl        r3, r0, #0x18
    lsls       r3, r3, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r3, r3, #0x18
    strb       r3, [r6, r1, lsl #2]
    mov        r5, #0x80000000
    add        r2, r2, #0x18
    asr        r5, r5, r2
    and        r5, r5, #0xff
    and        r0, r0, r5
    tst        r0, r0
    cmpne      r0, r5
    orrne      r7, r7, #2
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_020310a0:
    bic        r7, r7, #0x1f
    tst        r0, r0
    orrne      r7, r7, #2
    orr        r7, r7, #4
    movne      r0, #0
    strb       r0, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_020310c4:
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    tst        r0, #0x80
    orrne      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020310e4 */
.global m68k_asl_word_020310e4
m68k_asl_word_020310e4:
    and        r1, fp, #7
    lsl        r1, r1, #2
    lsr        r2, fp, #9
    ldrh       r0, [r6, r1]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    bic        r7, r7, #0x1f
    lsl        r3, r0, #0x10
    lsls       r3, r3, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r3, r3, #0x10
    strh       r3, [r6, r1]
    mov        r5, #0x80000000
    asr        r5, r5, r2
    lsr        r5, r5, #0x10
    and        r0, r0, r5
    tst        r0, r0
    cmpne      r0, r5
    orrne      r7, r7, #2
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031148 */
.global m68k_asl_word_02031148
m68k_asl_word_02031148:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    ands       r2, r2, #0x3f
    beq        .L_020311dc
    sub        r7, r7, r2, lsl #17
    cmp        r2, #0x10
    bge        .L_020311b8
    bic        r7, r7, #0x1f
    lsl        r3, r0, #0x10
    lsls       r3, r3, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r3, r3, #0x10
    strh       r3, [r6, r1]
    mov        r5, #0x80000000
    asr        r5, r5, r2
    lsr        r5, r5, #0x10
    and        r0, r0, r5
    tst        r0, r0
    cmpne      r0, r5
    orrne      r7, r7, #2
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_020311b8:
    bic        r7, r7, #0x1f
    tst        r0, r0
    orrne      r7, r7, #2
    orr        r7, r7, #4
    movne      r0, #0
    strh       r0, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_020311dc:
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    tst        r0, #0x8000
    orrne      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020311fc */
.global m68k_asl_long_020311fc
m68k_asl_long_020311fc:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    bic        r7, r7, #0x1f
    lsls       r3, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    str        r3, [r6, r1, lsl #2]
    mov        r5, #0x80000000
    asr        r5, r5, r2
    and        r0, r0, r5
    tst        r0, r0
    cmpne      r0, r5
    orrne      r7, r7, #2
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031250 */
.global m68k_asl_long_02031250
m68k_asl_long_02031250:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    ands       r2, r2, #0x3f
    beq        .L_020312d4
    sub        r7, r7, r2, lsl #17
    cmp        r2, #0x20
    bge        .L_020312b0
    bic        r7, r7, #0x1f
    lsls       r3, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    str        r3, [r6, r1, lsl #2]
    mov        r5, #0x80000000
    asr        r5, r5, r2
    and        r0, r0, r5
    tst        r0, r0
    cmpne      r0, r5
    orrne      r7, r7, #2
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_020312b0:
    bic        r7, r7, #0x1f
    tst        r0, r0
    orrne      r7, r7, #2
    orr        r7, r7, #4
    movne      r0, #0
    str        r0, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_020312d4:
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020312f0 */
.global m68k_asr_byte_020312f0
m68k_asr_byte_020312f0:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsb      r0, [r6, r1]
    lsr        r2, fp, #9
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0x1f
    asrs       r0, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strb       r0, [r6, r1]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031330 */
.global m68k_asr_byte_02031330
m68k_asr_byte_02031330:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsb      r0, [r6, r1]
    and        r2, r2, #0x3f
    bic        r7, r7, #0x1f
    asrs       r0, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strb       r0, [r6, r1]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031370 */
.global m68k_asr_word_02031370
m68k_asr_word_02031370:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsh      r0, [r6, r1]
    lsr        r2, fp, #9
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0x1f
    asrs       r0, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r0, [r6, r1]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020313b0 */
.global m68k_asr_word_020313b0
m68k_asr_word_020313b0:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsh      r0, [r6, r1]
    and        r2, r2, #0x3f
    bic        r7, r7, #0x1f
    asrs       r0, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r0, [r6, r1]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020313f0 */
.global m68k_asr_long_020313f0
m68k_asr_long_020313f0:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    lsr        r2, fp, #9
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0x1f
    asrs       r0, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    str        r0, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203142c */
.global m68k_asr_long_0203142c
m68k_asr_long_0203142c:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, r2, #0x3f
    bic        r7, r7, #0x1f
    asrs       r0, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    str        r0, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031468 */
.global m68k_lsl_byte_02031468
m68k_lsl_byte_02031468:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0x1f
    lsl        r3, r0, #0x18
    lsls       r3, r3, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r3, r3, #0x18
    strb       r3, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020314ac */
.global m68k_lsl_byte_020314ac
m68k_lsl_byte_020314ac:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #0x3f
    beq        .L_020314f4
    bic        r7, r7, #0x1f
    lsl        r3, r0, #0x18
    lsls       r3, r3, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r3, r3, #0x18
    strb       r3, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_020314f4:
    bic        r7, r7, #0xf
    lsls       r0, r0, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031510 */
.global m68k_lsl_word_02031510
m68k_lsl_word_02031510:
    and        r1, fp, #7
    lsl        r1, r1, #2
    lsr        r2, fp, #9
    ldrh       r0, [r6, r1]
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0x1f
    lsl        r3, r0, #0x10
    lsls       r3, r3, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r3, r3, #0x10
    strh       r3, [r6, r1]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031558 */
.global m68k_lsl_word_02031558
m68k_lsl_word_02031558:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    ands       r2, r2, #0x3f
    beq        .L_020315a4
    bic        r7, r7, #0x1f
    lsl        r3, r0, #0x10
    lsls       r3, r3, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    lsr        r3, r3, #0x10
    strh       r3, [r6, r1]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_020315a4:
    bic        r7, r7, #0xf
    lsls       r0, r0, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020315c0 */
.global m68k_lsl_long_020315c0
m68k_lsl_long_020315c0:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0x1f
    lsls       r3, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    str        r3, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020315fc */
.global m68k_lsl_long_020315fc
m68k_lsl_long_020315fc:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #0x3f
    beq        .L_0203163c
    bic        r7, r7, #0x1f
    lsls       r3, r0, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    str        r3, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_0203163c:
    bic        r7, r7, #0xf
    tst        r0, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031658 */
.global m68k_lsr_byte_02031658
m68k_lsr_byte_02031658:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    lsr        r2, fp, #9
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0x1f
    lsrs       r0, r0, r2
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strb       r0, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031690 */
.global m68k_lsr_byte_02031690
m68k_lsr_byte_02031690:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #0x3f
    beq        .L_020316d4
    bic        r7, r7, #0x1f
    lsrs       r0, r0, r2
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    tst        r0, #0x80
    orrne      r7, r7, #8
    strb       r0, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_020316d4:
    bic        r7, r7, #0xf
    lsls       r0, r0, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020316f0 */
.global m68k_lsr_word_020316f0
m68k_lsr_word_020316f0:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    lsr        r2, fp, #9
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0x1f
    lsrs       r0, r0, r2
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r0, [r6, r1]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203172c */
.global m68k_lsr_word_0203172c
m68k_lsr_word_0203172c:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    ands       r2, r2, #0x3f
    beq        .L_02031774
    bic        r7, r7, #0x1f
    lsrs       r0, r0, r2
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    tst        r0, #0x8000
    orrne      r7, r7, #8
    strh       r0, [r6, r1]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_02031774:
    bic        r7, r7, #0xf
    lsls       r0, r0, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031790 */
.global m68k_lsr_long_02031790
m68k_lsr_long_02031790:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    lsr        r2, fp, #9
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0x1f
    lsrs       r0, r0, r2
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    str        r0, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020317c8 */
.global m68k_lsr_long_020317c8
m68k_lsr_long_020317c8:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #0x3f
    beq        .L_0203180c
    bic        r7, r7, #0x1f
    lsrs       r0, r0, r2
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    tst        r0, #0x80000000
    orrne      r7, r7, #8
    str        r0, [r6, r1, lsl #2]
    sub        r7, r7, r2, lsl #17
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_0203180c:
    bic        r7, r7, #0xf
    tst        r0, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031828 */
.global m68k_rol_byte_02031828
m68k_rol_byte_02031828:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    bic        r7, r7, #0xf
    beq        .L_02031870
    sub        r7, r7, r2, lsl #17
    lsl        r3, r0, r2
    rsb        r2, r2, #8
    orr        r3, r3, r0, lsr r2
    lsls       r0, r3, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #1
    strb       r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_02031870:
    lsls       r3, r0, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    tst        r0, #1
    orrne      r7, r7, #1
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031890 */
.global m68k_rol_byte_02031890
m68k_rol_byte_02031890:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    ands       r2, r2, #0x3f
    beq        .L_02031904
    ands       r2, r2, #7
    beq        .L_020318e4
    sub        r7, r7, r2, lsl #17
    lsl        r3, r0, r2
    rsb        r2, r2, #8
    orr        r3, r3, r0, lsr r2
    lsls       r0, r3, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #1
    strb       r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_020318e4:
    lsls       r3, r0, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    tst        r0, #1
    orrne      r7, r7, #1
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]
.L_02031904:
    lsls       r3, r0, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203191c */
.global m68k_rol_word_0203191c
m68k_rol_word_0203191c:
    and        r1, fp, #7
    lsl        r1, r1, #2
    lsr        r2, fp, #9
    ldrh       r0, [r6, r1]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    bic        r7, r7, #0xf
    lsl        r3, r0, r2
    rsb        r2, r2, #0x10
    orr        r3, r3, r0, lsr r2
    lsls       r0, r3, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #1
    strh       r3, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031968 */
.global m68k_rol_word_02031968
m68k_rol_word_02031968:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0xf
    ands       r2, r2, #0x3f
    beq        .L_020319e0
    ands       r2, r2, #0xf
    beq        .L_020319c0
    sub        r7, r7, r2, lsl #17
    lsl        r3, r0, r2
    rsb        r2, r2, #0x10
    orr        r3, r3, r0, lsr r2
    lsls       r0, r3, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #1
    strh       r3, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_020319c0:
    lsls       r3, r0, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    tst        r0, #1
    orrne      r7, r7, #1
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x260000
    ldr        pc, [sb, fp, lsl #2]
.L_020319e0:
    lsls       r3, r0, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020319f8 */
.global m68k_rol_long_020319f8
m68k_rol_long_020319f8:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    bic        r7, r7, #0xf
    lsls       r3, r0, r2
    orrmi      r7, r7, #8
    orrhs      r7, r7, #1
    rsb        r2, r2, #0x20
    orrs       r3, r3, r0, lsr r2
    orreq      r7, r7, #4
    str        r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031a3c */
.global m68k_rol_long_02031a3c
m68k_rol_long_02031a3c:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    ands       r2, r2, #0x3f
    beq        .L_02031aac
    ands       r2, r2, #0x1f
    beq        .L_02031a8c
    sub        r7, r7, r2, lsl #17
    lsls       r3, r0, r2
    orrmi      r7, r7, #8
    orrhs      r7, r7, #1
    rsb        r2, r2, #0x20
    orrs       r3, r3, r0, lsr r2
    orreq      r7, r7, #4
    str        r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_02031a8c:
    tst        r0, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    tst        r0, #1
    orrne      r7, r7, #1
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]
.L_02031aac:
    tst        r0, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031ac4 */
.global m68k_ror_byte_02031ac4
m68k_ror_byte_02031ac4:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    bic        r7, r7, #0xf
    beq        .L_02031b0c
    sub        r7, r7, r2, lsl #17
    lsrs       r3, r0, r2
    orrhs      r7, r7, #1
    rsb        r2, r2, #8
    orr        r3, r3, r0, lsl r2
    lsls       r0, r3, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    strb       r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_02031b0c:
    lsls       r3, r0, #0x18
    orrmi      r7, r7, #9
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031b24 */
.global m68k_ror_byte_02031b24
m68k_ror_byte_02031b24:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    ands       r2, r2, #0x3f
    beq        .L_02031b90
    ands       r2, r2, #7
    beq        .L_02031b78
    sub        r7, r7, r2, lsl #17
    lsrs       r3, r0, r2
    orrhs      r7, r7, #1
    rsb        r2, r2, #8
    orr        r3, r3, r0, lsl r2
    lsls       r0, r3, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    strb       r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_02031b78:
    lsls       r3, r0, #0x18
    orrmi      r7, r7, #9
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]
.L_02031b90:
    lsls       r3, r0, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031ba8 */
.global m68k_ror_word_02031ba8
m68k_ror_word_02031ba8:
    and        r1, fp, #7
    lsl        r1, r1, #2
    lsr        r2, fp, #9
    ldrh       r0, [r6, r1]
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0xf
    sub        r7, r7, r2, lsl #17
    lsrs       r3, r0, r2
    orrhs      r7, r7, #1
    rsb        r2, r2, #0x10
    orr        r3, r3, r0, lsl r2
    lsls       r0, r3, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    strh       r3, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031bf4 */
.global m68k_ror_word_02031bf4
m68k_ror_word_02031bf4:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0xf
    ands       r2, r2, #0x3f
    beq        .L_02031c64
    ands       r2, r2, #0xf
    beq        .L_02031c4c
    sub        r7, r7, r2, lsl #17
    lsrs       r3, r0, r2
    orrhs      r7, r7, #1
    rsb        r2, r2, #0x10
    orr        r3, r3, r0, lsl r2
    lsls       r0, r3, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    strh       r3, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_02031c4c:
    lsls       r3, r0, #0x10
    orrmi      r7, r7, #9
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x260000
    ldr        pc, [sb, fp, lsl #2]
.L_02031c64:
    lsls       r3, r0, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031c7c */
.global m68k_ror_long_02031c7c
m68k_ror_long_02031c7c:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    moveq      r2, #8
    bic        r7, r7, #0xf
    sub        r7, r7, r2, lsl #17
    rors       r3, r0, r2
    orrhs      r7, r7, #1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031cb8 */
.global m68k_ror_long_02031cb8
m68k_ror_long_02031cb8:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    ands       r2, r2, #0x3f
    beq        .L_02031d1c
    ands       r2, r2, #0x1f
    beq        .L_02031d00
    sub        r7, r7, r2, lsl #17
    rors       r3, r0, r2
    orrhs      r7, r7, #1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_02031d00:
    tst        r0, r0
    orrmi      r7, r7, #9
    orreq      r7, r7, #4
    subs       r7, r7, #0x480000
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x480000
    ldr        pc, [sb, fp, lsl #2]
.L_02031d1c:
    tst        r0, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031d34 */
.global m68k_roxl_byte_02031d34
m68k_roxl_byte_02031d34:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    tst        r7, #0x10
    orrne      r0, r0, #0x100
    lsl        r3, r0, r2
    rsb        r2, r2, #9
    orr        r3, r3, r0, lsr r2
    lsls       r0, r3, #0x18
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strb       r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031d84 */
.global m68k_roxl_byte_02031d84
m68k_roxl_byte_02031d84:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #0x3f
    beq        .L_02031de0
    sub        r7, r7, r2, lsl #17
    ldr        r4, .L_0203224c
    ldrb       r2, [r4, r2]
    tst        r7, #0x10
    orrne      r0, r0, #0x100
    lsl        r3, r0, r2
    rsb        r2, r2, #9
    orr        r3, r3, r0, lsr r2
    lsls       r0, r3, #0x18
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strb       r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_02031de0:
    bic        r7, r7, #0xf
    orrne      r7, r7, #1
    lsls       r3, r0, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031e00 */
.global m68k_roxl_word_02031e00
m68k_roxl_word_02031e00:
    and        r1, fp, #7
    lsl        r1, r1, #2
    lsr        r2, fp, #9
    ldrh       r0, [r6, r1]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    tst        r7, #0x10
    orrne      r0, r0, #0x10000
    lsl        r3, r0, r2
    rsb        r2, r2, #0x11
    orr        r3, r3, r0, lsr r2
    lsls       r0, r3, #0x10
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r3, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031e54 */
.global m68k_roxl_word_02031e54
m68k_roxl_word_02031e54:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    ands       r2, r2, #0x3f
    beq        .L_02031eb4
    sub        r7, r7, r2, lsl #17
    ldr        r4, .L_02032250
    ldrb       r2, [r4, r2]
    tst        r7, #0x10
    orrne      r0, r0, #0x10000
    lsl        r3, r0, r2
    rsb        r2, r2, #0x11
    orr        r3, r3, r0, lsr r2
    lsls       r0, r3, #0x10
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    orrhs      r7, r7, #0x11
    strh       r3, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_02031eb4:
    bic        r7, r7, #0xf
    orrne      r7, r7, #1
    lsls       r3, r0, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031ed4 */
.global m68k_roxl_long_02031ed4
m68k_roxl_long_02031ed4:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    tst        r7, #0x10
    subne      r4, r2, #1
    movne      r5, #1
    lslne      r5, r5, r4
    moveq      r5, #0
    lsls       r3, r0, r2
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    rsb        r2, r2, #0x21
    orr        r3, r3, r0, lsr r2
    orrs       r3, r3, r5
    orreq      r7, r7, #4
    str        r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031f30 */
.global m68k_roxl_long_02031f30
m68k_roxl_long_02031f30:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #0x3f
    beq        .L_02031fa0
    ldr        r5, .L_02032254
    sub        r7, r7, r2, lsl #17
    ldrb       r2, [r5, r2]
    tst        r2, r2
    beq        .L_02031fa0
    tst        r7, #0x10
    subne      r4, r2, #1
    movne      r5, #1
    lslne      r5, r5, r4
    moveq      r5, #0
    lsls       r3, r0, r2
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    rsb        r2, r2, #0x21
    orr        r3, r3, r0, lsr r2
    orrs       r3, r3, r5
    orreq      r7, r7, #4
    str        r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_02031fa0:
    bic        r7, r7, #0xf
    orrne      r7, r7, #1
    tst        r0, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02031fc0 */
.global m68k_roxr_byte
m68k_roxr_byte:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r0, r0, #0x100
    lsrs       r3, r0, r2
    orrhs      r7, r7, #0x11
    rsb        r2, r2, #9
    orr        r3, r3, r0, lsl r2
    lsls       r0, r3, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    strb       r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032010 */
.global m68k_roxr_long_02032010
m68k_roxr_long_02032010:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    ands       r2, r2, #0x3f
    beq        .L_0203206c
    sub        r7, r7, r2, lsl #17
    ldr        r4, .L_0203224c
    ldrb       r2, [r4, r2]
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r0, r0, #0x100
    lsrs       r3, r0, r2
    orrhs      r7, r7, #0x11
    rsb        r2, r2, #9
    orr        r3, r3, r0, lsl r2
    lsls       r0, r3, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    strb       r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_0203206c:
    bic        r7, r7, #0xf
    orrne      r7, r7, #1
    lsls       r3, r0, #0x18
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203208c */
.global m68k_roxr_word_0203208c
m68k_roxr_word_0203208c:
    and        r1, fp, #7
    lsl        r1, r1, #2
    lsr        r2, fp, #9
    ldrh       r0, [r6, r1]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r0, r0, #0x10000
    lsrs       r3, r0, r2
    orrhs      r7, r7, #0x11
    rsb        r2, r2, #0x11
    orr        r3, r3, r0, lsl r2
    lsls       r0, r3, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    strh       r3, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020320e0 */
.global m68k_roxr_word_020320e0
m68k_roxr_word_020320e0:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    ands       r2, r2, #0x3f
    beq        .L_02032140
    sub        r7, r7, r2, lsl #17
    ldr        r4, .L_02032250
    ldrb       r2, [r4, r2]
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    orrne      r0, r0, #0x10000
    lsrs       r3, r0, r2
    orrhs      r7, r7, #0x11
    rsb        r2, r2, #0x11
    orr        r3, r3, r0, lsl r2
    lsls       r0, r3, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    strh       r3, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]
.L_02032140:
    bic        r7, r7, #0xf
    orrne      r7, r7, #1
    lsls       r3, r0, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032160 */
.global m68k_roxr_long_02032160
m68k_roxr_long_02032160:
    and        r1, fp, #7
    lsr        r2, fp, #9
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #7
    moveq      r2, #8
    sub        r7, r7, r2, lsl #17
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    rsbne      r4, r2, #0x20
    movne      r5, #1
    lslne      r5, r5, r4
    moveq      r5, #0
    lsrs       r3, r0, r2
    orrhs      r7, r7, #0x11
    rsb        r2, r2, #0x21
    orr        r3, r3, r0, lsl r2
    orrs       r3, r3, r5
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020321bc */
.global m68k_roxr_long_020321bc
m68k_roxr_long_020321bc:
    and        r2, fp, #0xe00
    ldrb       r2, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    ands       r2, r2, #0x3f
    beq        .L_0203222c
    ldr        r5, .L_02032254
    sub        r7, r7, r2, lsl #17
    ldrb       r2, [r5, r2]
    tst        r2, r2
    beq        .L_0203222c
    tst        r7, #0x10
    bic        r7, r7, #0x1f
    rsbne      r4, r2, #0x20
    movne      r5, #1
    lslne      r5, r5, r4
    moveq      r5, #0
    lsrs       r3, r0, r2
    orrhs      r7, r7, #0x11
    rsb        r2, r2, #0x21
    orr        r3, r3, r0, lsl r2
    orrs       r3, r3, r5
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r3, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_0203222c:
    bic        r7, r7, #0xf
    orrne      r7, r7, #1
    tst        r0, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_0203224c:
    .word m68k_condition_and_rotate_tables + 0x100
.L_02032250:
    .word m68k_condition_and_rotate_tables + 0x140
.L_02032254:
    .word m68k_condition_and_rotate_tables + 0x180

/* 0x02032258 */
.global m68k_bchg_byte_02032258
m68k_bchg_byte_02032258:
    and        r2, fp, #0xe00
    ldrb       r3, [r6, r2, lsr #7]
    and        r1, fp, #7
    mov        r4, #1
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #4
    and        r3, r3, #0x1f
    tst        r4, r0, lsr r3
    orreq      r7, r7, #4
    eor        r5, r0, r4, lsl r3
    str        r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032290 */
.global m68k_bchg_byte_02032290
m68k_bchg_byte_02032290:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    mov        r4, #1
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #4
    and        r3, r3, #0x1f
    tst        r4, r0, lsr r3
    orreq      r7, r7, #4
    eor        r5, r0, r4, lsl r3
    str        r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020322c4 */
.global m68k_bclr_byte_020322c4
m68k_bclr_byte_020322c4:
    and        r2, fp, #0xe00
    ldrb       r3, [r6, r2, lsr #7]
    and        r1, fp, #7
    mov        r4, #1
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #4
    and        r3, r3, #0x1f
    tst        r4, r0, lsr r3
    orreq      r7, r7, #4
    bic        r5, r0, r4, lsl r3
    str        r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020322fc */
.global m68k_bclr_byte_020322fc
m68k_bclr_byte_020322fc:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    mov        r4, #1
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #4
    and        r3, r3, #0x1f
    tst        r4, r0, lsr r3
    orreq      r7, r7, #4
    bic        r5, r0, r4, lsl r3
    str        r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032330 */
.global m68k_bset_byte_02032330
m68k_bset_byte_02032330:
    and        r2, fp, #0xe00
    ldrb       r3, [r6, r2, lsr #7]
    and        r1, fp, #7
    mov        r4, #1
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #4
    and        r3, r3, #0x1f
    tst        r4, r0, lsr r3
    orreq      r7, r7, #4
    orr        r5, r0, r4, lsl r3
    str        r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032368 */
.global m68k_bset_byte_02032368
m68k_bset_byte_02032368:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    mov        r4, #1
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #4
    and        r3, r3, #0x1f
    tst        r4, r0, lsr r3
    orreq      r7, r7, #4
    orr        r5, r0, r4, lsl r3
    str        r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203239c */
.global m68k_btst_long_0203239c
m68k_btst_long_0203239c:
    and        r2, fp, #0xe00
    ldrb       r3, [r6, r2, lsr #7]
    and        r1, fp, #7
    mov        r4, #1
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #4
    and        r3, r3, #0x1f
    tst        r4, r0, lsr r3
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020323cc */
.global m68k_btst_byte_020323cc
m68k_btst_byte_020323cc:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    mov        r4, #1
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #4
    and        r3, r3, #0x1f
    tst        r4, r0, lsr r3
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]
    andeq      r0, r0, r0
    andeq      r0, r0, r0
