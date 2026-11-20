/* YM2612 setup, channel preparation, and PCM mixing. 0x037f9afc–0x037f9d9c. */


/* 0x037f9afc */
.global apply_ym2612_bank0_writes
apply_ym2612_bank0_writes:
    push       {r4, r5, r6, r7, r8, lr}
    subs       r6, r1, #0
    mov        r5, r0
    beq        .L_037f9b78
    mov        r4, r0
    mov        r7, #1
    mov        r8, #4
    b          .L_037f9b34
.L_037f9b1c:
    mov        r1, ip
    bl         write_ym2612_channel_or_operator_register
.L_037f9b24:
    add        r4, r4, #2
    rsb        r3, r5, r4
    cmp        r6, r3
    bls        .L_037f9b78
.L_037f9b34:
    ldrb       r0, [r4]
    and        r3, r0, #0xf0
    cmp        r3, #0x20
    ldrb       ip, [r4, #1]
    bne        .L_037f9b1c
    sub        r3, r0, #0x24
    cmp        r3, #7
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_037f9b24
    .word .L_037f9b80
    .word .L_037f9bb8
    .word .L_037f9bf4
    .word .L_037f9c28
    .word .L_037f9c54
    .word .L_037f9b24
    .word .L_037f9b24
    .word .L_037f9cf8
.L_037f9b78:
    pop        {r4, r5, r6, r7, r8, lr}
    bx         lr
.L_037f9b80:
    ldr        r0, .L_037f9d94
    ldr        r2, [r0, #0x14]
    and        r3, r2, #3
    orr        r1, r3, ip, lsl #2
    cmp        r2, r1
    beq        .L_037f9b24
    rsb        r3, r1, #0x400
    add        r3, r3, r3, lsl #3
    lsl        r3, r3, #1
    mov        r2, #0
    str        r2, [r0, #0x1c]
    str        r3, [r0, #0x18]
    str        r1, [r0, #0x14]
    b          .L_037f9b24
.L_037f9bb8:
    ldr        lr, .L_037f9d94
    ldr        r1, [lr, #0x14]
    and        r2, ip, #3
    and        r3, r1, #0x3fc
    orr        r0, r3, r2
    cmp        r1, r0
    beq        .L_037f9b24
    rsb        r3, r0, #0x400
    add        r3, r3, r3, lsl #3
    lsl        r3, r3, #1
    mov        r2, #0
    str        r2, [lr, #0x1c]
    str        r3, [lr, #0x18]
    str        r0, [lr, #0x14]
    b          .L_037f9b24
.L_037f9bf4:
    ldr        r1, .L_037f9d94
    ldrb       r3, [r1, #0x20]
    cmp        ip, r3
    beq        .L_037f9b24
    rsb        r3, ip, #0x100
    lsl        r2, r3, #7
    add        r2, r2, r3, lsl #4
    lsl        r2, r2, #1
    mov        r3, #0
    str        r3, [r1, #0x28]
    str        r2, [r1, #0x24]
    strb       ip, [r1, #0x20]
    b          .L_037f9b24
.L_037f9c28:
    ldr        r2, .L_037f9d94
    tst        ip, #0x20
    ldrbne     r3, [r2, #0x11]
    bicne      r3, r3, #2
    strbne     r3, [r2, #0x11]
    tst        ip, #0x10
    strb       ip, [r2, #0x12]
    ldrbne     r3, [r2, #0x11]
    bicne      r3, r3, #1
    strbne     r3, [r2, #0x11]
    b          .L_037f9b24
.L_037f9c54:
    and        r3, ip, #3
    cmp        r3, #3
    beq        .L_037f9b24
    tst        ip, #4
    addne      r3, r3, #3
    add        r3, r3, r3, lsl #1
    ldr        r2, .L_037f9d98
    add        r3, r3, r3, lsl #3
    ands       r0, ip, #0x10
    add        r1, r2, r3, lsl #3
    beq        .L_037f9d08
    ldrb       r3, [r1, #0x16]
    cmp        r3, #0
    streq      r3, [r1, #0xc]
    strbeq     r7, [r1, #0x16]
    strbeq     r8, [r1, #0x17]
.L_037f9c94:
    ands       r0, ip, #0x20
    beq        .L_037f9d70
    add        r3, r1, #0x60
    ldrb       r2, [r3, #0x16]
    cmp        r2, #0
    streq      r2, [r3, #0xc]
    strbeq     r8, [r3, #0x17]
    strbeq     r7, [r3, #0x16]
.L_037f9cb4:
    ands       r0, ip, #0x40
    beq        .L_037f9d4c
    add        r3, r1, #0x30
    ldrb       r2, [r3, #0x16]
    cmp        r2, #0
    streq      r2, [r3, #0xc]
    strbeq     r8, [r3, #0x17]
    strbeq     r7, [r3, #0x16]
.L_037f9cd4:
    ands       r0, ip, #0x80
    beq        .L_037f9d28
    add        r3, r1, #0x90
    ldrb       r2, [r3, #0x16]
    cmp        r2, #0
    streq      r2, [r3, #0xc]
    strbeq     r8, [r3, #0x17]
    strbeq     r7, [r3, #0x16]
    b          .L_037f9b24
.L_037f9cf8:
    ldr        r3, .L_037f9d94
    and        r2, ip, #0x80
    str        r2, [r3, #0x970]
    b          .L_037f9b24
.L_037f9d08:
    ldrb       r3, [r1, #0x16]
    cmp        r3, #0
    beq        .L_037f9c94
    ldrb       r3, [r1, #0x17]
    cmp        r3, #1
    strb       r0, [r1, #0x16]
    strbhi     r7, [r1, #0x17]
    b          .L_037f9c94
.L_037f9d28:
    add        r2, r1, #0x90
    ldrb       r3, [r2, #0x16]
    cmp        r3, #0
    beq        .L_037f9b24
    ldrb       r3, [r2, #0x17]
    cmp        r3, #1
    strb       r0, [r2, #0x16]
    strbhi     r7, [r2, #0x17]
    b          .L_037f9b24
.L_037f9d4c:
    add        r2, r1, #0x30
    ldrb       r3, [r2, #0x16]
    cmp        r3, #0
    beq        .L_037f9cd4
    ldrb       r3, [r2, #0x17]
    cmp        r3, #1
    strb       r0, [r2, #0x16]
    strbhi     r7, [r2, #0x17]
    b          .L_037f9cd4
.L_037f9d70:
    add        r2, r1, #0x60
    ldrb       r3, [r2, #0x16]
    cmp        r3, #0
    beq        .L_037f9cb4
    ldrb       r3, [r2, #0x17]
    cmp        r3, #1
    strb       r0, [r2, #0x16]
    strbhi     r7, [r2, #0x17]
    b          .L_037f9cb4
.L_037f9d94:
    .word 0x03806ea8
.L_037f9d98:
    .word 0x03807308
