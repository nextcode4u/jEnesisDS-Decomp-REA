/* Z80 execution and prefixed instruction handlers. 0x02011d3c–0x02013410. */


/* 0x02011d3c */
.global z80_ix_iy_cb_rlc_indexed_memory_to_b
z80_ix_iy_cb_rlc_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r6, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsls       r6, r6, #1
    orrhs      r6, r6, #0x1000000
    ldrb       r1, [r1, r6, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r6, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011d94 */
.global z80_ix_iy_cb_rlc_indexed_memory_to_c
z80_ix_iy_cb_rlc_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r7, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsls       r7, r7, #1
    orrhs      r7, r7, #0x1000000
    ldrb       r1, [r1, r7, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r7, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011dec */
.global z80_ix_iy_cb_rlc_indexed_memory_to_d
z80_ix_iy_cb_rlc_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r8, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsls       r8, r8, #1
    orrhs      r8, r8, #0x1000000
    ldrb       r1, [r1, r8, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r8, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011e44 */
.global z80_ix_iy_cb_rlc_indexed_memory_to_e
z80_ix_iy_cb_rlc_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        sb, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsls       sb, sb, #1
    orrhs      sb, sb, #0x1000000
    ldrb       r1, [r1, sb, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, sb, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011e9c */
.global z80_ix_iy_cb_rlc_indexed_memory_to_h
z80_ix_iy_cb_rlc_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsls       r0, r0, #1
    orrhs      r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011efc */
.global z80_ix_iy_cb_rlc_indexed_memory_to_l
z80_ix_iy_cb_rlc_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsls       r0, r0, #1
    orrhs      r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011f5c */
.global z80_ix_iy_cb_rlc_indexed_memory
z80_ix_iy_cb_rlc_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    ldr        r1, .L_02012464
    lsls       r0, r0, #0x19
    orrhs      r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r0, r0, #0x18
    mov        r1, r0
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02011fb4 */
.global z80_ix_iy_cb_rlc_indexed_memory_to_a
z80_ix_iy_cb_rlc_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r4, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsls       r4, r4, #1
    orrhs      r4, r4, #0x1000000
    ldrb       r1, [r1, r4, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r4, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201200c */
.global z80_ix_iy_cb_rrc_indexed_memory_to_b
z80_ix_iy_cb_rrc_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r6, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsrs       r6, r6, #0x19
    orrhs      r6, r6, #0x80
    ldrb       r1, [r1, r6]
    orrhs      r5, r5, #1
    lsls       r6, r6, #0x18
    orr        r5, r5, r1
    lsr        r1, r6, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012068 */
.global z80_ix_iy_cb_rrc_indexed_memory_to_c
z80_ix_iy_cb_rrc_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r7, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsrs       r7, r7, #0x19
    orrhs      r7, r7, #0x80
    ldrb       r1, [r1, r7]
    orrhs      r5, r5, #1
    lsls       r7, r7, #0x18
    orr        r5, r5, r1
    lsr        r1, r7, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020120c4 */
.global z80_ix_iy_cb_rrc_indexed_memory_to_d
z80_ix_iy_cb_rrc_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r8, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsrs       r8, r8, #0x19
    orrhs      r8, r8, #0x80
    ldrb       r1, [r1, r8]
    orrhs      r5, r5, #1
    lsls       r8, r8, #0x18
    orr        r5, r5, r1
    lsr        r1, r8, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012120 */
.global z80_ix_iy_cb_rrc_indexed_memory_to_e
z80_ix_iy_cb_rrc_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        sb, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsrs       sb, sb, #0x19
    orrhs      sb, sb, #0x80
    ldrb       r1, [r1, sb]
    orrhs      r5, r5, #1
    lsls       sb, sb, #0x18
    orr        r5, r5, r1
    lsr        r1, sb, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201217c */
.global z80_ix_iy_cb_rrc_indexed_memory_to_h
z80_ix_iy_cb_rrc_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsrs       r0, r0, #0x19
    orrhs      r0, r0, #0x80
    ldrb       r1, [r1, r0]
    orrhs      r5, r5, #1
    lsls       r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020121e0 */
.global z80_ix_iy_cb_rrc_indexed_memory_to_l
z80_ix_iy_cb_rrc_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsrs       r0, r0, #0x19
    orrhs      r0, r0, #0x80
    ldrb       r1, [r1, r0]
    orrhs      r5, r5, #1
    lsls       r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012244 */
.global z80_ix_iy_cb_rrc_indexed_memory
z80_ix_iy_cb_rrc_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    ldr        r1, .L_02012464
    lsrs       r0, r0, #1
    orrhs      r0, r0, #0x80
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #0x81
    orr        r5, r5, r1
    mov        r1, r0
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012298 */
.global z80_ix_iy_cb_rrc_indexed_memory_to_a
z80_ix_iy_cb_rrc_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r4, r0, #0x18
    ldr        r1, .L_02012464
    bic        r5, r5, #0xd7
    lsrs       r4, r4, #0x19
    orrhs      r4, r4, #0x80
    ldrb       r1, [r1, r4]
    orrhs      r5, r5, #1
    lsls       r4, r4, #0x18
    orr        r5, r5, r1
    lsr        r1, r4, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020122f4 */
.global z80_ix_iy_cb_rl_indexed_memory_to_b
z80_ix_iy_cb_rl_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r6, r0, #0x18
    ldr        r1, .L_02012464
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r6, r6, #0x800000
    lsls       r6, r6, #1
    ldrb       r1, [r1, r6, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r6, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012350 */
.global z80_ix_iy_cb_rl_indexed_memory_to_c
z80_ix_iy_cb_rl_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r7, r0, #0x18
    ldr        r1, .L_02012464
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r7, r7, #0x800000
    lsls       r7, r7, #1
    ldrb       r1, [r1, r7, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r7, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020123ac */
.global z80_ix_iy_cb_rl_indexed_memory_to_d
z80_ix_iy_cb_rl_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r8, r0, #0x18
    ldr        r1, .L_02012464
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r8, r8, #0x800000
    lsls       r8, r8, #1
    ldrb       r1, [r1, r8, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r8, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012408 */
.global z80_ix_iy_cb_rl_indexed_memory_to_e
z80_ix_iy_cb_rl_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        sb, r0, #0x18
    ldr        r1, .L_02012464
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      sb, sb, #0x800000
    lsls       sb, sb, #1
    ldrb       r1, [r1, sb, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, sb, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
.L_02012464:
    .word address_0200de20

/* 0x02012468 */
.global z80_ix_iy_cb_rl_indexed_memory_to_h
z80_ix_iy_cb_rl_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201258c
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r0, r0, #0x800000
    lsls       r0, r0, #1
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020124cc */
.global z80_ix_iy_cb_rl_indexed_memory_to_l
z80_ix_iy_cb_rl_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201258c
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r0, r0, #0x800000
    lsls       r0, r0, #1
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012530 */
.global z80_ix_iy_cb_rl_indexed_memory
z80_ix_iy_cb_rl_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    and        r1, r5, #1
    lsls       r0, r0, #0x19
    orr        r0, r0, r1, lsl #24
    ldr        r1, .L_0201258c
    bic        r5, r5, #0xd7
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    lsr        r0, r0, #0x18
    orr        r5, r5, r1
    mov        r1, r0
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
.L_0201258c:
    .word address_0200de20

/* 0x02012590 */
.global z80_ix_iy_cb_rl_indexed_memory_to_a
z80_ix_iy_cb_rl_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r4, r0, #0x18
    ldr        r1, .L_0201340c
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r4, r4, #0x800000
    lsls       r4, r4, #1
    ldrb       r1, [r1, r4, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r4, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020125ec */
.global z80_ix_iy_cb_rr_indexed_memory_to_b
z80_ix_iy_cb_rr_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r6, r0, #0x18
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r6, r6, #0x19
    orr        r6, r6, r1, lsl #7
    ldr        r1, .L_0201340c
    lsl        r6, r6, #0x18
    ldrb       r1, [r1, r6, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r6, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201264c */
.global z80_ix_iy_cb_rr_indexed_memory_to_c
z80_ix_iy_cb_rr_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r7, r0, #0x18
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r7, r7, #0x19
    orr        r7, r7, r1, lsl #7
    ldr        r1, .L_0201340c
    lsl        r7, r7, #0x18
    ldrb       r1, [r1, r7, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r7, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020126ac */
.global z80_ix_iy_cb_rr_indexed_memory_to_d
z80_ix_iy_cb_rr_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r8, r0, #0x18
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r8, r8, #0x19
    orr        r8, r8, r1, lsl #7
    ldr        r1, .L_0201340c
    lsl        r8, r8, #0x18
    ldrb       r1, [r1, r8, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r8, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201270c */
.global z80_ix_iy_cb_rr_indexed_memory_to_e
z80_ix_iy_cb_rr_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        sb, r0, #0x18
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       sb, sb, #0x19
    orr        sb, sb, r1, lsl #7
    ldr        r1, .L_0201340c
    lsl        sb, sb, #0x18
    ldrb       r1, [r1, sb, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, sb, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201276c */
.global z80_ix_iy_cb_rr_indexed_memory_to_h
z80_ix_iy_cb_rr_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r0, r0, #0x19
    orr        r0, r0, r1, lsl #7
    ldr        r1, .L_0201340c
    lsl        r0, r0, #0x18
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020127d4 */
.global z80_ix_iy_cb_rr_indexed_memory_to_l
z80_ix_iy_cb_rr_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r0, r0, #0x19
    orr        r0, r0, r1, lsl #7
    ldr        r1, .L_0201340c
    lsl        r0, r0, #0x18
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201283c */
.global z80_ix_iy_cb_rr_indexed_memory
z80_ix_iy_cb_rr_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    ldr        r1, .L_0201340c
    tst        r5, #1
    orrne      r0, r0, #0x100
    lsrs       r0, r0, #1
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    mov        r1, r0
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012894 */
.global z80_ix_iy_cb_rr_indexed_memory_to_a
z80_ix_iy_cb_rr_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r4, r0, #0x18
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r4, r4, #0x19
    orr        r4, r4, r1, lsl #7
    ldr        r1, .L_0201340c
    lsl        r4, r4, #0x18
    ldrb       r1, [r1, r4, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r4, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020128f4 */
.global z80_ix_iy_cb_sla_indexed_memory_to_b
z80_ix_iy_cb_sla_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r6, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r6, r6, #1
    ldrb       r1, [r1, r6, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r6, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012948 */
.global z80_ix_iy_cb_sla_indexed_memory_to_c
z80_ix_iy_cb_sla_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r7, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r7, r7, #1
    ldrb       r1, [r1, r7, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r7, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201299c */
.global z80_ix_iy_cb_sla_indexed_memory_to_d
z80_ix_iy_cb_sla_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r8, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r8, r8, #1
    ldrb       r1, [r1, r8, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r8, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020129f0 */
.global z80_ix_iy_cb_sla_indexed_memory_to_e
z80_ix_iy_cb_sla_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        sb, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       sb, sb, #1
    ldrb       r1, [r1, sb, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, sb, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012a44 */
.global z80_ix_iy_cb_sla_indexed_memory_to_h
z80_ix_iy_cb_sla_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r0, r0, #1
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012aa0 */
.global z80_ix_iy_cb_sla_indexed_memory_to_l
z80_ix_iy_cb_sla_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r0, r0, #1
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012afc */
.global z80_ix_iy_cb_sla_indexed_memory
z80_ix_iy_cb_sla_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    ldr        r1, .L_0201340c
    lsls       r0, r0, #0x19
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r0, r0, #0x18
    mov        r1, r0
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012b50 */
.global z80_ix_iy_cb_sla_indexed_memory_to_a
z80_ix_iy_cb_sla_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r4, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r4, r4, #1
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r4, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012ba4 */
.global z80_ix_iy_cb_sra_indexed_memory_to_b
z80_ix_iy_cb_sra_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r6, r0, #0x18
    ldr        r1, .L_0201340c
    asrs       r6, r6, #0x19
    ldrb       r1, [r1, r6]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r6, r6, #0x18
    orr        r5, r5, r1
    lsr        r1, r6, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012bfc */
.global z80_ix_iy_cb_sra_indexed_memory_to_c
z80_ix_iy_cb_sra_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r7, r0, #0x18
    ldr        r1, .L_0201340c
    asrs       r7, r7, #0x19
    ldrb       r1, [r1, r7]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r7, r7, #0x18
    orr        r5, r5, r1
    lsr        r1, r7, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012c54 */
.global z80_ix_iy_cb_sra_indexed_memory_to_d
z80_ix_iy_cb_sra_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r8, r0, #0x18
    ldr        r1, .L_0201340c
    asrs       r8, r8, #0x19
    ldrb       r1, [r1, r8]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r8, r8, #0x18
    orr        r5, r5, r1
    lsr        r1, r8, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012cac */
.global z80_ix_iy_cb_sra_indexed_memory_to_e
z80_ix_iy_cb_sra_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        sb, r0, #0x18
    ldr        r1, .L_0201340c
    asrs       sb, sb, #0x19
    ldrb       r1, [r1, sb]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        sb, sb, #0x18
    orr        r5, r5, r1
    lsr        r1, sb, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012d04 */
.global z80_ix_iy_cb_sra_indexed_memory_to_h
z80_ix_iy_cb_sra_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201340c
    asrs       r0, r0, #0x19
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012d64 */
.global z80_ix_iy_cb_sra_indexed_memory_to_l
z80_ix_iy_cb_sra_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201340c
    asrs       r0, r0, #0x19
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012dc4 */
.global z80_ix_iy_cb_sra_indexed_memory
z80_ix_iy_cb_sra_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    ldr        r1, .L_0201340c
    lsl        r0, r0, #0x18
    asrs       r0, r0, #0x19
    and        r0, r0, #0xff
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    mov        r1, r0
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012e1c */
.global z80_ix_iy_cb_sra_indexed_memory_to_a
z80_ix_iy_cb_sra_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r4, r0, #0x18
    ldr        r1, .L_0201340c
    asrs       r4, r4, #0x19
    ldrb       r1, [r1, r4]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r4, r4, #0x18
    orr        r5, r5, r1
    lsr        r1, r4, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012e74 */
.global z80_ix_iy_cb_sll_indexed_memory_to_b
z80_ix_iy_cb_sll_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r6, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r6, r6, #1
    orr        r6, r6, #0x1000000
    ldrb       r1, [r1, r6, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r6, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012ecc */
.global z80_ix_iy_cb_sll_indexed_memory_to_c
z80_ix_iy_cb_sll_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r7, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r7, r7, #1
    orr        r7, r7, #0x1000000
    ldrb       r1, [r1, r7, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r7, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012f24 */
.global z80_ix_iy_cb_sll_indexed_memory_to_d
z80_ix_iy_cb_sll_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r8, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r8, r8, #1
    orr        r8, r8, #0x1000000
    ldrb       r1, [r1, r8, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r8, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012f7c */
.global z80_ix_iy_cb_sll_indexed_memory_to_e
z80_ix_iy_cb_sll_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        sb, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       sb, sb, #1
    orr        sb, sb, #0x1000000
    ldrb       r1, [r1, sb, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, sb, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02012fd4 */
.global z80_ix_iy_cb_sll_indexed_memory_to_h
z80_ix_iy_cb_sll_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r0, r0, #1
    orr        r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013034 */
.global z80_ix_iy_cb_sll_indexed_memory_to_l
z80_ix_iy_cb_sll_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r0, r0, #1
    orr        r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013094 */
.global z80_ix_iy_cb_sll_indexed_memory
z80_ix_iy_cb_sll_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    ldr        r1, .L_0201340c
    lsls       r0, r0, #0x19
    orr        r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsr        r0, r0, #0x18
    orr        r5, r5, r1
    mov        r1, r0
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020130ec */
.global z80_ix_iy_cb_sll_indexed_memory_to_a
z80_ix_iy_cb_sll_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r4, r0, #0x18
    ldr        r1, .L_0201340c
    lsls       r4, r4, #1
    orr        r4, r4, #0x1000000
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r1, r4, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013144 */
.global z80_ix_iy_cb_srl_indexed_memory_to_b
z80_ix_iy_cb_srl_indexed_memory_to_b:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r6, r0, #0x18
    ldr        r1, .L_0201340c
    lsrs       r6, r6, #0x19
    ldrb       r1, [r1, r6]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r6, r6, #0x18
    orr        r5, r5, r1
    lsr        r1, r6, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201319c */
.global z80_ix_iy_cb_srl_indexed_memory_to_c
z80_ix_iy_cb_srl_indexed_memory_to_c:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r7, r0, #0x18
    ldr        r1, .L_0201340c
    lsrs       r7, r7, #0x19
    ldrb       r1, [r1, r7]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r7, r7, #0x18
    orr        r5, r5, r1
    lsr        r1, r7, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020131f4 */
.global z80_ix_iy_cb_srl_indexed_memory_to_d
z80_ix_iy_cb_srl_indexed_memory_to_d:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r8, r0, #0x18
    ldr        r1, .L_0201340c
    lsrs       r8, r8, #0x19
    ldrb       r1, [r1, r8]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r8, r8, #0x18
    orr        r5, r5, r1
    lsr        r1, r8, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0201324c */
.global z80_ix_iy_cb_srl_indexed_memory_to_e
z80_ix_iy_cb_srl_indexed_memory_to_e:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        sb, r0, #0x18
    ldr        r1, .L_0201340c
    lsrs       sb, sb, #0x19
    ldrb       r1, [r1, sb]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        sb, sb, #0x18
    orr        r5, r5, r1
    lsr        r1, sb, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020132a4 */
.global z80_ix_iy_cb_srl_indexed_memory_to_h
z80_ix_iy_cb_srl_indexed_memory_to_h:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201340c
    lsrs       r0, r0, #0x19
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0, lsl #24
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013304 */
.global z80_ix_iy_cb_srl_indexed_memory_to_l
z80_ix_iy_cb_srl_indexed_memory_to_l:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r0, r0, #0x18
    ldr        r1, .L_0201340c
    lsrs       r0, r0, #0x19
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsl #16
    lsr        r1, r0, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x02013364 */
.global z80_ix_iy_cb_srl_indexed_memory
z80_ix_iy_cb_srl_indexed_memory:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    ldr        r1, .L_0201340c
    lsrs       r0, r0, #1
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    mov        r1, r0
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x020133b4 */
.global z80_ix_iy_cb_srl_indexed_memory_to_a
z80_ix_iy_cb_srl_indexed_memory_to_a:
    mov        r1, r0
    cmp        r0, #0x2000
    blge       read_z80_mapped_byte_preserving_r1
    ldrb       r0, [r3, r0]
    mov        lr, r1
    lsl        r4, r0, #0x18
    ldr        r1, .L_0201340c
    lsrs       r4, r4, #0x19
    ldrb       r1, [r1, r4]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r4, r4, #0x18
    orr        r5, r5, r1
    lsr        r1, r4, #0x18
    mov        r0, lr
    cmp        r0, #0x2000
    blge       route_z80_mapped_byte_write
    strb       r1, [r3, r0]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x170000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
.L_0201340c:
    .word address_0200de20
