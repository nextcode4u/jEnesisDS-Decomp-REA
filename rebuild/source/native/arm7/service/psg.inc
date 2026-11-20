/* Psg. Release range 0x037f86f4–0x037f8a30. */


/* 0x037f86f4 */
.global render_psg_samples
render_psg_samples:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    cmp        r1, #0
    sub        sp, sp, #0xc
    str        r1, [sp, #4]
    mov        fp, r0
    ble        .L_037f88e4
    ldr        r4, .L_037f89b4
    ldr        r8, .L_037f89b8
    ldr        sl, [r4, #0x18]
    ldr        r5, [r4, #4]
    ldr        sb, [r4]
    mov        r6, #0
    mov        r7, r4
    b          .L_037f87fc
.L_037f872c:
    ldr        r3, [r7, #0x3c]
    rsb        r0, r2, r3
    cmp        r0, #0
    str        r0, [r7, #0x3c]
    ble        .L_037f8978
.L_037f8740:
    ldr        lr, [r4, #0x24]
    cmp        lr, #6
    ldr        r0, .L_037f89b4
    ble        .L_037f8838
.L_037f8750:
    ldr        r2, [r0, #0x40]
    ldr        r3, [r0, #8]
    rsb        ip, r3, r2
    cmp        ip, #0
    str        ip, [r0, #0x40]
    ble        .L_037f893c
.L_037f8768:
    ldr        r3, [r4, #0x2c]
    cmp        r3, #6
    ldr        ip, .L_037f89b4
    ble        .L_037f8854
.L_037f8778:
    ldr        r2, [ip, #0x44]
    ldr        r3, [ip, #8]
    rsb        lr, r3, r2
    cmp        lr, #0
    str        lr, [ip, #0x44]
    ble        .L_037f88f0
.L_037f8790:
    cmp        sl, #0x80
    ldr        r1, .L_037f89b4
    beq        .L_037f87b4
    ldr        r2, [r1, #0x48]
    ldr        r3, [r1, #8]
    rsb        r2, r3, r2
    cmp        r2, #0
    str        r2, [r1, #0x48]
    ble        .L_037f8864
.L_037f87b4:
    ldr        r3, [r4, #0x58]
    cmp        r3, #2
    beq        .L_037f8888
.L_037f87c0:
    add        r1, r4, #0x64
    ldm        r1, {r1, r2}
    add        r2, r1, r2
    add        r1, r4, #0x5c
    ldm        r1, {r1, r3}
    add        r3, r1, r3
    ldr        r1, [sp, #4]
    add        r3, r3, r2
    lsl        r3, r3, #0x10
    lsl        r2, r6, #1
    add        r6, r6, #1
    asr        r3, r3, #0x11
    cmp        r1, r6
    strh       r3, [r2, fp]
    beq        .L_037f88e0
.L_037f87fc:
    ldr        ip, [r4, #0x1c]
    add        r5, r5, sb
    asr        r2, r5, #0xc
    cmp        ip, #6
    lsl        r5, r5, #0x14
    str        r2, [r4, #8]
    lsr        r5, r5, #0x14
    bgt        .L_037f872c
    ldr        r3, [r7, #0x20]
    ldr        lr, [r4, #0x24]
    ldr        r2, [r8, r3, lsl #2]
    cmp        lr, #6
    str        r2, [r7, #0x5c]
    ldr        r0, .L_037f89b4
    bgt        .L_037f8750
.L_037f8838:
    ldr        r3, [r0, #0x28]
    ldr        r2, [r8, r3, lsl #2]
    ldr        r3, [r4, #0x2c]
    cmp        r3, #6
    str        r2, [r0, #0x60]
    ldr        ip, .L_037f89b4
    bgt        .L_037f8778
.L_037f8854:
    ldr        r3, [ip, #0x30]
    ldr        r2, [r8, r3, lsl #2]
    str        r2, [ip, #0x64]
    b          .L_037f8790
.L_037f8864:
    ldr        r3, [r1, #0x58]
    rsb        r3, r3, #0
    cmp        r3, #1
    str        r3, [r1, #0x58]
    add        r2, r2, sl
    addeq      r3, r3, #1
    str        r2, [r1, #0x48]
    streq      r3, [r1, #0x58]
    bne        .L_037f87b4
.L_037f8888:
    ldr        r3, [r4, #0x34]
    tst        r3, #4
    ldr        r3, .L_037f89b4
    ldrne      r3, [r3, #0x14]
    ldreq      r3, [r3, #0x14]
    mov        r2, #1
    eorne      r3, r3, r3, asr #3
    andne      r3, r3, r2
    andeq      r3, r3, #1
    str        r2, [r4, #0x58]
    ldr        r2, [r4, #0x14]
    lsl        r3, r3, #0xf
    orr        r3, r3, r2, asr #1
    ldr        r1, .L_037f89b4
    ands       r2, r3, #1
    ldrne      r2, [r1, #0x38]
    str        r3, [r4, #0x14]
    ldrne      r3, [r8, r2, lsl #2]
    lslne      r3, r3, #1
    strne      r3, [r1, #0x68]
    streq      r2, [r1, #0x68]
    b          .L_037f87c0
.L_037f88e0:
    str        r5, [r4, #4]
.L_037f88e4:
    add        sp, sp, #0xc
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    bx         lr
.L_037f88f0:
    ldr        r3, [ip, #0x30]
    ldr        r1, [ip, #0x54]
    ldr        r2, [r8, r3, lsl #2]
    mul        r0, r1, r2
    ldr        r3, [ip, #0x18]
    rsb        r1, r1, #0
    cmp        r3, #0x80
    lsleq      r3, r1, #1
    str        r1, [ip, #0x54]
    str        r0, [ip, #0x64]
    streq      r3, [ip, #0x58]
    ldr        r1, [r4, #0x2c]
    mov        r2, lr
.L_037f8924:
    add        r3, r2, r1
    cmp        r3, #0
    mov        r2, r3
    ble        .L_037f8924
    str        r3, [r4, #0x44]
    b          .L_037f8790
.L_037f893c:
    ldr        r2, [r0, #0x28]
    ldr        r3, [r0, #0x50]
    ldr        r1, [r8, r2, lsl #2]
    mul        r2, r3, r1
    rsb        r3, r3, #0
    str        r3, [r0, #0x50]
    str        r2, [r0, #0x60]
    mov        r1, lr
    mov        r2, ip
.L_037f8960:
    add        r3, r2, r1
    cmp        r3, #0
    mov        r2, r3
    ble        .L_037f8960
    str        r3, [r4, #0x40]
    b          .L_037f8768
.L_037f8978:
    ldr        r2, [r7, #0x20]
    ldr        r3, [r7, #0x4c]
    ldr        r1, [r8, r2, lsl #2]
    mul        r2, r3, r1
    rsb        r3, r3, #0
    str        r2, [r7, #0x5c]
    str        r3, [r7, #0x4c]
    mov        r1, ip
    mov        r3, r0
.L_037f899c:
    add        r2, r3, r1
    cmp        r2, #0
    mov        r3, r2
    ble        .L_037f899c
    str        r2, [r4, #0x3c]
    b          .L_037f8740
.L_037f89b4:
    .word psg_ticks_per_sample_q12
.L_037f89b8:
    .word address_03806d4c

/* 0x037f89bc */
.global reset_psg_channel_state
reset_psg_channel_state:
    ldr        r0, .L_037f8a2c
    push       {r4, r5, r6, lr}
    mov        ip, #1
    mov        r2, r0
    mov        r3, r0
    add        r6, r0, #0x20
    mov        r5, #0xf
    mov        r4, r0
    mov        r1, #0
    mov        lr, #0x20
.L_037f89e4:
    str        ip, [r2, #0x1c]
    str        r5, [r2, #0x20]
    add        r2, r2, #8
    cmp        r2, r6
    str        r1, [r3, #0x3c]
    str        ip, [r3, #0x4c]
    str        lr, [r3, #0x6c]
    str        r1, [r3, #0x5c]
    add        r3, r3, #4
    bne        .L_037f89e4
    mov        r3, #0x10
    str        r3, [r0, #0x18]
    mov        r3, #0x8000
    str        r1, [r4, #4]
    str        r3, [r4, #0x14]
    str        r1, [r4, #0x10]
    pop        {r4, r5, r6, lr}
    bx         lr
.L_037f8a2c:
    .word psg_ticks_per_sample_q12
