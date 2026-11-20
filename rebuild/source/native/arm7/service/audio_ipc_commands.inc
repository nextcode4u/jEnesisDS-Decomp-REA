/* Audio ipc commands. Release range 0x037fc218–0x037fc468. */


/* 0x037fc218 */
.global handle_arm9_audio_command
handle_arm9_audio_command:
    str        lr, [sp, #-4]!
    ldr        r1, [r1]
    sub        sp, sp, #4
    cmp        r0, #0x10
    ldrls      pc, [pc, r0, lsl #2]
    b          .L_037fc288
    .word .L_037fc294
    .word .L_037fc350
    .word .L_037fc348
    .word .L_037fc288
    .word .L_037fc288
    .word .L_037fc320
    .word .L_037fc2f8
    .word .L_037fc288
    .word .L_037fc288
    .word .L_037fc288
    .word .L_037fc288
    .word .L_037fc368
    .word .L_037fc360
    .word .L_037fc288
    .word .L_037fc444
    .word .L_037fc274
    .word .L_037fc2a8
.L_037fc274:
    mov        r2, #0x4000000
    mvn        r3, #0x7f00
    add        r2, r2, #0x500
    sub        r3, r3, #0x80
    strh       r3, [r2]
.L_037fc288:
    add        sp, sp, #4
    ldr         lr, [sp], #4
    bx         lr
.L_037fc294:
    mov        r0, r1
    mov        r1, #2
    add        sp, sp, #4
    ldr         lr, [sp], #4
    b          initialize_audio_buffers_and_clocks
.L_037fc2a8:
    mov        r3, #0x27c0000
    add        r3, r3, #0x3f000
    ldr        r0, [r3, #0x28]
    ldr        ip, [r0, #4]
    cmp        ip, #0
    ldr        r2, [r0]
    beq        .L_037fc2e4
    ble        .L_037fc2e4
    add        r3, ip, #1
    ldr        r1, .L_037fc458
    asr        r3, r3, #1
.L_037fc2d4:
    ldrh       lr, [r2], #2
    subs       r3, r3, #1
    strh       lr, [r1], #2
    bne        .L_037fc2d4
.L_037fc2e4:
    ldr        r3, .L_037fc45c
    mov        r2, #0
    str        ip, [r3]
    str        r2, [r0, #4]
    b          .L_037fc288
.L_037fc2f8:
    mov        r3, #0x4000000
    add        r3, r3, #0x500
    mov        r2, #0x8000
    strh       r2, [r3]
    ldr        r3, .L_037fc460
    mov        r1, #0
    str        r1, [r3, #0x3c]
    add        sp, sp, #4
    ldr         lr, [sp], #4
    b          address_037fbbb0
.L_037fc320:
    mov        r2, #0x4000000
    mvn        r3, #0x7f00
    add        r2, r2, #0x500
    sub        r3, r3, #0x80
    strh       r3, [r2]
    bl         configure_ds_audio_channels_and_timers
    ldr        r3, .L_037fc460
    mov        r2, #1
    str        r2, [r3, #0x3c]
    b          .L_037fc288
.L_037fc348:
    bl         reset_ym2612_registers
    b          .L_037fc288
.L_037fc350:
    ldr        r3, .L_037fc460
    mov        r2, #1
    str        r2, [r3, #0x40]
    b          .L_037fc288
.L_037fc360:
    bl         arm7_wait_vblank_veneer
    b          .L_037fc288
.L_037fc368:
    mov        r3, #0x27c0000
    add        r3, r3, #0x3f000
    ldr        r3, [r3, #0x28]
    ldr        r1, [r3, #0x14]
    cmp        r1, #0
    beq        .L_037fc3ac
    ldr        r2, [r3, #0x10]
    ble        .L_037fc3a4
    add        r3, r1, #1
    ldr        r0, .L_037fc464
    asr        r3, r3, #1
.L_037fc394:
    ldrh       ip, [r2], #2
    subs       r3, r3, #1
    strh       ip, [r0], #2
    bne        .L_037fc394
.L_037fc3a4:
    ldr        r0, .L_037fc464
    bl         apply_ym2612_bank0_writes
.L_037fc3ac:
    mov        r3, #0x27c0000
    add        r3, r3, #0x3f000
    ldr        r3, [r3, #0x28]
    ldr        r1, [r3, #0x24]
    cmp        r1, #0
    beq        .L_037fc3f0
    ldr        r2, [r3, #0x20]
    ble        .L_037fc3e8
    add        r3, r1, #1
    ldr        r0, .L_037fc464
    asr        r3, r3, #1
.L_037fc3d8:
    ldrh       lr, [r2], #2
    subs       r3, r3, #1
    strh       lr, [r0], #2
    bne        .L_037fc3d8
.L_037fc3e8:
    ldr        r0, .L_037fc464
    bl         apply_ym2612_bank1_writes
.L_037fc3f0:
    mov        r3, #0x27c0000
    add        r3, r3, #0x3f000
    ldr        r3, [r3, #0x28]
    ldr        r1, [r3, #0x34]
    cmp        r1, #0
    beq        .L_037fc434
    ldr        r2, [r3, #0x30]
    ble        .L_037fc42c
    add        r3, r1, #1
    ldr        r0, .L_037fc464
    asr        r3, r3, #1
.L_037fc41c:
    ldrh       ip, [r2], #2
    subs       r3, r3, #1
    strh       ip, [r0], #2
    bne        .L_037fc41c
.L_037fc42c:
    ldr        r0, .L_037fc464
    bl         apply_psg_latch_and_data_bytes
.L_037fc434:
    ldr        r3, .L_037fc460
    mov        r2, #1
    str        r2, [r3, #0x3c]
    b          .L_037fc288
.L_037fc444:
    mov        r3, #0x4000000
    add        r3, r3, #0x500
    mov        r2, #0x8000
    strh       r2, [r3]
    b          .L_037fc288
.L_037fc458:
    .word dac_staged_bytes
.L_037fc45c:
    .word dac_staged_byte_count
.L_037fc460:
    .word fm_pcm_base
.L_037fc464:
    .word chip_write_staging_buffer
