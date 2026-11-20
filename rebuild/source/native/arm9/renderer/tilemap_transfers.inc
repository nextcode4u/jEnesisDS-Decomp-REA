/* Tilemap transfers. Release range 0x02007b4c–0x020083ec. */


/* 0x02007b4c */
.global transfer_vdp_words_to_background_0_tilemap_linear
transfer_vdp_words_to_background_0_tilemap_linear:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        ip, .L_02007bfc
    sub        sp, sp, #4
    ldr        sb, [ip]
    mov        r7, r0
    mov        r6, r1
    mov        sl, r2
    mov        r8, r3
    mvn        fp, #0xfc00
    b          .L_02007b80
.L_02007b74:
    add        r6, r6, sl
    cmp        r6, r8
    bhs        .L_02007bf4
.L_02007b80:
    lsl        r3, r6, #0xf
    lsr        r5, r3, #0x10
    ldrb       r2, [sb, r5]
    ldrh       r4, [r7], #2
    mov        r1, #0
    lsl        r0, r4, #0x15
    cmp        r2, r1
    lsr        r0, r0, #0x15
    beq        .L_02007b74
    bl         map_genesis_pattern_to_ds_tile
    and        r3, r4, #0x7800
    orr        r0, r0, r3, lsr #1
    tst        r4, #0x8000
    lsl        r0, r0, #0x10
    lsl        r3, r5, #1
    eor        r0, r0, #0x4000000
    ldrne      r3, .L_02007c00
    lsl        r2, r5, #1
    lsr        r0, r0, #0x10
    moveq      r2, #0x6000000
    strhne     r0, [r2, r3]
    strheq     r0, [r3, r2]
    subne      r3, r3, #0x4000
    addeq      r2, r2, #0x4000
    add        r6, r6, sl
    strhne     fp, [r2, r3]
    strheq     fp, [r3, r2]
    cmp        r6, r8
    blo        .L_02007b80
.L_02007bf4:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02007bfc:
    .word plane_a_word_change_flags
.L_02007c00:
    .word 0x06004000

/* 0x02007c04 */
.global transfer_vdp_words_to_background_0_tilemap_64_columns
transfer_vdp_words_to_background_0_tilemap_64_columns:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        ip, .L_02007cd8
    sub        sp, sp, #4
    ldr        fp, [ip]
    mov        r8, r0
    mov        r6, r1
    mov        sb, r2
    mov        sl, r3
    b          .L_02007c34
.L_02007c28:
    add        r6, r6, sb
    cmp        r6, sl
    bhs        .L_02007cd0
.L_02007c34:
    lsr        r3, r6, #1
    lsl        r7, r3, #0x10
    lsr        r5, r7, #0x10
    ldrb       r3, [fp, r5]
    ldrh       r4, [r8], #2
    mov        r1, #0
    lsl        r0, r4, #0x15
    cmp        r3, r1
    lsr        r0, r0, #0x15
    beq        .L_02007c28
    bl         map_genesis_pattern_to_ds_tile
    and        r3, r4, #0x7800
    orr        r0, r0, r3, lsr #1
    and        r1, r5, #0x3f
    lsr        r3, r7, #0x16
    cmp        r1, #0x1f
    add        r1, r1, r3, lsl #5
    add        r2, r1, #0x3e0
    lsl        r2, r2, #0x10
    lsrhi      r1, r2, #0x10
    lsl        r0, r0, #0x10
    tst        r4, #0x8000
    lsl        r3, r1, #1
    eor        r0, r0, #0x4000000
    lsl        r1, r1, #1
    ldrne      r1, .L_02007cdc
    moveq      r2, #0x6000000
    lsr        r0, r0, #0x10
    strhne     r0, [r3, r1]
    strheq     r0, [r1, r2]
    ldrne      r1, .L_02007ce0
    ldreq      r2, .L_02007ce0
    ldreq      r3, .L_02007cdc
    movne      r2, #0x6000000
    add        r6, r6, sb
    strhne     r1, [r3, r2]
    strheq     r2, [r1, r3]
    cmp        r6, sl
    blo        .L_02007c34
.L_02007cd0:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02007cd8:
    .word plane_a_word_change_flags
.L_02007cdc:
    .word 0x06004000
.L_02007ce0:
    .word 0x000003ff

/* 0x02007ce4 */
.global transfer_vdp_words_to_background_0_tilemap_64_columns_with_vertical_blocks
transfer_vdp_words_to_background_0_tilemap_64_columns_with_vertical_blocks:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        ip, .L_02007dd0
    sub        sp, sp, #4
    ldr        fp, [ip]
    mov        r8, r0
    mov        r5, r1
    mov        sb, r2
    mov        sl, r3
    b          .L_02007d14
.L_02007d08:
    add        r5, r5, sb
    cmp        r5, sl
    bhs        .L_02007dac
.L_02007d14:
    lsr        r3, r5, #1
    lsl        r7, r3, #0x10
    lsr        r4, r7, #0x10
    ldrb       r3, [fp, r4]
    ldrh       r6, [r8], #2
    cmp        r3, #0
    beq        .L_02007d08
    lsl        r0, r6, #0x15
    mov        r1, #0
    lsr        r0, r0, #0x15
    bl         map_genesis_pattern_to_ds_tile
    and        r2, r4, #0x3f
    lsr        r1, r7, #0x16
    and        r3, r6, #0x7800
    cmp        r2, #0x1f
    add        r2, r2, r1, lsl #5
    orr        r0, r0, r3, lsr #1
    addhi      r3, r2, #0x3e0
    lslhi      r3, r3, #0x10
    lsrhi      r2, r3, #0x10
    cmp        r1, #0x1f
    addhi      r3, r2, #0x400
    lslhi      r3, r3, #0x10
    lsl        r0, r0, #0x10
    eor        r0, r0, #0x4000000
    lsrhi      r2, r3, #0x10
    tst        r6, #0x8000
    lsr        r0, r0, #0x10
    bne        .L_02007db4
    lsl        r3, r2, #1
    mov        r2, #0x6000000
    strh       r0, [r3, r2]
    ldr        r1, .L_02007dd4
    ldr        r2, .L_02007dd8
    add        r5, r5, sb
    cmp        r5, sl
    strh       r2, [r3, r1]
    blo        .L_02007d14
.L_02007dac:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02007db4:
    ldr        r1, .L_02007dd4
    lsl        r3, r2, #1
    strh       r0, [r3, r1]
    ldr        r1, .L_02007dd8
    mov        r2, #0x6000000
    strh       r1, [r3, r2]
    b          .L_02007d08
.L_02007dd0:
    .word plane_a_word_change_flags
.L_02007dd4:
    .word 0x06004000
.L_02007dd8:
    .word 0x000003ff

/* 0x02007ddc */
.global transfer_vdp_words_to_background_0_tilemap_128_columns
transfer_vdp_words_to_background_0_tilemap_128_columns:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        ip, .L_02007ed0
    sub        sp, sp, #4
    ldr        sl, [ip]
    mov        r8, r0
    mov        r5, r1
    mov        fp, r2
    mov        sb, r3
    b          .L_02007e0c
.L_02007e00:
    add        r5, r5, fp
    cmp        r5, sb
    bhs        .L_02007eac
.L_02007e0c:
    lsr        r3, r5, #1
    lsl        r7, r3, #0x10
    lsr        r4, r7, #0x10
    ldrb       r3, [sl, r4]
    ldrh       r6, [r8], #2
    cmp        r3, #0
    beq        .L_02007e00
    mov        r1, #0
    lsl        r0, r6, #0x15
    strb       r1, [sl, r4]
    lsr        r0, r0, #0x15
    mov        r1, #0
    bl         map_genesis_pattern_to_ds_tile
    and        r3, r6, #0x7800
    and        r1, r4, #0x7f
    orr        r0, r0, r3, lsr #1
    lsr        r3, r7, #0x17
    add        r2, r1, r3, lsl #5
    cmp        r1, #0x1f
    addhi      r3, r2, #0x3e0
    lslhi      r3, r3, #0x10
    lsrhi      r2, r3, #0x10
    cmp        r1, #0x3f
    addhi      r3, r2, #0x400
    lslhi      r3, r3, #0x10
    lsl        r0, r0, #0x10
    eor        r0, r0, #0x4000000
    lsrhi      r2, r3, #0x10
    tst        r6, #0x8000
    lsr        r0, r0, #0x10
    bne        .L_02007eb4
    lsl        r2, r2, #1
    mov        r1, #0x6000000
    add        r5, r5, fp
    strh       r0, [r2, r1]
    mvn        r3, #0xfc00
    add        r1, r1, #0x4000
    cmp        r5, sb
    strh       r3, [r2, r1]
    blo        .L_02007e0c
.L_02007eac:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02007eb4:
    lsl        r2, r2, #1
    mvn        r3, #0xfc00
    mov        r1, #0x6000000
    strh       r3, [r2, r1]
    ldr        r3, .L_02007ed4
    strh       r0, [r2, r3]
    b          .L_02007e00
.L_02007ed0:
    .word plane_a_word_change_flags
.L_02007ed4:
    .word 0x06004000

/* 0x02007ed8 */
.global transfer_vdp_words_to_background_1_tilemap_linear
transfer_vdp_words_to_background_1_tilemap_linear:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        ip, .L_02007f88
    sub        sp, sp, #4
    ldr        sb, [ip, #4]
    mov        r7, r0
    mov        r6, r1
    mov        sl, r2
    mov        r8, r3
    mvn        fp, #0xfc00
    b          .L_02007f0c
.L_02007f00:
    add        r6, r6, sl
    cmp        r6, r8
    bhs        .L_02007f80
.L_02007f0c:
    lsl        r3, r6, #0xf
    lsr        r5, r3, #0x10
    ldrb       r2, [sb, r5]
    ldrh       r4, [r7], #2
    cmp        r2, #0
    lsl        r0, r4, #0x15
    mov        r1, #1
    lsr        r0, r0, #0x15
    beq        .L_02007f00
    bl         map_genesis_pattern_to_ds_tile
    and        r3, r4, #0x7800
    orr        r0, r0, r3, lsr #1
    tst        r4, #0x8000
    lsl        r0, r0, #0x10
    lsl        r2, r5, #1
    lsl        r3, r5, #1
    ldreq      r2, .L_02007f8c
    ldrne      r3, .L_02007f90
    eor        r0, r0, #0x4000000
    lsr        r0, r0, #0x10
    strhne     r0, [r2, r3]
    strheq     r0, [r3, r2]
    subne      r3, r3, #0x4000
    addeq      r2, r2, #0x4000
    add        r6, r6, sl
    strhne     fp, [r2, r3]
    strheq     fp, [r3, r2]
    cmp        r6, r8
    blo        .L_02007f0c
.L_02007f80:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02007f88:
    .word plane_a_word_change_flags
.L_02007f8c:
    .word 0x06002000
.L_02007f90:
    .word 0x06006000

/* 0x02007f94 */
.global transfer_vdp_words_to_background_1_tilemap_64_columns
transfer_vdp_words_to_background_1_tilemap_64_columns:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        ip, .L_02008068
    sub        sp, sp, #4
    ldr        fp, [ip, #4]
    mov        r8, r0
    mov        r6, r1
    mov        sb, r2
    mov        sl, r3
    b          .L_02007fc4
.L_02007fb8:
    add        r6, r6, sb
    cmp        r6, sl
    bhs        .L_02008060
.L_02007fc4:
    mov        r1, #1
    lsr        r3, r6, r1
    lsl        r7, r3, #0x10
    lsr        r5, r7, #0x10
    ldrb       r3, [fp, r5]
    ldrh       r4, [r8], #2
    cmp        r3, #0
    lsl        r0, r4, #0x15
    lsr        r0, r0, #0x15
    beq        .L_02007fb8
    bl         map_genesis_pattern_to_ds_tile
    and        r3, r4, #0x7800
    orr        r0, r0, r3, lsr #1
    and        r1, r5, #0x3f
    lsr        r3, r7, #0x16
    cmp        r1, #0x1f
    add        r1, r1, r3, lsl #5
    add        r2, r1, #0x3e0
    lsl        r2, r2, #0x10
    lsrhi      r1, r2, #0x10
    lsl        r0, r0, #0x10
    tst        r4, #0x8000
    lsl        r3, r1, #1
    ldreq      r2, .L_0200806c
    lsl        r1, r1, #1
    eor        r0, r0, #0x4000000
    ldrne      r1, .L_02008070
    lsr        r0, r0, #0x10
    strhne     r0, [r3, r1]
    strheq     r0, [r1, r2]
    ldrne      r1, .L_02008074
    ldrne      r2, .L_0200806c
    ldreq      r2, .L_02008074
    ldreq      r3, .L_02008070
    add        r6, r6, sb
    strhne     r1, [r3, r2]
    strheq     r2, [r1, r3]
    cmp        r6, sl
    blo        .L_02007fc4
.L_02008060:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02008068:
    .word plane_a_word_change_flags
.L_0200806c:
    .word 0x06002000
.L_02008070:
    .word 0x06006000
.L_02008074:
    .word 0x000003ff

/* 0x02008078 */
.global transfer_vdp_words_to_background_1_tilemap_64_columns_with_vertical_blocks
transfer_vdp_words_to_background_1_tilemap_64_columns_with_vertical_blocks:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        ip, .L_02008164
    sub        sp, sp, #4
    ldr        fp, [ip, #4]
    mov        r8, r0
    mov        r5, r1
    mov        sb, r2
    mov        sl, r3
    b          .L_020080a8
.L_0200809c:
    add        r5, r5, sb
    cmp        r5, sl
    bhs        .L_02008140
.L_020080a8:
    lsr        r3, r5, #1
    lsl        r7, r3, #0x10
    lsr        r4, r7, #0x10
    ldrb       r3, [fp, r4]
    ldrh       r6, [r8], #2
    cmp        r3, #0
    beq        .L_0200809c
    lsl        r0, r6, #0x15
    mov        r1, #1
    lsr        r0, r0, #0x15
    bl         map_genesis_pattern_to_ds_tile
    and        r2, r4, #0x3f
    lsr        r1, r7, #0x16
    and        r3, r6, #0x7800
    cmp        r2, #0x1f
    add        r2, r2, r1, lsl #5
    orr        r0, r0, r3, lsr #1
    addhi      r3, r2, #0x3e0
    lslhi      r3, r3, #0x10
    lsrhi      r2, r3, #0x10
    cmp        r1, #0x1f
    addhi      r3, r2, #0x400
    lslhi      r3, r3, #0x10
    lsl        r0, r0, #0x10
    eor        r0, r0, #0x4000000
    lsrhi      r2, r3, #0x10
    tst        r6, #0x8000
    lsr        r0, r0, #0x10
    bne        .L_02008148
    lsl        r3, r2, #1
    ldr        r2, .L_02008168
    ldr        r1, .L_0200816c
    strh       r0, [r3, r2]
    add        r5, r5, sb
    ldr        r2, .L_02008170
    cmp        r5, sl
    strh       r2, [r3, r1]
    blo        .L_020080a8
.L_02008140:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02008148:
    ldr        r1, .L_0200816c
    lsl        r3, r2, #1
    strh       r0, [r3, r1]
    ldr        r2, .L_02008168
    ldr        r1, .L_02008170
    strh       r1, [r3, r2]
    b          .L_0200809c
.L_02008164:
    .word plane_a_word_change_flags
.L_02008168:
    .word 0x06002000
.L_0200816c:
    .word 0x06006000
.L_02008170:
    .word 0x000003ff

/* 0x02008174 */
.global transfer_vdp_words_to_background_1_tilemap_128_columns
transfer_vdp_words_to_background_1_tilemap_128_columns:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        ip, .L_02008260
    sub        sp, sp, #4
    ldr        fp, [ip, #4]
    mov        r8, r0
    mov        r5, r1
    mov        sb, r2
    mov        sl, r3
    b          .L_020081a4
.L_02008198:
    add        r5, r5, sb
    cmp        r5, sl
    bhs        .L_0200823c
.L_020081a4:
    lsr        r3, r5, #1
    lsl        r7, r3, #0x10
    lsr        r4, r7, #0x10
    ldrb       r3, [fp, r4]
    ldrh       r6, [r8], #2
    cmp        r3, #0
    beq        .L_02008198
    lsl        r0, r6, #0x15
    lsr        r0, r0, #0x15
    mov        r1, #1
    bl         map_genesis_pattern_to_ds_tile
    and        r3, r6, #0x7800
    and        r2, r4, #0x7f
    orr        r0, r0, r3, lsr #1
    lsr        r3, r7, #0x17
    add        r3, r2, r3, lsl #5
    cmp        r2, #0x1f
    addhi      r3, r3, #0x3e0
    lslhi      r3, r3, #0x10
    lsrhi      r3, r3, #0x10
    cmp        r2, #0x3f
    addhi      r3, r3, #0x400
    lslhi      r3, r3, #0x10
    lsl        r0, r0, #0x10
    eor        r0, r0, #0x4000000
    lsrhi      r3, r3, #0x10
    tst        r6, #0x8000
    lsr        r0, r0, #0x10
    bne        .L_02008244
    ldr        r2, .L_02008264
    lsl        r3, r3, #1
    strh       r0, [r3, r2]
    ldr        r1, .L_02008268
    ldr        r2, .L_0200826c
    add        r5, r5, sb
    cmp        r5, sl
    strh       r2, [r3, r1]
    blo        .L_020081a4
.L_0200823c:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02008244:
    ldr        r1, .L_02008268
    lsl        r3, r3, #1
    strh       r0, [r3, r1]
    ldr        r2, .L_02008264
    ldr        r1, .L_0200826c
    strh       r1, [r3, r2]
    b          .L_02008198
.L_02008260:
    .word plane_a_word_change_flags
.L_02008264:
    .word 0x06002000
.L_02008268:
    .word 0x06006000
.L_0200826c:
    .word 0x000003ff

/* 0x02008270 */
.global transfer_vdp_words_to_window_tilemap_linear
transfer_vdp_words_to_window_tilemap_linear:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    cmp        r1, #0x1000
    sub        sp, sp, #4
    mov        r8, r1
    mov        sl, r0
    mov        r6, r2
    mov        r7, r3
    ldrls      fp, .L_02008318
    addls      r5, r1, r2
    mvnls      sb, #0xfc00
    bls        .L_020082a8
    b          .L_02008310
.L_020082a0:
    cmp        r3, #0x1000
    bhi        .L_02008310
.L_020082a8:
    ldrh       r4, [sl], #2
    mov        r1, #2
    lsl        r0, r4, #0x15
    lsr        r0, r0, #0x15
    bl         map_genesis_pattern_to_ds_tile
    and        r3, r4, #0x7800
    orr        r0, r0, r3, lsr #1
    lsl        r3, r8, #0xf
    tst        r4, #0x8000
    lsr        r3, r3, #0x10
    lsl        r0, r0, #0x10
    lsl        r2, r3, #1
    eor        r0, r0, #0x4000000
    lsl        r3, r3, #1
    ldreq      r2, .L_0200831c
    ldrne      r3, .L_0200831c
    lsr        r0, r0, #0x10
    strhne     r0, [r2, r3]
    strheq     r0, [r3, fp]
    strhne     sb, [r2, fp]
    strheq     sb, [r3, r2]
    add        r5, r5, r6
    subs       r7, r7, #1
    add        r8, r8, r6
    rsb        r3, r6, r5
    bne        .L_020082a0
.L_02008310:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02008318:
    .word 0x06008000
.L_0200831c:
    .word 0x0600a000

/* 0x02008320 */
.global transfer_vdp_words_to_window_tilemap_64_columns
transfer_vdp_words_to_window_tilemap_64_columns:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    cmp        r1, #0x1000
    sub        sp, sp, #4
    mov        r7, r1
    mov        sl, r0
    mov        r6, r2
    mov        r8, r3
    ldrls      fp, .L_020083e4
    addls      r5, r1, r2
    mvnls      sb, #0xfc00
    bls        .L_02008358
    b          .L_020083dc
.L_02008350:
    cmp        r3, #0x1000
    bhi        .L_020083dc
.L_02008358:
    ldrh       r4, [sl], #2
    mov        r1, #2
    lsl        r0, r4, #0x15
    lsr        r0, r0, #0x15
    bl         map_genesis_pattern_to_ds_tile
    lsr        r2, r7, #1
    and        r1, r2, #0x3f
    lsl        r2, r2, #0x10
    lsr        r2, r2, #0x16
    add        r2, r1, r2, lsl #5
    and        r3, r4, #0x7800
    orr        r0, r0, r3, lsr #1
    add        r3, r2, #0x3e0
    cmp        r1, #0x1f
    lsl        r3, r3, #0x10
    lsrhi      r2, r3, #0x10
    lsl        r0, r0, #0x10
    tst        r4, #0x8000
    lsl        r3, r2, #1
    lsl        r1, r2, #1
    eor        r0, r0, #0x4000000
    ldrne      r2, .L_020083e8
    ldreq      r2, .L_020083e8
    lsr        r0, r0, #0x10
    strheq     r0, [r3, fp]
    strhne     r0, [r1, r2]
    strheq     sb, [r3, r2]
    strhne     sb, [r1, fp]
    add        r5, r5, r6
    subs       r8, r8, #1
    add        r7, r7, r6
    rsb        r3, r6, r5
    bne        .L_02008350
.L_020083dc:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_020083e4:
    .word 0x06008000
.L_020083e8:
    .word 0x0600a000
