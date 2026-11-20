/* Arm7 audio reset. Release range 0x02006308–0x020063dc. */


/* 0x02006308 */
.global clear_audio_queues_and_reset_or_stop_arm7_audio
clear_audio_queues_and_reset_or_stop_arm7_audio:
    ldr        r3, .L_020063b4
    mov        ip, #0
    str        ip, [r3]
    ldr        r3, .L_020063b8
    ldr        r2, .L_020063bc
    str        ip, [r3]
    ldr        r3, .L_020063c0
    str        ip, [r2]
    str        ip, [r3]
    ldr        r2, .L_020063c4
    ldr        r3, .L_020063c8
    ldr        r1, .L_020063cc
    push       {r4, lr}
    str        ip, [r2]
    ldr        r4, .L_020063d0
    str        ip, [r3]
    ldr        r2, .L_020063d4
    ldr        r3, .L_020063d8
    cmp        r0, #0
    str        ip, [r1, #0x1c]
    str        ip, [r2]
    str        ip, [r3]
    str        ip, [r4]
    str        ip, [r1]
    str        ip, [r1, #0xc]
    str        ip, [r1, #4]
    str        ip, [r1, #0x18]
    str        ip, [r1, #0x10]
    beq        .L_020063a4
    mov        r1, ip
    mov        r0, #1
    bl         send_arm9_fifo_command_and_payload
.L_02006388:
    ldr        r3, [r4]
    cmp        r3, #0
    popne      {r4, pc}
    ldr        r3, [r4]
    cmp        r3, #0
    beq        .L_02006388
    pop        {r4, pc}
.L_020063a4:
    mov        r1, r0
    mov        r0, #6
    pop        {r4, lr}
    b          send_arm9_fifo_command_and_payload
.L_020063b4:
    .word dac_queue_bytes
.L_020063b8:
    .word ym2612_bank_1_queue_bytes
.L_020063bc:
    .word ym2612_bank_0_queue_bytes
.L_020063c0:
    .word 0x0209939c
.L_020063c4:
    .word psg_queue_bytes
.L_020063c8:
    .word ym2612_bank_0_register
.L_020063cc:
    .word 0x023db778
.L_020063d0:
    .word 0x0209906c
.L_020063d4:
    .word ym2612_bank_1_register
.L_020063d8:
    .word ym2612_selected_bank
