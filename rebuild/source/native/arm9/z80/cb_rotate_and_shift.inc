/* Z80 execution and prefixed instruction handlers. 0x0200e160–0x0200ee6c. */


/* 0x0200e160 */
.global z80_cb_rlc_b
z80_cb_rlc_b:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsls       r6, r6, #1
    orrhs      r6, r6, #0x1000000
    ldrb       r1, [r1, r6, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e18c */
.global z80_cb_rlc_c
z80_cb_rlc_c:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsls       r7, r7, #1
    orrhs      r7, r7, #0x1000000
    ldrb       r1, [r1, r7, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e1b8 */
.global z80_cb_rlc_d
z80_cb_rlc_d:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsls       r8, r8, #1
    orrhs      r8, r8, #0x1000000
    ldrb       r1, [r1, r8, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e1e4 */
.global z80_cb_rlc_e
z80_cb_rlc_e:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsls       sb, sb, #1
    orrhs      sb, sb, #0x1000000
    ldrb       r1, [r1, sb, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e210 */
.global z80_cb_rlc_h
z80_cb_rlc_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsls       r0, r0, #1
    orrhs      r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e248 */
.global z80_cb_rlc_l
z80_cb_rlc_l:
    lsl        r0, sl, #8
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsls       r0, r0, #1
    orrhs      r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e280 */
.global z80_cb_rlc_via_hl
z80_cb_rlc_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_0200ee68
    lsls       r0, r0, #0x19
    orrhs      r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r0, r0, #0x18
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e2cc */
.global z80_cb_rlc_a
z80_cb_rlc_a:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsls       r4, r4, #1
    orrhs      r4, r4, #0x1000000
    ldrb       r1, [r1, r4, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e2f8 */
.global z80_cb_rrc_b
z80_cb_rrc_b:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsrs       r6, r6, #0x19
    orrhs      r6, r6, #0x80
    ldrb       r1, [r1, r6]
    orrhs      r5, r5, #1
    lsls       r6, r6, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e328 */
.global z80_cb_rrc_c
z80_cb_rrc_c:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsrs       r7, r7, #0x19
    orrhs      r7, r7, #0x80
    ldrb       r1, [r1, r7]
    orrhs      r5, r5, #1
    lsls       r7, r7, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e358 */
.global z80_cb_rrc_d
z80_cb_rrc_d:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsrs       r8, r8, #0x19
    orrhs      r8, r8, #0x80
    ldrb       r1, [r1, r8]
    orrhs      r5, r5, #1
    lsls       r8, r8, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e388 */
.global z80_cb_rrc_e
z80_cb_rrc_e:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsrs       sb, sb, #0x19
    orrhs      sb, sb, #0x80
    ldrb       r1, [r1, sb]
    orrhs      r5, r5, #1
    lsls       sb, sb, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e3b8 */
.global z80_cb_rrc_h
z80_cb_rrc_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsrs       r0, r0, #0x19
    orrhs      r0, r0, #0x80
    ldrb       r1, [r1, r0]
    orrhs      r5, r5, #1
    lsls       r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e3f4 */
.global z80_cb_rrc_l
z80_cb_rrc_l:
    lsl        r0, sl, #8
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsrs       r0, r0, #0x19
    orrhs      r0, r0, #0x80
    ldrb       r1, [r1, r0]
    orrhs      r5, r5, #1
    lsls       r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e430 */
.global z80_cb_rrc_via_hl
z80_cb_rrc_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_0200ee68
    lsrs       r0, r0, #1
    orrhs      r0, r0, #0x80
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #0x81
    orr        r5, r5, r1
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e478 */
.global z80_cb_rrc_a
z80_cb_rrc_a:
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    lsrs       r4, r4, #0x19
    orrhs      r4, r4, #0x80
    ldrb       r1, [r1, r4]
    orrhs      r5, r5, #1
    lsls       r4, r4, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e4a8 */
.global z80_cb_rl_b
z80_cb_rl_b:
    ldr        r1, .L_0200ee68
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r6, r6, #0x800000
    lsls       r6, r6, #1
    ldrb       r1, [r1, r6, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e4d8 */
.global z80_cb_rl_c
z80_cb_rl_c:
    ldr        r1, .L_0200ee68
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r7, r7, #0x800000
    lsls       r7, r7, #1
    ldrb       r1, [r1, r7, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e508 */
.global z80_cb_rl_d
z80_cb_rl_d:
    ldr        r1, .L_0200ee68
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r8, r8, #0x800000
    lsls       r8, r8, #1
    ldrb       r1, [r1, r8, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e538 */
.global z80_cb_rl_e
z80_cb_rl_e:
    ldr        r1, .L_0200ee68
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      sb, sb, #0x800000
    lsls       sb, sb, #1
    ldrb       r1, [r1, sb, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e568 */
.global z80_cb_rl_h
z80_cb_rl_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_0200ee68
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r0, r0, #0x800000
    lsls       r0, r0, #1
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e5a4 */
.global z80_cb_rl_l
z80_cb_rl_l:
    lsl        r0, sl, #8
    ldr        r1, .L_0200ee68
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r0, r0, #0x800000
    lsls       r0, r0, #1
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e5e0 */
.global z80_cb_rl_via_hl
z80_cb_rl_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    and        r1, r5, #1
    lsls       r0, r0, #0x19
    orr        r0, r0, r1, lsl #24
    ldr        r1, .L_0200ee68
    bic        r5, r5, #0xd7
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    lsr        r0, r0, #0x18
    orr        r5, r5, r1
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e630 */
.global z80_cb_rl_a
z80_cb_rl_a:
    ldr        r1, .L_0200ee68
    tst        r5, #1
    bic        r5, r5, #0xd7
    orrne      r4, r4, #0x800000
    lsls       r4, r4, #1
    ldrb       r1, [r1, r4, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e660 */
.global z80_cb_rr_b
z80_cb_rr_b:
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r6, r6, #0x19
    orr        r6, r6, r1, lsl #7
    ldr        r1, .L_0200ee68
    lsl        r6, r6, #0x18
    ldrb       r1, [r1, r6, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e694 */
.global z80_cb_rr_c
z80_cb_rr_c:
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r7, r7, #0x19
    orr        r7, r7, r1, lsl #7
    ldr        r1, .L_0200ee68
    lsl        r7, r7, #0x18
    ldrb       r1, [r1, r7, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e6c8 */
.global z80_cb_rr_d
z80_cb_rr_d:
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r8, r8, #0x19
    orr        r8, r8, r1, lsl #7
    ldr        r1, .L_0200ee68
    lsl        r8, r8, #0x18
    ldrb       r1, [r1, r8, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e6fc */
.global z80_cb_rr_e
z80_cb_rr_e:
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       sb, sb, #0x19
    orr        sb, sb, r1, lsl #7
    ldr        r1, .L_0200ee68
    lsl        sb, sb, #0x18
    ldrb       r1, [r1, sb, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e730 */
.global z80_cb_rr_h
z80_cb_rr_h:
    and        r0, sl, #0xff000000
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r0, r0, #0x19
    orr        r0, r0, r1, lsl #7
    ldr        r1, .L_0200ee68
    lsl        r0, r0, #0x18
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e770 */
.global z80_cb_rr_l
z80_cb_rr_l:
    lsl        r0, sl, #8
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r0, r0, #0x19
    orr        r0, r0, r1, lsl #7
    ldr        r1, .L_0200ee68
    lsl        r0, r0, #0x18
    ldrb       r1, [r1, r0, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e7b0 */
.global z80_cb_rr_via_hl
z80_cb_rr_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_0200ee68
    tst        r5, #1
    orrne      r0, r0, #0x100
    lsrs       r0, r0, #1
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e7fc */
.global z80_cb_rr_a
z80_cb_rr_a:
    and        r1, r5, #1
    bic        r5, r5, #0xd7
    lsrs       r4, r4, #0x19
    orr        r4, r4, r1, lsl #7
    ldr        r1, .L_0200ee68
    lsl        r4, r4, #0x18
    ldrb       r1, [r1, r4, lsr #24]
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e830 */
.global z80_cb_sla_b
z80_cb_sla_b:
    ldr        r1, .L_0200ee68
    lsls       r6, r6, #1
    ldrb       r1, [r1, r6, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e858 */
.global z80_cb_sla_c
z80_cb_sla_c:
    ldr        r1, .L_0200ee68
    lsls       r7, r7, #1
    ldrb       r1, [r1, r7, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e880 */
.global z80_cb_sla_d
z80_cb_sla_d:
    ldr        r1, .L_0200ee68
    lsls       r8, r8, #1
    ldrb       r1, [r1, r8, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e8a8 */
.global z80_cb_sla_e
z80_cb_sla_e:
    ldr        r1, .L_0200ee68
    lsls       sb, sb, #1
    ldrb       r1, [r1, sb, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e8d0 */
.global z80_cb_sla_h
z80_cb_sla_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_0200ee68
    lsls       r0, r0, #1
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e904 */
.global z80_cb_sla_l
z80_cb_sla_l:
    lsl        r0, sl, #8
    ldr        r1, .L_0200ee68
    lsls       r0, r0, #1
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e938 */
.global z80_cb_sla_via_hl
z80_cb_sla_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_0200ee68
    lsls       r0, r0, #0x19
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    lsr        r0, r0, #0x18
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e980 */
.global z80_cb_sla_a
z80_cb_sla_a:
    ldr        r1, .L_0200ee68
    lsls       r4, r4, #1
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e9a8 */
.global z80_cb_sra_b
z80_cb_sra_b:
    ldr        r1, .L_0200ee68
    asrs       r6, r6, #0x19
    ldrb       r1, [r1, r6]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r6, r6, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200e9d4 */
.global z80_cb_sra_c
z80_cb_sra_c:
    ldr        r1, .L_0200ee68
    asrs       r7, r7, #0x19
    ldrb       r1, [r1, r7]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r7, r7, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ea00 */
.global z80_cb_sra_d
z80_cb_sra_d:
    ldr        r1, .L_0200ee68
    asrs       r8, r8, #0x19
    ldrb       r1, [r1, r8]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r8, r8, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ea2c */
.global z80_cb_sra_e
z80_cb_sra_e:
    ldr        r1, .L_0200ee68
    asrs       sb, sb, #0x19
    ldrb       r1, [r1, sb]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        sb, sb, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ea58 */
.global z80_cb_sra_h
z80_cb_sra_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_0200ee68
    asrs       r0, r0, #0x19
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ea90 */
.global z80_cb_sra_l
z80_cb_sra_l:
    lsl        r0, sl, #8
    ldr        r1, .L_0200ee68
    asrs       r0, r0, #0x19
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200eac8 */
.global z80_cb_sra_via_hl
z80_cb_sra_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_0200ee68
    lsl        r0, r0, #0x18
    asrs       r0, r0, #0x19
    and        r0, r0, #0xff
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200eb14 */
.global z80_cb_sra_a
z80_cb_sra_a:
    ldr        r1, .L_0200ee68
    asrs       r4, r4, #0x19
    ldrb       r1, [r1, r4]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r4, r4, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200eb40 */
.global z80_cb_sll_b
z80_cb_sll_b:
    ldr        r1, .L_0200ee68
    lsls       r6, r6, #1
    orr        r6, r6, #0x1000000
    ldrb       r1, [r1, r6, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200eb6c */
.global z80_cb_sll_c
z80_cb_sll_c:
    ldr        r1, .L_0200ee68
    lsls       r7, r7, #1
    orr        r7, r7, #0x1000000
    ldrb       r1, [r1, r7, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200eb98 */
.global z80_cb_sll_d
z80_cb_sll_d:
    ldr        r1, .L_0200ee68
    lsls       r8, r8, #1
    orr        r8, r8, #0x1000000
    ldrb       r1, [r1, r8, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ebc4 */
.global z80_cb_sll_e
z80_cb_sll_e:
    ldr        r1, .L_0200ee68
    lsls       sb, sb, #1
    orr        sb, sb, #0x1000000
    ldrb       r1, [r1, sb, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ebf0 */
.global z80_cb_sll_h
z80_cb_sll_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_0200ee68
    lsls       r0, r0, #1
    orr        r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ec28 */
.global z80_cb_sll_l
z80_cb_sll_l:
    lsl        r0, sl, #8
    ldr        r1, .L_0200ee68
    lsls       r0, r0, #1
    orr        r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ec60 */
.global z80_cb_sll_via_hl
z80_cb_sll_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_0200ee68
    lsls       r0, r0, #0x19
    orr        r0, r0, #0x1000000
    ldrb       r1, [r1, r0, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsr        r0, r0, #0x18
    orr        r5, r5, r1
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ecac */
.global z80_cb_sll_a
z80_cb_sll_a:
    ldr        r1, .L_0200ee68
    lsls       r4, r4, #1
    orr        r4, r4, #0x1000000
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ecd8 */
.global z80_cb_srl_b
z80_cb_srl_b:
    ldr        r1, .L_0200ee68
    lsrs       r6, r6, #0x19
    ldrb       r1, [r1, r6]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r6, r6, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ed04 */
.global z80_cb_srl_c
z80_cb_srl_c:
    ldr        r1, .L_0200ee68
    lsrs       r7, r7, #0x19
    ldrb       r1, [r1, r7]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r7, r7, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ed30 */
.global z80_cb_srl_d
z80_cb_srl_d:
    ldr        r1, .L_0200ee68
    lsrs       r8, r8, #0x19
    ldrb       r1, [r1, r8]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r8, r8, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ed5c */
.global z80_cb_srl_e
z80_cb_srl_e:
    ldr        r1, .L_0200ee68
    lsrs       sb, sb, #0x19
    ldrb       r1, [r1, sb]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        sb, sb, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ed88 */
.global z80_cb_srl_h
z80_cb_srl_h:
    and        r0, sl, #0xff000000
    ldr        r1, .L_0200ee68
    lsrs       r0, r0, #0x19
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff0000
    orr        sl, sl, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200edc0 */
.global z80_cb_srl_l
z80_cb_srl_l:
    lsl        r0, sl, #8
    ldr        r1, .L_0200ee68
    lsrs       r0, r0, #0x19
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r0, r0, #0x18
    orr        r5, r5, r1
    and        sl, sl, #0xff000000
    orr        sl, sl, r0, lsr #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200edf8 */
.global z80_cb_srl_via_hl
z80_cb_srl_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    ldr        r1, .L_0200ee68
    lsrs       r0, r0, #1
    ldrb       r1, [r1, r0]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    orr        r5, r5, r1
    mov        r1, r0
    cmp        sl, #0x20000000
    blhs       route_z80_mapped_byte_write_from_r10
    strb       r1, [r3, sl, lsr #16]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xf0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x0200ee3c */
.global z80_cb_srl_a
z80_cb_srl_a:
    ldr        r1, .L_0200ee68
    lsrs       r4, r4, #0x19
    ldrb       r1, [r1, r4]
    bic        r5, r5, #0xd7
    orrhs      r5, r5, #1
    lsl        r4, r4, #0x18
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
.L_0200ee68:
    .word z80_result_flags
