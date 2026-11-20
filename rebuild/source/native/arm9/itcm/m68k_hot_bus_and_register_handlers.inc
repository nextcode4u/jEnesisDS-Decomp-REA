/* ARM9 tightly coupled instruction memory code. 0x01003c6c–0x010042c0. */


/* 0x01003c6c */
.global m68k_bsr_01003c6c
m68k_bsr_01003c6c:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r3, sl, lr
    ldr        r4, [r6, #0x3c]
    orr        r3, r3, r1
    sub        r4, r4, #4
    str        r4, [r6, #0x3c]
    lsr        r2, r3, #0x10
    lsl        r4, r4, #0x10
    add        r4, r8, r4, lsr #16
    lsl        r1, fp, #0x18
    add        sl, sl, r1, asr #24
    subs       r7, r7, #0x120000
    ldrhgt     fp, [sl], #2
    strh       r2, [r4], #2
    strh       r3, [r4]
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084

/* 0x01003cb4 */
.global m68k_bsr_01003cb4
m68k_bsr_01003cb4:
    ldr        lr, [r6, #0x54]
    ldr        r1, [r6, #0x9c]
    sub        r3, sl, lr
    ldr        r4, [r6, #0x3c]
    add        r3, r3, #2
    orr        r3, r3, r1
    sub        r4, r4, #4
    str        r4, [r6, #0x3c]
    ldrsh      r1, [sl]
    lsr        r2, r3, #0x10
    lsl        r4, r4, #0x10
    add        sl, sl, r1
    subs       r7, r7, #0x120000
    ldrhgt     fp, [sl], #2
    add        r4, r8, r4, lsr #16
    strh       r2, [r4], #2
    strh       r3, [r4]
    ldrgt      pc, [sb, fp, lsl #2]
    b          address_01003084

/* 0x01003d00 */
.global m68k_nop
m68k_nop:
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003d0c */
.global m68k_moveq
m68k_moveq:
    and        r2, fp, #0xe00
    bic        r7, r7, #0xf
    lsls       r1, fp, #0x18
    asr        r1, r1, #0x18
    str        r1, [r6, r2, lsr #7]
    orrmi      r7, r7, #8
    orreq      r7, r7, #4
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003d34 */
.global m68k_move_long_01003d34
m68k_move_long_01003d34:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    movs       r1, r0
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    sub        r0, r0, #4
    str        r0, [r2, r3, lsr #7]
    sub        r7, r7, #0xc0000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x01003d6c */
.global m68k_move_long_01003d6c
m68k_move_long_01003d6c:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    movs       r1, r0
    add        r2, r6, #0x20
    and        r3, fp, #0xe00
    ldr        r0, [r2, r3, lsr #7]
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    sub        r0, r0, #4
    str        r0, [r2, r3, lsr #7]
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100428c

/* 0x01003da4 */
.global m68k_move_long_01003da4
m68k_move_long_01003da4:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bic        r7, r7, #0xf
    add        r3, r0, #4
    str        r3, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    movs       r1, r0
    ldrsh      r0, [sl], #2
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    sub        r7, r7, #0x180000
    ldrh       fp, [sl], #2
    b          address_0100424c

/* 0x01003ddc */
.global m68k_movea_long_01003ddc
m68k_movea_long_01003ddc:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003e04 */
.global m68k_movea_long_01003e04
m68k_movea_long_01003e04:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r3, r0, #4
    str        r3, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003e34 */
.global m68k_lea_long_01003e34
m68k_lea_long_01003e34:
    ldrsh      r0, [sl], #2
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003e50 */
.global m68k_lea_long_01003e50
m68k_lea_long_01003e50:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    and        r2, fp, #0xe00
    add        r3, r6, #0x20
    orr        r0, r1, r0, lsl #16
    str        r0, [r3, r2, lsr #7]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003e74 */
.global m68k_jsr_01003e74
m68k_jsr_01003e74:
    ldrsh      r0, [sl], #2
    ldr        r4, [r6, #0x3c]
    ldr        lr, [r6, #0x54]
    sub        r4, r4, #4
    ldr        r1, [r6, #0x9c]
    sub        r3, sl, lr
    str        r4, [r6, #0x3c]
    orr        r3, r3, r1
    lsr        r2, r3, #0x10
    lsl        r4, r4, #0x10
    add        r4, r8, r4, lsr #16
    strh       r2, [r4], #2
    tst        r0, #0xc00000
    strh       r3, [r4]
    mov        r1, #0x80000000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0x120000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003ee8 */
.global m68k_jsr_01003ee8
m68k_jsr_01003ee8:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    ldr        r4, [r6, #0x3c]
    ldr        lr, [r6, #0x54]
    sub        r4, r4, #4
    ldr        r1, [r6, #0x9c]
    sub        r3, sl, lr
    str        r4, [r6, #0x3c]
    orr        r3, r3, r1
    lsr        r2, r3, #0x10
    lsl        r4, r4, #0x10
    add        r4, r8, r4, lsr #16
    strh       r2, [r4], #2
    tst        r0, #0xc00000
    strh       r3, [r4]
    mov        r1, #0x80000000
    ldreq      lr, [r6, #0x60]
    movne      lr, r8
    asreq      r1, r1, #9
    asrne      r1, r1, #0xf
    and        r2, r0, r1
    str        r2, [r6, #0x9c]
    mvn        r1, r1
    and        r0, r0, r1
    add        sl, lr, r0
    str        lr, [r6, #0x54]
    subs       r7, r7, #0x140000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003f64 */
.global m68k_addq_word_01003f64
m68k_addq_word_01003f64:
    ldrh       r0, [sl], #2
    bic        r7, r7, #0x1f
    lsr        r4, fp, #9
    add        r2, r0, r8
    ldrh       r0, [r2]
    ands       r4, r4, #7
    addeq      r4, r4, #8
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

/* 0x01003fac */
.global m68k_tst_byte_01003fac
m68k_tst_byte_01003fac:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01003fd8 */
.global m68k_tst_word_01003fd8
m68k_tst_word_01003fd8:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_word
    bic        r7, r7, #0xf
    lsls       r5, r0, #0x10
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x80000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01004004 */
.global m68k_tst_long_01004004
m68k_tst_long_01004004:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_long
    bic        r7, r7, #0xf
    tst        r0, r0
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0xc0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x01004030 */
.global m68k_move_01004030
m68k_move_01004030:
    ldr        r2, [r6, #0x50]
    and        r1, fp, #7
    tst        r2, #0x2000
    beq        .L_01004080
    ldrh       fp, [sl], #2
    add        r2, r6, #0x20
    ldr        r3, [r2, r1, lsl #2]
    sub        r7, r7, #0x40000
    str        r3, [r6, #0x48]
    ldr        pc, [sb, fp, lsl #2]

/* 0x01004058 */
.global m68k_move_01004058
m68k_move_01004058:
    ldr        r2, [r6, #0x50]
    and        r1, fp, #7
    tst        r2, #0x2000
    beq        .L_01004080
    ldr        r3, [r6, #0x48]
    add        r2, r6, #0x20
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    str        r3, [r2, r1, lsl #2]
    ldr        pc, [sb, fp, lsl #2]
.L_01004080:
    mov        r0, #8
    sub        r7, r7, #0x22
    b          start_m68k_move_handlers

/* 0x0100408c */
.global read_m68k_bus_byte
read_m68k_bus_byte:
    and        r1, r0, #0xf00000
    cmp        r1, #0xe00000
    blt        .L_010040a8
    eor        r0, r0, #1
    lsl        r1, r0, #0x10
    ldrb       r0, [r8, r1, lsr #16]
    bx         lr
.L_010040a8:
    tst        r1, #0xc00000
    bne        read_m68k_byte_from_page
    ldr        r2, [r6, #0x60]
    eor        r0, r0, #1
    lsl        r1, r0, #0xa
    ldrb       r0, [r2, r1, lsr #10]
    bx         lr

/* 0x010040c4 */
.global read_m68k_bus_word
read_m68k_bus_word:
    and        r1, r0, #0xf00000
    cmp        r1, #0xe00000
    blt        .L_010040e0
    lsl        r1, r0, #0x10
    lsr        r1, r1, #0x10
    ldrh       r0, [r8, r1]
    bx         lr
.L_010040e0:
    tst        r1, #0xc00000
    bne        read_m68k_word_from_page
    ldr        r2, [r6, #0x60]
    lsl        r1, r0, #0xa
    lsr        r1, r1, #0xa
    ldrh       r0, [r2, r1]
    bx         lr

/* 0x010040fc */
.global read_m68k_bus_long
read_m68k_bus_long:
    and        r1, r0, #0xf00000
    cmp        r1, #0xe00000
    blt        .L_01004120
    lsl        r1, r0, #0x10
    add        r1, r8, r1, lsr #16
    ldrh       r0, [r1], #2
    ldrh       r2, [r1]
    orr        r0, r2, r0, lsl #16
    bx         lr
.L_01004120:
    tst        r1, #0xc00000
    bne        read_m68k_long_from_page
    ldr        r2, [r6, #0x60]
    lsl        r1, r0, #0xa
    add        r1, r2, r1, lsr #10
    ldrh       r0, [r1], #2
    ldrh       r2, [r1]
    orr        r0, r2, r0, lsl #16
    bx         lr

/* 0x01004144 */
.global write_m68k_bus_byte
write_m68k_bus_byte:
    and        r2, r0, #0xf00000
    cmp        r2, #0xe00000
    blt        address_02003cf8
    eor        r0, r0, #1
    lsl        r0, r0, #0x10
    strb       r1, [r8, r0, lsr #16]
    bx         lr

/* 0x01004160 */
.global write_m68k_bus_word
write_m68k_bus_word:
    and        r2, r0, #0xf00000
    cmp        r2, #0xe00000
    blt        .L_0100417c
    lsl        r0, r0, #0x10
    lsr        r0, r0, #0x10
    strh       r1, [r8, r0]
    bx         lr
.L_0100417c:
    cmp        r2, #0xc00000
    blt        address_02003d24
    tst        r0, #0x1c
    mov        r0, r1
    bne        write_vdp_control_port_word
    b          write_vdp_data_port_word

/* 0x01004194 */
.global write_m68k_bus_long
write_m68k_bus_long:
    and        r2, r0, #0xf00000
    cmp        r2, #0xe00000
    blt        .L_010041b8
    lsl        r0, r0, #0x10
    add        r0, r8, r0, lsr #16
    lsr        r2, r1, #0x10
    strh       r2, [r0], #2
    strh       r1, [r0]
    bx         lr
.L_010041b8:
    cmp        r2, #0xc00000
    blt        address_02003d50
    tst        r0, #0x1c
    mov        r0, r1
    bne        address_0200abe4
    b          address_0200b24c

/* 0x010041d0 */
.global write_m68k_bus_long_via_table
write_m68k_bus_long_via_table:
    and        r2, r0, #0xf00000
    cmp        r2, #0xe00000
    blt        write_m68k_bus_long_for_predecrement
    lsl        r0, r0, #0x10
    add        r0, r8, r0, lsr #16
    lsr        r2, r1, #0x10
    strh       r2, [r0], #2
    strh       r1, [r0]
    bx         lr

/* 0x010041f4 */
.global address_010041f4
address_010041f4:
    ldr        lr, [sb, fp, lsl #2]
    and        r2, r0, #0xf00000
    cmp        r2, #0xe00000
    blt        address_02003cf8
    eor        r0, r0, #1
    lsl        r0, r0, #0x10
    strb       r1, [r8, r0, lsr #16]
    bx         lr

/* 0x01004214 */
.global address_01004214
address_01004214:
    ldr        lr, [sb, fp, lsl #2]
    and        r2, r0, #0xf00000
    cmp        r2, #0xe00000
    blt        .L_01004234
    lsl        r0, r0, #0x10
    lsr        r0, r0, #0x10
    strh       r1, [r8, r0]
    bx         lr
.L_01004234:
    cmp        r2, #0xc00000
    blt        address_02003d24
    tst        r0, #0x1c
    mov        r0, r1
    bne        write_vdp_control_port_word
    b          write_vdp_data_port_word

/* 0x0100424c */
.global address_0100424c
address_0100424c:
    ldr        lr, [sb, fp, lsl #2]
    and        r2, r0, #0xf00000
    cmp        r2, #0xe00000
    blt        .L_01004274
    lsl        r0, r0, #0x10
    add        r0, r8, r0, lsr #16
    lsr        r2, r1, #0x10
    strh       r2, [r0], #2
    strh       r1, [r0]
    bx         lr
.L_01004274:
    cmp        r2, #0xc00000
    blt        address_02003d50
    tst        r0, #0x1c
    mov        r0, r1
    bne        address_0200abe4
    b          address_0200b24c

/* 0x0100428c */
.global address_0100428c
address_0100428c:
    ldr        lr, [sb, fp, lsl #2]
    and        r2, r0, #0xf00000
    cmp        r2, #0xe00000
    blt        write_m68k_bus_long_for_predecrement
    lsl        r0, r0, #0x10
    add        r0, r8, r0, lsr #16
    lsr        r2, r1, #0x10
    strh       r2, [r0], #2
    strh       r1, [r0]
    bx         lr
    .fill 4, 1, 0xff
    .fill 4, 1, 0xff
    .fill 4, 1, 0xff
