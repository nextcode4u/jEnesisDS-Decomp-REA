/* 68000 instruction handlers in ARM9 main memory. 0x0202fe48–0x02030fa8. */


/* 0x0202fe48 */
.global m68k_movep_word_0202fe48
m68k_movep_word_0202fe48:
    add        r3, r6, #0x20
    ldrsh      r5, [sl], #2
    and        r1, fp, #7
    ldr        r0, [r3, r1, lsl #2]
    add        r0, r0, r5
    add        r5, r0, #2
    bl         read_m68k_bus_byte
    and        r4, r0, #0xff
    mov        r0, r5
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    lsr        r1, r1, #7
    and        r0, r0, #0xff
    orr        r0, r0, r4, lsl #8
    strh       r0, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202fe90 */
.global m68k_movep_long_0202fe90
m68k_movep_long_0202fe90:
    add        r3, r6, #0x20
    ldrsh      r5, [sl], #2
    and        r1, fp, #7
    ldr        r4, [r3, r1, lsl #2]
    add        r4, r4, r5
    mov        r0, r4
    bl         read_m68k_bus_byte
    lsl        r5, r0, #0x18
    add        r0, r4, #2
    bl         read_m68k_bus_byte
    and        r0, r0, #0xff
    orr        r5, r5, r0, lsl #16
    add        r0, r4, #4
    bl         read_m68k_bus_byte
    and        r0, r0, #0xff
    orr        r5, r5, r0, lsl #8
    add        r0, r4, #6
    bl         read_m68k_bus_byte
    and        r0, r0, #0xff
    orr        r5, r5, r0
    and        r1, fp, #0xe00
    str        r5, [r6, r1, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202fef4 */
.global m68k_movep_word_0202fef4
m68k_movep_word_0202fef4:
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r4, [r6, r2]
    add        r3, r6, #0x20
    ldrsh      r5, [sl], #2
    and        r2, fp, #7
    ldr        r0, [r3, r2, lsl #2]
    lsr        r1, r4, #8
    add        r0, r0, r5
    add        r5, r0, #2
    bl         write_m68k_bus_byte
    mov        r0, r5
    and        r1, r4, #0xff
    bl         write_m68k_bus_byte
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ff38 */
.global m68k_movep_long_0202ff38
m68k_movep_long_0202ff38:
    and        r2, fp, #0xe00
    ldr        r4, [r6, r2, lsr #7]
    add        r3, r6, #0x20
    ldrsh      r5, [sl], #2
    and        r2, fp, #7
    ldr        r0, [r3, r2, lsl #2]
    lsr        r1, r4, #0x18
    add        r5, r0, r5
    mov        r0, r5
    bl         write_m68k_bus_byte
    add        r0, r5, #2
    lsr        r1, r4, #0x10
    and        r1, r1, #0xff
    bl         write_m68k_bus_byte
    add        r0, r5, #4
    lsr        r1, r4, #8
    and        r1, r1, #0xff
    bl         write_m68k_bus_byte
    add        r0, r5, #6
    and        r1, r4, #0xff
    bl         write_m68k_bus_byte
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ff98 */
.global m68k_exg_long_0202ff98
m68k_exg_long_0202ff98:
    and        r2, fp, #0xe00
    ldr        r4, [r6, r2, lsr #7]
    and        r1, fp, #7
    ldr        r3, [r6, r1, lsl #2]
    str        r4, [r6, r1, lsl #2]
    str        r3, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ffbc */
.global m68k_exg_long_0202ffbc
m68k_exg_long_0202ffbc:
    add        r5, r6, #0x20
    and        r2, fp, #0xe00
    ldr        r4, [r5, r2, lsr #7]
    and        r1, fp, #7
    ldr        r3, [r5, r1, lsl #2]
    str        r4, [r5, r1, lsl #2]
    str        r3, [r5, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202ffe4 */
.global m68k_exg_long_0202ffe4
m68k_exg_long_0202ffe4:
    and        r2, fp, #0xe00
    ldr        r4, [r6, r2, lsr #7]
    and        r1, fp, #7
    add        r5, r6, #0x20
    ldr        r3, [r5, r1, lsl #2]
    str        r4, [r5, r1, lsl #2]
    str        r3, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203000c */
.global m68k_link_word
m68k_link_word:
    add        r2, r6, #0x20
    ldr        r4, [r6, #0x3c]
    and        r1, fp, #7
    add        r2, r2, r1, lsl #2
    sub        r4, r4, #4
    ldr        r0, [r2]
    lsl        r3, r4, #0x10
    add        r5, r8, r3, lsr #16
    ldrsh      r1, [sl], #2
    lsr        r3, r0, #0x10
    strh       r3, [r5], #2
    strh       r0, [r5]
    add        r1, r4, r1
    str        r4, [r2]
    str        r1, [r6, #0x3c]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030054 */
.global m68k_unlk
m68k_unlk:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r4, [r2]
    lsl        r3, r4, #0x10
    add        r5, r8, r3, lsr #16
    ldrh       r1, [r5], #2
    ldrh       r3, [r5]
    orr        r3, r3, r1, lsl #16
    str        r3, [r2]
    add        r4, r4, #4
    str        r4, [r6, #0x3c]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030090 */
.global m68k_addq_byte_02030090
m68k_addq_byte_02030090:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    adds       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r6, r1, lsl #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020300d4 */
.global m68k_addq_word_020300d4
m68k_addq_word_020300d4:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r6, r1]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203011c */
.global m68k_addq_long_0203011c
m68k_addq_long_0203011c:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    adds       r5, r0, r4
    str        r5, [r6, r1, lsl #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030158 */
.global m68k_addq_word_or_addq_long
m68k_addq_word_or_addq_long:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    add        r5, r0, r4
    str        r5, [r2, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030184 */
.global m68k_addx_byte_02030184
m68k_addx_byte_02030184:
    and        r0, fp, #7
    ldrb       r0, [r6, r0, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    tst        r7, #0x10
    bne        .L_020301cc
    bic        r7, r7, #0x1b
    lsl        r0, r0, #0x18
    adds       r5, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r5, r5, #0x18
    strb       r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]
.L_020301cc:
    bic        r7, r7, #0x1b
    lsl        r3, r0, #0x18
    adds       r3, r3, #0x1000000
    orrhs      r7, r7, #0x11
    adds       r5, r3, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    bicne      r7, r7, #4
    eor        r0, r5, r0, lsl #24
    eor        r1, r5, r1, lsl #24
    and        r0, r1, r0
    tst        r0, #0x80000000
    orrne      r7, r7, #2
    lsr        r5, r5, #0x18
    strb       r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030214 */
.global m68k_addx_word_02030214
m68k_addx_word_02030214:
    and        r0, fp, #7
    lsl        r0, r0, #2
    ldrh       r0, [r6, r0]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    tst        r7, #0x10
    bne        .L_02030264
    bic        r7, r7, #0x1b
    lsl        r0, r0, #0x10
    adds       r5, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r5, r5, #0x10
    strh       r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]
.L_02030264:
    bic        r7, r7, #0x1b
    lsl        r3, r0, #0x10
    adds       r3, r3, #0x10000
    orrhs      r7, r7, #0x11
    adds       r5, r3, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    bicne      r7, r7, #4
    eor        r0, r5, r0, lsl #16
    eor        r1, r5, r1, lsl #16
    and        r0, r1, r0
    tst        r0, #0x80000000
    orrne      r7, r7, #2
    lsr        r5, r5, #0x10
    strh       r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020302ac */
.global m68k_addx_long_020302ac
m68k_addx_long_020302ac:
    and        r0, fp, #7
    ldr        r0, [r6, r0, lsl #2]
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    tst        r7, #0x10
    bne        .L_020302ec
    bic        r7, r7, #0x1b
    adds       r5, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    str        r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_020302ec:
    bic        r7, r7, #0x1b
    adds       r3, r0, #1
    orrhs      r7, r7, #0x11
    adds       r5, r3, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    bicne      r7, r7, #4
    eor        r0, r5, r0
    eor        r1, r5, r1
    and        r0, r1, r0
    tst        r0, #0x80000000
    orrne      r7, r7, #2
    str        r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203032c */
.global m68k_addx_byte_0203032c
m68k_addx_byte_0203032c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r4, r2, r1, lsl #2
    ldr        r0, [r4]
    tst        r0, #0xc00000
    moveq      r3, r8
    ldreq      r3, [r6, #0x60]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r4]
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r4, r3, r0, lsr #16
    lsleq      r0, r0, #0xa
    addeq      r4, r3, r0, lsr #10
    eor        r4, r4, #1
    ldrb       r0, [r4]
    and        r1, fp, #0xe00
    add        r1, r2, r1, lsr #7
    ldr        r2, [r1]
    cmp        r1, #0xe00
    subeq      r2, r2, #2
    subne      r2, r2, #1
    str        r2, [r1]
    lsl        r2, r2, #0x10
    add        r2, r8, r2, lsr #16
    eor        r2, r2, #1
    ldrb       r1, [r2]
    tst        r7, #0x10
    bne        .L_020303d8
    bic        r7, r7, #0x1b
    lsl        r0, r0, #0x18
    adds       r5, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]
.L_020303d8:
    bic        r7, r7, #0x1b
    lsl        r3, r0, #0x18
    adds       r3, r3, #0x1000000
    orrhs      r7, r7, #0x11
    adds       r5, r3, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    bicne      r7, r7, #4
    eor        r0, r5, r0, lsl #24
    eor        r1, r5, r1, lsl #24
    and        r0, r1, r0
    tst        r0, #0x80000000
    orrne      r7, r7, #2
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030420 */
.global m68k_addx_word_02030420
m68k_addx_word_02030420:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r4, r2, r1, lsl #2
    ldr        r0, [r4]
    tst        r0, #0xc00000
    movne      r3, r8
    ldreq      r3, [r6, #0x60]
    sub        r0, r0, #2
    str        r0, [r4]
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r4, r3, r0, lsr #16
    lsleq      r0, r0, #0xa
    addeq      r4, r3, r0, lsr #10
    ldrh       r0, [r4]
    and        r1, fp, #0xe00
    add        r1, r2, r1, lsr #7
    ldr        r2, [r1]
    sub        r2, r2, #2
    str        r2, [r1]
    lsl        r2, r2, #0x10
    add        r2, r8, r2, lsr #16
    ldrh       r1, [r2]
    tst        r7, #0x10
    bne        .L_020304b4
    bic        r7, r7, #0x1b
    lsl        r0, r0, #0x10
    adds       r5, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]
.L_020304b4:
    bic        r7, r7, #0x1b
    lsl        r3, r0, #0x10
    adds       r3, r3, #0x10000
    orrhs      r7, r7, #0x11
    adds       r5, r3, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    bicne      r7, r7, #4
    eor        r0, r5, r0, lsl #16
    eor        r1, r5, r1, lsl #16
    and        r0, r1, r0
    tst        r0, #0x80000000
    orrne      r7, r7, #2
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020304fc */
.global m68k_addx_long_020304fc
m68k_addx_long_020304fc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r4, r2, r1, lsl #2
    ldr        r0, [r4]
    tst        r0, #0xc00000
    movne      r3, r8
    ldreq      r3, [r6, #0x60]
    sub        r0, r0, #4
    str        r0, [r4]
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r4, r3, r0, lsr #16
    lsleq      r0, r0, #0xa
    addeq      r4, r3, r0, lsr #10
    ldrh       r0, [r4]
    ldrh       r5, [r4, #2]
    and        r1, fp, #0xe00
    add        r1, r2, r1, lsr #7
    ldr        r2, [r1]
    sub        r2, r2, #4
    str        r2, [r1]
    lsl        r2, r2, #0x10
    add        r2, r8, r2, lsr #16
    ldrh       r1, [r2]
    ldrh       r3, [r2, #2]
    orr        r0, r5, r0, lsl #16
    orr        r1, r3, r1, lsl #16
    tst        r7, #0x10
    bne        .L_020305a0
    bic        r7, r7, #0x1b
    adds       r5, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r3, r5, #0x10
    strh       r3, [r2]
    strh       r5, [r2, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]
.L_020305a0:
    bic        r7, r7, #0x1b
    adds       r3, r0, #1
    orrhs      r7, r7, #0x11
    adds       r5, r3, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    bicne      r7, r7, #4
    eor        r0, r5, r0
    eor        r1, r5, r1
    and        r0, r1, r0
    tst        r0, #0x80000000
    orrne      r7, r7, #2
    lsr        r3, r5, #0x10
    strh       r3, [r2]
    strh       r5, [r2, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020305e8 */
.global m68k_subq_byte_020305e8
m68k_subq_byte_020305e8:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    subs       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r6, r1, lsl #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203062c */
.global m68k_subq_word_0203062c
m68k_subq_word_0203062c:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    subs       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r6, r1]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030674 */
.global m68k_subq_long_02030674
m68k_subq_long_02030674:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    subs       r5, r0, r4
    str        r5, [r6, r1, lsl #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020306b0 */
.global m68k_subq_word_or_subq_long
m68k_subq_word_or_subq_long:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    sub        r5, r0, r4
    str        r5, [r2, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020306dc */
.global m68k_subx_byte_020306dc
m68k_subx_byte_020306dc:
    and        r0, fp, #7
    ldrb       r0, [r6, r0, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    tst        r7, #0x10
    bne        .L_02030724
    bic        r7, r7, #0x1b
    lsl        r1, r1, #0x18
    subs       r5, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r5, r5, #0x18
    strb       r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]
.L_02030724:
    bic        r7, r7, #0x1b
    lsl        r3, r1, #0x18
    subs       r3, r3, #0x1000000
    orrlo      r7, r7, #0x11
    subs       r5, r3, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    bicne      r7, r7, #4
    lsr        r5, r5, #0x18
    eor        r0, r0, r1
    eor        r1, r5, r1
    and        r0, r1, r0
    tst        r0, #0x80
    orrne      r7, r7, #2
    strb       r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203076c */
.global m68k_subx_word_0203076c
m68k_subx_word_0203076c:
    and        r0, fp, #7
    lsl        r0, r0, #2
    ldrh       r0, [r6, r0]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    tst        r7, #0x10
    bne        .L_020307bc
    bic        r7, r7, #0x1b
    lsl        r1, r1, #0x10
    subs       r5, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r5, r5, #0x10
    strh       r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]
.L_020307bc:
    bic        r7, r7, #0x1b
    lsl        r3, r1, #0x10
    subs       r3, r3, #0x10000
    orrlo      r7, r7, #0x11
    subs       r5, r3, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    bicne      r7, r7, #4
    lsr        r5, r5, #0x10
    eor        r0, r0, r1
    eor        r1, r5, r1
    and        r0, r1, r0
    tst        r0, #0x8000
    orrne      r7, r7, #2
    strh       r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030804 */
.global m68k_subx_long_02030804
m68k_subx_long_02030804:
    and        r0, fp, #7
    ldr        r0, [r6, r0, lsl #2]
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    tst        r7, #0x10
    bne        .L_02030844
    bic        r7, r7, #0x1b
    subs       r5, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    str        r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]
.L_02030844:
    bic        r7, r7, #0x1b
    subs       r3, r1, #1
    orrlo      r7, r7, #0x11
    subs       r5, r3, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    bicne      r7, r7, #4
    eor        r0, r0, r1
    eor        r1, r5, r1
    and        r0, r1, r0
    tst        r0, #0x80000000
    orrne      r7, r7, #2
    str        r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030884 */
.global m68k_subx_byte_02030884
m68k_subx_byte_02030884:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r4, r2, r1, lsl #2
    ldr        r0, [r4]
    tst        r0, #0xc00000
    movne      r3, r8
    ldreq      r3, [r6, #0x60]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r4]
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r4, r3, r0, lsr #16
    lsleq      r0, r0, #0xa
    addeq      r4, r3, r0, lsr #10
    eor        r4, r4, #1
    ldrb       r0, [r4]
    and        r1, fp, #0xe00
    add        r1, r2, r1, lsr #7
    ldr        r2, [r1]
    cmp        r1, #0xe00
    subeq      r2, r2, #2
    subne      r2, r2, #1
    str        r2, [r1]
    lsl        r2, r2, #0x10
    add        r2, r8, r2, lsr #16
    eor        r2, r2, #1
    ldrb       r1, [r2]
    tst        r7, #0x10
    bne        .L_02030930
    bic        r7, r7, #0x1b
    lsl        r1, r1, #0x18
    subs       r5, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]
.L_02030930:
    bic        r7, r7, #0x1b
    lsl        r3, r1, #0x18
    subs       r3, r3, #0x1000000
    orrlo      r7, r7, #0x11
    subs       r5, r3, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    bicne      r7, r7, #4
    lsr        r5, r5, #0x18
    eor        r0, r0, r1
    eor        r1, r5, r1
    and        r0, r1, r0
    tst        r0, #0x80
    orrne      r7, r7, #2
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030978 */
.global m68k_subx_word_02030978
m68k_subx_word_02030978:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r4, r2, r1, lsl #2
    ldr        r0, [r4]
    tst        r0, #0xc00000
    movne      r3, r8
    ldreq      r3, [r6, #0x60]
    sub        r0, r0, #2
    str        r0, [r4]
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r4, r3, r0, lsr #16
    lsleq      r0, r0, #0xa
    addeq      r4, r3, r0, lsr #10
    ldrh       r0, [r4]
    and        r1, fp, #0xe00
    add        r1, r2, r1, lsr #7
    ldr        r2, [r1]
    sub        r2, r2, #2
    str        r2, [r1]
    lsl        r2, r2, #0x10
    add        r2, r8, r2, lsr #16
    ldrh       r1, [r2]
    tst        r7, #0x10
    bne        .L_02030a0c
    bic        r7, r7, #0x1b
    lsl        r1, r1, #0x10
    subs       r5, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]
.L_02030a0c:
    bic        r7, r7, #0x1b
    lsl        r3, r1, #0x10
    subs       r3, r3, #0x10000
    orrlo      r7, r7, #0x11
    subs       r5, r3, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    bicne      r7, r7, #4
    lsr        r5, r5, #0x10
    eor        r0, r0, r1
    eor        r1, r5, r1
    and        r0, r1, r0
    tst        r0, #0x8000
    orrne      r7, r7, #2
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030a54 */
.global m68k_subx_long_02030a54
m68k_subx_long_02030a54:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r4, r2, r1, lsl #2
    ldr        r0, [r4]
    tst        r0, #0xc00000
    movne      r3, r8
    ldreq      r3, [r6, #0x60]
    sub        r0, r0, #4
    str        r0, [r4]
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r4, r3, r0, lsr #16
    lsleq      r0, r0, #0xa
    addeq      r4, r3, r0, lsr #10
    ldrh       r0, [r4]
    ldrh       r5, [r4, #2]
    and        r1, fp, #0xe00
    add        r1, r2, r1, lsr #7
    ldr        r2, [r1]
    sub        r2, r2, #4
    str        r2, [r1]
    lsl        r2, r2, #0x10
    add        r2, r8, r2, lsr #16
    ldrh       r1, [r2]
    ldrh       r3, [r2, #2]
    orr        r0, r5, r0, lsl #16
    orr        r1, r3, r1, lsl #16
    tst        r7, #0x10
    bne        .L_02030af8
    bic        r7, r7, #0x1b
    subs       r5, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    lsr        r3, r5, #0x10
    strh       r3, [r2]
    strh       r5, [r2, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]
.L_02030af8:
    bic        r7, r7, #0x1b
    subs       r3, r1, #1
    orrlo      r7, r7, #0x11
    subs       r5, r3, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    bicne      r7, r7, #4
    eor        r0, r0, r1
    eor        r1, r5, r1
    and        r0, r1, r0
    tst        r0, #0x80000000
    orrne      r7, r7, #2
    lsr        r3, r5, #0x10
    strh       r3, [r2]
    strh       r5, [r2, #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030b40 */
.global m68k_cmpm_byte
m68k_cmpm_byte:
    add        r5, r6, #0x20
    and        r1, fp, #7
    cmp        r1, #7
    ldr        r0, [r5, r1, lsl #2]
    addeq      r3, r0, #2
    addne      r3, r0, #1
    str        r3, [r5, r1, lsl #2]
    bl         read_m68k_bus_byte
    and        r1, fp, #0xe00
    cmp        r1, #0xe00
    lsl        r4, r0, #0x18
    ldr        r0, [r5, r1, lsr #7]
    addeq      r3, r0, #2
    addne      r3, r0, #1
    str        r3, [r5, r1, lsr #7]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    subs       r0, r0, r4
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030ba8 */
.global m68k_cmpm_word
m68k_cmpm_word:
    add        r5, r6, #0x20
    and        r1, fp, #7
    ldr        r0, [r5, r1, lsl #2]
    add        r3, r0, #2
    str        r3, [r5, r1, lsl #2]
    bl         read_m68k_bus_word
    and        r1, fp, #0xe00
    lsl        r4, r0, #0x10
    ldr        r0, [r5, r1, lsr #7]
    add        r3, r0, #2
    str        r3, [r5, r1, lsr #7]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r4
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030c00 */
.global m68k_cmpm_long
m68k_cmpm_long:
    add        r5, r6, #0x20
    and        r1, fp, #7
    ldr        r0, [r5, r1, lsl #2]
    add        r3, r0, #4
    str        r3, [r5, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r1, fp, #0xe00
    mov        r4, r0
    ldr        r0, [r5, r1, lsr #7]
    add        r3, r0, #4
    str        r3, [r5, r1, lsr #7]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    subs       r0, r0, r4
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030c54 */
.global m68k_ext_word
m68k_ext_word:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsb      r2, [r6, r1]
    bic        r7, r7, #0xf
    lsls       r3, r2, #0x10
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    strh       r2, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030c80 */
.global m68k_ext_long
m68k_ext_long:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsh      r2, [r6, r1]
    bic        r7, r7, #0xf
    movs       r3, r2
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    str        r2, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030cac */
.global m68k_abcd_byte_02030cac
m68k_abcd_byte_02030cac:
    and        r0, fp, #7
    ldrb       r0, [r6, r0, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    tst        r7, #0x10
    bic        r7, r7, #0x1b
    add        r3, r0, r1
    addne      r3, r3, #1
    and        r4, r1, #0xf
    and        r5, r0, #0xf
    add        r5, r4, r5
    addne      r5, r5, #1
    cmp        r5, #9
    addgt      r5, r5, #6
    and        r0, r0, #0xf0
    and        r1, r1, #0xf0
    add        r5, r5, r0
    add        r5, r5, r1
    cmp        r5, #0x99
    subgt      r5, r5, #0xa0
    orrgt      r7, r7, #0x11
    lsls       r4, r5, #0x18
    orrmi      r7, r7, #8
    bicne      r7, r7, #4
    eormi      r3, r3, #0x80
    lslsmi     r3, r3, #0x18
    eormi      r7, r7, #2
    strb       r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030d28 */
.global m68k_abcd_byte_02030d28
m68k_abcd_byte_02030d28:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r4, r2, r1, lsl #2
    ldr        r0, [r4]
    tst        r0, #0xc00000
    movne      r3, r8
    ldreq      r3, [r6, #0x60]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r4]
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r4, r3, r0, lsr #16
    lsleq      r0, r0, #0xa
    addeq      r4, r3, r0, lsr #10
    eor        r4, r4, #1
    ldrb       r0, [r4]
    and        r1, fp, #0xe00
    add        r1, r2, r1, lsr #7
    ldr        r2, [r1]
    cmp        r1, #0xe00
    subeq      r2, r2, #2
    subne      r2, r2, #1
    str        r2, [r1]
    lsl        r2, r2, #0x10
    add        r2, r8, r2, lsr #16
    eor        r2, r2, #1
    ldrb       r1, [r2]
    tst        r7, #0x10
    bic        r7, r7, #0x1b
    add        r3, r0, r1
    addne      r3, r3, #1
    and        r4, r1, #0xf
    and        r5, r0, #0xf
    add        r5, r4, r5
    addne      r5, r5, #1
    cmp        r5, #9
    addgt      r5, r5, #6
    and        r0, r0, #0xf0
    and        r1, r1, #0xf0
    add        r5, r5, r0
    add        r5, r5, r1
    cmp        r5, #0x99
    subgt      r5, r5, #0xa0
    orrgt      r7, r7, #0x11
    lsls       r4, r5, #0x18
    orrmi      r7, r7, #8
    bicne      r7, r7, #4
    eormi      r3, r3, #0x80
    lslsmi     r3, r3, #0x18
    eormi      r7, r7, #2
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030e08 */
.global m68k_sbcd_byte
m68k_sbcd_byte:
    and        r0, fp, #7
    ldrb       r0, [r6, r0, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    tst        r7, #0x10
    bic        r7, r7, #0x1b
    sub        r3, r1, r0
    subne      r3, r3, #1
    and        r4, r1, #0xf
    and        r5, r0, #0xf
    sub        r5, r4, r5
    subne      r5, r5, #1
    and        r4, r5, #0xff
    cmp        r4, #9
    subgt      r5, r5, #6
    and        r0, r0, #0xf0
    and        r1, r1, #0xf0
    sub        r4, r1, r0
    add        r5, r5, r4
    lsl        r5, r5, #0x10
    lsr        r5, r5, #0x10
    cmp        r5, #0x99
    addgt      r5, r5, #0xa0
    orrgt      r7, r7, #0x11
    lsls       r4, r5, #0x18
    orrmi      r7, r7, #8
    bicne      r7, r7, #4
    eorpl      r3, r3, #0x80
    lslspl     r3, r3, #0x18
    eorpl      r7, r7, #2
    strb       r5, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030e90 */
.global m68k_sbcd
m68k_sbcd:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r4, r2, r1, lsl #2
    ldr        r0, [r4]
    tst        r0, #0xc00000
    movne      r3, r8
    ldreq      r3, [r6, #0x60]
    cmp        r1, #7
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r4]
    tst        r0, #0xc00000
    lslne      r0, r0, #0x10
    addne      r4, r3, r0, lsr #16
    lsleq      r0, r0, #0xa
    addeq      r4, r3, r0, lsr #10
    eor        r4, r4, #1
    ldrb       r0, [r4]
    and        r1, fp, #0xe00
    cmp        r1, #0xe00
    add        r1, r2, r1, lsr #7
    ldr        r2, [r1]
    subeq      r2, r2, #2
    subne      r2, r2, #1
    str        r2, [r1]
    lsl        r2, r2, #0x10
    add        r2, r8, r2, lsr #16
    eor        r2, r2, #1
    ldrb       r1, [r2]
    tst        r7, #0x10
    bic        r7, r7, #0x1b
    sub        r3, r1, r0
    subne      r3, r3, #1
    and        r4, r1, #0xf
    and        r5, r0, #0xf
    sub        r5, r4, r5
    subne      r5, r5, #1
    and        r4, r5, #0xff
    cmp        r4, #9
    subgt      r5, r5, #6
    and        r0, r0, #0xf0
    and        r1, r1, #0xf0
    sub        r4, r1, r0
    add        r5, r5, r4
    lsl        r5, r5, #0x10
    lsr        r5, r5, #0x10
    cmp        r5, #0x99
    addgt      r5, r5, #0xa0
    orrgt      r7, r7, #0x11
    lsls       r4, r5, #0x18
    orrmi      r7, r7, #8
    bicne      r7, r7, #4
    eorpl      r3, r3, #0x80
    lslspl     r3, r3, #0x18
    eorpl      r7, r7, #2
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02030f7c */
.global m68k_swap
m68k_swap:
    and        r1, fp, #7
    ldr        r2, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    lsl        r3, r2, #0x10
    orrs       r3, r3, r2, lsr #16
    str        r3, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]
