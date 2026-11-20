/* M68k restore pc. Release range 0x02005164–0x0200526c. */


/* 0x02005164 */
.global rebase_m68k_program_counter_after_savestate
rebase_m68k_program_counter_after_savestate:
    push       {r4, r5, lr}
    mov        r4, r0
    ldrb       r1, [r0, #0x89]
    ldrb       r3, [r0, #0x88]
    ldrb       r2, [r4, #0x45]
    ldrb       r0, [r0, #0x44]
    ldrb       ip, [r4, #0x8a]
    ldrb       lr, [r4, #0x46]
    orr        r3, r3, r1, lsl #8
    orr        r0, r0, r2, lsl #8
    ldrb       r1, [r4, #0x8b]
    ldrb       r2, [r4, #0x47]
    orr        r3, r3, ip, lsl #16
    orr        r0, r0, lr, lsl #16
    orr        r3, r3, r1, lsl #24
    orr        r0, r0, r2, lsl #24
    sub        sp, sp, #4
    blx        r3
    ldr        r3, .L_02005268
    ldrb       r2, [r0]
    ldrb       r1, [r4, #0x44]
    str        r0, [r3]
    strb       r2, [r4, #0x54]
    ldrb       r3, [r0, #1]
    ldrb       lr, [r4, #0x45]
    strb       r3, [r4, #0x55]
    ldrb       r2, [r0, #2]
    ldrb       r5, [r4, #0x46]
    strb       r2, [r4, #0x56]
    ldrb       ip, [r0, #3]
    ldrb       r2, [r4, #0x47]
    strb       ip, [r4, #0x57]
    ldr        r3, [r0, #4]
    orr        r1, r1, lr, lsl #8
    orr        r1, r1, r5, lsl #16
    orr        r1, r1, r2, lsl #24
    mvn        r3, r3
    and        r3, r1, r3
    lsr        r2, r3, #8
    lsr        ip, r3, #0x10
    lsr        lr, r3, #0x18
    strb       ip, [r4, #0x9e]
    strb       r3, [r4, #0x9c]
    strb       r2, [r4, #0x9d]
    strb       lr, [r4, #0x9f]
    ldr        r2, [r0, #4]
    and        r1, r1, r2
    lsr        r3, r1, #8
    lsr        r2, r1, #0x10
    lsr        ip, r1, #0x18
    strb       r2, [r4, #0x46]
    strb       r1, [r4, #0x44]
    strb       r3, [r4, #0x45]
    strb       ip, [r4, #0x47]
    ldr        r3, [r0]
    add        r1, r1, r3
    lsr        r2, r1, #0x18
    lsr        r3, r1, #8
    lsr        r0, r1, #0x10
    strb       r2, [r4, #0x47]
    strb       r3, [r4, #0x45]
    strb       r0, [r4, #0x46]
    strb       r1, [r4, #0x44]
    add        sp, sp, #4
    pop        {r4, r5, pc}
.L_02005268:
    .word m68k_pc_mapping_entry
