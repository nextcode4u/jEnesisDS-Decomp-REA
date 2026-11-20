/* Audio submit. Release range 0x02006228–0x020062c4. */


/* 0x02006228 */
.global submit_fm_and_psg_write_buffers_to_arm7
submit_fm_and_psg_write_buffers_to_arm7:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r2, .L_020062ac
.L_02006230:
    ldrh       r3, [r2, #0x80]
    tst        r3, #0xf
    beq        .L_02006230
    ldr        r3, .L_020062b0
    ldr        r6, .L_020062b4
    ldr        r7, .L_020062b8
    ldr        r8, .L_020062bc
    ldr        r5, [r3, #0x28]
    ldr        r2, [r8]
    ldr        r4, [r3, #0x28]
    ldr        lr, [r6]
    ldr        r1, [r7]
    ldr        ip, [r3, #0x28]
    str        lr, [r5, #0x14]
    ldr        r0, [r3, #0x28]
    str        r1, [r4, #0x24]
    str        r2, [ip, #0x34]
    mov        r4, #0
    mov        r1, #0x104
    str        r4, [r6]
    str        r4, [r7]
    str        r4, [r8]
    bl         DC_FlushRange
    mov        r1, r4
    mov        r0, #0xb
    bl         send_arm9_fifo_command_and_payload
    ldr        r2, .L_020062c0
    ldr        r3, [r2]
    add        r3, r3, #1
    str        r3, [r2]
    pop        {r4, r5, r6, r7, r8, pc}
.L_020062ac:
    .word 0x04000100
.L_020062b0:
    .word 0x027ff000
.L_020062b4:
    .word ym2612_bank_0_queue_bytes
.L_020062b8:
    .word ym2612_bank_1_queue_bytes
.L_020062bc:
    .word psg_queue_bytes
.L_020062c0:
    .word 0x0209905c
