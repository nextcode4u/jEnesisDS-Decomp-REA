/* 68000 instruction handlers in ARM9 main memory. 0x02029114–0x0202aff8. */


/* 0x02029114 */
.global m68k_ori_long_02029114
m68k_ori_long_02029114:
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
    orrs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x220000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029194 */
.global m68k_ori_byte_02029194
m68k_ori_byte_02029194:
    ldrb       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
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

/* 0x020291d0 */
.global m68k_ori_word_020291d0
m68k_ori_word_020291d0:
    ldrh       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
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

/* 0x02029208 */
.global m68k_ori_long_02029208
m68k_ori_long_02029208:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldrh       r0, [sl], #2
    add        r2, r0, r8
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

/* 0x02029250 */
.global m68k_ori_byte_02029250
m68k_ori_byte_02029250:
    ldrb       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
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
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029290 */
.global m68k_ori_word_02029290
m68k_ori_word_02029290:
    ldrh       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    orrs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020292cc */
.global m68k_ori_long_020292cc
m68k_ori_long_020292cc:
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
    orrs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x240000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029318 */
.global m68k_eor_byte_02029318
m68k_eor_byte_02029318:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    eors       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029350 */
.global m68k_eor_word_02029350
m68k_eor_word_02029350:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    eors       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r6, r1]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029390 */
.global m68k_eor_long_02029390
m68k_eor_long_02029390:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    eors       r5, r0, r4
    str        r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020293c0 */
.global m68k_eor_byte_020293c0
m68k_eor_byte_020293c0:
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
    eors       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202940c */
.global m68k_eor_word_0202940c
m68k_eor_word_0202940c:
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
    eors       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029458 */
.global m68k_eor_long_02029458
m68k_eor_long_02029458:
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
    eors       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020294a8 */
.global m68k_eor_byte_020294a8
m68k_eor_byte_020294a8:
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
    eors       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029508 */
.global m68k_eor_word_02029508
m68k_eor_word_02029508:
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
    eors       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029560 */
.global m68k_eor_long_02029560
m68k_eor_long_02029560:
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
    eors       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020295bc */
.global m68k_eor_byte_020295bc
m68k_eor_byte_020295bc:
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
    eors       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202961c */
.global m68k_eor_word_0202961c
m68k_eor_word_0202961c:
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
    eors       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029674 */
.global m68k_eor_long_02029674
m68k_eor_long_02029674:
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
    eors       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020296d0 */
.global m68k_eor_byte_020296d0
m68k_eor_byte_020296d0:
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
    eors       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029724 */
.global m68k_eor_word_02029724
m68k_eor_word_02029724:
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
    eors       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029778 */
.global m68k_eor_long_02029778
m68k_eor_long_02029778:
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
    eors       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020297d0 */
.global m68k_eor_byte_020297d0
m68k_eor_byte_020297d0:
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
    eors       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029848 */
.global m68k_eor_word_02029848
m68k_eor_word_02029848:
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
    eors       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020298c0 */
.global m68k_eor_long_020298c0
m68k_eor_long_020298c0:
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
    eors       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202993c */
.global m68k_eor_byte_0202993c
m68k_eor_byte_0202993c:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    eors       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202997c */
.global m68k_eor_word_0202997c
m68k_eor_word_0202997c:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    eors       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020299bc */
.global m68k_eor_long_020299bc
m68k_eor_long_020299bc:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    eors       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029a00 */
.global m68k_eor_byte_02029a00
m68k_eor_byte_02029a00:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    eors       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029a44 */
.global m68k_eor_word_02029a44
m68k_eor_word_02029a44:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    eors       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029a88 */
.global m68k_eor_long_02029a88
m68k_eor_long_02029a88:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0xf
    eors       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029ad0 */
.global m68k_eori_byte_02029ad0
m68k_eori_byte_02029ad0:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    eors       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029b04 */
.global m68k_eori_word_02029b04
m68k_eori_word_02029b04:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    eors       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r6, r1]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029b3c */
.global m68k_eori_long_02029b3c
m68k_eori_long_02029b3c:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    eors       r5, r0, r5
    str        r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029b70 */
.global m68k_eori_byte_02029b70
m68k_eori_byte_02029b70:
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
    eors       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029bb8 */
.global m68k_eori_word_02029bb8
m68k_eori_word_02029bb8:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    eors       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029bfc */
.global m68k_eori_long_02029bfc
m68k_eori_long_02029bfc:
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
    eors       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029c50 */
.global m68k_eori_byte_02029c50
m68k_eori_byte_02029c50:
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
    eors       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029cac */
.global m68k_eori_word_02029cac
m68k_eori_word_02029cac:
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
    eors       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029cfc */
.global m68k_eori_long_02029cfc
m68k_eori_long_02029cfc:
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
    eors       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029d5c */
.global m68k_eori_byte_02029d5c
m68k_eori_byte_02029d5c:
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
    eors       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029db8 */
.global m68k_eori_word_02029db8
m68k_eori_word_02029db8:
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
    eors       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029e08 */
.global m68k_eori_long_02029e08
m68k_eori_long_02029e08:
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
    eors       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029e68 */
.global m68k_eori_byte_02029e68
m68k_eori_byte_02029e68:
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
    eors       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029eb8 */
.global m68k_eori_word_02029eb8
m68k_eori_word_02029eb8:
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
    eors       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029f04 */
.global m68k_eori_long_02029f04
m68k_eori_long_02029f04:
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
    eors       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x200000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029f60 */
.global m68k_eori_byte_02029f60
m68k_eori_byte_02029f60:
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
    eors       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02029fd4 */
.global m68k_eori_word_02029fd4
m68k_eori_word_02029fd4:
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
    eors       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a044 */
.global m68k_eori_long_0202a044
m68k_eori_long_0202a044:
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
    eors       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x220000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a0c4 */
.global m68k_eori_byte_0202a0c4
m68k_eori_byte_0202a0c4:
    ldrb       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    eors       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a100 */
.global m68k_eori_word_0202a100
m68k_eori_word_0202a100:
    ldrh       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    eors       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a138 */
.global m68k_eori_long_0202a138
m68k_eori_long_0202a138:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    eors       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x200000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a180 */
.global m68k_eori_byte_0202a180
m68k_eori_byte_0202a180:
    ldrb       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    eors       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a1c0 */
.global m68k_eori_word_0202a1c0
m68k_eori_word_0202a1c0:
    ldrh       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    eors       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a1fc */
.global m68k_eori_long_0202a1fc
m68k_eori_long_0202a1fc:
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
    eors       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x240000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a248 */
.global m68k_not_byte_0202a248
m68k_not_byte_0202a248:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    mvns       r5, r0, lsl #24
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x18
    orreq      r7, r7, #4
    strb       r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a274 */
.global m68k_not_word_0202a274
m68k_not_word_0202a274:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0xf
    mvns       r5, r0, lsl #16
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x10
    orreq      r7, r7, #4
    strh       r5, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a2a4 */
.global m68k_not_long_0202a2a4
m68k_not_long_0202a2a4:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    mvns       r5, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a2cc */
.global m68k_not_byte_0202a2cc
m68k_not_byte_0202a2cc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    mvns       r5, r0, lsl #24
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x18
    orreq      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a30c */
.global m68k_not_word_0202a30c
m68k_not_word_0202a30c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    mvns       r5, r0, lsl #16
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x10
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a348 */
.global m68k_not_long_0202a348
m68k_not_long_0202a348:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    mvns       r5, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a390 */
.global m68k_not_byte_0202a390
m68k_not_byte_0202a390:
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
    mvns       r5, r0, lsl #24
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x18
    orreq      r7, r7, #4
    strb       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a3e4 */
.global m68k_not_word_0202a3e4
m68k_not_word_0202a3e4:
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
    mvns       r5, r0, lsl #16
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x10
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a42c */
.global m68k_not_long_0202a42c
m68k_not_long_0202a42c:
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
    mvns       r5, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a480 */
.global m68k_not_byte_0202a480
m68k_not_byte_0202a480:
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
    mvns       r5, r0, lsl #24
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x18
    orreq      r7, r7, #4
    strb       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a4d4 */
.global m68k_not_word_0202a4d4
m68k_not_word_0202a4d4:
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
    mvns       r5, r0, lsl #16
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x10
    orreq      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a51c */
.global m68k_not_long_0202a51c
m68k_not_long_0202a51c:
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
    mvns       r5, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a570 */
.global m68k_not_byte_0202a570
m68k_not_byte_0202a570:
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
    mvns       r5, r0, lsl #24
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x18
    orreq      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a5b8 */
.global m68k_not_word_0202a5b8
m68k_not_word_0202a5b8:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    mvns       r5, r0, lsl #16
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x10
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a5fc */
.global m68k_not_long_0202a5fc
m68k_not_long_0202a5fc:
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
    mvns       r5, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a64c */
.global m68k_not_byte_0202a64c
m68k_not_byte_0202a64c:
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
    mvns       r5, r0, lsl #24
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x18
    orreq      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a6b8 */
.global m68k_not_word_0202a6b8
m68k_not_word_0202a6b8:
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
    mvns       r5, r0, lsl #16
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x10
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a720 */
.global m68k_not_long_0202a720
m68k_not_long_0202a720:
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
    mvns       r5, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a794 */
.global m68k_not_byte_0202a794
m68k_not_byte_0202a794:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    mvns       r5, r0, lsl #24
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x18
    orreq      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a7c8 */
.global m68k_not_word_0202a7c8
m68k_not_word_0202a7c8:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    mvns       r5, r0, lsl #16
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x10
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a7f8 */
.global m68k_not_long_0202a7f8
m68k_not_long_0202a7f8:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    mvns       r5, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a834 */
.global m68k_not_byte_0202a834
m68k_not_byte_0202a834:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0xf
    mvns       r5, r0, lsl #24
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x18
    orreq      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a86c */
.global m68k_not_word_0202a86c
m68k_not_word_0202a86c:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0xf
    mvns       r5, r0, lsl #16
    orrmi      r7, r7, #8
    lsrs       r5, r5, #0x10
    orreq      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a8a0 */
.global m68k_not_long_0202a8a0
m68k_not_long_0202a8a0:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0xf
    mvns       r5, r0
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a8e0 */
.global m68k_tst_byte_0202a8e0
m68k_tst_byte_0202a8e0:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a904 */
.global m68k_tst_word_0202a904
m68k_tst_word_0202a904:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a92c */
.global m68k_tst_long_0202a92c
m68k_tst_long_0202a92c:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a950 */
.global m68k_tst_byte_0202a950
m68k_tst_byte_0202a950:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    addeq      r1, r0, #2
    addne      r1, r0, #1
    str        r1, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a990 */
.global m68k_tst_word_0202a990
m68k_tst_word_0202a990:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202a9c8 */
.global m68k_tst_long_0202a9c8
m68k_tst_long_0202a9c8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202aa00 */
.global m68k_tst_byte_0202aa00
m68k_tst_byte_0202aa00:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202aa40 */
.global m68k_tst_word_0202aa40
m68k_tst_word_0202aa40:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202aa78 */
.global m68k_tst_long_0202aa78
m68k_tst_long_0202aa78:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202aab0 */
.global m68k_tst_byte_0202aab0
m68k_tst_byte_0202aab0:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202aae4 */
.global m68k_tst_word_0202aae4
m68k_tst_word_0202aae4:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ab18 */
.global m68k_tst_long_0202ab18
m68k_tst_long_0202ab18:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ab4c */
.global m68k_tst_byte_0202ab4c
m68k_tst_byte_0202ab4c:
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
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202aba4 */
.global m68k_tst_word_0202aba4
m68k_tst_word_0202aba4:
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
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202abfc */
.global m68k_tst_long_0202abfc
m68k_tst_long_0202abfc:
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
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ac54 */
.global m68k_unrecognized_opcode_0202ac54
m68k_unrecognized_opcode_0202ac54:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xd0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ac8c */
.global m68k_unrecognized_opcode_0202ac8c
m68k_unrecognized_opcode_0202ac8c:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xd0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202acc4 */
.global m68k_unrecognized_opcode_0202acc4
m68k_unrecognized_opcode_0202acc4:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x110000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202acfc */
.global m68k_unrecognized_opcode_0202acfc
m68k_unrecognized_opcode_0202acfc:
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
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xf0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ad5c */
.global m68k_unrecognized_opcode_0202ad5c
m68k_unrecognized_opcode_0202ad5c:
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
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xf0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202adbc */
.global m68k_unrecognized_opcode_0202adbc
m68k_unrecognized_opcode_0202adbc:
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
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x130000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ae1c */
.global m68k_shared_opcode_decode_0202ae1c
m68k_shared_opcode_decode_0202ae1c:
    ldr        r2, .L_0202aff4
    and        r1, r7, #0xf
    lsr        r3, fp, #4
    and        r3, r3, #0xf0
    add        r3, r3, r1
    ldrb       r1, [r2, r3]
    tst        r1, r1
    subne      r7, r7, #0x20000
    and        r2, fp, #7
    strb       r1, [r6, r2, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ae50 */
.global m68k_shared_opcode_decode_0202ae50
m68k_shared_opcode_decode_0202ae50:
    ldr        r2, .L_0202aff4
    and        r1, r7, #0xf
    lsr        r3, fp, #4
    and        r3, r3, #0xf0
    add        r3, r3, r1
    ldrb       r1, [r2, r3]
    add        r2, r6, #0x20
    and        r0, fp, #7
    ldr        r0, [r2, r0, lsl #2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202ae80 */
.global m68k_shared_opcode_decode_0202ae80
m68k_shared_opcode_decode_0202ae80:
    ldr        r2, .L_0202aff4
    and        r1, r7, #0xf
    lsr        r3, fp, #4
    and        r3, r3, #0xf0
    add        r3, r3, r1
    ldrb       r1, [r2, r3]
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    cmp        r3, #7
    addeq      r3, r0, #2
    addne      r3, r0, #1
    str        r3, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202aec4 */
.global m68k_shared_opcode_decode_0202aec4
m68k_shared_opcode_decode_0202aec4:
    ldr        r2, .L_0202aff4
    and        r1, r7, #0xf
    lsr        r3, fp, #4
    and        r3, r3, #0xf0
    add        r3, r3, r1
    ldrb       r1, [r2, r3]
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    cmp        r3, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202af08 */
.global m68k_shared_opcode_decode_0202af08
m68k_shared_opcode_decode_0202af08:
    ldr        r2, .L_0202aff4
    and        r1, r7, #0xf
    lsr        r3, fp, #4
    and        r3, r3, #0xf0
    add        r3, r3, r1
    ldrb       r1, [r2, r3]
    add        r2, r6, #0x20
    and        r3, fp, #7
    ldr        r0, [r2, r3, lsl #2]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202af40 */
.global m68k_shared_opcode_decode_0202af40
m68k_shared_opcode_decode_0202af40:
    ldr        r2, .L_0202aff4
    and        r1, r7, #0xf
    lsr        r3, fp, #4
    and        r3, r3, #0xf0
    add        r3, r3, r1
    ldrb       r1, [r2, r3]
    add        r2, r6, #0x20
    and        r3, fp, #7
    ldr        r0, [r2, r3, lsl #2]
    ldrh       r4, [sl], #2
    lsl        r3, r4, #0x18
    add        r0, r0, r3, asr #24
    tst        r4, #0x8000
    moveq      r2, r6
    and        r3, r4, #0x7000
    lsr        r3, r3, #0xa
    tst        r4, #0x800
    ldrsheq    r3, [r2, r3]
    ldrne      r3, [r2, r3]
    add        r0, r0, r3
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202af9c */
.global m68k_shared_opcode_decode_0202af9c
m68k_shared_opcode_decode_0202af9c:
    ldr        r2, .L_0202aff4
    and        r1, r7, #0xf
    lsr        r3, fp, #4
    and        r3, r3, #0xf0
    add        r3, r3, r1
    ldrb       r1, [r2, r3]
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202afc4 */
.global m68k_shared_opcode_decode_0202afc4
m68k_shared_opcode_decode_0202afc4:
    ldr        r2, .L_0202aff4
    and        r1, r7, #0xf
    lsr        r3, fp, #4
    and        r3, r3, #0xf0
    add        r3, r3, r1
    ldrb       r1, [r2, r3]
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4
.L_0202aff4:
    .word m68k_condition_and_rotate_tables
