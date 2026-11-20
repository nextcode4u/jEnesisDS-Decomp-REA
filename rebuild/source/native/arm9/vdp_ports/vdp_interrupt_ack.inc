/* Vdp interrupt ack. Release range 0x02009214–0x02009274. */


/* 0x02009214 */
.global acknowledge_vdp_interrupt
acknowledge_vdp_interrupt:
    cmp        r0, #4
    mov        r1, #0
    ldreq      r3, .L_0200923c
    ldrne      r3, .L_02009240
    ldrne      r2, .L_02009244
    moveq      r2, r1
    strbeq     r2, [r3]
    strne      r1, [r3, #0x8c]
    strbne     r1, [r2]
    bx         lr
.L_0200923c:
    .word vdp_v_interrupt_enabled + 1
.L_02009240:
    .word frame_timing
.L_02009244:
    .word address_0b00362e
    ldr        r1, .L_0200926c
    ldr        r2, .L_02009270
    ldrh       ip, [r1]
    ldr        r0, [r2]
    mov        r3, #0
    orr        r0, ip, r0, lsl #16
    str        r3, [r2]
    str        r3, [r1]
    bx         lr
.L_0200926c:
    .word 0x0209cbe4
.L_02009270:
    .word 0x0209cbe8
