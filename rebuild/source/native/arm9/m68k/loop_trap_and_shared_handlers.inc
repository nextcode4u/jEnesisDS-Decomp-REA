/* 68000 instruction handlers in ARM9 main memory. 0x02032400–0x02032c28. */


/* 0x02032400 */
.global m68k_dbt
m68k_dbt:
    add        sl, sl, #2
    subs       r7, r7, #0xc0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032414 */
.global m68k_dbhi
m68k_dbhi:
    tst        r7, #5
    beq        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032454 */
.global m68k_dbls
m68k_dbls:
    tst        r7, #5
    bne        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032494 */
.global m68k_dbcc
m68k_dbcc:
    tst        r7, #1
    beq        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x020324d4 */
.global m68k_dbcs
m68k_dbcs:
    tst        r7, #1
    bne        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032514 */
.global m68k_dbne
m68k_dbne:
    tst        r7, #4
    beq        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032554 */
.global m68k_dbeq
m68k_dbeq:
    tst        r7, #4
    bne        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032594 */
.global m68k_dbvc
m68k_dbvc:
    tst        r7, #2
    beq        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x020325d4 */
.global m68k_dbvs
m68k_dbvs:
    tst        r7, #2
    bne        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032614 */
.global m68k_dbpl
m68k_dbpl:
    tst        r7, #8
    beq        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032654 */
.global m68k_dbmi
m68k_dbmi:
    tst        r7, #8
    bne        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032694 */
.global m68k_dbge
m68k_dbge:
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    beq        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x020326d8 */
.global m68k_dblt
m68k_dblt:
    eor        r5, r7, r7, lsr #2
    tst        r5, #2
    bne        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x0203271c */
.global m68k_dbgt
m68k_dbgt:
    tst        r7, #4
    eoreq      r5, r7, r7, lsr #2
    tsteq      r5, #2
    beq        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032764 */
.global m68k_dble
m68k_dble:
    tst        r7, #4
    eoreq      r5, r7, r7, lsr #2
    tsteq      r5, #2
    bne        .L_020327ac
    and        r1, fp, #7
    lsl        r1, r1, #2
    ldrh       r2, [r6, r1]
    sub        r3, r2, #1
    strh       r3, [r6, r1]
    tst        r2, r2
    ldrshne    r2, [sl]
    addeq      sl, sl, #2
    subeq      r7, r7, #0x40000
    addne      sl, sl, r2
    subs       r7, r7, #0xa0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020327ac:
    add        sl, sl, #2
    subs       r7, r7, #0xc0000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x020327c0 */
.global m68k_rtr
m68k_rtr:
    ldr        r2, [r6, #0x3c]
    mov        r5, #0x80000000
    lsl        r1, r2, #0x10
    add        r2, r2, #6
    str        r2, [r6, #0x3c]
    add        r1, r8, r1, lsr #16
    ldrh       r3, [r1], #2
    bic        r7, r7, #0x1f
    and        r3, r3, #0x1f
    orr        r7, r7, r3
    ldrh       r2, [r1], #2
    ldrh       r3, [r1]
    tst        r2, #0xc0
    ldreq      lr, [r6, #0x60]
    asreq      r5, r5, #9
    movne      lr, r8
    asrne      r5, r5, #0xf
    orr        r2, r3, r2, lsl #16
    and        r1, r2, r5
    str        r1, [r6, #0x9c]
    str        lr, [r6, #0x54]
    mvn        r5, r5
    and        r2, r2, r5
    add        sl, lr, r2
    subs       r7, r7, #0x140000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032830 */
.global m68k_andi_word_02032830
m68k_andi_word_02032830:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_02032938
    ldrh       r3, [sl], #2
    and        r2, r2, #0xa700
    and        r0, r7, #0x1f
    orr        r2, r2, r0
    and        r2, r2, r3
    and        r3, r2, #0xa700
    str        r3, [r6, #0x50]
    and        r2, r2, #0x1f
    bic        r7, r7, #0x1f
    orr        r7, r7, r2
    tst        r3, #0x2000
    bne        .L_0203287c
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0203287c:
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032888 */
.global m68k_eori_word_02032888
m68k_eori_word_02032888:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_02032938
    ldrh       r3, [sl], #2
    and        r2, r2, #0xa700
    and        r0, r7, #0x1f
    orr        r2, r2, r0
    eor        r2, r2, r3
    and        r3, r2, #0xa700
    str        r3, [r6, #0x50]
    and        r2, r2, #0x1f
    bic        r7, r7, #0x1f
    orr        r7, r7, r2
    tst        r3, #0x2000
    bne        .L_020328d4
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_020328d4:
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]

/* 0x020328e0 */
.global m68k_ori_word_020328e0
m68k_ori_word_020328e0:
    ldr        r2, [r6, #0x50]
    tst        r2, #0x2000
    beq        .L_02032938
    ldrh       r3, [sl], #2
    and        r2, r2, #0xa700
    and        r0, r7, #0x1f
    orr        r2, r2, r0
    orr        r2, r2, r3
    and        r3, r2, #0xa700
    str        r3, [r6, #0x50]
    and        r2, r2, #0x1f
    bic        r7, r7, #0x1f
    orr        r7, r7, r2
    tst        r3, #0x2000
    bne        .L_0203292c
    ldr        r1, [r6, #0x3c]
    ldr        r2, [r6, #0x48]
    str        r1, [r6, #0x48]
    str        r2, [r6, #0x3c]
.L_0203292c:
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x140000
    ldr        pc, [sb, fp, lsl #2]
.L_02032938:
    mov        r0, #8
    sub        r7, r7, #0x22
    b          start_m68k_move_handlers

/* 0x02032944 */
.global m68k_reset
m68k_reset:
    subs       r7, r7, #0x40000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032954 */
.global m68k_stop
m68k_stop:
    ldrh       r5, [sl], #2
    sub        r7, r7, #0x40000
    ldr        r1, [r6, #0x50]
    and        r4, r5, #0xa700
    str        r4, [r6, #0x50]
    bic        r7, r7, #0x1f
    and        r0, r5, #0x1f
    orr        r7, r7, r0
    eor        r1, r1, #0x2000
    orr        r1, r1, r4
    tst        r1, #0x2000
    moveq      r0, #8
    beq        start_m68k_move_handlers
    tst        r4, #0x8000
    movne      r0, #9
    bne        start_m68k_move_handlers
    mov        r1, #1
    strb       r1, [r6, #0xa2]
    b          address_01003094

/* 0x020329a0 */
.global m68k_shared_opcode_decode_020329a0
m68k_shared_opcode_decode_020329a0:
    ldr        r1, .L_020329ec
    cmp        fp, r1
    moveq      r0, #4
    beq        .L_020329e0
    lsr        r2, fp, #0xc
    and        r2, r2, #0xf
    cmp        r2, #0xf
    moveq      r0, #0xb
    beq        .L_020329e0
    cmp        r2, #0xa
    moveq      r0, #0xa
    beq        .L_020329e0
    subs       r7, r7, #0x40000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]
.L_020329e0:
    sub        sl, sl, #2
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers
.L_020329ec:
    .word 0x00004afc

/* 0x020329f0 */
.global m68k_trap
m68k_trap:
    and        r0, fp, #0xf
    add        r0, r0, #0x20
    sub        r7, r7, #0x220000
    b          start_m68k_move_handlers

/* 0x02032a00 */
.global m68k_trapv
m68k_trapv:
    tst        r7, #2
    subne      r7, r7, #0x220000
    movne      r0, #7
    bne        start_m68k_move_handlers
    subs       r7, r7, #0x40000
    ldrhgt     fp, [sl], #2
    ble        address_01003084
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032a20 */
.global m68k_andi_byte_02032a20
m68k_andi_byte_02032a20:
    ldrh       r2, [sl], #2
    subs       r7, r7, #0x140000
    and        r0, r7, r2
    ldrh       fp, [sl], #2
    bic        r7, r7, #0x1f
    and        r0, r0, #0x1f
    orr        r7, r7, r0
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032a40 */
.global m68k_eori_byte_02032a40
m68k_eori_byte_02032a40:
    ldrh       r2, [sl], #2
    subs       r7, r7, #0x140000
    ldrh       fp, [sl], #2
    and        r2, r2, #0x1f
    eor        r7, r7, r2
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032a58 */
.global m68k_ori_byte_02032a58
m68k_ori_byte_02032a58:
    ldrh       r2, [sl], #2
    subs       r7, r7, #0x140000
    ldrh       fp, [sl], #2
    and        r2, r2, #0x1f
    orr        r7, r7, r2
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032a70 */
.global m68k_tas_byte_02032a70
m68k_tas_byte_02032a70:
    and        r1, fp, #7
    ldrb       r0, [r6, r1, lsl #2]
    bic        r7, r7, #0xf
    lsls       r0, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    lsr        r5, r0, #0x18
    orr        r5, r5, #0x80
    strb       r5, [r6, r1, lsl #2]
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x40000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032aa0 */
.global m68k_tas_byte_02032aa0
m68k_tas_byte_02032aa0:
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r0, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032acc */
.global m68k_tas_byte_02032acc
m68k_tas_byte_02032acc:
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
    lsls       r0, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x120000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032b0c */
.global m68k_tas_byte_02032b0c
m68k_tas_byte_02032b0c:
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
    lsls       r0, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x160000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032b4c */
.global m68k_tas_byte_02032b4c
m68k_tas_byte_02032b4c:
    ldrsh      r3, [sl], #2
    and        r1, fp, #7
    add        r2, r6, #0x20
    ldr        r0, [r2, r1, lsl #2]
    add        r0, r0, r3
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r0, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032b80 */
.global m68k_tas_byte_02032b80
m68k_tas_byte_02032b80:
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
    lsls       r0, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1e0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032bd8 */
.global m68k_tas_byte_02032bd8
m68k_tas_byte_02032bd8:
    ldrsh      r0, [sl], #2
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r0, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x1a0000
    ldr        pc, [sb, fp, lsl #2]

/* 0x02032bfc */
.global m68k_tas_byte_02032bfc
m68k_tas_byte_02032bfc:
    ldrh       r0, [sl], #2
    ldrh       r1, [sl], #2
    orr        r0, r1, r0, lsl #16
    bl         read_m68k_bus_byte
    bic        r7, r7, #0xf
    lsls       r0, r0, #0x18
    orreq      r7, r7, #4
    orrmi      r7, r7, #8
    ldrh       fp, [sl], #2
    sub        r7, r7, #0x220000
    ldr        pc, [sb, fp, lsl #2]
