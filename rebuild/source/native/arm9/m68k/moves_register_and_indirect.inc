/* 68000 instruction handlers in ARM9 main memory. 0x02016a70–0x020183a8. */


/* 0x02016a70 */
.global m68k_arm_opcode_start
m68k_arm_opcode_start:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        r2, .L_02016bd8
    ldr        r3, .L_02016bdc
    ldr        r6, .L_02016be0
    str        r3, [r2, r6, lsl #2]
    ldr        r3, .L_02016be4
    ldr        r4, .L_02016be8
    mov        r0, #0x80
    mov        r6, #0xa600
    mov        r7, #0xf600
.L_02016a98:
    orr        r8, r6, r0
    str        r3, [r2, r8, lsl #2]
    orr        sb, r7, r0
    str        r4, [r2, sb, lsl #2]
    add        r0, r0, #1
    cmp        r0, #0x100
    blt        .L_02016a98
    ldr        r3, .L_02016bec
    ldr        r4, .L_02016bf0
    mov        r0, #0x80
    mov        r6, #0xa700
    mov        r7, #0xf700
.L_02016ac8:
    orr        r8, r6, r0
    str        r3, [r2, r8, lsl #2]
    orr        sb, r7, r0
    str        r4, [r2, sb, lsl #2]
    add        r0, r0, #1
    cmp        r0, #0x100
    blt        .L_02016ac8
    ldr        r3, .L_02016bf4
    ldr        r4, .L_02016bf8
    mov        r0, #0x80
    mov        r6, #0xa500
    mov        r7, #0xf500
.L_02016af8:
    orr        r8, r6, r0
    str        r3, [r2, r8, lsl #2]
    orr        sb, r7, r0
    str        r4, [r2, sb, lsl #2]
    add        r0, r0, #1
    cmp        r0, #0x100
    blt        .L_02016af8
    ldr        r3, .L_02016bfc
    ldr        r4, .L_02016c00
    mov        r0, #0x80
    mov        r6, #0xa300
    mov        r7, #0xf300
.L_02016b28:
    orr        r8, r6, r0
    str        r3, [r2, r8, lsl #2]
    orr        sb, r7, r0
    str        r4, [r2, sb, lsl #2]
    add        r0, r0, #1
    cmp        r0, #0x100
    blt        .L_02016b28
    ldr        r3, .L_02016c04
    ldr        r4, .L_02016c08
    mov        r0, #0x80
    mov        r6, #0xa400
    mov        r7, #0xf400
.L_02016b58:
    orr        r8, r6, r0
    str        r3, [r2, r8, lsl #2]
    orr        sb, r7, r0
    str        r4, [r2, sb, lsl #2]
    add        r0, r0, #1
    cmp        r0, #0x100
    blt        .L_02016b58
    ldr        r3, .L_02016c0c
    ldr        r4, .L_02016c10
    mov        r0, #0x80
    mov        r6, #0xaa00
    mov        r7, #0xfa00
.L_02016b88:
    orr        r8, r6, r0
    str        r3, [r2, r8, lsl #2]
    orr        sb, r7, r0
    str        r4, [r2, sb, lsl #2]
    add        r0, r0, #1
    cmp        r0, #0x100
    blt        .L_02016b88
    ldr        r3, .L_02016c14
    ldr        r4, .L_02016c18
    mov        r0, #0x80
    mov        r6, #0xac00
    mov        r7, #0xfc00
.L_02016bb8:
    orr        r8, r6, r0
    str        r3, [r2, r8, lsl #2]
    orr        sb, r7, r0
    str        r4, [r2, sb, lsl #2]
    add        r0, r0, #1
    cmp        r0, #0x100
    blt        .L_02016bb8
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02016bd8:
    .word m68k_immediate_bit_dispatch
.L_02016bdc:
    .word address_01003c4c
.L_02016be0:
    .word 0x000060fe
.L_02016be4:
    .word address_01003364
.L_02016be8:
    .word address_0100334c
.L_02016bec:
    .word address_010033f8
.L_02016bf0:
    .word address_010033e0
.L_02016bf4:
    .word address_010032d0
.L_02016bf8:
    .word address_010032b8
.L_02016bfc:
    .word address_010031a8
.L_02016c00:
    .word address_01003190
.L_02016c04:
    .word address_0100323c
.L_02016c08:
    .word address_01003224
.L_02016c0c:
    .word address_01003544
.L_02016c10:
    .word address_0100352c
.L_02016c14:
    .word address_01003640
.L_02016c18:
    .word address_01003624
    andeq      r0, r0, r0

/* 0x02016c20 */
.global start_m68k_move_handlers
start_m68k_move_handlers:
    ldr        r2, [r6, #0x50]
    ldr        lr, [r6, #0x54]
    and        r3, r7, #0x1f
    orr        r2, r2, r3
    tst        r2, #0x2000
    ldrne      r3, [r6, #0x3c]
    bne        .L_02016c48
    ldr        r4, [r6, #0x3c]
    ldr        r3, [r6, #0x48]
    str        r4, [r6, #0x48]
.L_02016c48:
    sub        r3, r3, #6
    str        r3, [r6, #0x3c]
    orr        r1, r2, #0x2000
    and        r1, r1, #0xff00
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
    add        r2, r5, r0, lsl #2
    ldrh       r1, [r2], #2
    ldrh       r3, [r2]
    orr        r3, r3, r1, lsl #16
    tst        r1, #0xc0
    mov        r1, #0x80000000
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
    cmp        r0, #9
    bne        .L_02016ce4
    ldrb       r2, [r6, #0xa2]
    tst        r2, r2
    movne      r1, #0
    strbne     r1, [r6, #0xa2]
.L_02016ce4:
    asrs       r0, r7, #0x10
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02016cf4 */
.global m68k_move_byte_02016cf4
m68k_move_byte_02016cf4:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    and        r2, fp, #0xe00
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    strb       r0, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02016d20 */
.global m68k_move_word_02016d20
m68k_move_word_02016d20:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r0, [r6, r1]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    strh       r0, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02016d54 */
.global m68k_move_long_02016d54
m68k_move_long_02016d54:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02016d80 */
.global m68k_move_byte_02016d80
m68k_move_byte_02016d80:
    and        r1, fp, #7
    ldrb       r1, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    lsls       r0, r1, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02016db0 */
.global m68k_move_word_02016db0
m68k_move_word_02016db0:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r1, [r6, r1]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    lsls       r0, r1, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02016de4 */
.global m68k_move_long_02016de4
m68k_move_long_02016de4:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02016e14 */
.global m68k_move_byte_02016e14
m68k_move_byte_02016e14:
    and        r1, fp, #7
    ldrb       r1, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    lsls       r0, r1, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    cmp        r3, #0xe00
    addeq      r4, r0, #2
    addne      r4, r0, #1
    str        r4, [r2, r3, lsr #7]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02016e54 */
.global m68k_move_word_02016e54
m68k_move_word_02016e54:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r1, [r6, r1]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    lsls       r0, r1, #0x10
    ldr        r0, [r2, r3, lsr #7]
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r4, r0, #2
    str        r4, [r2, r3, lsr #7]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02016e90 */
.global m68k_move_long_02016e90
m68k_move_long_02016e90:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r4, r0, #4
    str        r4, [r2, r3, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02016ec8 */
.global m68k_move_byte_02016ec8
m68k_move_byte_02016ec8:
    and        r1, fp, #7
    ldrb       r1, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    lsls       r0, r1, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    cmp        r3, #0xe00
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2, r3, lsr #7]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02016f08 */
.global m68k_move_word_02016f08
m68k_move_word_02016f08:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r1, [r6, r1]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    lsls       r0, r1, #0x10
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    sub        r0, r0, #2
    str        r0, [r2, r3, lsr #7]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02016f44 */
.global m68k_move_long_02016f44
m68k_move_long_02016f44:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    sub        r0, r0, #4
    str        r0, [r2, r3, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x02016f7c */
.global m68k_move_byte_02016f7c
m68k_move_byte_02016f7c:
    and        r1, fp, #7
    ldrb       r1, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    lsls       r4, r1, #0x18
    ldrsh      r4, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r0, r0, r4
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02016fb4 */
.global m68k_move_word_02016fb4
m68k_move_word_02016fb4:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r1, [r6, r1]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    lsls       r4, r1, #0x10
    ldrsh      r4, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r0, r0, r4
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02016ff0 */
.global m68k_move_long_02016ff0
m68k_move_long_02016ff0:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    movs       r1, r0
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02017028 */
.global m68k_move_byte_02017028
m68k_move_byte_02017028:
    and        r1, fp, #7
    ldrb       r1, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    lsls       r0, r1, #0x18
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrh       r4, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
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
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017084 */
.global m68k_move_word_02017084
m68k_move_word_02017084:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r1, [r6, r1]
    bic        r7, r7, #0xf
    add        r2, r6, #0x20
    lsls       r0, r1, #0x10
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrh       r4, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
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
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x020170e4 */
.global m68k_move_long_020170e4
m68k_move_long_020170e4:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrh       r4, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
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
    b          address_0100424c

/* 0x02017140 */
.global m68k_move_byte_02017140
m68k_move_byte_02017140:
    and        r1, fp, #7
    ldrb       r1, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r0, r1, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017168 */
.global m68k_move_word_02017168
m68k_move_word_02017168:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r1, [r6, r1]
    bic        r7, r7, #0xf
    lsls       r0, r1, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017194 */
.global m68k_move_long_02017194
m68k_move_long_02017194:
    and        r1, fp, #7
    ldr        r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020171bc */
.global m68k_move_byte_020171bc
m68k_move_byte_020171bc:
    and        r1, fp, #7
    ldrb       r1, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    ldrh       r0, [sl], #2
    lsls       r2, r1, #0x18
    ldrh       r2, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020171ec */
.global m68k_move_word_020171ec
m68k_move_word_020171ec:
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r1, [r6, r1]
    bic        r7, r7, #0xf
    ldrh       r0, [sl], #2
    lsls       r2, r1, #0x10
    ldrh       r2, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017220 */
.global m68k_move_long_02017220
m68k_move_long_02017220:
    and        r1, fp, #7
    ldr        r1, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    ldrh       r0, [sl], #2
    movs       r2, r1
    ldrh       r2, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02017250 */
.global m68k_unrecognized_opcode_02017250
m68k_unrecognized_opcode_02017250:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    and        r2, fp, #0xe00
    strb       r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02017284 */
.global m68k_move_word_02017284
m68k_move_word_02017284:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020172c0 */
.global m68k_move_long_020172c0
m68k_move_long_020172c0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020172f0 */
.global m68k_unrecognized_opcode_020172f0
m68k_unrecognized_opcode_020172f0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017328 */
.global m68k_move_word_02017328
m68k_move_word_02017328:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017364 */
.global m68k_move_long_02017364
m68k_move_long_02017364:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02017398 */
.global m68k_unrecognized_opcode_02017398
m68k_unrecognized_opcode_02017398:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    addeq      r3, r0, #2
    addne      r3, r0, #1
    str        r3, [r2]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020173e4 */
.global m68k_move_word_020173e4
m68k_move_word_020173e4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201742c */
.global m68k_move_long_0201742c
m68k_move_long_0201742c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #4
    str        r3, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201746c */
.global m68k_unrecognized_opcode_0201746c
m68k_unrecognized_opcode_0201746c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020174b8 */
.global m68k_move_word_020174b8
m68k_move_word_020174b8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0x80000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017500 */
.global m68k_unrecognized_opcode_02017500
m68k_unrecognized_opcode_02017500:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017540 */
.global m68k_move_word_02017540
m68k_move_word_02017540:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017584 */
.global m68k_move_long_02017584
m68k_move_long_02017584:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x020175c0 */
.global m68k_unrecognized_opcode_020175c0
m68k_unrecognized_opcode_020175c0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017624 */
.global m68k_move_word_02017624
m68k_move_word_02017624:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    sub        r7, r7, #0xe0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x0201768c */
.global m68k_move_long_0201768c
m68k_move_long_0201768c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
    b          address_0100424c

/* 0x020176ec */
.global m68k_unrecognized_opcode_020176ec
m68k_unrecognized_opcode_020176ec:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201771c */
.global m68k_move_word_0201771c
m68k_move_word_0201771c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017750 */
.global m68k_move_long_02017750
m68k_move_long_02017750:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201777c */
.global m68k_unrecognized_opcode_0201777c
m68k_unrecognized_opcode_0201777c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldrb       r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020177b4 */
.global m68k_move_word_020177b4
m68k_move_word_020177b4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    lsl        r1, r1, #2
    ldrh       r0, [r2, r1]
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x020177f0 */
.global m68k_move_long_020177f0
m68k_move_long_020177f0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02017824 */
.global m68k_move_byte_02017824
m68k_move_byte_02017824:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    and        r2, fp, #0xe00
    strb       r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x0201785c */
.global m68k_move_word_0201785c
m68k_move_word_0201785c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02017898 */
.global m68k_move_long_02017898
m68k_move_long_02017898:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020178cc */
.global m68k_move_byte_020178cc
m68k_move_byte_020178cc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017908 */
.global m68k_move_word_02017908
m68k_move_word_02017908:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017944 */
.global m68k_move_long_02017944
m68k_move_long_02017944:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201797c */
.global m68k_move_byte_0201797c
m68k_move_byte_0201797c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    addeq      r3, r0, #2
    addne      r3, r0, #1
    str        r3, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x020179cc */
.global m68k_move_word_020179cc
m68k_move_word_020179cc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017a14 */
.global m68k_move_long_02017a14
m68k_move_long_02017a14:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #4
    str        r3, [r2]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02017a58 */
.global m68k_move_byte_02017a58
m68k_move_byte_02017a58:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017aa8 */
.global m68k_move_word_02017aa8
m68k_move_word_02017aa8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017af0 */
.global m68k_move_long_02017af0
m68k_move_long_02017af0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x02017b34 */
.global m68k_move_byte_02017b34
m68k_move_byte_02017b34:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017b78 */
.global m68k_move_word_02017b78
m68k_move_word_02017b78:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017bbc */
.global m68k_move_long_02017bbc
m68k_move_long_02017bbc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02017bfc */
.global m68k_move_byte_02017bfc
m68k_move_byte_02017bfc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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

/* 0x02017c64 */
.global m68k_move_word_02017c64
m68k_move_word_02017c64:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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

/* 0x02017ccc */
.global m68k_move_long_02017ccc
m68k_move_long_02017ccc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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

/* 0x02017d30 */
.global m68k_move_byte_02017d30
m68k_move_byte_02017d30:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017d64 */
.global m68k_move_word_02017d64
m68k_move_word_02017d64:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017d98 */
.global m68k_move_long_02017d98
m68k_move_long_02017d98:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrsh      r0, [sl], #2
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02017dc8 */
.global m68k_move_byte_02017dc8
m68k_move_byte_02017dc8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017e04 */
.global m68k_move_word_02017e04
m68k_move_word_02017e04:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017e40 */
.global m68k_move_long_02017e40
m68k_move_long_02017e40:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       r0, [sl], #2
    ldrh       r2, [sl], #2
    orr        r0, r2, r0, lsl #16
    sub        r7, r7, #0x1c0000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02017e78 */
.global m68k_move_byte_02017e78
m68k_move_byte_02017e78:
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
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    and        r2, fp, #0xe00
    strb       r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02017ec4 */
.global m68k_move_word_02017ec4
m68k_move_word_02017ec4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    and        r2, fp, #0xe00
    lsr        r2, r2, #7
    strh       r1, [r6, r2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02017f0c */
.global m68k_move_long_02017f0c
m68k_move_long_02017f0c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    and        r2, fp, #0xe00
    str        r1, [r6, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02017f4c */
.global m68k_move_byte_02017f4c
m68k_move_byte_02017f4c:
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
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02017f9c */
.global m68k_move_word_02017f9c
m68k_move_word_02017f9c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x02017fe4 */
.global m68k_move_long_02017fe4
m68k_move_long_02017fe4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r0, fp, #0xe00
    ldr        r0, [r2, r0, lsr #7]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02018028 */
.global m68k_move_byte_02018028
m68k_move_byte_02018028:
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
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    addeq      r3, r0, #2
    addne      r3, r0, #1
    str        r3, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x0201808c */
.global m68k_move_word_0201808c
m68k_move_word_0201808c:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #2
    str        r3, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x020180e0 */
.global m68k_move_long_020180e0
m68k_move_long_020180e0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    add        r3, r0, #4
    str        r3, [r2]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x02018130 */
.global m68k_move_byte_02018130
m68k_move_byte_02018130:
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
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    cmp        r3, #0xe00
    subeq      r0, r0, #2
    subne      r0, r0, #1
    str        r0, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018194 */
.global m68k_move_word_02018194
m68k_move_word_02018194:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #2
    str        r0, [r2]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x020181e8 */
.global m68k_move_long_020181e8
m68k_move_long_020181e8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    add        r2, r2, r3, lsr #7
    ldr        r0, [r2]
    sub        r0, r0, #4
    str        r0, [r2]
    sub        r7, r7, #0x140000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x02018238 */
.global m68k_move_byte_02018238
m68k_move_byte_02018238:
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
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_010041f4

/* 0x02018290 */
.global m68k_move_word_02018290
m68k_move_word_02018290:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #2
    str        r1, [r2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r1, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x10
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x100000
    ldrh       fp, [sl], #2
    b          address_01004214

/* 0x020182e0 */
.global m68k_move_long_020182e0
m68k_move_long_020182e0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    add        r2, r2, r1, lsl #2
    ldr        r0, [r2]
    add        r1, r0, #4
    str        r1, [r2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    ldrsh      r4, [sl], #2
    add        r0, r0, r4
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x0201832c */
.global m68k_move_byte_0201832c
m68k_move_byte_0201832c:
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
    lsls       r1, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r1, r1, #0x18
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
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
