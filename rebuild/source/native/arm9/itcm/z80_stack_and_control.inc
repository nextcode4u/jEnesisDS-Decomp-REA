/* ARM9 tightly coupled instruction memory code. 0x01001fe0–0x01002cd0. */


/* 0x01001fe0 */
.global z80_ret_nz
z80_ret_nz:
    tst        r5, #0x40
    bne        .L_01002c20
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002010 */
.global z80_pop_bc
z80_pop_bc:
    ldrb       r1, [ip], #1
    ldrb       r0, [ip], #1
    orr        r0, r1, r0, lsl #8
    lsl        r6, r0, #0x10
    lsl        r7, r0, #0x18
    and        r6, r6, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002040 */
.global z80_jp_nz
z80_jp_nz:
    tst        r5, #0x40
    bne        .L_01002c00
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002070 */
.global z80_jp_absolute
z80_jp_absolute:
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01002090 */
.global z80_call_nz
z80_call_nz:
    tst        r5, #0x40
    bne        .L_01002c00
    sub        lr, fp, r3
    add        lr, lr, #2
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x110000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010020d0 */
.global z80_push_bc
z80_push_bc:
    orr        r0, r6, r7, lsr #8
    lsr        r0, r0, #0x10
    lsr        r1, r0, #8
    strb       r1, [ip, #-1]!
    strb       r0, [ip, #-1]!
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002100 */
.global z80_add_a_imm8
z80_add_a_imm8:
    ldrb       r0, [fp], #1
    lsl        r0, r0, #0x18
    bic        r5, r5, #0xd7
    adds       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01002130 */
.global z80_rst_00
z80_rst_00:
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    add        fp, r3, #0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002160 */
.global z80_ret_z
z80_ret_z:
    tst        r5, #0x40
    beq        .L_01002c20
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002190 */
.global z80_ret
z80_ret:
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010021b0 */
.global z80_jp_z
z80_jp_z:
    tst        r5, #0x40
    beq        .L_01002c00
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010021e0 */
.global z80_dispatch_cb
z80_dispatch_cb:
    ldrb       r0, [fp], #1
    add        r1, r2, #0x400
    ldr        pc, [r1, r0, lsl #2]
    andeq      r0, r0, r0

/* 0x010021f0 */
.global z80_call_z
z80_call_z:
    tst        r5, #0x40
    beq        .L_01002c00
    sub        lr, fp, r3
    add        lr, lr, #2
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x110000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01002230 */
.global z80_call_absolute
z80_call_absolute:
    sub        lr, fp, r3
    add        lr, lr, #2
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x110000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002270 */
.global z80_adc_a_imm8
z80_adc_a_imm8:
    ldrb       r0, [fp], #1
    lsl        r0, r0, #0x18
    lsrs       r1, r5, #1
    bic        r5, r5, #0xd7
    addshs     r4, r4, #0x1000000
    orrhs      r5, r5, #1
    orrvs      r5, r5, #4
    adds       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrhs      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010022b0 */
.global z80_rst_08
z80_rst_08:
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    add        fp, r3, #8
    add        fp, r3, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010022e0 */
.global z80_ret_nc
z80_ret_nc:
    tst        r5, #1
    bne        .L_01002c20
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002310 */
.global z80_pop_de
z80_pop_de:
    ldrb       r1, [ip], #1
    ldrb       r0, [ip], #1
    orr        r0, r1, r0, lsl #8
    lsl        r8, r0, #0x10
    lsl        sb, r0, #0x18
    and        r8, r8, #0xff000000
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002340 */
.global z80_jp_nc
z80_jp_nc:
    tst        r5, #1
    bne        .L_01002c00
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002370 */
.global z80_out_port_imm_a
z80_out_port_imm_a:
    subs       r6, r6, #0x1000000
    ldrsbne    r0, [fp], #1
    subne      r5, r5, #0x50000
    addeq      fp, fp, #1
    addne      fp, fp, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010023a0 */
.global z80_call_nc
z80_call_nc:
    tst        r5, #1
    bne        .L_01002c00
    sub        lr, fp, r3
    add        lr, lr, #2
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x110000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010023e0 */
.global z80_push_de
z80_push_de:
    orr        r0, r8, sb, lsr #8
    lsr        r0, r0, #0x10
    lsr        r1, r0, #8
    strb       r1, [ip, #-1]!
    strb       r0, [ip, #-1]!
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002410 */
.global z80_sub_a_imm8
z80_sub_a_imm8:
    ldrb       r0, [fp], #1
    lsl        r0, r0, #0x18
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002450 */
.global z80_rst_10
z80_rst_10:
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    add        fp, r3, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002480 */
.global z80_ret_c
z80_ret_c:
    tst        r5, #1
    beq        .L_01002c20
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010024b0 */
.global z80_exx
z80_exx:
    ldr        r1, [sp, #0x50]
    orr        r0, r6, r7, lsr #8
    str        r0, [sp, #0x50]
    and        r6, r1, #0xff000000
    lsl        r7, r1, #8
    ldr        r1, [sp, #0x54]
    orr        r0, r8, sb, lsr #8
    str        r0, [sp, #0x54]
    and        r8, r1, #0xff000000
    lsl        sb, r1, #8
    ldr        r1, [sp, #0x58]
    str        sl, [sp, #0x58]
    mov        sl, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002500 */
.global z80_jp_c
z80_jp_c:
    tst        r5, #1
    beq        .L_01002c00
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002530 */
.global z80_in_a_port_imm
z80_in_a_port_imm:
    ldrb       r0, [fp], #1
    orr        r0, r0, r4, lsr #16
    mov        r0, #0xff
    lsl        r4, r0, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01002550 */
.global z80_call_c
z80_call_c:
    tst        r5, #1
    beq        .L_01002c00
    sub        lr, fp, r3
    add        lr, lr, #2
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x110000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01002590 */
.global z80_dispatch_dd
z80_dispatch_dd:
    ldrb       r1, [fp], #1
    add        r0, r2, #0xc00
    ldr        r1, [r0, r1, lsl #2]
    add        lr, sp, #0x2c
    ldr        r0, [lr]
    bx         r1
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010025b0 */
.global z80_sbc_a_imm8
z80_sbc_a_imm8:
    ldrb       r0, [fp], #1
    lsl        r0, r0, #0x18
    and        lr, r5, #1
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    subs       r4, r4, lr, lsl #24
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    subs       r4, r4, r0
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    eorvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002600 */
.global z80_rst_18
z80_rst_18:
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    add        fp, r3, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002630 */
.global z80_ret_po
z80_ret_po:
    tst        r5, #4
    bne        .L_01002c20
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002660 */
.global z80_pop_hl
z80_pop_hl:
    ldrb       r1, [ip], #1
    ldrb       r0, [ip], #1
    orr        r0, r1, r0, lsl #8
    lsl        sl, r0, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01002680 */
.global z80_jp_po
z80_jp_po:
    tst        r5, #4
    bne        .L_01002c00
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010026b0 */
.global z80_exchange_stack_hl
z80_exchange_stack_hl:
    lsr        r0, sl, #0x10
    ldrb       lr, [ip]
    strb       r0, [ip]
    ldrb       sl, [ip, #1]
    lsr        r0, r0, #8
    strb       r0, [ip, #1]
    orr        sl, lr, sl, lsl #8
    lsl        sl, sl, #0x10
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x130000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x010026e0 */
.global z80_call_po
z80_call_po:
    tst        r5, #4
    bne        .L_01002c00
    sub        lr, fp, r3
    add        lr, lr, #2
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x110000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01002720 */
.global z80_push_hl
z80_push_hl:
    lsr        r0, sl, #0x10
    lsr        r1, r0, #8
    strb       r1, [ip, #-1]!
    strb       r0, [ip, #-1]!
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01002740 */
.global z80_and_a_imm8
z80_and_a_imm8:
    ldrb       r0, [fp], #1
    lsl        r0, r0, #0x18
    ldr        r1, .L_01002bf4
    and        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01002770 */
.global z80_rst_20
z80_rst_20:
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    add        fp, r3, #0x20
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010027a0 */
.global z80_ret_pe
z80_ret_pe:
    tst        r5, #4
    beq        .L_01002c20
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010027d0 */
.global z80_jp_via_hl
z80_jp_via_hl:
    add        fp, r3, sl, lsr #16
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010027f0 */
.global z80_jp_pe
z80_jp_pe:
    tst        r5, #4
    beq        .L_01002c00
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002820 */
.global z80_exchange_de_hl
z80_exchange_de_hl:
    mov        r0, sl
    mov        sl, r8
    orr        sl, sl, sb, lsr #8
    and        r8, r0, #0xff000000
    lsl        sb, r0, #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002850 */
.global z80_call_pe
z80_call_pe:
    tst        r5, #4
    beq        .L_01002c00
    sub        lr, fp, r3
    add        lr, lr, #2
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x110000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01002890 */
.global z80_dispatch_ed
z80_dispatch_ed:
    ldrb       r0, [fp], #1
    add        r1, r2, #0x800
    ldr        pc, [r1, r0, lsl #2]
    andeq      r0, r0, r0

/* 0x010028a0 */
.global z80_xor_a_imm8
z80_xor_a_imm8:
    ldrb       r0, [fp], #1
    lsl        r0, r0, #0x18
    ldr        r1, .L_01002bf4
    eor        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010028d0 */
.global z80_rst_28
z80_rst_28:
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    add        fp, r3, #0x28
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002900 */
.global z80_ret_p
z80_ret_p:
    tst        r5, #0x80
    bne        .L_01002c20
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002930 */
.global z80_pop_af
z80_pop_af:
    ldrb       r1, [ip], #1
    ldrb       r0, [ip], #1
    orr        r0, r1, r0, lsl #8
    ror        r4, r0, #8
    bic        r5, r5, #0xd7
    orr        r5, r5, r4, lsr #24
    lsl        r4, r4, #0x18
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01002960 */
.global z80_jp_p
z80_jp_p:
    tst        r5, #0x80
    bne        .L_01002c00
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002990 */
.global z80_disable_interrupts
z80_disable_interrupts:
    ldr        r0, [sp, #0x44]
    bic        r0, r0, #0xc
    str        r0, [sp, #0x44]
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x40000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010029b0 */
.global z80_call_p
z80_call_p:
    tst        r5, #0x80
    bne        .L_01002c00
    sub        lr, fp, r3
    add        lr, lr, #2
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x110000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x010029f0 */
.global z80_push_af
z80_push_af:
    and        r0, r5, #0xff
    orr        r0, r0, r4, lsr #16
    lsr        r1, r0, #8
    strb       r1, [ip, #-1]!
    strb       r0, [ip, #-1]!
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002a20 */
.global z80_or_a_imm8
z80_or_a_imm8:
    ldrb       r0, [fp], #1
    lsl        r0, r0, #0x18
    ldr        r1, .L_01002bf4
    orr        r4, r4, r0
    ldrb       r1, [r1, r4, lsr #24]
    bic        r5, r5, #0xd7
    orr        r5, r5, r1
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01002a50 */
.global z80_rst_30
z80_rst_30:
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    add        fp, r3, #0x30
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002a80 */
.global z80_ret_m
z80_ret_m:
    tst        r5, #0x80
    beq        .L_01002c20
    ldrb       fp, [ip], #1
    ldrb       lr, [ip], #1
    add        fp, r3, fp
    add        fp, fp, lr, lsl #8
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002ab0 */
.global z80_ld_sp_hl
z80_ld_sp_hl:
    add        ip, r3, sl, lsr #16
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x60000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002ad0 */
.global z80_jp_m
z80_jp_m:
    tst        r5, #0x80
    beq        .L_01002c00
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002b00 */
.global z80_enable_interrupts
z80_enable_interrupts:
    ldr        r0, [sp, #0x44]
    orr        r0, r0, #0xc
    str        r0, [sp, #0x44]
    asr        r0, r5, #0x10
    str        r0, [sp, #0x28]
    and        r5, r5, #0xff
    ldrb       r0, [fp], #1
    sub        r5, r5, #0x40000
    ldr        pc, [r2, r0, lsl #2]
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002b30 */
.global z80_call_m
z80_call_m:
    tst        r5, #0x80
    beq        .L_01002c00
    sub        lr, fp, r3
    add        lr, lr, #2
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    ldrb       r0, [fp], #1
    ldrb       lr, [fp], #1
    orr        r0, r0, lr, lsl #8
    add        fp, r3, r0
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x110000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0

/* 0x01002b70 */
.global z80_dispatch_fd
z80_dispatch_fd:
    ldrb       r1, [fp], #1
    add        r0, r2, #0xc00
    ldr        r1, [r0, r1, lsl #2]
    add        lr, sp, #0x30
    ldr        r0, [lr]
    bx         r1
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002b90 */
.global z80_cp_a_imm8
z80_cp_a_imm8:
    ldrb       r0, [fp], #1
    lsl        r0, r0, #0x18
    cmp        r4, r0
    bic        r5, r5, #0xd7
    orr        r5, r5, #2
    orrmi      r5, r5, #0x80
    orreq      r5, r5, #0x40
    orrlo      r5, r5, #1
    orrvs      r5, r5, #4
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x70000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01002bd0 */
.global z80_rst_38
z80_rst_38:
    sub        lr, fp, r3
    lsr        r1, lr, #8
    strb       r1, [ip, #-1]!
    strb       lr, [ip, #-1]!
    add        fp, r3, #0x38
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xb0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
.L_01002bf4:
    .word z80_result_flags
    andeq      r0, r0, r0
    andeq      r0, r0, r0
.L_01002c00:
    add        fp, fp, #2
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xa0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0
.L_01002c20:
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x50000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01002c30 */
.global z80_cb_test_bit_0_via_hl
z80_cb_test_bit_0_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x1000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01002c60 */
.global z80_cb_test_bit_0_a
z80_cb_test_bit_0_a:
    bic        r5, r5, #0xd6
    ands       r1, r4, #0x1000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01002c80 */
.global z80_cb_test_bit_1_via_hl
z80_cb_test_bit_1_via_hl:
    cmp        sl, #0x20000000
    blhs       dispatch_z80_mapped_read_from_r10
    ldrb       r0, [r3, sl, lsr #16]
    bic        r5, r5, #0xd6
    lsl        r1, r0, #0x18
    ands       r1, r1, #0x2000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0xc0000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget

/* 0x01002cb0 */
.global z80_cb_test_bit_1_a
z80_cb_test_bit_1_a:
    bic        r5, r5, #0xd6
    ands       r1, r4, #0x2000000
    orreq      r5, r5, #0x44
    orrmi      r5, r5, #0x80
    ldrb       r0, [fp], #1
    subs       r5, r5, #0x80000
    ldrgt      pc, [r2, r0, lsl #2]
    b          finish_z80_cycle_budget
