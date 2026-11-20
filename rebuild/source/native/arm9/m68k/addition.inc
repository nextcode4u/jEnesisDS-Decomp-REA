/* 68000 instruction handlers in ARM9 main memory. 0x0201ca30–0x0201f39c. */


/* 0x0201ca30 */
.global m68k_add_byte_0201ca30
m68k_add_byte_0201ca30:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ca70 */
.global m68k_add_word_0201ca70
m68k_add_word_0201ca70:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cab8 */
.global m68k_add_long_0201cab8
m68k_add_long_0201cab8:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201caf0 */
.global m68k_unrecognized_opcode_0201caf0
m68k_unrecognized_opcode_0201caf0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cb34 */
.global m68k_add_word_0201cb34
m68k_add_word_0201cb34:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cb80 */
.global m68k_add_long_0201cb80
m68k_add_long_0201cb80:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cbbc */
.global m68k_add_byte_0201cbbc
m68k_add_byte_0201cbbc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cc04 */
.global m68k_add_word_0201cc04
m68k_add_word_0201cc04:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cc50 */
.global m68k_add_long_0201cc50
m68k_add_long_0201cc50:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cc90 */
.global m68k_add_byte_0201cc90
m68k_add_byte_0201cc90:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ccec */
.global m68k_add_word_0201ccec
m68k_add_word_0201ccec:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cd44 */
.global m68k_add_long_0201cd44
m68k_add_long_0201cd44:
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
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cd90 */
.global m68k_add_byte_0201cd90
m68k_add_byte_0201cd90:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cdec */
.global m68k_add_word_0201cdec
m68k_add_word_0201cdec:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xa0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ce44 */
.global m68k_add_long_0201ce44
m68k_add_long_0201ce44:
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
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ce90 */
.global m68k_add_byte_0201ce90
m68k_add_byte_0201ce90:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cee0 */
.global m68k_add_word_0201cee0
m68k_add_word_0201cee0:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cf34 */
.global m68k_add_long_0201cf34
m68k_add_long_0201cf34:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cf7c */
.global m68k_add_byte_0201cf7c
m68k_add_byte_0201cf7c:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201cff0 */
.global m68k_add_word_0201cff0
m68k_add_word_0201cff0:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d068 */
.global m68k_add_long_0201d068
m68k_add_long_0201d068:
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
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d0d4 */
.global m68k_add_byte_0201d0d4
m68k_add_byte_0201d0d4:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d114 */
.global m68k_add_word_0201d114
m68k_add_word_0201d114:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d158 */
.global m68k_add_long_0201d158
m68k_add_long_0201d158:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d190 */
.global m68k_add_byte_0201d190
m68k_add_byte_0201d190:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d1d8 */
.global m68k_add_word_0201d1d8
m68k_add_word_0201d1d8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d224 */
.global m68k_add_long_0201d224
m68k_add_long_0201d224:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d264 */
.global m68k_add_byte_0201d264
m68k_add_byte_0201d264:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d2b8 */
.global m68k_add_word_0201d2b8
m68k_add_word_0201d2b8:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d310 */
.global m68k_add_long_0201d310
m68k_add_long_0201d310:
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
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d35c */
.global m68k_add_byte_0201d35c
m68k_add_byte_0201d35c:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d3d8 */
.global m68k_add_word_0201d3d8
m68k_add_word_0201d3d8:
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
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d458 */
.global m68k_add_long_0201d458
m68k_add_long_0201d458:
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
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d4cc */
.global m68k_add_byte_0201d4cc
m68k_add_byte_0201d4cc:
    ldrb       r0, [sl], #2
    and        r2, fp, #0xe00
    ldrb       r1, [r6, r2, lsr #7]
    lsl        r0, r0, #0x18
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #24
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x18
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d508 */
.global m68k_add_word_0201d508
m68k_add_word_0201d508:
    ldrh       r0, [sl], #2
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    ldrh       r1, [r6, r2]
    lsl        r0, r0, #0x10
    bic        r7, r7, #0x1f
    adds       r0, r0, r1, lsl #16
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r0, r0, #0x10
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d548 */
.global m68k_add_long_0201d548
m68k_add_long_0201d548:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    and        r2, fp, #0xe00
    ldr        r1, [r6, r2, lsr #7]
    bic        r7, r7, #0x1f
    adds       r0, r0, r1
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    str        r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d584 */
.global m68k_add_byte_0201d584
m68k_add_byte_0201d584:
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
    adds       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d5d8 */
.global m68k_add_word_0201d5d8
m68k_add_word_0201d5d8:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d62c */
.global m68k_add_long_0201d62c
m68k_add_long_0201d62c:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d684 */
.global m68k_add_byte_0201d684
m68k_add_byte_0201d684:
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
    adds       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d6ec */
.global m68k_add_word_0201d6ec
m68k_add_word_0201d6ec:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d74c */
.global m68k_add_long_0201d74c
m68k_add_long_0201d74c:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d7b0 */
.global m68k_add_byte_0201d7b0
m68k_add_byte_0201d7b0:
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
    adds       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d818 */
.global m68k_add_word_0201d818
m68k_add_word_0201d818:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d878 */
.global m68k_add_long_0201d878
m68k_add_long_0201d878:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d8dc */
.global m68k_add_byte_0201d8dc
m68k_add_byte_0201d8dc:
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
    adds       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d938 */
.global m68k_add_word_0201d938
m68k_add_word_0201d938:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d994 */
.global m68k_add_long_0201d994
m68k_add_long_0201d994:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201d9f4 */
.global m68k_add_byte_0201d9f4
m68k_add_byte_0201d9f4:
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
    adds       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201da74 */
.global m68k_add_word_0201da74
m68k_add_word_0201da74:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201daf4 */
.global m68k_add_long_0201daf4
m68k_add_long_0201daf4:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201db78 */
.global m68k_add_byte_0201db78
m68k_add_byte_0201db78:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    adds       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201dbc0 */
.global m68k_add_word_0201dbc0
m68k_add_word_0201dbc0:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201dc08 */
.global m68k_add_long_0201dc08
m68k_add_long_0201dc08:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0x1f
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201dc54 */
.global m68k_add_byte_0201dc54
m68k_add_byte_0201dc54:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    and        r4, fp, #0xe00
    ldrb       r4, [r6, r4, lsr #7]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    adds       r5, r0, r4, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201dca0 */
.global m68k_add_word_0201dca0
m68k_add_word_0201dca0:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    and        r4, fp, #0xe00
    lsr        r4, r4, #7
    ldrh       r4, [r6, r4]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201dcec */
.global m68k_add_long_0201dcec
m68k_add_long_0201dcec:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    and        r4, fp, #0xe00
    ldr        r4, [r6, r4, lsr #7]
    bic        r7, r7, #0x1f
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201dd3c */
.global m68k_adda_word_0201dd3c
m68k_adda_word_0201dd3c:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrsh      r0, [r6, r1]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201dd68 */
.global m68k_adda_long_0201dd68
m68k_adda_long_0201dd68:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201dd90 */
.global m68k_adda_word_0201dd90
m68k_adda_word_0201dd90:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrsh      r0, [r2, r1]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ddc0 */
.global m68k_adda_long_0201ddc0
m68k_adda_long_0201ddc0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ddec */
.global m68k_adda_word_0201ddec
m68k_adda_word_0201ddec:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201de24 */
.global m68k_adda_long_0201de24
m68k_adda_long_0201de24:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201de54 */
.global m68k_adda_word_0201de54
m68k_adda_word_0201de54:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201de98 */
.global m68k_adda_long_0201de98
m68k_adda_long_0201de98:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ded4 */
.global m68k_adda_word_0201ded4
m68k_adda_word_0201ded4:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201df18 */
.global m68k_adda_long_0201df18
m68k_adda_long_0201df18:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201df54 */
.global m68k_adda_word_0201df54
m68k_adda_word_0201df54:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201df94 */
.global m68k_adda_long_0201df94
m68k_adda_long_0201df94:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201dfcc */
.global m68k_adda_word_0201dfcc
m68k_adda_word_0201dfcc:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e030 */
.global m68k_adda_long_0201e030
m68k_adda_long_0201e030:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e08c */
.global m68k_adda_word_0201e08c
m68k_adda_word_0201e08c:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e0bc */
.global m68k_adda_long_0201e0bc
m68k_adda_long_0201e0bc:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e0e4 */
.global m68k_adda_word_0201e0e4
m68k_adda_word_0201e0e4:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_word
    lsl        r0, r0, #0x10
    asr        r0, r0, #0x10
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e11c */
.global m68k_adda_long_0201e11c
m68k_adda_long_0201e11c:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e14c */
.global m68k_adda_word_0201e14c
m68k_adda_word_0201e14c:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e190 */
.global m68k_adda_long_0201e190
m68k_adda_long_0201e190:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e1cc */
.global m68k_adda_word_0201e1cc
m68k_adda_word_0201e1cc:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e238 */
.global m68k_adda_long_0201e238
m68k_adda_long_0201e238:
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
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e29c */
.global m68k_adda_word_0201e29c
m68k_adda_word_0201e29c:
    ldrsh      r0, [sl], #2
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e2c0 */
.global m68k_adda_long_0201e2c0
m68k_adda_long_0201e2c0:
    ldrh       r1, [sl], #2
    ldrh       r0, [sl], #2
    orr        r0, r0, r1, lsl #16
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    ldr        r1, [r3, r2, lsr #7]
    add        r0, r0, r1
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e2ec */
.global m68k_addq_byte_0201e2ec
m68k_addq_byte_0201e2ec:
    and        r5, fp, #7
    add        r3, r6, #0x20
    ldr        r5, [r3, r5, lsl #2]
    mov        r0, r5
    bl         read_m68k_bus_byte
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    adds       r1, r0, r4, lsl #24
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r1, r1, #0x18
    mov        r0, r5
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201e33c */
.global m68k_addq_word_0201e33c
m68k_addq_word_0201e33c:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e390 */
.global m68k_addq_long_0201e390
m68k_addq_long_0201e390:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e3ec */
.global m68k_addq_byte_0201e3ec
m68k_addq_byte_0201e3ec:
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    mov        r0, r5
    cmp        r3, #7
    addeq      r1, r5, #2
    addne      r1, r5, #1
    str        r1, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    adds       r1, r0, r4, lsl #24
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r1, r1, #0x18
    mov        r0, r5
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201e44c */
.global m68k_addq_word_0201e44c
m68k_addq_word_0201e44c:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e4ac */
.global m68k_addq_long_0201e4ac
m68k_addq_long_0201e4ac:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e514 */
.global m68k_addq_byte_0201e514
m68k_addq_byte_0201e514:
    and        r3, fp, #7
    add        r2, r6, #0x20
    ldr        r5, [r2, r3, lsl #2]
    cmp        r3, #7
    subeq      r5, r5, #2
    subne      r5, r5, #1
    mov        r0, r5
    str        r5, [r2, r3, lsl #2]
    bl         read_m68k_bus_byte
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    adds       r1, r0, r4, lsl #24
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r1, r1, #0x18
    mov        r0, r5
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201e574 */
.global m68k_addq_word_0201e574
m68k_addq_word_0201e574:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xe0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e5d4 */
.global m68k_addq_long_0201e5d4
m68k_addq_long_0201e5d4:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e63c */
.global m68k_addq_byte_0201e63c
m68k_addq_byte_0201e63c:
    and        r1, fp, #7
    ldrsh      r3, [sl], #2
    add        r2, r6, #0x20
    ldr        r5, [r2, r1, lsl #2]
    add        r5, r5, r3
    mov        r0, r5
    bl         read_m68k_bus_byte
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    adds       r1, r0, r4, lsl #24
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r1, r1, #0x18
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201e694 */
.global m68k_addq_word_0201e694
m68k_addq_word_0201e694:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e6f0 */
.global m68k_addq_long_0201e6f0
m68k_addq_long_0201e6f0:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e754 */
.global m68k_addq_byte_0201e754
m68k_addq_byte_0201e754:
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
    add        r5, r0, r1
    mov        r0, r5
    bl         read_m68k_bus_byte
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    adds       r1, r0, r4, lsl #24
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r1, r1, #0x18
    mov        r0, r5
    sub        r7, r7, #0x120000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201e7d0 */
.global m68k_addq_word_0201e7d0
m68k_addq_word_0201e7d0:
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
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e850 */
.global m68k_addq_long_0201e850
m68k_addq_long_0201e850:
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
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e8d8 */
.global m68k_addq_byte_0201e8d8
m68k_addq_byte_0201e8d8:
    ldrsh      r5, [sl], #2
    mov        r0, r5
    bl         read_m68k_bus_byte
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    adds       r1, r0, r4, lsl #24
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r1, r1, #0x18
    mov        r0, r5
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201e920 */
.global m68k_addq_long_0201e920
m68k_addq_long_0201e920:
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201e970 */
.global m68k_addq_byte_0201e970
m68k_addq_byte_0201e970:
    ldrh       r3, [sl], #2
    ldrh       r0, [sl], #2
    orr        r5, r0, r3, lsl #16
    mov        r0, r5
    bl         read_m68k_bus_byte
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x18
    adds       r1, r0, r4, lsl #24
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    lsr        r1, r1, #0x18
    mov        r0, r5
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201e9c0 */
.global m68k_addq_word_0201e9c0
m68k_addq_word_0201e9c0:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    lsl        r0, r0, #0x10
    adds       r5, r0, r4, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ea0c */
.global m68k_addq_long_0201ea0c
m68k_addq_long_0201ea0c:
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    lsr        r4, fp, #9
    ands       r4, r4, #7
    addeq      r4, r4, #8
    adds       r5, r0, r4
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    bic        r7, r7, #0x1f
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ea60 */
.global m68k_addi_byte_0201ea60
m68k_addi_byte_0201ea60:
    ldrb       r5, [sl], #2
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    adds       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ea9c */
.global m68k_addi_word_0201ea9c
m68k_addi_word_0201ea9c:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    adds       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r6, r1]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201eadc */
.global m68k_addi_long_0201eadc
m68k_addi_long_0201eadc:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0x1f
    adds       r5, r0, r5
    str        r5, [r6, r1, lsl #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201eb18 */
.global m68k_addi_byte_0201eb18
m68k_addi_byte_0201eb18:
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
    adds       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201eb68 */
.global m68k_addi_word_0201eb68
m68k_addi_word_0201eb68:
    ldrh       r5, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    add        r2, r8, r0
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    adds       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ebb4 */
.global m68k_addi_long_0201ebb4
m68k_addi_long_0201ebb4:
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
    adds       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ec10 */
.global m68k_addi_byte_0201ec10
m68k_addi_byte_0201ec10:
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
    adds       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ec74 */
.global m68k_addi_word_0201ec74
m68k_addi_word_0201ec74:
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
    adds       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x100000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201eccc */
.global m68k_addi_long_0201eccc
m68k_addi_long_0201eccc:
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
    adds       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1c0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ed34 */
.global m68k_addi_byte_0201ed34
m68k_addi_byte_0201ed34:
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
    adds       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r3]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ed98 */
.global m68k_addi_word_0201ed98
m68k_addi_word_0201ed98:
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
    adds       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r3]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201edf0 */
.global m68k_addi_long_0201edf0
m68k_addi_long_0201edf0:
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
    adds       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r3]
    strh       r5, [r3, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ee58 */
.global m68k_addi_byte_0201ee58
m68k_addi_byte_0201ee58:
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
    adds       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201eeb0 */
.global m68k_addi_word_0201eeb0
m68k_addi_word_0201eeb0:
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
    adds       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ef04 */
.global m68k_addi_long_0201ef04
m68k_addi_long_0201ef04:
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
    adds       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x200000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201ef68 */
.global m68k_addi_byte_0201ef68
m68k_addi_byte_0201ef68:
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
    adds       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201efe4 */
.global m68k_addi_word_0201efe4
m68k_addi_word_0201efe4:
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
    adds       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f05c */
.global m68k_addi_long_0201f05c
m68k_addi_long_0201f05c:
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
    adds       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x220000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f0e4 */
.global m68k_addi_byte_0201f0e4
m68k_addi_byte_0201f0e4:
    ldrb       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    adds       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f128 */
.global m68k_addi_word_0201f128
m68k_addi_word_0201f128:
    ldrh       r5, [sl], #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    adds       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f168 */
.global m68k_addi_long_0201f168
m68k_addi_long_0201f168:
    ldrh       r4, [sl], #2
    ldrh       r5, [sl], #2
    orr        r5, r5, r4, lsl #16
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    ldrh       r1, [r2, #2]
    orr        r0, r1, r0, lsl #16
    bic        r7, r7, #0x1f
    adds       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x200000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f1b8 */
.global m68k_addi_byte_0201f1b8
m68k_addi_byte_0201f1b8:
    ldrb       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    eor        r2, r2, #1
    ldrb       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x18
    adds       r5, r0, r5, lsl #24
    lsr        r5, r5, #0x18
    strb       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f200 */
.global m68k_addi_word_0201f200
m68k_addi_word_0201f200:
    ldrh       r5, [sl], #2
    add        sl, sl, #2
    ldrh       r0, [sl], #2
    add        r2, r0, r8
    ldrh       r0, [r2]
    bic        r7, r7, #0x1f
    lsl        r0, r0, #0x10
    adds       r5, r0, r5, lsl #16
    lsr        r5, r5, #0x10
    strh       r5, [r2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x180000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f244 */
.global m68k_addi_long_0201f244
m68k_addi_long_0201f244:
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
    adds       r5, r0, r5
    lsr        r1, r5, #0x10
    strh       r1, [r2]
    strh       r5, [r2, #2]
    orrmi      r7, r7, #8
    orrhs      r7, r7, #0x11
    orrvs      r7, r7, #2
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x240000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f298 */
.global m68k_sub_byte_0201f298
m68k_sub_byte_0201f298:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
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
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201f2d8 */
.global m68k_sub_word_0201f2d8
m68k_sub_word_0201f2d8:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
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

/* 0x0201f320 */
.global m68k_sub_long_0201f320
m68k_sub_long_0201f320:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
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

/* 0x0201f358 */
.global m68k_unrecognized_opcode_0201f358
m68k_unrecognized_opcode_0201f358:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
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
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]
