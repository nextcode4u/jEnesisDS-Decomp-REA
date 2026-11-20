/* YM2612 setup, channel preparation, and PCM mixing. 0x037fb9fc–0x037fbc10. */


/* 0x037fb9fc */
.global configure_ds_audio_channels_and_timers
configure_ds_audio_channels_and_timers:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        r0, .L_037fbba4
    mov        fp, #0x4000000
    mov        sb, fp
    sub        sp, sp, #0xc
    mov        r6, #0x400
    mov        r8, #0xa8000000
    add        r6, r6, #8
    add        fp, fp, #0x400
    add        sb, sb, #0x400
    add        r8, r8, #0x3f0000
    mov        sl, #0x4000000
    ldr        r7, .L_037fbba8
    str        r0, [sp, #4]
    orr        r6, r6, r6, lsl #23
    add        sl, sl, #0x400
    add        fp, fp, #4
    add        sb, sb, #0xc
    add        r8, r8, #0x7f
    mov        r5, #0
.L_037fba4c:
    ldr        r1, [r7, #0x30]
    mov        r0, #0xff000000
    bl         __divsi3
    ldr        r2, [sp, #4]
    lsl        r0, r0, #0x10
    ldr        r4, [r2], #4
    lsl        r3, r5, #4
    lsr        r0, r0, #0x10
    strh       r0, [r3, r6]
    str        r4, [fp, r5, lsl #4]
    ldr        r3, [r7, #0x20]
    asr        r3, r3, #1
    str        r3, [sb, r5, lsl #4]
    str        r8, [sl, r5, lsl #4]
    mov        r0, #0xff000000
    ldr        r1, [r7, #0x30]
    str        r2, [sp, #4]
    bl         __divsi3
    add        r2, r5, #6
    lsl        r0, r0, #0x10
    lsl        r3, r2, #4
    lsr        r0, r0, #0x10
    strh       r0, [r3, r6]
    str        r4, [fp, r2, lsl #4]
    ldr        r3, [r7, #0x20]
    add        r5, r5, #1
    asr        r3, r3, #1
    cmp        r5, #6
    str        r3, [sb, r2, lsl #4]
    str        r8, [sl, r2, lsl #4]
    bne        .L_037fba4c
    ldr        r3, .L_037fbba8
    mov        r0, #0xff000000
    ldr        r1, [r3, #0x30]
    bl         __divsi3
    ldr        sb, .L_037fbba8
    ldr        r2, .L_037fbba4
    ldr        ip, [sb, #0x20]
    ldr        r6, [r2, #0x18]
    ldr        r7, [sb, #0x14]
    lsl        r4, r0, #0x11
    ldr        r8, .L_037fbbac
    lsl        r0, r0, #0x10
    mov        r2, #0xa8000000
    mov        r1, #0
    mov        sb, #0x4000000
    lsr        r0, r0, #0x10
    add        r2, r2, #0x7f
    asr        ip, ip, #1
    sub        r1, r1, #0x20c
    mov        r5, #0x800
    mov        r3, #0x4000000
    mvn        lr, #0x410
    strh       r0, [sl, #0xc8]
    add        r3, r3, #0x100
    str        r6, [sb, #0x4c4]
    lsr        r4, r4, #0x10
    str        ip, [sb, #0x4cc]
    sub        lr, lr, #7
    str        r2, [sb, #0x4c0]
    strh       r0, [sl, #0xd8]
    str        r6, [sb, #0x4d4]
    mov        r0, #0x80
    str        ip, [sb, #0x4dc]
    str        r8, [sb, #0x4d0]
    strh       r1, [sl, #0xe8]
    str        r7, [sb, #0x4e4]
    str        r5, [sb, #0x4ec]
    str        r2, [sb, #0x4e0]
    strh       r1, [sl, #0xf8]
    mov        r2, #0
    str        r7, [sb, #0x4f4]
    str        r5, [sb, #0x4fc]
    str        r8, [sb, #0x4f0]
    mov        sb, #0x84
    strh       r4, [r3]
    strh       r0, [r3, #2]
    strh       r2, [r3, #4]
    strh       sb, [r3, #6]
    strh       lr, [r3, #8]
    strh       r0, [r3, #0xa]
    strh       r2, [r3, #0xc]
    strh       sb, [r3, #0xe]
    add        sp, sp, #0xc
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    bx         lr
.L_037fbba4:
    .word fm_channel_pcm_bases
.L_037fbba8:
    .word fm_pcm_base
.L_037fbbac:
    .word 0xa87f007f
    mov        r3, #0x4000000
    mov        r2, #0
    add        r1, r3, #0x100
    str        r2, [r3, #0x400]
    str        r2, [r3, #0x410]
    str        r2, [r3, #0x420]
    str        r2, [r3, #0x430]
    str        r2, [r3, #0x440]
    str        r2, [r3, #0x450]
    str        r2, [r3, #0x460]
    str        r2, [r3, #0x470]
    str        r2, [r3, #0x480]
    str        r2, [r3, #0x490]
    str        r2, [r3, #0x4a0]
    str        r2, [r3, #0x4b0]
    str        r2, [r3, #0x4c0]
    str        r2, [r3, #0x4d0]
    str        r2, [r3, #0x4e0]
    str        r2, [r3, #0x4f0]
    strh       r2, [r1, #2]
    strh       r2, [r1, #6]
    strh       r2, [r1, #0xa]
    strh       r2, [r1, #0xe]
    bx         lr
