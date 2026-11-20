/* 68000 instruction handlers in ARM9 main memory. 0x02021b7c–0x020245bc. */


/* 0x02021b7c */
.global m68k_cmp_byte_02021b7c
m68k_cmp_byte_02021b7c:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021bb4 */
.global m68k_cmp_word_02021bb4
m68k_cmp_word_02021bb4:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021bf4 */
.global m68k_cmp_long_02021bf4
m68k_cmp_long_02021bf4:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021c28 */
.global m68k_cmp_word_02021c28
m68k_cmp_word_02021c28:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021c6c */
.global m68k_cmp_long_02021c6c
m68k_cmp_long_02021c6c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021ca4 */
.global m68k_cmp_byte_02021ca4
m68k_cmp_byte_02021ca4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021ce4 */
.global m68k_cmp_word_02021ce4
m68k_cmp_word_02021ce4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021d28 */
.global m68k_cmp_long_02021d28
m68k_cmp_long_02021d28:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021d64 */
.global m68k_cmp_byte_02021d64
m68k_cmp_byte_02021d64:
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
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021db8 */
.global m68k_cmp_word_02021db8
m68k_cmp_word_02021db8:
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
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021e08 */
.global m68k_cmp_long_02021e08
m68k_cmp_long_02021e08:
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
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021e50 */
.global m68k_cmp_byte_02021e50
m68k_cmp_byte_02021e50:
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
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021ea4 */
.global m68k_cmp_word_02021ea4
m68k_cmp_word_02021ea4:
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
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021ef4 */
.global m68k_cmp_long_02021ef4
m68k_cmp_long_02021ef4:
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
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021f3c */
.global m68k_cmp_byte_02021f3c
m68k_cmp_byte_02021f3c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021f84 */
.global m68k_cmp_word_02021f84
m68k_cmp_word_02021f84:
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
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02021fd0 */
.global m68k_cmp_long_02021fd0
m68k_cmp_long_02021fd0:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022014 */
.global m68k_cmp_byte_02022014
m68k_cmp_byte_02022014:
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
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022080 */
.global m68k_cmp_word_02022080
m68k_cmp_word_02022080:
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
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020220f0 */
.global m68k_cmp_long_020220f0
m68k_cmp_long_020220f0:
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
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022158 */
.global m68k_cmp_byte_02022158
m68k_cmp_byte_02022158:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022190 */
.global m68k_cmp_word_02022190
m68k_cmp_word_02022190:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020221cc */
.global m68k_cmp_long_020221cc
m68k_cmp_long_020221cc:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022200 */
.global m68k_cmp_byte_02022200
m68k_cmp_byte_02022200:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022240 */
.global m68k_cmp_word_02022240
m68k_cmp_word_02022240:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022284 */
.global m68k_cmp_long_02022284
m68k_cmp_long_02022284:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020222c0 */
.global m68k_cmp_byte_020222c0
m68k_cmp_byte_020222c0:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202230c */
.global m68k_cmp_word_0202230c
m68k_cmp_word_0202230c:
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
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202235c */
.global m68k_cmp_long_0202235c
m68k_cmp_long_0202235c:
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
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020223a4 */
.global m68k_cmp_byte_020223a4
m68k_cmp_byte_020223a4:
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
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022418 */
.global m68k_cmp_word_02022418
m68k_cmp_word_02022418:
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
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022490 */
.global m68k_cmp_long_02022490
m68k_cmp_long_02022490:
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
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022500 */
.global m68k_cmp_byte_02022500
m68k_cmp_byte_02022500:
    ldrb       r0, [sl], #2
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x18
    subs       r0, r1, r0, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022534 */
.global m68k_cmp_word_02022534
m68k_cmp_word_02022534:
    ldrh       r0, [sl], #2
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    bic        r7, r7, #0xf
    lsl        r1, r1, #0x10
    subs       r0, r1, r0, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202256c */
.global m68k_cmp_long_0202256c
m68k_cmp_long_0202256c:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020225a4 */
.global m68k_cmpa_word_020225a4
m68k_cmpa_word_020225a4:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsh      r0, [r6, r1]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020225e0 */
.global m68k_cmpa_long_020225e0
m68k_cmpa_long_020225e0:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022618 */
.global m68k_cmpa_word_02022618
m68k_cmpa_word_02022618:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrsh      r0, [r2, r1]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022658 */
.global m68k_cmpa_long_02022658
m68k_cmpa_long_02022658:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022694 */
.global m68k_cmpa_word_02022694
m68k_cmpa_word_02022694:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020226dc */
.global m68k_cmpa_long_020226dc
m68k_cmpa_long_020226dc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202271c */
.global m68k_cmpa_word_0202271c
m68k_cmpa_word_0202271c:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022770 */
.global m68k_cmpa_long_02022770
m68k_cmpa_long_02022770:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020227bc */
.global m68k_cmpa_word_020227bc
m68k_cmpa_word_020227bc:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022810 */
.global m68k_cmpa_long_02022810
m68k_cmpa_long_02022810:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202285c */
.global m68k_cmpa_word_0202285c
m68k_cmpa_word_0202285c:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020228ac */
.global m68k_cmpa_long_020228ac
m68k_cmpa_long_020228ac:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020228f4 */
.global m68k_cmpa_word_020228f4
m68k_cmpa_word_020228f4:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022968 */
.global m68k_cmpa_long_02022968
m68k_cmpa_long_02022968:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020229d4 */
.global m68k_cmpa_word_020229d4
m68k_cmpa_word_020229d4:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022a14 */
.global m68k_cmpa_long_02022a14
m68k_cmpa_long_02022a14:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022a4c */
.global m68k_cmpa_word_02022a4c
m68k_cmpa_word_02022a4c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022a94 */
.global m68k_cmpa_long_02022a94
m68k_cmpa_long_02022a94:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022ad4 */
.global m68k_cmpa_word_02022ad4
m68k_cmpa_word_02022ad4:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022b28 */
.global m68k_cmpa_long_02022b28
m68k_cmpa_long_02022b28:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022b74 */
.global m68k_cmpa_word_02022b74
m68k_cmpa_word_02022b74:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022bf0 */
.global m68k_cmpa_long_02022bf0
m68k_cmpa_long_02022bf0:
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
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022c64 */
.global m68k_cmpa_word_02022c64
m68k_cmpa_word_02022c64:
    ldrsh      r0, [sl], #2
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022c98 */
.global m68k_cmpa_long_02022c98
m68k_cmpa_long_02022c98:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    bic        r7, r7, #0xf
    subs       r0, r1, r0
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022cd4 */
.global m68k_cmpi_byte_02022cd4
m68k_cmpi_byte_02022cd4:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022d08 */
.global m68k_cmpi_word_02022d08
m68k_cmpi_word_02022d08:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022d40 */
.global m68k_cmpi_long_02022d40
m68k_cmpi_long_02022d40:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022d78 */
.global m68k_cmpi_byte_02022d78
m68k_cmpi_byte_02022d78:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022db4 */
.global m68k_cmpi_word_02022db4
m68k_cmpi_word_02022db4:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022df0 */
.global m68k_cmpi_long_02022df0
m68k_cmpi_long_02022df0:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022e30 */
.global m68k_cmpi_byte_02022e30
m68k_cmpi_byte_02022e30:
    ldrb       r5, [sl], #2
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
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022e80 */
.global m68k_cmpi_word_02022e80
m68k_cmpi_word_02022e80:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022ec8 */
.global m68k_cmpi_long_02022ec8
m68k_cmpi_long_02022ec8:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022f14 */
.global m68k_cmpi_byte_02022f14
m68k_cmpi_byte_02022f14:
    ldrb       r5, [sl], #2
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
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022f64 */
.global m68k_cmpi_word_02022f64
m68k_cmpi_word_02022f64:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022fac */
.global m68k_cmpi_long_02022fac
m68k_cmpi_long_02022fac:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02022ff8 */
.global m68k_cmpi_byte_02022ff8
m68k_cmpi_byte_02022ff8:
    ldrb       r5, [sl], #2
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202303c */
.global m68k_cmpi_word_0202303c
m68k_cmpi_word_0202303c:
    ldrh       r5, [sl], #2
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023080 */
.global m68k_cmpi_long_02023080
m68k_cmpi_long_02023080:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020230c8 */
.global m68k_cmpi_byte_020230c8
m68k_cmpi_byte_020230c8:
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
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023130 */
.global m68k_cmpi_word_02023130
m68k_cmpi_word_02023130:
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
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023198 */
.global m68k_cmpi_long_02023198
m68k_cmpi_long_02023198:
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
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023204 */
.global m68k_cmpi_byte_02023204
m68k_cmpi_byte_02023204:
    ldrb       r5, [sl], #2
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023238 */
.global m68k_cmpi_word_02023238
m68k_cmpi_word_02023238:
    ldrh       r5, [sl], #2
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202326c */
.global m68k_cmpi_long_0202326c
m68k_cmpi_long_0202326c:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020232a4 */
.global m68k_cmpi_byte_020232a4
m68k_cmpi_byte_020232a4:
    ldrb       r5, [sl], #2
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020232e0 */
.global m68k_cmpi_word_020232e0
m68k_cmpi_word_020232e0:
    ldrh       r5, [sl], #2
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202331c */
.global m68k_cmpi_long_0202331c
m68k_cmpi_long_0202331c:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202335c */
.global m68k_unrecognized_opcode_0202335c
m68k_unrecognized_opcode_0202335c:
    ldrb       r5, [sl], #2
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020233a4 */
.global m68k_unrecognized_opcode_020233a4
m68k_unrecognized_opcode_020233a4:
    ldrh       r5, [sl], #2
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020233ec */
.global m68k_unrecognized_opcode_020233ec
m68k_unrecognized_opcode_020233ec:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r0, sl, lr
    ldrsh      r2, [sl], #2
    orr        r0, r0, r1
    add        r0, r0, r2
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1b0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023438 */
.global m68k_unrecognized_opcode_02023438
m68k_unrecognized_opcode_02023438:
    ldrb       r5, [sl], #2
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
    lsl        r0, r0, #0x18
    subs       r0, r0, r5, lsl #24
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020234a8 */
.global m68k_unrecognized_opcode_020234a8
m68k_unrecognized_opcode_020234a8:
    ldrh       r5, [sl], #2
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
    lsl        r0, r0, #0x10
    subs       r0, r0, r5, lsl #16
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023518 */
.global m68k_unrecognized_opcode_02023518
m68k_unrecognized_opcode_02023518:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
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
    subs       r0, r0, r5
    orrmi      r7, r7, #8
    orrlo      r7, r7, #1
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1d0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202358c */
.global m68k_neg_byte_0202358c
m68k_neg_byte_0202358c:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    lsl        r0, r0, #0x18
    rsbs       r5, r0, #0
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

/* 0x020235c4 */
.global m68k_neg_word_020235c4
m68k_neg_word_020235c4:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    lsl        r0, r0, #0x10
    rsbs       r5, r0, #0
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

/* 0x02023600 */
.global m68k_neg_long_02023600
m68k_neg_long_02023600:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    rsbs       r5, r0, #0
    str        r5, [r6, r1, lsl #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023630 */
.global m68k_neg_byte_02023630
m68k_neg_byte_02023630:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsl        r0, r0, #0x18
    rsbs       r5, r0, #0
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

/* 0x0202367c */
.global m68k_neg_word_0202367c
m68k_neg_word_0202367c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    lsl        r0, r0, #0x10
    rsbs       r5, r0, #0
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

/* 0x020236c4 */
.global m68k_neg_long_020236c4
m68k_neg_long_020236c4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    rsbs       r5, r0, #0
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

/* 0x02023714 */
.global m68k_neg_byte_02023714
m68k_neg_byte_02023714:
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
    lsl        r0, r0, #0x18
    rsbs       r5, r0, #0
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

/* 0x02023774 */
.global m68k_neg_word_02023774
m68k_neg_word_02023774:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    lsl        r0, r0, #0x10
    rsbs       r5, r0, #0
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

/* 0x020237c8 */
.global m68k_neg_long_020237c8
m68k_neg_long_020237c8:
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
    rsbs       r5, r0, #0
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

/* 0x02023824 */
.global m68k_neg_byte_02023824
m68k_neg_byte_02023824:
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
    lsl        r0, r0, #0x18
    rsbs       r5, r0, #0
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

/* 0x02023884 */
.global m68k_neg_word_02023884
m68k_neg_word_02023884:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    lsl        r0, r0, #0x10
    rsbs       r5, r0, #0
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

/* 0x020238d8 */
.global m68k_neg_long_020238d8
m68k_neg_long_020238d8:
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
    rsbs       r5, r0, #0
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

/* 0x02023934 */
.global m68k_neg_byte_02023934
m68k_neg_byte_02023934:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsl        r0, r0, #0x18
    rsbs       r5, r0, #0
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

/* 0x02023988 */
.global m68k_neg_word_02023988
m68k_neg_word_02023988:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    lsl        r0, r0, #0x10
    rsbs       r5, r0, #0
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

/* 0x020239d8 */
.global m68k_neg_long_020239d8
m68k_neg_long_020239d8:
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
    rsbs       r5, r0, #0
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

/* 0x02023a30 */
.global m68k_neg_byte_02023a30
m68k_neg_byte_02023a30:
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
    lsl        r0, r0, #0x18
    rsbs       r5, r0, #0
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

/* 0x02023aa8 */
.global m68k_neg_word_02023aa8
m68k_neg_word_02023aa8:
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
    lsl        r0, r0, #0x10
    rsbs       r5, r0, #0
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

/* 0x02023b1c */
.global m68k_neg_long_02023b1c
m68k_neg_long_02023b1c:
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
    rsbs       r5, r0, #0
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

/* 0x02023b98 */
.global m68k_neg_byte_02023b98
m68k_neg_byte_02023b98:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsl        r0, r0, #0x18
    rsbs       r5, r0, #0
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

/* 0x02023bd8 */
.global m68k_neg_word_02023bd8
m68k_neg_word_02023bd8:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    lsl        r0, r0, #0x10
    rsbs       r5, r0, #0
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

/* 0x02023c14 */
.global m68k_neg_long_02023c14
m68k_neg_long_02023c14:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    rsbs       r5, r0, #0
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

/* 0x02023c58 */
.global m68k_neg_byte_02023c58
m68k_neg_byte_02023c58:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsl        r0, r0, #0x18
    rsbs       r5, r0, #0
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

/* 0x02023c9c */
.global m68k_neg_word_02023c9c
m68k_neg_word_02023c9c:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    lsl        r0, r0, #0x10
    rsbs       r5, r0, #0
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

/* 0x02023cdc */
.global m68k_neg_long_02023cdc
m68k_neg_long_02023cdc:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    rsbs       r5, r0, #0
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

/* 0x02023d24 */
.global m68k_negx_byte_02023d24
m68k_negx_byte_02023d24:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    lsl        r0, r0, #0x18
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x18
    bicne      r7, r7, #4
    strb       r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023d64 */
.global m68k_negx_word_02023d64
m68k_negx_word_02023d64:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    lsl        r0, r0, #0x10
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x10
    bicne      r7, r7, #4
    strh       r5, [r6, r1]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023da8 */
.global m68k_negx_long_02023da8
m68k_negx_long_02023da8:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    tst        r7, #0x10
    addne      r4, r0, #1
    moveq      r4, r0
    rsbs       r5, r4, #0
    str        r5, [r6, r1, lsl #2]
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    adds       r4, r5, r0
    orrhs      r7, r7, #0x11
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x60000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023de8 */
.global m68k_negx_byte_02023de8
m68k_negx_byte_02023de8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsl        r0, r0, #0x18
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x18
    bicne      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023e3c */
.global m68k_negx_word_02023e3c
m68k_negx_word_02023e3c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    lsl        r0, r0, #0x10
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x10
    bicne      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023e8c */
.global m68k_negx_long_02023e8c
m68k_negx_long_02023e8c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    tst        r7, #0x10
    addne      r4, r0, #1
    moveq      r4, r0
    rsbs       r5, r4, #0
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    adds       r4, r5, r0
    orrhs      r7, r7, #0x11
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023eec */
.global m68k_negx_byte_02023eec
m68k_negx_byte_02023eec:
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
    lsl        r0, r0, #0x18
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x18
    bicne      r7, r7, #4
    strb       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023f54 */
.global m68k_negx_word_02023f54
m68k_negx_word_02023f54:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    lsl        r0, r0, #0x10
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x10
    bicne      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02023fb0 */
.global m68k_negx_long_02023fb0
m68k_negx_long_02023fb0:
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
    tst        r7, #0x10
    addne      r4, r0, #1
    moveq      r4, r0
    rsbs       r5, r4, #0
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    adds       r4, r5, r0
    orrhs      r7, r7, #0x11
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202401c */
.global m68k_negx_byte_0202401c
m68k_negx_byte_0202401c:
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
    lsl        r0, r0, #0x18
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x18
    bicne      r7, r7, #4
    strb       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024084 */
.global m68k_negx_word_02024084
m68k_negx_word_02024084:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    lsl        r0, r0, #0x10
    add        r3, r8, r0, lsr #16
    ldrh       r0, [r3]
    lsl        r0, r0, #0x10
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x10
    bicne      r7, r7, #4
    strh       r5, [r3]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020240e0 */
.global m68k_negx_long_020240e0
m68k_negx_long_020240e0:
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
    tst        r7, #0x10
    addne      r4, r0, #1
    moveq      r4, r0
    rsbs       r5, r4, #0
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    adds       r4, r5, r0
    orrhs      r7, r7, #0x11
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202414c */
.global m68k_negx_byte_0202414c
m68k_negx_byte_0202414c:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsl        r0, r0, #0x18
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x18
    bicne      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020241a8 */
.global m68k_negx_word_020241a8
m68k_negx_word_020241a8:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    lsl        r0, r0, #0x10
    add        r2, r8, r0, lsr #16
    ldrh       r0, [r2]
    lsl        r0, r0, #0x10
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x10
    bicne      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024200 */
.global m68k_negx_long_02024200
m68k_negx_long_02024200:
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
    tst        r7, #0x10
    addne      r4, r0, #1
    moveq      r4, r0
    rsbs       r5, r4, #0
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    adds       r4, r5, r0
    orrhs      r7, r7, #0x11
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024268 */
.global m68k_negx_byte_02024268
m68k_negx_byte_02024268:
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
    lsl        r0, r0, #0x18
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x18
    bicne      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020242e8 */
.global m68k_negx_word_020242e8
m68k_negx_word_020242e8:
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
    lsl        r0, r0, #0x10
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x10
    bicne      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024364 */
.global m68k_negx_long_02024364
m68k_negx_long_02024364:
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
    tst        r7, #0x10
    addne      r4, r0, #1
    moveq      r4, r0
    rsbs       r5, r4, #0
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    adds       r4, r5, r0
    orrhs      r7, r7, #0x11
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020243f0 */
.global m68k_negx_byte_020243f0
m68k_negx_byte_020243f0:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsl        r0, r0, #0x18
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x18
    bicne      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024438 */
.global m68k_negx_word_02024438
m68k_negx_word_02024438:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    lsl        r0, r0, #0x10
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x10
    bicne      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202447c */
.global m68k_negx_long_0202447c
m68k_negx_long_0202447c:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    tst        r7, #0x10
    addne      r4, r0, #1
    moveq      r4, r0
    rsbs       r5, r4, #0
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    adds       r4, r5, r0
    orrhs      r7, r7, #0x11
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020244d0 */
.global m68k_negx_byte_020244d0
m68k_negx_byte_020244d0:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    lsl        r0, r0, #0x18
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x18
    bicne      r7, r7, #4
    strb       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0202451c */
.global m68k_negx_word_0202451c
m68k_negx_word_0202451c:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    lsl        r0, r0, #0x10
    tst        r7, #0x10
    addne      r0, r0, #1
    rsbs       r5, r0, #0
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrlo      r7, r7, #0x11
    orrvs      r7, r7, #2
    lsrs       r5, r5, #0x10
    bicne      r7, r7, #4
    strh       r5, [r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02024564 */
.global m68k_negx_long_02024564
m68k_negx_long_02024564:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    tst        r7, #0x10
    addne      r4, r0, #1
    moveq      r4, r0
    rsbs       r5, r4, #0
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1b
    orrmi      r7, r7, #8
    orrvs      r7, r7, #2
    bicne      r7, r7, #4
    adds       r4, r5, r0
    orrhs      r7, r7, #0x11
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]
