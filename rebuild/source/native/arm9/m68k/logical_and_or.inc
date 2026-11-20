/* 68000 instruction handlers in ARM9 main memory. 0x02026308–0x02029114. */


/* 0x02026308 */
.global m68k_and_byte_02026308
m68k_and_byte_02026308:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026340 */
.global m68k_and_word_02026340
m68k_and_word_02026340:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026380 */
.global m68k_and_long_02026380
m68k_and_long_02026380:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020263b0 */
.global m68k_and_byte_020263b0
m68k_and_byte_020263b0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020263f0 */
.global m68k_and_word_020263f0
m68k_and_word_020263f0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026434 */
.global m68k_and_long_02026434
m68k_and_long_02026434:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202646c */
.global m68k_and_byte_0202646c
m68k_and_byte_0202646c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020264c0 */
.global m68k_and_word_020264c0
m68k_and_word_020264c0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026510 */
.global m68k_and_long_02026510
m68k_and_long_02026510:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026554 */
.global m68k_and_byte_02026554
m68k_and_byte_02026554:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020265a8 */
.global m68k_and_word_020265a8
m68k_and_word_020265a8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020265f8 */
.global m68k_and_long_020265f8
m68k_and_long_020265f8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202663c */
.global m68k_and_byte_0202663c
m68k_and_byte_0202663c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026684 */
.global m68k_and_word_02026684
m68k_and_word_02026684:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020266d0 */
.global m68k_and_long_020266d0
m68k_and_long_020266d0:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026710 */
.global m68k_and_byte_02026710
m68k_and_byte_02026710:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202677c */
.global m68k_and_word_0202677c
m68k_and_word_0202677c:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020267ec */
.global m68k_and_long_020267ec
m68k_and_long_020267ec:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026850 */
.global m68k_and_byte_02026850
m68k_and_byte_02026850:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026888 */
.global m68k_and_word_02026888
m68k_and_word_02026888:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020268c4 */
.global m68k_and_long_020268c4
m68k_and_long_020268c4:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020268f4 */
.global m68k_and_byte_020268f4
m68k_and_byte_020268f4:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026934 */
.global m68k_and_word_02026934
m68k_and_word_02026934:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026978 */
.global m68k_and_long_02026978
m68k_and_long_02026978:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020269b0 */
.global m68k_and_byte_020269b0
m68k_and_byte_020269b0:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020269fc */
.global m68k_and_word_020269fc
m68k_and_word_020269fc:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026a4c */
.global m68k_and_long_02026a4c
m68k_and_long_02026a4c:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026a90 */
.global m68k_and_byte_02026a90
m68k_and_byte_02026a90:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    orr        r0, r0, r1
    ldrh       r3, [sl], #2
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    addne      r2, r6, #0x20
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026b04 */
.global m68k_and_word_02026b04
m68k_and_word_02026b04:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    orr        r0, r0, r1
    ldrh       r3, [sl], #2
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    addne      r2, r6, #0x20
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026b7c */
.global m68k_and_long_02026b7c
m68k_and_long_02026b7c:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    orr        r0, r0, r1
    ldrh       r3, [sl], #2
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    addne      r2, r6, #0x20
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026be8 */
.global m68k_and_byte_02026be8
m68k_and_byte_02026be8:
    ldrb       r0, [sl], #2
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026c1c */
.global m68k_and_word_02026c1c
m68k_and_word_02026c1c:
    ldrh       r0, [sl], #2
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    ands       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026c54 */
.global m68k_and_long_02026c54
m68k_and_long_02026c54:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    ands       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026c88 */
.global m68k_and_byte_02026c88
m68k_and_byte_02026c88:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026cd4 */
.global m68k_and_word_02026cd4
m68k_and_word_02026cd4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026d20 */
.global m68k_and_long_02026d20
m68k_and_long_02026d20:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    ands       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026d70 */
.global m68k_and_byte_02026d70
m68k_and_byte_02026d70:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026dd0 */
.global m68k_and_word_02026dd0
m68k_and_word_02026dd0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026e28 */
.global m68k_and_long_02026e28
m68k_and_long_02026e28:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    ldrh       r1, [r3, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    ands       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026e84 */
.global m68k_and_byte_02026e84
m68k_and_byte_02026e84:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026ee4 */
.global m68k_and_word_02026ee4
m68k_and_word_02026ee4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026f3c */
.global m68k_and_long_02026f3c
m68k_and_long_02026f3c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    ldrh       r1, [r3, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    ands       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026f98 */
.global m68k_and_byte_02026f98
m68k_and_byte_02026f98:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026fec */
.global m68k_and_word_02026fec
m68k_and_word_02026fec:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027040 */
.global m68k_and_long_02027040
m68k_and_long_02027040:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    ands       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027098 */
.global m68k_and_byte_02027098
m68k_and_byte_02027098:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027110 */
.global m68k_and_word_02027110
m68k_and_word_02027110:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027188 */
.global m68k_and_long_02027188
m68k_and_long_02027188:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    ands       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027204 */
.global m68k_and_byte_02027204
m68k_and_byte_02027204:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027244 */
.global m68k_and_word_02027244
m68k_and_word_02027244:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027284 */
.global m68k_and_long_02027284
m68k_and_long_02027284:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    ands       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020272c8 */
.global m68k_and_byte_020272c8
m68k_and_byte_020272c8:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202730c */
.global m68k_and_word_0202730c
m68k_and_word_0202730c:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027350 */
.global m68k_and_long_02027350
m68k_and_long_02027350:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    ands       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027398 */
.global m68k_andi_byte_02027398
m68k_andi_byte_02027398:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020273cc */
.global m68k_andi_word_020273cc
m68k_andi_word_020273cc:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r6, r1]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027404 */
.global m68k_andi_long_02027404
m68k_andi_long_02027404:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    ands       r5, r0, r5
    str        r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027438 */
.global m68k_andi_byte_02027438
m68k_andi_byte_02027438:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027480 */
.global m68k_andi_word_02027480
m68k_andi_word_02027480:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020274c4 */
.global m68k_andi_long_020274c4
m68k_andi_long_020274c4:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    ands       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027518 */
.global m68k_andi_byte_02027518
m68k_andi_byte_02027518:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027574 */
.global m68k_andi_word_02027574
m68k_andi_word_02027574:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020275c4 */
.global m68k_andi_long_020275c4
m68k_andi_long_020275c4:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    ldrh       r1, [r3, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    ands       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027624 */
.global m68k_andi_byte_02027624
m68k_andi_byte_02027624:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027680 */
.global m68k_andi_word_02027680
m68k_andi_word_02027680:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020276d0 */
.global m68k_andi_long_020276d0
m68k_andi_long_020276d0:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    ldrh       r1, [r3, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    ands       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027730 */
.global m68k_andi_byte_02027730
m68k_andi_byte_02027730:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027780 */
.global m68k_andi_word_02027780
m68k_andi_word_02027780:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020277cc */
.global m68k_andi_long_020277cc
m68k_andi_long_020277cc:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    ands       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x200000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027828 */
.global m68k_andi_byte_02027828
m68k_andi_byte_02027828:
    ldrb       r5, [sl], #2
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202789c */
.global m68k_andi_word_0202789c
m68k_andi_word_0202789c:
    ldrh       r5, [sl], #2
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202790c */
.global m68k_andi_long_0202790c
m68k_andi_long_0202790c:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    ands       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x220000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202798c */
.global m68k_andi_byte_0202798c
m68k_andi_byte_0202798c:
    ldrb       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020279c8 */
.global m68k_andi_word_020279c8
m68k_andi_word_020279c8:
    ldrh       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027a00 */
.global m68k_andi_long_02027a00
m68k_andi_long_02027a00:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    ands       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x200000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027a48 */
.global m68k_andi_byte_02027a48
m68k_andi_byte_02027a48:
    ldrb       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    ands       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027a88 */
.global m68k_andi_word_02027a88
m68k_andi_word_02027a88:
    ldrh       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    ands       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027ac4 */
.global m68k_andi_long_02027ac4
m68k_andi_long_02027ac4:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    ands       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x240000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027b10 */
.global m68k_or_byte_02027b10
m68k_or_byte_02027b10:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027b48 */
.global m68k_or_word_02027b48
m68k_or_word_02027b48:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027b88 */
.global m68k_or_long_02027b88
m68k_or_long_02027b88:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027bb8 */
.global m68k_or_byte_02027bb8
m68k_or_byte_02027bb8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027bf8 */
.global m68k_or_word_02027bf8
m68k_or_word_02027bf8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027c3c */
.global m68k_or_long_02027c3c
m68k_or_long_02027c3c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027c74 */
.global m68k_or_byte_02027c74
m68k_or_byte_02027c74:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027cc8 */
.global m68k_or_word_02027cc8
m68k_or_word_02027cc8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027d18 */
.global m68k_or_long_02027d18
m68k_or_long_02027d18:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027d5c */
.global m68k_or_byte_02027d5c
m68k_or_byte_02027d5c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027db0 */
.global m68k_or_word_02027db0
m68k_or_word_02027db0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027e00 */
.global m68k_or_long_02027e00
m68k_or_long_02027e00:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027e44 */
.global m68k_or_byte_02027e44
m68k_or_byte_02027e44:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027e8c */
.global m68k_or_word_02027e8c
m68k_or_word_02027e8c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027ed8 */
.global m68k_or_long_02027ed8
m68k_or_long_02027ed8:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027f18 */
.global m68k_or_byte_02027f18
m68k_or_byte_02027f18:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027f84 */
.global m68k_or_word_02027f84
m68k_or_word_02027f84:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02027ff4 */
.global m68k_or_long_02027ff4
m68k_or_long_02027ff4:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028058 */
.global m68k_or_byte_02028058
m68k_or_byte_02028058:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028090 */
.global m68k_or_word_02028090
m68k_or_word_02028090:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020280cc */
.global m68k_or_long_020280cc
m68k_or_long_020280cc:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020280fc */
.global m68k_or_byte_020280fc
m68k_or_byte_020280fc:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202813c */
.global m68k_or_word_0202813c
m68k_or_word_0202813c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028180 */
.global m68k_or_long_02028180
m68k_or_long_02028180:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020281b8 */
.global m68k_or_byte_020281b8
m68k_or_byte_020281b8:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028204 */
.global m68k_or_word_02028204
m68k_or_word_02028204:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028254 */
.global m68k_or_long_02028254
m68k_or_long_02028254:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028298 */
.global m68k_or_byte_02028298
m68k_or_byte_02028298:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    orr        r0, r0, r1
    ldrh       r3, [sl], #2
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    addne      r2, r6, #0x20
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202830c */
.global m68k_or_word_0202830c
m68k_or_word_0202830c:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    orr        r0, r0, r1
    ldrh       r3, [sl], #2
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    addne      r2, r6, #0x20
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028384 */
.global m68k_or_long_02028384
m68k_or_long_02028384:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    orr        r0, r0, r1
    ldrh       r3, [sl], #2
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    addne      r2, r6, #0x20
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020283f0 */
.global m68k_or_byte_020283f0
m68k_or_byte_020283f0:
    ldrb       r0, [sl], #2
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028424 */
.global m68k_or_word_02028424
m68k_or_word_02028424:
    ldrh       r0, [sl], #2
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0xf
    orrs       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202845c */
.global m68k_or_long_0202845c
m68k_or_long_0202845c:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    orrs       r0, r0, r1
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028490 */
.global m68k_or_byte_02028490
m68k_or_byte_02028490:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020284dc */
.global m68k_or_word_020284dc
m68k_or_word_020284dc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028528 */
.global m68k_or_long_02028528
m68k_or_long_02028528:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    orrs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028578 */
.global m68k_or_byte_02028578
m68k_or_byte_02028578:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020285d8 */
.global m68k_or_word_020285d8
m68k_or_word_020285d8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028630 */
.global m68k_or_long_02028630
m68k_or_long_02028630:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    ldrh       r1, [r3, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    orrs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202868c */
.global m68k_or_byte_0202868c
m68k_or_byte_0202868c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020286ec */
.global m68k_or_word_020286ec
m68k_or_word_020286ec:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028744 */
.global m68k_or_long_02028744
m68k_or_long_02028744:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    ldrh       r1, [r3, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    orrs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020287a0 */
.global m68k_or_byte_020287a0
m68k_or_byte_020287a0:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020287f4 */
.global m68k_or_word_020287f4
m68k_or_word_020287f4:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028848 */
.global m68k_or_long_02028848
m68k_or_long_02028848:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    orrs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020288a0 */
.global m68k_or_byte_020288a0
m68k_or_byte_020288a0:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028918 */
.global m68k_or_word_02028918
m68k_or_word_02028918:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028990 */
.global m68k_or_long_02028990
m68k_or_long_02028990:
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    orrs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028a0c */
.global m68k_or_byte_02028a0c
m68k_or_byte_02028a0c:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028a4c */
.global m68k_or_word_02028a4c
m68k_or_word_02028a4c:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028a8c */
.global m68k_or_long_02028a8c
m68k_or_long_02028a8c:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    orrs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028ad0 */
.global m68k_or_byte_02028ad0
m68k_or_byte_02028ad0:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028b14 */
.global m68k_or_word_02028b14
m68k_or_word_02028b14:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028b58 */
.global m68k_or_long_02028b58
m68k_or_long_02028b58:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    orrs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028ba0 */
.global m68k_ori_byte_02028ba0
m68k_ori_byte_02028ba0:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028bd4 */
.global m68k_ori_word_02028bd4
m68k_ori_word_02028bd4:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r6, r1]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028c0c */
.global m68k_ori_long_02028c0c
m68k_ori_long_02028c0c:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    orrs       r5, r0, r5
    str        r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028c40 */
.global m68k_ori_byte_02028c40
m68k_ori_byte_02028c40:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028c88 */
.global m68k_ori_word_02028c88
m68k_ori_word_02028c88:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028ccc */
.global m68k_ori_long_02028ccc
m68k_ori_long_02028ccc:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    orrs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028d20 */
.global m68k_ori_byte_02028d20
m68k_ori_byte_02028d20:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028d7c */
.global m68k_ori_word_02028d7c
m68k_ori_word_02028d7c:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028dcc */
.global m68k_ori_long_02028dcc
m68k_ori_long_02028dcc:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    ldrh       r1, [r3, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    orrs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028e2c */
.global m68k_ori_byte_02028e2c
m68k_ori_byte_02028e2c:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    eor        r3, r3, #1
    ldrb       r0, [r3]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028e88 */
.global m68k_ori_word_02028e88
m68k_ori_word_02028e88:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028ed8 */
.global m68k_ori_long_02028ed8
m68k_ori_long_02028ed8:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    ldrh       r1, [r3, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    orrs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028f38 */
.global m68k_ori_byte_02028f38
m68k_ori_byte_02028f38:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028f88 */
.global m68k_ori_word_02028f88
m68k_ori_word_02028f88:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02028fd4 */
.global m68k_ori_long_02028fd4
m68k_ori_long_02028fd4:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    orrs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x200000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029030 */
.global m68k_ori_byte_02029030
m68k_ori_byte_02029030:
    ldrb       r5, [sl], #2
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    orrs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020290a4 */
.global m68k_ori_word_020290a4
m68k_ori_word_020290a4:
    ldrh       r5, [sl], #2
    ldrh       r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsl        r1, r3, #0x18
    add        r0, r0, r1, asr #24
    tst        r3, #0x8000
    moveq      r2, r6
    and        r1, r3, #0x7000
    lsr        r1, r1, #0xa
    tst        r3, #0x800
    ldrsheq    r1, [r2, r1]
    ldrne      r1, [r2, r1]
    add        r0, r0, r1
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]
