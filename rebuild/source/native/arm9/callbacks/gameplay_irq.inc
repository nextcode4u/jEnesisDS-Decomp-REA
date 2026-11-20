/* Gameplay irq. Release range 0x02000fdc–0x02001118. */


/* 0x02000fdc */
.global gameplay_vblank_interrupt
gameplay_vblank_interrupt:
    ldr        r3, .L_02001054
    push       {r4, r5, r6, lr}
    ldr        r4, [r3]
    ldr        r5, .L_02001058
    cmp        r4, #0
    ldr        r6, .L_0200105c
    popne      {r4, r5, r6, pc}
    ldr        r3, [r6]
    ldr        r2, [r5]
    add        r3, r3, #1
    add        r2, r2, #1
    str        r3, [r6]
    str        r2, [r5]
    bl         submit_fm_and_psg_write_buffers_to_arm7
    bl         copy_prepared_palette_to_main_bg_and_obj
    ldr        r3, [r5]
    ldr        r1, .L_02001060
    cmp        r3, #0x3c
    popne      {r4, r5, r6, pc}
    ldr        r3, [r1]
    ldr        r2, .L_02001064
    mov        r0, r3
    str        r3, [r2]
    str        r4, [r1]
    str        r4, [r5]
    bl         display_fps_count
    ldr        r3, .L_02001068
    str        r4, [r6]
    str        r4, [r3]
    pop        {r4, r5, r6, pc}
.L_02001054:
    .word 0x02098fa8
.L_02001058:
    .word 0x02098fb8
.L_0200105c:
    .word 0x02098fa4
.L_02001060:
    .word 0x02098fbc
.L_02001064:
    .word 0x02098fc0
.L_02001068:
    .word 0x02098fa0

/* 0x0200106c */
.global configure_gameplay_display_interrupts
configure_gameplay_display_interrupts:
    push       {r4, r5, lr}
    ldr        r5, .L_02001104
    sub        sp, sp, #4
    ldr        r4, [r5]
    cmp        r4, #0
    beq        .L_020010ec
    cmp        r4, #1
    mov        r0, r4
    beq        .L_020010f4
.L_02001090:
    mov        r3, #2
    mov        r0, r3
    mov        r4, #0x4000000
    ldr        r1, .L_02001108
    str        r3, [r5]
    bl         irqSet
    ldrh       r2, [r4, #4]
    ldr        r3, .L_0200110c
    and        r2, r2, #0x7f
    orr        r2, r2, #0xc000
    mov        ip, #0
    str        ip, [r3]
    strh       r2, [r4, #4]
    mov        r0, #4
    ldr        r1, .L_02001110
    bl         irqSet
    mov        r0, #1
    ldr        r1, .L_02001114
    bl         irqSet
    mov        r0, #7
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          irqEnable
.L_020010ec:
    bl         irqInit_arm_veneer
    b          .L_02001090
.L_020010f4:
    bl         irqDisable
    mov        r0, r4
    bl         irqClear_arm_veneer
    b          .L_02001090
.L_02001104:
    .word 0x02098fc4
.L_02001108:
    .word gameplay_hblank_interrupt
.L_0200110c:
    .word 0x020b4ce8
.L_02001110:
    .word advance_ds_display_compare_irq_phase
.L_02001114:
    .word gameplay_vblank_interrupt
