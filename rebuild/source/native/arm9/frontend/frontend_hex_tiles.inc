/* Frontend hex tiles. Release range 0x0200dc64–0x0200dd20. */


/* 0x0200dc64 */
.global write_hexadecimal_value_to_overlay
write_hexadecimal_value_to_overlay:
    ldr        r3, .L_0200dd00
    push       {r4, r5, r6, r7, lr}
    mov        r6, r0
    ldr        r0, [r3]
    cmp        r0, #0
    popeq      {r4, r5, r6, r7, pc}
    add        r3, r2, r1, lsl #5
    ldr        r2, .L_0200dd04
    lsrs       r0, r6, #4
    ldr        r1, [r2]
    add        r7, r1, r3, lsl #1
    beq        .L_0200dcf8
    mov        ip, #0
.L_0200dc98:
    lsrs       r0, r0, #4
    add        ip, ip, #1
    bne        .L_0200dc98
    cmp        ip, #0
    poplt      {r4, r5, r6, r7, pc}
.L_0200dcac:
    ldr        r3, .L_0200dd08
    ldr        r2, .L_0200dd0c
    ldr        r1, [r3]
    ldrb       r4, [r2]
    lsl        r1, r1, #0x10
    ldr        r5, .L_0200dd10
    lsr        lr, r1, #0x10
    mov        r0, r6
    add        r1, r7, ip, lsl #1
.L_0200dcd0:
    and        r2, r0, #0xf
    ldrb       r3, [r5, r2]
    subs       ip, ip, #1
    rsb        r3, r4, r3
    and        r3, r3, #0xff
    orr        r3, lr, r3
    strh       r3, [r1], #-2
    lsr        r0, r0, #4
    bpl        .L_0200dcd0
    pop        {r4, r5, r6, r7, pc}
.L_0200dcf8:
    mov        ip, r0
    b          .L_0200dcac
.L_0200dd00:
    .word 0x020b4c50
.L_0200dd04:
    .word 0x020b4c58
.L_0200dd08:
    .word 0x020b4c54
.L_0200dd0c:
    .word address_0208f35c
.L_0200dd10:
    .word address_0208ec90
    .fill 4, 1, 0xff
    .fill 4, 1, 0xff
    .fill 4, 1, 0xff
