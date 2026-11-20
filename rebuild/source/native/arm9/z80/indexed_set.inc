/* Z80 execution and prefixed instruction handlers. 0x020144d0–0x020153f0. */


/* 0x020144d0 */
.global z80_ix_iy_cb_set_bit_0_indexed_memory_to_b
z80_ix_iy_cb_set_bit_0_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #1
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201450c */
.global z80_ix_iy_cb_set_bit_0_indexed_memory_to_c
z80_ix_iy_cb_set_bit_0_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #1
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014548 */
.global z80_ix_iy_cb_set_bit_0_indexed_memory_to_d
z80_ix_iy_cb_set_bit_0_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #1
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014584 */
.global z80_ix_iy_cb_set_bit_0_indexed_memory_to_e
z80_ix_iy_cb_set_bit_0_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #1
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020145c0 */
.global z80_ix_iy_cb_set_bit_0_indexed_memory_to_h
z80_ix_iy_cb_set_bit_0_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    orr        r1, r0, #1
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014600 */
.global z80_ix_iy_cb_set_bit_0_indexed_memory_to_l
z80_ix_iy_cb_set_bit_0_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    orr        r1, r0, #1
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014640 */
.global z80_ix_iy_cb_set_bit_0_indexed_memory
z80_ix_iy_cb_set_bit_0_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #1
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014678 */
.global z80_ix_iy_cb_set_bit_0_indexed_memory_to_a
z80_ix_iy_cb_set_bit_0_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #1
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020146b4 */
.global z80_ix_iy_cb_set_bit_1_indexed_memory_to_b
z80_ix_iy_cb_set_bit_1_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #2
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020146f0 */
.global z80_ix_iy_cb_set_bit_1_indexed_memory_to_c
z80_ix_iy_cb_set_bit_1_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #2
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201472c */
.global z80_ix_iy_cb_set_bit_1_indexed_memory_to_d
z80_ix_iy_cb_set_bit_1_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #2
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014768 */
.global z80_ix_iy_cb_set_bit_1_indexed_memory_to_e
z80_ix_iy_cb_set_bit_1_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #2
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020147a4 */
.global z80_ix_iy_cb_set_bit_1_indexed_memory_to_h
z80_ix_iy_cb_set_bit_1_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    orr        r1, r0, #2
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020147e4 */
.global z80_ix_iy_cb_set_bit_1_indexed_memory_to_l
z80_ix_iy_cb_set_bit_1_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    orr        r1, r0, #2
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014824 */
.global z80_ix_iy_cb_set_bit_1_indexed_memory
z80_ix_iy_cb_set_bit_1_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #2
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201485c */
.global z80_ix_iy_cb_set_bit_1_indexed_memory_to_a
z80_ix_iy_cb_set_bit_1_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #2
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014898 */
.global z80_ix_iy_cb_set_bit_2_indexed_memory_to_b
z80_ix_iy_cb_set_bit_2_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #4
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020148d4 */
.global z80_ix_iy_cb_set_bit_2_indexed_memory_to_c
z80_ix_iy_cb_set_bit_2_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #4
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014910 */
.global z80_ix_iy_cb_set_bit_2_indexed_memory_to_d
z80_ix_iy_cb_set_bit_2_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #4
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201494c */
.global z80_ix_iy_cb_set_bit_2_indexed_memory_to_e
z80_ix_iy_cb_set_bit_2_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #4
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014988 */
.global z80_ix_iy_cb_set_bit_2_indexed_memory_to_h
z80_ix_iy_cb_set_bit_2_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    orr        r1, r0, #4
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020149c8 */
.global z80_ix_iy_cb_set_bit_2_indexed_memory_to_l
z80_ix_iy_cb_set_bit_2_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    orr        r1, r0, #4
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014a08 */
.global z80_ix_iy_cb_set_bit_2_indexed_memory
z80_ix_iy_cb_set_bit_2_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #4
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014a40 */
.global z80_ix_iy_cb_set_bit_2_indexed_memory_to_a
z80_ix_iy_cb_set_bit_2_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #4
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014a7c */
.global z80_ix_iy_cb_set_bit_3_indexed_memory_to_b
z80_ix_iy_cb_set_bit_3_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #8
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014ab8 */
.global z80_ix_iy_cb_set_bit_3_indexed_memory_to_c
z80_ix_iy_cb_set_bit_3_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #8
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014af4 */
.global z80_ix_iy_cb_set_bit_3_indexed_memory_to_d
z80_ix_iy_cb_set_bit_3_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #8
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014b30 */
.global z80_ix_iy_cb_set_bit_3_indexed_memory_to_e
z80_ix_iy_cb_set_bit_3_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #8
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014b6c */
.global z80_ix_iy_cb_set_bit_3_indexed_memory_to_h
z80_ix_iy_cb_set_bit_3_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    orr        r1, r0, #8
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014bac */
.global z80_ix_iy_cb_set_bit_3_indexed_memory_to_l
z80_ix_iy_cb_set_bit_3_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    orr        r1, r0, #8
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014bec */
.global z80_ix_iy_cb_set_bit_3_indexed_memory
z80_ix_iy_cb_set_bit_3_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #8
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014c24 */
.global z80_ix_iy_cb_set_bit_3_indexed_memory_to_a
z80_ix_iy_cb_set_bit_3_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #8
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014c60 */
.global z80_ix_iy_cb_set_bit_4_indexed_memory_to_b
z80_ix_iy_cb_set_bit_4_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x10
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014c9c */
.global z80_ix_iy_cb_set_bit_4_indexed_memory_to_c
z80_ix_iy_cb_set_bit_4_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x10
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014cd8 */
.global z80_ix_iy_cb_set_bit_4_indexed_memory_to_d
z80_ix_iy_cb_set_bit_4_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x10
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014d14 */
.global z80_ix_iy_cb_set_bit_4_indexed_memory_to_e
z80_ix_iy_cb_set_bit_4_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x10
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014d50 */
.global z80_ix_iy_cb_set_bit_4_indexed_memory_to_h
z80_ix_iy_cb_set_bit_4_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    orr        r1, r0, #0x10
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014d90 */
.global z80_ix_iy_cb_set_bit_4_indexed_memory_to_l
z80_ix_iy_cb_set_bit_4_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    orr        r1, r0, #0x10
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014dd0 */
.global z80_ix_iy_cb_set_bit_4_indexed_memory
z80_ix_iy_cb_set_bit_4_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x10
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014e08 */
.global z80_ix_iy_cb_set_bit_4_indexed_memory_to_a
z80_ix_iy_cb_set_bit_4_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x10
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014e44 */
.global z80_ix_iy_cb_set_bit_5_indexed_memory_to_b
z80_ix_iy_cb_set_bit_5_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x20
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014e80 */
.global z80_ix_iy_cb_set_bit_5_indexed_memory_to_c
z80_ix_iy_cb_set_bit_5_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x20
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014ebc */
.global z80_ix_iy_cb_set_bit_5_indexed_memory_to_d
z80_ix_iy_cb_set_bit_5_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x20
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014ef8 */
.global z80_ix_iy_cb_set_bit_5_indexed_memory_to_e
z80_ix_iy_cb_set_bit_5_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x20
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014f34 */
.global z80_ix_iy_cb_set_bit_5_indexed_memory_to_h
z80_ix_iy_cb_set_bit_5_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    orr        r1, r0, #0x20
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014f74 */
.global z80_ix_iy_cb_set_bit_5_indexed_memory_to_l
z80_ix_iy_cb_set_bit_5_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    orr        r1, r0, #0x20
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014fb4 */
.global z80_ix_iy_cb_set_bit_5_indexed_memory
z80_ix_iy_cb_set_bit_5_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x20
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02014fec */
.global z80_ix_iy_cb_set_bit_5_indexed_memory_to_a
z80_ix_iy_cb_set_bit_5_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x20
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02015028 */
.global z80_ix_iy_cb_set_bit_6_indexed_memory_to_b
z80_ix_iy_cb_set_bit_6_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x40
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02015064 */
.global z80_ix_iy_cb_set_bit_6_indexed_memory_to_c
z80_ix_iy_cb_set_bit_6_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x40
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020150a0 */
.global z80_ix_iy_cb_set_bit_6_indexed_memory_to_d
z80_ix_iy_cb_set_bit_6_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x40
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020150dc */
.global z80_ix_iy_cb_set_bit_6_indexed_memory_to_e
z80_ix_iy_cb_set_bit_6_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x40
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02015118 */
.global z80_ix_iy_cb_set_bit_6_indexed_memory_to_h
z80_ix_iy_cb_set_bit_6_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    orr        r1, r0, #0x40
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02015158 */
.global z80_ix_iy_cb_set_bit_6_indexed_memory_to_l
z80_ix_iy_cb_set_bit_6_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    orr        r1, r0, #0x40
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02015198 */
.global z80_ix_iy_cb_set_bit_6_indexed_memory
z80_ix_iy_cb_set_bit_6_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x40
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020151d0 */
.global z80_ix_iy_cb_set_bit_6_indexed_memory_to_a
z80_ix_iy_cb_set_bit_6_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x40
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201520c */
.global z80_ix_iy_cb_set_bit_7_indexed_memory_to_b
z80_ix_iy_cb_set_bit_7_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x80
    lsl        r6, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02015248 */
.global z80_ix_iy_cb_set_bit_7_indexed_memory_to_c
z80_ix_iy_cb_set_bit_7_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x80
    lsl        r7, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02015284 */
.global z80_ix_iy_cb_set_bit_7_indexed_memory_to_d
z80_ix_iy_cb_set_bit_7_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x80
    lsl        r8, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020152c0 */
.global z80_ix_iy_cb_set_bit_7_indexed_memory_to_e
z80_ix_iy_cb_set_bit_7_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x80
    lsl        sb, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020152fc */
.global z80_ix_iy_cb_set_bit_7_indexed_memory_to_h
z80_ix_iy_cb_set_bit_7_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff0000
    orr        r1, r0, #0x80
    orr        sl, sl, r1, lsl #24
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201533c */
.global z80_ix_iy_cb_set_bit_7_indexed_memory_to_l
z80_ix_iy_cb_set_bit_7_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        sl, sl, #0xff000000
    orr        r1, r0, #0x80
    orr        sl, sl, r1, lsl #16
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201537c */
.global z80_ix_iy_cb_set_bit_7_indexed_memory
z80_ix_iy_cb_set_bit_7_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x80
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020153b4 */
.global z80_ix_iy_cb_set_bit_7_indexed_memory_to_a
z80_ix_iy_cb_set_bit_7_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    orr        r1, r0, #0x80
    lsl        r4, r1, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
