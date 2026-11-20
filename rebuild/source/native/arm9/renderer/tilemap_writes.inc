/* Tilemap writes. Release range 0x020077b8–0x02007b4c. */


/* 0x020077b8 */
.global write_linear_background_tilemap_entry
write_linear_background_tilemap_entry:
    push       {r4, r5, r6, lr}
    mov        r6, r0
    lsl        r0, r2, #0x15
    mov        r4, r1
    lsr        r0, r0, #0x15
    mov        r1, r6
    mov        r5, r2
    bl         map_genesis_pattern_to_ds_tile
    ldr        r2, .L_0200782c
    and        r3, r5, #0x7800
    orr        r0, r0, r3, lsr #1
    lsl        r0, r0, #0x10
    add        r3, r2, r6, lsl #3
    lsl        r4, r4, #0xf
    tst        r5, #0x8000
    ldr        ip, [r2, r6, lsl #3]
    lsr        r4, r4, #0x10
    ldr        r2, [r3, #4]
    eor        r0, r0, #0x4000000
    lsl        r1, r4, #1
    lsr        r0, r0, #0x10
    lsl        r4, r4, #1
    mvnne      r3, #0xfc00
    mvneq      r3, #0xfc00
    strhne     r0, [r2, r1]
    strheq     r3, [r2, r4]
    strhne     r3, [ip, r1]
    strheq     r0, [ip, r4]
    pop        {r4, r5, r6, pc}
.L_0200782c:
    .word address_0208e578

/* 0x02007830 */
.global write_background_tilemap_entry_64_columns
write_background_tilemap_entry_64_columns:
    push       {r4, r5, r6, lr}
    mov        r5, r0
    lsl        r0, r2, #0x15
    mov        r4, r1
    lsr        r0, r0, #0x15
    mov        r1, r5
    mov        r6, r2
    bl         map_genesis_pattern_to_ds_tile
    lsr        r2, r4, #1
    and        r2, r2, #0x3f
    lsr        r4, r4, #7
    add        r4, r2, r4, lsl #5
    and        r3, r6, #0x7800
    lsl        r4, r4, #0x10
    lsr        r4, r4, #0x10
    orr        r0, r0, r3, lsr #1
    ldr        r1, .L_020078c4
    add        r3, r4, #0x3e0
    lsl        r0, r0, #0x10
    lsl        r3, r3, #0x10
    cmp        r2, #0x1f
    eor        r0, r0, #0x4000000
    add        r2, r1, r5, lsl #3
    lsrhi      r4, r3, #0x10
    lsr        lr, r0, #0x10
    tst        r6, #0x8000
    ldr        r0, [r1, r5, lsl #3]
    ldr        r2, [r2, #4]
    lsl        ip, r4, #1
    mvnne      r3, #0xfc00
    lsl        r4, r4, #1
    mvneq      r3, #0xfc00
    strhne     lr, [r2, ip]
    strheq     r3, [r2, r4]
    strhne     r3, [r0, ip]
    strheq     lr, [r0, r4]
    pop        {r4, r5, r6, pc}
.L_020078c4:
    .word address_0208e578

/* 0x020078c8 */
.global write_background_tilemap_entry_64_columns_with_vertical_blocks
write_background_tilemap_entry_64_columns_with_vertical_blocks:
    push       {r4, r5, r6, r7, lr}
    mov        r5, r0
    lsl        r0, r2, #0x15
    mov        r4, r1
    sub        sp, sp, #4
    mov        r1, r5
    lsr        r0, r0, #0x15
    mov        r6, r2
    bl         map_genesis_pattern_to_ds_tile
    lsl        r2, r4, #9
    lsr        r4, r4, #1
    and        r4, r4, #0x3f
    lsr        ip, r2, #0x10
    add        r2, r4, ip, lsl #5
    lsl        r2, r2, #0x10
    lsr        r2, r2, #0x10
    and        r3, r6, #0x7800
    orr        r0, r0, r3, lsr #1
    add        r3, r2, #0x3e0
    cmp        r4, #0x1f
    lsl        r3, r3, #0x10
    lsrhi      r2, r3, #0x10
    ldr        r7, .L_02007978
    add        r3, r2, #0x400
    lsl        r0, r0, #0x10
    lsl        r3, r3, #0x10
    cmp        ip, #0x1f
    eor        r0, r0, #0x4000000
    add        r1, r7, r5, lsl #3
    lsrhi      r2, r3, #0x10
    lsr        r4, r0, #0x10
    tst        r6, #0x8000
    ldr        r0, [r7, r5, lsl #3]
    ldr        ip, [r1, #4]
    lsl        lr, r2, #1
    mvnne      r3, #0xfc00
    lsl        r2, r2, #1
    mvneq      r3, #0xfc00
    strhne     r4, [ip, lr]
    strheq     r3, [ip, r2]
    strhne     r3, [r0, lr]
    strheq     r4, [r0, r2]
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, pc}
.L_02007978:
    .word address_0208e578

/* 0x0200797c */
.global write_background_tilemap_entry_128_columns
write_background_tilemap_entry_128_columns:
    push       {r4, r5, r6, r7, lr}
    mov        r5, r0
    lsl        r0, r2, #0x15
    mov        r4, r1
    sub        sp, sp, #4
    mov        r1, r5
    lsr        r0, r0, #0x15
    mov        r6, r2
    bl         map_genesis_pattern_to_ds_tile
    lsr        r2, r4, #1
    and        r2, r2, #0x7f
    lsr        r4, r4, #8
    add        r4, r2, r4, lsl #5
    lsl        r4, r4, #0x10
    lsr        r4, r4, #0x10
    and        r3, r6, #0x7800
    orr        r0, r0, r3, lsr #1
    add        r3, r4, #0x3e0
    cmp        r2, #0x1f
    lsl        r3, r3, #0x10
    lsrhi      r4, r3, #0x10
    ldr        r7, .L_02007a28
    add        r3, r4, #0x400
    lsl        r0, r0, #0x10
    lsl        r3, r3, #0x10
    cmp        r2, #0x3f
    eor        r0, r0, #0x4000000
    add        r1, r7, r5, lsl #3
    lsrhi      r4, r3, #0x10
    lsr        lr, r0, #0x10
    tst        r6, #0x8000
    ldr        r0, [r7, r5, lsl #3]
    ldr        r2, [r1, #4]
    lsl        ip, r4, #1
    mvnne      r3, #0xfc00
    lsl        r4, r4, #1
    mvneq      r3, #0xfc00
    strhne     lr, [r2, ip]
    strheq     r3, [r2, r4]
    strhne     r3, [r0, ip]
    strheq     lr, [r0, r4]
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, pc}
.L_02007a28:
    .word address_0208e578

/* 0x02007a2c */
.global write_linear_window_tilemap_entry
write_linear_window_tilemap_entry:
    push       {r4, r5, lr}
    mov        r4, r0
    lsl        r0, r1, #0x15
    mov        r5, r1
    sub        sp, sp, #4
    mov        r1, #2
    lsr        r0, r0, #0x15
    bl         map_genesis_pattern_to_ds_tile
    and        r3, r5, #0x7800
    orr        r0, r0, r3, lsr #1
    tst        r5, #0x8000
    lsl        r0, r0, #0x10
    lsl        r4, r4, #0xf
    ldreq      r3, .L_02007aa4
    lsr        r4, r4, #0x10
    eor        r0, r0, #0x4000000
    lsl        ip, r4, #1
    lsr        r0, r0, #0x10
    lsl        r4, r4, #1
    ldrne      r2, .L_02007aa4
    ldrne      r1, .L_02007aa8
    strheq     r0, [r4, r3]
    mvnne      r3, #0xfc00
    mvneq      r2, #0xfc00
    addeq      r3, r3, #0x2000
    strhne     r3, [ip, r2]
    strheq     r2, [r4, r3]
    strhne     r0, [ip, r1]
    add        sp, sp, #4
    pop        {r4, r5, pc}
.L_02007aa4:
    .word 0x06008000
.L_02007aa8:
    .word 0x0600a000

/* 0x02007aac */
.global write_window_tilemap_entry_64_columns
write_window_tilemap_entry_64_columns:
    push       {r4, r5, lr}
    mov        r4, r0
    lsl        r0, r1, #0x15
    mov        r5, r1
    sub        sp, sp, #4
    mov        r1, #2
    lsr        r0, r0, #0x15
    bl         map_genesis_pattern_to_ds_tile
    lsr        r2, r4, #1
    and        r2, r2, #0x3f
    lsr        r4, r4, #7
    add        r4, r2, r4, lsl #5
    lsl        r4, r4, #0x10
    lsr        r4, r4, #0x10
    and        r3, r5, #0x7800
    orr        r0, r0, r3, lsr #1
    add        r3, r4, #0x3e0
    lsl        r3, r3, #0x10
    cmp        r2, #0x1f
    lsrhi      r4, r3, #0x10
    lsl        r0, r0, #0x10
    tst        r5, #0x8000
    ldreq      r3, .L_02007b44
    eor        r0, r0, #0x4000000
    lsl        ip, r4, #1
    lsr        r0, r0, #0x10
    lsl        r4, r4, #1
    ldrne      r2, .L_02007b44
    ldrne      r1, .L_02007b48
    strheq     r0, [r4, r3]
    mvnne      r3, #0xfc00
    mvneq      r2, #0xfc00
    addeq      r3, r3, #0x2000
    strhne     r3, [ip, r2]
    strheq     r2, [r4, r3]
    strhne     r0, [ip, r1]
    add        sp, sp, #4
    pop        {r4, r5, pc}
.L_02007b44:
    .word 0x06008000
.L_02007b48:
    .word 0x0600a000
