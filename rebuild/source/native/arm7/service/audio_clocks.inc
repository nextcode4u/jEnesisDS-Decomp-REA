/* Audio clocks. Release range 0x037fbf5c–0x037fc0cc. */


/* 0x037fbf5c */
.global initialize_audio_buffers_and_clocks
initialize_audio_buffers_and_clocks:
    ldr        r3, .L_037fc0a8
    push       {r4, r5, r6, r7, r8, sb, sl, lr}
    mov        r2, #0x1c8
    ldr        r8, .L_037fc0ac
    mov        r0, #0x6b00
    mov        r1, #0
    add        r2, r2, #3
    ldr        sb, [r3]
    add        r0, r0, #0xab
    mov        r3, #0x800
    str        r2, [r8, #0x28]
    str        r3, [r8, #0x20]
    add        r2, r2, #0x35
    mov        r3, #1
    str        r0, [r8, #0x30]
    str        r1, [r8, #0x40]
    str        r1, [r8, #0x34]
    str        r1, [r8, #0x38]
    str        r1, [r8, #0x3c]
    str        r2, [r8, #0x24]
    str        r3, [r8, #0x2c]
    mov        r2, sb
    mov        r3, #0x7000
.L_037fbfb8:
    mov        r1, #0
    subs       r3, r3, #1
    strh       r1, [r2], #2
    bne        .L_037fbfb8
    ldr        r2, .L_037fc0b0
    mov        r3, sb
    add        r1, r2, #0x1c
.L_037fbfd4:
    str        r3, [r2], #4
    cmp        r2, r1
    add        r3, r3, #0x1000
    bne        .L_037fbfd4
    ldr        r3, .L_037fc0b4
    ldr        sl, [r3]
    mov        r7, #0x1000
    mov        r3, sl
.L_037fbff4:
    mov        r2, #0
    subs       r7, r7, #1
    strh       r2, [r3], #2
    bne        .L_037fbff4
    add        ip, sl, #0x2000
    mov        lr, #0x368000
    ldr        r5, [r8, #0x20]
    str        ip, [r8, #0x1c]
    add        lr, lr, #0x1e80
    ldr        ip, .L_037fc0b8
    mov        r4, #0x750000
    add        lr, lr, #0x19
    ldr        r6, .L_037fc0bc
    add        r4, r4, #0xab0
    mov        r3, r5
    mov        r0, lr
    add        r5, sb, r5, lsl #1
    mov        r1, #0x64
    ldr        r2, [r8, #0x30]
    str        lr, [ip]
    add        r4, r4, #5
    str        sl, [r8, #0x18]
    str        sb, [r8, #0xc]
    str        r5, [r8, #0x10]
    str        r4, [r6]
    str        sb, [r8]
    stmib      r8, {r5, sb}
    str        sl, [r8, #0x14]
    bl         initialize_psg_clock_and_state
    ldr        r0, [r6]
    ldr        r1, [r8, #0x30]
    ldr        r2, [r8, #0x20]
    bl         initialize_ym2612_tables_and_channels
    ldr        r3, .L_037fc0c0
    ldr        r1, [r8, #0x28]
    mov        r0, #0x420
    str        r7, [r3]
    ldr        r2, .L_037fc0c4
    ldr        r3, .L_037fc0c8
    lsl        r1, r1, #1
    add        r0, r0, #0xa
    str        r1, [r2]
    str        r0, [r3]
    pop        {r4, r5, r6, r7, r8, sb, sl, lr}
    bx         lr
.L_037fc0a8:
    .word address_03806d8c
.L_037fc0ac:
    .word fm_pcm_base
.L_037fc0b0:
    .word fm_channel_pcm_bases
.L_037fc0b4:
    .word address_03806d90
.L_037fc0b8:
    .word psg_chip_clock_hz
.L_037fc0bc:
    .word ym2612_chip_clock_hz
.L_037fc0c0:
    .word dac_staged_byte_count
.L_037fc0c4:
    .word fm_psg_refill_limit
.L_037fc0c8:
    .word dac_refill_limit
