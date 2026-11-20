/* Tile and sprite rendering. Release range 0x02006f2c–0x020074b8. */


/* 0x02006f2c */
.global select_background_tilemap_layout
select_background_tilemap_layout:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r8, .L_02007220
    mov        r7, r0
    ldr        r3, [r8]
    cmp        r3, r0
    popeq      {r4, r5, r6, r7, r8, pc}
    ldr        r6, .L_02007224
    mov        r3, #0
    str        r3, [r6]
    cmp        r0, #0x31
    ldrls      pc, [pc, r0, lsl #2]
    b          .L_020071a4
    .word .L_02007150
    .word .L_02007024
    .word .L_020071a4
    .word .L_02007024
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071cc
    .word .L_020070ec
    .word .L_020071a4
    .word .L_020070ec
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_020071a4
    .word .L_02007088
    .word .L_02007088
.L_02007024:
    ldr        lr, .L_02007228
    ldr        r3, .L_0200722c
    ldr        r2, .L_02007230
    str        r3, [lr, #4]
    ldr        r3, .L_02007234
    ldr        r1, .L_02007238
    str        r2, [r3]
    ldr        r3, .L_0200723c
    ldr        r2, .L_02007240
    mov        ip, #0x4000000
    str        r1, [r3]
    ldr        r0, .L_02007244
    ldr        r3, .L_02007248
    strh       r2, [ip, #8]
    ldr        r2, .L_0200724c
    str        r0, [r3]
    ldr        r3, .L_02007250
    strh       r2, [ip, #0xa]
    ldr        r2, .L_02007254
    str        r3, [lr]
    sub        r3, r3, #0x10000
    strh       r3, [ip, #0xc]
    strh       r2, [ip, #0xe]
.L_02007080:
    str        r7, [r8]
    pop        {r4, r5, r6, r7, r8, pc}
.L_02007088:
    ldr        r2, .L_02007258
    ldr        r3, .L_02007234
    ldr        r1, .L_0200725c
    str        r2, [r3]
    ldr        r3, .L_0200723c
    ldr        r0, .L_02007260
    str        r1, [r3]
    ldr        r3, .L_02007248
    ldr        r4, .L_02007264
    str        r0, [r3]
    ldr        r3, .L_02007268
    mov        ip, #0x4000000
    strh       r4, [ip, #8]
    ldr        r5, .L_0200726c
    strh       r3, [ip, #0xa]
    ldr        lr, .L_02007228
    ldr        r3, .L_02007270
    mov        r2, #1
    strh       r5, [ip, #0xc]
    str        r4, [lr, #4]
    str        r2, [r6]
    str        r5, [lr]
    strh       r3, [ip, #0xe]
    str        r7, [r8]
    pop        {r4, r5, r6, r7, r8, pc}
.L_020070ec:
    ldr        lr, .L_02007228
    ldr        r3, .L_02007274
    ldr        r2, .L_02007278
    str        r3, [lr, #4]
    ldr        r3, .L_02007234
    ldr        r1, .L_0200727c
    str        r2, [r3]
    ldr        r3, .L_0200723c
    ldr        r2, .L_02007280
    mov        ip, #0x4000000
    str        r1, [r3]
    ldr        r0, .L_02007284
    ldr        r3, .L_02007248
    strh       r2, [ip, #8]
    ldr        r2, .L_02007288
    str        r0, [r3]
    ldr        r3, .L_0200728c
    strh       r2, [ip, #0xa]
    ldr        r2, .L_02007290
    str        r3, [lr]
    sub        r3, r3, #0x10000
    strh       r3, [ip, #0xc]
    str        r7, [r8]
    strh       r2, [ip, #0xe]
    pop        {r4, r5, r6, r7, r8, pc}
.L_02007150:
    ldr        r2, .L_02007230
    ldr        r3, .L_02007234
    ldr        r1, .L_02007238
    str        r2, [r3]
    ldr        r3, .L_0200723c
    ldr        r2, .L_02007244
    str        r1, [r3]
    ldr        r3, .L_02007248
    mov        r0, #0x4000000
    str        r2, [r3]
    ldr        r3, .L_02007294
    mov        ip, #0x820
    strh       ip, [r0, #8]
    ldr        lr, .L_02007228
    strh       r3, [r0, #0xa]
    ldr        r3, .L_02007298
    mov        r4, #0x22
    strh       r4, [r0, #0xc]
    stm        lr, {r4, ip}
    strh       r3, [r0, #0xe]
    b          .L_02007080
.L_020071a4:
    ldr        r2, .L_02007230
    ldr        r3, .L_02007234
    ldr        r1, .L_02007238
    str        r2, [r3]
    ldr        r3, .L_0200723c
    ldr        r2, .L_02007244
    str        r1, [r3]
    ldr        r3, .L_02007248
    str        r2, [r3]
    b          .L_02007080
.L_020071cc:
    ldr        r2, .L_0200729c
    ldr        r3, .L_02007234
    ldr        r1, .L_020072a0
    str        r2, [r3]
    ldr        r3, .L_0200723c
    ldr        r2, .L_020072a4
    str        r1, [r3]
    ldr        r3, .L_02007248
    ldr        lr, .L_02007264
    str        r2, [r3]
    ldr        r3, .L_02007268
    mov        r0, #0x4000000
    strh       lr, [r0, #8]
    ldr        r4, .L_0200726c
    strh       r3, [r0, #0xa]
    ldr        ip, .L_02007228
    ldr        r3, .L_02007270
    strh       r4, [r0, #0xc]
    stm        ip, {r4, lr}
    strh       r3, [r0, #0xe]
    b          .L_02007080
.L_02007220:
    .word address_0208f350
.L_02007224:
    .word 0x020993c4
.L_02007228:
    .word 0x023dc6a4
.L_0200722c:
    .word 0x00008820
.L_02007230:
    .word write_linear_background_tilemap_entry
.L_02007234:
    .word write_ds_background_tilemap_word
.L_02007238:
    .word transfer_vdp_words_to_background_0_tilemap_linear
.L_0200723c:
    .word transfer_vdp_words_to_ds_background_0
.L_02007240:
    .word 0xffff8820
.L_02007244:
    .word transfer_vdp_words_to_background_1_tilemap_linear
.L_02007248:
    .word transfer_vdp_words_to_ds_background_1
.L_0200724c:
    .word 0xffff8c29
.L_02007250:
    .word 0x00008022
.L_02007254:
    .word 0xffff842b
.L_02007258:
    .word write_background_tilemap_entry_128_columns
.L_0200725c:
    .word transfer_vdp_words_to_background_0_tilemap_128_columns
.L_02007260:
    .word transfer_vdp_words_to_background_1_tilemap_128_columns
.L_02007264:
    .word 0x00004820
.L_02007268:
    .word 0x00004c29
.L_0200726c:
    .word 0x00004022
.L_02007270:
    .word 0x0000442b
.L_02007274:
    .word 0x0000c820
.L_02007278:
    .word write_background_tilemap_entry_64_columns_with_vertical_blocks
.L_0200727c:
    .word transfer_vdp_words_to_background_0_tilemap_64_columns_with_vertical_blocks
.L_02007280:
    .word 0xffffc820
.L_02007284:
    .word transfer_vdp_words_to_background_1_tilemap_64_columns_with_vertical_blocks
.L_02007288:
    .word 0xffffcc29
.L_0200728c:
    .word 0x0000c022
.L_02007290:
    .word 0xffffc42b
.L_02007294:
    .word 0x00000c29
.L_02007298:
    .word 0x0000042b
.L_0200729c:
    .word write_background_tilemap_entry_64_columns
.L_020072a0:
    .word transfer_vdp_words_to_background_0_tilemap_64_columns
.L_020072a4:
    .word transfer_vdp_words_to_background_1_tilemap_64_columns

/* 0x020072a8 */
.global select_window_tilemap_layout
select_window_tilemap_layout:
    push       {r4, lr}
    ldr        lr, .L_02007328
    ldr        r3, [lr]
    cmp        r3, r0
    beq        .L_020072f0
    cmp        r0, #0
    ldr        r4, .L_0200732c
    bne        .L_020072f8
    ldr        r3, .L_02007330
    ldr        r2, .L_02007334
    str        r3, [r4, #4]
    ldr        r3, .L_02007338
    ldr        r1, .L_0200733c
    str        r2, [r3]
    ldr        r3, .L_02007340
    ldr        r2, .L_02007344
    str        r1, [r3]
    str        r2, [r4]
.L_020072f0:
    str        r0, [lr]
    pop        {r4, pc}
.L_020072f8:
    ldr        r3, .L_02007348
    ldr        r2, .L_0200734c
    str        r3, [r4, #4]
    ldr        r3, .L_02007338
    ldr        r1, .L_02007350
    str        r2, [r3]
    ldr        r3, .L_02007340
    ldr        r2, .L_02007354
    str        r1, [r3]
    str        r2, [r4]
    str        r0, [lr]
    pop        {r4, pc}
.L_02007328:
    .word address_0208f34c
.L_0200732c:
    .word 0x023dc5ac
.L_02007330:
    .word 0x00001430
.L_02007334:
    .word write_linear_window_tilemap_entry
.L_02007338:
    .word write_ds_window_tilemap_word
.L_0200733c:
    .word transfer_vdp_words_to_window_tilemap_linear
.L_02007340:
    .word transfer_vdp_words_to_ds_window
.L_02007344:
    .word 0x00001032
.L_02007348:
    .word 0x00005430
.L_0200734c:
    .word write_window_tilemap_entry_64_columns
.L_02007350:
    .word transfer_vdp_words_to_window_tilemap_64_columns
.L_02007354:
    .word 0x00005032

/* 0x02007358 */
.global adjust_horizontal_viewport_offset
adjust_horizontal_viewport_offset:
    ldr        r2, .L_0200739c
    ldr        r1, [r2]
    add        r3, r1, r0
    cmn        r3, #0x20
    str        r3, [r2]
    mvnlt      r3, #0x1f
    strlt      r3, [r2]
    blt        .L_02007384
    cmp        r3, #0x20
    movgt      r3, #0x20
    strgt      r3, [r2]
.L_02007384:
    ldr        r3, [r2]
    ldr        r2, .L_020073a0
    subs       r3, r1, r3
    movne      r3, #1
    str        r3, [r2]
    bx         lr
.L_0200739c:
    .word requested_viewport_offset_x
.L_020073a0:
    .word viewport_update_pending

/* 0x020073a4 */
.global adjust_vertical_viewport_offset
adjust_vertical_viewport_offset:
    ldr        r2, .L_020073e8
    ldr        r1, [r2]
    add        r3, r1, r0
    cmn        r3, #0x18
    str        r3, [r2]
    mvnlt      r3, #0x17
    strlt      r3, [r2]
    blt        .L_020073d0
    cmp        r3, #0x18
    movgt      r3, #0x18
    strgt      r3, [r2]
.L_020073d0:
    ldr        r3, [r2]
    ldr        r2, .L_020073ec
    subs       r3, r1, r3
    movne      r3, #1
    str        r3, [r2]
    bx         lr
.L_020073e8:
    .word requested_viewport_offset_y
.L_020073ec:
    .word viewport_update_pending

/* 0x020073f0 */
.global center_viewport
center_viewport:
    ldr        r3, .L_02007414
    mov        r1, #1
    str        r1, [r3]
    ldr        r2, .L_02007418
    ldr        r3, .L_0200741c
    mov        r0, #0
    str        r0, [r2]
    str        r0, [r3]
    bx         lr
.L_02007414:
    .word viewport_update_pending
.L_02007418:
    .word requested_viewport_offset_y
.L_0200741c:
    .word requested_viewport_offset_x

/* 0x02007420 */
.global clear_and_initialize_renderer_vram
clear_and_initialize_renderer_vram:
    ldr        r2, .L_0200749c
    mov        r3, #0x6000000
.L_02007428:
    mov        r1, #0
    strh       r1, [r3], #2
    cmp        r3, r2
    bne        .L_02007428
    ldr        r3, .L_020074a0
    ldr        r2, .L_020074a4
.L_02007440:
    mov        r1, #0
    strh       r1, [r3], #2
    cmp        r3, r2
    bne        .L_02007440
    ldr        r3, .L_020074a8
    ldr        r2, .L_020074ac
.L_02007458:
    mov        r1, #0
    strh       r1, [r3], #2
    cmp        r3, r2
    bne        .L_02007458
    ldr        r3, .L_020074a4
    ldr        r2, .L_020074b0
.L_02007470:
    mov        r1, #0
    strh       r1, [r3], #2
    cmp        r3, r2
    bne        .L_02007470
    ldr        r2, .L_020074b4
    mov        r3, #0x6400000
.L_02007488:
    mov        r1, #0
    strh       r1, [r3], #2
    cmp        r3, r2
    bne        .L_02007488
    bx         lr
.L_0200749c:
    .word 0x0600c000
.L_020074a0:
    .word 0x06020000
.L_020074a4:
    .word 0x06030000
.L_020074a8:
    .word 0x06028000
.L_020074ac:
    .word 0x06038000
.L_020074b0:
    .word 0x06040000
.L_020074b4:
    .word 0x06410000
