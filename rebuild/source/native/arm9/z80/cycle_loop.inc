/* Z80 execution and prefixed instruction handlers. 0x0200df50–0x0200e160. */


/* 0x0200df50 */
.global run_z80_cycle_budget
run_z80_cycle_budget:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, ip, lr}
    add        r0, r0, #0x400
    str        sp, [r0, #0x60]
    mov        sp, r0
    ldm        r0!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, ip}
    str        r1, [sp, #0x74]
    ldr        r0, [sp, #0x80]
    ldr        r2, [sp, #0x88]
    tst        r0, #0x100
    beq        .L_0200df84
    cmp        r2, #0
    cmpgt      r1, r2
    movgt      r1, r2
.L_0200df84:
    tst        r0, #0x200
    beq        .L_0200df9c
    ldr        r2, [sp, #0x90]
    cmp        r2, #0
    cmpgt      r1, r2
    movgt      r1, r2
.L_0200df9c:
    add        r5, r5, r1, lsl #16
    str        r1, [sp, #0x78]
    ldr        r2, .L_0200e020

/* 0x0200dfa8 */
.global check_z80_pending_interrupt_then_dispatch
check_z80_pending_interrupt_then_dispatch:
    ldr        r0, [sp, #0xa4]
    tst        r0, r0
    beq        dispatch_next_z80_opcode
    ldr        r0, [sp, #0x44]
    tst        r0, #8
    beq        dispatch_next_z80_opcode
    mov        r1, #0
    str        r1, [sp, #0xa4]
    ldrb       r1, [fp]
    cmp        r1, #0x76
    addeq      fp, fp, #1
    bic        r1, r0, #0xc
    str        r1, [sp, #0x44]
    and        r0, r0, #3
    cmp        r0, #2
    beq        .L_0200e004
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    sub        r5, r5, #0xd0000
    add        fp, r3, #0x38
    b          dispatch_next_z80_opcode
.L_0200e004:
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    sub        r5, r5, #0x130000

/* 0x0200e018 */
.global dispatch_next_z80_opcode
dispatch_next_z80_opcode:
    ldrb       r0, [fp], #1
    ldr        pc, [r2, r0, lsl #2]
.L_0200e020:
    .word z80_base_dispatch
    .word z80_alternate_dispatch
    .word z80_alternate_dispatch + 0x40
    .word z80_alternate_dispatch + 0x80

/* 0x0200e030 */
.global finish_z80_cycle_budget
finish_z80_cycle_budget:
    sub        fp, fp, #1
    ldr        r0, [sp, #0x28]
    mov        r1, #0
    cmp        r0, #0
    strgt      r1, [sp, #0x28]
    addsgt     r5, r5, r0, lsl #16
    bgt        check_z80_pending_interrupt_then_dispatch
    ldr        r0, [sp, #0x80]
    ldr        lr, [sp, #0x78]
    tst        r0, #0x300
    beq        .L_0200e10c
    tst        r0, #0x100
    beq        .L_0200e088
    ldr        r2, [sp, #0x84]
    ldr        r1, [sp, #0x88]
    cmp        r2, #0
    movle      r2, lr
    subs       r1, r1, lr
    orrle      r0, r0, #1
.L_0200e07c:
    addsle     r1, r1, r2
    blt        .L_0200e07c
    str        r1, [sp, #0x88]
.L_0200e088:
    tst        r0, #0x200
    beq        .L_0200e0b4
    ldr        r2, [sp, #0x8c]
    ldr        r1, [sp, #0x90]
    cmp        r2, #0
    movle      r2, lr
    subs       r1, r1, lr
    orrle      r0, r0, #2
.L_0200e0a8:
    addsle     r1, r1, r2
    blt        .L_0200e0a8
    str        r1, [sp, #0x90]
.L_0200e0b4:
    str        r0, [sp, #0x80]
    ldr        r1, [sp, #0x74]
    subs       lr, r1, lr
    ble        .L_0200e134
    str        lr, [sp, #0x74]
    tst        r0, #0x100
    ldrne      r1, [sp, #0x88]
    beq        .L_0200e0e0
    cmp        r1, #0
    cmpgt      lr, r1
    movgt      lr, r1
.L_0200e0e0:
    tst        r0, #0x200
    ldrne      r1, [sp, #0x90]
    beq        .L_0200e0f8
    cmp        r1, #0
    cmpgt      lr, r1
    movgt      lr, r1
.L_0200e0f8:
    str        lr, [sp, #0x78]
    ldr        r2, [sp, #0x94]
    add        r5, r5, lr, lsl #16
    ldrb       r0, [fp], #1
    ldr        pc, [r2, r0, lsl #2]
.L_0200e10c:
    ldr        r0, [sp, #0x74]
    subs       r0, r0, lr
    ble        .L_0200e134
    cmp        r0, lr
    movlt      lr, r0
    strlt      lr, [sp, #0x78]
    str        r0, [sp, #0x74]
    add        r5, r5, lr, lsl #16
    ldrb       r0, [fp], #1
    ldr        pc, [r2, r0, lsl #2]
.L_0200e134:
    mov        r1, sp
    stm        r1!, {r3, r4, r5, r6, r7, r8, sb, sl, fp, ip}
    asr        r0, r5, #0x10
    ldr        sp, [sp, #0x60]
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, ip, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    push       {r3, r4, r5, r6, r7, r8, sb, sl, fp, ip, lr}
    pop        {r3, r4, r5, r6, r7, r8, sb, sl, fp, ip, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0
