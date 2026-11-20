/* Dac service. Release range 0x037fbc68–0x037fbf44. */


/* 0x037fbc68 */
.global render_unsigned_dac_to_pcm16
render_unsigned_dac_to_pcm16:
    push       {r4, r5, r6, r7, r8, sl, lr}
    ldr        sl, .L_037fbcf8
    ldr        r7, .L_037fbcfc
    ldr        r4, [sl]
    subs       r6, r1, #0
    mov        r5, r0
    ldrb       r2, [r7, r4]
    beq        .L_037fbcf0
    ldr        r8, .L_037fbd00
    ldr        r3, .L_037fbd04
    sub        r2, r2, #0x80
    lsl        r2, r2, #0x16
    mov        r1, #0x10000
    ldr        r0, [r3]
    ldr        ip, [r8]
    lsr        r2, r2, #0x10
    sub        r1, r1, #1
    mov        lr, #0
.L_037fbcb0:
    add        ip, ip, r0
    lsl        r3, lr, #1
    cmp        ip, r1
    add        lr, lr, #1
    strh       r2, [r3, r5]
    bls        .L_037fbce0
    add        r4, r4, #1
    ldrb       r3, [r7, r4]
    sub        r3, r3, #0x80
    lsl        r3, r3, #0x16
    lsr        r2, r3, #0x10
    sub        ip, ip, #0x10000
.L_037fbce0:
    cmp        r6, lr
    bne        .L_037fbcb0
    str        r4, [sl]
    str        ip, [r8]
.L_037fbcf0:
    pop        {r4, r5, r6, r7, r8, sl, lr}
    bx         lr
.L_037fbcf8:
    .word dac_source_index
.L_037fbcfc:
    .word dac_staged_bytes
.L_037fbd00:
    .word dac_source_fraction_q16
.L_037fbd04:
    .word dac_source_step_q16
.L_037fbd08:
    push       {r4, r5, r6, r7, lr}
    ldr        r6, .L_037fbda4
    ldr        ip, [r6, #0x20]
    ldmib      r6, {r2, lr}
    cmp        ip, r0
    movlt      r5, ip
    movge      r5, r0
    add        r3, ip, ip, lsl #1
    add        r0, lr, r3, lsl #2
    lsl        r7, r5, #1
    rsb        r3, lr, r2
    asr        r4, r3, #1
    add        r3, lr, r7
    cmp        r3, r2
    sub        sp, sp, #4
    mov        r1, r4
    bls        .L_037fbd70
    bl         render_psg_samples
    mov        r1, r4
    ldr        r0, [r6, #8]
    bl         render_six_fm_channels
    ldr        lr, [r6]
    rsb        r5, r4, r5
    str        lr, [r6, #8]
    ldr        ip, [r6, #0x20]
    lsl        r7, r5, #1
.L_037fbd70:
    add        r0, ip, ip, lsl #1
    add        r0, lr, r0, lsl #2
    mov        r1, r5
    bl         render_psg_samples
    mov        r1, r5
    ldr        r0, [r6, #8]
    bl         render_six_fm_channels
    ldr        r3, [r6, #8]
    add        r3, r3, r7
    str        r3, [r6, #8]
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, lr}
    bx         lr
.L_037fbda4:
    .word fm_pcm_base

/* 0x037fbda8 */
.global service_dac_buffer
service_dac_buffer:
    push       {r4, r5, r6, r7, lr}
    ldr        r3, .L_037fbeb0
    ldr        r2, [r3]
    cmp        r2, #0
    sub        sp, sp, #4
    mov        r4, r0
    bne        .L_037fbe70
.L_037fbdc4:
    mov        r7, #0
.L_037fbdc8:
    cmp        r4, #0x1000
    movge      r4, #0x1000
    ldr        r6, .L_037fbeb4
    mov        r0, r4
    bl         reset_dac_sample_cursor
    add        r0, r6, #0x18
    ldm        r0, {r0, r2}
    lsl        r5, r4, #1
    add        r3, r0, r5
    cmp        r3, r2
    bls        .L_037fbe30
    rsb        r3, r0, r2
    cmp        r7, #0
    asr        r5, r3, #1
    bne        .L_037fbe94
    cmp        r5, #0
    ble        .L_037fbe20
    mov        r3, r5
.L_037fbe10:
    mov        r2, #0
    subs       r3, r3, #1
    strh       r2, [r0], #2
    bne        .L_037fbe10
.L_037fbe20:
    ldr        r3, [r6, #0x14]
    rsb        r4, r5, r4
    str        r3, [r6, #0x18]
    lsl        r5, r4, #1
.L_037fbe30:
    cmp        r7, #0
    bne        .L_037fbe84
    cmp        r4, #0
    ldr        r3, [r6, #0x18]
    ble        .L_037fbe58
    mov        r0, r4
.L_037fbe48:
    mov        r2, #0
    subs       r0, r0, #1
    strh       r2, [r3], #2
    bne        .L_037fbe48
.L_037fbe58:
    ldr        r3, [r6, #0x18]
    add        r3, r3, r5
    str        r3, [r6, #0x18]
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, lr}
    bx         lr
.L_037fbe70:
    bl         read_ym2612_dac_enable
    cmp        r0, #0
    movne      r7, #1
    bne        .L_037fbdc8
    b          .L_037fbdc4
.L_037fbe84:
    mov        r1, r4
    ldr        r0, [r6, #0x18]
    bl         render_unsigned_dac_to_pcm16
    b          .L_037fbe58
.L_037fbe94:
    mov        r1, r5
    bl         render_unsigned_dac_to_pcm16
    rsb        r4, r5, r4
    ldr        r3, [r6, #0x14]
    lsl        r5, r4, #1
    str        r3, [r6, #0x18]
    b          .L_037fbe30
.L_037fbeb0:
    .word dac_staged_byte_count
.L_037fbeb4:
    .word fm_pcm_base

/* 0x037fbeb8 */
.global update_audio_from_hardware_timers
update_audio_from_hardware_timers:
    ldr        r3, .L_037fbf38
    mov        r0, #0x4000000
    add        r0, r0, #0x100
    ldr        ip, .L_037fbf3c
    push       {r4, r5, lr}
    ldrh       r1, [r0, #4]
    ldr        r5, [r3]
    ldr        r3, .L_037fbf40
    ldr        r2, [ip, #0x34]
    ldr        lr, [r3]
    lsl        r1, r1, #0x10
    ldrh       r3, [r0, #0xc]
    lsr        r1, r1, #0x10
    subs       r4, r1, r2
    lsl        r3, r3, #0x10
    ldr        r2, [ip, #0x38]
    lsr        r3, r3, #0x10
    addmi      r4, r4, #0x10000
    cmp        r4, lr
    movhs      r4, lr
    subs       r0, r3, r2
    addmi      r0, r0, #0x10000
    cmp        r0, r5
    movhs      r0, r5
    sub        sp, sp, #4
    str        r1, [ip, #0x34]
    str        r3, [ip, #0x38]
    bl         service_dac_buffer
    mov        r0, r4
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          .L_037fbd08
.L_037fbf38:
    .word dac_refill_limit
.L_037fbf3c:
    .word fm_pcm_base
.L_037fbf40:
    .word fm_psg_refill_limit
