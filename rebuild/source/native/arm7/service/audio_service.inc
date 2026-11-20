/* Audio service. Release range 0x037f81f0–0x037f8504. */


/* 0x037f81f0 */
.global arm7_empty_callback
arm7_empty_callback:
    bx         lr

/* 0x037f81f4 */
.global run_arm7_audio_service
run_arm7_audio_service:
    push       {r4, r5, lr}
    sub        sp, sp, #4
    bl         arm7_rtc_reset_veneer
    mov        r1, #0x4000000
    add        r1, r1, #0x300
    ldrh       r0, [r1, #4]
    mov        ip, #0x4000000
    mvn        r3, #0x7f00
    mov        r2, #0x27c0000
    add        r2, r2, #0x3f000
    add        ip, ip, #0x500
    orr        r0, r0, #1
    sub        r3, r3, #0x80
    mov        r5, #0
    strh       r0, [r1, #4]
    mov        r4, #0x4000000
    strh       r3, [ip]
    str        r5, [r2, #0x28]
    bl         arm7_irq_init_veneer
    ldrh       r3, [r4, #4]
    and        r3, r3, #0x7f
    orr        r3, r3, #0x5000
    strh       r3, [r4, #4]
    ldr        r1, .L_037f8314
    mov        r0, #4
    bl         irqSet
    mov        r0, #4
    bl         irqEnable
    bl         initialize_audio_buffers_and_clocks
    bl         initialize_sound_message_handler
    mov        r0, #1
    bl         reset_audio_buffers_and_chips
    ldr        r4, .L_037f8318
    mov        r1, r5
    mov        r0, #1
    bl         irqSet
    mov        r0, #1
    bl         irqEnable
    ldr        r2, [r4, #0x3c]
    mov        r3, #0x4000000
    cmp        r2, r5
    add        r3, r3, #0x100
    mov        r2, #0x100
    strh       r2, [r3, #0x80]
    bne        .L_037f82c8
    mov        r5, r4
.L_037f82ac:
    ldr        r3, [r4, #0x40]
    cmp        r3, #0
    blne       reset_audio_buffers_and_chips
    bl         arm7_wait_vblank_veneer
    ldr        r3, [r5, #0x3c]
    cmp        r3, #0
    beq        .L_037f82ac
.L_037f82c8:
    ldr        r3, [r4, #0x3c]
    cmp        r3, #0
    bne        .L_037f82f4
.L_037f82d4:
    ldr        r3, .L_037f8318
    ldr        r2, [r3, #0x40]
    cmp        r2, #0
    bne        .L_037f8308
.L_037f82e4:
    bl         arm7_wait_vblank_veneer
.L_037f82e8:
    ldr        r3, [r4, #0x3c]
    cmp        r3, #0
    beq        .L_037f82d4
.L_037f82f4:
    bl         update_audio_from_hardware_timers
    ldr        r3, .L_037f8318
    ldr        r2, [r3, #0x40]
    cmp        r2, #0
    beq        .L_037f82e4
.L_037f8308:
    bl         reset_audio_buffers_and_chips
    bl         arm7_wait_vblank_veneer
    b          .L_037f82e8
.L_037f8314:
    .word .L_037f831c
.L_037f8318:
    .word fm_pcm_base
.L_037f831c:
    mov        r3, #0x4000000
    add        r3, r3, #0x100
    push       {r4, r5, r6, r7, r8, sl, lr}
    ldrh       r2, [r3, #0x36]
    ldr        r7, .L_037f841c
    lsl        r2, r2, #0x10
    ldr        r3, [r7]
    lsr        r4, r2, #0x10
    eor        r3, r4, r3
    sub        sp, sp, #0x14
    mov        r2, #0
    ands       r5, r3, #0x40
    mov        r8, sp
    ldr        r6, .L_037f8420
    mov        r0, sp
    mov        r1, r2
    mov        sl, r2
    beq        .L_037f83a8
    str        r4, [r7]
    mov        r0, r2
    orr        r4, r4, #0x40
    mov        lr, r2
    mov        ip, r2
.L_037f8378:
    mov        r3, #0x27c0000
    add        r3, r3, #0x3f000
    strh       r0, [r3, #4]
    strh       r2, [r3, #6]
    strh       lr, [r3, #8]
    strh       r1, [r3, #0xa]
    strh       ip, [r3, #0xc]
    strh       sl, [r3, #0xe]
    strh       r4, [r3, #0x18]
    add        sp, sp, #0x14
    pop        {r4, r5, r6, r7, r8, sl, lr}
    bx         lr
.L_037f83a8:
    bl         arm7_touch_read_veneer
    mov        r1, sp
    mov        r2, #0xc
    mov        r0, r6
    bl         memcpy
    mov        r2, r5
    ldrh       r5, [r6]
    cmp        r5, #0
    mov        r1, r2
    mov        sl, r2
    mov        r0, r2
    mov        lr, r2
    mov        ip, r2
    beq        .L_037f8410
    ldrh       r3, [r6, #2]
    cmp        r3, #0
    lsl        r5, r5, #0x10
    lsl        r8, r3, #0x10
    beq        .L_037f8410
    ldrh       sl, [r6, #0xa]
    ldrh       lr, [r6, #4]
    ldrh       r1, [r6, #6]
    ldrh       ip, [r6, #8]
    lsr        r0, r5, #0x10
    lsr        r2, r8, #0x10
    b          .L_037f8378
.L_037f8410:
    orr        r4, r4, #0x40
    str        r4, [r7]
    b          .L_037f8378
.L_037f841c:
    .word address_03806d48
.L_037f8420:
    .word 0x0380bb20
    tst        r0, #0x80
    mov        r1, r0
    beq        .L_037f84a4
    ldr        ip, .L_037f8500
    asr        r2, r0, #4
    and        r2, r2, #7
    add        r0, ip, r2, lsl #2
    ldr        r3, [r0, #0x1c]
    and        r1, r1, #0xf
    and        r3, r3, #0x3f0
    orr        r3, r3, r1
    str        r3, [r0, #0x1c]
    str        r2, [ip, #0x10]
.L_037f8458:
    ldr        r3, [ip, #0x10]
    cmp        r3, #6
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_037f84a0
    .word .L_037f84c4
    .word .L_037f84a0
    .word .L_037f84c4
    .word .L_037f84a0
    .word .L_037f84c4
    .word .L_037f84a0
    .word .L_037f8484
.L_037f8484:
    ldr        r3, [ip, #0x34]
    mov        r2, #0x10
    and        r3, r3, #3
    lsl        r2, r2, r3
    mov        r3, #0x8000
    str        r2, [ip, #0x18]
    str        r3, [ip, #0x14]
.L_037f84a0:
    bx         lr
.L_037f84a4:
    ldr        ip, .L_037f8500
    ldr        r3, [ip, #0x10]
    tst        r3, #1
    beq        .L_037f84dc
.L_037f84b4:
    add        r2, ip, r3, lsl #2
    and        r3, r1, #0xf
    str        r3, [r2, #0x1c]
    b          .L_037f8458
.L_037f84c4:
    add        r2, ip, r3, lsl #2
    ldr        r3, [r2, #0x1c]
    cmp        r3, #0
    addeq      r3, r3, #1
    streq      r3, [r2, #0x1c]
    bx         lr
.L_037f84dc:
    cmp        r3, #4
    bgt        .L_037f84b4
    add        r3, ip, r3, lsl #2
    ldr        r2, [r3, #0x1c]
    and        r1, r0, #0x3f
    and        r2, r2, #0xf
    orr        r2, r2, r1, lsl #4
    str        r2, [r3, #0x1c]
    b          .L_037f8458
.L_037f8500:
    .word psg_ticks_per_sample_q12
