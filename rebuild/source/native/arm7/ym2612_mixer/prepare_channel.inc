/* YM2612 setup, channel preparation, and PCM mixing. 0x037f95fc–0x037f9afc. */


/* 0x037f95fc */
.global prepare_and_render_fm_channel
prepare_and_render_fm_channel:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        r3, [r2, #0xc8]
    mov        sl, r2
    ldr        fp, .L_037f9ae8
    ldrh       ip, [sl, #0x1a]
    ldrh       r2, [r2, #0x18]
    str        r3, [fp, #0x30]
    str        sl, [fp, #0x3c]
    add        r2, r2, ip
    ldrb       lr, [sl, #0xc1]
    strh       r2, [fp]
    ldr        ip, .L_037f9aec
    ldrh       r2, [sl, #0x7a]
    ldrh       r3, [sl, #0x78]
    add        r3, r3, r2
    ldr        r2, [ip, #0x450]
    sub        sp, sp, #0xc
    str        r2, [sp, #4]
    ldr        r2, [ip, #0x454]
    strh       r3, [fp, #2]
    ldr        r3, [ip, #0x45c]
    str        r2, [fp, #0x40]
    ldr        r2, [sp, #4]
    str        r3, [sp]
    str        r2, [fp, #0x34]
    ldr        r4, [ip, #0x458]
    ldr        r2, [sp]
    and        lr, lr, #0xf
    ldrh       ip, [sl, #0x4a]
    ldrh       r3, [sl, #0x48]
    lsl        lr, lr, #0xc
    str        lr, [fp, #0x48]
    str        r4, [fp, #0x44]
    str        r2, [fp, #0x38]
    add        r3, r3, ip
    ldr        sb, .L_037f9af0
    strh       r3, [fp, #4]
    ldrb       r2, [sl, #0xc]
    ldrh       lr, [sl, #0xaa]
    ldrh       ip, [sl, #0xa8]
    strb       r2, [sb]
    ldrb       r3, [sl, #0xd]
    strb       r3, [sb, #1]
    ldrb       r2, [sl, #0xe]
    strb       r2, [sb, #2]
    ldrb       r3, [sl, #0xf]
    strb       r3, [sb, #3]
    ldrb       r2, [sl, #0x6c]
    add        ip, ip, lr
    strh       ip, [fp, #6]
    strb       r2, [sb, #4]
    ldrb       r3, [sl, #0x6d]
    strb       r3, [sb, #5]
    ldrb       r2, [sl, #0x6e]
    strb       r2, [sb, #6]
    ldrb       r3, [sl, #0x6f]
    strb       r3, [sb, #7]
    ldrb       r2, [sl, #0x3c]
    strb       r2, [sb, #8]
    ldrb       r3, [sl, #0x3d]
    strb       r3, [sb, #9]
    ldrb       r2, [sl, #0x3e]
    strb       r2, [sb, #0xa]
    ldrb       r3, [sl, #0x3f]
    strb       r3, [sb, #0xb]
    ldrb       r2, [sl, #0x9c]
    strb       r2, [sb, #0xc]
    ldrb       r3, [sl, #0x9d]
    strb       r3, [sb, #0xd]
    ldrb       r2, [sl, #0x9e]
    strb       r2, [sb, #0xe]
    ldr        r3, .L_037f9af4
    ldr        r2, .L_037f9af8
    ldrb       r6, [sl, #0x9f]
    lsr        ip, r3, #8
    lsr        lr, r3, #0x10
    lsr        r4, r2, #8
    lsr        r5, r2, #0x10
    lsr        r7, r3, #0x18
    lsr        r8, r2, #0x18
    strb       ip, [sb, #0x11]
    strb       lr, [sb, #0x12]
    strb       r4, [sb, #0x15]
    strb       r5, [sb, #0x16]
    strb       r6, [sb, #0xf]
    strb       r7, [sb, #0x13]
    strb       r8, [sb, #0x17]
    strb       r3, [sb, #0x10]
    strb       r2, [sb, #0x14]
    ldrb       r3, [sl, #0xc4]
    strb       r3, [sb, #0x18]
    ldrb       r2, [sl, #0xc5]
    strb       r2, [sb, #0x19]
    ldrb       r3, [sl, #0xc6]
    strb       r3, [sb, #0x1a]
    ldrb       r2, [sl, #0xc7]
    strb       r2, [sb, #0x1b]
    ldrsh      r2, [sl, #0x1a]
    ldrh       r3, [sl, #0x18]
    add        r3, r3, r2
    lsl        r3, r3, #4
    lsr        lr, r3, #0x18
    lsr        r2, r3, #8
    lsr        ip, r3, #0x10
    strb       ip, [sb, #0x22]
    strb       lr, [sb, #0x23]
    strb       r2, [sb, #0x21]
    strb       r3, [sb, #0x20]
    ldrsh      r3, [sl, #0x7a]
    ldrh       r2, [sl, #0x78]
    add        r2, r2, r3
    lsl        r2, r2, #4
    lsr        lr, r2, #0x18
    lsr        r3, r2, #8
    lsr        ip, r2, #0x10
    strb       ip, [sb, #0x26]
    strb       lr, [sb, #0x27]
    strb       r3, [sb, #0x25]
    strb       r2, [sb, #0x24]
    ldrsh      r2, [sl, #0x4a]
    ldrh       r3, [sl, #0x48]
    add        r3, r3, r2
    lsl        r3, r3, #4
    lsr        lr, r3, #0x18
    lsr        r2, r3, #8
    lsr        ip, r3, #0x10
    strb       ip, [sb, #0x2a]
    strb       lr, [sb, #0x2b]
    strb       r2, [sb, #0x29]
    strb       r3, [sb, #0x28]
    ldrsh      r3, [sl, #0xaa]
    ldrh       r2, [sl, #0xa8]
    add        r2, r2, r3
    lsl        r2, r2, #4
    lsr        lr, r2, #0x18
    lsr        r3, r2, #8
    lsr        ip, r2, #0x10
    strb       ip, [sb, #0x2e]
    strb       lr, [sb, #0x2f]
    strb       r2, [sb, #0x2c]
    strb       r3, [sb, #0x2d]
    ldrb       r3, [sl, #0x10]
    strb       r3, [sb, #0x30]
    ldrb       r2, [sl, #0x11]
    strb       r2, [sb, #0x31]
    ldrb       r3, [sl, #0x12]
    strb       r3, [sb, #0x32]
    ldrb       r2, [sl, #0x13]
    strb       r2, [sb, #0x33]
    ldrb       r3, [sl, #0x70]
    strb       r3, [sb, #0x34]
    ldrb       r2, [sl, #0x71]
    strb       r2, [sb, #0x35]
    ldrb       r3, [sl, #0x72]
    strb       r3, [sb, #0x36]
    ldrb       r2, [sl, #0x73]
    strb       r2, [sb, #0x37]
    ldrb       r3, [sl, #0x40]
    strb       r3, [sb, #0x38]
    ldrb       r2, [sl, #0x41]
    strb       r2, [sb, #0x39]
    ldrb       r3, [sl, #0x42]
    strb       r3, [sb, #0x3a]
    ldrb       r2, [sl, #0x43]
    strb       r2, [sb, #0x3b]
    ldrb       r3, [sl, #0xa0]
    strb       r3, [sb, #0x3c]
    ldrb       r2, [sl, #0xa1]
    strb       r2, [sb, #0x3d]
    ldrb       r3, [sl, #0xa2]
    strb       r3, [sb, #0x3e]
    ldrb       r2, [sl, #0xa3]
    strb       r2, [sb, #0x3f]
    ldrb       ip, [sl, #0xc0]
    and        ip, ip, #7
    mov        r3, #0
    lsr        lr, ip, #0x18
    strb       r3, [sb, #0x41]
    strb       r3, [sb, #0x42]
    strb       lr, [sb, #0x43]
    strb       ip, [sb, #0x40]
    mov        r2, r3
    ldrb       r3, [sl, #0xc1]
    and        r3, r3, #0xf
    lsr        ip, r3, #0x18
    strb       r3, [sb, #0x44]
    strb       r2, [sb, #0x45]
    strb       r2, [sb, #0x46]
    strb       ip, [sb, #0x47]
    ldrb       r3, [sl, #0xc8]
    strb       r3, [sb, #0x1c]
    ldrb       r2, [sl, #0xc9]
    strb       r2, [sb, #0x1d]
    ldrb       r3, [sl, #0xca]
    strb       r3, [sb, #0x1e]
    ldrb       r2, [sl, #0xcb]
    strb       r2, [sb, #0x1f]
    ldrb       r3, [sl, #0x17]
    cmp        r3, #0
    mov        r5, r0
    mov        r4, r1
    bne        .L_037f9a48
    ldr        r0, [fp, #0x3c]
    ldrb       r3, [r0, #0x77]
    cmp        r3, #0
    bne        .L_037f9a6c
.L_037f9934:
    ldrb       r3, [r0, #0x47]
    cmp        r3, #0
    bne        .L_037f9a90
.L_037f9940:
    ldrb       r3, [r0, #0xa7]
    cmp        r3, #0
    bne        .L_037f9ab4
.L_037f994c:
    ldr        r3, [fp, #0x48]
    tst        r3, #4
    beq        .L_037f9ad4
.L_037f9958:
    cmp        r4, #0
    movgt      r2, #0
    ble        .L_037f997c
.L_037f9964:
    lsl        r3, r2, #1
    add        r2, r2, #1
    mov        r1, #0
    cmp        r4, r2
    strh       r1, [r3, r5]
    bne        .L_037f9964
.L_037f997c:
    ldrb       r2, [sb, #0x19]
    ldrb       r3, [sb, #0x18]
    ldrb       r0, [sb, #0x1a]
    ldrb       r1, [sb, #0x1b]
    orr        r3, r3, r2, lsl #8
    orr        r3, r3, r0, lsl #16
    orr        r3, r3, r1, lsl #24
    str        r3, [sl, #0xc4]
    ldrb       r3, [sb, #1]
    ldrb       r2, [sb]
    ldrb       r0, [sb, #2]
    ldrb       r1, [sb, #3]
    orr        r2, r2, r3, lsl #8
    orr        r2, r2, r0, lsl #16
    orr        r2, r2, r1, lsl #24
    str        r2, [sl, #0xc]
    ldrb       r2, [sb, #5]
    ldrb       r3, [sb, #4]
    ldrb       r0, [sb, #6]
    ldrb       r1, [sb, #7]
    orr        r3, r3, r2, lsl #8
    orr        r3, r3, r0, lsl #16
    orr        r3, r3, r1, lsl #24
    str        r3, [sl, #0x6c]
    ldrb       r3, [sb, #9]
    ldrb       r2, [sb, #8]
    ldrb       r0, [sb, #0xa]
    ldrb       r1, [sb, #0xb]
    orr        r2, r2, r3, lsl #8
    orr        r2, r2, r0, lsl #16
    orr        r2, r2, r1, lsl #24
    str        r2, [sl, #0x3c]
    ldrb       r2, [sb, #0xd]
    ldrb       r3, [sb, #0xc]
    ldrb       r0, [sb, #0xe]
    ldrb       r1, [sb, #0xf]
    orr        r3, r3, r2, lsl #8
    orr        r3, r3, r0, lsl #16
    orr        r3, r3, r1, lsl #24
    str        r3, [sl, #0x9c]
    ldrb       r2, [sb, #0x1c]
    ldrb       r3, [sb, #0x1d]
    ldrb       r0, [sb, #0x1e]
    ldrb       r1, [sb, #0x1f]
    orr        r2, r2, r3, lsl #8
    orr        r2, r2, r0, lsl #16
    orr        r2, r2, r1, lsl #24
    str        r2, [sl, #0xc8]
    add        sp, sp, #0xc
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    bx         lr
.L_037f9a48:
    ldr        r1, [sp, #4]
    ldr        r2, [sp]
    mov        r0, sl
    bl         step_fm_operator_envelope
    strh       r0, [fp]
    ldr        r0, [fp, #0x3c]
    ldrb       r3, [r0, #0x77]
    cmp        r3, #0
    beq        .L_037f9934
.L_037f9a6c:
    add        r0, r0, #0x60
    add        r1, fp, #0x34
    ldm        r1, {r1, r2}
    bl         step_fm_operator_envelope
    strh       r0, [fp, #2]
    ldr        r0, [fp, #0x3c]
    ldrb       r3, [r0, #0x47]
    cmp        r3, #0
    beq        .L_037f9940
.L_037f9a90:
    add        r0, r0, #0x30
    add        r1, fp, #0x34
    ldm        r1, {r1, r2}
    bl         step_fm_operator_envelope
    strh       r0, [fp, #4]
    ldr        r0, [fp, #0x3c]
    ldrb       r3, [r0, #0xa7]
    cmp        r3, #0
    beq        .L_037f994c
.L_037f9ab4:
    add        r0, r0, #0x90
    add        r1, fp, #0x34
    ldm        r1, {r1, r2}
    bl         step_fm_operator_envelope
    ldr        r3, [fp, #0x48]
    tst        r3, #4
    strh       r0, [fp, #6]
    bne        .L_037f9958
.L_037f9ad4:
    mov        r1, r5
    mov        r2, r4
    mov        r0, sb
    bl         dispatch_fm_algorithm_and_operator_mask
    b          .L_037f997c
.L_037f9ae8:
    .word 0x03806e38
.L_037f9aec:
    .word 0x03806ea8
.L_037f9af0:
    .word 0x0380b820
.L_037f9af4:
    .word ym2612_tables + 0x1000 /* signed_attenuation */
.L_037f9af8:
    .word ym2612_tables /* log_sine */
