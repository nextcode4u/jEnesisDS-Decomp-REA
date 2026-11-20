/* ARM9 tightly coupled instruction memory code. 0x01002cd0–0x01002f60. */


/* 0x01002cd0 */
.global dispatch_z80_mapped_read_by_address_page
dispatch_z80_mapped_read_by_address_page:
    ldr        r1, [sp, #0x98]
    and        r2, r0, #0xf000
    ldr        pc, [r1, r2, lsr #10]

/* 0x01002cdc */
.global read_z80_mapped_byte_preserving_r1
read_z80_mapped_byte_preserving_r1:
    str        r1, [sp, #0x68]
    ldr        r1, [sp, #0x9c]
    and        r2, r0, #0xf000
    ldr        pc, [r1, r2, lsr #10]

/* 0x01002cec */
.global dispatch_z80_mapped_read_from_r10
dispatch_z80_mapped_read_from_r10:
    ldr        r1, [sp, #0x98]
    lsr        r0, sl, #0x10
    and        r2, r0, #0xf000
    ldr        pc, [r1, r2, lsr #10]

/* 0x01002cfc */
.global bridge_to_z80_mapped_word_read
bridge_to_z80_mapped_word_read:
    add        lr, lr, #0x10
    push       {r3, ip, lr}
    bl         read_z80_mapped_little_endian_word
    ldr        r2, .L_01002f5c
    pop        {r3, ip, pc}

/* 0x01002d10 */
.global route_z80_mapped_byte_write
route_z80_mapped_byte_write:
    add        lr, lr, #4
    push       {r3, ip, lr}
    cmp        r0, #0x3000
    bge        .L_01002d4c
    bl         queue_ym2612_register_or_dac_write
    ldr        r2, .L_01002f5c
    pop        {r3, ip, pc}

/* 0x01002d2c */
.global route_z80_mapped_byte_write_from_r10
route_z80_mapped_byte_write_from_r10:
    lsr        r0, sl, #0x10
    add        lr, lr, #4
    push       {r3, ip, lr}
    cmp        r0, #0x3000
    bge        .L_01002d4c
    bl         queue_ym2612_register_or_dac_write
    ldr        r2, .L_01002f5c
    pop        {r3, ip, pc}
.L_01002d4c:
    bl         write_z80_mapped_byte
    ldr        r2, .L_01002f5c
    pop        {r3, ip, pc}
    add        lr, lr, #0x10
    push       {r3, ip, lr}
    bl         write_z80_mapped_little_endian_word
    ldr        r2, .L_01002f5c
    pop        {r3, ip, pc}

/* 0x01002d6c */
.global z80_alternate_decode_01002d6c
z80_alternate_decode_01002d6c:
    bic        r0, r0, #0x4000
    ldrb       r0, [r3, r0]
    ldr        r2, [sp, #0x94]
    add        pc, lr, #4

/* 0x01002d7c */
.global z80_alternate_decode_01002d7c
z80_alternate_decode_01002d7c:
    ldr        r0, [sp, #0x80]
    ldr        r2, [sp, #0x94]
    and        r0, r0, #3
    add        pc, lr, #4

/* 0x01002d8c */
.global z80_alternate_decode_01002d8c
z80_alternate_decode_01002d8c:
    mov        r0, #0xff
    ldr        r2, [sp, #0x94]
    add        pc, lr, #4

/* 0x01002d98 */
.global z80_alternate_decode_01002d98
z80_alternate_decode_01002d98:
    add        lr, lr, #4
    cmp        r0, #0x7f00
    movlt      r0, #0
    bxlt       lr
    tst        r0, #0xe0
    movne      r0, #0
    bxne       lr
    and        r0, r0, #0x1f
    ldr        r2, [sp, #0x94]
    bx         lr

/* 0x01002dc0 */
.global z80_alternate_decode_01002dc0
z80_alternate_decode_01002dc0:
    ldr        r1, [sp, #0xac]
    bic        r0, r0, #0x8000
    ldr        r1, [r1]
    orr        r0, r0, r1
    cmp        r0, #0x400000
    bge        .L_01002dec
    ldr        r1, [sp, #0xb0]
    eor        r0, r0, #1
    ldrb       r0, [r1, r0]
    ldr        r2, [sp, #0x94]
    add        pc, lr, #4
.L_01002dec:
    add        lr, lr, #4
    push       {r3, ip, lr}
    bl         read_z80_banked_cartridge_byte
    ldr        r2, .L_01002f5c
    pop        {r3, ip, pc}

/* 0x01002e00 */
.global z80_alternate_decode_01002e00
z80_alternate_decode_01002e00:
    bic        r0, r0, #0x4000
    ldrb       r0, [r3, r0]
    ldr        r2, [sp, #0x94]
    ldr        r1, [sp, #0x68]
    add        pc, lr, #4

/* 0x01002e14 */
.global z80_alternate_decode_01002e14
z80_alternate_decode_01002e14:
    ldr        r0, [sp, #0x80]
    ldr        r2, [sp, #0x94]
    and        r0, r0, #3
    ldr        r1, [sp, #0x68]
    add        pc, lr, #4

/* 0x01002e28 */
.global z80_alternate_decode_01002e28
z80_alternate_decode_01002e28:
    mov        r0, #0xff
    ldr        r2, [sp, #0x94]
    ldr        r1, [sp, #0x68]
    add        pc, lr, #4

/* 0x01002e38 */
.global z80_alternate_decode_01002e38
z80_alternate_decode_01002e38:
    cmp        r0, #0x7f00
    movlt      r0, #0xff
    bxlt       lr
    tst        r0, #0xe0
    movne      r0, #0xff
    bxne       lr
    and        r0, r0, #0x1f
    ldr        r2, [sp, #0x94]
    ldr        r1, [sp, #0x68]
    add        pc, lr, #4

/* 0x01002e60 */
.global z80_alternate_decode_01002e60
z80_alternate_decode_01002e60:
    ldr        r1, [sp, #0xac]
    bic        r0, r0, #0x8000
    ldr        r1, [r1]
    orr        r0, r0, r1
    cmp        r0, #0x400000
    bge        .L_01002dec
    ldr        r1, [sp, #0xb0]
    eor        r0, r0, #1
    ldrb       r0, [r1, r0]
    ldr        r2, [sp, #0x94]
    ldr        r1, [sp, #0x68]
    add        pc, lr, #4
    ldr        r1, [sp, #0x68]
    add        lr, lr, #4
    push       {r1, r3, ip, lr}
    bl         read_z80_banked_cartridge_byte
    ldr        r2, .L_01002f5c
    pop        {r1, r3, ip, pc}

/* 0x01002ea8 */
.global z80_alternate_decode_01002ea8
z80_alternate_decode_01002ea8:
    bic        r0, r0, #0x4000
    add        r0, r3, r0
    ldrb       r2, [r0], #1
    ldrb       r0, [r0]
    orr        r0, r2, r0, lsl #8
    ldr        r2, [sp, #0x94]
    add        pc, lr, #0x10

/* 0x01002ec4 */
.global z80_alternate_decode_01002ec4
z80_alternate_decode_01002ec4:
    ldr        r0, [sp, #0xa8]
    ldr        r2, [sp, #0x94]
    ldrb       r0, [r0, #0x1c]
    orr        r0, r0, r0, lsl #8
    add        pc, lr, #0x10

/* 0x01002ed8 */
.global z80_alternate_decode_01002ed8
z80_alternate_decode_01002ed8:
    mov        r0, #0xff
    orr        r0, r0, r0, lsl #8
    ldr        r2, [sp, #0x94]
    add        pc, lr, #0x10

/* 0x01002ee8 */
.global z80_alternate_decode_01002ee8
z80_alternate_decode_01002ee8:
    add        lr, lr, #0x10
    mov        r1, #0xff
    cmp        r0, #0x7f00
    orrlt      r0, r1, r1, lsl #8
    bxlt       lr
    tst        r0, #0xe0
    orrne      r0, r1, r1, lsl #8
    bxne       lr
    and        r0, r0, #0x1f
    ldr        r2, [sp, #0x94]
    bx         lr

/* 0x01002f14 */
.global z80_alternate_decode_01002f14
z80_alternate_decode_01002f14:
    ldr        r1, [sp, #0xac]
    bic        r0, r0, #0x8000
    ldr        r1, [r1]
    cmp        r1, #0x400000
    bge        .L_01002f48
    orr        r0, r0, r1
    ldr        r1, [sp, #0xb0]
    add        r1, r1, r0
    ldrb       r0, [r1], #1
    ldrb       r2, [r1]
    ldr        r2, [sp, #0x94]
    orr        r0, r2, r0, lsl #8
    add        pc, lr, #0x10
.L_01002f48:
    add        lr, lr, #0x10
    push       {r3, ip, lr}
    bl         read_z80_mapped_little_endian_word
    ldr        r2, .L_01002f5c
    pop        {r3, ip, pc}
.L_01002f5c:
    .word z80_base_dispatch
