/* Viewport coordinates. Release range 0x02006a44–0x02006b78. */


/* 0x02006a44 */
.global invalidate_viewport_mode_cache
invalidate_viewport_mode_cache:
    ldr        r3, .L_02006a54
    mov        r2, #0xff
    str        r2, [r3]
    bx         lr
.L_02006a54:
    .word cached_viewport_mode

/* 0x02006a58 */
.global update_display_offset_for_current_viewport
update_display_offset_for_current_viewport:
    ldr        r3, .L_02006b54
    ldr        r2, .L_02006b58
    push       {r4, r5, lr}
    ldr        lr, .L_02006b5c
    ldrb       r0, [r3]
    ldrb       ip, [r2]
    ldr        r3, [lr]
    orr        r1, ip, r0, lsl #1
    cmp        r1, r3
    ldrne      r5, .L_02006b60
    beq        .L_02006b1c
.L_02006a84:
    ldr        r3, .L_02006b64
    ldr        r4, .L_02006b68
    ldr        r2, [r3]
    mov        r3, #0
    tst        r2, #4
    str        r1, [lr]
    str        r3, [r4]
    bne        .L_02006adc
    cmp        ip, r3
    ldrne      r2, .L_02006b6c
    bne        .L_02006ac8
    ldr        r2, .L_02006b6c
    ldr        r3, [r2]
    cmn        r3, #0x10
    mvnlt      r3, #0xf
    strlt      r3, [r2]
    bge        .L_02006b30
.L_02006ac8:
    lsl        r3, ip, #3
    ldr        r2, [r2]
    orr        r3, r3, #0x10
    add        r3, r3, r2
    str        r3, [r4]
.L_02006adc:
    cmp        r0, #0
    ldrne      r2, .L_02006b70
    ldr        ip, .L_02006b74
    ldrne      r3, [r2]
    lsl        r1, r0, #5
    addne      r3, r1, r3
    str        r1, [ip]
    strne      r3, [ip]
    ldr        r3, [r5]
    cmp        r3, #0
    popeq      {r4, r5, pc}
    ldr        r3, .L_02006b60
    mov        r2, #0
    str        r2, [r3]
    pop        {r4, r5, lr}
    b          address_02008e5c
.L_02006b1c:
    ldr        r5, .L_02006b60
    ldr        r3, [r5]
    cmp        r3, #0
    bne        .L_02006a84
    pop        {r4, r5, pc}
.L_02006b30:
    cmp        r3, #0x10
    movgt      r3, #0x10
    strgt      r3, [r2]
    ldr        r2, [r2]
    lsl        r3, ip, #3
    orr        r3, r3, #0x10
    add        r3, r3, r2
    str        r3, [r4]
    b          .L_02006adc
.L_02006b54:
    .word vdp_wide_display_mode
.L_02006b58:
    .word vdp_240_line_mode
.L_02006b5c:
    .word cached_viewport_mode
.L_02006b60:
    .word viewport_update_pending
.L_02006b64:
    .word emulator_option_flags
.L_02006b68:
    .word viewport_offset_y
.L_02006b6c:
    .word requested_viewport_offset_y
.L_02006b70:
    .word requested_viewport_offset_x
.L_02006b74:
    .word viewport_offset_x
