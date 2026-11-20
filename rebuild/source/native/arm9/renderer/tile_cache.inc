/* Tile cache. Release range 0x020074b8–0x020077b8. */


/* 0x020074b8 */
.global map_genesis_pattern_to_ds_tile
map_genesis_pattern_to_ds_tile:
    push       {r4, r5, r6, r7, r8, lr}
    add        r3, r0, r1, lsl #11
    ldr        r7, .L_02007590
    lsl        r5, r3, #1
    ldrh       lr, [r5, r7]
    mov        r8, r0
    tst        lr, #0x8000
    lslne      ip, lr, #0x16
    mov        r4, r1
    lsrne      ip, ip, #0x16
    bne        .L_02007588
    ldr        r6, .L_02007594
    lsl        r1, r1, #1
    ldrh       r0, [r1, r6]
    ldr        r3, .L_02007598
    cmp        r0, r3
    ldrhi      r2, .L_0200759c
    movhi      r3, #1
    movhi      r0, r3
    strhi      r3, [r2, r4, lsl #2]
    strhhi     r3, [r1, r6]
    orr        r3, lr, #0x8000
    orr        r3, r0, r3
    lsl        r3, r3, #0x10
    ldr        lr, .L_020075a0
    lsr        r3, r3, #0x10
    and        lr, r3, lr
    add        r2, r0, #1
    tst        r3, #0x4000
    mov        ip, r0
    strh       r2, [r1, r6]
    strh       lr, [r5, r7]
    beq        .L_02007588
    ldr        r3, .L_020075a4
    ldr        r2, .L_020075a8
    ldr        r0, [r3]
    ldr        r1, [r2, r4, lsl #2]
    bic        r3, lr, #0x4000
    add        r1, r1, ip, lsl #5
    lsl        lr, ip, #5
    strh       r3, [r5, r7]
    add        r0, r0, r8, lsl #5
    mov        ip, #0
.L_02007564:
    lsl        r2, ip, #1
    eor        r3, ip, #1
    ldrh       r2, [r2, r0]
    add        ip, ip, #1
    lsl        r3, r3, #1
    cmp        ip, #0x10
    strh       r2, [r3, r1]
    bne        .L_02007564
    lsr        ip, lr, #5
.L_02007588:
    mov        r0, ip
    pop        {r4, r5, r6, r7, r8, pc}
.L_02007590:
    .word background_pattern_tile_map
.L_02007594:
    .word background_next_ds_tile
.L_02007598:
    .word 0x000003fe
.L_0200759c:
    .word background_cache_refresh_flags
.L_020075a0:
    .word 0x0000dfff
.L_020075a4:
    .word vdp_vram_base_pointer
.L_020075a8:
    .word address_0208e590

/* 0x020075ac */
.global read_background_tile_cache_refresh_flag
read_background_tile_cache_refresh_flag:
    ldr        r3, .L_020075b8
    ldr        r0, [r3, r0, lsl #2]
    bx         lr
.L_020075b8:
    .word background_cache_refresh_flags

/* 0x020075bc */
.global mark_background_tile_cache_for_refresh
mark_background_tile_cache_for_refresh:
    ldr        r3, .L_020075cc
    mov        r2, #1
    str        r2, [r3, r0, lsl #2]
    bx         lr
.L_020075cc:
    .word background_cache_refresh_flags

/* 0x020075d0 */
.global reset_background_tile_cache_at_capacity
reset_background_tile_cache_at_capacity:
    ldr        ip, .L_02007620
    lsl        r1, r0, #1
    ldrh       r2, [r1, ip]
    ldr        r3, .L_02007624
    cmp        r2, r3
    bxls       lr
    mov        r3, #1
    strh       r3, [r1, ip]
    ldr        r3, .L_02007628
    add        r2, r3, r0, lsl #12
    mov        r3, #1
.L_020075fc:
    add        r3, r3, #1
    mov        r1, #0x6000
    cmp        r3, #0x800
    strh       r1, [r2, #2]!
    bne        .L_020075fc
    ldr        r3, .L_0200762c
    mov        r2, #0
    str        r2, [r3, r0, lsl #2]
    bx         lr
.L_02007620:
    .word background_next_ds_tile
.L_02007624:
    .word 0x000002fe
.L_02007628:
    .word background_pattern_tile_map
.L_0200762c:
    .word background_cache_refresh_flags

/* 0x02007630 */
.global rebuild_background_tilemap_from_vdp_words
rebuild_background_tilemap_from_vdp_words:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r3, .L_020076a0
    mov        r7, r1
    mov        r6, r2
    lsl        r1, r2, #1
    mov        r5, r0
    mov        r0, r2
    ldr        r2, .L_020076a4
    strh       r2, [r1, r3]
    bl         reset_background_tile_cache_at_capacity
    cmp        r7, #0
    beq        .L_02007688
    ldr        r8, .L_020076a8
    mov        r4, #0
.L_02007668:
    mov        r1, r4
    mov        r0, r6
    add        r4, r4, #2
    ldrh       r2, [r5], #2
    mov        lr, pc
    ldr        pc, [r8]
    cmp        r7, r4
    bhi        .L_02007668
.L_02007688:
    ldr        r2, .L_020076ac
    ldr        r3, [r2]
    ands       r2, r3, #8
    ldreq      r3, .L_020076b0
    streq      r2, [r3, r6, lsl #2]
    pop        {r4, r5, r6, r7, r8, pc}
.L_020076a0:
    .word background_next_ds_tile
.L_020076a4:
    .word 0x000003fe
.L_020076a8:
    .word write_ds_background_tilemap_word
.L_020076ac:
    .word emulator_option_flags
.L_020076b0:
    .word background_cache_refresh_flags
    ldr        r3, .L_020076cc
    bic        r0, r0, #1
    ldr        ip, [r3, r2, lsl #2]
    eor        r0, r0, #2
    strh       r1, [r0, ip]
    bx         lr
.L_020076cc:
    .word address_0208e590

/* 0x020076d0 */
.global update_cached_ds_pattern_from_vdp_word
update_cached_ds_pattern_from_vdp_word:
    push       {r4, r5, r6, r7, lr}
    lsr        ip, r0, #5
    ldr        r6, .L_020077a4
    lsl        r4, ip, #1
    mov        r5, r0
    and        r2, r0, #0x1f
    ldrh       r0, [r4, r6]
    mov        r7, r1
    lsl        r3, r0, #0x16
    lsr        r3, r3, #0x16
    orr        r2, r2, r3, lsl #5
    ldr        r3, .L_020077a8
    tst        r0, #0x8000
    orr        lr, r0, #0x4000
    lsr        r2, r2, #1
    mov        r0, #1
    strb       r0, [r3, ip]
    eor        r2, r2, #1
    ldrne      r3, .L_020077ac
    lsl        r2, r2, #1
    strhne     r1, [r2, r3]
    add        r3, r4, r6
    strheq     lr, [r4, r6]
    add        r0, r3, #0x1000
    ldrh       r1, [r0]
    and        r2, r5, #0x1f
    lsl        r3, r1, #0x16
    lsr        r3, r3, #0x16
    orr        r2, r2, r3, lsl #5
    tst        r1, #0x8000
    lsr        r2, r2, #1
    ldrne      r3, .L_020077b0
    eor        r2, r2, #1
    lsl        r2, r2, #1
    strhne     r7, [r2, r3]
    orr        r1, r1, #0x4000
    add        r3, r4, r6
    strheq     r1, [r0]
    add        ip, r3, #0x2000
    ldrh       r1, [ip]
    and        r2, r5, #0x1f
    lsl        r3, r1, #0x16
    lsr        r3, r3, #0x16
    orr        r2, r2, r3, lsl #5
    tst        r1, #0x8000
    lsr        r2, r2, #1
    orr        r3, r1, #0x4000
    eor        r2, r2, #1
    ldrne      r3, .L_020077b4
    lsl        r0, r2, #1
    strhne     r7, [r0, r3]
    strheq     r3, [ip]
    pop        {r4, r5, r6, r7, pc}
.L_020077a4:
    .word background_pattern_tile_map
.L_020077a8:
    .word sprite_pattern_dirty_flags
.L_020077ac:
    .word 0x06020000
.L_020077b0:
    .word 0x06028000
.L_020077b4:
    .word 0x06030000
