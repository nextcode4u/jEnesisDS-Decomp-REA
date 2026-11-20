/* Vdp dma and port writes. Release range 0x02009cf0–0x02009e3c. */


/* 0x02009cf0 */
.global rebuild_display_from_vdp_state
rebuild_display_from_vdp_state:
    push       {r4, r5, r6, lr}
    ldr        r5, .L_02009e14
    mov        r4, #0
.L_02009cfc:
    and        r0, r4, #0xff
    ldrb       r1, [r4, r5]
    add        r4, r4, #1
    bl         write_vdp_register_and_update_render_state
    cmp        r4, #0x18
    bne        .L_02009cfc
    ldr        r3, .L_02009e18
    mov        ip, #0
    ldrb       r4, [r3]
    ldr        r6, .L_02009e1c
    ldr        r5, .L_02009e20
    mov        r0, ip
.L_02009d2c:
    ldrh       r3, [r0, r6]
    cmp        ip, #0
    and        r2, r3, #0xe0
    and        r1, r3, #0xe00
    lsl        r2, r2, #2
    orr        r2, r2, r1, lsl #3
    orr        r2, r2, #0x8000
    and        r3, r3, #0xe
    orr        r3, r2, r3, lsl #1
    ldr        lr, .L_02009e24
    add        r2, r0, #0x5000000
    strh       r3, [r0, r5]
    strhne     r3, [r2]
    cmp        r4, ip
    add        ip, ip, #1
    strh       r3, [r0, lr]
    strheq     r3, [lr]
    cmp        ip, #0x40
    add        r0, r0, #2
    bne        .L_02009d2c
    ldr        r3, .L_02009e28
    ldrb       r0, [r3]
    cmp        r0, #0
    beq        .L_02009df0
    ldr        r6, .L_02009e2c
    mov        r0, #1
    bl         select_window_tilemap_layout
    ldr        r5, .L_02009e30
    ldr        r0, [r6, #8]
    mov        r1, #0x1000
    add        r0, r0, r5
    mov        r2, #2
    bl         rebuild_background_tilemap_from_vdp_words
.L_02009db0:
    ldr        r3, .L_02009e34
    ldr        r4, .L_02009e38
    ldr        r0, [r3]
    bl         select_background_tilemap_layout
    ldr        r0, [r6]
    ldr        r1, [r4]
    add        r0, r0, r5
    mov        r2, #0
    bl         rebuild_background_tilemap_from_vdp_words
    ldr        r0, [r6, #4]
    ldr        r1, [r4]
    add        r0, r0, r5
    mov        r2, #1
    bl         rebuild_background_tilemap_from_vdp_words
    pop        {r4, r5, r6, lr}
    b          address_02008e5c
.L_02009df0:
    ldr        r6, .L_02009e2c
    bl         select_window_tilemap_layout
    ldr        r5, .L_02009e30
    ldr        r0, [r6, #8]
    mov        r1, #0x800
    add        r0, r0, r5
    mov        r2, #2
    bl         rebuild_background_tilemap_from_vdp_words
    b          .L_02009db0
.L_02009e14:
    .word vdp_registers
.L_02009e18:
    .word vdp_backdrop_color_index
.L_02009e1c:
    .word vdp_cram
.L_02009e20:
    .word ds_converted_vdp_palette
.L_02009e24:
    .word 0x05000200
.L_02009e28:
    .word vdp_wide_display_mode
.L_02009e2c:
    .word vdp_plane_a_name_table_base
.L_02009e30:
    .word vdp_vram
.L_02009e34:
    .word vdp_background_layout_code
.L_02009e38:
    .word plane_name_table_span_bytes
