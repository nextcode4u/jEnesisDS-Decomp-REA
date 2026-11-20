/* M68k bus writes. Release range 0x02003cf8–0x02003d98. */


/* 0x02003cf8 */
.global write_m68k_byte_to_bus_page
write_m68k_byte_to_bus_page:
    str        lr, [sp, #-4]!
    bic        r3, r0, #0xff000000
    mov        r0, r3
    sub        sp, sp, #4
    lsr        r3, r3, #0x10
    ldr        r2, .L_02003d20
    mov        lr, pc
    ldr        pc, [r2, r3, lsl #2]
    add        sp, sp, #4
    ldm        sp!, {pc}
.L_02003d20:
    .word address_0b000e1c

/* 0x02003d24 */
.global write_m68k_word_to_bus_page
write_m68k_word_to_bus_page:
    str        lr, [sp, #-4]!
    bic        r3, r0, #0xff000000
    mov        r0, r3
    sub        sp, sp, #4
    lsr        r3, r3, #0x10
    ldr        r2, .L_02003d4c
    mov        lr, pc
    ldr        pc, [r2, r3, lsl #2]
    add        sp, sp, #4
    ldm        sp!, {pc}
.L_02003d4c:
    .word address_0b00121c

/* 0x02003d50 */
.global write_m68k_long_to_bus_page
write_m68k_long_to_bus_page:
    push       {r4, r5, r6, r7, lr}
    bic        r5, r0, #0xff000000
    mov        r4, r1
    mov        r0, r5
    sub        sp, sp, #4
    lsr        r1, r1, #0x10
    lsr        r7, r5, #0x10
    ldr        r6, .L_02003d94
    lsl        r4, r4, #0x10
    mov        lr, pc
    ldr        pc, [r6, r7, lsl #2]
    add        r0, r5, #2
    lsr        r1, r4, #0x10
    mov        lr, pc
    ldr        pc, [r6, r7, lsl #2]
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, pc}
.L_02003d94:
    .word address_0b00121c
