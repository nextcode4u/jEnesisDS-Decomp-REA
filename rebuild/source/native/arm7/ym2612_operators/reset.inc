/* YM2612 envelope stepping and register decoding. 0x037f9238–0x037f9394. */


/* 0x037f9238 */
.global reset_ym2612_registers
reset_ym2612_registers:
    push       {r4, r5, lr}
    ldr        r5, .L_037f9390
    mov        r3, #0
    add        ip, r5, #0x460
    str        r3, [r5, #0x454]
    str        r3, [r5, #0x450]
    str        r3, [r5, #0x45c]
    strb       r3, [r5, #0x11]
    strb       r3, [r5, #0x12]
    str        r3, [r5, #0x14]
    str        r3, [r5, #0x18]
    strb       r3, [r5, #0x20]
    str        r3, [r5, #0x24]
    sub        sp, sp, #4
    add        r4, r5, #0x970
    mvn        lr, #0xfc00
    rsb        r0, r5, ip, lsl #1
.L_037f927c:
    str        r3, [r0, #-0x390]
    mov        r2, ip
    mov        r1, r3
.L_037f9288:
    add        r1, r1, #1
    cmp        r1, #4
    strb       r3, [r2, #0x17]
    strh       lr, [r2, #0x1a]
    add        r2, r2, #0x30
    bne        .L_037f9288
    add        ip, ip, #0xd8
    cmp        ip, r4
    add        r0, r0, #0xd8
    bne        .L_037f927c
    add        r1, r1, #0xbc
    mov        r0, #0xb6
    bl         write_ym2612_channel_or_operator_register
    mov        r0, #0x1b4
    mov        r1, #0xc0
    add        r0, r0, #2
    bl         write_ym2612_channel_or_operator_register
    mov        r1, #0xc0
    mov        r0, #0xb5
    bl         write_ym2612_channel_or_operator_register
    mov        r0, #0x1b4
    mov        r1, #0xc0
    add        r0, r0, #1
    bl         write_ym2612_channel_or_operator_register
    mov        r1, #0xc0
    mov        r0, #0xb4
    bl         write_ym2612_channel_or_operator_register
    mov        r0, #0x1b4
    mov        r1, #0xc0
    bl         write_ym2612_channel_or_operator_register
    mov        r4, #0xb2
.L_037f9304:
    mov        r0, r4
    mov        r1, #0
    bl         write_ym2612_channel_or_operator_register
    orr        r0, r4, #0x100
    mov        r1, #0
    sub        r4, r4, #1
    bl         write_ym2612_channel_or_operator_register
    cmp        r4, #0x2f
    bne        .L_037f9304
    mov        r1, #0
    mov        r0, #0x26
    bl         write_ym2612_channel_or_operator_register
    mov        r1, #0
    mov        r0, #0x25
    bl         write_ym2612_channel_or_operator_register
    mov        r1, #0
    mov        r0, #0x24
    bl         write_ym2612_channel_or_operator_register
    mov        r1, #0
    mov        r0, #0x23
    bl         write_ym2612_channel_or_operator_register
    mov        r1, #0
    mov        r0, #0x22
    bl         write_ym2612_channel_or_operator_register
    mov        r1, #0
    mov        r0, #0x21
    bl         write_ym2612_channel_or_operator_register
    mov        r0, #0x20
    mov        r1, #0
    bl         write_ym2612_channel_or_operator_register
    mov        r3, #0
    str        r3, [r5, #0x970]
    add        sp, sp, #4
    pop        {r4, r5, lr}
    bx         lr
.L_037f9390:
    .word 0x03806ea8
