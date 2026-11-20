/* 68000 instruction handlers in ARM9 main memory. 0x020245bc–0x02026308. */


/* 0x020245bc */
.global m68k_clr_byte_020245bc
m68k_clr_byte_020245bc:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    and        r2, fp, #7
    strb       r1, [r6, r2, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020245dc */
.global m68k_clr_word_020245dc
m68k_clr_word_020245dc:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    and        r2, fp, #7
    lsl        r2, r2, #2
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024600 */
.global m68k_clr_long_02024600
m68k_clr_long_02024600:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    and        r2, fp, #7
    str        r1, [r6, r2, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024620 */
.global m68k_clr_byte_02024620
m68k_clr_byte_02024620:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r0, fp, #7
    ldr        r0, [r2, r0, lsl #2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02024644 */
.global m68k_clr_word_02024644
m68k_clr_word_02024644:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r0, fp, #7
    ldr        r0, [r2, r0, lsl #2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02024668 */
.global m68k_clr_long_02024668
m68k_clr_long_02024668:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r0, fp, #7
    ldr        r0, [r2, r0, lsl #2]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0202468c */
.global m68k_clr_byte_0202468c
m68k_clr_byte_0202468c:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
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

/* 0x020246c4 */
.global m68k_clr_word_020246c4
m68k_clr_word_020246c4:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x020246f4 */
.global m68k_clr_long_020246f4
m68k_clr_long_020246f4:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    add        r3, r0, #4
    str        r3, [r2]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02024724 */
.global m68k_clr_byte_02024724
m68k_clr_byte_02024724:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
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

/* 0x0202475c */
.global m68k_clr_word_0202475c
m68k_clr_word_0202475c:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0202478c */
.global m68k_clr_long_0202478c
m68k_clr_long_0202478c:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r3, fp, #7
    add        r2, r2, r3, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    sub        r7, r7, #0x160000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020247bc */
.global m68k_clr_byte_020247bc
m68k_clr_byte_020247bc:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r3, fp, #7
    ldr        r0, [r2, r3, lsl #2]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020247e8 */
.global m68k_clr_word_020247e8
m68k_clr_word_020247e8:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r3, fp, #7
    ldr        r0, [r2, r3, lsl #2]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02024814 */
.global m68k_clr_long_02024814
m68k_clr_long_02024814:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    add        r2, r6, #0x20
    and        r3, fp, #7
    ldr        r0, [r2, r3, lsl #2]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02024840 */
.global m68k_clr_byte_02024840
m68k_clr_byte_02024840:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
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

/* 0x02024890 */
.global m68k_clr_word_02024890
m68k_clr_word_02024890:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
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
    b          address_01004214

/* 0x020248e0 */
.global m68k_clr_long_020248e0
m68k_clr_long_020248e0:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
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
    sub        r7, r7, #0x1a0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02024930 */
.global m68k_clr_byte_02024930
m68k_clr_byte_02024930:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0202494c */
.global m68k_clr_word_0202494c
m68k_clr_word_0202494c:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02024968 */
.global m68k_clr_long_02024968
m68k_clr_long_02024968:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02024984 */
.global m68k_clr_byte_02024984
m68k_clr_byte_02024984:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020249a8 */
.global m68k_clr_word_020249a8
m68k_clr_word_020249a8:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x020249cc */
.global m68k_clr_long_020249cc
m68k_clr_long_020249cc:
    mov        r1, #0
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020249f0 */
.global m68k_mulu_word_020249f0
m68k_mulu_word_020249f0:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x360000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024a28 */
.global m68k_mulu_word_02024a28
m68k_mulu_word_02024a28:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024a64 */
.global m68k_mulu_word_02024a64
m68k_mulu_word_02024a64:
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
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024aac */
.global m68k_mulu_word_02024aac
m68k_mulu_word_02024aac:
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
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024af4 */
.global m68k_mulu_word_02024af4
m68k_mulu_word_02024af4:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024b38 */
.global m68k_mulu_word_02024b38
m68k_mulu_word_02024b38:
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
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x400000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024ba0 */
.global m68k_mulu_word_02024ba0
m68k_mulu_word_02024ba0:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024bd4 */
.global m68k_mulu_word_02024bd4
m68k_mulu_word_02024bd4:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x420000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024c10 */
.global m68k_mulu_word_02024c10
m68k_mulu_word_02024c10:
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
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024c58 */
.global m68k_mulu_word_02024c58
m68k_mulu_word_02024c58:
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
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x400000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024cc8 */
.global m68k_mulu_word_02024cc8
m68k_mulu_word_02024cc8:
    ldrh       r0, [sl], #2
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024cf8 */
.global m68k_muls_word_02024cf8
m68k_muls_word_02024cf8:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsh      r0, [r6, r1]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x360000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024d30 */
.global m68k_muls_word_02024d30
m68k_muls_word_02024d30:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024d74 */
.global m68k_muls_word_02024d74
m68k_muls_word_02024d74:
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
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024dc4 */
.global m68k_muls_word_02024dc4
m68k_muls_word_02024dc4:
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
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024e14 */
.global m68k_muls_word_02024e14
m68k_muls_word_02024e14:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024e60 */
.global m68k_muls_word_02024e60
m68k_muls_word_02024e60:
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
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x400000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024ed0 */
.global m68k_muls_word_02024ed0
m68k_muls_word_02024ed0:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024f0c */
.global m68k_muls_word_02024f0c
m68k_muls_word_02024f0c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x420000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024f50 */
.global m68k_muls_word_02024f50
m68k_muls_word_02024f50:
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
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024fa0 */
.global m68k_muls_word_02024fa0
m68k_muls_word_02024fa0:
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
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x400000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025018 */
.global m68k_muls_word_02025018
m68k_muls_word_02025018:
    ldrsh      r0, [sl], #2
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrsh      r1, [r6, r2]
    bic        r7, r7, #0xf
    muls       r5, r0, r1
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    str        r5, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x3a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025048 */
.global m68k_divu_word_02025048
m68k_divu_word_02025048:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    tst        r0, r0
    beq        .L_020250e0
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_02025068:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_02025068
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025084:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025084
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_020250cc
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020250cc:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020250e0:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020250f4 */
.global m68k_divu_word_020250f4
m68k_divu_word_020250f4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    tst        r0, r0
    beq        .L_02025190
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_02025118:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_02025118
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025134:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025134
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_0202517c
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202517c:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025190:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020251a4 */
.global m68k_divu_word_020251a4
m68k_divu_word_020251a4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    tst        r0, r0
    beq        .L_0202524c
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_020251d4:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_020251d4
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_020251f0:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_020251f0
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_02025238
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025238:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202524c:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025260 */
.global m68k_divu_word_02025260
m68k_divu_word_02025260:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    tst        r0, r0
    beq        .L_02025308
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_02025290:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_02025290
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_020252ac:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_020252ac
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_020252f4
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020252f4:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025308:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202531c */
.global m68k_divu_word_0202531c
m68k_divu_word_0202531c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    tst        r0, r0
    beq        .L_020253c0
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_02025348:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_02025348
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025364:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025364
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_020253ac
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020253ac:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020253c0:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020253d4 */
.global m68k_divu_word_020253d4
m68k_divu_word_020253d4:
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
    tst        r0, r0
    beq        .L_0202549c
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_02025424:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_02025424
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025440:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025440
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_02025488
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025488:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202549c:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020254b0 */
.global m68k_divu_word_020254b0
m68k_divu_word_020254b0:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    tst        r0, r0
    beq        .L_02025544
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_020254cc:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_020254cc
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_020254e8:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_020254e8
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_02025530
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025530:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025544:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025558 */
.global m68k_divu_word_02025558
m68k_divu_word_02025558:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    tst        r0, r0
    beq        .L_020255f4
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_0202557c:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_0202557c
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025598:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025598
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_020255e0
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020255e0:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020255f4:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025608 */
.global m68k_divu_word_02025608
m68k_divu_word_02025608:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    tst        r0, r0
    beq        .L_020256b0
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_02025638:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_02025638
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025654:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025654
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_0202569c
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_0202569c:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020256b0:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020256c4 */
.global m68k_divu_word_020256c4
m68k_divu_word_020256c4:
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
    tst        r0, r0
    beq        .L_02025794
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_0202571c:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_0202571c
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025738:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025738
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_02025780
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025780:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025794:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020257a8 */
.global m68k_divu_word_020257a8
m68k_divu_word_020257a8:
    ldrh       r0, [sl], #2
    tst        r0, r0
    beq        .L_02025838
    ldr        r4, .L_0202584c
    mov        r5, #0
    strh       r5, [r4]
.L_020257c0:
    ldr        r1, [r4]
    tst        r1, #0x8000
    bne        .L_020257c0
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_020257dc:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_020257dc
    ldr        r1, [r4, #0x20]
    lsrs       r5, r1, #0x10
    bne        .L_02025824
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    tst        r1, #0x8000
    orrne      r7, r7, #8
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x8c0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025824:
    orr        r7, r7, #2
    subs       r7, r7, #0x4a0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025838:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]
.L_0202584c:
    .word 0x04000280

/* 0x02025850 */
.global m68k_divs_word_02025850
m68k_divs_word_02025850:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsh      r0, [r6, r1]
    tst        r0, r0
    beq        .L_02025920
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_02025900
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02025884:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02025884
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025898:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025898
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_020258ec
    cmn        r1, #0x8000
    blt        .L_020258ec
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020258ec:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025900:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025920:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025934 */
.global m68k_divs_word_02025934
m68k_divs_word_02025934:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    tst        r0, r0
    beq        .L_02025a10
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_020259f0
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02025974:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02025974
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025988:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025988
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_020259dc
    cmn        r1, #0x8000
    blt        .L_020259dc
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020259dc:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020259f0:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025a10:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025a24 */
.global m68k_divs_word_02025a24
m68k_divs_word_02025a24:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    tst        r0, r0
    beq        .L_02025b0c
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_02025aec
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02025a70:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02025a70
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025a84:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025a84
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_02025ad8
    cmn        r1, #0x8000
    blt        .L_02025ad8
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025ad8:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025aec:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025b0c:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025b20 */
.global m68k_divs_word_02025b20
m68k_divs_word_02025b20:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    tst        r0, r0
    beq        .L_02025c08
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_02025be8
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02025b6c:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02025b6c
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025b80:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025b80
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_02025bd4
    cmn        r1, #0x8000
    blt        .L_02025bd4
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025bd4:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025be8:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025c08:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025c1c */
.global m68k_divs_word_02025c1c
m68k_divs_word_02025c1c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    tst        r0, r0
    beq        .L_02025d00
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_02025ce0
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02025c64:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02025c64
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025c78:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025c78
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_02025ccc
    cmn        r1, #0x8000
    blt        .L_02025ccc
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025ccc:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025ce0:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025d00:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025d14 */
.global m68k_divs_word_02025d14
m68k_divs_word_02025d14:
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
    tst        r0, r0
    beq        .L_02025e1c
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_02025dfc
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02025d80:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02025d80
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025d94:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025d94
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_02025de8
    cmn        r1, #0x8000
    blt        .L_02025de8
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025de8:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025dfc:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025e1c:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025e30 */
.global m68k_divs_word_02025e30
m68k_divs_word_02025e30:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    tst        r0, r0
    beq        .L_02025f04
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_02025ee4
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02025e68:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02025e68
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025e7c:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025e7c
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_02025ed0
    cmn        r1, #0x8000
    blt        .L_02025ed0
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025ed0:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025ee4:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025f04:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02025f18 */
.global m68k_divs_word_02025f18
m68k_divs_word_02025f18:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    tst        r0, r0
    beq        .L_02025ff4
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_02025fd4
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02025f58:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02025f58
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02025f6c:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02025f6c
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_02025fc0
    cmn        r1, #0x8000
    blt        .L_02025fc0
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025fc0:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025fd4:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02025ff4:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026008 */
.global m68k_divs_word_02026008
m68k_divs_word_02026008:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    tst        r0, r0
    beq        .L_020260f0
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_020260d0
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02026054:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02026054
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02026068:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02026068
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_020260bc
    cmn        r1, #0x8000
    blt        .L_020260bc
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020260bc:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020260d0:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020260f0:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026104 */
.global m68k_divs_word_02026104
m68k_divs_word_02026104:
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
    tst        r0, r0
    beq        .L_02026214
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_020261f4
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02026178:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02026178
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_0202618c:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_0202618c
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_020261e0
    cmn        r1, #0x8000
    blt        .L_020261e0
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020261e0:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020261f4:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_02026214:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02026228 */
.global m68k_divs_word_02026228
m68k_divs_word_02026228:
    ldrsh      r0, [sl], #2
    tst        r0, r0
    beq        .L_020262f0
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    cmn        r0, #1
    cmpeq      r1, #0x80000000
    beq        .L_020262d0
    ldr        r4, .L_02026304
    mov        r5, #0
    strh       r5, [r4]
.L_02026254:
    ldr        r3, [r4]
    tst        r3, #0x8000
    bne        .L_02026254
    str        r0, [r4, #0x18]
    str        r1, [r4, #0x10]
.L_02026268:
    ldr        r5, [r4]
    tst        r5, #0x8000
    bne        .L_02026268
    ldr        r1, [r4, #0x20]
    cmp        r1, #0x8000
    bge        .L_020262bc
    cmn        r1, #0x8000
    blt        .L_020262bc
    ldr        r3, [r4, #0x28]
    bic        r7, r7, #0xf
    tst        r1, r1
    orreq      r7, r7, #4
    lsls       r1, r1, #0x10
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    orr        r1, r1, r3, lsl #16
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x9e0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020262bc:
    orr        r7, r7, #2
    subs       r7, r7, #0x500000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020262d0:
    bic        r7, r7, #0xf
    orr        r7, r7, #4
    mov        r1, #0
    str        r1, [r6, r2, lsr #7]
    subs       r7, r7, #0x320000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020262f0:
    mov        r0, #5
    b          start_m68k_move_handlers
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]
.L_02026304:
    .word 0x04000280
