/* Menu irq. Release range 0x02001118–0x02001180. */


/* 0x02001118 */
.global configure_menu_vblank_interrupt
configure_menu_vblank_interrupt:
    push       {r4, r5, lr}
    ldr        r5, .L_02001178
    sub        sp, sp, #4
    ldr        r4, [r5]
    cmp        r4, #0
    beq        .L_02001160
    cmp        r4, #2
    mov        r0, r4
    beq        .L_02001168
.L_0200113c:
    mov        r4, #1
    mov        r0, r4
    ldr        r1, .L_0200117c
    str        r4, [r5]
    bl         irqSet
    mov        r0, r4
    add        sp, sp, #4
    pop        {r4, r5, lr}
    b          irqEnable
.L_02001160:
    bl         irqInit_arm_veneer
    b          .L_0200113c
.L_02001168:
    bl         irqDisable
    mov        r0, r4
    bl         irqClear_arm_veneer
    b          .L_0200113c
.L_02001178:
    .word 0x02098fc4
.L_0200117c:
    .word address_02000f18
