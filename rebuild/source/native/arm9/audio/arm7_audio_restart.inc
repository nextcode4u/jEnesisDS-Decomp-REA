/* Arm7 audio restart. Release range 0x020063e8–0x02006730. */


/* 0x020063e8 */
.global restart_arm7_audio_and_replay_fm_registers
restart_arm7_audio_and_replay_fm_registers:
    push       {r4, r5, r6, r7, lr}
    mov        r0, #1
    sub        sp, sp, #4
    bl         address_020858bc
    bl         request_arm7_audio_stop
    bl         address_020858a4
    bl         address_020858a4
    mov        r0, #1
    bl         clear_audio_queues_and_reset_or_stop_arm7_audio
    bl         address_020858a4
    bl         address_020858a4
    mov        r0, #1
    bl         address_020858b0
    ldr        r7, .L_02006484
    ldr        r6, .L_02006488
    mov        r5, #0
.L_02006428:
    and        r4, r5, #0xff
    mov        r0, #0
    mov        r1, r4
    bl         queue_ym2612_register_or_dac_write
    ldrb       r1, [r5, r7]
    mov        r0, #1
    bl         queue_ym2612_register_or_dac_write
    mov        r1, r4
    mov        r0, #2
    bl         queue_ym2612_register_or_dac_write
    ldrb       r1, [r5, r6]
    mov        r0, #3
    add        r5, r5, #1
    bl         queue_ym2612_register_or_dac_write
    cmp        r5, #0x100
    bne        .L_02006428
    mov        r0, #1
    bl         address_020858bc
    bl         address_020858a4
    bl         address_020858a4
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, lr}
    b          request_arm7_audio_start
.L_02006484:
    .word ym2612_bank_0_mirror
.L_02006488:
    .word ym2612_bank_1_mirror
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        fp, .L_020066e0
    sub        sp, sp, #4
    ldr        sb, [fp]
    cmp        sb, #0
    beq        .L_020064ac
.L_020064a4:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_020064ac:
    bl         initialize_arm9_fifo_receive_interrupt
    ldr        r0, .L_020066e4
    bl         set_arm9_fifo_receive_callback
    mov        r1, #0x400
    mov        r0, #0x20
    bl         memalign
    ldr        r6, .L_020066e8
    orr        r3, r0, #0x400000
    str        r3, [r6]
    mov        r1, #0x400
    mov        r0, #0x20
    bl         memalign
    ldr        r5, .L_020066ec
    orr        r3, r0, #0x400000
    str        r3, [r5]
    mov        r1, #0x400
    mov        r0, #0x20
    bl         memalign
    ldr        r4, .L_020066f0
    orr        r3, r0, #0x400000
    str        r3, [r4]
    mov        r1, #0x100
    mov        r0, #0x20
    bl         memalign
    ldr        r3, [r6]
    ldr        r2, [r5]
    ldr        r1, [r4]
    ldr        r6, .L_020066f4
    ldr        lr, .L_020066f8
    ldr        r8, .L_020066fc
    ldr        sl, .L_02006700
    orr        r3, r3, #0x400000
    ldr        r7, .L_02006704
    str        r3, [r6]
    orr        r2, r2, #0x400000
    orr        r1, r1, #0x400000
    ldr        r3, .L_02006708
    str        r2, [r8]
    str        r1, [sl]
    orr        r0, r0, #0x400000
    str        sb, [r6, #4]
    str        sb, [r8, #4]
    str        sb, [sl, #4]
    add        ip, lr, #0x10
    add        r4, lr, #0x20
    add        r5, lr, #0x30
    str        r0, [r3]
    stm        r7, {r0, sb}
    ldm        r6, {r0, r1, r2, r3}
    stm        lr, {r0, r1, r2, r3}
    ldm        r8, {r0, r1, r2, r3}
    stm        ip, {r0, r1, r2, r3}
    ldm        sl, {r0, r1, r2, r3}
    stm        r4, {r0, r1, r2, r3}
    ldm        r7, {r0, r1, r2, r3}
    stm        r5, {r0, r1, r2, r3}
    ldr        r3, .L_0200670c
    ldr        r1, .L_02006710
    mov        r2, #4
    str        lr, [r3, #0x28]
    mov        ip, #1
    strb       r2, [lr, #0x100]
    add        r3, r1, #0x100
.L_020065a8:
    strb       ip, [r1], #1
    cmp        r1, r3
    bne        .L_020065a8
    mov        r3, #0
    ldr        r7, .L_02006714
    sub        r2, r1, #0x100
    mov        r6, r3
    str        ip, [fp]
    strb       r3, [r2, #0xa9]
    strb       r3, [r2, #0x24]
    strb       r3, [r2, #0x25]
    strb       r3, [r2, #0x26]
    strb       r3, [r2, #0x27]
    strb       r3, [r2, #0x2a]
    strb       r3, [r2, #0xa0]
    strb       r3, [r2, #0xa1]
    strb       r3, [r2, #0xa2]
    strb       r3, [r2, #0xa3]
    strb       r3, [r2, #0xa4]
    strb       r3, [r2, #0xa5]
    strb       r3, [r2, #0xa6]
    strb       r3, [r2, #0xa7]
    strb       r3, [r2, #0xa8]
    b          .L_0200663c
.L_02006608:
    mov        r2, r4
    mov        r3, r5
    mov        r0, #0
    ldr        r1, .L_02006718
    bl         __subdf3
    ldr        r2, .L_0200671c
    ldr        r3, .L_02006720
    bl         __muldf3
    bl         __fixunsdfsi
    cmp        r6, #0x400
    strh       r0, [r7, #0x20]
    add        r7, r7, #2
    beq        .L_02006670
.L_0200663c:
    mov        r0, r6
    bl         __floatsidf
    cmp        r6, #0
    mov        r4, r0
    mov        r5, r1
    add        r6, r6, #1
    mov        r2, #0
    ldr        r3, .L_02006724
    bge        .L_02006608
    bl         __adddf3
    mov        r4, r0
    mov        r5, r1
    b          .L_02006608
.L_02006670:
    ldr        r7, .L_02006728
    sub        r6, r6, #0x400
    b          .L_020066ac
.L_0200667c:
    mov        r2, r4
    mov        r3, r5
    mov        r0, #0
    ldr        r1, .L_0200672c
    bl         __subdf3
    ldr        r2, .L_0200671c
    ldr        r3, .L_02006720
    bl         __muldf3
    bl         __fixunsdfsi
    cmp        r6, #0x100
    strh       r0, [r7], #2
    beq        .L_020064a4
.L_020066ac:
    mov        r0, r6
    bl         __floatsidf
    cmp        r6, #0
    mov        r4, r0
    mov        r5, r1
    add        r6, r6, #1
    mov        r2, #0
    ldr        r3, .L_02006724
    bge        .L_0200667c
    bl         __adddf3
    mov        r4, r0
    mov        r5, r1
    b          .L_0200667c
.L_020066e0:
    .word 0x02099070
.L_020066e4:
    .word address_020059a4
.L_020066e8:
    .word dac_write_buffer
.L_020066ec:
    .word 0x023db644
.L_020066f0:
    .word ym2612_bank_1_write_buffer
.L_020066f4:
    .word 0x023db648
.L_020066f8:
    .word 0x023db65c
.L_020066fc:
    .word 0x023db764
.L_02006700:
    .word 0x023db634
.L_02006704:
    .word 0x023dc198
.L_02006708:
    .word psg_write_buffer
.L_0200670c:
    .word 0x027ff000
.L_02006710:
    .word 0x0209927c
.L_02006714:
    .word 0x023db778
.L_02006718:
    .word 0x40900000
.L_0200671c:
    .word 0xc669057d
.L_02006720:
    .word 0x40401ba2
.L_02006724:
    .word 0x41f00000
.L_02006728:
    .word 0x023dbf98
.L_0200672c:
    .word 0x40700000
