/* Lzss encode stream. Release range 0x0200c87c–0x0200cb78. */


/* 0x0200c87c */
.global encode_lzss_stream
encode_lzss_stream:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        fp, .L_0200cb50
    sub        sp, sp, #0x24
    bl         initialize_lzss_match_trees
    add        r2, fp, #0xfe0
    add        r2, r2, #0xe
    mov        r3, fp
    mov        r1, #0x20
.L_0200c89c:
    strb       r1, [r3], #1
    cmp        r3, r2
    bne        .L_0200c89c
    mov        sl, #0
.L_0200c8ac:
    ldr        r1, .L_0200cb54
    ldr        r0, [r1]
    bl         read_bounded_stream_byte
    cmn        r0, #1
    add        r3, sl, fp
    beq        .L_0200cb38
    add        sl, sl, #1
    cmp        sl, #0x12
    strb       r0, [r3, #0xfee]
    bne        .L_0200c8ac
    ldr        r0, .L_0200cb58
    ldr        r4, .L_0200cb5c
    str        sl, [r0]
.L_0200c8e0:
    mov        r0, r4
    bl         insert_lzss_match_tree_node
    ldr        r3, .L_0200cb60
    sub        r4, r4, #1
    cmp        r4, r3
    bne        .L_0200c8e0
    mov        r4, #0
    ldr        r0, .L_0200cb64
    mov        sb, #1
    ldr        r7, .L_0200cb64
    strb       r4, [sp, #0xf]
    mov        r5, r4
    bl         insert_lzss_match_tree_node
    str        sb, [sp, #4]
.L_0200c918:
    ldr        r3, .L_0200cb68
    ldr        lr, [r3]
    cmp        sl, lr
    movlt      lr, sl
    strlt      sl, [r3]
    cmp        lr, #2
    bgt        .L_0200caf8
    ldrb       r3, [sp, #0xf]
    ldr        lr, [sp, #4]
    ldrb       r1, [fp, r7]
    add        r0, sp, #0x20
    orr        r3, lr, r3
    add        r2, r0, sb
    strb       r3, [sp, #0xf]
    strb       r1, [r2, #-0x11]
    ldr        r1, .L_0200cb68
    mov        lr, #1
    add        sb, sb, #1
    str        lr, [r1]
.L_0200c964:
    ldr        r0, [sp, #4]
    lsl        r3, r0, #1
    and        r3, r3, #0xff
    cmp        r3, #0
    str        r3, [sp, #4]
    bne        .L_0200c9c8
    cmp        sb, #0
    ble        .L_0200c9a8
    ldr        r6, .L_0200cb6c
    mov        r4, r3
.L_0200c98c:
    add        r1, r4, #0xf
    ldrb       r0, [r1, sp]
    add        r4, r4, #1
    ldr        r1, [r6]
    bl         write_bounded_stream_byte
    cmp        sb, r4
    bne        .L_0200c98c
.L_0200c9a8:
    ldr        r1, .L_0200cb70
    mov        r3, #0
    ldr        r2, [r1]
    strb       r3, [sp, #0xf]
    add        r2, r2, sb
    mov        sb, #1
    str        r2, [r1]
    str        sb, [sp, #4]
.L_0200c9c8:
    ldr        r2, .L_0200cb68
    ldr        r8, [r2]
    cmp        r8, #0
    movle      r6, #0
    movle      r2, r6
    ble        .L_0200ca54
    mov        r6, #0
    b          .L_0200ca34
.L_0200c9e8:
    bl         remove_lzss_match_tree_node
    cmp        r5, #0x10
    add        r3, r7, #1
    lsl        r7, r3, #0x14
    ldrle      r3, .L_0200cb50
    and        r2, r4, #0xff
    addle      r3, r5, r3
    addle      r3, r3, #0x1000
    lsr        r7, r7, #0x14
    strb       r2, [fp, r5]
    add        r1, r5, #1
    strble     r2, [r3]
    add        r6, r6, #1
    mov        r0, r7
    lsl        r5, r1, #0x14
    bl         insert_lzss_match_tree_node
    cmp        r8, r6
    lsr        r5, r5, #0x14
    beq        .L_0200cb30
.L_0200ca34:
    ldr        r3, .L_0200cb54
    ldr        r0, [r3]
    bl         read_bounded_stream_byte
    mov        r4, r0
    cmn        r4, #1
    mov        r0, r5
    bne        .L_0200c9e8
    mov        r2, r6
.L_0200ca54:
    ldr        lr, .L_0200cb58
    mov        r4, r6
    ldr        r3, [lr]
    add        r3, r2, r3
    str        r3, [lr]
    b          .L_0200ca78
.L_0200ca6c:
    add        r3, r5, #1
    lsl        r5, r3, #0x14
    lsr        r5, r5, #0x14
.L_0200ca78:
    cmp        r8, r4
    mov        r0, r5
    add        r4, r4, #1
    ble        .L_0200caac
    bl         remove_lzss_match_tree_node
    add        r3, r7, #1
    lsl        r7, r3, #0x14
    lsr        r7, r7, #0x14
    subs       sl, sl, #1
    mov        r0, r7
    beq        .L_0200ca6c
    bl         insert_lzss_match_tree_node
    b          .L_0200ca6c
.L_0200caac:
    cmp        sl, #0
    bgt        .L_0200c918
    cmp        sb, #1
    ble        .L_0200caf0
    ldr        r6, .L_0200cb6c
    mov        r4, #0
    add        r5, sp, #0xf
.L_0200cac8:
    ldrb       r0, [r4, r5]
    ldr        r1, [r6]
    add        r4, r4, #1
    bl         write_bounded_stream_byte
    cmp        r4, sb
    bne        .L_0200cac8
    ldr        r2, .L_0200cb70
    ldr        r3, [r2]
    add        r3, r3, sb
    str        r3, [r2]
.L_0200caf0:
    add        sp, sp, #0x24
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_0200caf8:
    ldr        r3, .L_0200cb74
    sub        r1, lr, #3
    ldr        r0, [r3]
    add        ip, sb, #1
    asr        r3, r0, #4
    add        lr, sp, #0x20
    bic        r3, r3, #0xf
    orr        r3, r3, r1
    add        r2, lr, sb
    add        r1, lr, ip
    add        sb, ip, #1
    strb       r0, [r2, #-0x11]
    strb       r3, [r1, #-0x11]
    b          .L_0200c964
.L_0200cb30:
    mov        r2, r8
    b          .L_0200ca54
.L_0200cb38:
    ldr        r2, .L_0200cb58
    cmp        sl, #0
    str        sl, [r2]
    beq        .L_0200caf0
    ldr        r4, .L_0200cb5c
    b          .L_0200c8e0
.L_0200cb50:
    .word lzss_ring_buffer
.L_0200cb54:
    .word 0x023ddebc
.L_0200cb58:
    .word 0x020b4c40
.L_0200cb5c:
    .word 0x00000fed
.L_0200cb60:
    .word 0x00000fdb
.L_0200cb64:
    .word 0x00000fee
.L_0200cb68:
    .word 0x023eb310
.L_0200cb6c:
    .word 0x023eb2f8
.L_0200cb70:
    .word 0x020b4c44
.L_0200cb74:
    .word 0x023eb30c
