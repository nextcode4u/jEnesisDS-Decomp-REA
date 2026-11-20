/* YM2612 envelope stepping and register decoding. 0x037f8a88–0x037f8e1c. */


/* 0x037f8a88 */
.global step_fm_operator_envelope
step_fm_operator_envelope:
    cmp        r1, r2
    push       {r4, r5, r6, r7, r8, sb, sl, lr}
    mov        ip, r2
    mov        r5, r0
    ldrsh      lr, [r0, #0x1a]
    bhs        .L_037f8b94
    mov        sb, #0x3fc
    add        sb, sb, #2
    mov        sl, #1
.L_037f8aac:
    ldrb       r3, [r5, #0x17]
    sub        r3, r3, #1
    add        r1, r1, #1
    cmp        r3, #3
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_037f8b8c
    .word .L_037f8bb4
    .word .L_037f8c84
    .word .L_037f8ad4
    .word .L_037f8d4c
.L_037f8ad4:
    ldr        r7, [r5, #0x24]
    lsr        r6, r7, #0x18
    lsl        r3, sl, r6
    sub        r0, r3, #1
    b          .L_037f8aec
.L_037f8ae8:
    add        r1, r1, #1
.L_037f8aec:
    ands       r2, r1, r0
    moveq      r3, #0
    movne      r3, #1
    cmp        ip, r1
    movls      r3, #0
    andhi      r3, r3, #1
    cmp        r3, #0
    bne        .L_037f8ae8
    cmp        r2, #0
    bne        .L_037f8b8c
    ldr        r4, [r5, #0x1c]
    cmp        r4, lr
    movle      r3, #0
    movgt      r3, #1
    cmp        ip, r1
    movls      r3, #0
    cmp        r3, #0
    beq        .L_037f8b80
    mov        r8, #1
.L_037f8b38:
    cmp        r2, #0
    bne        .L_037f8b5c
    lsr        r3, r1, r6
    and        r3, r3, #7
    add        r3, r3, r3, lsl #1
    lsr        r3, r7, r3
    and        r3, r3, #7
    lsl        r3, r8, r3
    add        lr, lr, r3, asr #1
.L_037f8b5c:
    add        r1, r1, #1
    cmp        lr, r4
    movge      r3, #0
    movlt      r3, #1
    cmp        ip, r1
    movls      r3, #0
    cmp        r3, #0
    and        r2, r1, r0
    bne        .L_037f8b38
.L_037f8b80:
    cmp        r4, lr
    movle      r3, #2
    strble     r3, [r5, #0x17]
.L_037f8b8c:
    cmp        ip, r1
    bhi        .L_037f8aac
.L_037f8b94:
    lsl        r3, lr, #0x10
    lsr        r1, r3, #0x10
    mov        r2, lr
.L_037f8ba0:
    ldrh       r0, [r5, #0x18]
    add        r0, r0, r2
    strh       r1, [r5, #0x1a]
    pop        {r4, r5, r6, r7, r8, sb, sl, lr}
    bx         lr
.L_037f8bb4:
    ldr        r7, [r5, #0x2c]
    lsr        r6, r7, #0x18
    lsl        r3, sl, r6
    sub        r0, r3, #1
    b          .L_037f8bcc
.L_037f8bc8:
    add        r1, r1, #1
.L_037f8bcc:
    ands       r2, r1, r0
    moveq      r3, #0
    movne      r3, #1
    cmp        ip, r1
    movls      r3, #0
    andhi      r3, r3, #1
    cmp        r3, #0
    bne        .L_037f8bc8
    cmp        r2, #0
    bne        .L_037f8b8c
    cmp        lr, sb
    movgt      r3, #0
    movle      r3, #1
    cmp        ip, r1
    movls      r3, #0
    cmp        r3, #0
    beq        .L_037f8c64
    mov        r4, #0x3fc
    add        r4, r4, #2
    mov        r8, #1
.L_037f8c1c:
    cmp        r2, #0
    bne        .L_037f8c40
    lsr        r3, r1, r6
    and        r3, r3, #7
    add        r3, r3, r3, lsl #1
    lsr        r3, r7, r3
    and        r3, r3, #7
    lsl        r3, r8, r3
    add        lr, lr, r3, asr #1
.L_037f8c40:
    add        r1, r1, #1
    cmp        lr, r4
    movgt      r3, #0
    movle      r3, #1
    cmp        ip, r1
    movls      r3, #0
    cmp        r3, #0
    and        r2, r1, r0
    bne        .L_037f8c1c
.L_037f8c64:
    cmp        lr, sb
    movgt      r2, #0x3fc
    addgt      r2, r2, #3
    movgt      r3, #0
    movgt      r1, r2
    strbgt     r3, [r5, #0x17]
    bgt        .L_037f8ba0
    b          .L_037f8b94
.L_037f8c84:
    ldr        r7, [r5, #0x28]
    lsr        r6, r7, #0x18
    lsl        r3, sl, r6
    sub        r0, r3, #1
    b          .L_037f8c9c
.L_037f8c98:
    add        r1, r1, #1
.L_037f8c9c:
    ands       r2, r1, r0
    moveq      r3, #0
    movne      r3, #1
    cmp        ip, r1
    movls      r3, #0
    andhi      r3, r3, #1
    cmp        r3, #0
    bne        .L_037f8c98
    cmp        r2, #0
    bne        .L_037f8b8c
    cmp        ip, r1
    movls      r3, #0
    movhi      r3, #1
    cmp        lr, sb
    movgt      r3, #0
    cmp        r3, #0
    beq        .L_037f8d34
    mov        r4, #0x3fc
    add        r4, r4, #2
    mov        r8, #1
.L_037f8cec:
    cmp        r2, #0
    bne        .L_037f8d10
    lsr        r3, r1, r6
    and        r3, r3, #7
    add        r3, r3, r3, lsl #1
    lsr        r3, r7, r3
    and        r3, r3, #7
    lsl        r3, r8, r3
    add        lr, lr, r3, asr #1
.L_037f8d10:
    add        r1, r1, #1
    cmp        ip, r1
    movls      r3, #0
    movhi      r3, #1
    cmp        lr, r4
    movgt      r3, #0
    cmp        r3, #0
    and        r2, r1, r0
    bne        .L_037f8cec
.L_037f8d34:
    cmp        lr, sb
    ble        .L_037f8b8c
    mov        r2, #0x3fc
    add        r2, r2, #3
    mov        r1, r2
    b          .L_037f8ba0
.L_037f8d4c:
    ldr        r7, [r5, #0x20]
    lsr        r6, r7, #0x18
    lsl        r3, sl, r6
    sub        r0, r3, #1
    b          .L_037f8d64
.L_037f8d60:
    add        r1, r1, #1
.L_037f8d64:
    ands       r2, r1, r0
    moveq      r3, #0
    movne      r3, #1
    cmp        ip, r1
    movls      r3, #0
    andhi      r3, r3, #1
    cmp        r3, #0
    bne        .L_037f8d60
    cmp        r2, #0
    bne        .L_037f8b8c
    cmp        lr, #0
    movle      r3, #0
    movgt      r3, #1
    cmp        ip, r1
    movls      r3, #0
    cmp        r3, #0
    beq        .L_037f8e00
    mov        r8, #1
.L_037f8dac:
    cmp        r2, #0
    mvn        r4, lr
    bne        .L_037f8ddc
    lsr        r3, r1, r6
    and        r3, r3, #7
    add        r3, r3, r3, lsl #1
    lsr        r3, r7, r3
    and        r3, r3, #7
    lsl        r3, r8, r3
    asr        r3, r3, #1
    mul        r2, r3, r4
    add        lr, lr, r2, asr #4
.L_037f8ddc:
    add        r1, r1, #1
    cmp        lr, #0
    movle      r3, #0
    movgt      r3, #1
    cmp        ip, r1
    movls      r3, #0
    cmp        r3, #0
    and        r2, r1, r0
    bne        .L_037f8dac
.L_037f8e00:
    cmp        lr, #0
    movle      r3, #3
    movle      lr, #0
    strble     r3, [r5, #0x17]
    cmp        ip, r1
    bhi        .L_037f8aac
    b          .L_037f8b94
