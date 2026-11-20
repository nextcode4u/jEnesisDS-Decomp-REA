/* Dma command. Release range 0x02009e3c–0x0200aaf8. */


/* 0x02009e3c */
.global execute_vdp_dma_command
execute_vdp_dma_command:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        r0, .L_0200aa68
    ldr        r3, .L_0200aa6c
    ldrh       r2, [r0]
    ldrb       r1, [r3]
    ldr        r3, .L_0200aa70
    cmp        r2, #0
    moveq      r2, r3
    ldr        r3, .L_0200aa74
    and        r1, r1, #0xf
    sub        sp, sp, #0x2c
    str        r2, [r3]
    cmp        r1, #3
    ldrls      pc, [pc, r1, lsl #2]
    b          .L_02009efc
    .word .L_02009f04
    .word .L_02009f04
    .word .L_0200a2fc
    .word .L_0200a30c
.L_02009e88:
    ldr        r1, .L_0200aa78
    ldr        r0, .L_0200aa7c
    ldr        r2, [r1]
    lsl        ip, fp, #0xf
.L_02009e98:
    and        r2, r2, #0x7f
    sub        r3, r8, #1
    cmp        r2, #0x4f
    lsl        r3, r3, #0x10
    and        r1, r2, #0x7e
    bhi        .L_02009ed0
    lsrs       r8, r3, #0x10
    ldrh       r3, [sl]
    add        ip, ip, #0x8000
    strh       r3, [r1, r0]
    ldr        r1, [sp, #0x10]
    add        sl, sl, #2
    add        r2, r1, r2
    bne        .L_02009e98
.L_02009ed0:
    ldr        r3, .L_0200aa78
    str        r2, [r3]
    and        r3, fp, #0xfe0000
    orr        fp, r3, ip, lsr #15
.L_02009ee0:
    mov        r1, r8
.L_02009ee4:
    ldr        r0, .L_0200aa68
    ldr        r2, .L_0200aa80
    ldr        r3, .L_0200aa74
    str        r1, [r0]
    str        fp, [r2]
    str        r1, [r3]
.L_02009efc:
    add        sp, sp, #0x2c
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02009f04:
    ldr        r0, .L_0200aa80
    ldr        r3, .L_0200aa84
    ldr        r4, [r0]
    ldr        r3, [r3]
    bic        fp, r4, #0xff000000
    bic        fp, fp, #1
    mov        r0, fp
    str        r3, [sp, #0x10]
    bl         get_vdp_dma_backing_pointer
    ldr        r3, .L_0200aa88
    ldr        r1, .L_0200aa74
    ldr        r2, [r3]
    ldr        r6, [r1]
    and        r2, r2, #0xf
    lsl        r1, r6, #0x10
    cmp        r2, #3
    mov        sl, r0
    lsr        r8, r1, #0x10
    beq        .L_0200a4e0
    cmp        r2, #5
    beq        .L_02009e88
    cmp        r2, #1
    bne        .L_02009ee0
    ldr        r3, .L_0200aa78
    ldr        r0, .L_0200aa8c
    ldr        r7, [r3]
    and        r0, r7, r0
    ands       r2, r7, #1
    str        r0, [sp, #0x24]
    beq        .L_0200a65c
    ldr        r1, [sp, #0x10]
    ldr        sb, .L_0200aa90
    lsl        r3, r1, #0x10
    lsr        r3, r3, #0x10
    and        r6, r4, #0xfe0000
    str        r3, [sp, #0x1c]
    mov        r4, sl
    mov        lr, r0
    mov        r5, r8
.L_02009fa0:
    ldr        r0, [sp, #0x1c]
    ldrh       ip, [r4], #2
    add        r2, fp, #2
    sub        r3, r5, #1
    add        r1, lr, r0
    lsl        r3, r3, #0x10
    bic        r2, r2, #0xff000000
    add        r0, lr, sb
    bic        r2, r2, #0xfe0000
    lsl        r1, r1, #0x10
    lsrs       r5, r3, #0x10
    lsr        r3, ip, #8
    strb       r3, [sb, lr]
    orr        fp, r2, r6
    strb       ip, [r0, #1]
    lsr        lr, r1, #0x10
    bne        .L_02009fa0
    ldr        r2, .L_0200aa94
    mov        sb, lr
    ldr        r1, [r2, #0xc]
    cmp        r7, r1
    blo        .L_0200aa20
    ldr        r2, .L_0200aa98
    ldrb       r2, [r2]
    cmp        r2, #0
    movne      r3, #0x280
    moveq      r3, #0x200
    add        r3, r3, r1
    cmp        r7, r3
    bhs        .L_0200aa20
    cmp        r2, #0
    moveq      r3, #0x200
    movne      r3, #0x280
    add        r3, r3, r1
    cmp        lr, r3
    movls      r1, #0
    movhi      r1, #1
    ldr        r3, .L_0200aa9c
    mov        r2, #1
    strb       r2, [r3]
.L_0200a040:
    ldr        r3, .L_0200aaa0
    ldrh       r2, [r3]
    cmp        r7, r2
    beq        .L_0200aa40
.L_0200a050:
    cmp        r1, #0
    beq        .L_0200a2e4
    ldr        r3, .L_0200aa94
    ldr        r1, [sp, #0x24]
    ldr        r0, [r3]
    cmp        r1, r0
    blo        .L_0200aa38
    ldr        r3, .L_0200aaa4
    ldr        r2, [r3]
    cmp        r1, r2
    bhs        .L_0200aa38
    ldr        r3, .L_0200aaa8
    ldr        r2, [r3]
    cmp        r8, r2, lsr #1
    blo        .L_0200a09c
    mov        r0, #0
    bl         reset_background_tile_cache_at_capacity
    ldr        r3, .L_0200aa94
    ldr        r0, [r3]
.L_0200a09c:
    ldr        r2, [sp, #0x24]
    ldr        r6, .L_0200aaac
    rsb        r3, r0, r2
    lsl        r3, r3, #0x10
    lsr        r4, r3, #0x10
    mov        r5, sl
.L_0200a0b4:
    ldrh       r3, [r5], #2
    mov        r1, r4
    lsl        r2, r3, #8
    orr        r2, r2, r3, lsr #8
    mov        r0, #0
    mov        lr, pc
    ldr        pc, [r6]
    ldr        r0, [sp, #0x1c]
    sub        r3, r8, #1
    add        r2, r4, r0
    lsl        r3, r3, #0x10
    lsl        r2, r2, #0x10
    lsrs       r8, r3, #0x10
    lsr        r4, r2, #0x10
    bne        .L_0200a0b4
    ldr        r1, .L_0200aa78
    ldr        r2, .L_0200aa8c
    ldr        r3, [r1]
    mov        r7, #1
    and        r2, r3, r2
    str        r2, [sp, #0x24]
.L_0200a108:
    ldr        r3, .L_0200aa94
    ldr        r1, [sp, #0x24]
    ldr        r0, [r3, #4]
    cmp        r0, r1
    bhi        .L_0200a1c8
    ldr        r3, .L_0200aaa4
    ldr        r2, [r3, #4]
    cmp        r2, r1
    bls        .L_0200a1c8
    ldr        r2, .L_0200aa74
    ldr        r3, [r2]
    ldr        r2, .L_0200aaa8
    lsl        r3, r3, #0x10
    ldr        r1, [r2]
    lsr        r8, r3, #0x10
    cmp        r8, r1, lsr #1
    blo        .L_0200a15c
    mov        r0, #1
    bl         reset_background_tile_cache_at_capacity
    ldr        r3, .L_0200aa94
    ldr        r0, [r3, #4]
.L_0200a15c:
    ldr        r1, [sp, #0x24]
    ldr        r6, .L_0200aaac
    rsb        r3, r0, r1
    lsl        r3, r3, #0x10
    lsr        r4, r3, #0x10
    mov        r5, sl
.L_0200a174:
    ldrh       r3, [r5], #2
    mov        r1, r4
    lsl        r2, r3, #8
    orr        r2, r2, r3, lsr #8
    mov        r0, #1
    mov        lr, pc
    ldr        pc, [r6]
    ldr        r0, [sp, #0x1c]
    sub        r3, r8, #1
    add        r2, r4, r0
    lsl        r3, r3, #0x10
    lsl        r2, r2, #0x10
    lsrs       r8, r3, #0x10
    lsr        r4, r2, #0x10
    bne        .L_0200a174
    ldr        r1, .L_0200aa78
    ldr        r2, .L_0200aa8c
    ldr        r3, [r1]
    mov        r7, #1
    and        r2, r3, r2
    str        r2, [sp, #0x24]
.L_0200a1c8:
    ldr        r0, .L_0200aa94
    ldr        r1, [sp, #0x24]
    ldr        r3, [r0, #8]
    cmp        r3, r1
    bhi        .L_0200a28c
    ldr        r3, .L_0200aaa4
    ldr        r2, [r3, #8]
    cmp        r2, r1
    bls        .L_0200a28c
    ldr        r2, .L_0200aa74
    ldr        r3, [r2]
    ldr        r2, .L_0200aa98
    lsl        r3, r3, #0x10
    ldrb       r1, [r2]
    lsr        r8, r3, #0x10
    cmp        r1, #0
    moveq      r1, #0x400
    movne      r1, #0x800
    cmp        r1, r8
    bgt        .L_0200a220
    mov        r0, #2
    bl         reset_background_tile_cache_at_capacity
.L_0200a220:
    ldr        r0, .L_0200aa94
    ldr        r1, [sp, #0x24]
    ldr        r3, [r0, #8]
    ldr        r6, .L_0200aab0
    rsb        r3, r3, r1
    lsl        r3, r3, #0x10
    lsr        r4, r3, #0x10
    mov        r5, sl
.L_0200a240:
    ldrh       r3, [r5], #2
    mov        r0, r4
    lsl        r1, r3, #8
    orr        r1, r1, r3, lsr #8
    mov        lr, pc
    ldr        pc, [r6]
    ldr        r0, [sp, #0x1c]
    sub        r3, r8, #1
    add        r2, r4, r0
    lsl        r3, r3, #0x10
    lsl        r2, r2, #0x10
    lsrs       r8, r3, #0x10
    lsr        r4, r2, #0x10
    bne        .L_0200a240
    ldr        r1, .L_0200aa78
    ldr        r2, .L_0200aa8c
    ldr        r3, [r1]
    and        r2, r3, r2
    str        r2, [sp, #0x24]
.L_0200a28c:
    cmp        r7, #0
    movne      r5, r8
    bne        .L_0200a2e4
    ldr        r0, .L_0200aa74
    ldr        r3, [r0]
    lsl        r3, r3, #0x10
    lsr        r5, r3, #0x10
.L_0200a2a8:
    ldrh       r3, [sl], #2
    ldr        r0, [sp, #0x24]
    lsl        r1, r3, #8
    orr        r1, r1, r3, lsr #8
    bl         update_cached_ds_pattern_from_vdp_word
    ldr        r1, [sp, #0x24]
    ldr        r0, [sp, #0x1c]
    sub        r3, r5, #1
    add        r2, r1, r0
    lsl        r3, r3, #0x10
    lsl        r2, r2, #0x10
    lsr        r2, r2, #0x10
    lsrs       r5, r3, #0x10
    str        r2, [sp, #0x24]
    bne        .L_0200a2a8
.L_0200a2e4:
    lsl        r3, sb, #0x10
    ldr        r0, .L_0200aa78
    lsr        r3, r3, #0x10
    mov        r1, r5
    str        r3, [r0]
    b          .L_02009ee4
.L_0200a2fc:
    ldr        r3, .L_0200aab4
    mov        r2, #1
    strb       r2, [r3]
    b          .L_02009efc
.L_0200a30c:
    ldr        r3, .L_0200aa80
    ldr        r1, .L_0200aa74
    ldr        r0, [r3]
    ldr        r3, .L_0200aa78
    ldr        r2, [r1]
    ldr        r1, [r3]
    ldr        r3, .L_0200aa84
    lsl        r2, r2, #0x10
    lsl        r0, r0, #0xf
    lsr        r6, r2, #0x10
    ldr        r5, [r3]
    lsr        lr, r0, #0x10
    lsl        r1, r1, #0x10
    add        r3, lr, r6
    lsr        sl, r1, #0x10
    lsl        r3, r3, #0x10
    lsl        r2, r5, #0x10
    ldr        sb, .L_0200aa90
    lsr        r7, r2, #0x10
    lsr        r4, r3, #0x10
    mov        ip, sl
.L_0200a360:
    add        r3, lr, #1
    lsl        r3, r3, #0x10
    eor        r1, lr, #1
    add        r2, ip, r7
    lsr        lr, r3, #0x10
    ldrb       r0, [sb, r1]
    eor        r3, ip, #1
    lsl        r2, r2, #0x10
    cmp        lr, r4
    strb       r0, [sb, r3]
    lsr        ip, r2, #0x10
    bne        .L_0200a360
    ldr        r0, .L_0200aa78
    ldr        r4, .L_0200aa8c
    cmp        r5, #1
    ldr        r8, .L_0200aaa4
    ldr        fp, .L_0200aaac
    str        ip, [r0]
    lsreq      r6, r6, #1
    moveq      r7, #2
    and        r4, sl, r4
.L_0200a3b4:
    ldr        r2, .L_0200aa94
    ldr        r1, [r2, #0xc]
    cmp        r4, r1
    blo        .L_0200a3f0
    ldr        r2, .L_0200aa98
    ldrb       r3, [r2]
    cmp        r3, #0
    moveq      r3, #0x200
    movne      r3, #0x280
    add        r3, r3, r1
    cmp        r4, r3
    ldrlo      r3, .L_0200aa9c
    movlo      r2, #1
    strblo     r2, [r3]
    blo        .L_0200a470
.L_0200a3f0:
    ldr        r3, .L_0200aaa0
    ldrh       r2, [r3]
    cmp        r2, r4
    bhi        .L_0200a410
    ldr        r3, .L_0200aab8
    ldrh       r2, [r3]
    cmp        r2, r4
    bhi        .L_0200a470
.L_0200a410:
    ldr        r3, .L_0200aa94
    ldr        r2, [r3]
    cmp        r4, r2
    blo        .L_0200a42c
    ldr        r3, [r8]
    cmp        r4, r3
    blo        .L_0200a4c4
.L_0200a42c:
    mov        r5, #0
.L_0200a430:
    ldr        r0, .L_0200aa94
    ldr        r2, [r0, #4]
    cmp        r4, r2
    blo        .L_0200a44c
    ldr        r3, [r8, #4]
    cmp        r4, r3
    blo        .L_0200a640
.L_0200a44c:
    ldr        r1, .L_0200aa94
    ldr        r2, [r1, #8]
    cmp        r4, r2
    blo        .L_0200a468
    ldr        r3, [r8, #8]
    cmp        r4, r3
    blo        .L_0200a628
.L_0200a468:
    cmp        r5, #0
    beq        .L_0200a490
.L_0200a470:
    sub        r3, r6, #1
    lsl        r3, r3, #0x10
    lsrs       r6, r3, #0x10
    beq        .L_0200a4ac
.L_0200a480:
    add        r3, r4, r7
    ldr        r4, .L_0200aa8c
    and        r4, r3, r4
    b          .L_0200a3b4
.L_0200a490:
    mov        r0, r4
    ldrh       r1, [r4, sb]
    bl         update_cached_ds_pattern_from_vdp_word
    sub        r3, r6, #1
    lsl        r3, r3, #0x10
    lsrs       r6, r3, #0x10
    bne        .L_0200a480
.L_0200a4ac:
    ldr        r2, .L_0200aa68
    ldr        r0, .L_0200aa74
    mov        r3, #0
    str        r3, [r2]
    str        r3, [r0]
    b          .L_02009efc
.L_0200a4c4:
    rsb        r1, r2, r4
    mov        r0, #0
    ldrh       r2, [r4, sb]
    mov        lr, pc
    ldr        pc, [fp]
    mov        r5, #1
    b          .L_0200a430
.L_0200a4e0:
    ldr        r3, .L_0200aabc
    ldr        r2, .L_0200aac0
    ldr        sb, [r3]
    ldr        r0, .L_0200aac4
    ldrb       r3, [r2, sb]
    lsl        r6, fp, #0xf
    cmp        r3, #0xc8
    addeq      r3, sb, r2
    ldrbeq     r3, [r3, #-1]
    ldr        r2, .L_0200aac8
    and        r3, r3, #0xff
    str        r3, [sp, #8]
    ldr        r3, .L_0200aacc
    ldr        r1, [sp, #8]
    ldrb       r3, [r3]
    lsr        r1, r1, #5
    str        r3, [sp, #0x14]
    ldr        r3, .L_0200aa78
    add        r0, r0, r1, lsl #7
    ldr        r7, [r2]
    ldr        r5, [r3]
    str        r1, [sp, #4]
    str        r0, [sp, #0x18]
.L_0200a53c:
    ldrh       r1, [sl], #2
    and        r3, r5, #0x7e
    lsr        lr, r3, #1
    ldr        r2, .L_0200aad0
    and        r3, r1, #0xe0
    lsl        r4, lr, #1
    ldrh       r0, [r4, r2]
    ldr        ip, .L_0200aad4
    and        r2, r1, #0xe00
    lsl        r3, r3, #2
    orr        r3, r3, r2, lsl #3
    and        ip, r1, ip
    orr        r3, r3, #0x8000
    and        r1, r1, #0xe
    orr        r2, r3, r1, lsl #1
    ldr        r3, [sp, #0x10]
    cmp        ip, r0
    add        r6, r6, #0x8000
    add        r5, r5, r3
    beq        .L_0200a5f8
    ldr        r0, .L_0200aad0
    lsl        r3, r2, #0x10
    cmp        lr, #0
    lsr        r1, r3, #0x10
    strh       ip, [r4, r0]
    beq        .L_0200a5d8
    ldr        r1, [sp, #4]
    lsl        r3, r2, #0x10
    cmp        sb, #0xde
    add        r2, lr, r1, lsl #6
    lsl        r2, r2, #1
    lsr        r1, r3, #0x10
    bhi        .L_0200a5d8
    ldr        r3, .L_0200aac4
    ldr        r0, [sp, #8]
    strh       r1, [r2, r3]
    ldr        r3, .L_0200aad8
    ldr        r2, [sp, #0x18]
    str        r2, [r3, r0, lsl #2]
.L_0200a5d8:
    ldr        r3, [sp, #0x14]
    mov        r7, #1
    cmp        lr, r3
    ldr        r3, .L_0200aadc
    moveq      r7, #1
    strh       r1, [r4, r3]
    ldreq      r3, .L_0200aae0
    strheq     r1, [r3]
.L_0200a5f8:
    sub        r3, r8, #1
    lsl        r3, r3, #0x10
    lsrs       r8, r3, #0x10
    bne        .L_0200a53c
    and        r3, fp, #0xfe0000
    ldr        r0, .L_0200aac8
    ldr        r2, .L_0200aa78
    orr        fp, r3, r6, lsr #15
    mov        r1, r8
    str        r7, [r0]
    str        r5, [r2]
    b          .L_02009ee4
.L_0200a628:
    rsb        r0, r2, r4
    ldrh       r1, [r4, sb]
    ldr        r3, .L_0200aab0
    mov        lr, pc
    ldr        pc, [r3]
    b          .L_0200a468
.L_0200a640:
    rsb        r1, r2, r4
    mov        r0, #1
    ldrh       r2, [r4, sb]
    mov        lr, pc
    ldr        pc, [fp]
    mov        r5, #1
    b          .L_0200a44c
.L_0200a65c:
    ldr        r1, [sp, #0x10]
    ldr        sb, .L_0200aa90
    lsl        r3, r1, #0x10
    lsr        r3, r3, #0x10
    ldr        ip, [sp, #0x24]
    mov        r5, r8
    str        r3, [sp, #0x20]
    str        r2, [sp, #0xc]
    lsl        lr, fp, #0xf
    mov        r4, sl
    mov        r8, sb
.L_0200a688:
    ldrh       r3, [ip, sb]
    ldrh       r2, [r4], #2
    mov        r0, #0
    cmp        r2, r3
    ldrne      r3, [sp, #0xc]
    strhne     r2, [ip, r8]
    addne      r3, r3, #1
    strne      r3, [sp, #0xc]
    ldr        r2, [sp, #0x20]
    sub        r3, r5, #1
    lsl        r3, r3, #0x10
    add        r1, ip, r2
    movne      r0, #1
    lsrs       r5, r3, #0x10
    ldr        r3, .L_0200aae4
    lsl        r2, ip, #0xf
    lsl        r1, r1, #0x10
    add        lr, lr, #0x8000
    strb       r0, [r3, r2, lsr #16]
    lsr        ip, r1, #0x10
    bne        .L_0200a688
    ldr        r0, [sp, #0xc]
    cmp        r7, ip
    and        r3, fp, #0xfe0000
    movlo      sb, ip
    addhs      sb, ip, #0x10000
    cmp        r0, #0
    orr        fp, r3, lr, lsr #15
    beq        .L_0200aa28
    ldr        r2, .L_0200aa94
    ldr        r1, [r2, #0xc]
    cmp        r7, r1
    blo        .L_0200aa30
    ldr        r2, .L_0200aa98
    ldrb       r2, [r2]
    cmp        r2, #0
    movne      r3, #0x280
    moveq      r3, #0x200
    add        r3, r3, r1
    cmp        r7, r3
    bhs        .L_0200aa30
    cmp        r2, #0
    moveq      r3, #0x200
    movne      r3, #0x280
    add        r3, r3, r1
    cmp        ip, r3
    movls      r1, #0
    movhi      r1, #1
    ldr        r3, .L_0200aa9c
    mov        r2, #1
    strb       r2, [r3]
.L_0200a754:
    ldr        r3, .L_0200aaa0
    ldrh       r2, [r3]
    cmp        r7, r2
    beq        .L_0200aa54
.L_0200a764:
    cmp        r1, #0
    beq        .L_0200a2e4
    ldr        r3, .L_0200aa94
    ldr        r0, [sp, #0x24]
    ldr        ip, [r3]
    cmp        r0, ip
    blo        .L_0200a794
    ldr        r3, .L_0200aaa4
    ldr        r2, [r3]
    cmp        r0, r2
    movlo      r0, #1
    blo        .L_0200a7b4
.L_0200a794:
    cmp        sb, ip
    movls      r0, #0
    bls        .L_0200a7b4
    ldr        r3, .L_0200aaa4
    ldr        r2, [r3]
    cmp        sb, r2
    movhi      r0, #0
    movls      r0, #1
.L_0200a7b4:
    ldr        r2, .L_0200aa94
    ldr        r3, [sp, #0x24]
    ldr        r1, [r2, #4]
    cmp        r3, r1
    blo        .L_0200a7e0
    ldr        r3, .L_0200aaa4
    ldr        r2, [r3, #4]
    ldr        r3, [sp, #0x24]
    cmp        r3, r2
    movlo      r7, #1
    blo        .L_0200a800
.L_0200a7e0:
    cmp        sb, r1
    movls      r7, #0
    bls        .L_0200a800
    ldr        r3, .L_0200aaa4
    ldr        r2, [r3, #4]
    cmp        sb, r2
    movhi      r7, #0
    movls      r7, #1
.L_0200a800:
    cmp        r0, #0
    moveq      r4, r0
    beq        .L_0200a884
    ldr        r3, .L_0200aaa8
    ldr        lr, [r3]
    cmp        r6, lr, lsr #1
    blo        .L_0200a830
    ldr        r3, .L_0200aae8
    mov        r2, #1
    cmp        r7, #0
    str        r2, [r3]
    beq        .L_0200aa28
.L_0200a830:
    ldr        r0, [sp, #0x24]
    ldr        r2, [sp, #0x10]
    subs       r1, r0, ip
    ldrmi      r1, [sp, #0x24]
    movpl      r0, sl
    rsbmi      r3, r1, ip
    bicmi      r3, r3, #1
    addmi      r0, sl, r3
    rsb        r3, ip, sb
    movmi      r1, #0
    ldr        ip, .L_0200aaec
    cmp        lr, r3
    movlo      r3, lr
    mov        lr, pc
    ldr        pc, [ip]
    ldr        r0, .L_0200aa78
    ldr        r2, .L_0200aa8c
    ldr        r3, [r0]
    mov        r4, #1
    and        r2, r3, r2
    str        r2, [sp, #0x24]
.L_0200a884:
    cmp        r7, #0
    beq        .L_0200a910
    ldr        r3, .L_0200aaa8
    ldr        r1, .L_0200aa74
    ldr        lr, [r3]
    ldr        r2, [r1]
    cmp        r2, lr, lsr #1
    ldrhs      r3, .L_0200aae8
    movhs      r2, #1
    movhs      r1, #0
    strhs      r2, [r3, #4]
    bhs        .L_02009ee4
    ldr        r2, .L_0200aa94
    ldr        r3, [sp, #0x24]
    ldr        ip, [r2, #4]
    ldr        r2, [sp, #0x10]
    subs       r1, r3, ip
    ldrmi      r0, [sp, #0x24]
    movmi      r1, #0
    rsbmi      r3, r0, ip
    bicmi      r3, r3, #1
    addmi      r0, sl, r3
    rsb        r3, ip, sb
    movpl      r0, sl
    ldr        ip, .L_0200aaf0
    cmp        lr, r3
    movlo      r3, lr
    mov        lr, pc
    ldr        pc, [ip]
    ldr        r2, .L_0200aa78
    ldr        r1, .L_0200aa8c
    ldr        r3, [r2]
    mov        r4, #1
    and        r1, r3, r1
    str        r1, [sp, #0x24]
.L_0200a910:
    ldr        r3, .L_0200aa94
    ldr        r1, [sp, #0x24]
    ldr        r0, [r3, #8]
    cmp        r1, r0
    blo        .L_0200a978
    ldr        r3, .L_0200aaa4
    ldr        r2, [r3, #8]
    cmp        r1, r2
    bhs        .L_0200a978
    ldr        r2, .L_0200aa74
    rsb        r1, r0, r1
    ldr        r3, [r2]
    lsl        r1, r1, #0x10
    lsl        r3, r3, #0x10
    lsr        r1, r1, #0x10
    lsr        r3, r3, #0x10
    mov        r0, sl
    ldr        r2, [sp, #0x10]
    ldr        ip, .L_0200aaf4
    mov        lr, pc
    ldr        pc, [ip]
    ldr        r0, .L_0200aa78
    ldr        r1, .L_0200aa8c
    ldr        r3, [r0]
    and        r1, r3, r1
    str        r1, [sp, #0x24]
.L_0200a978:
    cmp        r4, #0
    bne        .L_0200a2e4
    ldr        r2, .L_0200aa74
    ldr        r3, [r2]
    lsl        r3, r3, #0x10
    lsr        r5, r3, #0x10
    ldr        r3, [sp, #0xc]
    cmp        r3, r5
    bne        .L_0200a9c8
    b          .L_0200a9e8
.L_0200a9a0:
    ldr        r1, [sp, #0x24]
    ldr        r3, [sp, #0x20]
    add        r2, r1, r3
    sub        r3, r5, #1
    lsl        r2, r2, #0x10
    lsl        r3, r3, #0x10
    lsr        r2, r2, #0x10
    lsrs       r5, r3, #0x10
    str        r2, [sp, #0x24]
    beq        .L_0200a2e4
.L_0200a9c8:
    ldr        r2, .L_0200aae4
    ldr        r0, [sp, #0x24]
    ldrh       r1, [sl], #2
    ldrb       r3, [r2, r0, lsr #1]
    cmp        r3, #0
    beq        .L_0200a9a0
    bl         update_cached_ds_pattern_from_vdp_word
    b          .L_0200a9a0
.L_0200a9e8:
    ldr        r0, [sp, #0x24]
    ldrh       r1, [sl], #2
    bl         update_cached_ds_pattern_from_vdp_word
    ldr        r0, [sp, #0x24]
    ldr        r1, [sp, #0x20]
    sub        r3, r5, #1
    add        r2, r0, r1
    lsl        r3, r3, #0x10
    lsl        r2, r2, #0x10
    lsr        r2, r2, #0x10
    lsrs       r5, r3, #0x10
    str        r2, [sp, #0x24]
    bne        .L_0200a9e8
    b          .L_0200a2e4
.L_0200aa20:
    mov        r1, #1
    b          .L_0200a040
.L_0200aa28:
    mov        r1, #0
    b          .L_02009ee4
.L_0200aa30:
    mov        r1, #1
    b          .L_0200a754
.L_0200aa38:
    mov        r7, #0
    b          .L_0200a108
.L_0200aa40:
    ldr        r3, .L_0200aab8
    ldrh       r2, [r3]
    cmp        r2, lr
    bhi        .L_0200a2e4
    b          .L_0200a050
.L_0200aa54:
    ldr        r3, .L_0200aab8
    ldrh       r2, [r3]
    cmp        r2, ip
    bhs        .L_0200a2e4
    b          .L_0200a764
.L_0200aa68:
    .word vdp_dma_length_register
.L_0200aa6c:
    .word vdp_dma_mode
.L_0200aa70:
    .word 0x0000ffff
.L_0200aa74:
    .word vdp_dma_remaining
.L_0200aa78:
    .word vdp_address
.L_0200aa7c:
    .word vdp_vsram
.L_0200aa80:
    .word vdp_dma_source_address
.L_0200aa84:
    .word vdp_address_increment
.L_0200aa88:
    .word vdp_access_code
.L_0200aa8c:
    .word 0x0000fffe
.L_0200aa90:
    .word vdp_vram
.L_0200aa94:
    .word vdp_plane_a_name_table_base
.L_0200aa98:
    .word vdp_wide_display_mode
.L_0200aa9c:
    .word 0x020b4c15
.L_0200aaa0:
    .word vdp_hscroll_table_base
.L_0200aaa4:
    .word vdp_plane_a_name_table_end
.L_0200aaa8:
    .word plane_name_table_span_bytes
.L_0200aaac:
    .word write_ds_background_tilemap_word
.L_0200aab0:
    .word write_ds_window_tilemap_word
.L_0200aab4:
    .word vdp_dma_enabled + 1
.L_0200aab8:
    .word 0x023dcdaa
.L_0200aabc:
    .word vdp_scanline
.L_0200aac0:
    .word ds_line_from_genesis_scanline
.L_0200aac4:
    .word 0x023dc8ca
.L_0200aac8:
    .word address_0208f354
.L_0200aacc:
    .word vdp_backdrop_color_index
.L_0200aad0:
    .word vdp_cram
.L_0200aad4:
    .word 0x00000eee
.L_0200aad8:
    .word scanline_pending_palette_changes
.L_0200aadc:
    .word ds_converted_vdp_palette
.L_0200aae0:
    .word 0x05000200
.L_0200aae4:
    .word vram_word_change_flags
.L_0200aae8:
    .word plane_a_tilemap_refresh_pending
.L_0200aaec:
    .word transfer_vdp_words_to_ds_background_0
.L_0200aaf0:
    .word transfer_vdp_words_to_ds_background_1
.L_0200aaf4:
    .word transfer_vdp_words_to_ds_window
