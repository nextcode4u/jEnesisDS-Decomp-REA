/* Ym2612 queue. Release range 0x02005b94–0x020061a8. */

/* 0x02005b94 */
.global ym2612_queue
ym2612_queue:
    ldr        r0, .L_02005b9c
    bx         lr
.L_02005b9c:
    .word 0x023db794

/* 0x02005ba0 */
.global queue_ym2612_register_or_dac_write
queue_ym2612_register_or_dac_write:
    ldr        r2, .L_02005f90
    push       {r4, r5, r6, lr}
    mov        r5, r1
.L_02005bac:
    ldrh       r3, [r2, #0x80]
    tst        r3, #0xf
    beq        .L_02005bac
    and        r3, r0, #3
    cmp        r3, #3
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_02005c4c
    .word .L_02005c50
    .word .L_02005c68
    .word .L_02005cc0
    .word .L_02005bd8
.L_02005bd8:
    ldr        r3, .L_02005f94
    ldr        r2, [r3]
    cmp        r2, #0
    popeq      {r4, r5, r6, pc}
    ldr        r3, .L_02005f98
    ldr        r2, .L_02005f9c
    ldr        r4, [r3]
    ldrb       r3, [r2, r4]
    cmp        r3, #0
    ldreq      r2, .L_02005fa0
    beq        .L_02005c14
    ldr        r2, .L_02005fa0
    ldrb       r3, [r2, r4]
    cmp        r3, r5
    popeq      {r4, r5, r6, pc}
.L_02005c14:
    ldr        r6, .L_02005fa4
    ldr        r3, .L_02005fa8
    ldr        lr, [r6]
    strb       r5, [r2, r4]
    cmp        lr, r3
    pophi      {r4, r5, r6, pc}
    ldr        r1, .L_02005fac
    add        r0, lr, #1
    ldr        r2, [r1]
    add        ip, r0, #1
    strb       r4, [lr, r2]
    ldr        r3, [r1]
    strb       r5, [r0, r3]
    str        ip, [r6]
.L_02005c4c:
    pop        {r4, r5, r6, pc}
.L_02005c50:
    ldr        r2, .L_02005f94
    ldr        r1, .L_02005fb0
    mov        r3, #0
    str        r3, [r2]
    str        r5, [r1]
    pop        {r4, r5, r6, pc}
.L_02005c68:
    ldr        r3, .L_02005fb0
    ldr        r4, [r3]
    cmp        r4, #0x2a
    beq        .L_02005cd8
    ldr        r3, .L_02005f94
    ldr        r2, [r3]
    cmp        r2, #0
    popne      {r4, r5, r6, pc}
    ldr        r3, .L_02005f9c
    ldrb       r2, [r3, r4]
    cmp        r2, #0
    ldreq      r2, .L_02005fb4
    bne        .L_02005d14
.L_02005c9c:
    sub        r3, r4, #0x24
    strb       r5, [r2, r4]
    cmp        r3, #3
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_02005e4c
    .word .L_02005e84
    .word .L_02005efc
    .word .L_02005f1c
    .word .L_02005d28
.L_02005cc0:
    ldr        r2, .L_02005f94
    ldr        r1, .L_02005f98
    mov        r3, #1
    str        r3, [r2]
    str        r5, [r1]
    pop        {r4, r5, r6, pc}
.L_02005cd8:
    ldr        r4, .L_02005fb8
    ldr        lr, [r4]
    cmp        lr, #0x400
    pophs      {r4, r5, r6, pc}
    ldr        r0, .L_02005fbc
    ldr        r2, .L_02005fc0
    ldr        r1, [r0]
    ldr        ip, [r2]
    and        r3, r5, #0x7f
    orr        r3, r3, r1
    add        r2, lr, #1
    str        r3, [r0]
    strb       r5, [lr, ip]
    str        r2, [r4]
    pop        {r4, r5, r6, pc}
.L_02005d14:
    ldr        r2, .L_02005fb4
    ldrb       r3, [r2, r4]
    cmp        r3, r5
    bne        .L_02005c9c
    pop        {r4, r5, r6, pc}
.L_02005d28:
    ldr        lr, .L_02005fc4
    tst        r5, #0x20
    str        r5, [lr]
    ldreq      r6, .L_02005fc8
    beq        .L_02005d90
    ldr        r2, [lr, #0x1c]
    ldr        r6, .L_02005fc8
    bic        r2, r2, #2
    ldr        r1, [r6, #0x2c]
    str        r2, [lr, #0x1c]
    ldrb       r2, [r1, #0x481]
    ldrb       r3, [r1, #0x480]
    ldrb       ip, [r1, #0x482]
    ldrb       r0, [r1, #0x483]
    orr        r3, r3, r2, lsl #8
    orr        r3, r3, ip, lsl #16
    orr        r3, r3, r0, lsl #24
    bic        r2, r3, #2
    lsr        r0, r2, #0x18
    lsr        ip, r2, #8
    and        r3, r3, #0xfd
    lsr        r2, r2, #0x10
    strb       r0, [r1, #0x483]
    strb       r3, [r1, #0x480]
    strb       ip, [r1, #0x481]
    strb       r2, [r1, #0x482]
.L_02005d90:
    tst        r5, #0x10
    beq        .L_02005de8
    ldr        r3, [lr, #0x1c]
    ldr        r1, [r6, #0x2c]
    bic        r3, r3, #1
    str        r3, [lr, #0x1c]
    ldrb       r3, [r1, #0x481]
    ldrb       r2, [r1, #0x480]
    ldrb       ip, [r1, #0x482]
    ldrb       r0, [r1, #0x483]
    orr        r2, r2, r3, lsl #8
    orr        r2, r2, ip, lsl #16
    orr        r2, r2, r0, lsl #24
    bic        r3, r2, #1
    lsr        r0, r3, #0x18
    lsr        ip, r3, #8
    and        r2, r2, #0xfe
    lsr        r3, r3, #0x10
    strb       r0, [r1, #0x483]
    strb       r2, [r1, #0x480]
    strb       ip, [r1, #0x481]
    strb       r3, [r1, #0x482]
.L_02005de8:
    ldr        r1, [r6, #0x2c]
    mov        r2, #0
    ldrb       r0, [r1, #0x480]
    strb       r2, [r1, #0x481]
    and        r0, r0, #3
    lsr        r3, r0, #0x18
    strb       r3, [r1, #0x483]
    strb       r2, [r1, #0x482]
    strb       r0, [r1, #0x480]
    ldr        r2, [r6, #0x2c]
    ldrb       r1, [r2, #0x481]
    ldrb       r3, [r2, #0x480]
    ldrb       ip, [r2, #0x482]
    ldrb       r0, [r2, #0x483]
    orr        r3, r3, r1, lsl #8
    orr        r3, r3, ip, lsl #16
    orr        r3, r3, r0, lsl #24
    orr        r3, r3, r5, lsl #8
    lsr        r1, r3, #0x18
    lsr        r0, r3, #8
    lsr        ip, r3, #0x10
    strb       r1, [r2, #0x483]
    strb       r0, [r2, #0x481]
    strb       ip, [r2, #0x482]
    strb       r3, [r2, #0x480]
.L_02005e4c:
    ldr        r6, .L_02005fcc
    ldr        r3, .L_02005fa8
    ldr        lr, [r6]
    cmp        lr, r3
    pophi      {r4, r5, r6, pc}
    ldr        r1, .L_02005fd0
    add        r0, lr, #1
    ldr        r2, [r1]
    add        ip, r0, #1
    strb       r4, [lr, r2]
    ldr        r3, [r1]
    strb       r5, [r0, r3]
    str        ip, [r6]
    pop        {r4, r5, r6, pc}
.L_02005e84:
    ldr        r6, .L_02005fc4
    ldr        r2, [r6, #0xc]
    and        r3, r2, #3
    orr        r4, r3, r5, lsl #2
    cmp        r2, r4
    popeq      {r4, r5, r6, pc}
.L_02005e9c:
    add        r3, r6, r4, lsl #1
    ldrh       r2, [r3, #0x20]
    ldr        lr, .L_02005fc8
    lsl        r2, r2, #1
    ldr        r3, [lr, #0x2c]
    lsr        r1, r2, #0x18
    lsr        r0, r2, #8
    lsr        ip, r2, #0x10
    str        r2, [r6, #4]
    str        r4, [r6, #0xc]
    strb       r1, [r3, #0x487]
    strb       r0, [r3, #0x485]
    strb       ip, [r3, #0x486]
    strb       r2, [r3, #0x484]
    ldrb       r3, [r6, #4]
    ldr        r1, [lr, #0x2c]
    strb       r3, [r1, #0x488]
    ldrb       r2, [r6, #5]
    strb       r2, [r1, #0x489]
    ldrb       r3, [r6, #6]
    strb       r3, [r1, #0x48a]
    ldrb       r2, [r6, #7]
    strb       r2, [r1, #0x48b]
    pop        {r4, r5, r6, pc}
.L_02005efc:
    ldr        r6, .L_02005fc4
    and        r1, r5, #3
    ldr        r2, [r6, #0xc]
    and        r3, r2, #0x3fc
    orr        r4, r3, r1
    cmp        r2, r4
    bne        .L_02005e9c
    pop        {r4, r5, r6, pc}
.L_02005f1c:
    ldr        r4, .L_02005fc4
    ldr        r3, [r4, #0x18]
    cmp        r3, r5
    popeq      {r4, r5, r6, pc}
    add        r3, r4, r5, lsl #1
    add        r3, r3, #0x820
    ldrh       r2, [r3]
    ldr        lr, .L_02005fc8
    lsl        r2, r2, #5
    ldr        r3, [lr, #0x2c]
    lsr        r1, r2, #0x18
    lsr        r0, r2, #8
    lsr        ip, r2, #0x10
    str        r2, [r4, #0x10]
    str        r5, [r4, #0x18]
    strb       r1, [r3, #0x48f]
    strb       r0, [r3, #0x48d]
    strb       ip, [r3, #0x48e]
    strb       r2, [r3, #0x48c]
    ldrb       r3, [r4, #0x10]
    ldr        r1, [lr, #0x2c]
    strb       r3, [r1, #0x490]
    ldrb       r2, [r4, #0x11]
    strb       r2, [r1, #0x491]
    ldrb       r3, [r4, #0x12]
    strb       r3, [r1, #0x492]
    ldrb       r2, [r4, #0x13]
    strb       r2, [r1, #0x493]
    pop        {r4, r5, r6, pc}
.L_02005f90:
    .word 0x04000100
.L_02005f94:
    .word ym2612_selected_bank
.L_02005f98:
    .word ym2612_bank_1_register
.L_02005f9c:
    .word 0x0209927c
.L_02005fa0:
    .word ym2612_bank_1_mirror
.L_02005fa4:
    .word ym2612_bank_1_queue_bytes
.L_02005fa8:
    .word 0x000001fd
.L_02005fac:
    .word ym2612_bank_1_write_buffer
.L_02005fb0:
    .word ym2612_bank_0_register
.L_02005fb4:
    .word ym2612_bank_0_mirror
.L_02005fb8:
    .word dac_queue_bytes
.L_02005fbc:
    .word 0x0209904c
.L_02005fc0:
    .word dac_write_buffer
.L_02005fc4:
    .word 0x023db778
.L_02005fc8:
    .word frame_timing
.L_02005fcc:
    .word ym2612_bank_0_queue_bytes
.L_02005fd0:
    .word 0x023db644
    ldr        ip, .L_0200608c
    push       {r4, lr}
    ldr        r4, [ip]
    rsb        r3, r0, r0, lsl #3
    add        r0, r0, r3, lsl #3
    tst        r4, #1
    mov        lr, r4
    lsl        r0, r0, #2
    beq        .L_0200600c
    ldr        r3, [ip, #4]
    rsb        r1, r0, r3
    cmp        r1, #0
    str        r1, [ip, #4]
    ble        .L_02006058
.L_0200600c:
    tst        r4, #2
    ldr        r1, .L_0200608c
    popeq      {r4, pc}
.L_02006018:
    ldr        r3, [r1, #0x10]
    rsb        r0, r0, r3
    cmp        r0, #0
    str        r0, [r1, #0x10]
    popgt      {r4, pc}
    ldr        r2, [r1, #0x18]
    tst        r4, #8
    add        r2, r1, r2, lsl #1
    add        r2, r2, #0x820
    ldrh       r3, [r2]
    add        r3, r0, r3, lsl #5
    str        r3, [r1, #0x10]
    ldrne      r3, [r1, #0x1c]
    orrne      r3, r3, #2
    strne      r3, [r1, #0x1c]
    pop        {r4, pc}
.L_02006058:
    ldr        r2, [ip, #0xc]
    tst        r4, #4
    add        r2, ip, r2, lsl #1
    ldrh       r3, [r2, #0x20]
    add        r3, r1, r3, lsl #1
    str        r3, [ip, #4]
    ldrne      r3, [ip, #0x1c]
    ldr        r1, .L_0200608c
    orrne      r3, r3, #1
    strne      r3, [ip, #0x1c]
    tst        r4, #2
    bne        .L_02006018
    pop        {r4, pc}
.L_0200608c:
    .word 0x023db778
    ldr        ip, .L_02006174
    ldr        r3, [ip]
    tst        r3, #1
    beq        .L_020060b4
    ldr        r3, [ip, #4]
    rsb        r1, r0, r3
    cmp        r1, #0
    str        r1, [ip, #4]
    ble        .L_02006120
.L_020060b4:
    ldr        r3, [ip]
    ldr        r2, .L_02006174
    tst        r3, #2
    bxeq       lr
.L_020060c4:
    ldr        r3, [r2, #0x10]
    rsb        r0, r0, r3
    cmp        r0, #0
    str        r0, [r2, #0x10]
    bxgt       lr
    bge        .L_02006104
    ldr        r3, [ip, #0x18]
    add        r3, ip, r3, lsl #1
    add        r3, r3, #0x820
    ldrh       r2, [r3]
    lsl        r2, r2, #5
.L_020060f0:
    add        r3, r0, r2
    cmp        r3, #0
    mov        r0, r3
    blt        .L_020060f0
    str        r3, [ip, #0x10]
.L_02006104:
    ldr        r3, [ip]
    ldr        r2, .L_02006174
    tst        r3, #8
    ldrne      r3, [r2, #0x1c]
    orrne      r3, r3, #2
    strne      r3, [r2, #0x1c]
    bx         lr
.L_02006120:
    bge        .L_02006148
    ldr        r3, [ip, #0xc]
    add        r3, ip, r3, lsl #1
    ldrh       r2, [r3, #0x20]
    lsl        r2, r2, #1
.L_02006134:
    add        r3, r1, r2
    cmp        r3, #0
    mov        r1, r3
    blt        .L_02006134
    str        r3, [ip, #4]
.L_02006148:
    ldr        r3, [ip]
    ldr        r2, .L_02006174
    tst        r3, #4
    ldrne      r3, [r2, #0x1c]
    orrne      r3, r3, #1
    strne      r3, [r2, #0x1c]
    ldr        r3, [ip]
    ldr        r2, .L_02006174
    tst        r3, #2
    bne        .L_020060c4
    bx         lr
.L_02006174:
    .word 0x023db778
    ldr        r2, .L_020061a4
    mvn        r0, #0
    ldr        r3, [r2]
    tst        r3, #1
    ldrne      r0, [r2, #4]
    tst        r3, #2
    mvn        r3, #0
    ldrne      r3, [r2, #0x10]
    cmp        r0, r3
    movhs      r0, r3
    bx         lr
.L_020061a4:
    .word 0x023db778
