/* 68000 instruction handlers in ARM9 main memory. 0x0201f39c–0x02021b7c. */


/* 0x0201f39c */
.global m68k_sub_word_0201f39c
m68k_sub_word_0201f39c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f3e8 */
.global m68k_sub_long_0201f3e8
m68k_sub_long_0201f3e8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f424 */
.global m68k_sub_byte_0201f424
m68k_sub_byte_0201f424:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f46c */
.global m68k_sub_word_0201f46c
m68k_sub_word_0201f46c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f4b8 */
.global m68k_sub_long_0201f4b8
m68k_sub_long_0201f4b8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f4f8 */
.global m68k_sub_byte_0201f4f8
m68k_sub_byte_0201f4f8:
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
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f554 */
.global m68k_sub_word_0201f554
m68k_sub_word_0201f554:
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
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f5ac */
.global m68k_sub_long_0201f5ac
m68k_sub_long_0201f5ac:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f5f8 */
.global m68k_sub_byte_0201f5f8
m68k_sub_byte_0201f5f8:
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
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f654 */
.global m68k_sub_word_0201f654
m68k_sub_word_0201f654:
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
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f6ac */
.global m68k_sub_long_0201f6ac
m68k_sub_long_0201f6ac:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f6f8 */
.global m68k_sub_byte_0201f6f8
m68k_sub_byte_0201f6f8:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f748 */
.global m68k_sub_word_0201f748
m68k_sub_word_0201f748:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f79c */
.global m68k_sub_long_0201f79c
m68k_sub_long_0201f79c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f7e4 */
.global m68k_sub_byte_0201f7e4
m68k_sub_byte_0201f7e4:
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
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f858 */
.global m68k_sub_word_0201f858
m68k_sub_word_0201f858:
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
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f8d0 */
.global m68k_sub_long_0201f8d0
m68k_sub_long_0201f8d0:
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
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f93c */
.global m68k_sub_byte_0201f93c
m68k_sub_byte_0201f93c:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f97c */
.global m68k_sub_word_0201f97c
m68k_sub_word_0201f97c:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f9c0 */
.global m68k_sub_long_0201f9c0
m68k_sub_long_0201f9c0:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f9f8 */
.global m68k_sub_byte_0201f9f8
m68k_sub_byte_0201f9f8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fa40 */
.global m68k_sub_word_0201fa40
m68k_sub_word_0201fa40:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fa8c */
.global m68k_sub_long_0201fa8c
m68k_sub_long_0201fa8c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201facc */
.global m68k_sub_byte_0201facc
m68k_sub_byte_0201facc:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fb20 */
.global m68k_sub_word_0201fb20
m68k_sub_word_0201fb20:
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
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fb78 */
.global m68k_sub_long_0201fb78
m68k_sub_long_0201fb78:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fbc4 */
.global m68k_sub_byte_0201fbc4
m68k_sub_byte_0201fbc4:
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
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fc40 */
.global m68k_sub_word_0201fc40
m68k_sub_word_0201fc40:
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
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fcc0 */
.global m68k_sub_long_0201fcc0
m68k_sub_long_0201fcc0:
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
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fd34 */
.global m68k_sub_byte_0201fd34
m68k_sub_byte_0201fd34:
    ldrb       r0, [sl], #2
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fd70 */
.global m68k_sub_word_0201fd70
m68k_sub_word_0201fd70:
    ldrh       r0, [sl], #2
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0x1f
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fdb0 */
.global m68k_sub_long_0201fdb0
m68k_sub_long_0201fdb0:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fdec */
.global m68k_sub_byte_0201fdec
m68k_sub_byte_0201fdec:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fe40 */
.global m68k_sub_word_0201fe40
m68k_sub_word_0201fe40:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201fe94 */
.global m68k_sub_long_0201fe94
m68k_sub_long_0201fe94:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201feec */
.global m68k_sub_byte_0201feec
m68k_sub_byte_0201feec:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ff54 */
.global m68k_sub_word_0201ff54
m68k_sub_word_0201ff54:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ffb4 */
.global m68k_sub_long_0201ffb4
m68k_sub_long_0201ffb4:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020018 */
.global m68k_sub_byte_02020018
m68k_sub_byte_02020018:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020080 */
.global m68k_sub_word_02020080
m68k_sub_word_02020080:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020200e0 */
.global m68k_sub_long_020200e0
m68k_sub_long_020200e0:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020144 */
.global m68k_sub_byte_02020144
m68k_sub_byte_02020144:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020201a0 */
.global m68k_sub_word_020201a0
m68k_sub_word_020201a0:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020201fc */
.global m68k_sub_long_020201fc
m68k_sub_long_020201fc:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202025c */
.global m68k_sub_byte_0202025c
m68k_sub_byte_0202025c:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020202dc */
.global m68k_sub_word_020202dc
m68k_sub_word_020202dc:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202035c */
.global m68k_sub_long_0202035c
m68k_sub_long_0202035c:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020203e0 */
.global m68k_sub_byte_020203e0
m68k_sub_byte_020203e0:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020428 */
.global m68k_sub_word_02020428
m68k_sub_word_02020428:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020470 */
.global m68k_sub_long_02020470
m68k_sub_long_02020470:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0x1f
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020204bc */
.global m68k_sub_byte_020204bc
m68k_sub_byte_020204bc:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020508 */
.global m68k_sub_word_02020508
m68k_sub_word_02020508:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020554 */
.global m68k_sub_long_02020554
m68k_sub_long_02020554:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0x1f
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020205a4 */
.global m68k_suba_word_020205a4
m68k_suba_word_020205a4:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsh      r0, [r6, r1]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020205d0 */
.global m68k_suba_long_020205d0
m68k_suba_long_020205d0:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020205f8 */
.global m68k_suba_word_020205f8
m68k_suba_word_020205f8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrsh      r0, [r2, r1]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020628 */
.global m68k_suba_long_02020628
m68k_suba_long_02020628:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020654 */
.global m68k_suba_word_02020654
m68k_suba_word_02020654:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202068c */
.global m68k_suba_long_0202068c
m68k_suba_long_0202068c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020206bc */
.global m68k_suba_word_020206bc
m68k_suba_word_020206bc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020700 */
.global m68k_suba_long_02020700
m68k_suba_long_02020700:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202073c */
.global m68k_suba_word_0202073c
m68k_suba_word_0202073c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020780 */
.global m68k_suba_long_02020780
m68k_suba_long_02020780:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020207bc */
.global m68k_suba_word_020207bc
m68k_suba_word_020207bc:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020207fc */
.global m68k_suba_long_020207fc
m68k_suba_long_020207fc:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020834 */
.global m68k_suba_word_02020834
m68k_suba_word_02020834:
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
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020898 */
.global m68k_suba_long_02020898
m68k_suba_long_02020898:
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
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020208f4 */
.global m68k_suba_word_020208f4
m68k_suba_word_020208f4:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020924 */
.global m68k_suba_long_02020924
m68k_suba_long_02020924:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202094c */
.global m68k_suba_word_0202094c
m68k_suba_word_0202094c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020984 */
.global m68k_suba_long_02020984
m68k_suba_long_02020984:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020209b4 */
.global m68k_suba_word_020209b4
m68k_suba_word_020209b4:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020209f8 */
.global m68k_suba_long_020209f8
m68k_suba_long_020209f8:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020a34 */
.global m68k_suba_word_02020a34
m68k_suba_word_02020a34:
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
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020aa0 */
.global m68k_suba_long_02020aa0
m68k_suba_long_02020aa0:
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
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020b04 */
.global m68k_suba_word_02020b04
m68k_suba_word_02020b04:
    ldrsh      r0, [sl], #2
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020b28 */
.global m68k_suba_long_02020b28
m68k_suba_long_02020b28:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    sub        r0, r1, r0
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020b54 */
.global m68k_subq_byte_02020b54
m68k_subq_byte_02020b54:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020bac */
.global m68k_subq_word_02020bac
m68k_subq_word_02020bac:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020c00 */
.global m68k_subq_long_02020c00
m68k_subq_long_02020c00:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020c5c */
.global m68k_subq_byte_02020c5c
m68k_subq_byte_02020c5c:
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
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020cc8 */
.global m68k_subq_word_02020cc8
m68k_subq_word_02020cc8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020d28 */
.global m68k_subq_long_02020d28
m68k_subq_long_02020d28:
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
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020d90 */
.global m68k_subq_byte_02020d90
m68k_subq_byte_02020d90:
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
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020dfc */
.global m68k_subq_word_02020dfc
m68k_subq_word_02020dfc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020e5c */
.global m68k_subq_long_02020e5c
m68k_subq_long_02020e5c:
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
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020ec4 */
.global m68k_subq_byte_02020ec4
m68k_subq_byte_02020ec4:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020f24 */
.global m68k_subq_word_02020f24
m68k_subq_word_02020f24:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020f80 */
.global m68k_subq_long_02020f80
m68k_subq_long_02020f80:
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
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02020fe4 */
.global m68k_subq_byte_02020fe4
m68k_subq_byte_02020fe4:
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
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021068 */
.global m68k_subq_word_02021068
m68k_subq_word_02021068:
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
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020210e8 */
.global m68k_subq_long_020210e8
m68k_subq_long_020210e8:
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
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021170 */
.global m68k_subq_byte_02021170
m68k_subq_byte_02021170:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020211bc */
.global m68k_subq_word_020211bc
m68k_subq_word_020211bc:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021204 */
.global m68k_subq_long_02021204
m68k_subq_long_02021204:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021254 */
.global m68k_subq_byte_02021254
m68k_subq_byte_02021254:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020212a4 */
.global m68k_subq_word_020212a4
m68k_subq_word_020212a4:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020212f0 */
.global m68k_subq_long_020212f0
m68k_subq_long_020212f0:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    subs       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021344 */
.global m68k_subi_byte_02021344
m68k_subi_byte_02021344:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021380 */
.global m68k_subi_word_02021380
m68k_subi_word_02021380:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r6, r1]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020213c0 */
.global m68k_subi_long_020213c0
m68k_subi_long_020213c0:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0x1f
    subs       r5, r0, r5
    str        r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020213fc */
.global m68k_subi_byte_020213fc
m68k_subi_byte_020213fc:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202144c */
.global m68k_subi_word_0202144c
m68k_subi_word_0202144c:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021498 */
.global m68k_subi_long_02021498
m68k_subi_long_02021498:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020214f4 */
.global m68k_subi_byte_020214f4
m68k_subi_byte_020214f4:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021558 */
.global m68k_subi_word_02021558
m68k_subi_word_02021558:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020215b0 */
.global m68k_subi_long_020215b0
m68k_subi_long_020215b0:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021618 */
.global m68k_subi_byte_02021618
m68k_subi_byte_02021618:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202167c */
.global m68k_subi_word_0202167c
m68k_subi_word_0202167c:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020216d4 */
.global m68k_subi_long_020216d4
m68k_subi_long_020216d4:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202173c */
.global m68k_subi_byte_0202173c
m68k_subi_byte_0202173c:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021794 */
.global m68k_subi_word_02021794
m68k_subi_word_02021794:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020217e8 */
.global m68k_subi_long_020217e8
m68k_subi_long_020217e8:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x200000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202184c */
.global m68k_subi_byte_0202184c
m68k_subi_byte_0202184c:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020218c8 */
.global m68k_subi_word_020218c8
m68k_subi_word_020218c8:
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
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021940 */
.global m68k_subi_long_02021940
m68k_subi_long_02021940:
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
    bic        r7, r7, #0x1f
    subs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x220000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020219c8 */
.global m68k_subi_byte_020219c8
m68k_subi_byte_020219c8:
    ldrb       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021a0c */
.global m68k_subi_word_02021a0c
m68k_subi_word_02021a0c:
    ldrh       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021a4c */
.global m68k_subi_long_02021a4c
m68k_subi_long_02021a4c:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0x1f
    subs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x200000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021a9c */
.global m68k_subi_byte_02021a9c
m68k_subi_byte_02021a9c:
    ldrb       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    subs       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021ae4 */
.global m68k_subi_word_02021ae4
m68k_subi_word_02021ae4:
    ldrh       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    subs       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021b28 */
.global m68k_subi_long_02021b28
m68k_subi_long_02021b28:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0x1f
    subs       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x240000
    ldr        pc, [sb, fp, lsl #2]
