/* Format hexadecimal. Release range 0x0200db8c–0x0200dc64. */


/* 0x0200db8c */
.global format_hexadecimal_value
format_hexadecimal_value:
    ldr        r3, .L_0200dc4c
    push       {r4, r5, r6, r7, lr}
    mov        r7, r0
    ldr        r0, [r3]
    mov        ip, r1
    cmp        r0, #0
    popeq      {r4, r5, r6, r7, pc}
    ldr        lr, .L_0200dc50
    add        r2, r2, ip, lsl #5
    umull      r3, r1, lr, r7
    ldr        r3, .L_0200dc54
    lsrs       r1, r1, #3
    ldr        r0, [r3]
    add        r0, r0, r2, lsl #1
    beq        .L_0200dc44
    mov        r2, lr
    mov        ip, #0
.L_0200dbd0:
    umull      lr, r3, r2, r1
    lsrs       r1, r3, #3
    add        ip, ip, #1
    bne        .L_0200dbd0
    cmp        ip, #0
    poplt      {r4, r5, r6, r7, pc}
.L_0200dbe8:
    ldr        r3, .L_0200dc58
    ldr        r2, .L_0200dc5c
    ldr        r1, [r3]
    ldrb       r5, [r2]
    lsl        r1, r1, #0x10
    ldr        r6, .L_0200dc60
    add        lr, r0, ip, lsl #1
    lsr        r4, r1, #0x10
    mov        r0, r7
.L_0200dc0c:
    ldr        r3, .L_0200dc50
    subs       ip, ip, #1
    umull      r2, r1, r3, r0
    lsr        r1, r1, #3
    add        r2, r1, r1, lsl #2
    sub        r2, r0, r2, lsl #1
    ldrb       r3, [r6, r2]
    mov        r0, r1
    rsb        r3, r5, r3
    and        r3, r3, #0xff
    orr        r3, r4, r3
    strh       r3, [lr], #-2
    bpl        .L_0200dc0c
    pop        {r4, r5, r6, r7, pc}
.L_0200dc44:
    mov        ip, r1
    b          .L_0200dbe8
.L_0200dc4c:
    .word 0x020b4c50
.L_0200dc50:
    .word 0xcccccccd
.L_0200dc54:
    .word 0x020b4c58
.L_0200dc58:
    .word 0x020b4c54
.L_0200dc5c:
    .word address_0208f35c
.L_0200dc60:
    .word address_0208ec90
