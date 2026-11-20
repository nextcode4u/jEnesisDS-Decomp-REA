/* Address and data writes. Release range 0x0200aaf8–0x0200b284. */


/* 0x0200aaf8 */
.global write_vdp_control_port_word
write_vdp_control_port_word:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r6, .L_0200abd4
    lsr        r3, r0, #2
    ldrb       r5, [r6]
    lsl        r2, r0, #0xe
    cmp        r5, #0
    and        lr, r3, #0x3c
    ldr        r8, .L_0200abd8
    ldr        r7, .L_0200abdc
    mov        ip, r0
    and        r4, r2, #0xc000
    and        r3, r0, #0xc000
    beq        .L_0200ab78
    ldr        r2, [r8]
    ldr        r3, .L_0200abe0
    ldr        r1, [r7]
    ldrb       r0, [r3]
    lsl        r2, r2, #0x12
    and        r1, r1, #3
    lsr        r2, r2, #0x12
    orr        r1, r1, lr
    orr        r2, r2, r4
    mov        r3, #0
    cmp        r0, #0
    strb       r3, [r6]
    str        r2, [r8]
    str        r1, [r7]
    popeq      {r4, r5, r6, r7, r8, pc}
    tst        r1, #0x20
    popeq      {r4, r5, r6, r7, r8, pc}
    pop        {r4, r5, r6, r7, r8, lr}
    b          execute_vdp_dma_command
.L_0200ab78:
    and        r1, r0, #0xff
    lsl        lr, ip, #0x12
    lsr        r0, r0, #8
    cmp        r3, #0x8000
    and        r0, r0, #0x1f
    ldr        r4, .L_0200abdc
    ldr        r7, .L_0200abd8
    lsr        lr, lr, #0x12
    beq        .L_0200abc8
    ldr        r3, [r4]
    ldr        r1, [r7]
    and        r3, r3, #0x3c
    and        r1, r1, #0xc000
    orr        r1, r1, lr
    orr        r3, r3, ip, lsr #14
    mov        r2, #1
    strb       r2, [r6]
    str        r3, [r4]
    str        r1, [r7]
    pop        {r4, r5, r6, r7, r8, pc}
.L_0200abc8:
    str        r5, [r4]
    pop        {r4, r5, r6, r7, r8, lr}
    b          write_vdp_register_and_update_render_state
.L_0200abd4:
    .word vdp_control_word_pending
.L_0200abd8:
    .word vdp_address
.L_0200abdc:
    .word vdp_access_code
.L_0200abe0:
    .word vdp_dma_enabled
    ldr        r3, .L_0200ac6c
    push       {r4, lr}
    ldrb       r2, [r3]
    mov        r4, r0
    cmp        r2, #0
    lsr        r0, r0, #0x10
    and        ip, r4, #0xc0000000
    bne        .L_0200ac58
    lsl        r3, r4, #0xe
    lsr        r2, r4, #2
    and        r2, r2, #0x3c
    and        r3, r3, #0xc000
    lsl        r1, r4, #2
    cmp        ip, #0x80000000
    orr        lr, r2, r4, lsr #30
    orr        ip, r3, r1, lsr #18
    beq        .L_0200ac58
    ldr        r3, .L_0200ac70
    ldr        r2, .L_0200ac74
    ldrb       r1, [r3]
    ldr        r3, .L_0200ac78
    cmp        r1, #0
    str        ip, [r2]
    str        lr, [r3]
    popeq      {r4, pc}
    tst        lr, #0x20
    popeq      {r4, pc}
    pop        {r4, lr}
    b          execute_vdp_dma_command
.L_0200ac58:
    bl         write_vdp_control_port_word
    lsl        r0, r4, #0x10
    lsr        r0, r0, #0x10
    pop        {r4, lr}
    b          write_vdp_control_port_word
.L_0200ac6c:
    .word vdp_control_word_pending
.L_0200ac70:
    .word vdp_dma_enabled
.L_0200ac74:
    .word vdp_address
.L_0200ac78:
    .word vdp_access_code

/* 0x0200ac7c */
.global write_vdp_data_port_word
write_vdp_data_port_word:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    ldr        ip, .L_0200b1d4
    sub        sp, sp, #4
    ldrb       r3, [ip]
    mov        r4, r0
    cmp        r3, #0
    beq        .L_0200acb0
    ldr        r3, .L_0200b1d8
    mov        r2, #0
    ldrb       r1, [r3]
    strb       r2, [ip]
    cmp        r1, r2
    bne        .L_0200aecc
.L_0200acb0:
    ldr        sb, .L_0200b1dc
    ldrb       r3, [sb]
    cmp        r3, #0
    beq        .L_0200ae64
    ldr        r2, .L_0200b1e0
    ldr        fp, .L_0200b1e4
    ldr        r3, [r2]
    ldr        r2, .L_0200b1e8
    tst        r3, #1
    ldr        r6, [r2]
    lsl        r3, r3, #0x10
    lsr        lr, r3, #0x10
    ldreq      r8, .L_0200b1ec
    ldrne      r3, .L_0200b1f0
    ldr        r1, [fp]
    ldrne      r8, .L_0200b1ec
    lsl        r2, r6, #0x10
    addeq      r3, lr, r8
    andne      r3, lr, r3
    lsl        r1, r1, #0x10
    and        ip, r4, #0xff
    lsr        r0, r4, #8
    lsr        r7, r2, #0x10
    strbne     ip, [r8, r3]
    lsr        r5, r1, #0x10
    strbeq     r0, [r8, lr]
    strbeq     ip, [r3, #1]
    add        r3, lr, r7
    strbne     r0, [r8, lr]
    lsl        r3, r3, #0x10
    cmp        r5, #0
    lsr        r1, r3, #0x10
    beq        .L_0200b0c0
    mov        r3, r5
.L_0200ad38:
    sub        r3, r3, #1
    add        r2, r1, r7
    lsl        r3, r3, #0x10
    lsl        r2, r2, #0x10
    lsrs       r3, r3, #0x10
    strb       ip, [r8, r1]
    lsr        r1, r2, #0x10
    bne        .L_0200ad38
    ldr        r3, .L_0200b1e0
    str        r1, [r3]
    ldr        r3, .L_0200b1f4
    cmp        r5, r3
    cmpeq      ip, #0
    ldrne      r4, .L_0200b1f0
    andne      r4, lr, r4
    beq        .L_0200b0d4
.L_0200ad78:
    cmp        r6, #1
    ldreq      sl, .L_0200b1f8
    ldrne      sl, .L_0200b1f8
    lsreq      r5, r5, #1
    moveq      r7, #2
.L_0200ad8c:
    ldr        r1, [sl, #0xc]
    cmp        r4, r1
    blo        .L_0200adc4
    ldr        r2, .L_0200b1fc
    ldrb       r3, [r2]
    cmp        r3, #0
    moveq      r3, #0x200
    movne      r3, #0x280
    add        r3, r3, r1
    cmp        r4, r3
    ldrlo      r3, .L_0200b200
    movlo      r2, #1
    strblo     r2, [r3]
    blo        .L_0200ae44
.L_0200adc4:
    ldr        r3, .L_0200b204
    ldrh       r2, [r3]
    cmp        r2, r4
    bhi        .L_0200ade4
    ldr        r3, .L_0200b208
    ldrh       r2, [r3]
    cmp        r2, r4
    bhi        .L_0200ae44
.L_0200ade4:
    ldr        r1, [sl]
    cmp        r4, r1
    blo        .L_0200ae00
    ldr        r3, .L_0200b20c
    ldr        r2, [r3]
    cmp        r4, r2
    blo        .L_0200aeac
.L_0200ae00:
    mov        r6, #0
.L_0200ae04:
    ldr        r1, [sl, #4]
    cmp        r4, r1
    blo        .L_0200ae20
    ldr        r3, .L_0200b20c
    ldr        r2, [r3, #4]
    cmp        r4, r2
    blo        .L_0200af18
.L_0200ae20:
    ldr        r1, [sl, #8]
    cmp        r4, r1
    blo        .L_0200ae3c
    ldr        r3, .L_0200b20c
    ldr        r2, [r3, #8]
    cmp        r4, r2
    blo        .L_0200af38
.L_0200ae3c:
    cmp        r6, #0
    beq        .L_0200aee4
.L_0200ae44:
    sub        r3, r5, #1
    lsl        r3, r3, #0x10
    lsrs       r5, r3, #0x10
    beq        .L_0200af00
.L_0200ae54:
    add        r3, r4, r7
    ldr        r4, .L_0200b1f0
    and        r4, r3, r4
    b          .L_0200ad8c
.L_0200ae64:
    ldr        r3, .L_0200b210
    ldr        r2, [r3]
    and        r2, r2, #0xf
    cmp        r2, #3
    beq        .L_0200af50
    cmp        r2, #5
    beq        .L_0200b0f0
    cmp        r2, #1
    beq        .L_0200afdc
.L_0200ae88:
    ldr        r2, .L_0200b1e0
    ldr        r3, [r2]
    ldr        r2, .L_0200b1e8
    ldr        r1, [r2]
    ldr        r2, .L_0200b1e0
    add        r3, r3, r1
    str        r3, [r2]
.L_0200aea4:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_0200aeac:
    rsb        r1, r1, r4
    mov        r0, #0
    ldrh       r2, [r4, r8]
    ldr        r3, .L_0200b214
    mov        lr, pc
    ldr        pc, [r3]
    mov        r6, #1
    b          .L_0200ae04
.L_0200aecc:
    ldr        r3, .L_0200b210
    ldr        r2, [r3]
    tst        r2, #0x20
    beq        .L_0200acb0
    bl         execute_vdp_dma_command
    b          .L_0200acb0
.L_0200aee4:
    mov        r0, r4
    ldrh       r1, [r4, r8]
    bl         update_cached_ds_pattern_from_vdp_word
    sub        r3, r5, #1
    lsl        r3, r3, #0x10
    lsrs       r5, r3, #0x10
    bne        .L_0200ae54
.L_0200af00:
    ldr        r2, .L_0200b218
    mov        r3, #0
    str        r3, [fp]
    strb       r3, [sb]
    str        r3, [r2]
    b          .L_0200aea4
.L_0200af18:
    rsb        r1, r1, r4
    mov        r0, #1
    ldrh       r2, [r4, r8]
    ldr        r3, .L_0200b214
    mov        lr, pc
    ldr        pc, [r3]
    mov        r6, #1
    b          .L_0200ae20
.L_0200af38:
    rsb        r0, r1, r4
    ldr        r3, .L_0200b21c
    ldrh       r1, [r4, r8]
    mov        lr, pc
    ldr        pc, [r3]
    b          .L_0200ae3c
.L_0200af50:
    ldr        r3, .L_0200b1e0
    and        r2, r4, #0xe0
    ldr        r1, [r3]
    lsl        r2, r2, #2
    and        r1, r1, #0x7e
    and        r3, r4, #0xe00
    ldr        r0, .L_0200b220
    lsr        r5, r1, #1
    orr        r2, r2, r3, lsl #3
    ldr        r3, .L_0200b224
    and        r0, r4, r0
    orr        r2, r2, #0x8000
    lsl        r6, r5, #1
    and        r1, r4, #0xe
    cmp        r5, #0
    strh       r0, [r6, r3]
    orr        r2, r2, r1, lsl #1
    beq        .L_0200afa8
    ldr        r3, .L_0200b228
    ldr        r3, [r3]
    cmp        r3, #0xde
    bls        .L_0200b134
.L_0200afa8:
    lsl        r3, r2, #0x10
    lsr        lr, r3, #0x10
.L_0200afb0:
    ldr        r3, .L_0200b22c
    ldrb       r2, [r3]
    ldr        r3, .L_0200b230
    cmp        r5, r2
    strh       lr, [r6, r3]
    ldr        r3, .L_0200b234
    mov        r2, #1
    str        r2, [r3]
    ldreq      r3, .L_0200b238
    strheq     lr, [r3]
    b          .L_0200ae88
.L_0200afdc:
    ldr        r2, .L_0200b1e0
    ldr        r5, .L_0200b1f0
    ldr        r3, [r2]
    tst        r3, #1
    and        r5, r3, r5
    beq        .L_0200b11c
    lsr        r0, r4, #8
    ldr        r2, .L_0200b1ec
    orr        r3, r0, r4, lsl #8
    add        r1, r5, r2
    lsl        r3, r3, #0x10
    strb       r0, [r2, r5]
    strb       r4, [r1, #1]
    lsr        r4, r3, #0x10
.L_0200b014:
    ldr        sl, .L_0200b1f8
    ldr        r1, [sl, #0xc]
    cmp        r5, r1
    blo        .L_0200b050
    ldr        r2, .L_0200b1fc
    ldrb       r3, [r2]
    cmp        r3, #0
    moveq      r3, #0x200
    movne      r3, #0x280
    add        r3, r3, r1
    cmp        r5, r3
    ldrlo      r3, .L_0200b200
    movlo      r2, #1
    strblo     r2, [r3]
    blo        .L_0200ae88
.L_0200b050:
    ldr        r1, [sl]
    cmp        r5, r1
    blo        .L_0200b06c
    ldr        r3, .L_0200b20c
    ldr        r2, [r3]
    cmp        r5, r2
    blo        .L_0200b17c
.L_0200b06c:
    mov        r6, #0
.L_0200b070:
    ldr        r1, [sl, #4]
    cmp        r5, r1
    blo        .L_0200b08c
    ldr        r3, .L_0200b20c
    ldr        r2, [r3, #4]
    cmp        r5, r2
    blo        .L_0200b1b4
.L_0200b08c:
    ldr        r1, [sl, #8]
    cmp        r5, r1
    blo        .L_0200b0a8
    ldr        r3, .L_0200b20c
    ldr        r2, [r3, #8]
    cmp        r5, r2
    blo        .L_0200b19c
.L_0200b0a8:
    cmp        r6, #0
    bne        .L_0200ae88
    mov        r0, r5
    mov        r1, r4
    bl         update_cached_ds_pattern_from_vdp_word
    b          .L_0200ae88
.L_0200b0c0:
    ldr        r4, .L_0200b1f0
    ldr        r3, .L_0200b1e0
    and        r4, lr, r4
    str        r1, [r3]
    b          .L_0200ad78
.L_0200b0d4:
    bl         clear_and_initialize_renderer_vram
    ldr        r2, .L_0200b218
    mov        r3, #0
    str        r3, [fp]
    strb       r3, [sb]
    str        r3, [r2]
    b          .L_0200aea4
.L_0200b0f0:
    ldr        r2, .L_0200b1e0
    ldr        r3, [r2]
    and        r2, r3, #0x7f
    ldr        r3, .L_0200b1e0
    cmp        r2, #0x4f
    str        r2, [r3]
    bhi        .L_0200aea4
    ldr        r3, .L_0200b23c
    and        r2, r2, #0x7e
    strh       r4, [r2, r3]
    b          .L_0200ae88
.L_0200b11c:
    ldr        r2, .L_0200b1ec
    ldrh       r3, [r5, r2]
    cmp        r3, r4
    beq        .L_0200ae88
    strh       r4, [r5, r2]
    b          .L_0200b014
.L_0200b134:
    ldr        r1, .L_0200b240
    ldr        r0, .L_0200b244
    ldrb       ip, [r1, r3]
    cmp        ip, #0xc8
    addeq      r3, r3, r1
    ldrbeq     r3, [r3, #-1]
    movne      r3, ip
    and        ip, r3, #0xff
    lsr        r1, ip, #5
    lsl        r3, r2, #0x10
    lsr        lr, r3, #0x10
    add        r2, r5, r1, lsl #6
    ldr        r3, .L_0200b248
    add        r1, r0, r1, lsl #7
    lsl        r2, r2, #1
    str        r1, [r3, ip, lsl #2]
    strh       lr, [r2, r0]
    b          .L_0200afb0
.L_0200b17c:
    rsb        r1, r1, r5
    mov        r0, #0
    mov        r2, r4
    ldr        r3, .L_0200b214
    mov        lr, pc
    ldr        pc, [r3]
    mov        r6, #1
    b          .L_0200b070
.L_0200b19c:
    rsb        r0, r1, r5
    ldr        r3, .L_0200b21c
    mov        r1, r4
    mov        lr, pc
    ldr        pc, [r3]
    b          .L_0200b0a8
.L_0200b1b4:
    rsb        r1, r1, r5
    mov        r0, #1
    mov        r2, r4
    ldr        r3, .L_0200b214
    mov        lr, pc
    ldr        pc, [r3]
    mov        r6, #1
    b          .L_0200b08c
.L_0200b1d4:
    .word vdp_control_word_pending
.L_0200b1d8:
    .word vdp_dma_enabled
.L_0200b1dc:
    .word vdp_dma_enabled + 1
.L_0200b1e0:
    .word vdp_address
.L_0200b1e4:
    .word vdp_dma_remaining
.L_0200b1e8:
    .word vdp_address_increment
.L_0200b1ec:
    .word vdp_vram
.L_0200b1f0:
    .word 0x0000fffe
.L_0200b1f4:
    .word 0x0000ffff
.L_0200b1f8:
    .word vdp_plane_a_name_table_base
.L_0200b1fc:
    .word vdp_wide_display_mode
.L_0200b200:
    .word 0x020b4c15
.L_0200b204:
    .word vdp_hscroll_table_base
.L_0200b208:
    .word 0x023dcdaa
.L_0200b20c:
    .word vdp_plane_a_name_table_end
.L_0200b210:
    .word vdp_access_code
.L_0200b214:
    .word write_ds_background_tilemap_word
.L_0200b218:
    .word vdp_dma_length_register
.L_0200b21c:
    .word write_ds_window_tilemap_word
.L_0200b220:
    .word 0x00000eee
.L_0200b224:
    .word vdp_cram
.L_0200b228:
    .word vdp_scanline
.L_0200b22c:
    .word vdp_backdrop_color_index
.L_0200b230:
    .word ds_converted_vdp_palette
.L_0200b234:
    .word address_0208f354
.L_0200b238:
    .word 0x05000200
.L_0200b23c:
    .word vdp_vsram
.L_0200b240:
    .word ds_line_from_genesis_scanline
.L_0200b244:
    .word 0x023dc8ca
.L_0200b248:
    .word scanline_pending_palette_changes
    push       {r4, lr}
    mov        r4, r0
    lsr        r0, r0, #0x10
    bl         write_vdp_data_port_word
    lsl        r4, r4, #0x10
    lsr        r0, r4, #0x10
    pop        {r4, lr}
    b          write_vdp_data_port_word
    tst        r0, #0x1c
    mov        r0, r1
    beq        .L_0200b27c
    b          write_vdp_control_port_word
.L_0200b27c:
    mov        r0, r1
    b          write_vdp_data_port_word
