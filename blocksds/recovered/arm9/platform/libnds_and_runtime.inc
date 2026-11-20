@ FUN_0207fb70 at 0x0207fb70
    ldr r3, [pc, #4] @ 0207fb70
    ldrh r0, [r3] @ 0207fb72
    bx lr @ 0207fb74
    .byte 0x00, 0x00, 0xa0, 0x4c, 0x0b, 0x02 @ 0207fb76
.L_0207fb7c:
@ FUN_0207fb7c at 0x0207fb7c
    ldr r3, [pc, #8] @ 0207fb7c
    ldrh r0, [r3] @ 0207fb7e
    ldr r3, [pc, #8] @ 0207fb80
    ldrh r3, [r3] @ 0207fb82
    bics r0, r3 @ 0207fb84
    bx lr @ 0207fb86
    .byte 0xa0, 0x4c, 0x0b, 0x02, 0xa2, 0x4c, 0x0b, 0x02 @ 0207fb88
@ FUN_0207fb90 at 0x0207fb90
    push {r4, r5, r6, r7, lr} @ 0207fb90
    ldr r5, [pc, #0x6c] @ 0207fb92
    ldr r3, [pc, #0x6c] @ 0207fb94
    ldrh r7, [r5] @ 0207fb96
    ldr r1, [pc, #0x6c] @ 0207fb98
    strh r7, [r3] @ 0207fb9a
    ldr r3, [pc, #0x6c] @ 0207fb9c
    sub sp, #4 @ 0207fb9e
    ldrh r0, [r3] @ 0207fba0
    ldr r3, [pc, #0x6c] @ 0207fba2
    bics r1, r0 @ 0207fba4
    ldrh r4, [r3, #0x18] @ 0207fba6
    ldrh r2, [r3, #0x18] @ 0207fba8
    movs r3, #3 @ 0207fbaa
    bics r3, r4 @ 0207fbac
    lsls r3, r3, #0xa @ 0207fbae
    orrs r1, r3 @ 0207fbb0
    mvns r2, r2 @ 0207fbb2
    movs r3, #0xc0 @ 0207fbb4
    lsls r3, r3, #6 @ 0207fbb6
    lsls r2, r2, #6 @ 0207fbb8
    ands r2, r3 @ 0207fbba
    orrs r1, r2 @ 0207fbbc
    movs r3, #0x80 @ 0207fbbe
    lsls r3, r3, #6 @ 0207fbc0
    adds r6, r1, #0 @ 0207fbc2
    eors r6, r3 @ 0207fbc4
    ldr r3, [pc, #0x4c] @ 0207fbc6
    strh r6, [r5] @ 0207fbc8
    ldrb r3, [r3] @ 0207fbca
    cmp r3, #0 @ 0207fbcc
    beq .L_0207fbf8 @ 0207fbce
    cmp r7, r6 @ 0207fbd0
    beq .L_0207fbfc @ 0207fbd2
    ldr r5, [pc, #0x40] @ 0207fbd4
    ldr r4, [pc, #0x44] @ 0207fbd6
    strb r3, [r5] @ 0207fbd8
    bl .L_0207fb7c @ 0207fbda
    strh r0, [r4] @ 0207fbde
.L_0207fbe0:
    ldrb r3, [r5] @ 0207fbe0
    subs r3, #1 @ 0207fbe2
    lsls r3, r3, #0x18 @ 0207fbe4
    lsrs r3, r3, #0x18 @ 0207fbe6
    strb r3, [r5] @ 0207fbe8
    cmp r3, #0 @ 0207fbea
    bne .L_0207fbf8 @ 0207fbec
    ldr r3, [pc, #0x30] @ 0207fbee
    ldrb r3, [r3] @ 0207fbf0
    strb r3, [r5] @ 0207fbf2
    ldr r3, [pc, #0x24] @ 0207fbf4
    strh r6, [r3] @ 0207fbf6
.L_0207fbf8:
    add sp, #4 @ 0207fbf8
    pop {r4, r5, r6, r7, pc} @ 0207fbfa
.L_0207fbfc:
    ldr r5, [pc, #0x18] @ 0207fbfc
    b .L_0207fbe0 @ 0207fbfe
    .byte 0xa0, 0x4c, 0x0b, 0x02, 0xa2, 0x4c, 0x0b, 0x02, 0xff, 0x03, 0x00, 0x00, 0x30, 0x01, 0x00, 0x04 @ 0207fc00
    .byte 0x00, 0xf0, 0x7f, 0x02, 0x90, 0xf3, 0x08, 0x02, 0x92, 0xf3, 0x08, 0x02, 0xa4, 0x4c, 0x0b, 0x02 @ 0207fc10
    .byte 0x91, 0xf3, 0x08, 0x02, 0x02, 0x4b, 0x00, 0x22, 0x18, 0x88, 0x1a, 0x80, 0x70, 0x47, 0x00, 0x00 @ 0207fc20
    .byte 0xa4, 0x4c, 0x0b, 0x02, 0x04, 0x4b, 0x05, 0x4a, 0x18, 0x70, 0x05, 0x4b, 0x19, 0x70, 0x05, 0x4b @ 0207fc30
    .byte 0x18, 0x70, 0x00, 0x23, 0x13, 0x80, 0x70, 0x47, 0x90, 0xf3, 0x08, 0x02, 0xa4, 0x4c, 0x0b, 0x02 @ 0207fc40
    .byte 0x91, 0xf3, 0x08, 0x02, 0x92, 0xf3, 0x08, 0x02, 0x03, 0x4b, 0x1a, 0x88, 0x03, 0x4b, 0x10, 0x1c @ 0207fc50
    .byte 0x1b, 0x88, 0x58, 0x40, 0x90, 0x43, 0x70, 0x47, 0xa0, 0x4c, 0x0b, 0x02, 0xa2, 0x4c, 0x0b, 0x02 @ 0207fc60
@ FUN_0207fc70 at 0x0207fc70
    push {r4, r5, lr} @ 0207fc70
    ldr r4, [pc, #0x20] @ 0207fc72
    adds r5, r0, #0 @ 0207fc74
    movs r2, #0x35 @ 0207fc76
.L_0207fc78:
    ldrb r3, [r4, r2] @ 0207fc78
    cmp r3, #0 @ 0207fc7a
    bne .L_0207fc78 @ 0207fc7c
    ldrh r0, [r4, #4] @ 0207fc7e
    ldrh r1, [r4, #6] @ 0207fc80
    ldrh r2, [r4, #8] @ 0207fc82
    ldrh r3, [r4, #0xa] @ 0207fc84
    strh r0, [r5] @ 0207fc86
    adds r0, r5, #0 @ 0207fc88
    strh r3, [r5, #6] @ 0207fc8a
    strh r2, [r5, #4] @ 0207fc8c
    strh r1, [r5, #2] @ 0207fc8e
    pop {r4, r5, pc} @ 0207fc90
    .byte 0x00, 0x00, 0x00, 0xf0, 0x7f, 0x02 @ 0207fc92
@ FUN_0207fc98 at 0x0207fc98
    push {r4, r5, r6, lr} @ 0207fc98
    movs r4, #0x80 @ 0207fc9a
    negs r4, r4 @ 0207fc9c
    orrs r0, r4 @ 0207fc9e
    ldr r5, [pc, #0x28] @ 0207fca0
    lsls r0, r0, #0x18 @ 0207fca2
    lsrs r0, r0, #0x18 @ 0207fca4
    orrs r1, r4 @ 0207fca6
    ldr r6, [r5] @ 0207fca8
    lsls r1, r1, #0x18 @ 0207fcaa
    strb r0, [r5] @ 0207fcac
    ldr r0, [pc, #0x20] @ 0207fcae
    lsrs r1, r1, #0x18 @ 0207fcb0
    orrs r2, r4 @ 0207fcb2
    strb r1, [r0] @ 0207fcb4
    lsls r2, r2, #0x18 @ 0207fcb6
    ldr r1, [pc, #0x18] @ 0207fcb8
    lsrs r2, r2, #0x18 @ 0207fcba
    orrs r3, r4 @ 0207fcbc
    strb r2, [r1] @ 0207fcbe
    lsls r3, r3, #0x18 @ 0207fcc0
    ldr r2, [pc, #0x14] @ 0207fcc2
    adds r0, r6, #0 @ 0207fcc4
    lsrs r3, r3, #0x18 @ 0207fcc6
    strb r3, [r2] @ 0207fcc8
    pop {r4, r5, r6, pc} @ 0207fcca
    .byte 0x40, 0x02, 0x00, 0x04, 0x41, 0x02, 0x00, 0x04, 0x42, 0x02, 0x00, 0x04, 0x43, 0x02, 0x00, 0x04 @ 0207fccc
    .byte 0x01, 0x4b, 0x18, 0x60, 0x70, 0x47, 0x00, 0x00, 0x40, 0x02, 0x00, 0x04, 0x01, 0x4b, 0x18, 0x60 @ 0207fcdc
    .byte 0x70, 0x47, 0x00, 0x00, 0x40, 0x02, 0x00, 0x04, 0x80, 0x23, 0x5b, 0x42, 0x18, 0x43, 0x00, 0x06 @ 0207fcec
    .byte 0x01, 0x4b, 0x00, 0x0e, 0x18, 0x70, 0x70, 0x47, 0x40, 0x02, 0x00, 0x04, 0x80, 0x23, 0x5b, 0x42 @ 0207fcfc
    .byte 0x18, 0x43, 0x00, 0x06, 0x01, 0x4b, 0x00, 0x0e, 0x18, 0x70, 0x70, 0x47, 0x41, 0x02, 0x00, 0x04 @ 0207fd0c
    .byte 0x80, 0x23, 0x5b, 0x42, 0x18, 0x43, 0x00, 0x06, 0x01, 0x4b, 0x00, 0x0e, 0x18, 0x70, 0x70, 0x47 @ 0207fd1c
    .byte 0x42, 0x02, 0x00, 0x04, 0x80, 0x23, 0x5b, 0x42, 0x18, 0x43, 0x00, 0x06, 0x01, 0x4b, 0x00, 0x0e @ 0207fd2c
    .byte 0x18, 0x70, 0x70, 0x47, 0x43, 0x02, 0x00, 0x04 @ 0207fd3c
@ FUN_0207fd44 at 0x0207fd44
    movs r3, #0x80 @ 0207fd44
    negs r3, r3 @ 0207fd46
    orrs r0, r3 @ 0207fd48
    lsls r0, r0, #0x18 @ 0207fd4a
    ldr r3, [pc, #4] @ 0207fd4c
    lsrs r0, r0, #0x18 @ 0207fd4e
    strb r0, [r3] @ 0207fd50
    bx lr @ 0207fd52
    .byte 0x44, 0x02, 0x00, 0x04, 0x80, 0x23, 0x5b, 0x42, 0x18, 0x43, 0x00, 0x06, 0x01, 0x4b, 0x00, 0x0e @ 0207fd54
    .byte 0x18, 0x70, 0x70, 0x47, 0x45, 0x02, 0x00, 0x04, 0x80, 0x23, 0x5b, 0x42, 0x18, 0x43, 0x00, 0x06 @ 0207fd64
    .byte 0x01, 0x4b, 0x00, 0x0e, 0x18, 0x70, 0x70, 0x47, 0x46, 0x02, 0x00, 0x04, 0x80, 0x23, 0x5b, 0x42 @ 0207fd74
    .byte 0x18, 0x43, 0x00, 0x06, 0x01, 0x4b, 0x00, 0x0e, 0x18, 0x70, 0x70, 0x47, 0x48, 0x02, 0x00, 0x04 @ 0207fd84
    .byte 0x80, 0x23, 0x5b, 0x42, 0x18, 0x43, 0x00, 0x06, 0x01, 0x4b, 0x00, 0x0e, 0x18, 0x70, 0x70, 0x47 @ 0207fd94
    .byte 0x49, 0x02, 0x00, 0x04 @ 0207fda4
.L_0207fda8:
@ FUN_0207fda8 at 0x0207fda8
    push {r4, lr} @ 0207fda8
    movs r3, #0x40 @ 0207fdaa
    ldr r2, [pc, #0x14] @ 0207fdac
    negs r3, r3 @ 0207fdae
    ldr r4, [pc, #0x14] @ 0207fdb0
    strb r3, [r2] @ 0207fdb2
    movs r1, #0 @ 0207fdb4
.L_0207fdb6:
    ldrb r3, [r0, r1] @ 0207fdb6
    subs r2, r4, r1 @ 0207fdb8
    adds r1, #1 @ 0207fdba
    strb r3, [r2] @ 0207fdbc
    cmp r1, #8 @ 0207fdbe
    bne .L_0207fdb6 @ 0207fdc0
    pop {r4, pc} @ 0207fdc2
    .byte 0xa1, 0x01, 0x00, 0x04, 0xaf, 0x01, 0x00, 0x04 @ 0207fdc4
.L_0207fdcc:
@ FUN_0207fdcc at 0x0207fdcc
    push {r4, r5, r6, lr} @ 0207fdcc
    adds r5, r0, #0 @ 0207fdce
    adds r0, r3, #0 @ 0207fdd0
    adds r6, r1, #0 @ 0207fdd2
    adds r4, r2, #0 @ 0207fdd4
    bl .L_0207fda8 @ 0207fdd6
    ldr r3, [pc, #0x28] @ 0207fdda
    lsls r4, r4, #2 @ 0207fddc
    movs r2, #0x80 @ 0207fdde
    ldr r0, [pc, #0x24] @ 0207fde0
    str r5, [r3] @ 0207fde2
    adds r4, r4, r6 @ 0207fde4
    adds r1, r3, #0 @ 0207fde6
    lsls r2, r2, #0x10 @ 0207fde8
.L_0207fdea:
    ldr r3, [r1] @ 0207fdea
    tst r3, r2 @ 0207fdec
    beq .L_0207fdfa @ 0207fdee
    ldr r3, [r0] @ 0207fdf0
    cmp r6, r4 @ 0207fdf2
    bhs .L_0207fdf8 @ 0207fdf4
    str r3, [r6] @ 0207fdf6
.L_0207fdf8:
    adds r6, #4 @ 0207fdf8
.L_0207fdfa:
    ldr r3, [r1] @ 0207fdfa
    cmp r3, #0 @ 0207fdfc
    blt .L_0207fdea @ 0207fdfe
    pop {r4, r5, r6, pc} @ 0207fe00
    .byte 0x00, 0x00, 0xa4, 0x01, 0x00, 0x04, 0x10, 0x00, 0x10, 0x04 @ 0207fe02
@ FUN_0207fe0c at 0x0207fe0c
    push {r4, r5, r6, lr} @ 0207fe0c
    adds r5, r1, #0 @ 0207fe0e
    adds r4, r2, #0 @ 0207fe10
    adds r6, r3, #0 @ 0207fe12
    bl .L_0207fda8 @ 0207fe14
    lsls r3, r4, #1 @ 0207fe18
    adds r3, r3, r4 @ 0207fe1a
    ldr r2, [pc, #0x1c] @ 0207fe1c
    lsls r3, r3, #2 @ 0207fe1e
    adds r1, r3, r2 @ 0207fe20
    ldr r2, [pc, #0x1c] @ 0207fe22
    str r2, [r1] @ 0207fe24
    ldr r1, [pc, #0x1c] @ 0207fe26
    adds r2, r3, r1 @ 0207fe28
    str r5, [r2] @ 0207fe2a
    ldr r2, [pc, #0x18] @ 0207fe2c
    adds r3, r3, r2 @ 0207fe2e
    ldr r2, [pc, #0x18] @ 0207fe30
    str r2, [r3] @ 0207fe32
    ldr r3, [pc, #0x18] @ 0207fe34
    str r6, [r3] @ 0207fe36
    pop {r4, r5, r6, pc} @ 0207fe38
    .byte 0x00, 0x00, 0xb0, 0x00, 0x00, 0x04, 0x10, 0x00, 0x10, 0x04, 0xb4, 0x00, 0x00, 0x04, 0xb8, 0x00 @ 0207fe3a
    .byte 0x00, 0x04, 0x01, 0x00, 0x00, 0xaf, 0xa4, 0x01, 0x00, 0x04, 0x10, 0xb5, 0x0c, 0x1c, 0xff, 0xf7 @ 0207fe4a
    .byte 0xa6, 0xff, 0x06, 0x4b, 0x80, 0x22, 0x1c, 0x43, 0x06, 0x4b, 0x12, 0x04, 0x1c, 0x60, 0x19, 0x1c @ 0207fe5a
    .byte 0x0b, 0x68, 0x13, 0x42, 0xfc, 0xd0, 0x03, 0x4b, 0x18, 0x68, 0x10, 0xbd, 0x00, 0x00, 0x00, 0x00 @ 0207fe6a
    .byte 0x00, 0xa7, 0xa4, 0x01, 0x00, 0x04, 0x10, 0x00, 0x10, 0x04, 0x70, 0xb5, 0x82, 0xb0, 0x1e, 0x1c @ 0207fe7a
    .byte 0x04, 0x0e, 0x6b, 0x46, 0x9c, 0x71, 0x04, 0x0c, 0x00, 0x25, 0x5c, 0x71, 0x04, 0x0a, 0xdd, 0x71 @ 0207fe8a
    .byte 0xd8, 0x70, 0x9d, 0x70, 0x5d, 0x70, 0x1d, 0x70, 0x30, 0x1c, 0x1c, 0x71, 0xff, 0xf7, 0x91, 0xff @ 0207fe9a
    .byte 0x02, 0xb0, 0x70, 0xbd, 0x00, 0x00, 0x00, 0xb5, 0x80, 0x22, 0x81, 0xb0, 0x01, 0x1c, 0x92, 0x00 @ 0207feaa
    .byte 0x00, 0x20, 0x02, 0x4b, 0xff, 0xf7, 0xe1, 0xff, 0x01, 0xb0, 0x00, 0xbd, 0x00, 0x00, 0xff, 0x1f @ 0207feba
    .byte 0x3f, 0xa9, 0x30, 0xb5, 0x83, 0xb0, 0x05, 0x1c, 0x08, 0x22, 0x04, 0x49, 0x68, 0x46, 0x05, 0xf0 @ 0207feca
    .byte 0x56, 0xfd, 0x29, 0x1c, 0x68, 0x46, 0xff, 0xf7, 0xb8, 0xff, 0x03, 0xb0, 0x30, 0xbd, 0x7c, 0xee @ 0207feda
    .byte 0x08, 0x02, 0xf0, 0xb5, 0x5f, 0x46, 0x56, 0x46, 0x4d, 0x46, 0x44, 0x46, 0xf0, 0xb4, 0x12, 0x18 @ 0207feea
    .byte 0x83, 0xb0, 0x94, 0x46, 0x04, 0x1c, 0x0f, 0x1c, 0x01, 0x93, 0x60, 0x45, 0x63, 0xd2, 0x38, 0x4a @ 0207fefa
    .byte 0x39, 0x4b, 0x90, 0x46, 0x9b, 0x46, 0x02, 0x32, 0x80, 0x23, 0x92, 0x46, 0x99, 0x46, 0x5b, 0x46 @ 0207ff0a
    .byte 0x42, 0x46, 0x13, 0x80, 0x06, 0x23, 0x52, 0x46, 0x13, 0x70, 0x42, 0x46, 0x13, 0x88, 0x4a, 0x46 @ 0207ff1a
    .byte 0x13, 0x42, 0xfa, 0xd1, 0x43, 0x46, 0x40, 0x22, 0x1a, 0x80, 0x5a, 0x46, 0x1a, 0x80, 0x01, 0x9b @ 0207ff2a
    .byte 0x01, 0x2b, 0x4f, 0xd0, 0x02, 0x23, 0x52, 0x46, 0x2a, 0x49, 0x13, 0x70, 0x80, 0x22, 0x0b, 0x88 @ 0207ff3a
    .byte 0x13, 0x42, 0xfc, 0xd1, 0x01, 0x9b, 0x01, 0x2b, 0x08, 0xd9, 0x23, 0x04, 0x52, 0x46, 0x1b, 0x0e @ 0207ff4a
    .byte 0x24, 0x49, 0x13, 0x70, 0x80, 0x22, 0x0b, 0x88, 0x13, 0x42, 0xfc, 0xd1, 0x23, 0x06, 0x52, 0x46 @ 0207ff5a
    .byte 0x1b, 0x0e, 0x1f, 0x49, 0x13, 0x70, 0x80, 0x22, 0x0b, 0x88, 0x13, 0x42, 0xfc, 0xd1, 0x1e, 0x4d @ 0207ff6a
    .byte 0x1c, 0x4a, 0x00, 0x20, 0x80, 0x21, 0x3b, 0x78, 0x01, 0x37, 0x2b, 0x70, 0x13, 0x88, 0x0b, 0x42 @ 0207ff7a
    .byte 0xfc, 0xd1, 0x01, 0x34, 0xa4, 0x45, 0x02, 0xd9, 0x01, 0x30, 0x20, 0x28, 0xf3, 0xd1, 0x40, 0x23 @ 0207ff8a
    .byte 0x13, 0x80, 0x5b, 0x46, 0x13, 0x80, 0x12, 0x49, 0x52, 0x46, 0x05, 0x23, 0x13, 0x70, 0x80, 0x22 @ 0207ff9a
    .byte 0x0b, 0x88, 0x13, 0x42, 0xfc, 0xd1, 0x10, 0x48, 0x0e, 0x49, 0x00, 0x26, 0x80, 0x22, 0x01, 0x25 @ 0207ffaa
    .byte 0x06, 0x70, 0x0b, 0x88, 0x13, 0x42, 0xfc, 0xd1, 0x03, 0x78, 0x2b, 0x42, 0xf8, 0xd1, 0x40, 0x23 @ 0207ffba
    .byte 0x0b, 0x80, 0xa4, 0x45, 0xa3, 0xd8, 0x03, 0xb0, 0x3c, 0xbc, 0x90, 0x46, 0x99, 0x46, 0xa2, 0x46 @ 0207ffca
    .byte 0xab, 0x46, 0xf0, 0xbd, 0x23, 0x0a, 0xdb, 0x00, 0x02, 0x22, 0x13, 0x43, 0x1b, 0x06, 0x1b, 0x0e @ 0207ffda
    .byte 0xa9, 0xe7, 0xa0, 0x01, 0x00, 0x04, 0x40, 0xa0, 0xff, 0xff, 0xa2, 0x01, 0x00, 0x04, 0x70, 0xb5 @ 0207ffea
    .byte 0x14, 0x1c, 0x1e, 0x1c, 0x22, 0x4a, 0x22, 0x4b, 0x0d, 0x1c, 0x1a, 0x80, 0x01, 0x2e, 0x31, 0xd0 @ 0207fffa
    .byte 0x03, 0x22, 0x20, 0x4b, 0x1f, 0x49, 0x1a, 0x70, 0x80, 0x22, 0x0b, 0x88, 0x13, 0x42, 0xfc, 0xd1 @ 0208000a
    .byte 0x03, 0x2e, 0x2e, 0xd0, 0x01, 0x2e, 0x03, 0xd9, 0x03, 0x04, 0x1a, 0x4a, 0x1b, 0x0e, 0x13, 0x70 @ 0208001a
    .byte 0x18, 0x49, 0x0b, 0x88, 0x1a, 0x06, 0xfb, 0xd4, 0x03, 0x06, 0x16, 0x4a, 0x1b, 0x0e, 0x13, 0x70 @ 0208002a
    .byte 0x08, 0x1c, 0x80, 0x22, 0x03, 0x88, 0x13, 0x42, 0xfc, 0xd1, 0x00, 0x2c, 0x0e, 0xd0, 0x11, 0x49 @ 0208003a
    .byte 0x10, 0x48, 0x00, 0x26, 0x80, 0x22, 0x0e, 0x70, 0x03, 0x88, 0x13, 0x42, 0xfc, 0xd1, 0x0b, 0x78 @ 0208004a
    .byte 0x01, 0x3c, 0x2b, 0x70, 0x00, 0x2c, 0x01, 0xd0, 0x01, 0x35, 0xf4, 0xe7, 0x09, 0x4b, 0x40, 0x22 @ 0208005a
    .byte 0x1a, 0x80, 0x70, 0xbd, 0x03, 0x0a, 0x03, 0x22, 0xdb, 0x00, 0x13, 0x43, 0x1b, 0x06, 0x1a, 0x0e @ 0208006a
    .byte 0xc7, 0xe7, 0x03, 0x02, 0x04, 0x4a, 0x1b, 0x0e, 0x13, 0x70, 0xd1, 0xe7, 0x00, 0x00, 0x40, 0xa0 @ 0208007a
    .byte 0xff, 0xff, 0xa0, 0x01, 0x00, 0x04, 0xa2, 0x01, 0x00, 0x04, 0x70, 0x47, 0x00, 0x00 @ 0208008a
@ FUN_02080098 at 0x02080098
    push {r4, lr} @ 02080098
    adds r4, r1, #0 @ 0208009a
    cmp r0, #0 @ 0208009c
    beq .L_020800b6 @ 0208009e
    ldr r3, [pc, #0x4c] @ 020800a0
    movs r1, #0 @ 020800a2
.L_020800a4:
    ldr r2, [r3] @ 020800a4
    cmp r2, #0 @ 020800a6
    beq .L_020800b8 @ 020800a8
    cmp r0, r2 @ 020800aa
    beq .L_020800b8 @ 020800ac
    adds r1, #1 @ 020800ae
    adds r3, #8 @ 020800b0
    cmp r1, #0x19 @ 020800b2
    bne .L_020800a4 @ 020800b4
.L_020800b6:
    pop {r4, pc} @ 020800b6
.L_020800b8:
    ldr r2, [pc, #0x38] @ 020800b8
    lsls r3, r1, #3 @ 020800ba
    str r4, [r3, r2] @ 020800bc
    adds r3, r3, r2 @ 020800be
    str r0, [r3, #4] @ 020800c0
    lsls r3, r0, #0x1f @ 020800c2
    bpl .L_020800d4 @ 020800c4
    ldr r3, [pc, #0x30] @ 020800c6
    movs r1, #8 @ 020800c8
    ldrh r2, [r3] @ 020800ca
    orrs r2, r1 @ 020800cc
    lsls r2, r2, #0x10 @ 020800ce
    lsrs r2, r2, #0x10 @ 020800d0
    strh r2, [r3] @ 020800d2
.L_020800d4:
    lsls r3, r0, #0x1e @ 020800d4
    bpl .L_020800e6 @ 020800d6
    ldr r3, [pc, #0x1c] @ 020800d8
    movs r1, #0x10 @ 020800da
    ldrh r2, [r3] @ 020800dc
    orrs r2, r1 @ 020800de
    lsls r2, r2, #0x10 @ 020800e0
    lsrs r2, r2, #0x10 @ 020800e2
    strh r2, [r3] @ 020800e4
.L_020800e6:
    ldr r2, [pc, #0x14] @ 020800e6
    ldr r3, [r2] @ 020800e8
    orrs r3, r0 @ 020800ea
    str r3, [r2] @ 020800ec
    b .L_020800b6 @ 020800ee
    .byte 0xe4, 0x56, 0x00, 0x01, 0xe0, 0x56, 0x00, 0x01, 0x04, 0x00, 0x00, 0x04, 0x10, 0x02, 0x00, 0x04 @ 020800f0
@ FUN_02080100 at 0x02080100
    push {lr} @ 02080100
    ldr r3, [pc, #0x2c] @ 02080102
    ldr r2, [pc, #0x2c] @ 02080104
    adds r1, r3, #0 @ 02080106
    adds r1, #0xc8 @ 02080108
    movs r0, #0 @ 0208010a
.L_0208010c:
    str r2, [r3] @ 0208010c
    str r0, [r3, #4] @ 0208010e
    adds r3, #8 @ 02080110
    cmp r3, r1 @ 02080112
    bne .L_0208010c @ 02080114
    ldr r2, [pc, #0x20] @ 02080116
    ldr r3, [pc, #0x20] @ 02080118
    str r3, [r2] @ 0208011a
    ldr r3, [pc, #0x20] @ 0208011c
    ldr r2, [pc, #0x24] @ 0208011e
    str r0, [r3] @ 02080120
    movs r3, #1 @ 02080122
    negs r3, r3 @ 02080124
    str r3, [r2] @ 02080126
    ldr r3, [pc, #0x1c] @ 02080128
    movs r2, #1 @ 0208012a
    strh r2, [r3] @ 0208012c
    pop {pc} @ 0208012e
    .byte 0xe0, 0x56, 0x00, 0x01, 0x95, 0x00, 0x08, 0x02, 0xfc, 0x3f, 0x00, 0x0b, 0xa8, 0x57, 0x00, 0x01 @ 02080130
    .byte 0x10, 0x02, 0x00, 0x04, 0x14, 0x02, 0x00, 0x04, 0x08, 0x02, 0x00, 0x04 @ 02080140
@ FUN_0208014c at 0x0208014c
    push {lr} @ 0208014c
    ldr r1, [pc, #0x5c] @ 0208014e
    movs r2, #0 @ 02080150
    b .L_0208015c @ 02080152
.L_02080154:
    adds r2, #1 @ 02080154
    adds r1, #8 @ 02080156
    cmp r2, #0x19 @ 02080158
    beq .L_0208017e @ 0208015a
.L_0208015c:
    ldr r3, [r1] @ 0208015c
    cmp r0, r3 @ 0208015e
    bne .L_02080154 @ 02080160
    ldr r1, [pc, #0x4c] @ 02080162
    ldr r3, [pc, #0x4c] @ 02080164
    lsls r2, r2, #3 @ 02080166
    str r3, [r2, r1] @ 02080168
    lsls r3, r0, #0x1f @ 0208016a
    bmi .L_0208019c @ 0208016c
    lsls r3, r0, #0x1e @ 0208016e
    bmi .L_0208018c @ 02080170
.L_02080172:
    lsls r3, r0, #0x1d @ 02080172
    bmi .L_02080180 @ 02080174
.L_02080176:
    ldr r2, [pc, #0x40] @ 02080176
    ldr r3, [r2] @ 02080178
    bics r3, r0 @ 0208017a
    str r3, [r2] @ 0208017c
.L_0208017e:
    pop {pc} @ 0208017e
.L_02080180:
    ldr r3, [pc, #0x38] @ 02080180
    ldr r1, [pc, #0x3c] @ 02080182
    ldrh r2, [r3] @ 02080184
    ands r2, r1 @ 02080186
    strh r2, [r3] @ 02080188
    b .L_02080176 @ 0208018a
.L_0208018c:
    ldr r3, [pc, #0x2c] @ 0208018c
    ldr r1, [pc, #0x34] @ 0208018e
    ldrh r2, [r3] @ 02080190
    ands r2, r1 @ 02080192
    strh r2, [r3] @ 02080194
    lsls r3, r0, #0x1d @ 02080196
    bpl .L_02080176 @ 02080198
    b .L_02080180 @ 0208019a
.L_0208019c:
    ldr r3, [pc, #0x1c] @ 0208019c
    ldr r1, [pc, #0x28] @ 0208019e
    ldrh r2, [r3] @ 020801a0
    ands r2, r1 @ 020801a2
    strh r2, [r3] @ 020801a4
    lsls r3, r0, #0x1e @ 020801a6
    bpl .L_02080172 @ 020801a8
    b .L_0208018c @ 020801aa
    .byte 0xe4, 0x56, 0x00, 0x01, 0xe0, 0x56, 0x00, 0x01, 0x95, 0x00, 0x08, 0x02, 0x10, 0x02, 0x00, 0x04 @ 020801ac
    .byte 0x04, 0x00, 0x00, 0x04, 0xdf, 0xff, 0x00, 0x00, 0xef, 0xff, 0x00, 0x00, 0xf7, 0xff, 0x00, 0x00 @ 020801bc
@ FUN_020801cc at 0x020801cc
    push {r4, lr} @ 020801cc
    ldr r4, [pc, #0x1c] @ 020801ce
    ldr r2, [pc, #0x1c] @ 020801d0
    movs r3, #1 @ 020801d2
    movs r1, #0 @ 020801d4
    negs r3, r3 @ 020801d6
    strh r1, [r4] @ 020801d8
    str r3, [r2] @ 020801da
    ldr r3, [pc, #0x14] @ 020801dc
    str r1, [r3] @ 020801de
    ldr r3, [pc, #0x14] @ 020801e0
    str r0, [r3] @ 020801e2
    movs r3, #1 @ 020801e4
    strh r3, [r4] @ 020801e6
    pop {r4, pc} @ 020801e8
    .byte 0x00, 0x00, 0x08, 0x02, 0x00, 0x04, 0x14, 0x02, 0x00, 0x04, 0x10, 0x02, 0x00, 0x04, 0xfc, 0x3f @ 020801ea
    .byte 0x00, 0x0b @ 020801fa
@ FUN_020801fc at 0x020801fc
    push {r4, lr} @ 020801fc
    movs r4, #1 @ 020801fe
    tst r0, r4 @ 02080200
    beq .L_02080212 @ 02080202
    ldr r3, [pc, #0x3c] @ 02080204
    movs r1, #8 @ 02080206
    ldrh r2, [r3] @ 02080208
    orrs r2, r1 @ 0208020a
    lsls r2, r2, #0x10 @ 0208020c
    lsrs r2, r2, #0x10 @ 0208020e
    strh r2, [r3] @ 02080210
.L_02080212:
    lsls r3, r0, #0x1e @ 02080212
    bpl .L_02080224 @ 02080214
    ldr r3, [pc, #0x2c] @ 02080216
    movs r1, #0x10 @ 02080218
    ldrh r2, [r3] @ 0208021a
    orrs r2, r1 @ 0208021c
    lsls r2, r2, #0x10 @ 0208021e
    lsrs r2, r2, #0x10 @ 02080220
    strh r2, [r3] @ 02080222
.L_02080224:
    lsls r3, r0, #0x1d @ 02080224
    bpl .L_02080236 @ 02080226
    ldr r3, [pc, #0x18] @ 02080228
    movs r1, #0x20 @ 0208022a
    ldrh r2, [r3] @ 0208022c
    orrs r2, r1 @ 0208022e
    lsls r2, r2, #0x10 @ 02080230
    lsrs r2, r2, #0x10 @ 02080232
    strh r2, [r3] @ 02080234
.L_02080236:
    ldr r3, [pc, #0x10] @ 02080236
    ldr r2, [r3] @ 02080238
    orrs r2, r0 @ 0208023a
    str r2, [r3] @ 0208023c
    subs r3, #8 @ 0208023e
    strh r4, [r3] @ 02080240
    pop {r4, pc} @ 02080242
    .byte 0x04, 0x00, 0x00, 0x04, 0x10, 0x02, 0x00, 0x04 @ 02080244
.L_0208024c:
@ FUN_0208024c at 0x0208024c
    push {lr} @ 0208024c
    lsls r3, r0, #0x1f @ 0208024e
    bpl .L_0208025c @ 02080250
    ldr r3, [pc, #0x30] @ 02080252
    ldr r1, [pc, #0x30] @ 02080254
    ldrh r2, [r3] @ 02080256
    ands r2, r1 @ 02080258
    strh r2, [r3] @ 0208025a
.L_0208025c:
    lsls r3, r0, #0x1e @ 0208025c
    bpl .L_0208026a @ 0208025e
    ldr r3, [pc, #0x20] @ 02080260
    ldr r1, [pc, #0x28] @ 02080262
    ldrh r2, [r3] @ 02080264
    ands r2, r1 @ 02080266
    strh r2, [r3] @ 02080268
.L_0208026a:
    lsls r3, r0, #0x1d @ 0208026a
    bpl .L_02080278 @ 0208026c
    ldr r3, [pc, #0x14] @ 0208026e
    ldr r1, [pc, #0x1c] @ 02080270
    ldrh r2, [r3] @ 02080272
    ands r2, r1 @ 02080274
    strh r2, [r3] @ 02080276
.L_02080278:
    ldr r2, [pc, #0x18] @ 02080278
    ldr r3, [r2] @ 0208027a
    bics r3, r0 @ 0208027c
    str r3, [r2] @ 0208027e
    pop {pc} @ 02080280
    .byte 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0xf7, 0xff, 0x00, 0x00, 0xef, 0xff, 0x00, 0x00, 0xdf, 0xff @ 02080282
    .byte 0x00, 0x00, 0x10, 0x02, 0x00, 0x04, 0x00, 0x10, 0xa0, 0xe3, 0x00, 0x00, 0xa0, 0xe3, 0x00, 0x20 @ 02080292
    .byte 0x81, 0xe1, 0x5e, 0x2f, 0x07, 0xee, 0x20, 0x00, 0x80, 0xe2, 0x01, 0x0b, 0x50, 0xe3, 0xfa, 0xff @ 020802a2
    .byte 0xff, 0x1a, 0x01, 0x11, 0x81, 0xe2, 0x00, 0x00, 0x51, 0xe3, 0xf6, 0xff, 0xff, 0x1a, 0x1e, 0xff @ 020802b2
    .byte 0x2f, 0xe1 @ 020802c2
.L_020802c4:
@ FUN_020802c4 at 0x020802c4
.arm
    add r1, r1, r0 @ 020802c4
    bic r0, r0, #0x1f @ 020802c8
.L_020802cc:
    mcr p15, #0, r0, c7, c14, #1 @ 020802cc
    add r0, r0, #0x20 @ 020802d0
    cmp r0, r1 @ 020802d4
    blt .L_020802cc @ 020802d8
    bx lr @ 020802dc
    .byte 0x00, 0x00, 0xa0, 0xe3, 0x16, 0x0f, 0x07, 0xee, 0x1e, 0xff, 0x2f, 0xe1, 0x00, 0x10, 0x81, 0xe0 @ 020802e0
    .byte 0x1f, 0x00, 0xc0, 0xe3, 0x36, 0x0f, 0x07, 0xee, 0x20, 0x00, 0x80, 0xe2, 0x01, 0x00, 0x50, 0xe1 @ 020802f0
    .byte 0xfb, 0xff, 0xff, 0xba, 0x1e, 0xff, 0x2f, 0xe1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff @ 02080300
    .byte 0x00, 0xdf, 0x70, 0x47, 0x03, 0xdf, 0x70, 0x47, 0x04, 0xdf, 0x70, 0x47 @ 02080310
@ FUN_0208031c at 0x0208031c
.thumb
    swi #5 @ 0208031c
    bx lr @ 0208031e
    .byte 0x07, 0xdf, 0x70, 0x47, 0x08, 0xdf, 0x70, 0x47, 0x09, 0xdf, 0x70, 0x47, 0x09, 0xdf, 0x08, 0x1c @ 02080320
    .byte 0x70, 0x47, 0x0c, 0xb4, 0x09, 0xdf, 0x0c, 0xbc, 0x10, 0x60, 0x19, 0x60, 0x70, 0x47 @ 02080330
@ FUN_0208033e at 0x0208033e
    swi #0xb @ 0208033e
    bx lr @ 02080340
    .byte 0x0c, 0xdf, 0x70, 0x47, 0x0d, 0xdf, 0x70, 0x47, 0x0e, 0xdf, 0x70, 0x47, 0x0f, 0xdf, 0x70, 0x47 @ 02080342
    .byte 0x10, 0xdf, 0x70, 0x47, 0x11, 0xdf, 0x70, 0x47, 0x12, 0xdf, 0x70, 0x47, 0x13, 0xdf, 0x70, 0x47 @ 02080352
    .byte 0x14, 0xdf, 0x70, 0x47, 0x15, 0xdf, 0x70, 0x47, 0x06, 0xdf, 0x70, 0x47, 0x16, 0xdf, 0x70, 0x47 @ 02080362
    .byte 0x18, 0xdf, 0x70, 0x47, 0x1f, 0xdf, 0x70, 0x47, 0xc0, 0x46, 0xc0, 0x46, 0xc0, 0x46 @ 02080372
.L_02080380:
@ FUN_02080380 at 0x02080380
.arm
    subs r2, r1, #1 @ 02080380
    bxeq lr @ 02080384
    blo .L_02080468 @ 02080388
    cmp r0, r1 @ 0208038c
    bls .L_02080420 @ 02080390
    tst r1, r2 @ 02080394
    beq .L_0208042c @ 02080398
    tst r1, #0xe0000000 @ 0208039c
    lsleq r1, r1, #3 @ 020803a0
    moveq r3, #8 @ 020803a4
    movne r3, #1 @ 020803a8
.L_020803ac:
    cmp r1, #0x10000000 @ 020803ac
    cmplo r1, r0 @ 020803b0
    lsllo r1, r1, #4 @ 020803b4
    lsllo r3, r3, #4 @ 020803b8
    blo .L_020803ac @ 020803bc
.L_020803c0:
    cmp r1, #0x80000000 @ 020803c0
    cmplo r1, r0 @ 020803c4
    lsllo r1, r1, #1 @ 020803c8
    lsllo r3, r3, #1 @ 020803cc
    blo .L_020803c0 @ 020803d0
    mov r2, #0 @ 020803d4
.L_020803d8:
    cmp r0, r1 @ 020803d8
    subhs r0, r0, r1 @ 020803dc
    orrhs r2, r2, r3 @ 020803e0
    cmp r0, r1, lsr #1 @ 020803e4
    subhs r0, r0, r1, lsr #1 @ 020803e8
    orrhs r2, r2, r3, lsr #1 @ 020803ec
    cmp r0, r1, lsr #2 @ 020803f0
    subhs r0, r0, r1, lsr #2 @ 020803f4
    orrhs r2, r2, r3, lsr #2 @ 020803f8
    cmp r0, r1, lsr #3 @ 020803fc
    subhs r0, r0, r1, lsr #3 @ 02080400
    orrhs r2, r2, r3, lsr #3 @ 02080404
    cmp r0, #0 @ 02080408
    lsrsne r3, r3, #4 @ 0208040c
    lsrne r1, r1, #4 @ 02080410
    bne .L_020803d8 @ 02080414
    mov r0, r2 @ 02080418
    bx lr @ 0208041c
.L_02080420:
    moveq r0, #1 @ 02080420
    movne r0, #0 @ 02080424
    bx lr @ 02080428
.L_0208042c:
    cmp r1, #0x10000 @ 0208042c
    lsrhs r1, r1, #0x10 @ 02080430
    movhs r2, #0x10 @ 02080434
    movlo r2, #0 @ 02080438
    cmp r1, #0x100 @ 0208043c
    lsrhs r1, r1, #8 @ 02080440
    addhs r2, r2, #8 @ 02080444
    cmp r1, #0x10 @ 02080448
    lsrhs r1, r1, #4 @ 0208044c
    addhs r2, r2, #4 @ 02080450
    cmp r1, #4 @ 02080454
    addhi r2, r2, #3 @ 02080458
    addls r2, r2, r1, lsr #1 @ 0208045c
    lsr r0, r0, r2 @ 02080460
    bx lr @ 02080464
.L_02080468:
    str lr, [sp, #-8]! @ 02080468
    bl .L_020805d8 @ 0208046c
    mov r0, #0 @ 02080470
    ldr lr, [sp], #8 @ 02080474
    bx lr @ 02080478
.L_0208047c:
@ FUN_0208047c at 0x0208047c
    push {r0, r1, lr} @ 0208047c
    bl .L_02080380 @ 02080480
    pop {r1, r2, lr} @ 02080484
    mul r3, r2, r0 @ 02080488
    sub r1, r1, r3 @ 0208048c
    bx lr @ 02080490
.L_02080494:
@ FUN_02080494 at 0x02080494
    cmp r1, #0 @ 02080494
    eor ip, r0, r1 @ 02080498
    beq .L_020805ac @ 0208049c
    rsbmi r1, r1, #0 @ 020804a0
    subs r2, r1, #1 @ 020804a4
    beq .L_0208054c @ 020804a8
    movs r3, r0 @ 020804ac
    rsbmi r3, r0, #0 @ 020804b0
    cmp r3, r1 @ 020804b4
    bls .L_02080558 @ 020804b8
    tst r1, r2 @ 020804bc
    beq .L_02080568 @ 020804c0
    tst r1, #0xe0000000 @ 020804c4
    lsleq r1, r1, #3 @ 020804c8
    moveq r2, #8 @ 020804cc
    movne r2, #1 @ 020804d0
.L_020804d4:
    cmp r1, #0x10000000 @ 020804d4
    cmplo r1, r3 @ 020804d8
    lsllo r1, r1, #4 @ 020804dc
    lsllo r2, r2, #4 @ 020804e0
    blo .L_020804d4 @ 020804e4
.L_020804e8:
    cmp r1, #0x80000000 @ 020804e8
    cmplo r1, r3 @ 020804ec
    lsllo r1, r1, #1 @ 020804f0
    lsllo r2, r2, #1 @ 020804f4
    blo .L_020804e8 @ 020804f8
    mov r0, #0 @ 020804fc
.L_02080500:
    cmp r3, r1 @ 02080500
    subhs r3, r3, r1 @ 02080504
    orrhs r0, r0, r2 @ 02080508
    cmp r3, r1, lsr #1 @ 0208050c
    subhs r3, r3, r1, lsr #1 @ 02080510
    orrhs r0, r0, r2, lsr #1 @ 02080514
    cmp r3, r1, lsr #2 @ 02080518
    subhs r3, r3, r1, lsr #2 @ 0208051c
    orrhs r0, r0, r2, lsr #2 @ 02080520
    cmp r3, r1, lsr #3 @ 02080524
    subhs r3, r3, r1, lsr #3 @ 02080528
    orrhs r0, r0, r2, lsr #3 @ 0208052c
    cmp r3, #0 @ 02080530
    lsrsne r2, r2, #4 @ 02080534
    lsrne r1, r1, #4 @ 02080538
    bne .L_02080500 @ 0208053c
    cmp ip, #0 @ 02080540
    rsbmi r0, r0, #0 @ 02080544
    bx lr @ 02080548
.L_0208054c:
    teq ip, r0 @ 0208054c
    rsbmi r0, r0, #0 @ 02080550
    bx lr @ 02080554
.L_02080558:
    movlo r0, #0 @ 02080558
    asreq r0, ip, #0x1f @ 0208055c
    orreq r0, r0, #1 @ 02080560
    bx lr @ 02080564
.L_02080568:
    cmp r1, #0x10000 @ 02080568
    lsrhs r1, r1, #0x10 @ 0208056c
    movhs r2, #0x10 @ 02080570
    movlo r2, #0 @ 02080574
    cmp r1, #0x100 @ 02080578
    lsrhs r1, r1, #8 @ 0208057c
    addhs r2, r2, #8 @ 02080580
    cmp r1, #0x10 @ 02080584
    lsrhs r1, r1, #4 @ 02080588
    addhs r2, r2, #4 @ 0208058c
    cmp r1, #4 @ 02080590
    addhi r2, r2, #3 @ 02080594
    addls r2, r2, r1, lsr #1 @ 02080598
    cmp ip, #0 @ 0208059c
    lsr r0, r3, r2 @ 020805a0
    rsbmi r0, r0, #0 @ 020805a4
    bx lr @ 020805a8
.L_020805ac:
    str lr, [sp, #-8]! @ 020805ac
    bl .L_020805d8 @ 020805b0
    mov r0, #0 @ 020805b4
    ldr lr, [sp], #8 @ 020805b8
    bx lr @ 020805bc
.L_020805c0:
@ FUN_020805c0 at 0x020805c0
    push {r0, r1, lr} @ 020805c0
    bl .L_02080494 @ 020805c4
    pop {r1, r2, lr} @ 020805c8
    mul r3, r2, r0 @ 020805cc
    sub r1, r1, r3 @ 020805d0
    bx lr @ 020805d4
.L_020805d8:
@ FUN_020805d8 at 0x020805d8
    bx lr @ 020805d8
    .byte 0x00, 0x47, 0xc0, 0x46, 0x08, 0x47, 0xc0, 0x46, 0x10, 0x47, 0xc0, 0x46 @ 020805dc
@ FUN_020805e8 at 0x020805e8
.thumb
    bx r3 @ 020805e8
    .byte 0xc0, 0x46, 0x20, 0x47, 0xc0, 0x46, 0x28, 0x47, 0xc0, 0x46, 0x30, 0x47, 0xc0, 0x46, 0x38, 0x47 @ 020805ea
    .byte 0xc0, 0x46, 0x40, 0x47, 0xc0, 0x46, 0x48, 0x47, 0xc0, 0x46, 0x50, 0x47, 0xc0, 0x46, 0x58, 0x47 @ 020805fa
    .byte 0xc0, 0x46, 0x60, 0x47, 0xc0, 0x46, 0x68, 0x47, 0xc0, 0x46, 0x70, 0x47, 0xc0, 0x46, 0x02, 0x11 @ 0208060a
    .byte 0x21, 0xe2, 0x00, 0x00, 0x00, 0xea @ 0208061a
.L_02080620:
@ FUN_02080620 at 0x02080620
.arm
    eor r3, r3, #0x80000000 @ 02080620
.L_02080624:
@ FUN_02080624 at 0x02080624
    push {r4, r5, lr} @ 02080624
    lsl r4, r1, #1 @ 02080628
    lsl r5, r3, #1 @ 0208062c
    teq r4, r5 @ 02080630
    teqeq r0, r2 @ 02080634
    orrsne ip, r4, r0 @ 02080638
    orrsne ip, r5, r2 @ 0208063c
    mvnsne ip, r4, asr #21 @ 02080640
    mvnsne ip, r5, asr #21 @ 02080644
    beq .L_02080880 @ 02080648
    lsr r4, r4, #0x15 @ 0208064c
    rsbs r5, r4, r5, lsr #21 @ 02080650
    rsblt r5, r5, #0 @ 02080654
    ble .L_02080678 @ 02080658
    add r4, r4, r5 @ 0208065c
    eor r2, r0, r2 @ 02080660
    eor r3, r1, r3 @ 02080664
    eor r0, r2, r0 @ 02080668
    eor r1, r3, r1 @ 0208066c
    eor r2, r0, r2 @ 02080670
    eor r3, r1, r3 @ 02080674
.L_02080678:
    cmp r5, #0x36 @ 02080678
    pophi {r4, r5, lr} @ 0208067c
    bxhi lr @ 02080680
    tst r1, #0x80000000 @ 02080684
    lsl r1, r1, #0xc @ 02080688
    mov ip, #0x100000 @ 0208068c
    orr r1, ip, r1, lsr #12 @ 02080690
    beq .L_020806a0 @ 02080694
    rsbs r0, r0, #0 @ 02080698
    rsc r1, r1, #0 @ 0208069c
.L_020806a0:
    tst r3, #0x80000000 @ 020806a0
    lsl r3, r3, #0xc @ 020806a4
    orr r3, ip, r3, lsr #12 @ 020806a8
    beq .L_020806b8 @ 020806ac
    rsbs r2, r2, #0 @ 020806b0
    rsc r3, r3, #0 @ 020806b4
.L_020806b8:
    teq r4, r5 @ 020806b8
    beq .L_02080868 @ 020806bc
.L_020806c0:
    sub r4, r4, #1 @ 020806c0
    rsbs lr, r5, #0x20 @ 020806c4
    blt .L_020806e4 @ 020806c8
    lsl ip, r2, lr @ 020806cc
    adds r0, r0, r2, lsr r5 @ 020806d0
    adc r1, r1, #0 @ 020806d4
    adds r0, r0, r3, lsl lr @ 020806d8
    adcs r1, r1, r3, asr r5 @ 020806dc
    b .L_02080700 @ 020806e0
.L_020806e4:
    sub r5, r5, #0x20 @ 020806e4
    add lr, lr, #0x20 @ 020806e8
    cmp r2, #1 @ 020806ec
    lsl ip, r3, lr @ 020806f0
    orrhs ip, ip, #2 @ 020806f4
    adds r0, r0, r3, asr r5 @ 020806f8
    adcs r1, r1, r3, asr #31 @ 020806fc
.L_02080700:
    and r5, r1, #0x80000000 @ 02080700
    bpl .L_02080714 @ 02080704
    rsbs ip, ip, #0 @ 02080708
    rscs r0, r0, #0 @ 0208070c
    rsc r1, r1, #0 @ 02080710
.L_02080714:
    cmp r1, #0x100000 @ 02080714
    blo .L_0208075c @ 02080718
    cmp r1, #0x200000 @ 0208071c
    blo .L_02080740 @ 02080720
    lsrs r1, r1, #1 @ 02080724
    movs r0, r0, rrx @ 02080728
    mov ip, ip, rrx @ 0208072c
    add r4, r4, #1 @ 02080730
    lsl r2, r4, #0x15 @ 02080734
    cmn r2, #0x400000 @ 02080738
    bhs .L_020808f0 @ 0208073c
.L_02080740:
    cmp ip, #0x80000000 @ 02080740
    lsrseq ip, r0, #1 @ 02080744
    adcs r0, r0, #0 @ 02080748
    adc r1, r1, r4, lsl #20 @ 0208074c
    orr r1, r1, r5 @ 02080750
    pop {r4, r5, lr} @ 02080754
    bx lr @ 02080758
.L_0208075c:
    lsls ip, ip, #1 @ 0208075c
    adcs r0, r0, r0 @ 02080760
    adc r1, r1, r1 @ 02080764
    tst r1, #0x100000 @ 02080768
    sub r4, r4, #1 @ 0208076c
    bne .L_02080740 @ 02080770
.L_02080774:
    teq r1, #0 @ 02080774
    movne r3, #0x14 @ 02080778
    moveq r3, #0x34 @ 0208077c
    moveq r1, r0 @ 02080780
    moveq r0, #0 @ 02080784
    mov r2, r1 @ 02080788
    cmp r2, #0x10000 @ 0208078c
    lsrhs r2, r2, #0x10 @ 02080790
    subhs r3, r3, #0x10 @ 02080794
    cmp r2, #0x100 @ 02080798
    lsrhs r2, r2, #8 @ 0208079c
    subhs r3, r3, #8 @ 020807a0
    cmp r2, #0x10 @ 020807a4
    lsrhs r2, r2, #4 @ 020807a8
    subhs r3, r3, #4 @ 020807ac
    cmp r2, #4 @ 020807b0
    subhs r3, r3, #2 @ 020807b4
    sublo r3, r3, r2, lsr #1 @ 020807b8
    sub r3, r3, r2, lsr #3 @ 020807bc
    subs r2, r3, #0x20 @ 020807c0
    bge .L_020807e8 @ 020807c4
    adds r2, r2, #0xc @ 020807c8
    ble .L_020807e4 @ 020807cc
    add ip, r2, #0x14 @ 020807d0
    rsb r2, r2, #0xc @ 020807d4
    lsl r0, r1, ip @ 020807d8
    lsr r1, r1, r2 @ 020807dc
    b .L_020807f8 @ 020807e0
.L_020807e4:
    add r2, r2, #0x14 @ 020807e4
.L_020807e8:
    rsble ip, r2, #0x20 @ 020807e8
    lsl r1, r1, r2 @ 020807ec
    orrle r1, r1, r0, lsr ip @ 020807f0
    lslle r0, r0, r2 @ 020807f4
.L_020807f8:
    subs r4, r4, r3 @ 020807f8
    addge r1, r1, r4, lsl #20 @ 020807fc
    orrge r1, r1, r5 @ 02080800
    popge {r4, r5, lr} @ 02080804
    bxge lr @ 02080808
    mvn r4, r4 @ 0208080c
    subs r4, r4, #0x1f @ 02080810
    bge .L_02080858 @ 02080814
    adds r4, r4, #0xc @ 02080818
    bgt .L_0208083c @ 0208081c
    add r4, r4, #0x14 @ 02080820
    rsb r2, r4, #0x20 @ 02080824
    lsr r0, r0, r4 @ 02080828
    orr r0, r0, r1, lsl r2 @ 0208082c
    orr r1, r5, r1, lsr r4 @ 02080830
    pop {r4, r5, lr} @ 02080834
    bx lr @ 02080838
.L_0208083c:
    rsb r4, r4, #0xc @ 0208083c
    rsb r2, r4, #0x20 @ 02080840
    lsr r0, r0, r2 @ 02080844
    orr r0, r0, r1, lsl r4 @ 02080848
    mov r1, r5 @ 0208084c
    pop {r4, r5, lr} @ 02080850
    bx lr @ 02080854
.L_02080858:
    lsr r0, r1, r4 @ 02080858
    mov r1, r5 @ 0208085c
    pop {r4, r5, lr} @ 02080860
    bx lr @ 02080864
.L_02080868:
    teq r4, #0 @ 02080868
    eor r3, r3, #0x100000 @ 0208086c
    eoreq r1, r1, #0x100000 @ 02080870
    addeq r4, r4, #1 @ 02080874
    subne r5, r5, #1 @ 02080878
    b .L_020806c0 @ 0208087c
.L_02080880:
    mvns ip, r4, asr #21 @ 02080880
    mvnsne ip, r5, asr #21 @ 02080884
    beq .L_02080904 @ 02080888
    teq r4, r5 @ 0208088c
    teqeq r0, r2 @ 02080890
    beq .L_020808ac @ 02080894
    teq r4, #0 @ 02080898
    moveq r1, r3 @ 0208089c
    moveq r0, r2 @ 020808a0
    pop {r4, r5, lr} @ 020808a4
    bx lr @ 020808a8
.L_020808ac:
    teq r1, r3 @ 020808ac
    movne r1, #0 @ 020808b0
    movne r0, #0 @ 020808b4
    popne {r4, r5, lr} @ 020808b8
    bxne lr @ 020808bc
    lsrs ip, r4, #0x15 @ 020808c0
    bne .L_020808dc @ 020808c4
    lsls r0, r0, #1 @ 020808c8
    adcs r1, r1, r1 @ 020808cc
    orrhs r1, r1, #0x80000000 @ 020808d0
    pop {r4, r5, lr} @ 020808d4
    bx lr @ 020808d8
.L_020808dc:
    adds r4, r4, #0x400000 @ 020808dc
    addlo r1, r1, #0x100000 @ 020808e0
    poplo {r4, r5, lr} @ 020808e4
    bxlo lr @ 020808e8
    and r5, r1, #0x80000000 @ 020808ec
.L_020808f0:
    orr r1, r5, #0x7f000000 @ 020808f0
    orr r1, r1, #0xf00000 @ 020808f4
    mov r0, #0 @ 020808f8
    pop {r4, r5, lr} @ 020808fc
    bx lr @ 02080900
.L_02080904:
    mvns ip, r4, asr #21 @ 02080904
    movne r1, r3 @ 02080908
    movne r0, r2 @ 0208090c
    mvnseq ip, r5, asr #21 @ 02080910
    movne r3, r1 @ 02080914
    movne r2, r0 @ 02080918
    orrs r4, r0, r1, lsl #12 @ 0208091c
    orrseq r5, r2, r3, lsl #12 @ 02080920
    teqeq r1, r3 @ 02080924
    orrne r1, r1, #0x80000 @ 02080928
    pop {r4, r5, lr} @ 0208092c
    bx lr @ 02080930
    .byte 0x00, 0x00, 0x30, 0xe3, 0x00, 0x10, 0xa0, 0x03, 0x1e, 0xff, 0x2f, 0x01, 0x30, 0x40, 0x2d, 0xe9 @ 02080934
    .byte 0x01, 0x4b, 0xa0, 0xe3, 0x32, 0x40, 0x84, 0xe2, 0x00, 0x50, 0xa0, 0xe3, 0x00, 0x10, 0xa0, 0xe3 @ 02080944
    .byte 0x86, 0xff, 0xff, 0xea @ 02080954
.L_02080958:
@ FUN_02080958 at 0x02080958
    teq r0, #0 @ 02080958
    moveq r1, #0 @ 0208095c
    bxeq lr @ 02080960
    push {r4, r5, lr} @ 02080964
    mov r4, #0x400 @ 02080968
    add r4, r4, #0x32 @ 0208096c
    ands r5, r0, #0x80000000 @ 02080970
    rsbmi r0, r0, #0 @ 02080974
    mov r1, #0 @ 02080978
    b .L_02080774 @ 0208097c
    .byte 0x80, 0x20, 0xb0, 0xe1, 0xc2, 0x11, 0xa0, 0xe1, 0x61, 0x10, 0xa0, 0xe1, 0x02, 0x0e, 0xa0, 0xe1 @ 02080980
    .byte 0xff, 0x34, 0x12, 0x12, 0xff, 0x04, 0x33, 0x13, 0x0e, 0x13, 0x21, 0x12, 0x1e, 0xff, 0x2f, 0x11 @ 02080990
    .byte 0x00, 0x00, 0x32, 0xe3, 0xff, 0x04, 0x33, 0x13, 0x1e, 0xff, 0x2f, 0x01, 0x30, 0x40, 0x2d, 0xe9 @ 020809a0
    .byte 0x0e, 0x4d, 0xa0, 0xe3, 0x02, 0x51, 0x01, 0xe2, 0x02, 0x11, 0xc1, 0xe3, 0x6c, 0xff, 0xff, 0xea @ 020809b0
    .byte 0x01, 0x20, 0x90, 0xe1, 0x1e, 0xff, 0x2f, 0x01, 0x30, 0x40, 0x2d, 0xe9, 0x00, 0x50, 0xa0, 0xe3 @ 020809c0
    .byte 0x06, 0x00, 0x00, 0xea, 0x01, 0x20, 0x90, 0xe1, 0x1e, 0xff, 0x2f, 0x01, 0x30, 0x40, 0x2d, 0xe9 @ 020809d0
    .byte 0x02, 0x51, 0x11, 0xe2, 0x01, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x70, 0xe2, 0x00, 0x10, 0xe1, 0xe2 @ 020809e0
    .byte 0x01, 0x4b, 0xa0, 0xe3, 0x32, 0x40, 0x84, 0xe2, 0x21, 0xcb, 0xb0, 0xe1, 0x44, 0xff, 0xff, 0x0a @ 020809f0
    .byte 0x03, 0x20, 0xa0, 0xe3, 0xac, 0xc1, 0xb0, 0xe1, 0x03, 0x20, 0x82, 0x12, 0xac, 0xc1, 0xb0, 0xe1 @ 02080a00
    .byte 0x03, 0x20, 0x82, 0x12, 0xac, 0x21, 0x82, 0xe0, 0x20, 0x30, 0x62, 0xe2, 0x10, 0xc3, 0xa0, 0xe1 @ 02080a10
    .byte 0x30, 0x02, 0xa0, 0xe1, 0x11, 0x03, 0x80, 0xe1, 0x31, 0x12, 0xa0, 0xe1, 0x02, 0x40, 0x84, 0xe0 @ 02080a20
    .byte 0x37, 0xff, 0xff, 0xea @ 02080a30
.L_02080a34:
@ FUN_02080a34 at 0x02080a34
    push {r4, r5, r6, lr} @ 02080a34
    mov ip, #0xff @ 02080a38
    orr ip, ip, #0x700 @ 02080a3c
    ands r4, ip, r1, lsr #20 @ 02080a40
    andsne r5, ip, r3, lsr #20 @ 02080a44
    teqne r4, ip @ 02080a48
    teqne r5, ip @ 02080a4c
    bleq .L_02080c2c @ 02080a50
    add r4, r4, r5 @ 02080a54
    eor r6, r1, r3 @ 02080a58
    bic r1, r1, ip, lsl #21 @ 02080a5c
    bic r3, r3, ip, lsl #21 @ 02080a60
    orrs r5, r0, r1, lsl #12 @ 02080a64
    orrsne r5, r2, r3, lsl #12 @ 02080a68
    orr r1, r1, #0x100000 @ 02080a6c
    orr r3, r3, #0x100000 @ 02080a70
    beq .L_02080af0 @ 02080a74
    umull ip, lr, r0, r2 @ 02080a78
    mov r5, #0 @ 02080a7c
    umlal lr, r5, r1, r2 @ 02080a80
    and r2, r6, #0x80000000 @ 02080a84
    umlal lr, r5, r0, r3 @ 02080a88
    mov r6, #0 @ 02080a8c
    umlal r5, r6, r1, r3 @ 02080a90
    teq ip, #0 @ 02080a94
    orrne lr, lr, #1 @ 02080a98
    sub r4, r4, #0xff @ 02080a9c
    cmp r6, #0x200 @ 02080aa0
    sbc r4, r4, #0x300 @ 02080aa4
    bhs .L_02080ab8 @ 02080aa8
    lsls lr, lr, #1 @ 02080aac
    adcs r5, r5, r5 @ 02080ab0
    adc r6, r6, r6 @ 02080ab4
.L_02080ab8:
    orr r1, r2, r6, lsl #11 @ 02080ab8
    orr r1, r1, r5, lsr #21 @ 02080abc
    lsl r0, r5, #0xb @ 02080ac0
    orr r0, r0, lr, lsr #21 @ 02080ac4
    lsl lr, lr, #0xb @ 02080ac8
    subs ip, r4, #0xfd @ 02080acc
    cmphi ip, #0x700 @ 02080ad0
    bhi .L_02080b20 @ 02080ad4
    cmp lr, #0x80000000 @ 02080ad8
    lsrseq lr, r0, #1 @ 02080adc
    adcs r0, r0, #0 @ 02080ae0
    adc r1, r1, r4, lsl #20 @ 02080ae4
    pop {r4, r5, r6, lr} @ 02080ae8
    bx lr @ 02080aec
.L_02080af0:
    and r6, r6, #0x80000000 @ 02080af0
    orr r1, r6, r1 @ 02080af4
    orr r0, r0, r2 @ 02080af8
    eor r1, r1, r3 @ 02080afc
    subs r4, r4, ip, lsr #1 @ 02080b00
    rsbsgt r5, r4, ip @ 02080b04
    orrgt r1, r1, r4, lsl #20 @ 02080b08
    popgt {r4, r5, r6, lr} @ 02080b0c
    bxgt lr @ 02080b10
    orr r1, r1, #0x100000 @ 02080b14
    mov lr, #0 @ 02080b18
    subs r4, r4, #1 @ 02080b1c
.L_02080b20:
    bgt .L_02080c9c @ 02080b20
    cmn r4, #0x36 @ 02080b24
    movle r0, #0 @ 02080b28
    andle r1, r1, #0x80000000 @ 02080b2c
    pople {r4, r5, r6, lr} @ 02080b30
    bxle lr @ 02080b34
    rsb r4, r4, #0 @ 02080b38
    subs r4, r4, #0x20 @ 02080b3c
    bge .L_02080bb0 @ 02080b40
    adds r4, r4, #0xc @ 02080b44
    bgt .L_02080b80 @ 02080b48
    add r4, r4, #0x14 @ 02080b4c
    rsb r5, r4, #0x20 @ 02080b50
    lsl r3, r0, r5 @ 02080b54
    lsr r0, r0, r4 @ 02080b58
    orr r0, r0, r1, lsl r5 @ 02080b5c
    and r2, r1, #0x80000000 @ 02080b60
    bic r1, r1, #0x80000000 @ 02080b64
    adds r0, r0, r3, lsr #31 @ 02080b68
    adc r1, r2, r1, lsr r4 @ 02080b6c
    orrs lr, lr, r3, lsl #1 @ 02080b70
    biceq r0, r0, r3, lsr #31 @ 02080b74
    pop {r4, r5, r6, lr} @ 02080b78
    bx lr @ 02080b7c
.L_02080b80:
    rsb r4, r4, #0xc @ 02080b80
    rsb r5, r4, #0x20 @ 02080b84
    lsl r3, r0, r4 @ 02080b88
    lsr r0, r0, r5 @ 02080b8c
    orr r0, r0, r1, lsl r4 @ 02080b90
    and r1, r1, #0x80000000 @ 02080b94
    adds r0, r0, r3, lsr #31 @ 02080b98
    adc r1, r1, #0 @ 02080b9c
    orrs lr, lr, r3, lsl #1 @ 02080ba0
    biceq r0, r0, r3, lsr #31 @ 02080ba4
    pop {r4, r5, r6, lr} @ 02080ba8
    bx lr @ 02080bac
.L_02080bb0:
    rsb r5, r4, #0x20 @ 02080bb0
    orr lr, lr, r0, lsl r5 @ 02080bb4
    lsr r3, r0, r4 @ 02080bb8
    orr r3, r3, r1, lsl r5 @ 02080bbc
    lsr r0, r1, r4 @ 02080bc0
    and r1, r1, #0x80000000 @ 02080bc4
    bic r0, r0, r1, lsr r4 @ 02080bc8
    add r0, r0, r3, lsr #31 @ 02080bcc
    orrs lr, lr, r3, lsl #1 @ 02080bd0
    biceq r0, r0, r3, lsr #31 @ 02080bd4
    pop {r4, r5, r6, lr} @ 02080bd8
    bx lr @ 02080bdc
.L_02080be0:
    teq r4, #0 @ 02080be0
    bne .L_02080c0c @ 02080be4
    and r6, r1, #0x80000000 @ 02080be8
.L_02080bec:
    lsls r0, r0, #1 @ 02080bec
    adc r1, r1, r1 @ 02080bf0
    tst r1, #0x100000 @ 02080bf4
    subeq r4, r4, #1 @ 02080bf8
    beq .L_02080bec @ 02080bfc
    orr r1, r1, r6 @ 02080c00
    teq r5, #0 @ 02080c04
    movne pc, lr @ 02080c08
.L_02080c0c:
    and r6, r3, #0x80000000 @ 02080c0c
.L_02080c10:
    lsls r2, r2, #1 @ 02080c10
    adc r3, r3, r3 @ 02080c14
    tst r3, #0x100000 @ 02080c18
    subeq r5, r5, #1 @ 02080c1c
    beq .L_02080c10 @ 02080c20
    orr r3, r3, r6 @ 02080c24
    mov pc, lr @ 02080c28
.L_02080c2c:
@ FUN_02080c2c at 0x02080c2c
    teq r4, ip @ 02080c2c
    and r5, ip, r3, lsr #20 @ 02080c30
    teqne r5, ip @ 02080c34
    beq .L_02080c5c @ 02080c38
    orrs r6, r0, r1, lsl #1 @ 02080c3c
    orrsne r6, r2, r3, lsl #1 @ 02080c40
    bne .L_02080be0 @ 02080c44
.L_02080c48:
    eor r1, r1, r3 @ 02080c48
    and r1, r1, #0x80000000 @ 02080c4c
    mov r0, #0 @ 02080c50
    pop {r4, r5, r6, lr} @ 02080c54
    bx lr @ 02080c58
.L_02080c5c:
    orrs r6, r0, r1, lsl #1 @ 02080c5c
    moveq r0, r2 @ 02080c60
    moveq r1, r3 @ 02080c64
    orrsne r6, r2, r3, lsl #1 @ 02080c68
    beq .L_02080cb4 @ 02080c6c
    teq r4, ip @ 02080c70
    bne .L_02080c80 @ 02080c74
    orrs r6, r0, r1, lsl #12 @ 02080c78
    bne .L_02080cb4 @ 02080c7c
.L_02080c80:
    teq r5, ip @ 02080c80
    bne .L_02080c98 @ 02080c84
    orrs r6, r2, r3, lsl #12 @ 02080c88
    movne r0, r2 @ 02080c8c
    movne r1, r3 @ 02080c90
    bne .L_02080cb4 @ 02080c94
.L_02080c98:
    eor r1, r1, r3 @ 02080c98
.L_02080c9c:
    and r1, r1, #0x80000000 @ 02080c9c
    orr r1, r1, #0x7f000000 @ 02080ca0
    orr r1, r1, #0xf00000 @ 02080ca4
    mov r0, #0 @ 02080ca8
    pop {r4, r5, r6, lr} @ 02080cac
    bx lr @ 02080cb0
.L_02080cb4:
    orr r1, r1, #0x7f000000 @ 02080cb4
    orr r1, r1, #0xf80000 @ 02080cb8
    pop {r4, r5, r6, lr} @ 02080cbc
    bx lr @ 02080cc0
@ FUN_02080cc4 at 0x02080cc4
    push {r4, r5, r6, lr} @ 02080cc4
    mov ip, #0xff @ 02080cc8
    orr ip, ip, #0x700 @ 02080ccc
    ands r4, ip, r1, lsr #20 @ 02080cd0
    andsne r5, ip, r3, lsr #20 @ 02080cd4
    teqne r4, ip @ 02080cd8
    teqne r5, ip @ 02080cdc
    bleq .L_02080e60 @ 02080ce0
    sub r4, r4, r5 @ 02080ce4
    eor lr, r1, r3 @ 02080ce8
    orrs r5, r2, r3, lsl #12 @ 02080cec
    lsl r1, r1, #0xc @ 02080cf0
    beq .L_02080e2c @ 02080cf4
    lsl r3, r3, #0xc @ 02080cf8
    mov r5, #0x10000000 @ 02080cfc
    orr r3, r5, r3, lsr #4 @ 02080d00
    orr r3, r3, r2, lsr #24 @ 02080d04
    lsl r2, r2, #8 @ 02080d08
    orr r5, r5, r1, lsr #4 @ 02080d0c
    orr r5, r5, r0, lsr #24 @ 02080d10
    lsl r6, r0, #8 @ 02080d14
    and r1, lr, #0x80000000 @ 02080d18
    cmp r5, r3 @ 02080d1c
    cmpeq r6, r2 @ 02080d20
    adc r4, r4, #0xfd @ 02080d24
    add r4, r4, #0x300 @ 02080d28
    bhs .L_02080d38 @ 02080d2c
    lsrs r3, r3, #1 @ 02080d30
    mov r2, r2, rrx @ 02080d34
.L_02080d38:
    subs r6, r6, r2 @ 02080d38
    sbc r5, r5, r3 @ 02080d3c
    lsrs r3, r3, #1 @ 02080d40
    mov r2, r2, rrx @ 02080d44
    mov r0, #0x100000 @ 02080d48
    mov ip, #0x80000 @ 02080d4c
.L_02080d50:
    subs lr, r6, r2 @ 02080d50
    sbcs lr, r5, r3 @ 02080d54
    subhs r6, r6, r2 @ 02080d58
    movhs r5, lr @ 02080d5c
    orrhs r0, r0, ip @ 02080d60
    lsrs r3, r3, #1 @ 02080d64
    mov r2, r2, rrx @ 02080d68
    subs lr, r6, r2 @ 02080d6c
    sbcs lr, r5, r3 @ 02080d70
    subhs r6, r6, r2 @ 02080d74
    movhs r5, lr @ 02080d78
    orrhs r0, r0, ip, lsr #1 @ 02080d7c
    lsrs r3, r3, #1 @ 02080d80
    mov r2, r2, rrx @ 02080d84
    subs lr, r6, r2 @ 02080d88
    sbcs lr, r5, r3 @ 02080d8c
    subhs r6, r6, r2 @ 02080d90
    movhs r5, lr @ 02080d94
    orrhs r0, r0, ip, lsr #2 @ 02080d98
    lsrs r3, r3, #1 @ 02080d9c
    mov r2, r2, rrx @ 02080da0
    subs lr, r6, r2 @ 02080da4
    sbcs lr, r5, r3 @ 02080da8
    subhs r6, r6, r2 @ 02080dac
    movhs r5, lr @ 02080db0
    orrhs r0, r0, ip, lsr #3 @ 02080db4
    orrs lr, r5, r6 @ 02080db8
    beq .L_02080df8 @ 02080dbc
    lsl r5, r5, #4 @ 02080dc0
    orr r5, r5, r6, lsr #28 @ 02080dc4
    lsl r6, r6, #4 @ 02080dc8
    lsl r3, r3, #3 @ 02080dcc
    orr r3, r3, r2, lsr #29 @ 02080dd0
    lsl r2, r2, #3 @ 02080dd4
    lsrs ip, ip, #4 @ 02080dd8
    bne .L_02080d50 @ 02080ddc
    tst r1, #0x100000 @ 02080de0
    bne .L_02080e04 @ 02080de4
    orr r1, r1, r0 @ 02080de8
    mov r0, #0 @ 02080dec
    mov ip, #0x80000000 @ 02080df0
    b .L_02080d50 @ 02080df4
.L_02080df8:
    tst r1, #0x100000 @ 02080df8
    orreq r1, r1, r0 @ 02080dfc
    moveq r0, #0 @ 02080e00
.L_02080e04:
    subs ip, r4, #0xfd @ 02080e04
    cmphi ip, #0x700 @ 02080e08
    bhi .L_02080b20 @ 02080e0c
    subs ip, r5, r3 @ 02080e10
    subseq ip, r6, r2 @ 02080e14
    lsrseq ip, r0, #1 @ 02080e18
    adcs r0, r0, #0 @ 02080e1c
    adc r1, r1, r4, lsl #20 @ 02080e20
    pop {r4, r5, r6, lr} @ 02080e24
    bx lr @ 02080e28
.L_02080e2c:
    and lr, lr, #0x80000000 @ 02080e2c
    orr r1, lr, r1, lsr #12 @ 02080e30
    adds r4, r4, ip, lsr #1 @ 02080e34
    rsbsgt r5, r4, ip @ 02080e38
    orrgt r1, r1, r4, lsl #20 @ 02080e3c
    popgt {r4, r5, r6, lr} @ 02080e40
    bxgt lr @ 02080e44
    orr r1, r1, #0x100000 @ 02080e48
    mov lr, #0 @ 02080e4c
    subs r4, r4, #1 @ 02080e50
    b .L_02080b20 @ 02080e54
    .byte 0x06, 0xe0, 0x85, 0xe1, 0x2f, 0xff, 0xff, 0xea @ 02080e58
.L_02080e60:
@ FUN_02080e60 at 0x02080e60
    and r5, ip, r3, lsr #20 @ 02080e60
    teq r4, ip @ 02080e64
    teqeq r5, ip @ 02080e68
    beq .L_02080cb4 @ 02080e6c
    teq r4, ip @ 02080e70
    bne .L_02080e94 @ 02080e74
    orrs r4, r0, r1, lsl #12 @ 02080e78
    bne .L_02080cb4 @ 02080e7c
    teq r5, ip @ 02080e80
    bne .L_02080c98 @ 02080e84
    mov r0, r2 @ 02080e88
    mov r1, r3 @ 02080e8c
    b .L_02080cb4 @ 02080e90
.L_02080e94:
    teq r5, ip @ 02080e94
    bne .L_02080eb0 @ 02080e98
    orrs r5, r2, r3, lsl #12 @ 02080e9c
    beq .L_02080c48 @ 02080ea0
    mov r0, r2 @ 02080ea4
    mov r1, r3 @ 02080ea8
    b .L_02080cb4 @ 02080eac
.L_02080eb0:
    orrs r6, r0, r1, lsl #1 @ 02080eb0
    orrsne r6, r2, r3, lsl #1 @ 02080eb4
    bne .L_02080be0 @ 02080eb8
    orrs r4, r0, r1, lsl #1 @ 02080ebc
    bne .L_02080c98 @ 02080ec0
    orrs r5, r2, r3, lsl #1 @ 02080ec4
    bne .L_02080c48 @ 02080ec8
    b .L_02080cb4 @ 02080ecc
.L_02080ed0:
@ FUN_02080ed0 at 0x02080ed0
    lsls r2, r1, #1 @ 02080ed0
    bhs .L_02080f04 @ 02080ed4
    adds r2, r2, #0x200000 @ 02080ed8
    bhs .L_02080f0c @ 02080edc
    bpl .L_02080f04 @ 02080ee0
    mvn r3, #0x3e0 @ 02080ee4
    subs r2, r3, r2, asr #21 @ 02080ee8
    bmi .L_02080f14 @ 02080eec
    lsl r3, r1, #0xb @ 02080ef0
    orr r3, r3, #0x80000000 @ 02080ef4
    orr r3, r3, r0, lsr #21 @ 02080ef8
    lsr r0, r3, r2 @ 02080efc
    bx lr @ 02080f00
.L_02080f04:
    mov r0, #0 @ 02080f04
    bx lr @ 02080f08
.L_02080f0c:
    orrs r0, r0, r1, lsl #12 @ 02080f0c
    bne .L_02080f1c @ 02080f10
.L_02080f14:
    mvn r0, #0 @ 02080f14
    bx lr @ 02080f18
.L_02080f1c:
    mov r0, #0 @ 02080f1c
    bx lr @ 02080f20
.L_02080f24:
    push {r4, r5, r6, lr} @ 02080f24
    subs r5, r1, #0 @ 02080f28
    mov r6, r0 @ 02080f2c
    moveq r4, r5 @ 02080f30
    beq .L_02080fe8 @ 02080f34
    bl .L_02081248 @ 02080f38
    cmp r6, #0 @ 02080f3c
    beq .L_02080f50 @ 02080f40
    ldr r3, [r6, #0x38] @ 02080f44
    cmp r3, #0 @ 02080f48
    beq .L_02080ff4 @ 02080f4c
.L_02080f50:
    ldrsh r4, [r5, #0xc] @ 02080f50
    cmp r4, #0 @ 02080f54
    beq .L_02080fe4 @ 02080f58
.L_02080f5c:
    mov r0, r5 @ 02080f5c
    bl .L_02081034 @ 02080f60
    ldr r3, [r5, #0x30] @ 02080f64
    cmp r3, #0 @ 02080f68
    mov r4, r0 @ 02080f6c
    beq .L_02080f88 @ 02080f70
    ldr r0, [r5, #0x20] @ 02080f74
    mov lr, pc @ 02080f78
    bx r3 @ 02080f7c
    cmp r0, #0 @ 02080f80
    mvnlt r4, #0 @ 02080f84
.L_02080f88:
    ldrh r3, [r5, #0xc] @ 02080f88
    tst r3, #0x80 @ 02080f8c
    bne .L_0208100c @ 02080f90
.L_02080f94:
    ldr r1, [r5, #0x34] @ 02080f94
    cmp r1, #0 @ 02080f98
    beq .L_02080fbc @ 02080f9c
    add r3, r5, #0x44 @ 02080fa0
    cmp r1, r3 @ 02080fa4
    ldrne r3, [pc, #0x6c] @ 02080fa8
    ldrne r0, [r3] @ 02080fac
    blne .L_020818d4 @ 02080fb0
    mov r3, #0 @ 02080fb4
    str r3, [r5, #0x34] @ 02080fb8
.L_02080fbc:
    ldr r1, [r5, #0x48] @ 02080fbc
    cmp r1, #0 @ 02080fc0
    beq .L_02080fdc @ 02080fc4
    ldr r3, [pc, #0x4c] @ 02080fc8
    ldr r0, [r3] @ 02080fcc
    bl .L_020818d4 @ 02080fd0
    mov r3, #0 @ 02080fd4
    str r3, [r5, #0x48] @ 02080fd8
.L_02080fdc:
    mov r3, #0 @ 02080fdc
    strh r3, [r5, #0xc] @ 02080fe0
.L_02080fe4:
    bl .L_0208124c @ 02080fe4
.L_02080fe8:
    mov r0, r4 @ 02080fe8
    pop {r4, r5, r6, lr} @ 02080fec
    bx lr @ 02080ff0
.L_02080ff4:
    mov r0, r6 @ 02080ff4
    bl .L_02081258 @ 02080ff8
    ldrsh r4, [r5, #0xc] @ 02080ffc
    cmp r4, #0 @ 02081000
    beq .L_02080fe4 @ 02081004
    b .L_02080f5c @ 02081008
.L_0208100c:
    mov r0, r6 @ 0208100c
    ldr r1, [r5, #0x14] @ 02081010
    bl .L_020818d4 @ 02081014
    b .L_02080f94 @ 02081018
    .byte 0x98, 0xf3, 0x08, 0x02 @ 0208101c
.L_02081020:
@ FUN_02081020 at 0x02081020
    ldr r3, [pc, #8] @ 02081020
    mov r1, r0 @ 02081024
    ldr r0, [r3] @ 02081028
    b .L_02080f24 @ 0208102c
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02081030
.L_02081034:
@ FUN_02081034 at 0x02081034
    push {r4, r5, r6, lr} @ 02081034
    subs r6, r0, #0 @ 02081038
    beq .L_020811cc @ 0208103c
    ldr r3, [pc, #0x198] @ 02081040
    ldr r0, [r3] @ 02081044
    cmp r0, #0 @ 02081048
    beq .L_0208105c @ 0208104c
    ldr r3, [r0, #0x38] @ 02081050
    cmp r3, #0 @ 02081054
    beq .L_02081194 @ 02081058
.L_0208105c:
    ldrh r2, [r6, #0xc] @ 0208105c
    lsl r3, r2, #0x10 @ 02081060
    asr r1, r3, #0x10 @ 02081064
    tst r1, #8 @ 02081068
    beq .L_020810e8 @ 0208106c
    ldr r5, [r6, #0x14] @ 02081070
    cmp r5, #0 @ 02081074
    beq .L_0208118c @ 02081078
    ldr r3, [r6] @ 0208107c
    tst r1, #3 @ 02081080
    rsb r4, r5, r3 @ 02081084
    str r5, [r6] @ 02081088
    movne r3, #0 @ 0208108c
    ldreq r3, [r6, #0x18] @ 02081090
    cmp r4, #0 @ 02081094
    str r3, [r6, #8] @ 02081098
    bgt .L_020810ac @ 0208109c
    b .L_0208118c @ 020810a0
.L_020810a4:
    cmp r4, #0 @ 020810a4
    ble .L_0208118c @ 020810a8
.L_020810ac:
    mov r1, r5 @ 020810ac
    mov r2, r4 @ 020810b0
    ldr r0, [r6, #0x20] @ 020810b4
    ldr ip, [r6, #0x28] @ 020810b8
    mov lr, pc @ 020810bc
    bx ip @ 020810c0
    cmp r0, #0 @ 020810c4
    add r5, r5, r0 @ 020810c8
    rsb r4, r0, r4 @ 020810cc
    bgt .L_020810a4 @ 020810d0
    ldrh r3, [r6, #0xc] @ 020810d4
    mvn r0, #0 @ 020810d8
    orr r3, r3, #0x40 @ 020810dc
    strh r3, [r6, #0xc] @ 020810e0
    b .L_02081168 @ 020810e4
.L_020810e8:
    ldr r3, [r6, #4] @ 020810e8
    orr r2, r2, #0x800 @ 020810ec
    cmp r3, #0 @ 020810f0
    strh r2, [r6, #0xc] @ 020810f4
    ble .L_020811b8 @ 020810f8
.L_020810fc:
    ldr r5, [r6, #0x2c] @ 020810fc
    cmp r5, #0 @ 02081100
    beq .L_0208118c @ 02081104
    ands r1, r2, #0x1000 @ 02081108
    ldrne r4, [r6, #0x54] @ 0208110c
    beq .L_02081170 @ 02081110
.L_02081114:
    ldrh r3, [r6, #0xc] @ 02081114
    tst r3, #4 @ 02081118
    bne .L_0208119c @ 0208111c
.L_02081120:
    ldr r0, [r6, #0x20] @ 02081120
    mov r1, r4 @ 02081124
    mov r2, #0 @ 02081128
    mov lr, pc @ 0208112c
    bx r5 @ 02081130
    cmn r0, #1 @ 02081134
    beq .L_0208118c @ 02081138
    ldrh r3, [r6, #0xc] @ 0208113c
    bic r3, r3, #0x800 @ 02081140
    strh r3, [r6, #0xc] @ 02081144
    ldrh r2, [r6, #0xc] @ 02081148
    ldr r3, [r6, #0x14] @ 0208114c
    tst r2, #0x1000 @ 02081150
    mov r0, #0 @ 02081154
    str r3, [r6] @ 02081158
    str r0, [r6, #4] @ 0208115c
    strne r4, [r6, #0x54] @ 02081160
    beq .L_0208118c @ 02081164
.L_02081168:
    pop {r4, r5, r6, lr} @ 02081168
    bx lr @ 0208116c
.L_02081170:
    ldr r0, [r6, #0x20] @ 02081170
    mov r2, #1 @ 02081174
    mov lr, pc @ 02081178
    bx r5 @ 0208117c
    cmn r0, #1 @ 02081180
    mov r4, r0 @ 02081184
    bne .L_02081114 @ 02081188
.L_0208118c:
    mov r0, #0 @ 0208118c
    b .L_02081168 @ 02081190
.L_02081194:
    bl .L_02081258 @ 02081194
    b .L_0208105c @ 02081198
.L_0208119c:
    ldr r3, [r6, #0x34] @ 0208119c
    ldr r2, [r6, #4] @ 020811a0
    cmp r3, #0 @ 020811a4
    ldrne r3, [r6, #0x40] @ 020811a8
    rsb r4, r2, r4 @ 020811ac
    rsbne r4, r3, r4 @ 020811b0
    b .L_02081120 @ 020811b4
.L_020811b8:
    ldr r3, [r6, #0x40] @ 020811b8
    cmp r3, #0 @ 020811bc
    bgt .L_020810fc @ 020811c0
    mov r0, #0 @ 020811c4
    b .L_02081168 @ 020811c8
.L_020811cc:
    ldr r3, [pc, #0x10] @ 020811cc
    ldr r1, [pc, #0x10] @ 020811d0
    ldr r0, [r3] @ 020811d4
    bl .L_020821cc @ 020811d8
    b .L_02081168 @ 020811dc
    .byte 0x98, 0xf3, 0x08, 0x02, 0x88, 0xef, 0x08, 0x02, 0x34, 0x10, 0x08, 0x02 @ 020811e0
.L_020811ec:
@ FUN_020811ec at 0x020811ec
    ldr r3, [pc, #0x44] @ 020811ec
    str r3, [r0, #0x30] @ 020811f0
    ldr r3, [pc, #0x40] @ 020811f4
    str r2, [r0, #0x10] @ 020811f8
    str r3, [r0, #0x24] @ 020811fc
    ldr r2, [pc, #0x38] @ 02081200
    ldr r3, [pc, #0x38] @ 02081204
    mov ip, #0 @ 02081208
    strh r1, [r0, #0xc] @ 0208120c
    str ip, [r0, #0x1c] @ 02081210
    str r2, [r0, #0x28] @ 02081214
    str r3, [r0, #0x2c] @ 02081218
    str ip, [r0] @ 0208121c
    str ip, [r0, #4] @ 02081220
    str ip, [r0, #8] @ 02081224
    str ip, [r0, #0x14] @ 02081228
    str ip, [r0, #0x18] @ 0208122c
    str r0, [r0, #0x20] @ 02081230
    bx lr @ 02081234
    .byte 0x10, 0x35, 0x08, 0x02, 0xf0, 0x35, 0x08, 0x02, 0x84, 0x35, 0x08, 0x02, 0x38, 0x35, 0x08, 0x02 @ 02081238
.L_02081248:
@ FUN_02081248 at 0x02081248
    bx lr @ 02081248
.L_0208124c:
@ FUN_0208124c at 0x0208124c
    bx lr @ 0208124c
    .byte 0x1e, 0xff, 0x2f, 0xe1, 0x1e, 0xff, 0x2f, 0xe1 @ 02081250
.L_02081258:
@ FUN_02081258 at 0x02081258
    push {r4, r5, r6, lr} @ 02081258
    ldr lr, [r0, #0x38] @ 0208125c
    subs r2, lr, #0 @ 02081260
    mov r6, #1 @ 02081264
    mov r1, #4 @ 02081268
    mov r4, r0 @ 0208126c
    add r5, r0, #0x2ec @ 02081270
    mov r3, r0 @ 02081274
    beq .L_02081284 @ 02081278
    pop {r4, r5, r6, lr} @ 0208127c
    bx lr @ 02081280
.L_02081284:
    ldr r0, [pc, #0x48] @ 02081284
    mov ip, #3 @ 02081288
    str r0, [r4, #0x3c] @ 0208128c
    str ip, [r4, #0x2e4] @ 02081290
    str lr, [r4, #0x2e0] @ 02081294
    ldr r0, [r4, #4] @ 02081298
    str r5, [r4, #0x2e8] @ 0208129c
    str r6, [r4, #0x38] @ 020812a0
    bl .L_020811ec @ 020812a4
    mov r2, r6 @ 020812a8
    ldr r0, [r4, #8] @ 020812ac
    mov r3, r4 @ 020812b0
    mov r1, #9 @ 020812b4
    bl .L_020811ec @ 020812b8
    ldr r0, [r4, #0xc] @ 020812bc
    mov r3, r4 @ 020812c0
    mov r1, #0xa @ 020812c4
    mov r2, #2 @ 020812c8
    pop {r4, r5, r6, lr} @ 020812cc
    b .L_020811ec @ 020812d0
    .byte 0x40, 0x13, 0x08, 0x02 @ 020812d4
    mov r0, #0 @ 020812d8
    bx lr @ 020812dc
    mov r0, #0 @ 020812e0
    bx lr @ 020812e4
@ FUN_020812e8 at 0x020812e8
    str lr, [sp, #-4]! @ 020812e8
    ldr r3, [pc, #0x18] @ 020812ec
    sub sp, sp, #4 @ 020812f0
    ldr r0, [r3] @ 020812f4
    ldr r1, [pc, #0x10] @ 020812f8
    bl .L_020821cc @ 020812fc
    add sp, sp, #4 @ 02081300
    .word 0xe49de004 @ 02081304 pop {lr}
    bx lr @ 02081308
    .byte 0x98, 0xf3, 0x08, 0x02, 0xe0, 0x12, 0x08, 0x02 @ 0208130c
@ FUN_02081314 at 0x02081314
    str lr, [sp, #-4]! @ 02081314
    ldr r3, [pc, #0x18] @ 02081318
    sub sp, sp, #4 @ 0208131c
    ldr r0, [r3] @ 02081320
    ldr r1, [pc, #0x10] @ 02081324
    bl .L_020821cc @ 02081328
    add sp, sp, #4 @ 0208132c
    .word 0xe49de004 @ 02081330 pop {lr}
    bx lr @ 02081334
    .byte 0x98, 0xf3, 0x08, 0x02, 0xd8, 0x12, 0x08, 0x02 @ 02081338
@ FUN_02081340 at 0x02081340
    str lr, [sp, #-4]! @ 02081340
    ldr r1, [pc, #0x10] @ 02081344
    sub sp, sp, #4 @ 02081348
    bl .L_020821cc @ 0208134c
    add sp, sp, #4 @ 02081350
    .word 0xe49de004 @ 02081354 pop {lr}
    bx lr @ 02081358
    .byte 0x20, 0x10, 0x08, 0x02, 0x04, 0x30, 0x9f, 0xe5, 0x00, 0x00, 0x93, 0xe5, 0xf4, 0xff, 0xff, 0xea @ 0208135c
    .byte 0x88, 0xef, 0x08, 0x02 @ 0208136c
.L_02081370:
@ FUN_02081370 at 0x02081370
    push {r4, r5, r6, lr} @ 02081370
    add r4, r1, r1, lsl #1 @ 02081374
    lsl r4, r4, #5 @ 02081378
    mov r6, r1 @ 0208137c
    add r1, r4, #0xc @ 02081380
    bl .L_0208274c @ 02081384
    subs ip, r0, #0 @ 02081388
    mov lr, #0 @ 0208138c
    add r3, ip, #0xc @ 02081390
    mov r5, ip @ 02081394
    mov r0, r3 @ 02081398
    mov r1, lr @ 0208139c
    mov r2, r4 @ 020813a0
    strne r6, [ip, #4] @ 020813a4
    strne lr, [ip] @ 020813a8
    strne r3, [ip, #8] @ 020813ac
    blne .L_02083058 @ 020813b0
    mov r0, r5 @ 020813b4
    pop {r4, r5, r6, lr} @ 020813b8
    bx lr @ 020813bc
.L_020813c0:
@ FUN_020813c0 at 0x020813c0
    ldr r3, [pc, #0xdc] @ 020813c0
    push {r4, r5, lr} @ 020813c4
    ldr r4, [r3] @ 020813c8
    ldr r2, [r4, #0x38] @ 020813cc
    cmp r2, #0 @ 020813d0
    sub sp, sp, #4 @ 020813d4
    mov r5, r0 @ 020813d8
    beq .L_02081470 @ 020813dc
.L_020813e0:
    add r4, r4, #0x2e0 @ 020813e0
.L_020813e4:
    ldr r2, [r4, #4] @ 020813e4
    cmp r2, #1 @ 020813e8
    ldr r0, [r4, #8] @ 020813ec
    bpl .L_02081408 @ 020813f0
    b .L_0208145c @ 020813f4
.L_020813f8:
    cmp r2, #1 @ 020813f8
    add r0, r0, #0x60 @ 020813fc
    sub r2, r2, #1 @ 02081400
    beq .L_0208145c @ 02081404
.L_02081408:
    ldrsh r3, [r0, #0xc] @ 02081408
    cmp r3, #0 @ 0208140c
    bne .L_020813f8 @ 02081410
    mov r3, #0 @ 02081414
    mvn r2, #0 @ 02081418
    str r3, [r0, #0x4c] @ 0208141c
    str r3, [r0] @ 02081420
    str r3, [r0, #8] @ 02081424
    str r3, [r0, #4] @ 02081428
    str r3, [r0, #0x14] @ 0208142c
    str r3, [r0, #0x18] @ 02081430
    str r3, [r0, #0x1c] @ 02081434
    str r3, [r0, #0x34] @ 02081438
    str r3, [r0, #0x38] @ 0208143c
    str r3, [r0, #0x48] @ 02081440
    mov r3, #1 @ 02081444
    str r2, [r0, #0x10] @ 02081448
    strh r3, [r0, #0xc] @ 0208144c
.L_02081450:
    add sp, sp, #4 @ 02081450
    pop {r4, r5, lr} @ 02081454
    bx lr @ 02081458
.L_0208145c:
    ldr r0, [r4] @ 0208145c
    cmp r0, #0 @ 02081460
    beq .L_0208147c @ 02081464
.L_02081468:
    mov r4, r0 @ 02081468
    b .L_020813e4 @ 0208146c
.L_02081470:
    mov r0, r4 @ 02081470
    bl .L_02081258 @ 02081474
    b .L_020813e0 @ 02081478
.L_0208147c:
    mov r0, r5 @ 0208147c
    mov r1, #4 @ 02081480
    bl .L_02081370 @ 02081484
    cmp r0, #0 @ 02081488
    str r0, [r4] @ 0208148c
    bne .L_02081468 @ 02081490
    mov r3, #0xc @ 02081494
    mov r0, #0 @ 02081498
    str r3, [r5] @ 0208149c
    b .L_02081450 @ 020814a0
    .byte 0x88, 0xef, 0x08, 0x02 @ 020814a4
.L_020814a8:
    push {r4, r5, r6, r7, lr} @ 020814a8
    sub sp, sp, #0xc @ 020814ac
    mov r7, r1 @ 020814b0
    mov r1, r2 @ 020814b4
    add r2, sp, #4 @ 020814b8
    mov r4, r0 @ 020814bc
    bl .L_0208408c @ 020814c0
    subs r6, r0, #0 @ 020814c4
    mov r5, r6 @ 020814c8
    mov r0, r4 @ 020814cc
    bne .L_020814e4 @ 020814d0
.L_020814d4:
    mov r0, r5 @ 020814d4
    add sp, sp, #0xc @ 020814d8
    pop {r4, r5, r6, r7, lr} @ 020814dc
    bx lr @ 020814e0
.L_020814e4:
    bl .L_020813c0 @ 020814e4
    mov r3, #0x1b4 @ 020814e8
    subs r5, r0, #0 @ 020814ec
    mov r1, r7 @ 020814f0
    add r3, r3, #2 @ 020814f4
    mov r0, r4 @ 020814f8
    beq .L_020814d4 @ 020814fc
    ldr r2, [sp, #4] @ 02081500
    bl .L_020830f8 @ 02081504
    subs ip, r0, #0 @ 02081508
    blt .L_02081560 @ 0208150c
    strh r6, [r5, #0xc] @ 02081510
    ldr lr, [pc, #0x5c] @ 02081514
    str ip, [r5, #0x10] @ 02081518
    ldr ip, [pc, #0x58] @ 0208151c
    ldrh r3, [r5, #0xc] @ 02081520
    str ip, [r5, #0x24] @ 02081524
    str lr, [r5, #0x28] @ 02081528
    ldr ip, [pc, #0x4c] @ 0208152c
    ldr lr, [pc, #0x4c] @ 02081530
    tst r3, #0x100 @ 02081534
    mov r0, r4 @ 02081538
    mov r1, r5 @ 0208153c
    mov r2, #0 @ 02081540
    mov r3, #2 @ 02081544
    str ip, [r5, #0x2c] @ 02081548
    str lr, [r5, #0x30] @ 0208154c
    str r5, [r5, #0x20] @ 02081550
    beq .L_020814d4 @ 02081554
    bl .L_02081b8c @ 02081558
    b .L_020814d4 @ 0208155c
.L_02081560:
    bl .L_02081248 @ 02081560
    mov r3, #0 @ 02081564
    strh r3, [r5, #0xc] @ 02081568
    bl .L_0208124c @ 0208156c
    mov r5, #0 @ 02081570
    b .L_020814d4 @ 02081574
    .byte 0x84, 0x35, 0x08, 0x02, 0xf0, 0x35, 0x08, 0x02, 0x38, 0x35, 0x08, 0x02, 0x10, 0x35, 0x08, 0x02 @ 02081578
.L_02081588:
@ FUN_02081588 at 0x02081588
    mov r2, r1 @ 02081588
    ldr r1, [pc, #0xc] @ 0208158c
    mov r3, r0 @ 02081590
    ldr r0, [r1] @ 02081594
    mov r1, r3 @ 02081598
    b .L_020814a8 @ 0208159c
    .byte 0x98, 0xf3, 0x08, 0x02 @ 020815a0
.L_020815a4:
@ FUN_020815a4 at 0x020815a4
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 020815a4
    sub sp, sp, #0x14 @ 020815a8
    str r3, [sp, #4] @ 020815ac
    muls r3, r2, r3 @ 020815b0
    str r2, [sp, #8] @ 020815b4
    str r3, [sp, #0xc] @ 020815b8
    mov r6, r1 @ 020815bc
    mov fp, r0 @ 020815c0
    ldr r8, [sp, #0x38] @ 020815c4
    streq r3, [sp, #4] @ 020815c8
    beq .L_02081680 @ 020815cc
    cmp r0, #0 @ 020815d0
    beq .L_020815e4 @ 020815d4
    ldr r3, [r0, #0x38] @ 020815d8
    cmp r3, #0 @ 020815dc
    beq .L_02081754 @ 020815e0
.L_020815e4:
    ldr r7, [r8, #4] @ 020815e4
    ldrh r3, [r8, #0xc] @ 020815e8
    cmp r7, #0 @ 020815ec
    movlt r7, #0 @ 020815f0
    strlt r7, [r8, #4] @ 020815f4
    tst r3, #2 @ 020815f8
    mov r5, r6 @ 020815fc
    ldreq r4, [sp, #0xc] @ 02081600
    beq .L_02081694 @ 02081604
    ldr r4, [sp, #0xc] @ 02081608
    cmp r4, r7 @ 0208160c
    movhs r4, r7 @ 02081610
    ldr r1, [r8] @ 02081614
    mov r2, r4 @ 02081618
    mov r0, r6 @ 0208161c
    bl .L_02082ec0 @ 02081620
    ldr r0, [sp, #0xc] @ 02081624
    ldr r3, [r8] @ 02081628
    ldr r2, [r8, #4] @ 0208162c
    ldr r1, [r8, #0x34] @ 02081630
    subs r5, r0, r4 @ 02081634
    movne r5, #1 @ 02081638
    add r3, r3, r4 @ 0208163c
    rsb r7, r4, r2 @ 02081640
    cmp r1, #0 @ 02081644
    cmpne r0, r4 @ 02081648
    stm r8, {r3, r7} @ 0208164c
    rsb sb, r4, r0 @ 02081650
    beq .L_02081674 @ 02081654
    add r3, r8, #0x44 @ 02081658
    cmp r1, r3 @ 0208165c
    ldrne r3, [pc, #0x11c] @ 02081660
    ldrne r0, [r3] @ 02081664
    blne .L_020818d4 @ 02081668
    mov r3, #0 @ 0208166c
    str r3, [r8, #0x34] @ 02081670
.L_02081674:
    cmp r5, #0 @ 02081674
    addne sl, r6, r4 @ 02081678
    bne .L_020816f4 @ 0208167c
.L_02081680:
    ldr r0, [sp, #4] @ 02081680
    add sp, sp, #0x14 @ 02081684
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02081688
    bx lr @ 0208168c
.L_02081690:
    ldr r7, [r8, #4] @ 02081690
.L_02081694:
    cmp r4, r7 @ 02081694
    mov r2, r7 @ 02081698
    mov r0, r5 @ 0208169c
    bls .L_0208175c @ 020816a0
    ldr r1, [r8] @ 020816a4
    bl .L_02082ec0 @ 020816a8
    ldr r3, [r8] @ 020816ac
    add r3, r3, r7 @ 020816b0
    str r3, [r8] @ 020816b4
    mov r0, fp @ 020816b8
    mov r1, r8 @ 020816bc
    bl .L_02083320 @ 020816c0
    cmp r0, #0 @ 020816c4
    add r5, r5, r7 @ 020816c8
    rsb r4, r7, r4 @ 020816cc
    beq .L_02081690 @ 020816d0
    add r1, sp, #8 @ 020816d4
    ldm r1, {r1, r3} @ 020816d8
    rsb r0, r4, r3 @ 020816dc
    bl .L_02080380 @ 020816e0
    str r0, [sp, #4] @ 020816e4
    b .L_02081680 @ 020816e8
.L_020816ec:
    cmp sb, #0 @ 020816ec
    beq .L_02081680 @ 020816f0
.L_020816f4:
    ldr r5, [r8, #0x14] @ 020816f4
    ldr r6, [r8] @ 020816f8
    ldr r4, [r8, #0x18] @ 020816fc
    str sl, [r8, #0x14] @ 02081700
    str sl, [r8] @ 02081704
    str sb, [r8, #0x18] @ 02081708
    mov r0, fp @ 0208170c
    mov r1, r8 @ 02081710
    bl .L_02083320 @ 02081714
    ldr r3, [r8, #4] @ 02081718
    mov r7, #0 @ 0208171c
    cmp r0, #0 @ 02081720
    str r5, [r8, #0x14] @ 02081724
    str r4, [r8, #0x18] @ 02081728
    stm r8, {r6, r7} @ 0208172c
    add sl, sl, r3 @ 02081730
    rsb sb, r3, sb @ 02081734
    beq .L_020816ec @ 02081738
    add r1, sp, #8 @ 0208173c
    ldm r1, {r1, r2} @ 02081740
    rsb r0, sb, r2 @ 02081744
    bl .L_02080380 @ 02081748
    str r0, [sp, #4] @ 0208174c
    b .L_02081680 @ 02081750
.L_02081754:
    bl .L_02081258 @ 02081754
    b .L_020815e4 @ 02081758
.L_0208175c:
    mov r2, r4 @ 0208175c
    ldr r1, [r8] @ 02081760
    bl .L_02082ec0 @ 02081764
    ldr r2, [r8, #4] @ 02081768
    ldr r3, [r8] @ 0208176c
    rsb r2, r4, r2 @ 02081770
    add r3, r3, r4 @ 02081774
    str r3, [r8] @ 02081778
    str r2, [r8, #4] @ 0208177c
    b .L_02081680 @ 02081780
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02081784
.L_02081788:
@ FUN_02081788 at 0x02081788
    push {r4, r5, lr} @ 02081788
    ldr ip, [pc, #0x34] @ 0208178c
    ldr lr, [ip] @ 02081790
    mov r4, r0 @ 02081794
    mov ip, r1 @ 02081798
    mov r5, r2 @ 0208179c
    sub sp, sp, #0xc @ 020817a0
    str r3, [sp] @ 020817a4
    mov r0, lr @ 020817a8
    mov r1, r4 @ 020817ac
    mov r2, ip @ 020817b0
    mov r3, r5 @ 020817b4
    bl .L_020815a4 @ 020817b8
    add sp, sp, #0xc @ 020817bc
    pop {r4, r5, lr} @ 020817c0
    bx lr @ 020817c4
    .byte 0x98, 0xf3, 0x08, 0x02 @ 020817c8
.L_020817cc:
@ FUN_020817cc at 0x020817cc
    push {r4, r5, r6, r7, lr} @ 020817cc
    ldr r7, [pc, #0xf0] @ 020817d0
    sub sp, sp, #4 @ 020817d4
    mov r4, r1 @ 020817d8
    mov r6, r0 @ 020817dc
    bl .L_020830f0 @ 020817e0
    ldr r3, [r7, #8] @ 020817e4
    ldr r2, [r3, #4] @ 020817e8
    bic r5, r2, #3 @ 020817ec
    rsb r4, r4, r5 @ 020817f0
    add r4, r4, #0xfe0 @ 020817f4
    add r4, r4, #0xf @ 020817f8
    lsr r4, r4, #0xc @ 020817fc
    sub r4, r4, #1 @ 02081800
    lsl r4, r4, #0xc @ 02081804
    cmp r4, #0x1000 @ 02081808
    mov r1, #0 @ 0208180c
    mov r0, r6 @ 02081810
    blt .L_02081834 @ 02081814
    bl .L_020834c8 @ 02081818
    ldr r3, [r7, #8] @ 0208181c
    add r3, r5, r3 @ 02081820
    cmp r0, r3 @ 02081824
    rsb r1, r4, #0 @ 02081828
    mov r0, r6 @ 0208182c
    beq .L_02081848 @ 02081830
.L_02081834:
    bl .L_020830f4 @ 02081834
    mov r0, #0 @ 02081838
.L_0208183c:
    add sp, sp, #4 @ 0208183c
    pop {r4, r5, r6, r7, lr} @ 02081840
    bx lr @ 02081844
.L_02081848:
    bl .L_020834c8 @ 02081848
    rsb r3, r4, r5 @ 0208184c
    cmn r0, #1 @ 02081850
    orr r3, r3, #1 @ 02081854
    mov r1, #0 @ 02081858
    ldr ip, [pc, #0x68] @ 0208185c
    mov r0, r6 @ 02081860
    beq .L_0208188c @ 02081864
    ldr r2, [r7, #8] @ 02081868
    str r3, [r2, #4] @ 0208186c
    ldr r3, [ip] @ 02081870
    rsb r3, r4, r3 @ 02081874
    mov r0, r6 @ 02081878
    str r3, [ip] @ 0208187c
    bl .L_020830f4 @ 02081880
    mov r0, #1 @ 02081884
    b .L_0208183c @ 02081888
.L_0208188c:
    bl .L_020834c8 @ 0208188c
    ldr r1, [r7, #8] @ 02081890
    mov lr, r0 @ 02081894
    rsb r3, r1, lr @ 02081898
    cmp r3, #0xf @ 0208189c
    mov r0, r6 @ 020818a0
    orr ip, r3, #1 @ 020818a4
    ble .L_02081834 @ 020818a8
    ldr r3, [pc, #0x1c] @ 020818ac
    ldr r2, [r3] @ 020818b0
    ldr r3, [pc, #0x10] @ 020818b4
    rsb r2, r2, lr @ 020818b8
    str r2, [r3] @ 020818bc
    str ip, [r1, #4] @ 020818c0
    b .L_02081834 @ 020818c4
    .byte 0xb0, 0xf7, 0x08, 0x02, 0xb4, 0x4c, 0x0b, 0x02, 0xbc, 0xfb, 0x08, 0x02 @ 020818c8
.L_020818d4:
@ FUN_020818d4 at 0x020818d4
    push {r4, r5, r6, r7, r8, sl, lr} @ 020818d4
    subs r4, r1, #0 @ 020818d8
    sub sp, sp, #4 @ 020818dc
    mov r8, r0 @ 020818e0
    beq .L_02081954 @ 020818e4
    bl .L_020830f0 @ 020818e8
    sub lr, r4, #8 @ 020818ec
    ldr r0, [lr, #4] @ 020818f0
    ldr r7, [pc, #0x280] @ 020818f4
    bic r1, r0, #1 @ 020818f8
    add ip, lr, r1 @ 020818fc
    ldr r3, [r7, #8] @ 02081900
    ldr r2, [ip, #4] @ 02081904
    cmp ip, r3 @ 02081908
    bic r5, r2, #3 @ 0208190c
    mov sl, r7 @ 02081910
    beq .L_02081b00 @ 02081914
    ands r6, r0, #1 @ 02081918
    str r5, [ip, #4] @ 0208191c
    movne r0, #0 @ 02081920
    beq .L_02081994 @ 02081924
    add r3, ip, r5 @ 02081928
    ldr r2, [r3, #4] @ 0208192c
    tst r2, #1 @ 02081930
    beq .L_02081960 @ 02081934
.L_02081938:
    orr r3, r1, #1 @ 02081938
    cmp r0, #0 @ 0208193c
    str r3, [lr, #4] @ 02081940
    str r1, [r1, lr] @ 02081944
    beq .L_020819d4 @ 02081948
.L_0208194c:
    mov r0, r8 @ 0208194c
    bl .L_020830f4 @ 02081950
.L_02081954:
    add sp, sp, #4 @ 02081954
    pop {r4, r5, r6, r7, r8, sl, lr} @ 02081958
    bx lr @ 0208195c
.L_02081960:
    cmp r0, #0 @ 02081960
    add r1, r1, r5 @ 02081964
    ldrne r2, [ip, #8] @ 02081968
    beq .L_02081a9c @ 0208196c
.L_02081970:
    ldr r3, [ip, #0xc] @ 02081970
    cmp r0, #0 @ 02081974
    str r2, [r3, #8] @ 02081978
    str r3, [r2, #0xc] @ 0208197c
    orr r3, r1, #1 @ 02081980
    str r3, [lr, #4] @ 02081984
    str r1, [r1, lr] @ 02081988
    bne .L_0208194c @ 0208198c
    b .L_020819d4 @ 02081990
.L_02081994:
    ldr r2, [r4, #-8] @ 02081994
    rsb lr, r2, lr @ 02081998
    ldr r0, [lr, #8] @ 0208199c
    add r3, r7, #8 @ 020819a0
    cmp r0, r3 @ 020819a4
    ldrne r3, [lr, #0xc] @ 020819a8
    strne r0, [r3, #8] @ 020819ac
    strne r3, [r0, #0xc] @ 020819b0
    add r3, ip, r5 @ 020819b4
    add r1, r1, r2 @ 020819b8
    ldr r2, [r3, #4] @ 020819bc
    moveq r0, #1 @ 020819c0
    movne r0, r6 @ 020819c4
    tst r2, #1 @ 020819c8
    bne .L_02081938 @ 020819cc
    b .L_02081960 @ 020819d0
.L_020819d4:
    cmp r1, #0x200 @ 020819d4
    blo .L_02081acc @ 020819d8
    lsrs r2, r1, #9 @ 020819dc
    lsreq r2, r1, #3 @ 020819e0
    lsleq r3, r2, #3 @ 020819e4
    beq .L_02081a58 @ 020819e8
    cmp r2, #4 @ 020819ec
    lsrls r3, r1, #6 @ 020819f0
    addls r2, r3, #0x38 @ 020819f4
    lslls r3, r2, #3 @ 020819f8
    bls .L_02081a58 @ 020819fc
    cmp r2, #0x14 @ 02081a00
    addls r2, r2, #0x5b @ 02081a04
    lslls r3, r2, #3 @ 02081a08
    bls .L_02081a58 @ 02081a0c
    cmp r2, #0x54 @ 02081a10
    lsrls r3, r1, #0xc @ 02081a14
    addls r2, r3, #0x6e @ 02081a18
    lslls r3, r2, #3 @ 02081a1c
    bls .L_02081a58 @ 02081a20
    cmp r2, #0x154 @ 02081a24
    lsrls r3, r1, #0xf @ 02081a28
    addls r2, r3, #0x77 @ 02081a2c
    lslls r3, r2, #3 @ 02081a30
    bls .L_02081a58 @ 02081a34
    mov r3, #0x550 @ 02081a38
    add r3, r3, #4 @ 02081a3c
    cmp r2, r3 @ 02081a40
    lsrls r3, r1, #0x12 @ 02081a44
    addls r2, r3, #0x7c @ 02081a48
    movhi r2, #0x7e @ 02081a4c
    subhi r3, r3, #0x164 @ 02081a50
    lslls r3, r2, #3 @ 02081a54
.L_02081a58:
    add ip, r3, sl @ 02081a58
    ldr r0, [ip, #8] @ 02081a5c
    cmp ip, r0 @ 02081a60
    beq .L_02081b58 @ 02081a64
.L_02081a68:
    ldr r3, [r0, #4] @ 02081a68
    bic r3, r3, #3 @ 02081a6c
    cmp r1, r3 @ 02081a70
    bhs .L_02081a84 @ 02081a74
    ldr r0, [r0, #8] @ 02081a78
    cmp ip, r0 @ 02081a7c
    bne .L_02081a68 @ 02081a80
.L_02081a84:
    ldr ip, [r0, #0xc] @ 02081a84
.L_02081a88:
    str ip, [lr, #0xc] @ 02081a88
    str r0, [lr, #8] @ 02081a8c
    str lr, [r0, #0xc] @ 02081a90
    str lr, [ip, #8] @ 02081a94
    b .L_0208194c @ 02081a98
.L_02081a9c:
    ldr r2, [ip, #8] @ 02081a9c
    ldr r3, [pc, #0xd8] @ 02081aa0
    cmp r2, r3 @ 02081aa4
    bne .L_02081970 @ 02081aa8
    orr r3, r1, #1 @ 02081aac
    str lr, [r2, #0xc] @ 02081ab0
    str lr, [r2, #8] @ 02081ab4
    str r1, [r1, lr] @ 02081ab8
    str r3, [lr, #4] @ 02081abc
    str r2, [lr, #8] @ 02081ac0
    str r2, [lr, #0xc] @ 02081ac4
    b .L_0208194c @ 02081ac8
.L_02081acc:
    lsr r1, r1, #3 @ 02081acc
    ldr r2, [r7, #4] @ 02081ad0
    lsr r0, r1, #2 @ 02081ad4
    mov r3, #1 @ 02081ad8
    orr r2, r2, r3, lsl r0 @ 02081adc
    add r1, sl, r1, lsl #3 @ 02081ae0
    ldr r3, [r1, #8] @ 02081ae4
    str r1, [lr, #0xc] @ 02081ae8
    str r3, [lr, #8] @ 02081aec
    str r2, [r7, #4] @ 02081af0
    str lr, [r3, #0xc] @ 02081af4
    str lr, [r1, #8] @ 02081af8
    b .L_0208194c @ 02081afc
.L_02081b00:
    tst r0, #1 @ 02081b00
    add r0, r1, r5 @ 02081b04
    bne .L_02081b28 @ 02081b08
    ldr r1, [r4, #-8] @ 02081b0c
    rsb lr, r1, lr @ 02081b10
    ldr r2, [lr, #0xc] @ 02081b14
    ldr r3, [lr, #8] @ 02081b18
    str r3, [r2, #8] @ 02081b1c
    str r2, [r3, #0xc] @ 02081b20
    add r0, r0, r1 @ 02081b24
.L_02081b28:
    ldr r3, [pc, #0x54] @ 02081b28
    ldr r2, [r3] @ 02081b2c
    orr r3, r0, #1 @ 02081b30
    cmp r0, r2 @ 02081b34
    str lr, [r7, #8] @ 02081b38
    str r3, [lr, #4] @ 02081b3c
    blo .L_0208194c @ 02081b40
    ldr r3, [pc, #0x3c] @ 02081b44
    mov r0, r8 @ 02081b48
    ldr r1, [r3] @ 02081b4c
    bl .L_020817cc @ 02081b50
    b .L_0208194c @ 02081b54
.L_02081b58:
    cmp r2, #0 @ 02081b58
    add r3, r2, #3 @ 02081b5c
    movge r3, r2 @ 02081b60
    ldr r2, [r7, #4] @ 02081b64
    asr r3, r3, #2 @ 02081b68
    mov r1, #1 @ 02081b6c
    orr r2, r2, r1, lsl r3 @ 02081b70
    str r2, [r7, #4] @ 02081b74
    b .L_02081a88 @ 02081b78
    .byte 0xb0, 0xf7, 0x08, 0x02, 0xb8, 0xf7, 0x08, 0x02, 0xb8, 0xfb, 0x08, 0x02, 0xa8, 0x4c, 0x0b, 0x02 @ 02081b7c
.L_02081b8c:
@ FUN_02081b8c at 0x02081b8c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02081b8c
    subs fp, r0, #0 @ 02081b90
    sub sp, sp, #0x54 @ 02081b94
    mov r4, r1 @ 02081b98
    str r2, [sp, #4] @ 02081b9c
    mov r7, r3 @ 02081ba0
    beq .L_02081bb4 @ 02081ba4
    ldr r3, [fp, #0x38] @ 02081ba8
    cmp r3, #0 @ 02081bac
    beq .L_02081ddc @ 02081bb0
.L_02081bb4:
    ldrh r3, [r4, #0xc] @ 02081bb4
    and r3, r3, #0x108 @ 02081bb8
    cmp r3, #0x108 @ 02081bbc
    beq .L_02081df0 @ 02081bc0
.L_02081bc4:
    ldr sb, [r4, #0x2c] @ 02081bc4
    cmp sb, #0 @ 02081bc8
    moveq r3, #0x1d @ 02081bcc
    mvneq r0, #0 @ 02081bd0
    streq r3, [fp] @ 02081bd4
    beq .L_02081c00 @ 02081bd8
    cmp r7, #1 @ 02081bdc
    beq .L_02081d84 @ 02081be0
    cmp r7, #2 @ 02081be4
    beq .L_02081c0c @ 02081be8
    cmp r7, #0 @ 02081bec
    beq .L_02081c0c @ 02081bf0
    mov r3, #0x16 @ 02081bf4
    str r3, [fp] @ 02081bf8
    mvn r0, #0 @ 02081bfc
.L_02081c00:
    add sp, sp, #0x54 @ 02081c00
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02081c04
    bx lr @ 02081c08
.L_02081c0c:
    mov r6, #0 @ 02081c0c
    ldr lr, [r4, #0x14] @ 02081c10
    mov r5, r6 @ 02081c14
.L_02081c18:
    cmp lr, #0 @ 02081c18
    beq .L_02081f10 @ 02081c1c
.L_02081c20:
    ldrh ip, [r4, #0xc] @ 02081c20
    bic r3, ip, #0x7e0 @ 02081c24
    bic r3, r3, #5 @ 02081c28
    lsl r3, r3, #0x14 @ 02081c2c
    lsr r3, r3, #0x14 @ 02081c30
    cmp r3, #0 @ 02081c34
    bne .L_02081c58 @ 02081c38
    tst ip, #0x400 @ 02081c3c
    bne .L_02081cb4 @ 02081c40
    ldr r3, [pc, #0x39c] @ 02081c44
    cmp sb, r3 @ 02081c48
    beq .L_02081c70 @ 02081c4c
.L_02081c50:
    orr r3, ip, #0x800 @ 02081c50
    strh r3, [r4, #0xc] @ 02081c54
.L_02081c58:
    mov r0, r4 @ 02081c58
    bl .L_02081034 @ 02081c5c
    subs r5, r0, #0 @ 02081c60
    beq .L_02081f44 @ 02081c64
.L_02081c68:
    mvn r0, #0 @ 02081c68
    b .L_02081c00 @ 02081c6c
.L_02081c70:
    ldr r1, [r4, #0x10] @ 02081c70
    cmp r1, #0 @ 02081c74
    blt .L_02081c50 @ 02081c78
    mov r0, fp @ 02081c7c
    add r2, sp, #0xc @ 02081c80
    bl .L_0208201c @ 02081c84
    cmp r0, #0 @ 02081c88
    bne .L_02081f3c @ 02081c8c
    ldr r3, [sp, #0x14] @ 02081c90
    and r3, r3, #0xf000 @ 02081c94
    cmp r3, #0x8000 @ 02081c98
    bne .L_02081f3c @ 02081c9c
    ldrh r3, [r4, #0xc] @ 02081ca0
    mov r2, #0x400 @ 02081ca4
    orr r3, r3, #0x400 @ 02081ca8
    str r2, [r4, #0x50] @ 02081cac
    strh r3, [r4, #0xc] @ 02081cb0
.L_02081cb4:
    cmp r7, #0 @ 02081cb4
    ldreq sl, [sp, #4] @ 02081cb8
    bne .L_02081ee8 @ 02081cbc
.L_02081cc0:
    cmp r5, #0 @ 02081cc0
    bne .L_02081dfc @ 02081cc4
    ldrh ip, [r4, #0xc] @ 02081cc8
    ands r1, ip, #0x1000 @ 02081ccc
    ldrne r0, [r4, #0x54] @ 02081cd0
    beq .L_02081fa4 @ 02081cd4
.L_02081cd8:
    ldr r8, [r4, #0x34] @ 02081cd8
    ldr r5, [r4, #4] @ 02081cdc
    cmp r8, #0 @ 02081ce0
    ldrne r1, [r4, #0x40] @ 02081ce4
    rsb r6, r5, r0 @ 02081ce8
    rsbne r6, r1, r6 @ 02081cec
    beq .L_02081f24 @ 02081cf0
.L_02081cf4:
    ldr r3, [r4, #0x3c] @ 02081cf4
    ldr lr, [r4, #0x14] @ 02081cf8
    add r2, r6, r5 @ 02081cfc
    rsb r3, lr, r3 @ 02081d00
    add r5, r3, r1 @ 02081d04
    rsb r0, r3, r2 @ 02081d08
.L_02081d0c:
    lsr r3, ip, #0xd @ 02081d0c
    eor r3, r3, #1 @ 02081d10
    cmp sl, r0 @ 02081d14
    movlt r3, #0 @ 02081d18
    andge r3, r3, #1 @ 02081d1c
    cmp r3, #0 @ 02081d20
    beq .L_02081e40 @ 02081d24
    add r3, r5, r0 @ 02081d28
    cmp sl, r3 @ 02081d2c
    bhs .L_02081e40 @ 02081d30
    rsb r3, r0, sl @ 02081d34
    rsb r5, r3, r5 @ 02081d38
    cmp r8, #0 @ 02081d3c
    add r3, lr, r3 @ 02081d40
    stm r4, {r3, r5} @ 02081d44
    beq .L_02081d74 @ 02081d48
    add r3, r4, #0x44 @ 02081d4c
    cmp r8, r3 @ 02081d50
    beq .L_02081d6c @ 02081d54
    ldr r3, [pc, #0x28c] @ 02081d58
    mov r1, r8 @ 02081d5c
    ldr r0, [r3] @ 02081d60
    bl .L_020818d4 @ 02081d64
    ldrh ip, [r4, #0xc] @ 02081d68
.L_02081d6c:
    mov r8, #0 @ 02081d6c
    str r8, [r4, #0x34] @ 02081d70
.L_02081d74:
    bic r3, ip, #0x20 @ 02081d74
    mov r0, #0 @ 02081d78
    strh r3, [r4, #0xc] @ 02081d7c
    b .L_02081c00 @ 02081d80
.L_02081d84:
    mov r0, r4 @ 02081d84
    bl .L_02081034 @ 02081d88
    ldrh ip, [r4, #0xc] @ 02081d8c
    ands r1, ip, #0x1000 @ 02081d90
    ldrne r6, [r4, #0x54] @ 02081d94
    beq .L_02081fc4 @ 02081d98
.L_02081d9c:
    tst ip, #4 @ 02081d9c
    beq .L_02081e18 @ 02081da0
    ldr r3, [r4, #0x34] @ 02081da4
    ldr r5, [r4, #4] @ 02081da8
    cmp r3, #0 @ 02081dac
    rsb r6, r5, r6 @ 02081db0
    beq .L_02081e38 @ 02081db4
    ldr r1, [r4, #0x40] @ 02081db8
    ldr lr, [r4, #0x14] @ 02081dbc
    rsb r6, r1, r6 @ 02081dc0
.L_02081dc4:
    ldr r2, [sp, #4] @ 02081dc4
    mov r7, #0 @ 02081dc8
    add r2, r2, r6 @ 02081dcc
    mov r5, #1 @ 02081dd0
    str r2, [sp, #4] @ 02081dd4
    b .L_02081c18 @ 02081dd8
.L_02081ddc:
    bl .L_02081258 @ 02081ddc
    ldrh r3, [r4, #0xc] @ 02081de0
    and r3, r3, #0x108 @ 02081de4
    cmp r3, #0x108 @ 02081de8
    bne .L_02081bc4 @ 02081dec
.L_02081df0:
    mov r0, r4 @ 02081df0
    bl .L_02081034 @ 02081df4
    b .L_02081bc4 @ 02081df8
.L_02081dfc:
    ldr r8, [r4, #0x34] @ 02081dfc
    cmp r8, #0 @ 02081e00
    beq .L_02081f1c @ 02081e04
    ldrh ip, [r4, #0xc] @ 02081e08
    ldr r5, [r4, #4] @ 02081e0c
    ldr r1, [r4, #0x40] @ 02081e10
    b .L_02081cf4 @ 02081e14
.L_02081e18:
    tst ip, #8 @ 02081e18
    beq .L_02081e38 @ 02081e1c
    ldr r3, [r4] @ 02081e20
    cmp r3, #0 @ 02081e24
    ldrne lr, [r4, #0x14] @ 02081e28
    rsbne r3, lr, r3 @ 02081e2c
    addne r6, r6, r3 @ 02081e30
    bne .L_02081dc4 @ 02081e34
.L_02081e38:
    ldr lr, [r4, #0x14] @ 02081e38
    b .L_02081dc4 @ 02081e3c
.L_02081e40:
    ldr r3, [r4, #0x50] @ 02081e40
    rsb r3, r3, #0 @ 02081e44
    and r6, sl, r3 @ 02081e48
    ldr r0, [r4, #0x20] @ 02081e4c
    mov r1, r6 @ 02081e50
    mov r2, #0 @ 02081e54
    mov lr, pc @ 02081e58
    bx sb @ 02081e5c
    cmn r0, #1 @ 02081e60
    beq .L_02081c58 @ 02081e64
    ldr r1, [r4, #0x34] @ 02081e68
    ldr r3, [r4, #0x14] @ 02081e6c
    mov r5, #0 @ 02081e70
    cmp r1, #0 @ 02081e74
    stm r4, {r3, r5} @ 02081e78
    beq .L_02081e98 @ 02081e7c
    add r3, r4, #0x44 @ 02081e80
    cmp r1, r3 @ 02081e84
    ldrne r3, [pc, #0x15c] @ 02081e88
    ldrne r0, [r3] @ 02081e8c
    blne .L_020818d4 @ 02081e90
    str r5, [r4, #0x34] @ 02081e94
.L_02081e98:
    ldrh r3, [r4, #0xc] @ 02081e98
    subs r6, sl, r6 @ 02081e9c
    bic r3, r3, #0x20 @ 02081ea0
    strh r3, [r4, #0xc] @ 02081ea4
    moveq r0, r6 @ 02081ea8
    beq .L_02081c00 @ 02081eac
    mov r0, fp @ 02081eb0
    mov r1, r4 @ 02081eb4
    bl .L_02083320 @ 02081eb8
    subs r2, r0, #0 @ 02081ebc
    bne .L_02081c58 @ 02081ec0
    ldr r0, [r4, #4] @ 02081ec4
    cmp r6, r0 @ 02081ec8
    bhi .L_02081c58 @ 02081ecc
    ldr r3, [r4] @ 02081ed0
    rsb r5, r6, r0 @ 02081ed4
    add r3, r3, r6 @ 02081ed8
    mov r0, r2 @ 02081edc
    stm r4, {r3, r5} @ 02081ee0
    b .L_02081c00 @ 02081ee4
.L_02081ee8:
    mov r0, fp @ 02081ee8
    ldr r1, [r4, #0x10] @ 02081eec
    add r2, sp, #0xc @ 02081ef0
    bl .L_0208201c @ 02081ef4
    cmp r0, #0 @ 02081ef8
    bne .L_02081c58 @ 02081efc
    ldr r3, [sp, #0x24] @ 02081f00
    ldr r2, [sp, #4] @ 02081f04
    add sl, r2, r3 @ 02081f08
    b .L_02081cc0 @ 02081f0c
.L_02081f10:
    mov r0, r4 @ 02081f10
    bl .L_020823f8 @ 02081f14
    b .L_02081c20 @ 02081f18
.L_02081f1c:
    ldrh ip, [r4, #0xc] @ 02081f1c
    ldr r5, [r4, #4] @ 02081f20
.L_02081f24:
    ldr r3, [r4] @ 02081f24
    ldr lr, [r4, #0x14] @ 02081f28
    rsb r3, lr, r3 @ 02081f2c
    add r5, r3, r5 @ 02081f30
    rsb r0, r3, r6 @ 02081f34
    b .L_02081d0c @ 02081f38
.L_02081f3c:
    ldrh ip, [r4, #0xc] @ 02081f3c
    b .L_02081c50 @ 02081f40
.L_02081f44:
    ldr r1, [sp, #4] @ 02081f44
    mov r2, r7 @ 02081f48
    ldr r0, [r4, #0x20] @ 02081f4c
    mov lr, pc @ 02081f50
    bx sb @ 02081f54
    cmn r0, #1 @ 02081f58
    beq .L_02081c68 @ 02081f5c
    ldr r1, [r4, #0x34] @ 02081f60
    cmp r1, #0 @ 02081f64
    beq .L_02081f84 @ 02081f68
    add r3, r4, #0x44 @ 02081f6c
    cmp r1, r3 @ 02081f70
    ldrne r3, [pc, #0x70] @ 02081f74
    ldrne r0, [r3] @ 02081f78
    blne .L_020818d4 @ 02081f7c
    str r5, [r4, #0x34] @ 02081f80
.L_02081f84:
    ldrh r3, [r4, #0xc] @ 02081f84
    mov r2, #0 @ 02081f88
    ldr r1, [r4, #0x14] @ 02081f8c
    bic r3, r3, #0x820 @ 02081f90
    mov r0, r2 @ 02081f94
    strh r3, [r4, #0xc] @ 02081f98
    stm r4, {r1, r2} @ 02081f9c
    b .L_02081c00 @ 02081fa0
.L_02081fa4:
    ldr r0, [r4, #0x20] @ 02081fa4
    mov r2, #1 @ 02081fa8
    mov lr, pc @ 02081fac
    bx sb @ 02081fb0
    cmn r0, #1 @ 02081fb4
    beq .L_02081c58 @ 02081fb8
    ldrh ip, [r4, #0xc] @ 02081fbc
    b .L_02081cd8 @ 02081fc0
.L_02081fc4:
    mov r2, r7 @ 02081fc4
    ldr r0, [r4, #0x20] @ 02081fc8
    mov lr, pc @ 02081fcc
    bx sb @ 02081fd0
    cmn r0, #1 @ 02081fd4
    mov r6, r0 @ 02081fd8
    beq .L_02081c68 @ 02081fdc
    ldrh ip, [r4, #0xc] @ 02081fe0
    b .L_02081d9c @ 02081fe4
    .byte 0x38, 0x35, 0x08, 0x02, 0x98, 0xf3, 0x08, 0x02 @ 02081fe8
.L_02081ff0:
@ FUN_02081ff0 at 0x02081ff0
    str lr, [sp, #-4]! @ 02081ff0
    mov r3, r2 @ 02081ff4
    ldr r2, [pc, #0x18] @ 02081ff8
    mov ip, r0 @ 02081ffc
    mov lr, r1 @ 02082000
    ldr r0, [r2] @ 02082004
    mov r1, ip @ 02082008
    mov r2, lr @ 0208200c
    .word 0xe49de004 @ 02082010 pop {lr}
    b .L_02081b8c @ 02082014
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02082018
.L_0208201c:
@ FUN_0208201c at 0x0208201c
    push {r4, r5, lr} @ 0208201c
    ldr r4, [pc, #0x38] @ 02082020
    mov r3, #0 @ 02082024
    sub sp, sp, #4 @ 02082028
    mov r5, r0 @ 0208202c
    mov r0, r1 @ 02082030
    mov r1, r2 @ 02082034
    str r3, [r4] @ 02082038
    bl .L_0208502c @ 0208203c
    cmn r0, #1 @ 02082040
    bne .L_02082054 @ 02082044
    ldr r3, [r4] @ 02082048
    cmp r3, #0 @ 0208204c
    strne r3, [r5] @ 02082050
.L_02082054:
    add sp, sp, #4 @ 02082054
    pop {r4, r5, lr} @ 02082058
    bx lr @ 0208205c
    .byte 0x4c, 0xb3, 0x3e, 0x02 @ 02082060
.L_02082064:
    push {r4, r5, lr} @ 02082064
    subs r5, r0, #0 @ 02082068
    sub sp, sp, #4 @ 0208206c
    mov r4, r1 @ 02082070
    beq .L_02082084 @ 02082074
    ldr r3, [r5, #0x38] @ 02082078
    cmp r3, #0 @ 0208207c
    beq .L_02082100 @ 02082080
.L_02082084:
    ldr r3, [r4, #0x2c] @ 02082084
    cmp r3, #0 @ 02082088
    addeq r3, r3, #0x1d @ 0208208c
    mvneq r0, #0 @ 02082090
    streq r3, [r5] @ 02082094
    beq .L_020820d8 @ 02082098
    mov r0, r4 @ 0208209c
    bl .L_02081034 @ 020820a0
    ldrh r3, [r4, #0xc] @ 020820a4
    ands r1, r3, #0x1000 @ 020820a8
    ldrne r0, [r4, #0x54] @ 020820ac
    beq .L_02082108 @ 020820b0
.L_020820b4:
    tst r3, #4 @ 020820b4
    bne .L_020820e4 @ 020820b8
    tst r3, #8 @ 020820bc
    beq .L_020820d8 @ 020820c0
    ldr r2, [r4] @ 020820c4
    cmp r2, #0 @ 020820c8
    ldrne r3, [r4, #0x14] @ 020820cc
    rsbne r3, r3, r2 @ 020820d0
    addne r0, r0, r3 @ 020820d4
.L_020820d8:
    add sp, sp, #4 @ 020820d8
    pop {r4, r5, lr} @ 020820dc
    bx lr @ 020820e0
.L_020820e4:
    ldr r3, [r4, #0x34] @ 020820e4
    ldr r2, [r4, #4] @ 020820e8
    cmp r3, #0 @ 020820ec
    ldrne r3, [r4, #0x40] @ 020820f0
    rsb r0, r2, r0 @ 020820f4
    rsbne r0, r3, r0 @ 020820f8
    b .L_020820d8 @ 020820fc
.L_02082100:
    bl .L_02081258 @ 02082100
    b .L_02082084 @ 02082104
.L_02082108:
    ldr r0, [r4, #0x20] @ 02082108
    mov r2, #1 @ 0208210c
    ldr ip, [r4, #0x2c] @ 02082110
    mov lr, pc @ 02082114
    bx ip @ 02082118
    cmn r0, #1 @ 0208211c
    beq .L_020820d8 @ 02082120
    ldrh r3, [r4, #0xc] @ 02082124
    b .L_020820b4 @ 02082128
.L_0208212c:
@ FUN_0208212c at 0x0208212c
    ldr r3, [pc, #8] @ 0208212c
    mov r1, r0 @ 02082130
    ldr r0, [r3] @ 02082134
    b .L_02082064 @ 02082138
    .byte 0x98, 0xf3, 0x08, 0x02 @ 0208213c
@ FUN_02082140 at 0x02082140
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 02082140
    mov r8, r0 @ 02082144
    mov sl, r1 @ 02082148
    bl .L_02081248 @ 0208214c
    adds r7, r8, #0x2e0 @ 02082150
    moveq sb, r7 @ 02082154
    beq .L_020821bc @ 02082158
    mov sb, #0 @ 0208215c
.L_02082160:
    ldr r6, [r7, #4] @ 02082160
    cmp r6, #1 @ 02082164
    ldr r4, [r7, #8] @ 02082168
    bmi .L_020821b0 @ 0208216c
    mov r5, #0 @ 02082170
.L_02082174:
    ldrsh r3, [r4, #0xc] @ 02082174
    cmp r3, #0 @ 02082178
    add r5, r5, #1 @ 0208217c
    beq .L_020821a4 @ 02082180
    ldr r3, [r4, #0x10] @ 02082184
    cmn r3, #1 @ 02082188
    mov r1, r4 @ 0208218c
    mov r0, r8 @ 02082190
    beq .L_020821a4 @ 02082194
    mov lr, pc @ 02082198
    bx sl @ 0208219c
    orr sb, sb, r0 @ 020821a0
.L_020821a4:
    cmp r6, r5 @ 020821a4
    add r4, r4, #0x60 @ 020821a8
    bne .L_02082174 @ 020821ac
.L_020821b0:
    ldr r7, [r7] @ 020821b0
    cmp r7, #0 @ 020821b4
    bne .L_02082160 @ 020821b8
.L_020821bc:
    bl .L_0208124c @ 020821bc
    mov r0, sb @ 020821c0
    pop {r4, r5, r6, r7, r8, sb, sl, lr} @ 020821c4
    bx lr @ 020821c8
.L_020821cc:
@ FUN_020821cc at 0x020821cc
    push {r4, r5, r6, r7, r8, sl, lr} @ 020821cc
    mov r4, r0 @ 020821d0
    sub sp, sp, #4 @ 020821d4
    mov r8, r1 @ 020821d8
    bl .L_02081248 @ 020821dc
    adds r7, r4, #0x2e0 @ 020821e0
    moveq sl, r7 @ 020821e4
    beq .L_02082248 @ 020821e8
    mov sl, #0 @ 020821ec
.L_020821f0:
    ldr r6, [r7, #4] @ 020821f0
    cmp r6, #1 @ 020821f4
    ldr r4, [r7, #8] @ 020821f8
    bmi .L_0208223c @ 020821fc
    mov r5, #0 @ 02082200
.L_02082204:
    ldrsh r3, [r4, #0xc] @ 02082204
    cmp r3, #0 @ 02082208
    add r5, r5, #1 @ 0208220c
    beq .L_02082230 @ 02082210
    ldr r3, [r4, #0x10] @ 02082214
    cmn r3, #1 @ 02082218
    mov r0, r4 @ 0208221c
    beq .L_02082230 @ 02082220
    mov lr, pc @ 02082224
    bx r8 @ 02082228
    orr sl, sl, r0 @ 0208222c
.L_02082230:
    cmp r6, r5 @ 02082230
    add r4, r4, #0x60 @ 02082234
    bne .L_02082204 @ 02082238
.L_0208223c:
    ldr r7, [r7] @ 0208223c
    cmp r7, #0 @ 02082240
    bne .L_020821f0 @ 02082244
.L_02082248:
    bl .L_0208124c @ 02082248
    mov r0, sl @ 0208224c
    add sp, sp, #4 @ 02082250
    pop {r4, r5, r6, r7, r8, sl, lr} @ 02082254
    bx lr @ 02082258
.L_0208225c:
@ FUN_0208225c at 0x0208225c
    push {r4, r5, r6, r7, lr} @ 0208225c
    mul r4, r2, r3 @ 02082260
    sub sp, sp, #0x1c @ 02082264
    mov r5, r3 @ 02082268
    mov r7, r2 @ 0208226c
    mov r3, #1 @ 02082270
    add r2, sp, #0x10 @ 02082274
    subs r6, r0, #0 @ 02082278
    str r1, [sp, #0x10] @ 0208227c
    stmib sp, {r2, r3} @ 02082280
    str r4, [sp, #0x14] @ 02082284
    str r4, [sp, #0xc] @ 02082288
    beq .L_0208229c @ 0208228c
    ldr r3, [r6, #0x38] @ 02082290
    cmp r3, #0 @ 02082294
    beq .L_020822d8 @ 02082298
.L_0208229c:
    ldr r1, [sp, #0x30] @ 0208229c
    mov r0, r6 @ 020822a0
    add r2, sp, #4 @ 020822a4
    bl .L_02084130 @ 020822a8
    cmp r0, #0 @ 020822ac
    mov r1, r7 @ 020822b0
    beq .L_020822c8 @ 020822b4
    ldr r0, [sp, #0xc] @ 020822b8
    rsb r0, r0, r4 @ 020822bc
    bl .L_02080380 @ 020822c0
    mov r5, r0 @ 020822c4
.L_020822c8:
    mov r0, r5 @ 020822c8
    add sp, sp, #0x1c @ 020822cc
    pop {r4, r5, r6, r7, lr} @ 020822d0
    bx lr @ 020822d4
.L_020822d8:
    bl .L_02081258 @ 020822d8
    b .L_0208229c @ 020822dc
.L_020822e0:
@ FUN_020822e0 at 0x020822e0
    push {r4, r5, lr} @ 020822e0
    ldr ip, [pc, #0x34] @ 020822e4
    ldr lr, [ip] @ 020822e8
    mov r4, r0 @ 020822ec
    mov ip, r1 @ 020822f0
    mov r5, r2 @ 020822f4
    sub sp, sp, #0xc @ 020822f8
    str r3, [sp] @ 020822fc
    mov r0, lr @ 02082300
    mov r1, r4 @ 02082304
    mov r2, ip @ 02082308
    mov r3, r5 @ 0208230c
    bl .L_0208225c @ 02082310
    add sp, sp, #0xc @ 02082314
    pop {r4, r5, lr} @ 02082318
    bx lr @ 0208231c
    .byte 0x98, 0xf3, 0x08, 0x02, 0x3c, 0x20, 0x9f, 0xe5, 0x3c, 0x30, 0x9f, 0xe5, 0x03, 0x30, 0x62, 0xe0 @ 02082320
    .byte 0x70, 0x40, 0x2d, 0xe9, 0x43, 0x61, 0xb0, 0xe1, 0x07, 0x00, 0x00, 0x0a, 0x02, 0x50, 0xa0, 0xe1 @ 02082330
    .byte 0x00, 0x40, 0xa0, 0xe3, 0x01, 0x40, 0x84, 0xe2, 0x04, 0xc0, 0x95, 0xe4, 0x0f, 0xe0, 0xa0, 0xe1 @ 02082340
    .byte 0x1c, 0xff, 0x2f, 0xe1, 0x04, 0x00, 0x56, 0xe1, 0xf9, 0xff, 0xff, 0x1a, 0xa3, 0x0d, 0x00, 0xeb @ 02082350
    .byte 0x70, 0x40, 0xbd, 0xe8, 0x1e, 0xff, 0x2f, 0xe1, 0x34, 0xf3, 0x08, 0x02, 0x38, 0xf3, 0x08, 0x02 @ 02082360
@ arm9_startup_call_1 at 0x02082370
    ldr r2, [pc, #0x70] @ 02082370
    ldr r3, [pc, #0x70] @ 02082374
    rsb r3, r2, r3 @ 02082378
    push {r4, r5, r6, lr} @ 0208237c
    asrs r6, r3, #2 @ 02082380
    beq .L_020823a8 @ 02082384
    mov r5, r2 @ 02082388
    mov r4, #0 @ 0208238c
.L_02082390:
    add r4, r4, #1 @ 02082390
    ldr ip, [r5], #4 @ 02082394
    mov lr, pc @ 02082398
    bx ip @ 0208239c
    cmp r6, r4 @ 020823a0
    bne .L_02082390 @ 020823a4
.L_020823a8:
    bl .L_02000220 @ 020823a8
    ldr r2, [pc, #0x3c] @ 020823ac
    ldr r3, [pc, #0x3c] @ 020823b0
    rsb r3, r2, r3 @ 020823b4
    asrs r6, r3, #2 @ 020823b8
    beq .L_020823e0 @ 020823bc
    mov r5, r2 @ 020823c0
    mov r4, #0 @ 020823c4
.L_020823c8:
    add r4, r4, #1 @ 020823c8
    ldr ip, [r5], #4 @ 020823cc
    mov lr, pc @ 020823d0
    bx ip @ 020823d4
    cmp r6, r4 @ 020823d8
    bne .L_020823c8 @ 020823dc
.L_020823e0:
    pop {r4, r5, r6, lr} @ 020823e0
    bx lr @ 020823e4
    .byte 0x30, 0xf3, 0x08, 0x02, 0x30, 0xf3, 0x08, 0x02, 0x30, 0xf3, 0x08, 0x02, 0x34, 0xf3, 0x08, 0x02 @ 020823e8
.L_020823f8:
@ FUN_020823f8 at 0x020823f8
    push {r4, r5, r6, r7, lr} @ 020823f8
    ldrh r3, [r0, #0xc] @ 020823fc
    tst r3, #2 @ 02082400
    addne r2, r0, #0x47 @ 02082404
    movne r3, #1 @ 02082408
    sub sp, sp, #0x4c @ 0208240c
    mov r4, r0 @ 02082410
    strne r3, [r0, #0x18] @ 02082414
    strne r2, [r0, #0x14] @ 02082418
    strne r2, [r0] @ 0208241c
    bne .L_020824bc @ 02082420
    ldr r1, [r0, #0x10] @ 02082424
    cmp r1, #0 @ 02082428
    blt .L_020824c8 @ 0208242c
    ldr r6, [pc, #0x11c] @ 02082430
    add r2, sp, #4 @ 02082434
    ldr r0, [r6] @ 02082438
    bl .L_0208201c @ 0208243c
    cmp r0, #0 @ 02082440
    ldrhlt r3, [r4, #0xc] @ 02082444
    blt .L_020824cc @ 02082448
    ldr r3, [sp, #0xc] @ 0208244c
    and r3, r3, #0xf000 @ 02082450
    cmp r3, #0x2000 @ 02082454
    movne r7, #0 @ 02082458
    moveq r7, #1 @ 0208245c
    cmp r3, #0x8000 @ 02082460
    beq .L_02082504 @ 02082464
.L_02082468:
    ldrh r3, [r4, #0xc] @ 02082468
    orr r3, r3, #0x800 @ 0208246c
    strh r3, [r4, #0xc] @ 02082470
    mov r5, #0x400 @ 02082474
.L_02082478:
    ldr r0, [r6] @ 02082478
    mov r1, r5 @ 0208247c
    bl .L_0208274c @ 02082480
    cmp r0, #0 @ 02082484
    beq .L_02082530 @ 02082488
    ldr r3, [pc, #0xc0] @ 0208248c
    ldrh r2, [r4, #0xc] @ 02082490
    ldr r1, [r3] @ 02082494
    ldr r3, [pc, #0xb8] @ 02082498
    orr r2, r2, #0x80 @ 0208249c
    cmp r7, #0 @ 020824a0
    str r3, [r1, #0x3c] @ 020824a4
    strh r2, [r4, #0xc] @ 020824a8
    str r0, [r4, #0x14] @ 020824ac
    str r5, [r4, #0x18] @ 020824b0
    str r0, [r4] @ 020824b4
    bne .L_020824e8 @ 020824b8
.L_020824bc:
    add sp, sp, #0x4c @ 020824bc
    pop {r4, r5, r6, r7, lr} @ 020824c0
    bx lr @ 020824c4
.L_020824c8:
    ldr r6, [pc, #0x84] @ 020824c8
.L_020824cc:
    tst r3, #0x80 @ 020824cc
    moveq r5, #0x400 @ 020824d0
    movne r5, #0x40 @ 020824d4
    orr r3, r3, #0x800 @ 020824d8
    mov r7, #0 @ 020824dc
    strh r3, [r4, #0xc] @ 020824e0
    b .L_02082478 @ 020824e4
.L_020824e8:
    ldr r0, [r4, #0x10] @ 020824e8
    bl .L_020850a0 @ 020824ec
    cmp r0, #0 @ 020824f0
    ldrhne r3, [r4, #0xc] @ 020824f4
    orrne r3, r3, #1 @ 020824f8
    strhne r3, [r4, #0xc] @ 020824fc
    b .L_020824bc @ 02082500
.L_02082504:
    ldr r2, [r4, #0x2c] @ 02082504
    ldr r3, [pc, #0x4c] @ 02082508
    cmp r2, r3 @ 0208250c
    bne .L_02082468 @ 02082510
    ldrh r3, [r4, #0xc] @ 02082514
    mov r2, #0x400 @ 02082518
    orr r3, r3, r2 @ 0208251c
    mov r5, r2 @ 02082520
    strh r3, [r4, #0xc] @ 02082524
    str r2, [r4, #0x50] @ 02082528
    b .L_02082478 @ 0208252c
.L_02082530:
    ldrh r3, [r4, #0xc] @ 02082530
    add r1, r4, #0x47 @ 02082534
    orr r3, r3, #2 @ 02082538
    mov r2, #1 @ 0208253c
    str r2, [r4, #0x18] @ 02082540
    strh r3, [r4, #0xc] @ 02082544
    str r1, [r4, #0x14] @ 02082548
    str r1, [r4] @ 0208254c
    b .L_020824bc @ 02082550
    .byte 0x98, 0xf3, 0x08, 0x02, 0x40, 0x13, 0x08, 0x02, 0x38, 0x35, 0x08, 0x02 @ 02082554
.L_02082560:
@ FUN_02082560 at 0x02082560
    str lr, [sp, #-4]! @ 02082560
    mov r2, r1 @ 02082564
    ldr r1, [pc, #0x1c] @ 02082568
    mov r3, r0 @ 0208256c
    sub sp, sp, #4 @ 02082570
    ldr r0, [r1] @ 02082574
    mov r1, r3 @ 02082578
    bl .L_02082590 @ 0208257c
    add sp, sp, #4 @ 02082580
    .word 0xe49de004 @ 02082584 pop {lr}
    bx lr @ 02082588
    .byte 0x98, 0xf3, 0x08, 0x02 @ 0208258c
.L_02082590:
@ FUN_02082590 at 0x02082590
    push {r4, r5, r6, r7, lr} @ 02082590
    cmp r1, #8 @ 02082594
    mov r4, r1 @ 02082598
    sub sp, sp, #4 @ 0208259c
    mov r1, r2 @ 020825a0
    mov r5, r0 @ 020825a4
    bls .L_020826c8 @ 020825a8
    add r2, r2, #0xb @ 020825ac
    cmp r4, #0xf @ 020825b0
    movls r4, #0x10 @ 020825b4
    cmp r2, #0x16 @ 020825b8
    bichi r6, r2, #7 @ 020825bc
    movls r6, #0x10 @ 020825c0
    movls r2, #0 @ 020825c4
    lsrhi r2, r6, #0x1f @ 020825c8
    cmp r6, r1 @ 020825cc
    movhs r3, r2 @ 020825d0
    orrlo r3, r2, #1 @ 020825d4
    cmp r3, #0 @ 020825d8
    movne r3, #0xc @ 020825dc
    movne r0, #0 @ 020825e0
    strne r3, [r5] @ 020825e4
    beq .L_020825f8 @ 020825e8
.L_020825ec:
    add sp, sp, #4 @ 020825ec
    pop {r4, r5, r6, r7, lr} @ 020825f0
    bx lr @ 020825f4
.L_020825f8:
    add r1, r6, #0x10 @ 020825f8
    add r1, r4, r1 @ 020825fc
    mov r0, r5 @ 02082600
    bl .L_0208274c @ 02082604
    subs r7, r0, #0 @ 02082608
    moveq r0, r7 @ 0208260c
    beq .L_020825ec @ 02082610
    mov r0, r5 @ 02082614
    bl .L_020830f0 @ 02082618
    mov r1, r4 @ 0208261c
    mov r0, r7 @ 02082620
    bl .L_0208047c @ 02082624
    sub r0, r7, #8 @ 02082628
    cmp r1, #0 @ 0208262c
    moveq r4, r0 @ 02082630
    beq .L_020826a4 @ 02082634
    add r3, r7, r4 @ 02082638
    rsb r2, r4, #0 @ 0208263c
    sub r3, r3, #1 @ 02082640
    and r3, r3, r2 @ 02082644
    sub r2, r3, #8 @ 02082648
    rsb ip, r0, r2 @ 0208264c
    ldr r1, [r0, #4] @ 02082650
    cmp ip, #0xf @ 02082654
    addle r2, r2, r4 @ 02082658
    rsble ip, r0, r2 @ 0208265c
    bic r1, r1, #3 @ 02082660
    rsb r1, ip, r1 @ 02082664
    orr r3, r1, #1 @ 02082668
    str r3, [r2, #4] @ 0208266c
    add r1, r2, r1 @ 02082670
    ldr r3, [r1, #4] @ 02082674
    orr r3, r3, #1 @ 02082678
    str r3, [r1, #4] @ 0208267c
    mov r4, r2 @ 02082680
    ldr r2, [r0, #4] @ 02082684
    and r2, r2, #1 @ 02082688
    orr r2, ip, r2 @ 0208268c
    str r2, [r0, #4] @ 02082690
    mov r1, r7 @ 02082694
    mov r0, r5 @ 02082698
    bl .L_020818d4 @ 0208269c
    mov r0, r4 @ 020826a0
.L_020826a4:
    ldr r3, [r0, #4] @ 020826a4
    bic r3, r3, #3 @ 020826a8
    rsb r3, r6, r3 @ 020826ac
    cmp r3, #0xf @ 020826b0
    bgt .L_020826d0 @ 020826b4
.L_020826b8:
    mov r0, r5 @ 020826b8
    bl .L_020830f4 @ 020826bc
    add r0, r4, #8 @ 020826c0
    b .L_020825ec @ 020826c4
.L_020826c8:
    bl .L_0208274c @ 020826c8
    b .L_020825ec @ 020826cc
.L_020826d0:
    add r1, r6, r4 @ 020826d0
    orr r3, r3, #1 @ 020826d4
    str r3, [r1, #4] @ 020826d8
    ldr r2, [r0, #4] @ 020826dc
    and r2, r2, #1 @ 020826e0
    orr r2, r6, r2 @ 020826e4
    str r2, [r0, #4] @ 020826e8
    add r1, r1, #8 @ 020826ec
    mov r0, r5 @ 020826f0
    bl .L_020818d4 @ 020826f4
    b .L_020826b8 @ 020826f8
.L_020826fc:
@ FUN_020826fc at 0x020826fc
    str lr, [sp, #-4]! @ 020826fc
    ldr r3, [pc, #0x18] @ 02082700
    mov r1, r0 @ 02082704
    sub sp, sp, #4 @ 02082708
    ldr r0, [r3] @ 0208270c
    bl .L_020818d4 @ 02082710
    add sp, sp, #4 @ 02082714
    .word 0xe49de004 @ 02082718 pop {lr}
    bx lr @ 0208271c
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02082720
.L_02082724:
@ FUN_02082724 at 0x02082724
    str lr, [sp, #-4]! @ 02082724
    ldr r3, [pc, #0x18] @ 02082728
    mov r1, r0 @ 0208272c
    sub sp, sp, #4 @ 02082730
    ldr r0, [r3] @ 02082734
    bl .L_0208274c @ 02082738
    add sp, sp, #4 @ 0208273c
    .word 0xe49de004 @ 02082740 pop {lr}
    bx lr @ 02082744
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02082748
.L_0208274c:
@ FUN_0208274c at 0x0208274c
    add r3, r1, #0xb @ 0208274c
    cmp r3, #0x16 @ 02082750
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02082754
    bichi r5, r3, #7 @ 02082758
    movls r5, #0x10 @ 0208275c
    movls r3, #0 @ 02082760
    lsrhi r3, r5, #0x1f @ 02082764
    cmp r5, r1 @ 02082768
    orrlo r3, r3, #1 @ 0208276c
    cmp r3, #0 @ 02082770
    mov r7, r0 @ 02082774
    movne r3, #0xc @ 02082778
    sub sp, sp, #0xc @ 0208277c
    movne r0, #0 @ 02082780
    strne r3, [r7] @ 02082784
    bne .L_020827ec @ 02082788
    mov r0, r7 @ 0208278c
    bl .L_020830f0 @ 02082790
    cmp r5, #0x1f8 @ 02082794
    bhs .L_020827f8 @ 02082798
    ldr r8, [pc, #0x700] @ 0208279c
    lsr r2, r5, #3 @ 020827a0
    add r3, r8, r2, lsl #3 @ 020827a4
    ldr r4, [r3, #0xc] @ 020827a8
    cmp r3, r4 @ 020827ac
    mov sl, r8 @ 020827b0
    beq .L_02082af4 @ 020827b4
.L_020827b8:
    ldr r3, [r4, #4] @ 020827b8
    bic r3, r3, #3 @ 020827bc
    add r3, r4, r3 @ 020827c0
    ldr r2, [r3, #4] @ 020827c4
    ldr r0, [r4, #0xc] @ 020827c8
    ldr r1, [r4, #8] @ 020827cc
    orr r2, r2, #1 @ 020827d0
    str r1, [r0, #8] @ 020827d4
    str r0, [r1, #0xc] @ 020827d8
    str r2, [r3, #4] @ 020827dc
    mov r0, r7 @ 020827e0
    bl .L_020830f4 @ 020827e4
    add r0, r4, #8 @ 020827e8
.L_020827ec:
    add sp, sp, #0xc @ 020827ec
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 020827f0
    bx lr @ 020827f4
.L_020827f8:
    lsrs r2, r5, #9 @ 020827f8
    lsreq r0, r5, #3 @ 020827fc
    lsleq r3, r0, #3 @ 02082800
    bne .L_020828a8 @ 02082804
.L_02082808:
    ldr r8, [pc, #0x694] @ 02082808
    add r1, r3, r8 @ 0208280c
    ldr r4, [r1, #0xc] @ 02082810
    cmp r1, r4 @ 02082814
    mov sl, r8 @ 02082818
    bne .L_02082838 @ 0208281c
    b .L_02082850 @ 02082820
.L_02082824:
    cmp r2, #0 @ 02082824
    bge .L_0208294c @ 02082828
    ldr r4, [r4, #0xc] @ 0208282c
    cmp r1, r4 @ 02082830
    beq .L_02082850 @ 02082834
.L_02082838:
    ldr r3, [r4, #4] @ 02082838
    bic r3, r3, #3 @ 0208283c
    rsb r2, r5, r3 @ 02082840
    cmp r2, #0xf @ 02082844
    ble .L_02082824 @ 02082848
    sub r0, r0, #1 @ 0208284c
.L_02082850:
    add lr, r0, #1 @ 02082850
.L_02082854:
    ldr r6, [pc, #0x64c] @ 02082854
    ldr r4, [r6, #8] @ 02082858
    cmp r6, r4 @ 0208285c
    beq .L_02082a40 @ 02082860
    ldr r3, [r4, #4] @ 02082864
    bic r2, r3, #3 @ 02082868
    rsb r0, r5, r2 @ 0208286c
    cmp r0, #0xf @ 02082870
    bgt .L_02082918 @ 02082874
    cmp r0, #0 @ 02082878
    str r6, [r6, #0xc] @ 0208287c
    str r6, [r6, #8] @ 02082880
    blt .L_0208297c @ 02082884
    add r2, r4, r2 @ 02082888
    ldr r3, [r2, #4] @ 0208288c
    orr r3, r3, #1 @ 02082890
    mov r0, r7 @ 02082894
    str r3, [r2, #4] @ 02082898
    bl .L_020830f4 @ 0208289c
    add r0, r4, #8 @ 020828a0
    b .L_020827ec @ 020828a4
.L_020828a8:
    cmp r2, #4 @ 020828a8
    lsrls r3, r5, #6 @ 020828ac
    addls r0, r3, #0x38 @ 020828b0
    lslls r3, r0, #3 @ 020828b4
    bls .L_02082808 @ 020828b8
    cmp r2, #0x14 @ 020828bc
    addls r0, r2, #0x5b @ 020828c0
    lslls r3, r0, #3 @ 020828c4
    bls .L_02082808 @ 020828c8
    cmp r2, #0x54 @ 020828cc
    lsrls r3, r5, #0xc @ 020828d0
    addls r0, r3, #0x6e @ 020828d4
    lslls r3, r0, #3 @ 020828d8
    bls .L_02082808 @ 020828dc
    cmp r2, #0x154 @ 020828e0
    lsrls r3, r5, #0xf @ 020828e4
    addls r0, r3, #0x77 @ 020828e8
    lslls r3, r0, #3 @ 020828ec
    bls .L_02082808 @ 020828f0
    mov r3, #0x550 @ 020828f4
    add r3, r3, #4 @ 020828f8
    cmp r2, r3 @ 020828fc
    lsrls r3, r5, #0x12 @ 02082900
    addls r0, r3, #0x7c @ 02082904
    movhi r0, #0x7e @ 02082908
    subhi r3, r3, #0x164 @ 0208290c
    lslls r3, r0, #3 @ 02082910
    b .L_02082808 @ 02082914
.L_02082918:
    add r2, r4, r5 @ 02082918
    orr r1, r0, #1 @ 0208291c
    orr r3, r5, #1 @ 02082920
    str r0, [r2, r0] @ 02082924
    str r3, [r4, #4] @ 02082928
    str r2, [r6, #0xc] @ 0208292c
    str r2, [r6, #8] @ 02082930
    mov r0, r7 @ 02082934
    stmib r2, {r1, r6} @ 02082938
    str r6, [r2, #0xc] @ 0208293c
    bl .L_020830f4 @ 02082940
    add r0, r4, #8 @ 02082944
    b .L_020827ec @ 02082948
.L_0208294c:
    add r0, r4, r3 @ 0208294c
    ldr r3, [r0, #4] @ 02082950
    ldr r1, [r4, #0xc] @ 02082954
    ldr r2, [r4, #8] @ 02082958
    orr r3, r3, #1 @ 0208295c
    str r3, [r0, #4] @ 02082960
    str r2, [r1, #8] @ 02082964
    mov r0, r7 @ 02082968
    str r1, [r2, #0xc] @ 0208296c
    bl .L_020830f4 @ 02082970
    add r0, r4, #8 @ 02082974
    b .L_020827ec @ 02082978
.L_0208297c:
    cmp r2, #0x200 @ 0208297c
    blo .L_02082c08 @ 02082980
    lsrs r1, r2, #9 @ 02082984
    lsreq r1, r2, #3 @ 02082988
    lsleq r3, r1, #3 @ 0208298c
    beq .L_02082a00 @ 02082990
    cmp r1, #4 @ 02082994
    lsrls r3, r2, #6 @ 02082998
    addls r1, r3, #0x38 @ 0208299c
    lslls r3, r1, #3 @ 020829a0
    bls .L_02082a00 @ 020829a4
    cmp r1, #0x14 @ 020829a8
    addls r1, r1, #0x5b @ 020829ac
    lslls r3, r1, #3 @ 020829b0
    bls .L_02082a00 @ 020829b4
    cmp r1, #0x54 @ 020829b8
    lsrls r3, r2, #0xc @ 020829bc
    addls r1, r3, #0x6e @ 020829c0
    lslls r3, r1, #3 @ 020829c4
    bls .L_02082a00 @ 020829c8
    cmp r1, #0x154 @ 020829cc
    lsrls r3, r2, #0xf @ 020829d0
    addls r1, r3, #0x77 @ 020829d4
    lslls r3, r1, #3 @ 020829d8
    bls .L_02082a00 @ 020829dc
    mov r3, #0x550 @ 020829e0
    add r3, r3, #4 @ 020829e4
    cmp r1, r3 @ 020829e8
    lsrls r3, r2, #0x12 @ 020829ec
    addls r1, r3, #0x7c @ 020829f0
    movhi r1, #0x7e @ 020829f4
    subhi r3, r3, #0x164 @ 020829f8
    lslls r3, r1, #3 @ 020829fc
.L_02082a00:
    add ip, r3, r8 @ 02082a00
    ldr r0, [ip, #8] @ 02082a04
    cmp ip, r0 @ 02082a08
    beq .L_02082dc0 @ 02082a0c
.L_02082a10:
    ldr r3, [r0, #4] @ 02082a10
    bic r3, r3, #3 @ 02082a14
    cmp r2, r3 @ 02082a18
    bhs .L_02082a2c @ 02082a1c
    ldr r0, [r0, #8] @ 02082a20
    cmp ip, r0 @ 02082a24
    bne .L_02082a10 @ 02082a28
.L_02082a2c:
    ldr ip, [r0, #0xc] @ 02082a2c
.L_02082a30:
    str ip, [r4, #0xc] @ 02082a30
    str r0, [r4, #8] @ 02082a34
    str r4, [r0, #0xc] @ 02082a38
    str r4, [ip, #8] @ 02082a3c
.L_02082a40:
    ldr r0, [sl, #4] @ 02082a40
.L_02082a44:
    cmp lr, #0 @ 02082a44
    add r3, lr, #3 @ 02082a48
    movge r3, lr @ 02082a4c
    asr r3, r3, #2 @ 02082a50
    mov r2, #1 @ 02082a54
    lsl r2, r2, r3 @ 02082a58
    cmp r2, r0 @ 02082a5c
    bhi .L_02082b0c @ 02082a60
    tst r2, r0 @ 02082a64
    beq .L_02082c3c @ 02082a68
.L_02082a6c:
    add sb, r8, lr, lsl #3 @ 02082a6c
    mov sl, lr @ 02082a70
    mov r1, sb @ 02082a74
.L_02082a78:
    ldr r4, [r1, #0xc] @ 02082a78
    cmp r1, r4 @ 02082a7c
    bne .L_02082a9c @ 02082a80
    b .L_02082c64 @ 02082a84
.L_02082a88:
    cmp ip, #0 @ 02082a88
    bge .L_02082c78 @ 02082a8c
    ldr r4, [r4, #0xc] @ 02082a90
    cmp r1, r4 @ 02082a94
    beq .L_02082c64 @ 02082a98
.L_02082a9c:
    ldr r3, [r4, #4] @ 02082a9c
    bic r3, r3, #3 @ 02082aa0
    rsb ip, r5, r3 @ 02082aa4
    cmp ip, #0xf @ 02082aa8
    ble .L_02082a88 @ 02082aac
    orr r3, r5, #1 @ 02082ab0
    add r2, r4, r5 @ 02082ab4
    ldr r0, [r4, #0xc] @ 02082ab8
    str r3, [r4, #4] @ 02082abc
    ldr r1, [r4, #8]! @ 02082ac0
    orr r3, ip, #1 @ 02082ac4
    str r1, [r0, #8] @ 02082ac8
    str r0, [r1, #0xc] @ 02082acc
    str r2, [r6, #8] @ 02082ad0
    str r2, [r6, #0xc] @ 02082ad4
    mov r0, r7 @ 02082ad8
    str ip, [r2, ip] @ 02082adc
    stmib r2, {r3, r6} @ 02082ae0
    str r6, [r2, #0xc] @ 02082ae4
    bl .L_020830f4 @ 02082ae8
    mov r0, r4 @ 02082aec
    b .L_020827ec @ 02082af0
.L_02082af4:
    add r3, r4, #8 @ 02082af4
    ldr r4, [r3, #0xc] @ 02082af8
    cmp r3, r4 @ 02082afc
    bne .L_020827b8 @ 02082b00
    add lr, r2, #2 @ 02082b04
    b .L_02082854 @ 02082b08
.L_02082b0c:
    ldr r2, [pc, #0x390] @ 02082b0c
    ldr r4, [r2, #8] @ 02082b10
    ldr r3, [r4, #4] @ 02082b14
    bic r8, r3, #3 @ 02082b18
    rsb r0, r5, r8 @ 02082b1c
    cmp r0, #0xf @ 02082b20
    movgt r3, #0 @ 02082b24
    movle r3, #1 @ 02082b28
    cmp r5, r8 @ 02082b2c
    orrhi r3, r3, #1 @ 02082b30
    cmp r3, #0 @ 02082b34
    mov sb, r4 @ 02082b38
    beq .L_02082bdc @ 02082b3c
    ldr r3, [pc, #0x364] @ 02082b40
    ldr fp, [pc, #0x364] @ 02082b44
    ldr r2, [r3] @ 02082b48
    ldr r1, [fp] @ 02082b4c
    add r2, r2, #0x10 @ 02082b50
    cmn r1, #1 @ 02082b54
    add r6, r5, r2 @ 02082b58
    addne r3, r6, #0xff0 @ 02082b5c
    addne r3, r3, #0xf @ 02082b60
    bicne r6, r3, #0xff0 @ 02082b64
    bicne r6, r6, #0xf @ 02082b68
    mov r0, r7 @ 02082b6c
    mov r1, r6 @ 02082b70
    bl .L_020834c8 @ 02082b74
    cmn r0, #1 @ 02082b78
    beq .L_02082db4 @ 02082b7c
    add r1, r4, r8 @ 02082b80
    cmp r1, r0 @ 02082b84
    mov sl, r0 @ 02082b88
    bls .L_02082ca8 @ 02082b8c
    ldr r3, [pc, #0x30c] @ 02082b90
    cmp r4, r3 @ 02082b94
    beq .L_02082e34 @ 02082b98
    ldr r3, [pc, #0x300] @ 02082b9c
    ldr r4, [r3, #8] @ 02082ba0
.L_02082ba4:
    ldr r2, [r4, #4] @ 02082ba4
    bic r2, r2, #3 @ 02082ba8
    rsb r0, r5, r2 @ 02082bac
    cmp r0, #0xf @ 02082bb0
    movgt r3, #0 @ 02082bb4
    movle r3, #1 @ 02082bb8
    cmp r5, r2 @ 02082bbc
    orrhi r3, r3, #1 @ 02082bc0
    cmp r3, #0 @ 02082bc4
    beq .L_02082bdc @ 02082bc8
    mov r0, r7 @ 02082bcc
    bl .L_020830f4 @ 02082bd0
    mov r0, #0 @ 02082bd4
    b .L_020827ec @ 02082bd8
.L_02082bdc:
    add r1, r4, r5 @ 02082bdc
    orr r2, r0, #1 @ 02082be0
    orr r3, r5, #1 @ 02082be4
    str r3, [r4, #4] @ 02082be8
    str r2, [r1, #4] @ 02082bec
    ldr r2, [pc, #0x2ac] @ 02082bf0
    mov r0, r7 @ 02082bf4
    str r1, [r2, #8] @ 02082bf8
    bl .L_020830f4 @ 02082bfc
    add r0, r4, #8 @ 02082c00
    b .L_020827ec @ 02082c04
.L_02082c08:
    lsr r2, r2, #3 @ 02082c08
    ldr r0, [sl, #4] @ 02082c0c
    lsr r1, r2, #2 @ 02082c10
    mov r3, #1 @ 02082c14
    orr r0, r0, r3, lsl r1 @ 02082c18
    add r2, r8, r2, lsl #3 @ 02082c1c
    ldr r3, [r2, #8] @ 02082c20
    str r2, [r4, #0xc] @ 02082c24
    str r3, [r4, #8] @ 02082c28
    str r0, [sl, #4] @ 02082c2c
    str r4, [r3, #0xc] @ 02082c30
    str r4, [r2, #8] @ 02082c34
    b .L_02082a44 @ 02082c38
.L_02082c3c:
    lsl r2, r2, #1 @ 02082c3c
    bic r3, lr, #3 @ 02082c40
    tst r0, r2 @ 02082c44
    add lr, r3, #4 @ 02082c48
    bne .L_02082a6c @ 02082c4c
.L_02082c50:
    lsl r2, r2, #1 @ 02082c50
    tst r0, r2 @ 02082c54
    add lr, lr, #4 @ 02082c58
    beq .L_02082c50 @ 02082c5c
    b .L_02082a6c @ 02082c60
.L_02082c64:
    add sl, sl, #1 @ 02082c64
    tst sl, #3 @ 02082c68
    beq .L_02082dd8 @ 02082c6c
    add r1, r1, #8 @ 02082c70
    b .L_02082a78 @ 02082c74
.L_02082c78:
    add r1, r4, r3 @ 02082c78
    ldr r3, [r1, #4] @ 02082c7c
    ldr r0, [r4, #0xc] @ 02082c80
    ldr r2, [r4, #8]! @ 02082c84
    orr r3, r3, #1 @ 02082c88
    str r2, [r0, #8] @ 02082c8c
    str r0, [r2, #0xc] @ 02082c90
    str r3, [r1, #4] @ 02082c94
    mov r0, r7 @ 02082c98
    bl .L_020830f4 @ 02082c9c
    mov r0, r4 @ 02082ca0
    b .L_020827ec @ 02082ca4
.L_02082ca8:
    ldr ip, [pc, #0x204] @ 02082ca8
    ldr r3, [ip] @ 02082cac
    add r2, r6, r3 @ 02082cb0
    str r2, [ip] @ 02082cb4
    beq .L_02082e48 @ 02082cb8
.L_02082cbc:
    ldr r3, [fp] @ 02082cbc
    cmn r3, #1 @ 02082cc0
    rsbne r3, r1, r0 @ 02082cc4
    ldreq r3, [pc, #0x1e0] @ 02082cc8
    addne r3, r2, r3 @ 02082ccc
    streq r0, [r3] @ 02082cd0
    strne r3, [ip] @ 02082cd4
    ands r3, r0, #7 @ 02082cd8
    rsbne r1, r3, #8 @ 02082cdc
    addne sl, r0, r1 @ 02082ce0
    moveq r1, r3 @ 02082ce4
    add r3, sl, r6 @ 02082ce8
    lsl r3, r3, #0x14 @ 02082cec
    lsr r3, r3, #0x14 @ 02082cf0
    rsb r3, r3, #0x1000 @ 02082cf4
    add r4, r1, r3 @ 02082cf8
    mov r1, r4 @ 02082cfc
    mov r0, r7 @ 02082d00
    str ip, [sp, #4] @ 02082d04
    bl .L_020834c8 @ 02082d08
    cmn r0, #1 @ 02082d0c
    rsbne r3, sl, r0 @ 02082d10
    ldr ip, [sp, #4] @ 02082d14
    addne r3, r3, r4 @ 02082d18
    orrne r0, r3, #1 @ 02082d1c
    ldr r2, [pc, #0x17c] @ 02082d20
    ldr r3, [ip] @ 02082d24
    moveq r4, #0 @ 02082d28
    addeq r0, r0, #2 @ 02082d2c
    add r3, r4, r3 @ 02082d30
    cmp sb, r2 @ 02082d34
    str r3, [ip] @ 02082d38
    mov r4, sl @ 02082d3c
    str r0, [sl, #4] @ 02082d40
    str sl, [r2, #8] @ 02082d44
    beq .L_02082d8c @ 02082d48
    cmp r8, #0xf @ 02082d4c
    movls r3, #1 @ 02082d50
    strls r3, [sl, #4] @ 02082d54
    bls .L_02082ba4 @ 02082d58
    sub r2, r8, #0xc @ 02082d5c
    bic r2, r2, #7 @ 02082d60
    add r0, sb, r2 @ 02082d64
    mov r1, #5 @ 02082d68
    str r1, [r0, #8] @ 02082d6c
    str r1, [r0, #4] @ 02082d70
    ldr r3, [sb, #4] @ 02082d74
    and r3, r3, #1 @ 02082d78
    cmp r2, #0xf @ 02082d7c
    orr r2, r2, r3 @ 02082d80
    str r2, [sb, #4] @ 02082d84
    bhi .L_02082e70 @ 02082d88
.L_02082d8c:
    ldr r1, [pc, #0x124] @ 02082d8c
    ldr r2, [ip] @ 02082d90
    ldr r3, [r1] @ 02082d94
    cmp r2, r3 @ 02082d98
    strhi r2, [r1] @ 02082d9c
    ldr r1, [pc, #0x114] @ 02082da0
    ldr r3, [r1] @ 02082da4
    cmp r2, r3 @ 02082da8
    strhi r2, [r1] @ 02082dac
    b .L_02082ba4 @ 02082db0
.L_02082db4:
    ldr r2, [pc, #0xe8] @ 02082db4
    ldr r4, [r2, #8] @ 02082db8
    b .L_02082ba4 @ 02082dbc
.L_02082dc0:
    ldr r3, [sl, #4] @ 02082dc0
    lsr r1, r1, #2 @ 02082dc4
    mov r2, #1 @ 02082dc8
    orr r3, r3, r2, lsl r1 @ 02082dcc
    str r3, [sl, #4] @ 02082dd0
    b .L_02082a30 @ 02082dd4
.L_02082dd8:
    mov r1, sb @ 02082dd8
    mov ip, lr @ 02082ddc
.L_02082de0:
    tst ip, #3 @ 02082de0
    sub r1, r1, #8 @ 02082de4
    sub ip, ip, #1 @ 02082de8
    beq .L_02082e90 @ 02082dec
    ldr r3, [r1, #8] @ 02082df0
    cmp r3, r1 @ 02082df4
    beq .L_02082de0 @ 02082df8
.L_02082dfc:
    lsl r2, r2, #1 @ 02082dfc
    cmp r2, r0 @ 02082e00
    bhi .L_02082b0c @ 02082e04
    cmp r2, #0 @ 02082e08
    beq .L_02082b0c @ 02082e0c
    tst r2, r0 @ 02082e10
    movne lr, sl @ 02082e14
    bne .L_02082a6c @ 02082e18
.L_02082e1c:
    lsl r2, r2, #1 @ 02082e1c
    tst r0, r2 @ 02082e20
    add sl, sl, #4 @ 02082e24
    beq .L_02082e1c @ 02082e28
    mov lr, sl @ 02082e2c
    b .L_02082a6c @ 02082e30
.L_02082e34:
    ldr ip, [pc, #0x78] @ 02082e34
    ldr r3, [ip] @ 02082e38
    add r2, r6, r3 @ 02082e3c
    str r2, [ip] @ 02082e40
    b .L_02082cbc @ 02082e44
.L_02082e48:
    lsl r3, r0, #0x14 @ 02082e48
    lsr r3, r3, #0x14 @ 02082e4c
    cmp r3, #0 @ 02082e50
    bne .L_02082cbc @ 02082e54
    ldr r2, [pc, #0x44] @ 02082e58
    add r3, r6, r8 @ 02082e5c
    ldr r4, [r2, #8] @ 02082e60
    orr r3, r3, #1 @ 02082e64
    str r3, [r4, #4] @ 02082e68
    b .L_02082d8c @ 02082e6c
.L_02082e70:
    add r1, sb, #8 @ 02082e70
    mov r0, r7 @ 02082e74
    str ip, [sp, #4] @ 02082e78
    bl .L_020818d4 @ 02082e7c
    ldr r3, [pc, #0x1c] @ 02082e80
    ldr ip, [sp, #4] @ 02082e84
    ldr r4, [r3, #8] @ 02082e88
    b .L_02082d8c @ 02082e8c
.L_02082e90:
    mvn r3, r2 @ 02082e90
    and r0, r0, r3 @ 02082e94
    ldr r3, [pc, #4] @ 02082e98
    str r0, [r3, #4] @ 02082e9c
    b .L_02082dfc @ 02082ea0
    .byte 0xb0, 0xf7, 0x08, 0x02, 0xb8, 0xf7, 0x08, 0x02, 0xa8, 0x4c, 0x0b, 0x02, 0xbc, 0xfb, 0x08, 0x02 @ 02082ea4
    .byte 0xb4, 0x4c, 0x0b, 0x02, 0xac, 0x4c, 0x0b, 0x02, 0xb0, 0x4c, 0x0b, 0x02 @ 02082eb4
.L_02082ec0:
@ FUN_02082ec0 at 0x02082ec0
    cmp r2, #0xf @ 02082ec0
    str lr, [sp, #-4]! @ 02082ec4
    mov ip, r0 @ 02082ec8
    mov lr, r2 @ 02082ecc
    bls .L_02082ee0 @ 02082ed0
    orr r3, r1, r0 @ 02082ed4
    tst r3, #3 @ 02082ed8
    beq .L_02082f08 @ 02082edc
.L_02082ee0:
    cmp lr, #0 @ 02082ee0
    beq .L_02082f00 @ 02082ee4
    mov r2, #0 @ 02082ee8
.L_02082eec:
    ldrb r3, [r1], #1 @ 02082eec
    strb r3, [r2, ip] @ 02082ef0
    add r2, r2, #1 @ 02082ef4
    cmp r2, lr @ 02082ef8
    bne .L_02082eec @ 02082efc
.L_02082f00:
    .word 0xe49de004 @ 02082f00 pop {lr}
    bx lr @ 02082f04
.L_02082f08:
    ldr r3, [r1] @ 02082f08
    str r3, [ip] @ 02082f0c
    ldr r2, [r1, #4] @ 02082f10
    str r2, [ip, #4] @ 02082f14
    ldr r3, [r1, #8] @ 02082f18
    str r3, [ip, #8] @ 02082f1c
    sub lr, lr, #0x10 @ 02082f20
    ldr r3, [r1, #0xc] @ 02082f24
    cmp lr, #0xf @ 02082f28
    str r3, [ip, #0xc] @ 02082f2c
    add r1, r1, #0x10 @ 02082f30
    add ip, ip, #0x10 @ 02082f34
    bhi .L_02082f08 @ 02082f38
    cmp lr, #3 @ 02082f3c
    bls .L_02082ee0 @ 02082f40
.L_02082f44:
    sub lr, lr, #4 @ 02082f44
    ldr r3, [r1], #4 @ 02082f48
    cmp lr, #3 @ 02082f4c
    str r3, [ip], #4 @ 02082f50
    bhi .L_02082f44 @ 02082f54
    b .L_02082ee0 @ 02082f58
.L_02082f5c:
@ FUN_02082f5c at 0x02082f5c
    cmp r0, r1 @ 02082f5c
    push {r4, r5, lr} @ 02082f60
    mov ip, r0 @ 02082f64
    mov r5, r0 @ 02082f68
    mov r4, r1 @ 02082f6c
    mov lr, r2 @ 02082f70
    movls r0, r2 @ 02082f74
    bls .L_02082fbc @ 02082f78
    add r3, r1, r2 @ 02082f7c
    cmp r5, r3 @ 02082f80
    mov r0, r2 @ 02082f84
    bhs .L_02082fbc @ 02082f88
    cmp r2, #0 @ 02082f8c
    beq .L_02082fb0 @ 02082f90
    add r2, r5, r2 @ 02082f94
    mov r1, r3 @ 02082f98
    rsb ip, lr, r2 @ 02082f9c
.L_02082fa0:
    ldrb r3, [r1, #-1]! @ 02082fa0
    strb r3, [r2, #-1]! @ 02082fa4
    cmp ip, r2 @ 02082fa8
    bne .L_02082fa0 @ 02082fac
.L_02082fb0:
    mov r0, r5 @ 02082fb0
    pop {r4, r5, lr} @ 02082fb4
    bx lr @ 02082fb8
.L_02082fbc:
    cmp r2, #0xf @ 02082fbc
    bhi .L_02082fe8 @ 02082fc0
.L_02082fc4:
    cmp lr, #0 @ 02082fc4
    beq .L_02082fb0 @ 02082fc8
    mov r2, #0 @ 02082fcc
.L_02082fd0:
    ldrb r3, [r1], #1 @ 02082fd0
    strb r3, [r2, ip] @ 02082fd4
    add r2, r2, #1 @ 02082fd8
    cmp r2, lr @ 02082fdc
    bne .L_02082fd0 @ 02082fe0
    b .L_02082fb0 @ 02082fe4
.L_02082fe8:
    orr r3, r4, r5 @ 02082fe8
    tst r3, #3 @ 02082fec
    bne .L_02082fc4 @ 02082ff0
    mov r1, r4 @ 02082ff4
    mov ip, r5 @ 02082ff8
.L_02082ffc:
    ldr r3, [r1] @ 02082ffc
    str r3, [ip] @ 02083000
    ldr r2, [r1, #4] @ 02083004
    str r2, [ip, #4] @ 02083008
    ldr r3, [r1, #8] @ 0208300c
    str r3, [ip, #8] @ 02083010
    sub r0, r0, #0x10 @ 02083014
    ldr r3, [r1, #0xc] @ 02083018
    cmp r0, #0xf @ 0208301c
    str r3, [ip, #0xc] @ 02083020
    add r1, r1, #0x10 @ 02083024
    add ip, ip, #0x10 @ 02083028
    bhi .L_02082ffc @ 0208302c
    cmp r0, #3 @ 02083030
    mov lr, r0 @ 02083034
    bls .L_02082fc4 @ 02083038
.L_0208303c:
    sub r0, r0, #4 @ 0208303c
    ldr r3, [r1], #4 @ 02083040
    cmp r0, #3 @ 02083044
    str r3, [ip], #4 @ 02083048
    bhi .L_0208303c @ 0208304c
    mov lr, r0 @ 02083050
    b .L_02082fc4 @ 02083054
.L_02083058:
@ FUN_02083058 at 0x02083058
    cmp r2, #3 @ 02083058
    and r1, r1, #0xff @ 0208305c
    mov ip, r0 @ 02083060
    bls .L_02083070 @ 02083064
    tst r0, #3 @ 02083068
    beq .L_02083094 @ 0208306c
.L_02083070:
    cmp r2, #0 @ 02083070
    bxeq lr @ 02083074
.L_02083078:
    and r1, r1, #0xff @ 02083078
    mov r3, #0 @ 0208307c
.L_02083080:
    strb r1, [r3, ip] @ 02083080
    add r3, r3, #1 @ 02083084
    cmp r3, r2 @ 02083088
    bne .L_02083080 @ 0208308c
    bx lr @ 02083090
.L_02083094:
    orr r3, r1, r1, lsl #8 @ 02083094
    cmp r2, #0xf @ 02083098
    orr ip, r3, r3, lsl #16 @ 0208309c
    mov r3, r0 @ 020830a0
    bls .L_020830d0 @ 020830a4
.L_020830a8:
    sub r2, r2, #0x10 @ 020830a8
    cmp r2, #0xf @ 020830ac
    str ip, [r3] @ 020830b0
    str ip, [r3, #4] @ 020830b4
    str ip, [r3, #8] @ 020830b8
    str ip, [r3, #0xc] @ 020830bc
    add r3, r3, #0x10 @ 020830c0
    bhi .L_020830a8 @ 020830c4
    cmp r2, #3 @ 020830c8
    bls .L_020830e0 @ 020830cc
.L_020830d0:
    sub r2, r2, #4 @ 020830d0
    cmp r2, #3 @ 020830d4
    str ip, [r3], #4 @ 020830d8
    bhi .L_020830d0 @ 020830dc
.L_020830e0:
    cmp r2, #0 @ 020830e0
    mov ip, r3 @ 020830e4
    bne .L_02083078 @ 020830e8
    bx lr @ 020830ec
.L_020830f0:
@ FUN_020830f0 at 0x020830f0
    bx lr @ 020830f0
.L_020830f4:
@ FUN_020830f4 at 0x020830f4
    bx lr @ 020830f4
.L_020830f8:
@ FUN_020830f8 at 0x020830f8
    push {r4, r5, lr} @ 020830f8
    ldr r4, [pc, #0x3c] @ 020830fc
    sub sp, sp, #4 @ 02083100
    mov r5, r0 @ 02083104
    mov r0, r1 @ 02083108
    mov r1, r2 @ 0208310c
    mov r2, r3 @ 02083110
    mov r3, #0 @ 02083114
    str r3, [r4] @ 02083118
    bl .L_020850fc @ 0208311c
    cmn r0, #1 @ 02083120
    bne .L_02083134 @ 02083124
    ldr r3, [r4] @ 02083128
    cmp r3, #0 @ 0208312c
    strne r3, [r5] @ 02083130
.L_02083134:
    add sp, sp, #4 @ 02083134
    pop {r4, r5, lr} @ 02083138
    bx lr @ 0208313c
    .byte 0x4c, 0xb3, 0x3e, 0x02 @ 02083140
@ FUN_02083144 at 0x02083144
    push {r4, r5, r6, r7, r8, lr} @ 02083144
    subs r8, r0, #0 @ 02083148
    ldreq r3, [pc, #0x68] @ 0208314c
    ldreq r8, [r3] @ 02083150
    ldr r7, [r8, #0x148] @ 02083154
    cmp r7, #0 @ 02083158
    beq .L_020831a0 @ 0208315c
.L_02083160:
    ldr r6, [r7, #4] @ 02083160
    cmp r6, #1 @ 02083164
    bmi .L_02083194 @ 02083168
    lsl r3, r6, #2 @ 0208316c
    add r3, r3, #8 @ 02083170
    add r5, r7, r3 @ 02083174
    mov r4, #0 @ 02083178
.L_0208317c:
    add r4, r4, #1 @ 0208317c
    ldr ip, [r5, #-4]! @ 02083180
    mov lr, pc @ 02083184
    bx ip @ 02083188
    cmp r4, r6 @ 0208318c
    bne .L_0208317c @ 02083190
.L_02083194:
    ldr r7, [r7] @ 02083194
    cmp r7, #0 @ 02083198
    bne .L_02083160 @ 0208319c
.L_020831a0:
    ldr r3, [r8, #0x3c] @ 020831a0
    cmp r3, #0 @ 020831a4
    movne r0, r8 @ 020831a8
    movne lr, pc @ 020831ac
    bxne r3 @ 020831b0
    pop {r4, r5, r6, r7, r8, lr} @ 020831b4
    bx lr @ 020831b8
    .byte 0x98, 0xf3, 0x08, 0x02 @ 020831bc
.L_020831c0:
@ FUN_020831c0 at 0x020831c0
    push {r4, r5, lr} @ 020831c0
    mov r5, r1 @ 020831c4
    ldr r1, [r1] @ 020831c8
    cmp r1, #0 @ 020831cc
    sub sp, sp, #4 @ 020831d0
    mov r4, r0 @ 020831d4
    blne .L_020831c0 @ 020831d8
    mov r0, r4 @ 020831dc
    mov r1, r5 @ 020831e0
    bl .L_020818d4 @ 020831e4
    add sp, sp, #4 @ 020831e8
    pop {r4, r5, lr} @ 020831ec
    bx lr @ 020831f0
    .byte 0xe8, 0x30, 0x9f, 0xe5, 0x00, 0x20, 0x93, 0xe5, 0x00, 0x00, 0x52, 0xe1, 0x70, 0x40, 0x2d, 0xe9 @ 020831f4
    .byte 0x00, 0x50, 0xa0, 0xe1, 0x29, 0x00, 0x00, 0x0a, 0x4c, 0x30, 0x90, 0xe5, 0x00, 0x00, 0x53, 0xe3 @ 02083204
    .byte 0x0f, 0x00, 0x00, 0x0a, 0x00, 0x60, 0xa0, 0xe3, 0x06, 0x10, 0x93, 0xe7, 0x00, 0x00, 0x51, 0xe3 @ 02083214
    .byte 0x05, 0x00, 0x00, 0x0a, 0x00, 0x40, 0x91, 0xe5, 0x05, 0x00, 0xa0, 0xe1, 0xa7, 0xf9, 0xff, 0xeb @ 02083224
    .byte 0x00, 0x10, 0x54, 0xe2, 0xfa, 0xff, 0xff, 0x1a, 0x4c, 0x30, 0x95, 0xe5, 0x04, 0x60, 0x86, 0xe2 @ 02083234
    .byte 0x3c, 0x00, 0x56, 0xe3, 0xf3, 0xff, 0xff, 0x1a, 0x03, 0x10, 0xa0, 0xe1, 0x05, 0x00, 0xa0, 0xe1 @ 02083244
    .byte 0x9e, 0xf9, 0xff, 0xeb, 0x40, 0x10, 0x95, 0xe5, 0x00, 0x00, 0x51, 0xe3, 0x05, 0x00, 0xa0, 0x11 @ 02083254
    .byte 0x9a, 0xf9, 0xff, 0x1b, 0x48, 0x11, 0x95, 0xe5, 0x00, 0x00, 0x51, 0xe3, 0x08, 0x00, 0x00, 0x0a @ 02083264
    .byte 0x53, 0x6f, 0x85, 0xe2, 0x06, 0x00, 0x51, 0xe1, 0x05, 0x00, 0x00, 0x0a, 0x00, 0x40, 0x91, 0xe5 @ 02083274
    .byte 0x05, 0x00, 0xa0, 0xe1, 0x91, 0xf9, 0xff, 0xeb, 0x04, 0x00, 0x56, 0xe1, 0x04, 0x10, 0xa0, 0xe1 @ 02083284
    .byte 0xf9, 0xff, 0xff, 0x1a, 0x54, 0x10, 0x95, 0xe5, 0x00, 0x00, 0x51, 0xe3, 0x05, 0x00, 0xa0, 0x11 @ 02083294
    .byte 0x8a, 0xf9, 0xff, 0x1b, 0x38, 0x30, 0x95, 0xe5, 0x00, 0x00, 0x53, 0xe3, 0x01, 0x00, 0x00, 0x1a @ 020832a4
    .byte 0x70, 0x40, 0xbd, 0xe8, 0x1e, 0xff, 0x2f, 0xe1, 0x05, 0x00, 0xa0, 0xe1, 0x3c, 0xc0, 0x95, 0xe5 @ 020832b4
    .byte 0x0f, 0xe0, 0xa0, 0xe1, 0x1c, 0xff, 0x2f, 0xe1, 0xe0, 0x12, 0x95, 0xe5, 0x00, 0x00, 0x51, 0xe3 @ 020832c4
    .byte 0xf6, 0xff, 0xff, 0x0a, 0x05, 0x00, 0xa0, 0xe1, 0x70, 0x40, 0xbd, 0xe8, 0xb6, 0xff, 0xff, 0xea @ 020832d4
    .byte 0x98, 0xf3, 0x08, 0x02 @ 020832e4
    str lr, [sp, #-4]! @ 020832e8
    ldrh r3, [r0, #0xc] @ 020832ec
    and r3, r3, #9 @ 020832f0
    cmp r3, #9 @ 020832f4
    sub sp, sp, #4 @ 020832f8
    mov r3, #0 @ 020832fc
    beq .L_02083314 @ 02083300
.L_02083304:
    mov r0, r3 @ 02083304
    add sp, sp, #4 @ 02083308
    .word 0xe49de004 @ 0208330c pop {lr}
    bx lr @ 02083310
.L_02083314:
    bl .L_02081034 @ 02083314
    mov r3, r0 @ 02083318
    b .L_02083304 @ 0208331c
.L_02083320:
@ FUN_02083320 at 0x02083320
    push {r4, r5, r6, r7, lr} @ 02083320
    ldr r7, [pc, #0x190] @ 02083324
    ldr r2, [r7] @ 02083328
    cmp r2, #0 @ 0208332c
    sub sp, sp, #4 @ 02083330
    mov r6, r0 @ 02083334
    mov r4, r1 @ 02083338
    beq .L_0208334c @ 0208333c
    ldr r3, [r2, #0x38] @ 02083340
    cmp r3, #0 @ 02083344
    beq .L_02083464 @ 02083348
.L_0208334c:
    ldrh r2, [r4, #0xc] @ 0208334c
    mov r3, #0 @ 02083350
    ands r5, r2, #0x20 @ 02083354
    str r3, [r4, #4] @ 02083358
    bne .L_0208345c @ 0208335c
    tst r2, #4 @ 02083360
    bne .L_0208341c @ 02083364
    tst r2, #0x10 @ 02083368
    orreq r2, r2, #0x40 @ 0208336c
    addeq r3, r3, #9 @ 02083370
    mvneq r0, #0 @ 02083374
    streq r3, [r6] @ 02083378
    strheq r2, [r4, #0xc] @ 0208337c
    beq .L_02083410 @ 02083380
    tst r2, #8 @ 02083384
    bne .L_02083490 @ 02083388
.L_0208338c:
    orr r3, r2, #4 @ 0208338c
    strh r3, [r4, #0xc] @ 02083390
.L_02083394:
    ldr r3, [r4, #0x14] @ 02083394
    cmp r3, #0 @ 02083398
    beq .L_02083484 @ 0208339c
.L_020833a0:
    ldrh r3, [r4, #0xc] @ 020833a0
    tst r3, #3 @ 020833a4
    bne .L_02083470 @ 020833a8
.L_020833ac:
    ldr r1, [r4, #0x14] @ 020833ac
    ldr r0, [r4, #0x20] @ 020833b0
    str r1, [r4] @ 020833b4
    ldr r2, [r4, #0x18] @ 020833b8
    ldr ip, [r4, #0x24] @ 020833bc
    mov lr, pc @ 020833c0
    bx ip @ 020833c4
    ldrh r3, [r4, #0xc] @ 020833c8
    bic r3, r3, #0x2000 @ 020833cc
    lsl r3, r3, #0x10 @ 020833d0
    cmp r0, #0 @ 020833d4
    lsr r3, r3, #0x10 @ 020833d8
    str r0, [r4, #4] @ 020833dc
    strh r3, [r4, #0xc] @ 020833e0
    movgt r0, #0 @ 020833e4
    bgt .L_02083410 @ 020833e8
    ldrhne r3, [r4, #0xc] @ 020833ec
    orreq r3, r3, #0x20 @ 020833f0
    orrne r3, r3, #0x40 @ 020833f4
    movne r2, #0 @ 020833f8
    strheq r3, [r4, #0xc] @ 020833fc
    strhne r3, [r4, #0xc] @ 02083400
    strne r2, [r4, #4] @ 02083404
    mvneq r0, #0 @ 02083408
    mvnne r0, #0 @ 0208340c
.L_02083410:
    add sp, sp, #4 @ 02083410
    pop {r4, r5, r6, r7, lr} @ 02083414
    bx lr @ 02083418
.L_0208341c:
    ldr r1, [r4, #0x34] @ 0208341c
    cmp r1, #0 @ 02083420
    beq .L_02083394 @ 02083424
    add r3, r4, #0x44 @ 02083428
    cmp r1, r3 @ 0208342c
    ldrne r0, [r7] @ 02083430
    blne .L_020818d4 @ 02083434
    ldr r3, [r4, #0x40] @ 02083438
    cmp r3, #0 @ 0208343c
    str r5, [r4, #0x34] @ 02083440
    str r3, [r4, #4] @ 02083444
    beq .L_02083394 @ 02083448
    ldr r3, [r4, #0x3c] @ 0208344c
    mov r0, r5 @ 02083450
    str r3, [r4] @ 02083454
    b .L_02083410 @ 02083458
.L_0208345c:
    mvn r0, #0 @ 0208345c
    b .L_02083410 @ 02083460
.L_02083464:
    mov r0, r2 @ 02083464
    bl .L_02081258 @ 02083468
    b .L_0208334c @ 0208346c
.L_02083470:
    ldr r3, [pc, #0x48] @ 02083470
    ldr r1, [pc, #0x48] @ 02083474
    ldr r0, [r3] @ 02083478
    bl .L_020821cc @ 0208347c
    b .L_020833ac @ 02083480
.L_02083484:
    mov r0, r4 @ 02083484
    bl .L_020823f8 @ 02083488
    b .L_020833a0 @ 0208348c
.L_02083490:
    mov r0, r4 @ 02083490
    bl .L_02081034 @ 02083494
    cmp r0, #0 @ 02083498
    bne .L_0208345c @ 0208349c
    ldrh r3, [r4, #0xc] @ 020834a0
    bic r3, r3, #8 @ 020834a4
    strh r3, [r4, #0xc] @ 020834a8
    ldrh r2, [r4, #0xc] @ 020834ac
    str r5, [r4, #0x1c] @ 020834b0
    str r5, [r4, #8] @ 020834b4
    b .L_0208338c @ 020834b8
    .byte 0x98, 0xf3, 0x08, 0x02, 0x88, 0xef, 0x08, 0x02, 0xe8, 0x32, 0x08, 0x02 @ 020834bc
.L_020834c8:
@ FUN_020834c8 at 0x020834c8
    push {r4, r5, lr} @ 020834c8
    ldr r4, [pc, #0x38] @ 020834cc
    mov r3, #0 @ 020834d0
    sub sp, sp, #4 @ 020834d4
    mov r5, r0 @ 020834d8
    mov r0, r1 @ 020834dc
    str r3, [r4] @ 020834e0
    bl .L_0208523c @ 020834e4
    cmn r0, #1 @ 020834e8
    beq .L_020834fc @ 020834ec
.L_020834f0:
    add sp, sp, #4 @ 020834f0
    pop {r4, r5, lr} @ 020834f4
    bx lr @ 020834f8
.L_020834fc:
    ldr r3, [r4] @ 020834fc
    cmp r3, #0 @ 02083500
    strne r3, [r5] @ 02083504
    b .L_020834f0 @ 02083508
    .byte 0x4c, 0xb3, 0x3e, 0x02 @ 0208350c
    str lr, [sp, #-4]! @ 02083510
    ldr r3, [pc, #0x18] @ 02083514
    ldr r1, [r0, #0x10] @ 02083518
    sub sp, sp, #4 @ 0208351c
    ldr r0, [r3] @ 02083520
    bl .L_02084048 @ 02083524
    add sp, sp, #4 @ 02083528
    .word 0xe49de004 @ 0208352c pop {lr}
    bx lr @ 02083530
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02083534
    mov r3, r2 @ 02083538
    ldr r2, [pc, #0x3c] @ 0208353c
    push {r4, lr} @ 02083540
    mov r4, r0 @ 02083544
    ldr r0, [r2] @ 02083548
    mov r2, r1 @ 0208354c
    ldr r1, [r4, #0x10] @ 02083550
    bl .L_02084574 @ 02083554
    cmn r0, #1 @ 02083558
    ldrheq r3, [r4, #0xc] @ 0208355c
    ldrhne r3, [r4, #0xc] @ 02083560
    biceq r3, r3, #0x1000 @ 02083564
    orrne r3, r3, #0x1000 @ 02083568
    strheq r3, [r4, #0xc] @ 0208356c
    strhne r3, [r4, #0xc] @ 02083570
    strne r0, [r4, #0x54] @ 02083574
    pop {r4, lr} @ 02083578
    bx lr @ 0208357c
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02083580
@ FUN_02083584 at 0x02083584
    push {r4, r5, r6, r7, lr} @ 02083584
    ldrh ip, [r0, #0xc] @ 02083588
    tst ip, #0x100 @ 0208358c
    ldr r7, [pc, #0x54] @ 02083590
    mov r6, r2 @ 02083594
    sub sp, sp, #4 @ 02083598
    mov r3, #2 @ 0208359c
    mov r4, r0 @ 020835a0
    mov r5, r1 @ 020835a4
    mov r2, #0 @ 020835a8
    ldreq r7, [pc, #0x38] @ 020835ac
    beq .L_020835c4 @ 020835b0
    ldr r0, [r7] @ 020835b4
    ldr r1, [r4, #0x10] @ 020835b8
    bl .L_02084574 @ 020835bc
    ldrh ip, [r4, #0xc] @ 020835c0
.L_020835c4:
    bic ip, ip, #0x1000 @ 020835c4
    ldr r0, [r7] @ 020835c8
    ldr r1, [r4, #0x10] @ 020835cc
    mov r2, r5 @ 020835d0
    mov r3, r6 @ 020835d4
    strh ip, [r4, #0xc] @ 020835d8
    bl .L_02083ffc @ 020835dc
    add sp, sp, #4 @ 020835e0
    pop {r4, r5, r6, r7, lr} @ 020835e4
    bx lr @ 020835e8
    .byte 0x98, 0xf3, 0x08, 0x02 @ 020835ec
    mov r3, r2 @ 020835f0
    ldr r2, [pc, #0x38] @ 020835f4
    push {r4, lr} @ 020835f8
    mov r4, r0 @ 020835fc
    ldr r0, [r2] @ 02083600
    mov r2, r1 @ 02083604
    ldr r1, [r4, #0x10] @ 02083608
    bl .L_020846c0 @ 0208360c
    cmp r0, #0 @ 02083610
    ldrge r3, [r4, #0x54] @ 02083614
    ldrhlt r3, [r4, #0xc] @ 02083618
    addge r3, r3, r0 @ 0208361c
    biclt r3, r3, #0x1000 @ 02083620
    strge r3, [r4, #0x54] @ 02083624
    strhlt r3, [r4, #0xc] @ 02083628
    pop {r4, lr} @ 0208362c
    bx lr @ 02083630
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02083634
.L_02083638:
@ FUN_02083638 at 0x02083638
    push {r4, r5, lr} @ 02083638
    mov lr, r0 @ 0208363c
    ldrb r0, [r0] @ 02083640
    cmp r0, #0 @ 02083644
    beq .L_020836c4 @ 02083648
    ldr r5, [pc, #0x7c] @ 0208364c
    ldr r4, [r5] @ 02083650
    b .L_02083664 @ 02083654
.L_02083658:
    ldrb r0, [lr, #1]! @ 02083658
    cmp r0, #0 @ 0208365c
    beq .L_020836bc @ 02083660
.L_02083664:
    ldrb r2, [r1] @ 02083664
    ldrb r3, [r4, r0] @ 02083668
    tst r3, #1 @ 0208366c
    ldrb r3, [r4, r2] @ 02083670
    mov ip, r0 @ 02083674
    addne ip, r0, #0x20 @ 02083678
    tst r3, #1 @ 0208367c
    mov r3, r2 @ 02083680
    addne r3, r2, #0x20 @ 02083684
    cmp ip, r3 @ 02083688
    add r1, r1, #1 @ 0208368c
    beq .L_02083658 @ 02083690
.L_02083694:
    ldr r1, [r5] @ 02083694
    ldrb r3, [r1, r0] @ 02083698
    tst r3, #1 @ 0208369c
    ldrb r3, [r1, r2] @ 020836a0
    addne r0, r0, #0x20 @ 020836a4
    tst r3, #1 @ 020836a8
    addne r2, r2, #0x20 @ 020836ac
    rsb r0, r2, r0 @ 020836b0
    pop {r4, r5, lr} @ 020836b4
    bx lr @ 020836b8
.L_020836bc:
    ldrb r2, [r1] @ 020836bc
    b .L_02083694 @ 020836c0
.L_020836c4:
    ldrb r2, [r1] @ 020836c4
    ldr r5, [pc] @ 020836c8
    b .L_02083694 @ 020836cc
    .byte 0x94, 0xf3, 0x08, 0x02 @ 020836d0
.L_020836d4:
@ FUN_020836d4 at 0x020836d4
    ands r3, r0, #3 @ 020836d4
    push {r4, lr} @ 020836d8
    mov r2, r0 @ 020836dc
    and r1, r1, #0xff @ 020836e0
    bne .L_020837b4 @ 020836e4
    mov r4, r3 @ 020836e8
.L_020836ec:
    add r3, r3, #1 @ 020836ec
    cmp r3, #4 @ 020836f0
    orr r4, r1, r4, lsl #8 @ 020836f4
    bne .L_020836ec @ 020836f8
    mov r0, r2 @ 020836fc
    ldr r2, [r2] @ 02083700
    add r3, r2, #0xff000000 @ 02083704
    sub r3, r3, #0x10000 @ 02083708
    sub r3, r3, #0x100 @ 0208370c
    sub r3, r3, #1 @ 02083710
    bic r3, r3, #0x7f000000 @ 02083714
    bic r3, r3, #0x7f0000 @ 02083718
    bic r3, r3, #0x7f00 @ 0208371c
    bic r3, r3, #0x7f @ 02083720
    bics r3, r3, r2 @ 02083724
    bne .L_020837b4 @ 02083728
    eor r2, r2, r4 @ 0208372c
    add r3, r2, #0xff000000 @ 02083730
    sub r3, r3, #0x10000 @ 02083734
    sub r3, r3, #0x100 @ 02083738
    sub r3, r3, #1 @ 0208373c
    bic r3, r3, #0x7f000000 @ 02083740
    bic r3, r3, #0x7f0000 @ 02083744
    bic r3, r3, #0x7f00 @ 02083748
    bic r3, r3, #0x7f @ 0208374c
    bics r2, r3, r2 @ 02083750
    beq .L_02083764 @ 02083754
    b .L_020837b4 @ 02083758
.L_0208375c:
    bics lr, ip, lr @ 0208375c
    bne .L_020837b4 @ 02083760
.L_02083764:
    ldr r2, [r0, #4]! @ 02083764
    eor lr, r2, r4 @ 02083768
    add r3, lr, #0xff000000 @ 0208376c
    sub r3, r3, #0x10000 @ 02083770
    sub r3, r3, #0x100 @ 02083774
    sub r3, r3, #1 @ 02083778
    bic ip, r3, #0x7f000000 @ 0208377c
    add r3, r2, #0xff000000 @ 02083780
    sub r3, r3, #0x10000 @ 02083784
    sub r3, r3, #0x100 @ 02083788
    sub r3, r3, #1 @ 0208378c
    bic r3, r3, #0x7f000000 @ 02083790
    bic r3, r3, #0x7f0000 @ 02083794
    bic r3, r3, #0x7f00 @ 02083798
    bic ip, ip, #0x7f0000 @ 0208379c
    bic r3, r3, #0x7f @ 020837a0
    bic ip, ip, #0x7f00 @ 020837a4
    bics r2, r3, r2 @ 020837a8
    bic ip, ip, #0x7f @ 020837ac
    beq .L_0208375c @ 020837b0
.L_020837b4:
    ldrb r3, [r0] @ 020837b4
    cmp r3, #0 @ 020837b8
    bne .L_020837d0 @ 020837bc
    b .L_020837e0 @ 020837c0
.L_020837c4:
    ldrb r3, [r0, #1]! @ 020837c4
    cmp r3, #0 @ 020837c8
    beq .L_020837e0 @ 020837cc
.L_020837d0:
    cmp r1, r3 @ 020837d0
    bne .L_020837c4 @ 020837d4
.L_020837d8:
    pop {r4, lr} @ 020837d8
    bx lr @ 020837dc
.L_020837e0:
    cmp r1, #0 @ 020837e0
    movne r0, #0 @ 020837e4
    b .L_020837d8 @ 020837e8
.L_020837ec:
@ FUN_020837ec at 0x020837ec
    orr r3, r0, r1 @ 020837ec
    tst r3, #3 @ 020837f0
    mov r2, r0 @ 020837f4
    bne .L_02083874 @ 020837f8
    ldr r2, [r0] @ 020837fc
    ldr r3, [r1] @ 02083800
    cmp r2, r3 @ 02083804
    bne .L_02083870 @ 02083808
    add r3, r2, #0xff000000 @ 0208380c
    sub r3, r3, #0x10000 @ 02083810
    sub r3, r3, #0x100 @ 02083814
    sub r3, r3, #1 @ 02083818
    bic r3, r3, #0x7f000000 @ 0208381c
    bic r3, r3, #0x7f0000 @ 02083820
    bic r3, r3, #0x7f00 @ 02083824
    bic r3, r3, #0x7f @ 02083828
    bics r2, r3, r2 @ 0208382c
    beq .L_02083840 @ 02083830
    b .L_020838b4 @ 02083834
.L_02083838:
    bics ip, r2, ip @ 02083838
    bne .L_020838b4 @ 0208383c
.L_02083840:
    ldr ip, [r0, #4]! @ 02083840
    add r3, ip, #0xff000000 @ 02083844
    sub r3, r3, #0x10000 @ 02083848
    sub r3, r3, #0x100 @ 0208384c
    sub r3, r3, #1 @ 02083850
    bic r2, r3, #0x7f000000 @ 02083854
    ldr r3, [r1, #4]! @ 02083858
    bic r2, r2, #0x7f0000 @ 0208385c
    bic r2, r2, #0x7f00 @ 02083860
    cmp ip, r3 @ 02083864
    bic r2, r2, #0x7f @ 02083868
    beq .L_02083838 @ 0208386c
.L_02083870:
    mov r2, r0 @ 02083870
.L_02083874:
    ldrb r3, [r2] @ 02083874
    cmp r3, #0 @ 02083878
    bne .L_02083894 @ 0208387c
    b .L_020838a8 @ 02083880
.L_02083884:
    ldrb r3, [r2, #1]! @ 02083884
    cmp r3, #0 @ 02083888
    add r1, r1, #1 @ 0208388c
    beq .L_020838a8 @ 02083890
.L_02083894:
    ldrb r0, [r1] @ 02083894
    cmp r0, r3 @ 02083898
    beq .L_02083884 @ 0208389c
    rsb r0, r0, r3 @ 020838a0
    bx lr @ 020838a4
.L_020838a8:
    ldrb r0, [r1] @ 020838a8
    rsb r0, r0, r3 @ 020838ac
    bx lr @ 020838b0
.L_020838b4:
    mov r0, #0 @ 020838b4
    bx lr @ 020838b8
.L_020838bc:
@ FUN_020838bc at 0x020838bc
    orr r3, r1, r0 @ 020838bc
    tst r3, #3 @ 020838c0
    str lr, [sp, #-4]! @ 020838c4
    movne r2, r0 @ 020838c8
    bne .L_02083944 @ 020838cc
    ldr ip, [r1] @ 020838d0
    add r3, ip, #0xff000000 @ 020838d4
    sub r3, r3, #0x10000 @ 020838d8
    sub r3, r3, #0x100 @ 020838dc
    sub r3, r3, #1 @ 020838e0
    mvn r2, ip @ 020838e4
    and r3, r3, r2 @ 020838e8
    bic r3, r3, #0x7f000000 @ 020838ec
    bic r3, r3, #0x7f0000 @ 020838f0
    bic r3, r3, #0x7f00 @ 020838f4
    bic r3, r3, #0x7f @ 020838f8
    cmp r3, #0 @ 020838fc
    mov lr, r0 @ 02083900
    bne .L_02083940 @ 02083904
.L_02083908:
    str ip, [lr], #4 @ 02083908
    ldr ip, [r1, #4]! @ 0208390c
    add r3, ip, #0xff000000 @ 02083910
    sub r3, r3, #0x10000 @ 02083914
    sub r3, r3, #0x100 @ 02083918
    sub r3, r3, #1 @ 0208391c
    mvn r2, ip @ 02083920
    and r3, r3, r2 @ 02083924
    bic r3, r3, #0x7f000000 @ 02083928
    bic r3, r3, #0x7f0000 @ 0208392c
    bic r3, r3, #0x7f00 @ 02083930
    bic r3, r3, #0x7f @ 02083934
    cmp r3, #0 @ 02083938
    beq .L_02083908 @ 0208393c
.L_02083940:
    mov r2, lr @ 02083940
.L_02083944:
    ldrb r3, [r1], #1 @ 02083944
    cmp r3, #0 @ 02083948
    strb r3, [r2], #1 @ 0208394c
    bne .L_02083944 @ 02083950
    .word 0xe49de004 @ 02083954 pop {lr}
    bx lr @ 02083958
.L_0208395c:
@ FUN_0208395c at 0x0208395c
    cmp r2, #0 @ 0208395c
    push {r4, lr} @ 02083960
    beq .L_020839f8 @ 02083964
    ldrb r3, [r0] @ 02083968
    cmp r3, #0 @ 0208396c
    beq .L_020839f8 @ 02083970
    mov ip, r0 @ 02083974
    add lr, r0, r2 @ 02083978
    b .L_0208398c @ 0208397c
.L_02083980:
    ldrb r3, [ip] @ 02083980
    cmp r3, #0 @ 02083984
    beq .L_02083998 @ 02083988
.L_0208398c:
    add ip, ip, #1 @ 0208398c
    cmp ip, lr @ 02083990
    bne .L_02083980 @ 02083994
.L_02083998:
    rsb r4, r0, ip @ 02083998
.L_0208399c:
    subs lr, r2, r4 @ 0208399c
    beq .L_020839e8 @ 020839a0
    ldrb r3, [r1] @ 020839a4
    cmp r3, #0 @ 020839a8
    moveq r0, r3 @ 020839ac
    beq .L_020839d4 @ 020839b0
    mov r2, r1 @ 020839b4
.L_020839b8:
    cmp lr, #1 @ 020839b8
    strbne r3, [ip], #1 @ 020839bc
    ldrb r3, [r2, #1]! @ 020839c0
    subne lr, lr, #1 @ 020839c4
    cmp r3, #0 @ 020839c8
    bne .L_020839b8 @ 020839cc
    rsb r0, r1, r2 @ 020839d0
.L_020839d4:
    mov r3, #0 @ 020839d4
    strb r3, [ip] @ 020839d8
    add r0, r0, r4 @ 020839dc
.L_020839e0:
    pop {r4, lr} @ 020839e0
    bx lr @ 020839e4
.L_020839e8:
    mov r0, r1 @ 020839e8
    bl .L_02083a6c @ 020839ec
    add r0, r0, r4 @ 020839f0
    b .L_020839e0 @ 020839f4
.L_020839f8:
    mov ip, r0 @ 020839f8
    mov r4, #0 @ 020839fc
    b .L_0208399c @ 02083a00
.L_02083a04:
@ FUN_02083a04 at 0x02083a04
    cmp r2, #0 @ 02083a04
    moveq r0, r1 @ 02083a08
    beq .L_02083a48 @ 02083a0c
    subs r2, r2, #1 @ 02083a10
    moveq ip, r0 @ 02083a14
    moveq r0, r1 @ 02083a18
    beq .L_02083a40 @ 02083a1c
    mov ip, r0 @ 02083a20
    mov r0, r1 @ 02083a24
.L_02083a28:
    ldrb r3, [r0], #1 @ 02083a28
    cmp r3, #0 @ 02083a2c
    strb r3, [ip], #1 @ 02083a30
    beq .L_02083a60 @ 02083a34
    subs r2, r2, #1 @ 02083a38
    bne .L_02083a28 @ 02083a3c
.L_02083a40:
    mov r3, #0 @ 02083a40
    strb r3, [ip] @ 02083a44
.L_02083a48:
    ldrb r3, [r0], #1 @ 02083a48
    cmp r3, #0 @ 02083a4c
    bne .L_02083a48 @ 02083a50
.L_02083a54:
    rsb r0, r1, r0 @ 02083a54
    sub r0, r0, #1 @ 02083a58
    bx lr @ 02083a5c
.L_02083a60:
    cmp r2, #0 @ 02083a60
    beq .L_02083a40 @ 02083a64
    b .L_02083a54 @ 02083a68
.L_02083a6c:
@ FUN_02083a6c at 0x02083a6c
    tst r0, #3 @ 02083a6c
    mov r1, r0 @ 02083a70
    bne .L_02083adc @ 02083a74
    ldr r2, [r0] @ 02083a78
    add r3, r2, #0xff000000 @ 02083a7c
    sub r3, r3, #0x10000 @ 02083a80
    sub r3, r3, #0x100 @ 02083a84
    sub r3, r3, #1 @ 02083a88
    bic r3, r3, #0x7f000000 @ 02083a8c
    bic r3, r3, #0x7f0000 @ 02083a90
    bic r3, r3, #0x7f00 @ 02083a94
    bic r3, r3, #0x7f @ 02083a98
    bics r2, r3, r2 @ 02083a9c
    mov r2, r0 @ 02083aa0
    bne .L_02083ad8 @ 02083aa4
.L_02083aa8:
    ldr r2, [r0, #4]! @ 02083aa8
    add r3, r2, #0xff000000 @ 02083aac
    sub r3, r3, #0x10000 @ 02083ab0
    sub r3, r3, #0x100 @ 02083ab4
    sub r3, r3, #1 @ 02083ab8
    bic r3, r3, #0x7f000000 @ 02083abc
    bic r3, r3, #0x7f0000 @ 02083ac0
    bic r3, r3, #0x7f00 @ 02083ac4
    bic r3, r3, #0x7f @ 02083ac8
    bics r2, r3, r2 @ 02083acc
    beq .L_02083aa8 @ 02083ad0
    mov r2, r0 @ 02083ad4
.L_02083ad8:
    mov r0, r2 @ 02083ad8
.L_02083adc:
    ldrb r3, [r0] @ 02083adc
    cmp r3, #0 @ 02083ae0
    beq .L_02083af4 @ 02083ae4
.L_02083ae8:
    ldrb r3, [r0, #1]! @ 02083ae8
    cmp r3, #0 @ 02083aec
    bne .L_02083ae8 @ 02083af0
.L_02083af4:
    rsb r0, r1, r0 @ 02083af4
    bx lr @ 02083af8
.L_02083afc:
@ FUN_02083afc at 0x02083afc
    cmp r2, #0 @ 02083afc
    push {r4, r5, r6, lr} @ 02083b00
    moveq r0, r2 @ 02083b04
    mov r4, r1 @ 02083b08
    beq .L_02083b9c @ 02083b0c
    ldr r6, [pc, #0x98] @ 02083b10
    ldr r5, [r6] @ 02083b14
    b .L_02083b3c @ 02083b18
.L_02083b1c:
    cmp r2, #1 @ 02083b1c
    beq .L_02083b74 @ 02083b20
    cmp lr, #0 @ 02083b24
    beq .L_02083b74 @ 02083b28
    cmp ip, #0 @ 02083b2c
    beq .L_02083b74 @ 02083b30
    subs r2, r2, #1 @ 02083b34
    beq .L_02083ba4 @ 02083b38
.L_02083b3c:
    ldrb lr, [r0] @ 02083b3c
    ldrb ip, [r4] @ 02083b40
    ldrb r3, [r5, lr] @ 02083b44
    tst r3, #1 @ 02083b48
    ldrb r3, [r5, ip] @ 02083b4c
    mov r1, lr @ 02083b50
    addne r1, lr, #0x20 @ 02083b54
    tst r3, #1 @ 02083b58
    mov r3, ip @ 02083b5c
    addne r3, ip, #0x20 @ 02083b60
    cmp r1, r3 @ 02083b64
    add r0, r0, #1 @ 02083b68
    add r4, r4, #1 @ 02083b6c
    beq .L_02083b1c @ 02083b70
.L_02083b74:
    ldr r1, [r6] @ 02083b74
    ldrb r3, [r1, lr] @ 02083b78
    tst r3, #1 @ 02083b7c
    ldrb r3, [r1, ip] @ 02083b80
    mov r2, lr @ 02083b84
    addne r2, lr, #0x20 @ 02083b88
    tst r3, #1 @ 02083b8c
    mov r0, ip @ 02083b90
    addne r0, ip, #0x20 @ 02083b94
    rsb r0, r0, r2 @ 02083b98
.L_02083b9c:
    pop {r4, r5, r6, lr} @ 02083b9c
    bx lr @ 02083ba0
.L_02083ba4:
    ldrb lr, [r0] @ 02083ba4
    ldrb ip, [r4] @ 02083ba8
    b .L_02083b74 @ 02083bac
    .byte 0x94, 0xf3, 0x08, 0x02 @ 02083bb0
.L_02083bb4:
@ FUN_02083bb4 at 0x02083bb4
    tst r0, #3 @ 02083bb4
    mov ip, r2 @ 02083bb8
    str lr, [sp, #-4]! @ 02083bbc
    movne r2, r0 @ 02083bc0
    bne .L_02083c30 @ 02083bc4
    ldr r2, [r0] @ 02083bc8
    add r3, r2, #0xff000000 @ 02083bcc
    sub r3, r3, #0x10000 @ 02083bd0
    sub r3, r3, #0x100 @ 02083bd4
    sub r3, r3, #1 @ 02083bd8
    bic r3, r3, #0x7f000000 @ 02083bdc
    bic r3, r3, #0x7f0000 @ 02083be0
    bic r3, r3, #0x7f00 @ 02083be4
    bic r3, r3, #0x7f @ 02083be8
    bics r2, r3, r2 @ 02083bec
    mov r3, r0 @ 02083bf0
    bne .L_02083c2c @ 02083bf4
    mov lr, r0 @ 02083bf8
.L_02083bfc:
    ldr r2, [lr, #4]! @ 02083bfc
    add r3, r2, #0xff000000 @ 02083c00
    sub r3, r3, #0x10000 @ 02083c04
    sub r3, r3, #0x100 @ 02083c08
    sub r3, r3, #1 @ 02083c0c
    bic r3, r3, #0x7f000000 @ 02083c10
    bic r3, r3, #0x7f0000 @ 02083c14
    bic r3, r3, #0x7f00 @ 02083c18
    bic r3, r3, #0x7f @ 02083c1c
    bics r2, r3, r2 @ 02083c20
    beq .L_02083bfc @ 02083c24
    mov r3, lr @ 02083c28
.L_02083c2c:
    mov r2, r3 @ 02083c2c
.L_02083c30:
    ldrb r3, [r2] @ 02083c30
    cmp r3, #0 @ 02083c34
    beq .L_02083c70 @ 02083c38
.L_02083c3c:
    ldrb r3, [r2, #1]! @ 02083c3c
    cmp r3, #0 @ 02083c40
    bne .L_02083c3c @ 02083c44
    subs ip, ip, #1 @ 02083c48
    blo .L_02083c78 @ 02083c4c
.L_02083c50:
    ldrb r3, [r1] @ 02083c50
    cmp r3, #0 @ 02083c54
    add r1, r1, #1 @ 02083c58
    strb r3, [r2] @ 02083c5c
    beq .L_02083c78 @ 02083c60
    cmp ip, #0 @ 02083c64
    strbeq ip, [r2, #1] @ 02083c68
    add r2, r2, #1 @ 02083c6c
.L_02083c70:
    subs ip, ip, #1 @ 02083c70
    bhs .L_02083c50 @ 02083c74
.L_02083c78:
    .word 0xe49de004 @ 02083c78 pop {lr}
    bx lr @ 02083c7c
.L_02083c80:
@ FUN_02083c80 at 0x02083c80
    cmp r2, #0 @ 02083c80
    push {r4, lr} @ 02083c84
    mov ip, r0 @ 02083c88
    beq .L_02083da0 @ 02083c8c
    orr r3, r0, r1 @ 02083c90
    tst r3, #3 @ 02083c94
    bne .L_02083d48 @ 02083c98
    cmp r2, #3 @ 02083c9c
    mov r4, r0 @ 02083ca0
    mov lr, r1 @ 02083ca4
    bls .L_02083d40 @ 02083ca8
    ldr r0, [r0] @ 02083cac
    ldr r3, [r1] @ 02083cb0
    cmp r0, r3 @ 02083cb4
    bne .L_02083d40 @ 02083cb8
    subs r2, r2, #4 @ 02083cbc
    beq .L_02083da0 @ 02083cc0
    add r3, r0, #0xff000000 @ 02083cc4
    sub r3, r3, #0x10000 @ 02083cc8
    sub r3, r3, #0x100 @ 02083ccc
    sub r3, r3, #1 @ 02083cd0
    bic r3, r3, #0x7f000000 @ 02083cd4
    bic r3, r3, #0x7f0000 @ 02083cd8
    bic r3, r3, #0x7f00 @ 02083cdc
    bic r3, r3, #0x7f @ 02083ce0
    bics r0, r3, r0 @ 02083ce4
    beq .L_02083d30 @ 02083ce8
    b .L_02083da0 @ 02083cec
.L_02083cf0:
    ldr r0, [r4] @ 02083cf0
    add r3, r0, #0xff000000 @ 02083cf4
    sub r3, r3, #0x10000 @ 02083cf8
    sub r3, r3, #0x100 @ 02083cfc
    sub r3, r3, #1 @ 02083d00
    bic r1, r3, #0x7f000000 @ 02083d04
    ldr r3, [lr] @ 02083d08
    bic r1, r1, #0x7f0000 @ 02083d0c
    bic r1, r1, #0x7f00 @ 02083d10
    cmp r0, r3 @ 02083d14
    bic r1, r1, #0x7f @ 02083d18
    bne .L_02083d40 @ 02083d1c
    subs r2, r2, #4 @ 02083d20
    beq .L_02083da0 @ 02083d24
    bics r0, r1, r0 @ 02083d28
    bne .L_02083da0 @ 02083d2c
.L_02083d30:
    cmp r2, #3 @ 02083d30
    add r4, r4, #4 @ 02083d34
    add lr, lr, #4 @ 02083d38
    bhi .L_02083cf0 @ 02083d3c
.L_02083d40:
    mov ip, r4 @ 02083d40
    mov r1, lr @ 02083d44
.L_02083d48:
    subs lr, r2, #1 @ 02083d48
    blo .L_02083dac @ 02083d4c
    ldrb r3, [ip] @ 02083d50
    ldrb r0, [r1] @ 02083d54
    cmp r0, r3 @ 02083d58
    bne .L_02083db4 @ 02083d5c
    cmp lr, #0 @ 02083d60
    bne .L_02083d98 @ 02083d64
    b .L_02083da0 @ 02083d68
.L_02083d6c:
    cmp r2, #1 @ 02083d6c
    add ip, ip, #1 @ 02083d70
    add r1, r1, #1 @ 02083d74
    beq .L_02083dac @ 02083d78
    ldrb r0, [r1] @ 02083d7c
    ldrb r3, [ip] @ 02083d80
    cmp r0, r3 @ 02083d84
    bne .L_02083db4 @ 02083d88
    cmp r2, #2 @ 02083d8c
    sub r2, r2, #1 @ 02083d90
    beq .L_02083da0 @ 02083d94
.L_02083d98:
    cmp r0, #0 @ 02083d98
    bne .L_02083d6c @ 02083d9c
.L_02083da0:
    mov r0, #0 @ 02083da0
.L_02083da4:
    pop {r4, lr} @ 02083da4
    bx lr @ 02083da8
.L_02083dac:
    ldrb r3, [ip] @ 02083dac
    ldrb r0, [r1] @ 02083db0
.L_02083db4:
    rsb r0, r0, r3 @ 02083db4
    b .L_02083da4 @ 02083db8
.L_02083dbc:
@ FUN_02083dbc at 0x02083dbc
    push {r4, r5, lr} @ 02083dbc
    mov r4, r1 @ 02083dc0
    orr r1, r1, r0 @ 02083dc4
    tst r1, #3 @ 02083dc8
    movne r3, #0 @ 02083dcc
    moveq r3, #1 @ 02083dd0
    cmp r2, #3 @ 02083dd4
    movls r3, #0 @ 02083dd8
    andhi r3, r3, #1 @ 02083ddc
    cmp r3, #0 @ 02083de0
    moveq r1, r4 @ 02083de4
    mov r5, r0 @ 02083de8
    mov lr, r2 @ 02083dec
    moveq r4, r0 @ 02083df0
    beq .L_02083e5c @ 02083df4
    cmp r2, #3 @ 02083df8
    mov ip, r4 @ 02083dfc
    bls .L_02083e54 @ 02083e00
    ldr r1, [r4] @ 02083e04
    b .L_02083e24 @ 02083e08
.L_02083e0c:
    sub lr, lr, #4 @ 02083e0c
    cmp lr, #3 @ 02083e10
    str r1, [r0], #4 @ 02083e14
    add ip, ip, #4 @ 02083e18
    bls .L_02083e54 @ 02083e1c
    ldr r1, [ip] @ 02083e20
.L_02083e24:
    add r3, r1, #0xff000000 @ 02083e24
    sub r3, r3, #0x10000 @ 02083e28
    sub r3, r3, #0x100 @ 02083e2c
    sub r3, r3, #1 @ 02083e30
    mvn r2, r1 @ 02083e34
    and r3, r3, r2 @ 02083e38
    bic r3, r3, #0x7f000000 @ 02083e3c
    bic r3, r3, #0x7f0000 @ 02083e40
    bic r3, r3, #0x7f00 @ 02083e44
    bic r3, r3, #0x7f @ 02083e48
    cmp r3, #0 @ 02083e4c
    beq .L_02083e0c @ 02083e50
.L_02083e54:
    mov r4, r0 @ 02083e54
    mov r1, ip @ 02083e58
.L_02083e5c:
    cmp lr, #0 @ 02083e5c
    beq .L_02083ec4 @ 02083e60
    ldrb r3, [r1] @ 02083e64
    mov ip, r4 @ 02083e68
    cmp r3, #0 @ 02083e6c
    sub r2, lr, #1 @ 02083e70
    strb r3, [ip], #1 @ 02083e74
    addne lr, r4, #2 @ 02083e78
    beq .L_02083ea4 @ 02083e7c
.L_02083e80:
    cmp r2, #0 @ 02083e80
    mov ip, lr @ 02083e84
    sub r2, r2, #1 @ 02083e88
    add lr, lr, #1 @ 02083e8c
    beq .L_02083ec4 @ 02083e90
    ldrb r3, [r1, #1]! @ 02083e94
    cmp r3, #0 @ 02083e98
    strb r3, [ip, #-1] @ 02083e9c
    bne .L_02083e80 @ 02083ea0
.L_02083ea4:
    cmp r2, #0 @ 02083ea4
    beq .L_02083ec4 @ 02083ea8
    mov r3, #0 @ 02083eac
    mov r1, r3 @ 02083eb0
.L_02083eb4:
    strb r1, [r3, ip] @ 02083eb4
    add r3, r3, #1 @ 02083eb8
    cmp r2, r3 @ 02083ebc
    bne .L_02083eb4 @ 02083ec0
.L_02083ec4:
    mov r0, r5 @ 02083ec4
    pop {r4, r5, lr} @ 02083ec8
    bx lr @ 02083ecc
.L_02083ed0:
@ FUN_02083ed0 at 0x02083ed0
    cmp r1, #0 @ 02083ed0
    mov r2, r0 @ 02083ed4
    beq .L_02083f10 @ 02083ed8
    ldrb r3, [r0] @ 02083edc
    cmp r3, #0 @ 02083ee0
    beq .L_02083f10 @ 02083ee4
    add r1, r0, r1 @ 02083ee8
    b .L_02083efc @ 02083eec
.L_02083ef0:
    ldrb r3, [r0] @ 02083ef0
    cmp r3, #0 @ 02083ef4
    beq .L_02083f08 @ 02083ef8
.L_02083efc:
    add r0, r0, #1 @ 02083efc
    cmp r0, r1 @ 02083f00
    bne .L_02083ef0 @ 02083f04
.L_02083f08:
    rsb r0, r2, r0 @ 02083f08
    bx lr @ 02083f0c
.L_02083f10:
    mov r0, #0 @ 02083f10
    bx lr @ 02083f14
.L_02083f18:
@ FUN_02083f18 at 0x02083f18
    mov ip, r0 @ 02083f18
    ldrb r0, [r0] @ 02083f1c
    cmp r0, #0 @ 02083f20
    movne r3, r1 @ 02083f24
    bxeq lr @ 02083f28
.L_02083f2c:
    ldrb r2, [r3] @ 02083f2c
    cmp r2, #0 @ 02083f30
    add r3, r3, #1 @ 02083f34
    bne .L_02083f58 @ 02083f38
    ldrb r0, [ip, #1]! @ 02083f3c
    cmp r0, #0 @ 02083f40
    mov r3, r1 @ 02083f44
    bne .L_02083f2c @ 02083f48
    mov ip, r2 @ 02083f4c
    mov r0, ip @ 02083f50
    bx lr @ 02083f54
.L_02083f58:
    cmp r2, r0 @ 02083f58
    bne .L_02083f2c @ 02083f5c
    mov r0, ip @ 02083f60
    bx lr @ 02083f64
.L_02083f68:
@ FUN_02083f68 at 0x02083f68
    push {r4, r5, lr} @ 02083f68
    subs r5, r1, #0 @ 02083f6c
    sub sp, sp, #4 @ 02083f70
    mov r3, r0 @ 02083f74
    movne r4, #0 @ 02083f78
    bne .L_02083fa0 @ 02083f7c
    bl .L_020836d4 @ 02083f80
    mov r4, r0 @ 02083f84
.L_02083f88:
    mov r0, r4 @ 02083f88
    add sp, sp, #4 @ 02083f8c
    pop {r4, r5, lr} @ 02083f90
    bx lr @ 02083f94
.L_02083f98:
    mov r4, r0 @ 02083f98
    add r3, r0, #1 @ 02083f9c
.L_02083fa0:
    mov r0, r3 @ 02083fa0
    mov r1, r5 @ 02083fa4
    bl .L_020836d4 @ 02083fa8
    cmp r0, #0 @ 02083fac
    bne .L_02083f98 @ 02083fb0
    b .L_02083f88 @ 02083fb4
.L_02083fb8:
@ FUN_02083fb8 at 0x02083fb8
    ldrb r1, [r0] @ 02083fb8
    cmp r1, #0 @ 02083fbc
    str lr, [sp, #-4]! @ 02083fc0
    beq .L_02083ff0 @ 02083fc4
    ldr lr, [pc, #0x28] @ 02083fc8
    mov ip, r0 @ 02083fcc
.L_02083fd0:
    ldr r3, [lr] @ 02083fd0
    ldrb r2, [r1, r3] @ 02083fd4
    sub r3, r1, #0x20 @ 02083fd8
    tst r2, #2 @ 02083fdc
    strbne r3, [ip] @ 02083fe0
    ldrb r1, [ip, #1]! @ 02083fe4
    cmp r1, #0 @ 02083fe8
    bne .L_02083fd0 @ 02083fec
.L_02083ff0:
    .word 0xe49de004 @ 02083ff0 pop {lr}
    bx lr @ 02083ff4
    .byte 0x94, 0xf3, 0x08, 0x02 @ 02083ff8
.L_02083ffc:
@ FUN_02083ffc at 0x02083ffc
    push {r4, r5, lr} @ 02083ffc
    ldr r4, [pc, #0x3c] @ 02084000
    sub sp, sp, #4 @ 02084004
    mov r5, r0 @ 02084008
    mov r0, r1 @ 0208400c
    mov r1, r2 @ 02084010
    mov r2, r3 @ 02084014
    mov r3, #0 @ 02084018
    str r3, [r4] @ 0208401c
    bl .L_020852bc @ 02084020
    cmn r0, #1 @ 02084024
    bne .L_02084038 @ 02084028
    ldr r3, [r4] @ 0208402c
    cmp r3, #0 @ 02084030
    strne r3, [r5] @ 02084034
.L_02084038:
    add sp, sp, #4 @ 02084038
    pop {r4, r5, lr} @ 0208403c
    bx lr @ 02084040
    .byte 0x4c, 0xb3, 0x3e, 0x02 @ 02084044
.L_02084048:
@ FUN_02084048 at 0x02084048
    push {r4, r5, lr} @ 02084048
    ldr r4, [pc, #0x34] @ 0208404c
    mov r3, #0 @ 02084050
    sub sp, sp, #4 @ 02084054
    mov r5, r0 @ 02084058
    mov r0, r1 @ 0208405c
    str r3, [r4] @ 02084060
    bl .L_02084fc0 @ 02084064
    cmn r0, #1 @ 02084068
    bne .L_0208407c @ 0208406c
    ldr r3, [r4] @ 02084070
    cmp r3, #0 @ 02084074
    strne r3, [r5] @ 02084078
.L_0208407c:
    add sp, sp, #4 @ 0208407c
    pop {r4, r5, lr} @ 02084080
    bx lr @ 02084084
    .byte 0x4c, 0xb3, 0x3e, 0x02 @ 02084088
.L_0208408c:
@ FUN_0208408c at 0x0208408c
    ldrb r3, [r1] @ 0208408c
    cmp r3, #0x72 @ 02084090
    str lr, [sp, #-4]! @ 02084094
    beq .L_020840c4 @ 02084098
    cmp r3, #0x77 @ 0208409c
    beq .L_020840fc @ 020840a0
    cmp r3, #0x61 @ 020840a4
    movne r3, #0x16 @ 020840a8
    movne lr, #0 @ 020840ac
    strne r3, [r0] @ 020840b0
    beq .L_0208410c @ 020840b4
.L_020840b8:
    mov r0, lr @ 020840b8
    .word 0xe49de004 @ 020840bc pop {lr}
    bx lr @ 020840c0
.L_020840c4:
    mov ip, #0 @ 020840c4
    mov lr, #4 @ 020840c8
    mov r0, ip @ 020840cc
.L_020840d0:
    ldrb r3, [r1, #1] @ 020840d0
    cmp r3, #0 @ 020840d4
    beq .L_020840f0 @ 020840d8
    cmp r3, #0x2b @ 020840dc
    beq .L_0208411c @ 020840e0
    ldrb r3, [r1, #2] @ 020840e4
    cmp r3, #0x2b @ 020840e8
    beq .L_0208411c @ 020840ec
.L_020840f0:
    orr r3, ip, r0 @ 020840f0
    str r3, [r2] @ 020840f4
    b .L_020840b8 @ 020840f8
.L_020840fc:
    mov lr, #8 @ 020840fc
    mov ip, #1 @ 02084100
    mov r0, #0x600 @ 02084104
    b .L_020840d0 @ 02084108
.L_0208410c:
    mov lr, #0x108 @ 0208410c
    mov ip, #1 @ 02084110
    mov r0, #0x208 @ 02084114
    b .L_020840d0 @ 02084118
.L_0208411c:
    mov ip, #2 @ 0208411c
    orr r3, ip, r0 @ 02084120
    mov lr, #0x10 @ 02084124
    str r3, [r2] @ 02084128
    b .L_020840b8 @ 0208412c
.L_02084130:
@ FUN_02084130 at 0x02084130
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02084130
    ldr r3, [r2, #8] @ 02084134
    cmp r3, #0 @ 02084138
    sub sp, sp, #0xc @ 0208413c
    mov sl, r2 @ 02084140
    mov r4, r0 @ 02084144
    mov r6, r1 @ 02084148
    beq .L_020842f4 @ 0208414c
    ldrh r1, [r1, #0xc] @ 02084150
    tst r1, #8 @ 02084154
    beq .L_020843d4 @ 02084158
    ldr r3, [r6, #0x14] @ 0208415c
    cmp r3, #0 @ 02084160
    beq .L_020843d4 @ 02084164
.L_02084168:
    tst r1, #2 @ 02084168
    movne r4, #0 @ 0208416c
    ldr r8, [sl] @ 02084170
    movne r5, r4 @ 02084174
    bne .L_020842a8 @ 02084178
    ands r2, r1, #1 @ 0208417c
    movne r7, #0 @ 02084180
    movne sb, r7 @ 02084184
    strne r7, [sp, #4] @ 02084188
    movne fp, r7 @ 0208418c
    bne .L_02084318 @ 02084190
    mov r7, r2 @ 02084194
    mov fp, r2 @ 02084198
.L_0208419c:
    cmp r7, #0 @ 0208419c
    beq .L_0208428c @ 020841a0
.L_020841a4:
    tst r1, #0x200 @ 020841a4
    ldr r5, [r6, #8] @ 020841a8
    beq .L_020844bc @ 020841ac
    cmp r7, r5 @ 020841b0
    mov r4, r5 @ 020841b4
    movlo r4, r7 @ 020841b8
    movlo r5, r7 @ 020841bc
    blo .L_02084234 @ 020841c0
    tst r1, #0x80 @ 020841c4
    beq .L_02084234 @ 020841c8
    ldr r3, [r6] @ 020841cc
    add r1, r6, #0x14 @ 020841d0
    ldm r1, {r1, r2} @ 020841d4
    rsb r4, r1, r3 @ 020841d8
    add r2, r2, r2, lsl #1 @ 020841dc
    add r2, r2, r2, lsr #31 @ 020841e0
    add r3, r4, #1 @ 020841e4
    asr sb, r2, #1 @ 020841e8
    add r3, r7, r3 @ 020841ec
    cmp sb, r3 @ 020841f0
    ldr r5, [pc, #0x374] @ 020841f4
    mov r2, sb @ 020841f8
    movlo sb, r3 @ 020841fc
    movlo r2, sb @ 02084200
    ldr r0, [r5] @ 02084204
    bl .L_0208470c @ 02084208
    cmp r0, #0 @ 0208420c
    beq .L_02084560 @ 02084210
    rsb r2, r4, sb @ 02084214
    add r3, r0, r4 @ 02084218
    str r3, [r6] @ 0208421c
    str r2, [r6, #8] @ 02084220
    str r0, [r6, #0x14] @ 02084224
    str sb, [r6, #0x18] @ 02084228
    mov r4, r7 @ 0208422c
    mov r5, r7 @ 02084230
.L_02084234:
    mov r2, r4 @ 02084234
    ldr r0, [r6] @ 02084238
    mov r1, fp @ 0208423c
    bl .L_02082f5c @ 02084240
    ldr r3, [r6, #8] @ 02084244
    ldr r2, [r6] @ 02084248
    rsb r3, r5, r3 @ 0208424c
    add r2, r2, r4 @ 02084250
    str r3, [r6, #8] @ 02084254
    str r2, [r6] @ 02084258
    mov r4, r7 @ 0208425c
    mov r5, r7 @ 02084260
.L_02084264:
    ldr r3, [sl, #8] @ 02084264
    rsb r3, r5, r3 @ 02084268
    cmp r3, #0 @ 0208426c
    str r3, [sl, #8] @ 02084270
    beq .L_020842f4 @ 02084274
    rsb r7, r4, r7 @ 02084278
    cmp r7, #0 @ 0208427c
    ldrh r1, [r6, #0xc] @ 02084280
    add fp, fp, r4 @ 02084284
    bne .L_020841a4 @ 02084288
.L_0208428c:
    ldr fp, [r8] @ 0208428c
    ldr r7, [r8, #4] @ 02084290
    add r8, r8, #8 @ 02084294
    b .L_0208419c @ 02084298
.L_0208429c:
    ldr r5, [r8] @ 0208429c
    ldr r4, [r8, #4] @ 020842a0
    add r8, r8, #8 @ 020842a4
.L_020842a8:
    cmp r4, #0 @ 020842a8
    mov r1, r5 @ 020842ac
    beq .L_0208429c @ 020842b0
    cmp r4, #0x400 @ 020842b4
    movlo r2, r4 @ 020842b8
    movhs r2, #0x400 @ 020842bc
    ldr r0, [r6, #0x20] @ 020842c0
    ldr ip, [r6, #0x28] @ 020842c4
    mov lr, pc @ 020842c8
    bx ip @ 020842cc
    cmp r0, #0 @ 020842d0
    rsb r4, r0, r4 @ 020842d4
    add r5, r5, r0 @ 020842d8
    ble .L_020844a8 @ 020842dc
    ldr r3, [sl, #8] @ 020842e0
    rsb r3, r0, r3 @ 020842e4
    cmp r3, #0 @ 020842e8
    str r3, [sl, #8] @ 020842ec
    bne .L_020842a8 @ 020842f0
.L_020842f4:
    mov r0, #0 @ 020842f4
.L_020842f8:
    add sp, sp, #0xc @ 020842f8
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 020842fc
    bx lr @ 02084300
.L_02084304:
    mov r3, #0 @ 02084304
    str r3, [sp, #4] @ 02084308
    ldr sb, [r8] @ 0208430c
    ldr r7, [r8, #4] @ 02084310
    add r8, r8, #8 @ 02084314
.L_02084318:
    cmp r7, #0 @ 02084318
    beq .L_02084304 @ 0208431c
.L_02084320:
    ldr r3, [sp, #4] @ 02084320
    cmp r3, #0 @ 02084324
    beq .L_0208444c @ 02084328
.L_0208432c:
    ldr ip, [r6, #0x18] @ 0208432c
    ldr r1, [r6, #8] @ 02084330
    ldr r0, [r6] @ 02084334
    ldr r2, [r6, #0x14] @ 02084338
    cmp r7, fp @ 0208433c
    movlo r5, r7 @ 02084340
    movhs r5, fp @ 02084344
    add r4, ip, r1 @ 02084348
    cmp r0, r2 @ 0208434c
    movls r3, #0 @ 02084350
    movhi r3, #1 @ 02084354
    cmp r5, r4 @ 02084358
    movle r3, #0 @ 0208435c
    cmp r3, #0 @ 02084360
    bne .L_02084480 @ 02084364
    cmp r5, ip @ 02084368
    blt .L_02084404 @ 0208436c
    mov r2, ip @ 02084370
    ldr r0, [r6, #0x20] @ 02084374
    mov r1, sb @ 02084378
    ldr ip, [r6, #0x28] @ 0208437c
    mov lr, pc @ 02084380
    bx ip @ 02084384
    subs r4, r0, #0 @ 02084388
    ble .L_020844a8 @ 0208438c
.L_02084390:
    subs fp, fp, r4 @ 02084390
    beq .L_02084434 @ 02084394
.L_02084398:
    ldr r3, [sl, #8] @ 02084398
    rsb r3, r4, r3 @ 0208439c
    cmp r3, #0 @ 020843a0
    str r3, [sl, #8] @ 020843a4
    beq .L_020842f4 @ 020843a8
    rsb r7, r4, r7 @ 020843ac
    cmp r7, #0 @ 020843b0
    add sb, sb, r4 @ 020843b4
    bne .L_02084320 @ 020843b8
    ldr sb, [r8] @ 020843bc
    ldr r7, [r8, #4] @ 020843c0
    mov r3, #0 @ 020843c4
    add r8, r8, #8 @ 020843c8
    str r3, [sp, #4] @ 020843cc
    b .L_02084318 @ 020843d0
.L_020843d4:
    mov r0, r6 @ 020843d4
    bl .L_02084d28 @ 020843d8
    cmp r0, #0 @ 020843dc
    ldrheq r1, [r6, #0xc] @ 020843e0
    beq .L_02084168 @ 020843e4
    ldrh r3, [r6, #0xc] @ 020843e8
    mov r2, #9 @ 020843ec
    orr r3, r3, #0x40 @ 020843f0
    mvn r0, #0 @ 020843f4
    strh r3, [r6, #0xc] @ 020843f8
    str r2, [r4] @ 020843fc
    b .L_020842f8 @ 02084400
.L_02084404:
    mov r2, r5 @ 02084404
    mov r1, sb @ 02084408
    bl .L_02082f5c @ 0208440c
    ldr r3, [r6, #8] @ 02084410
    ldr r2, [r6] @ 02084414
    mov r4, r5 @ 02084418
    rsb r3, r5, r3 @ 0208441c
    add r2, r2, r5 @ 02084420
    subs fp, fp, r4 @ 02084424
    str r3, [r6, #8] @ 02084428
    str r2, [r6] @ 0208442c
    bne .L_02084398 @ 02084430
.L_02084434:
    mov r0, r6 @ 02084434
    bl .L_02081034 @ 02084438
    cmp r0, #0 @ 0208443c
    bne .L_020844a8 @ 02084440
    str r0, [sp, #4] @ 02084444
    b .L_02084398 @ 02084448
.L_0208444c:
    mov r0, sb @ 0208444c
    mov r1, #0xa @ 02084450
    mov r2, r7 @ 02084454
    bl .L_020845c0 @ 02084458
    cmp r0, #0 @ 0208445c
    rsbne r3, sb, r0 @ 02084460
    addne fp, r3, #1 @ 02084464
    moveq r3, #1 @ 02084468
    movne r3, #1 @ 0208446c
    addeq fp, r7, #1 @ 02084470
    strne r3, [sp, #4] @ 02084474
    streq r3, [sp, #4] @ 02084478
    b .L_0208432c @ 0208447c
.L_02084480:
    mov r1, sb @ 02084480
    mov r2, r4 @ 02084484
    bl .L_02082f5c @ 02084488
    ldr r3, [r6] @ 0208448c
    add r3, r3, r4 @ 02084490
    str r3, [r6] @ 02084494
    mov r0, r6 @ 02084498
    bl .L_02081034 @ 0208449c
    cmp r0, #0 @ 020844a0
    beq .L_02084390 @ 020844a4
.L_020844a8:
    ldrh r3, [r6, #0xc] @ 020844a8
    mvn r0, #0 @ 020844ac
    orr r3, r3, #0x40 @ 020844b0
    strh r3, [r6, #0xc] @ 020844b4
    b .L_020842f8 @ 020844b8
.L_020844bc:
    ldr r0, [r6] @ 020844bc
    ldr r3, [r6, #0x14] @ 020844c0
    cmp r0, r3 @ 020844c4
    cmphi r7, r5 @ 020844c8
    mov r4, r5 @ 020844cc
    bhi .L_02084534 @ 020844d0
    ldr r2, [r6, #0x18] @ 020844d4
    cmp r7, r2 @ 020844d8
    blo .L_02084504 @ 020844dc
    ldr r0, [r6, #0x20] @ 020844e0
    mov r1, fp @ 020844e4
    ldr ip, [r6, #0x28] @ 020844e8
    mov lr, pc @ 020844ec
    bx ip @ 020844f0
    subs r5, r0, #0 @ 020844f4
    ble .L_020844a8 @ 020844f8
    mov r4, r5 @ 020844fc
    b .L_02084264 @ 02084500
.L_02084504:
    mov r2, r7 @ 02084504
    mov r1, fp @ 02084508
    bl .L_02082f5c @ 0208450c
    ldr r3, [r6, #8] @ 02084510
    ldr r2, [r6] @ 02084514
    rsb r3, r7, r3 @ 02084518
    add r2, r2, r7 @ 0208451c
    mov r5, r7 @ 02084520
    mov r4, r7 @ 02084524
    str r3, [r6, #8] @ 02084528
    str r2, [r6] @ 0208452c
    b .L_02084264 @ 02084530
.L_02084534:
    mov r1, fp @ 02084534
    mov r2, r5 @ 02084538
    bl .L_02082f5c @ 0208453c
    ldr r3, [r6] @ 02084540
    add r3, r3, r5 @ 02084544
    str r3, [r6] @ 02084548
    mov r0, r6 @ 0208454c
    bl .L_02081034 @ 02084550
    cmp r0, #0 @ 02084554
    beq .L_02084264 @ 02084558
    b .L_020844a8 @ 0208455c
.L_02084560:
    ldr r0, [r5] @ 02084560
    ldr r1, [r6, #0x14] @ 02084564
    bl .L_020818d4 @ 02084568
    b .L_020844a8 @ 0208456c
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02084570
.L_02084574:
@ FUN_02084574 at 0x02084574
    push {r4, r5, lr} @ 02084574
    ldr r4, [pc, #0x3c] @ 02084578
    sub sp, sp, #4 @ 0208457c
    mov r5, r0 @ 02084580
    mov r0, r1 @ 02084584
    mov r1, r2 @ 02084588
    mov r2, r3 @ 0208458c
    mov r3, #0 @ 02084590
    str r3, [r4] @ 02084594
    bl .L_020850a8 @ 02084598
    cmn r0, #1 @ 0208459c
    bne .L_020845b0 @ 020845a0
    ldr r3, [r4] @ 020845a4
    cmp r3, #0 @ 020845a8
    strne r3, [r5] @ 020845ac
.L_020845b0:
    add sp, sp, #4 @ 020845b0
    pop {r4, r5, lr} @ 020845b4
    bx lr @ 020845b8
    .byte 0x4c, 0xb3, 0x3e, 0x02 @ 020845bc
.L_020845c0:
@ FUN_020845c0 at 0x020845c0
    mov ip, r2 @ 020845c0
    cmp ip, #3 @ 020845c4
    str lr, [sp, #-4]! @ 020845c8
    mov r2, r0 @ 020845cc
    and r1, r1, #0xff @ 020845d0
    bls .L_020845e0 @ 020845d4
    ands r3, r0, #3 @ 020845d8
    beq .L_0208461c @ 020845dc
.L_020845e0:
    cmp ip, #0 @ 020845e0
    beq .L_02084610 @ 020845e4
    ldrb r3, [r0] @ 020845e8
    cmp r1, r3 @ 020845ec
    bne .L_02084604 @ 020845f0
    b .L_02084614 @ 020845f4
.L_020845f8:
    ldrb r3, [r0, #1]! @ 020845f8
    cmp r1, r3 @ 020845fc
    beq .L_02084614 @ 02084600
.L_02084604:
    cmp ip, #1 @ 02084604
    sub ip, ip, #1 @ 02084608
    bne .L_020845f8 @ 0208460c
.L_02084610:
    mov r0, #0 @ 02084610
.L_02084614:
    .word 0xe49de004 @ 02084614 pop {lr}
    bx lr @ 02084618
.L_0208461c:
    mov lr, r3 @ 0208461c
.L_02084620:
    add r3, r3, #1 @ 02084620
    cmp r3, #4 @ 02084624
    add lr, r1, lr, lsl #8 @ 02084628
    bne .L_02084620 @ 0208462c
    mov r0, r2 @ 02084630
.L_02084634:
    ldr r2, [r0] @ 02084634
    eor r2, r2, lr @ 02084638
    add r3, r2, #0xff000000 @ 0208463c
    sub r3, r3, #0x10000 @ 02084640
    sub r3, r3, #0x100 @ 02084644
    sub r3, r3, #1 @ 02084648
    bic r3, r3, #0x7f000000 @ 0208464c
    bic r3, r3, #0x7f0000 @ 02084650
    bic r3, r3, #0x7f00 @ 02084654
    bic r3, r3, #0x7f @ 02084658
    bics r2, r3, r2 @ 0208465c
    sub ip, ip, #4 @ 02084660
    beq .L_020846a8 @ 02084664
    ldrb r3, [r0] @ 02084668
    cmp r1, r3 @ 0208466c
    mov r2, r0 @ 02084670
    beq .L_020846b8 @ 02084674
    ldrb r3, [r0, #1] @ 02084678
    cmp r1, r3 @ 0208467c
    add r2, r0, #1 @ 02084680
    beq .L_020846b8 @ 02084684
    ldrb r3, [r0, #2] @ 02084688
    cmp r1, r3 @ 0208468c
    add r2, r0, #2 @ 02084690
    beq .L_020846b8 @ 02084694
    ldrb r3, [r0, #3] @ 02084698
    cmp r1, r3 @ 0208469c
    add r2, r0, #3 @ 020846a0
    beq .L_020846b8 @ 020846a4
.L_020846a8:
    cmp ip, #3 @ 020846a8
    add r0, r0, #4 @ 020846ac
    bhi .L_02084634 @ 020846b0
    b .L_020845e0 @ 020846b4
.L_020846b8:
    mov r0, r2 @ 020846b8
    b .L_02084614 @ 020846bc
.L_020846c0:
@ FUN_020846c0 at 0x020846c0
    push {r4, r5, lr} @ 020846c0
    ldr r4, [pc, #0x3c] @ 020846c4
    sub sp, sp, #4 @ 020846c8
    mov r5, r0 @ 020846cc
    mov r0, r1 @ 020846d0
    mov r1, r2 @ 020846d4
    mov r2, r3 @ 020846d8
    mov r3, #0 @ 020846dc
    str r3, [r4] @ 020846e0
    bl .L_020851cc @ 020846e4
    cmn r0, #1 @ 020846e8
    bne .L_020846fc @ 020846ec
    ldr r3, [r4] @ 020846f0
    cmp r3, #0 @ 020846f4
    strne r3, [r5] @ 020846f8
.L_020846fc:
    add sp, sp, #4 @ 020846fc
    pop {r4, r5, lr} @ 02084700
    bx lr @ 02084704
    .byte 0x4c, 0xb3, 0x3e, 0x02 @ 02084708
.L_0208470c:
@ FUN_0208470c at 0x0208470c
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 0208470c
    subs sl, r1, #0 @ 02084710
    sub sp, sp, #0xc @ 02084714
    mov r6, r2 @ 02084718
    str r0, [sp] @ 0208471c
    beq .L_02084954 @ 02084720
    bl .L_020830f0 @ 02084724
    add r1, r6, #0xb @ 02084728
    cmp r1, #0x16 @ 0208472c
    bichi sb, r1, #7 @ 02084730
    movls sb, #0x10 @ 02084734
    movls r3, #0 @ 02084738
    lsrhi r3, sb, #0x1f @ 0208473c
    cmp sb, r6 @ 02084740
    orrlo r3, r3, #1 @ 02084744
    sub r4, sl, #8 @ 02084748
    cmp r3, #0 @ 0208474c
    ldr lr, [r4, #4] @ 02084750
    bne .L_02084a9c @ 02084754
    bic r5, lr, #3 @ 02084758
    cmp r5, sb @ 0208475c
    movge r8, r4 @ 02084760
    movge r7, r5 @ 02084764
    addge r4, r8, #8 @ 02084768
    movge ip, r8 @ 0208476c
    bge .L_020848a4 @ 02084770
    ldr r2, [pc, #0x5a8] @ 02084774
    ldr fp, [r2, #8] @ 02084778
    add r0, r4, r5 @ 0208477c
    cmp r0, fp @ 02084780
    mov r8, r4 @ 02084784
    beq .L_02084ab0 @ 02084788
    ldr r1, [r0, #4] @ 0208478c
    bic r3, r1, #1 @ 02084790
    add r3, r3, r0 @ 02084794
    ldr r2, [r3, #4] @ 02084798
    tst r2, #1 @ 0208479c
    beq .L_02084928 @ 020847a0
    mov ip, #0 @ 020847a4
    mov r0, ip @ 020847a8
.L_020847ac:
    tst lr, #1 @ 020847ac
    bne .L_02084964 @ 020847b0
    ldr r3, [r4] @ 020847b4
    rsb r3, r3, r4 @ 020847b8
    ldr r2, [r3, #4] @ 020847bc
    cmp r0, #0 @ 020847c0
    str r3, [sp, #4] @ 020847c4
    bic r2, r2, #3 @ 020847c8
    beq .L_020849e4 @ 020847cc
    cmp r0, fp @ 020847d0
    beq .L_02084bb8 @ 020847d4
    add r7, r5, r2 @ 020847d8
    add fp, ip, r7 @ 020847dc
    cmp sb, fp @ 020847e0
    bgt .L_020849e8 @ 020847e4
    add r2, r0, #8 @ 020847e8
    ldm r2, {r2, r3} @ 020847ec
    str r2, [r3, #8] @ 020847f0
    str r3, [r2, #0xc] @ 020847f4
    ldr r3, [sp, #4] @ 020847f8
    sub r4, r5, #4 @ 020847fc
    ldr r2, [r3, #0xc] @ 02084800
    ldr r8, [sp, #4] @ 02084804
    ldr r3, [r3, #8] @ 02084808
    cmp r4, #0x24 @ 0208480c
    str r3, [r2, #8] @ 02084810
    str r2, [r3, #0xc] @ 02084814
    add r5, r8, #8 @ 02084818
    bhi .L_02084b6c @ 0208481c
    cmp r4, #0x13 @ 02084820
    mov ip, sl @ 02084824
    mov lr, r5 @ 02084828
    bls .L_02084878 @ 0208482c
    mov r0, sl @ 02084830
    ldr r3, [r0], #4 @ 02084834
    str r3, [r8, #8] @ 02084838
    ldr r2, [sl, #4] @ 0208483c
    cmp r4, #0x1b @ 02084840
    str r2, [r8, #0xc] @ 02084844
    add lr, r8, #0x10 @ 02084848
    add ip, r0, #4 @ 0208484c
    bls .L_02084878 @ 02084850
    ldr r3, [r0, #4] @ 02084854
    str r3, [r8, #0x10] @ 02084858
    ldr r2, [ip, #4] @ 0208485c
    add r3, ip, #4 @ 02084860
    cmp r4, #0x24 @ 02084864
    str r2, [r8, #0x14] @ 02084868
    add lr, r8, #0x18 @ 0208486c
    add ip, r3, #4 @ 02084870
    beq .L_02084cd0 @ 02084874
.L_02084878:
    mov r2, ip @ 02084878
    ldr r1, [r2], #4 @ 0208487c
    mov r0, lr @ 02084880
    str r1, [r0], #4 @ 02084884
    ldr r3, [ip, #4] @ 02084888
    str r3, [lr, #4] @ 0208488c
    ldr r1, [r2, #4] @ 02084890
    ldr ip, [sp, #4] @ 02084894
    str r1, [r0, #4] @ 02084898
    mov r7, fp @ 0208489c
    mov r4, r5 @ 020848a0
.L_020848a4:
    rsb r0, sb, r7 @ 020848a4
    cmp r0, #0xf @ 020848a8
    bhi .L_020848ec @ 020848ac
    ldr r3, [ip, #4] @ 020848b0
    and r3, r3, #1 @ 020848b4
    orr r3, r7, r3 @ 020848b8
    str r3, [ip, #4] @ 020848bc
    add r2, r7, r8 @ 020848c0
    ldr r3, [r2, #4] @ 020848c4
    orr r3, r3, #1 @ 020848c8
    str r3, [r2, #4] @ 020848cc
.L_020848d0:
    ldr r0, [sp] @ 020848d0
    bl .L_020830f4 @ 020848d4
    mov r6, r4 @ 020848d8
.L_020848dc:
    mov r0, r6 @ 020848dc
    add sp, sp, #0xc @ 020848e0
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 020848e4
    bx lr @ 020848e8
.L_020848ec:
    ldr r3, [ip, #4] @ 020848ec
    and r3, r3, #1 @ 020848f0
    add r1, sb, r8 @ 020848f4
    orr r3, sb, r3 @ 020848f8
    orr r2, r0, #1 @ 020848fc
    str r3, [ip, #4] @ 02084900
    str r2, [r1, #4] @ 02084904
    add r0, r1, r0 @ 02084908
    ldr r3, [r0, #4] @ 0208490c
    orr r3, r3, #1 @ 02084910
    str r3, [r0, #4] @ 02084914
    add r1, r1, #8 @ 02084918
    ldr r0, [sp] @ 0208491c
    bl .L_020818d4 @ 02084920
    b .L_020848d0 @ 02084924
.L_02084928:
    bic ip, r1, #3 @ 02084928
    add r7, r5, ip @ 0208492c
    cmp sb, r7 @ 02084930
    bgt .L_020847ac @ 02084934
    add r2, r0, #8 @ 02084938
    ldm r2, {r2, r3} @ 0208493c
    mov ip, r4 @ 02084940
    add r4, r4, #8 @ 02084944
    str r2, [r3, #8] @ 02084948
    str r3, [r2, #0xc] @ 0208494c
    b .L_020848a4 @ 02084950
.L_02084954:
    mov r1, r2 @ 02084954
    bl .L_0208274c @ 02084958
    mov r6, r0 @ 0208495c
    b .L_020848dc @ 02084960
.L_02084964:
    mov r1, r6 @ 02084964
    ldr r0, [sp] @ 02084968
    bl .L_0208274c @ 0208496c
    subs r6, r0, #0 @ 02084970
    beq .L_020849d8 @ 02084974
    ldr r3, [r4, #4] @ 02084978
    bic r3, r3, #1 @ 0208497c
    add r3, r4, r3 @ 02084980
    sub r2, r6, #8 @ 02084984
    cmp r2, r3 @ 02084988
    beq .L_02084ca4 @ 0208498c
    sub r1, r5, #4 @ 02084990
    cmp r1, #0x24 @ 02084994
    bhi .L_02084ba8 @ 02084998
    cmp r1, #0x13 @ 0208499c
    mov ip, sl @ 020849a0
    mov lr, r6 @ 020849a4
    bhi .L_02084b00 @ 020849a8
.L_020849ac:
    mov r0, ip @ 020849ac
    ldr r2, [r0], #4 @ 020849b0
    mov r1, lr @ 020849b4
    str r2, [r1], #4 @ 020849b8
    ldr r3, [ip, #4] @ 020849bc
    str r3, [lr, #4] @ 020849c0
    ldr r2, [r0, #4] @ 020849c4
    str r2, [r1, #4] @ 020849c8
.L_020849cc:
    mov r1, sl @ 020849cc
    ldr r0, [sp] @ 020849d0
    bl .L_020818d4 @ 020849d4
.L_020849d8:
    ldr r0, [sp] @ 020849d8
    bl .L_020830f4 @ 020849dc
    b .L_020848dc @ 020849e0
.L_020849e4:
    add r7, r5, r2 @ 020849e4
.L_020849e8:
    cmp sb, r7 @ 020849e8
    bgt .L_02084964 @ 020849ec
    ldr r1, [sp, #4] @ 020849f0
    sub r4, r5, #4 @ 020849f4
    ldr r2, [r1, #0xc] @ 020849f8
    ldr r3, [r1, #8] @ 020849fc
    cmp r4, #0x24 @ 02084a00
    mov r8, r1 @ 02084a04
    str r3, [r2, #8] @ 02084a08
    str r2, [r3, #0xc] @ 02084a0c
    add r5, r1, #8 @ 02084a10
    bhi .L_02084b8c @ 02084a14
    cmp r4, #0x13 @ 02084a18
    mov ip, sl @ 02084a1c
    mov lr, r5 @ 02084a20
    bls .L_02084a70 @ 02084a24
    mov r0, sl @ 02084a28
    ldr r3, [r0], #4 @ 02084a2c
    str r3, [r1, #8] @ 02084a30
    ldr r2, [sl, #4] @ 02084a34
    cmp r4, #0x1b @ 02084a38
    str r2, [r1, #0xc] @ 02084a3c
    add lr, r1, #0x10 @ 02084a40
    add ip, r0, #4 @ 02084a44
    bls .L_02084a70 @ 02084a48
    ldr r3, [r0, #4] @ 02084a4c
    str r3, [r1, #0x10] @ 02084a50
    ldr r2, [ip, #4] @ 02084a54
    add r3, ip, #4 @ 02084a58
    cmp r4, #0x24 @ 02084a5c
    str r2, [r1, #0x14] @ 02084a60
    add lr, r1, #0x18 @ 02084a64
    add ip, r3, #4 @ 02084a68
    beq .L_02084cec @ 02084a6c
.L_02084a70:
    mov r2, ip @ 02084a70
    ldr r0, [r2], #4 @ 02084a74
    mov r1, lr @ 02084a78
    str r0, [r1], #4 @ 02084a7c
    ldr r3, [ip, #4] @ 02084a80
    str r3, [lr, #4] @ 02084a84
    ldr ip, [sp, #4] @ 02084a88
    ldr r0, [r2, #4] @ 02084a8c
    mov r4, r5 @ 02084a90
    str r0, [r1, #4] @ 02084a94
    b .L_020848a4 @ 02084a98
.L_02084a9c:
    ldr r1, [sp] @ 02084a9c
    mov r3, #0xc @ 02084aa0
    mov r6, #0 @ 02084aa4
    str r3, [r1] @ 02084aa8
    b .L_020848dc @ 02084aac
.L_02084ab0:
    ldr r3, [r0, #4] @ 02084ab0
    bic ip, r3, #3 @ 02084ab4
    add r2, r5, ip @ 02084ab8
    add r3, sb, #0x10 @ 02084abc
    cmp r2, r3 @ 02084ac0
    blt .L_020847ac @ 02084ac4
    rsb r3, sb, r2 @ 02084ac8
    add r1, r4, sb @ 02084acc
    orr r3, r3, #1 @ 02084ad0
    str r3, [r1, #4] @ 02084ad4
    ldr r2, [r4, #4] @ 02084ad8
    ldr r3, [pc, #0x240] @ 02084adc
    and r2, r2, #1 @ 02084ae0
    orr r2, sb, r2 @ 02084ae4
    str r2, [r4, #4] @ 02084ae8
    ldr r0, [sp] @ 02084aec
    str r1, [r3, #8] @ 02084af0
    bl .L_020830f4 @ 02084af4
    add r6, r4, #8 @ 02084af8
    b .L_020848dc @ 02084afc
.L_02084b00:
    mov r4, sl @ 02084b00
    ldr r3, [r4], #4 @ 02084b04
    mov r0, r6 @ 02084b08
    str r3, [r0], #4 @ 02084b0c
    ldr r2, [sl, #4] @ 02084b10
    cmp r1, #0x1b @ 02084b14
    str r2, [r6, #4] @ 02084b18
    add lr, r0, #4 @ 02084b1c
    add ip, r4, #4 @ 02084b20
    bls .L_020849ac @ 02084b24
    ldr r3, [r4, #4] @ 02084b28
    str r3, [r0, #4] @ 02084b2c
    ldr r2, [ip, #4] @ 02084b30
    cmp r1, #0x24 @ 02084b34
    add r3, ip, #4 @ 02084b38
    add r1, lr, #4 @ 02084b3c
    str r2, [lr, #4] @ 02084b40
    add ip, r3, #4 @ 02084b44
    add lr, r1, #4 @ 02084b48
    bne .L_020849ac @ 02084b4c
    ldr r3, [r3, #4] @ 02084b50
    str r3, [r1, #4] @ 02084b54
    ldr r2, [ip, #4] @ 02084b58
    add ip, ip, #8 @ 02084b5c
    str r2, [lr, #4] @ 02084b60
    add lr, lr, #8 @ 02084b64
    b .L_020849ac @ 02084b68
.L_02084b6c:
    mov r2, r4 @ 02084b6c
    mov r1, sl @ 02084b70
    mov r0, r5 @ 02084b74
    bl .L_02082f5c @ 02084b78
    mov r7, fp @ 02084b7c
    mov r4, r5 @ 02084b80
    mov ip, r8 @ 02084b84
    b .L_020848a4 @ 02084b88
.L_02084b8c:
    mov r2, r4 @ 02084b8c
    mov r1, sl @ 02084b90
    mov r0, r5 @ 02084b94
    bl .L_02082f5c @ 02084b98
    mov r4, r5 @ 02084b9c
    mov ip, r8 @ 02084ba0
    b .L_020848a4 @ 02084ba4
.L_02084ba8:
    mov r2, r1 @ 02084ba8
    mov r1, sl @ 02084bac
    bl .L_02082f5c @ 02084bb0
    b .L_020849cc @ 02084bb4
.L_02084bb8:
    add r7, r5, r2 @ 02084bb8
    add fp, ip, r7 @ 02084bbc
    add r3, sb, #0x10 @ 02084bc0
    cmp fp, r3 @ 02084bc4
    blt .L_020849e8 @ 02084bc8
    ldr r1, [sp, #4] @ 02084bcc
    sub r4, r5, #4 @ 02084bd0
    ldr r2, [r1, #0xc] @ 02084bd4
    ldr r3, [r1, #8] @ 02084bd8
    cmp r4, #0x24 @ 02084bdc
    str r3, [r2, #8] @ 02084be0
    str r2, [r3, #0xc] @ 02084be4
    add r6, r1, #8 @ 02084be8
    bhi .L_02084cbc @ 02084bec
    cmp r4, #0x13 @ 02084bf0
    mov ip, sl @ 02084bf4
    mov lr, r6 @ 02084bf8
    bls .L_02084c48 @ 02084bfc
    mov r0, sl @ 02084c00
    ldr r3, [r0], #4 @ 02084c04
    str r3, [r1, #8] @ 02084c08
    ldr r2, [sl, #4] @ 02084c0c
    cmp r4, #0x1b @ 02084c10
    str r2, [r1, #0xc] @ 02084c14
    add lr, r1, #0x10 @ 02084c18
    add ip, r0, #4 @ 02084c1c
    bls .L_02084c48 @ 02084c20
    ldr r3, [r0, #4] @ 02084c24
    str r3, [r1, #0x10] @ 02084c28
    ldr r2, [ip, #4] @ 02084c2c
    add r3, ip, #4 @ 02084c30
    cmp r4, #0x24 @ 02084c34
    str r2, [r1, #0x14] @ 02084c38
    add lr, r1, #0x18 @ 02084c3c
    add ip, r3, #4 @ 02084c40
    beq .L_02084d08 @ 02084c44
.L_02084c48:
    mov r0, ip @ 02084c48
    ldr r2, [r0], #4 @ 02084c4c
    mov r1, lr @ 02084c50
    str r2, [r1], #4 @ 02084c54
    ldr r3, [ip, #4] @ 02084c58
    str r3, [lr, #4] @ 02084c5c
    ldr r2, [r0, #4] @ 02084c60
    str r2, [r1, #4] @ 02084c64
.L_02084c68:
    ldr r2, [sp, #4] @ 02084c68
    rsb r3, sb, fp @ 02084c6c
    add r1, r2, sb @ 02084c70
    orr r3, r3, #1 @ 02084c74
    str r3, [r1, #4] @ 02084c78
    mov r3, r2 @ 02084c7c
    ldr r2, [r2, #4] @ 02084c80
    and r2, r2, #1 @ 02084c84
    orr r2, sb, r2 @ 02084c88
    str r2, [r3, #4] @ 02084c8c
    ldr r2, [pc, #0x8c] @ 02084c90
    ldr r0, [sp] @ 02084c94
    str r1, [r2, #8] @ 02084c98
    bl .L_020830f4 @ 02084c9c
    b .L_020848dc @ 02084ca0
.L_02084ca4:
    ldr r3, [r2, #4] @ 02084ca4
    bic r3, r3, #3 @ 02084ca8
    mov ip, r4 @ 02084cac
    add r7, r5, r3 @ 02084cb0
    add r4, r4, #8 @ 02084cb4
    b .L_020848a4 @ 02084cb8
.L_02084cbc:
    mov r1, sl @ 02084cbc
    mov r2, r4 @ 02084cc0
    mov r0, r6 @ 02084cc4
    bl .L_02082f5c @ 02084cc8
    b .L_02084c68 @ 02084ccc
.L_02084cd0:
    ldr r3, [r3, #4] @ 02084cd0
    str r3, [r8, #0x18] @ 02084cd4
    ldr r2, [ip, #4] @ 02084cd8
    add lr, r8, #0x20 @ 02084cdc
    add ip, ip, #8 @ 02084ce0
    str r2, [r8, #0x1c] @ 02084ce4
    b .L_02084878 @ 02084ce8
.L_02084cec:
    ldr r3, [r3, #4] @ 02084cec
    str r3, [r1, #0x18] @ 02084cf0
    ldr r2, [ip, #4] @ 02084cf4
    add lr, r1, #0x20 @ 02084cf8
    add ip, ip, #8 @ 02084cfc
    str r2, [r1, #0x1c] @ 02084d00
    b .L_02084a70 @ 02084d04
.L_02084d08:
    ldr r3, [r3, #4] @ 02084d08
    str r3, [r1, #0x18] @ 02084d0c
    ldr r2, [ip, #4] @ 02084d10
    add lr, r1, #0x20 @ 02084d14
    add ip, ip, #8 @ 02084d18
    str r2, [r1, #0x1c] @ 02084d1c
    b .L_02084c48 @ 02084d20
    .byte 0xb0, 0xf7, 0x08, 0x02 @ 02084d24
.L_02084d28:
@ FUN_02084d28 at 0x02084d28
    push {r4, r5, r6, lr} @ 02084d28
    ldr r6, [pc, #0xfc] @ 02084d2c
    ldr r2, [r6] @ 02084d30
    cmp r2, #0 @ 02084d34
    mov r4, r0 @ 02084d38
    beq .L_02084d4c @ 02084d3c
    ldr r3, [r2, #0x38] @ 02084d40
    cmp r3, #0 @ 02084d44
    beq .L_02084da0 @ 02084d48
.L_02084d4c:
    ldrh r2, [r4, #0xc] @ 02084d4c
    ands r5, r2, #8 @ 02084d50
    ldrne r1, [r4, #0x14] @ 02084d54
    beq .L_02084dc8 @ 02084d58
.L_02084d5c:
    cmp r1, #0 @ 02084d5c
    beq .L_02084dac @ 02084d60
.L_02084d64:
    ands r3, r2, #1 @ 02084d64
    beq .L_02084d8c @ 02084d68
    ldr r3, [r4, #0x18] @ 02084d6c
    mov r2, #0 @ 02084d70
    rsb r3, r3, #0 @ 02084d74
    str r3, [r4, #0x1c] @ 02084d78
    str r2, [r4, #8] @ 02084d7c
    mov r0, r2 @ 02084d80
.L_02084d84:
    pop {r4, r5, r6, lr} @ 02084d84
    bx lr @ 02084d88
.L_02084d8c:
    tst r2, #2 @ 02084d8c
    ldreq r3, [r4, #0x18] @ 02084d90
    mov r0, #0 @ 02084d94
    str r3, [r4, #8] @ 02084d98
    b .L_02084d84 @ 02084d9c
.L_02084da0:
    mov r0, r2 @ 02084da0
    bl .L_02081258 @ 02084da4
    b .L_02084d4c @ 02084da8
.L_02084dac:
    and r3, r2, #0x280 @ 02084dac
    cmp r3, #0x200 @ 02084db0
    beq .L_02084d64 @ 02084db4
    mov r0, r4 @ 02084db8
    bl .L_020823f8 @ 02084dbc
    ldrh r2, [r4, #0xc] @ 02084dc0
    b .L_02084d64 @ 02084dc4
.L_02084dc8:
    tst r2, #0x10 @ 02084dc8
    mvneq r0, #0 @ 02084dcc
    beq .L_02084d84 @ 02084dd0
    tst r2, #4 @ 02084dd4
    ldreq r1, [r4, #0x14] @ 02084dd8
    beq .L_02084e20 @ 02084ddc
    ldr r1, [r4, #0x34] @ 02084de0
    cmp r1, #0 @ 02084de4
    beq .L_02084e08 @ 02084de8
    add r3, r4, #0x44 @ 02084dec
    cmp r1, r3 @ 02084df0
    beq .L_02084e04 @ 02084df4
    ldr r0, [r6] @ 02084df8
    bl .L_020818d4 @ 02084dfc
    ldrh r2, [r4, #0xc] @ 02084e00
.L_02084e04:
    str r5, [r4, #0x34] @ 02084e04
.L_02084e08:
    bic r3, r2, #0x24 @ 02084e08
    strh r3, [r4, #0xc] @ 02084e0c
    ldr r1, [r4, #0x14] @ 02084e10
    mov r3, #0 @ 02084e14
    ldrh r2, [r4, #0xc] @ 02084e18
    stm r4, {r1, r3} @ 02084e1c
.L_02084e20:
    orr r3, r2, #8 @ 02084e20
    strh r3, [r4, #0xc] @ 02084e24
    ldrh r2, [r4, #0xc] @ 02084e28
    b .L_02084d5c @ 02084e2c
    .byte 0x98, 0xf3, 0x08, 0x02 @ 02084e30
.L_02084e34:
@ FUN_02084e34 at 0x02084e34
    sub r3, r0, #3 @ 02084e34
    cmp r3, #0xd @ 02084e38
    ldrls r3, [pc, #4] @ 02084e3c
    strls r0, [r3] @ 02084e40
    bx lr @ 02084e44
    .byte 0x00, 0xfc, 0x08, 0x02 @ 02084e48
.L_02084e4c:
@ FUN_02084e4c at 0x02084e4c
    push {r4, r5, r6, r7, r8, sb, sl, lr} @ 02084e4c
    ldr sb, [pc, #0x80] @ 02084e50
    ldr r8, [r0] @ 02084e54
    mov sl, r0 @ 02084e58
    mov r7, #3 @ 02084e5c
    mov r6, sb @ 02084e60
.L_02084e64:
    ldr r3, [r6, #0xc] @ 02084e64
    ldr r5, [r3] @ 02084e68
    mov r1, r8 @ 02084e6c
    mov r0, r5 @ 02084e70
    bl .L_020837ec @ 02084e74
    cmp r0, #0 @ 02084e78
    add r6, r6, #4 @ 02084e7c
    mov r0, r5 @ 02084e80
    bne .L_02084ea0 @ 02084e84
    bl .L_02083a6c @ 02084e88
    mov r4, r0 @ 02084e8c
    mov r0, r8 @ 02084e90
    bl .L_02083a6c @ 02084e94
    cmp r4, r0 @ 02084e98
    beq .L_02084ed0 @ 02084e9c
.L_02084ea0:
    mov r0, r5 @ 02084ea0
    ldr r1, [pc, #0x30] @ 02084ea4
    bl .L_020837ec @ 02084ea8
    cmp r0, #0 @ 02084eac
    beq .L_02084ed0 @ 02084eb0
    add r7, r7, #1 @ 02084eb4
    cmp r7, #0x10 @ 02084eb8
    bne .L_02084e64 @ 02084ebc
    sub r7, r7, #0x11 @ 02084ec0
.L_02084ec4:
    mov r0, r7 @ 02084ec4
    pop {r4, r5, r6, r7, r8, sb, sl, lr} @ 02084ec8
    bx lr @ 02084ecc
.L_02084ed0:
    str sl, [sb, r7, lsl #2] @ 02084ed0
    b .L_02084ec4 @ 02084ed4
    .byte 0xc0, 0xfb, 0x08, 0x02, 0x28, 0xf3, 0x08, 0x02 @ 02084ed8
.L_02084ee0:
@ FUN_02084ee0 at 0x02084ee0
    push {r4, r5, r6, r7, r8, lr} @ 02084ee0
    ldr r6, [pc, #0x90] @ 02084ee4
    mov r8, r0 @ 02084ee8
    mov r7, #0 @ 02084eec
.L_02084ef0:
    ldr r4, [r6] @ 02084ef0
    cmp r4, #0 @ 02084ef4
    beq .L_02084f4c @ 02084ef8
    ldr r4, [r4] @ 02084efc
    mov r0, r4 @ 02084f00
    bl .L_02083a6c @ 02084f04
    mov r5, r0 @ 02084f08
    mov r1, r8 @ 02084f0c
    mov r0, r4 @ 02084f10
    mov r2, r5 @ 02084f14
    bl .L_02083c80 @ 02084f18
    cmp r0, #0 @ 02084f1c
    bne .L_02084f4c @ 02084f20
    ldrb r3, [r8, r5] @ 02084f24
    cmp r3, #0x3a @ 02084f28
    add r1, r8, r5 @ 02084f2c
    sub r2, r3, #0x30 @ 02084f30
    beq .L_02084f6c @ 02084f34
    cmp r2, #9 @ 02084f38
    bhi .L_02084f4c @ 02084f3c
    ldrb r3, [r1, #1] @ 02084f40
    cmp r3, #0x3a @ 02084f44
    beq .L_02084f6c @ 02084f48
.L_02084f4c:
    add r7, r7, #1 @ 02084f4c
    cmp r7, #0x10 @ 02084f50
    add r6, r6, #4 @ 02084f54
    bne .L_02084ef0 @ 02084f58
.L_02084f5c:
    ldr r3, [pc, #0x1c] @ 02084f5c
    ldr r0, [r3] @ 02084f60
.L_02084f64:
    pop {r4, r5, r6, r7, r8, lr} @ 02084f64
    bx lr @ 02084f68
.L_02084f6c:
    cmn r7, #1 @ 02084f6c
    movne r0, r7 @ 02084f70
    bne .L_02084f64 @ 02084f74
    b .L_02084f5c @ 02084f78
    .byte 0xc0, 0xfb, 0x08, 0x02, 0x00, 0xfc, 0x08, 0x02 @ 02084f7c
@ FUN_02084f84 at 0x02084f84
    str lr, [sp, #-4]! @ 02084f84
    sub sp, sp, #4 @ 02084f88
    bl .L_02084ee0 @ 02084f8c
    cmn r0, #1 @ 02084f90
    mov r3, r0 @ 02084f94
    ldrne r2, [pc, #0x18] @ 02084f98
    ldrne r3, [pc, #0x18] @ 02084f9c
    strne r2, [r3, r0, lsl #2] @ 02084fa0
    movne r3, #0 @ 02084fa4
    mov r0, r3 @ 02084fa8
    add sp, sp, #4 @ 02084fac
    .word 0xe49de004 @ 02084fb0 pop {lr}
    bx lr @ 02084fb4
    .byte 0x8c, 0xef, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02 @ 02084fb8
.L_02084fc0:
@ FUN_02084fc0 at 0x02084fc0
    push {r4, r5, lr} @ 02084fc0
    ldr r3, [pc, #0x58] @ 02084fc4
    cmn r0, #1 @ 02084fc8
    mov r4, r0 @ 02084fcc
    mov r5, r0 @ 02084fd0
    sub sp, sp, #4 @ 02084fd4
    ldr r0, [r3] @ 02084fd8
    beq .L_02085014 @ 02084fdc
    ldr r3, [pc, #0x40] @ 02084fe0
    ldr r2, [r4] @ 02084fe4
    ldr ip, [r3, r2, lsl #2] @ 02084fe8
    ldr r3, [ip, #0xc] @ 02084fec
    cmp r3, #0 @ 02084ff0
    mvn r5, #0 @ 02084ff4
    ldr r1, [r4, #4] @ 02084ff8
    beq .L_0208500c @ 02084ffc
    mov lr, pc @ 02085000
    bx r3 @ 02085004
    mov r5, r0 @ 02085008
.L_0208500c:
    mov r0, r4 @ 0208500c
    bl .L_020826fc @ 02085010
.L_02085014:
    mov r0, r5 @ 02085014
    add sp, sp, #4 @ 02085018
    pop {r4, r5, lr} @ 0208501c
    bx lr @ 02085020
    .byte 0x98, 0xf3, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02 @ 02085024
.L_0208502c:
@ FUN_0208502c at 0x0208502c
    ldr r3, [pc, #0x64] @ 0208502c
    cmn r0, #1 @ 02085030
    push {r4, lr} @ 02085034
    mov r2, r1 @ 02085038
    mov lr, r0 @ 0208503c
    ldr r4, [r3] @ 02085040
    beq .L_0208508c @ 02085044
    cmp r0, #2 @ 02085048
    mov ip, r0 @ 0208504c
    ldr r3, [pc, #0x44] @ 02085050
    ldrgt ip, [r0] @ 02085054
    ldr ip, [r3, ip, lsl #2] @ 02085058
    ldr r3, [ip, #0x1c] @ 0208505c
    mvn r1, #0 @ 02085060
    ldrgt r1, [r0, #4] @ 02085064
    cmp r3, #0 @ 02085068
    moveq r3, #0x58 @ 0208506c
    mov r0, r4 @ 02085070
    mvn lr, #0 @ 02085074
    streq r3, [r4] @ 02085078
    beq .L_0208508c @ 0208507c
    mov lr, pc @ 02085080
    bx r3 @ 02085084
    mov lr, r0 @ 02085088
.L_0208508c:
    mov r0, lr @ 0208508c
    pop {r4, lr} @ 02085090
    bx lr @ 02085094
    .byte 0x98, 0xf3, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02 @ 02085098
.L_020850a0:
@ FUN_020850a0 at 0x020850a0
    mov r0, #0 @ 020850a0
    bx lr @ 020850a4
.L_020850a8:
@ FUN_020850a8 at 0x020850a8
    cmn r0, #1 @ 020850a8
    push {r4, lr} @ 020850ac
    mov r3, r2 @ 020850b0
    mov r4, r0 @ 020850b4
    bne .L_020850c8 @ 020850b8
.L_020850bc:
    mvn r0, #0 @ 020850bc
.L_020850c0:
    pop {r4, lr} @ 020850c0
    bx lr @ 020850c4
.L_020850c8:
    mov r2, r1 @ 020850c8
    ldr lr, [r4] @ 020850cc
    ldr r1, [pc, #0x20] @ 020850d0
    ldr ip, [r1, lr, lsl #2] @ 020850d4
    ldr ip, [ip, #0x18] @ 020850d8
    mov r0, #0 @ 020850dc
    cmp ip, r0 @ 020850e0
    ldr r1, [r4, #4] @ 020850e4
    beq .L_020850bc @ 020850e8
    mov lr, pc @ 020850ec
    bx ip @ 020850f0
    b .L_020850c0 @ 020850f4
    .byte 0xc0, 0xfb, 0x08, 0x02 @ 020850f8
.L_020850fc:
@ FUN_020850fc at 0x020850fc
    push {r4, r5, r6, r7, r8, sl, lr} @ 020850fc
    ldr r3, [pc, #0xbc] @ 02085100
    sub sp, sp, #0xc @ 02085104
    mov r7, r1 @ 02085108
    mov r8, r2 @ 0208510c
    ldr r6, [r3] @ 02085110
    mov r5, r0 @ 02085114
    bl .L_02084ee0 @ 02085118
    cmn r0, #1 @ 0208511c
    ldr sl, [pc, #0xa0] @ 02085120
    mov r4, r0 @ 02085124
    beq .L_020851a8 @ 02085128
    ldr r2, [sl, r0, lsl #2] @ 0208512c
    ldr r3, [r2, #8] @ 02085130
    cmp r3, #0 @ 02085134
    beq .L_020851a8 @ 02085138
    ldr r0, [r2, #4] @ 0208513c
    add r0, r0, #8 @ 02085140
    bl .L_02082724 @ 02085144
    mov r2, r5 @ 02085148
    subs r5, r0, #0 @ 0208514c
    mov r3, r7 @ 02085150
    add lr, r5, #8 @ 02085154
    moveq r3, #0x3f @ 02085158
    mov r1, lr @ 0208515c
    mov r0, r6 @ 02085160
    mvn ip, #0 @ 02085164
    streq r3, [r6] @ 02085168
    beq .L_020851b4 @ 0208516c
    ldr ip, [sl, r4, lsl #2] @ 02085170
    stm r5, {r4, lr} @ 02085174
    str r8, [sp] @ 02085178
    ldr ip, [ip, #8] @ 0208517c
    mov lr, pc @ 02085180
    bx ip @ 02085184
    mov r4, r0 @ 02085188
    cmn r4, #1 @ 0208518c
    mov r0, r5 @ 02085190
    mov ip, r5 @ 02085194
    bne .L_020851b4 @ 02085198
    bl .L_020826fc @ 0208519c
    mov ip, r4 @ 020851a0
    b .L_020851b4 @ 020851a4
.L_020851a8:
    mov r3, #0x58 @ 020851a8
    str r3, [r6] @ 020851ac
    mvn ip, #0 @ 020851b0
.L_020851b4:
    mov r0, ip @ 020851b4
    add sp, sp, #0xc @ 020851b8
    pop {r4, r5, r6, r7, r8, sl, lr} @ 020851bc
    bx lr @ 020851c0
    .byte 0x98, 0xf3, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02 @ 020851c4
.L_020851cc:
@ FUN_020851cc at 0x020851cc
    ldr r3, [pc, #0x60] @ 020851cc
    cmn r0, #1 @ 020851d0
    push {r4, lr} @ 020851d4
    mov ip, r1 @ 020851d8
    mov lr, r2 @ 020851dc
    ldr r3, [r3] @ 020851e0
    bne .L_020851f4 @ 020851e4
.L_020851e8:
    mvn r0, #0 @ 020851e8
.L_020851ec:
    pop {r4, lr} @ 020851ec
    bx lr @ 020851f0
.L_020851f4:
    cmp r0, #2 @ 020851f4
    mov r4, r0 @ 020851f8
    mov r2, ip @ 020851fc
    ldrgt r4, [r0] @ 02085200
    ldr ip, [pc, #0x2c] @ 02085204
    mvn r1, #0 @ 02085208
    ldrgt r1, [r0, #4] @ 0208520c
    mov r0, r3 @ 02085210
    mov r3, lr @ 02085214
    ldr lr, [ip, r4, lsl #2] @ 02085218
    ldr ip, [lr, #0x14] @ 0208521c
    cmp ip, #0 @ 02085220
    beq .L_020851e8 @ 02085224
    mov lr, pc @ 02085228
    bx ip @ 0208522c
    b .L_020851ec @ 02085230
    .byte 0x98, 0xf3, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02 @ 02085234
.L_0208523c:
@ FUN_0208523c at 0x0208523c
    ldr r2, [pc, #0x64] @ 0208523c
    ldr r3, [r2] @ 02085240
    cmp r3, #0 @ 02085244
    ldr r3, [pc, #0x5c] @ 02085248
    mov r1, r0 @ 0208524c
    ldr ip, [r3] @ 02085250
    beq .L_0208528c @ 02085254
.L_02085258:
    ldr r0, [r2] @ 02085258
    ldr r2, [pc, #0x4c] @ 0208525c
    ldr r3, [r2] @ 02085260
    cmp r3, #0 @ 02085264
    moveq r3, sp @ 02085268
    add r2, r0, r1 @ 0208526c
    cmp r3, r2 @ 02085270
    ldrhs r3, [pc, #0x2c] @ 02085274
    movlo r3, #0xc @ 02085278
    mvnlo r0, #0 @ 0208527c
    strlo r3, [ip] @ 02085280
    strhs r2, [r3] @ 02085284
    bx lr @ 02085288
.L_0208528c:
    ldr r3, [pc, #0x20] @ 0208528c
    ldr r3, [r3] @ 02085290
    cmp r3, #0 @ 02085294
    ldreq r3, [pc, #0x18] @ 02085298
    strne r3, [r2] @ 0208529c
    streq r3, [r2] @ 020852a0
    b .L_02085258 @ 020852a4
    .byte 0xdc, 0x4c, 0x0b, 0x02, 0x98, 0xf3, 0x08, 0x02, 0xe0, 0x4c, 0x0b, 0x02, 0xe4, 0x4c, 0x0b, 0x02 @ 020852a8
    .byte 0x50, 0xb3, 0x3e, 0x02 @ 020852b8
.L_020852bc:
@ FUN_020852bc at 0x020852bc
    ldr r3, [pc, #0x60] @ 020852bc
    cmn r0, #1 @ 020852c0
    push {r4, lr} @ 020852c4
    mov ip, r1 @ 020852c8
    mov lr, r2 @ 020852cc
    ldr r3, [r3] @ 020852d0
    bne .L_020852e4 @ 020852d4
.L_020852d8:
    mvn r0, #0 @ 020852d8
.L_020852dc:
    pop {r4, lr} @ 020852dc
    bx lr @ 020852e0
.L_020852e4:
    cmp r0, #2 @ 020852e4
    mov r4, r0 @ 020852e8
    mov r2, ip @ 020852ec
    ldrgt r4, [r0] @ 020852f0
    ldr ip, [pc, #0x2c] @ 020852f4
    mvn r1, #0 @ 020852f8
    ldrgt r1, [r0, #4] @ 020852fc
    mov r0, r3 @ 02085300
    mov r3, lr @ 02085304
    ldr lr, [ip, r4, lsl #2] @ 02085308
    ldr ip, [lr, #0x10] @ 0208530c
    cmp ip, #0 @ 02085310
    beq .L_020852d8 @ 02085314
    mov lr, pc @ 02085318
    bx ip @ 0208531c
    b .L_020852dc @ 02085320
    .byte 0x98, 0xf3, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02, 0x58, 0x30, 0x9f, 0xe5, 0x70, 0x40, 0x2d, 0xe9 @ 02085324
    .byte 0x00, 0x40, 0x51, 0xe2, 0x00, 0x60, 0x93, 0xe5, 0x16, 0x30, 0xa0, 0x03, 0x00, 0x50, 0xa0, 0xe1 @ 02085334
    .byte 0x01, 0x1b, 0xa0, 0xe3, 0x40, 0x00, 0x9f, 0xe5, 0x04, 0x50, 0xa0, 0x01, 0x00, 0x30, 0x86, 0x05 @ 02085344
    .byte 0x09, 0x00, 0x00, 0x0a, 0xdc, 0xfa, 0xff, 0xeb, 0x01, 0x00, 0x80, 0xe2, 0x00, 0x00, 0x54, 0xe1 @ 02085354
    .byte 0x22, 0x30, 0xa0, 0x33, 0x05, 0x00, 0xa0, 0xe1, 0x04, 0x20, 0xa0, 0xe1, 0x18, 0x10, 0x9f, 0xe5 @ 02085364
    .byte 0x00, 0x50, 0xa0, 0x33, 0x00, 0x30, 0x86, 0x35, 0x8e, 0xfa, 0xff, 0x2b, 0x05, 0x00, 0xa0, 0xe1 @ 02085374
    .byte 0x70, 0x40, 0xbd, 0xe8, 0x1e, 0xff, 0x2f, 0xe1, 0x98, 0xf3, 0x08, 0x02, 0x04, 0xfc, 0x08, 0x02 @ 02085384
.L_02085394:
@ FUN_02085394 at 0x02085394
    push {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02085394
    mov sl, r1 @ 02085398
    sub sp, sp, #4 @ 0208539c
    mov fp, r0 @ 020853a0
    mov r1, r3 @ 020853a4
    mov r0, sl @ 020853a8
    mov sb, r3 @ 020853ac
    mov r4, r2 @ 020853b0
    bl .L_02083ed0 @ 020853b4
    cmp sb, r0 @ 020853b8
    mov r7, r0 @ 020853bc
    ble .L_02085504 @ 020853c0
    add r6, sl, r0 @ 020853c4
    ldrb r3, [r6, #-1] @ 020853c8
    cmp r3, #0x2f @ 020853cc
    movne r3, #0x2f @ 020853d0
    strbne r3, [sl, r0] @ 020853d4
    ldrb r5, [r4] @ 020853d8
    addne r6, r6, #1 @ 020853dc
    cmp r5, #0x2f @ 020853e0
    beq .L_020854e0 @ 020853e4
.L_020853e8:
    mov r0, r4 @ 020853e8
    mov r1, #0x2f @ 020853ec
    bl .L_020836d4 @ 020853f0
    cmp r0, #0 @ 020853f4
    addne r0, r0, #1 @ 020853f8
    beq .L_020854f4 @ 020853fc
.L_02085400:
    subs r8, r0, r4 @ 02085400
    beq .L_0208551c @ 02085404
    ldr r3, [pc, #0x124] @ 02085408
    ldrb r2, [r3] @ 0208540c
    cmp r5, r2 @ 02085410
    beq .L_02085470 @ 02085414
    mov r0, r4 @ 02085418
    ldr r1, [pc, #0x114] @ 0208541c
    mov r2, #2 @ 02085420
    bl .L_02083c80 @ 02085424
    cmp r0, #0 @ 02085428
    beq .L_02085498 @ 0208542c
.L_02085430:
    add r7, r7, r8 @ 02085430
    cmp sb, r7 @ 02085434
    ble .L_02085504 @ 02085438
    mov r0, r6 @ 0208543c
    mov r1, r4 @ 02085440
    mov r2, r8 @ 02085444
    bl .L_02083dbc @ 02085448
    add r6, r6, r8 @ 0208544c
.L_02085450:
    mov r3, #0 @ 02085450
    strb r3, [r6] @ 02085454
    add r4, r4, r8 @ 02085458
    ldrb r5, [r4] @ 0208545c
.L_02085460:
    cmp r5, #0x2f @ 02085460
    bne .L_020853e8 @ 02085464
    ldrb r5, [r4, #1]! @ 02085468
    b .L_02085460 @ 0208546c
.L_02085470:
    ldrb r3, [r4, #1] @ 02085470
    cmp r3, #0 @ 02085474
    cmpne r3, #0x2f @ 02085478
    beq .L_02085450 @ 0208547c
    mov r0, r4 @ 02085480
    ldr r1, [pc, #0xac] @ 02085484
    mov r2, #2 @ 02085488
    bl .L_02083c80 @ 0208548c
    cmp r0, #0 @ 02085490
    bne .L_02085430 @ 02085494
.L_02085498:
    ldrb r3, [r4, #2] @ 02085498
    cmp r3, #0 @ 0208549c
    cmpne r3, #0x2f @ 020854a0
    bne .L_02085430 @ 020854a4
    ldrb r3, [r6, #-1] @ 020854a8
    cmp r3, #0x2f @ 020854ac
    strbeq r0, [r6, #-1] @ 020854b0
    mov r1, #0x2f @ 020854b4
    mov r0, sl @ 020854b8
    bl .L_02083f68 @ 020854bc
    cmp r0, #0 @ 020854c0
    addne r6, r0, #1 @ 020854c4
    rsbne r7, sl, r0 @ 020854c8
    bne .L_02085450 @ 020854cc
    mov r3, #2 @ 020854d0
    mvn r0, #0 @ 020854d4
    str r3, [fp] @ 020854d8
    b .L_02085510 @ 020854dc
.L_020854e0:
    mov r0, sl @ 020854e0
    mov r1, r5 @ 020854e4
    bl .L_020836d4 @ 020854e8
    add r6, r0, #1 @ 020854ec
    b .L_02085460 @ 020854f0
.L_020854f4:
    mov r1, r0 @ 020854f4
    mov r0, r4 @ 020854f8
    bl .L_020836d4 @ 020854fc
    b .L_02085400 @ 02085500
.L_02085504:
    mov r3, #0x5b @ 02085504
    str r3, [fp] @ 02085508
    mvn r0, #0 @ 0208550c
.L_02085510:
    add sp, sp, #4 @ 02085510
    pop {r4, r5, r6, r7, r8, sb, sl, fp, lr} @ 02085514
    bx lr @ 02085518
.L_0208551c:
    ldrb r3, [r6, #-1] @ 0208551c
    cmp r3, #0x2f @ 02085520
    movne r3, #0x2f @ 02085524
    mov r0, #0 @ 02085528
    strbne r3, [r6] @ 0208552c
    b .L_02085510 @ 02085530
    .byte 0xdc, 0xef, 0x08, 0x02, 0xe0, 0xef, 0x08, 0x02 @ 02085534
.L_0208553c:
@ FUN_0208553c at 0x0208553c
    push {r4, r5, r6, lr} @ 0208553c
    ldr r3, [pc, #0x138] @ 02085540
    mov r1, #0x400 @ 02085544
    sub sp, sp, #0x400 @ 02085548
    add r1, r1, #1 @ 0208554c
    ldr r5, [r3] @ 02085550
    mov r4, r0 @ 02085554
    bl .L_02083ed0 @ 02085558
    cmp r0, #0x400 @ 0208555c
    movhs r3, #0x5b @ 02085560
    mvnhs r0, #0 @ 02085564
    strhs r3, [r5] @ 02085568
    bhs .L_020855cc @ 0208556c
    mov r0, r4 @ 02085570
    mov r1, #0x3a @ 02085574
    bl .L_020836d4 @ 02085578
    cmp r0, #0 @ 0208557c
    beq .L_020855d8 @ 02085580
    mov r1, r4 @ 02085584
    mov r2, #0x400 @ 02085588
    mov r0, sp @ 0208558c
    bl .L_02083dbc @ 02085590
    mov r0, r4 @ 02085594
    mov r1, #0x3a @ 02085598
    bl .L_020836d4 @ 0208559c
    mov r6, sp @ 020855a0
    add r4, r0, #1 @ 020855a4
.L_020855a8:
    mov r0, sp @ 020855a8
    mov r1, #0x3a @ 020855ac
    bl .L_020836d4 @ 020855b0
    ldrb r3, [r0, #1] @ 020855b4
    cmp r3, #0x2f @ 020855b8
    movne r3, #2 @ 020855bc
    mvnne r0, #0 @ 020855c0
    strne r3, [r5] @ 020855c4
    beq .L_020855f0 @ 020855c8
.L_020855cc:
    add sp, sp, #0x400 @ 020855cc
    pop {r4, r5, r6, lr} @ 020855d0
    bx lr @ 020855d4
.L_020855d8:
    mov r0, sp @ 020855d8
    ldr r1, [pc, #0xa0] @ 020855dc
    mov r2, #0x400 @ 020855e0
    mov r6, sp @ 020855e4
    bl .L_02083dbc @ 020855e8
    b .L_020855a8 @ 020855ec
.L_020855f0:
    mov r2, r4 @ 020855f0
    mov r0, r5 @ 020855f4
    mov r1, sp @ 020855f8
    mov r3, #0x400 @ 020855fc
    bl .L_02085394 @ 02085600
    cmn r0, #1 @ 02085604
    beq .L_02085640 @ 02085608
    mov r0, sp @ 0208560c
    bl .L_02084ee0 @ 02085610
    subs r4, r0, #0 @ 02085614
    blt .L_02085630 @ 02085618
    ldr r3, [pc, #0x64] @ 0208561c
    ldr r2, [r3, r4, lsl #2] @ 02085620
    ldr r3, [r2, #0x2c] @ 02085624
    cmp r3, #0 @ 02085628
    bne .L_02085648 @ 0208562c
.L_02085630:
    mov r3, #0x13 @ 02085630
    mvn r0, #0 @ 02085634
    str r3, [r5] @ 02085638
    b .L_020855cc @ 0208563c
.L_02085640:
    mvn r0, #0 @ 02085640
    b .L_020855cc @ 02085644
.L_02085648:
    mov r0, r5 @ 02085648
    mov r1, sp @ 0208564c
    mov lr, pc @ 02085650
    bx r3 @ 02085654
    cmn r0, #1 @ 02085658
    beq .L_02085640 @ 0208565c
    mov r0, r4 @ 02085660
    bl .L_02084e34 @ 02085664
    mov r1, sp @ 02085668
    ldr r0, [pc, #0x10] @ 0208566c
    mov r2, #0x400 @ 02085670
    bl .L_02083dbc @ 02085674
    mov r0, #0 @ 02085678
    b .L_020855cc @ 0208567c
    .byte 0x98, 0xf3, 0x08, 0x02, 0x04, 0xfc, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02, 0x54, 0x30, 0x9f, 0xe5 @ 02085680
    .byte 0x00, 0x20, 0x50, 0xe2, 0x10, 0x40, 0x2d, 0xe9, 0x00, 0x40, 0xe0, 0xe3, 0x00, 0xe0, 0x93, 0xe5 @ 02085690
    .byte 0x0d, 0x00, 0x00, 0x0a, 0x00, 0x30, 0x92, 0xe5, 0x02, 0x10, 0xa0, 0xe1, 0x38, 0x20, 0x9f, 0xe5 @ 020856a0
    .byte 0x03, 0xc1, 0x92, 0xe7, 0x40, 0x30, 0x9c, 0xe5, 0x00, 0x00, 0x53, 0xe3, 0x58, 0x30, 0xa0, 0x03 @ 020856b0
    .byte 0x0e, 0x00, 0xa0, 0xe1, 0x00, 0x40, 0xe0, 0xe3, 0x00, 0x30, 0x8e, 0x05, 0x02, 0x00, 0x00, 0x0a @ 020856c0
    .byte 0x0f, 0xe0, 0xa0, 0xe1, 0x13, 0xff, 0x2f, 0xe1, 0x00, 0x40, 0xa0, 0xe1, 0x04, 0x00, 0xa0, 0xe1 @ 020856d0
    .byte 0x10, 0x40, 0xbd, 0xe8, 0x1e, 0xff, 0x2f, 0xe1, 0x98, 0xf3, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02 @ 020856e0
.L_020856f0:
@ FUN_020856f0 at 0x020856f0
    ldr r3, [pc, #0x60] @ 020856f0
    subs ip, r0, #0 @ 020856f4
    push {r4, r5, r6, lr} @ 020856f8
    ldr r6, [r3] @ 020856fc
    mvn r5, #0 @ 02085700
    mov lr, r1 @ 02085704
    mov r3, r2 @ 02085708
    beq .L_0208574c @ 0208570c
    mov r1, ip @ 02085710
    mov r2, lr @ 02085714
    ldr ip, [ip] @ 02085718
    ldr lr, [pc, #0x38] @ 0208571c
    ldr r4, [lr, ip, lsl #2] @ 02085720
    ldr ip, [r4, #0x44] @ 02085724
    cmp ip, #0 @ 02085728
    moveq r3, #0x58 @ 0208572c
    mov r0, r6 @ 02085730
    mvn r5, #0 @ 02085734
    streq r3, [r6] @ 02085738
    beq .L_0208574c @ 0208573c
    mov lr, pc @ 02085740
    bx ip @ 02085744
    mov r5, r0 @ 02085748
.L_0208574c:
    mov r0, r5 @ 0208574c
    pop {r4, r5, r6, lr} @ 02085750
    bx lr @ 02085754
    .byte 0x98, 0xf3, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02 @ 02085758
.L_02085760:
@ FUN_02085760 at 0x02085760
    push {r4, r5, lr} @ 02085760
    ldr r3, [pc, #0x60] @ 02085764
    subs r4, r0, #0 @ 02085768
    sub sp, sp, #4 @ 0208576c
    mvn r5, #0 @ 02085770
    ldr lr, [r3] @ 02085774
    beq .L_020857bc @ 02085778
    ldr r3, [r4] @ 0208577c
    ldr r2, [pc, #0x48] @ 02085780
    ldr ip, [r2, r3, lsl #2] @ 02085784
    ldr r3, [ip, #0x48] @ 02085788
    cmp r3, #0 @ 0208578c
    moveq r3, #0x58 @ 02085790
    mov r0, lr @ 02085794
    mov r1, r4 @ 02085798
    mvn r5, #0 @ 0208579c
    streq r3, [lr] @ 020857a0
    beq .L_020857b4 @ 020857a4
    mov lr, pc @ 020857a8
    bx r3 @ 020857ac
    mov r5, r0 @ 020857b0
.L_020857b4:
    mov r0, r4 @ 020857b4
    bl .L_020826fc @ 020857b8
.L_020857bc:
    mov r0, r5 @ 020857bc
    add sp, sp, #4 @ 020857c0
    pop {r4, r5, lr} @ 020857c4
    bx lr @ 020857c8
    .byte 0x98, 0xf3, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02 @ 020857cc
.L_020857d4:
@ FUN_020857d4 at 0x020857d4
    push {r4, r5, r6, r7, lr} @ 020857d4
    ldr r3, [pc, #0xb0] @ 020857d8
    sub sp, sp, #4 @ 020857dc
    ldr r6, [r3] @ 020857e0
    mov r4, r0 @ 020857e4
    bl .L_02084ee0 @ 020857e8
    cmn r0, #1 @ 020857ec
    ldr r7, [pc, #0x9c] @ 020857f0
    mov r5, r0 @ 020857f4
    beq .L_02085874 @ 020857f8
    ldr r2, [r7, r0, lsl #2] @ 020857fc
    ldr r3, [r2, #0x3c] @ 02085800
    cmp r3, #0 @ 02085804
    beq .L_02085874 @ 02085808
    ldr r0, [r2, #0x38] @ 0208580c
    add r0, r0, #8 @ 02085810
    bl .L_02082724 @ 02085814
    subs ip, r0, #0 @ 02085818
    add r3, ip, #8 @ 0208581c
    moveq r3, #0x3f @ 02085820
    mov r2, r4 @ 02085824
    mov r0, r6 @ 02085828
    mov r4, ip @ 0208582c
    mov r1, ip @ 02085830
    moveq r4, ip @ 02085834
    streq r3, [r6] @ 02085838
    beq .L_02085864 @ 0208583c
    str r3, [r4, #4] @ 02085840
    str r5, [r4] @ 02085844
    ldr r3, [r7, r5, lsl #2] @ 02085848
    ldr ip, [r3, #0x3c] @ 0208584c
    mov lr, pc @ 02085850
    bx ip @ 02085854
    subs r5, r0, #0 @ 02085858
    mov r0, r4 @ 0208585c
    beq .L_02085884 @ 02085860
.L_02085864:
    mov r0, r4 @ 02085864
    add sp, sp, #4 @ 02085868
    pop {r4, r5, r6, r7, lr} @ 0208586c
    bx lr @ 02085870
.L_02085874:
    mov r3, #0x58 @ 02085874
    mov r4, #0 @ 02085878
    str r3, [r6] @ 0208587c
    b .L_02085864 @ 02085880
.L_02085884:
    bl .L_020826fc @ 02085884
    mov r4, r5 @ 02085888
    b .L_02085864 @ 0208588c
    .byte 0x98, 0xf3, 0x08, 0x02, 0xc0, 0xfb, 0x08, 0x02 @ 02085890
.global arm9_call_via_r3
.type arm9_call_via_r3, %function
arm9_call_via_r3:
    ldr ip, [pc] @ 02085898
    bx ip @ 0208589c
    .byte 0xe9, 0x05, 0x08, 0x02 @ 020858a0
.L_020858a4:
@ thunk_FUN_0208031c at 0x020858a4
    ldr ip, [pc] @ 020858a4
    bx ip @ 020858a8
    .byte 0x1d, 0x03, 0x08, 0x02 @ 020858ac
.L_020858b0:
@ thunk_FUN_0208024c at 0x020858b0
    ldr ip, [pc] @ 020858b0
    bx ip @ 020858b4
    .byte 0x4d, 0x02, 0x08, 0x02 @ 020858b8
.L_020858bc:
@ thunk_FUN_020801fc at 0x020858bc
    ldr ip, [pc] @ 020858bc
    bx ip @ 020858c0
    .byte 0xfd, 0x01, 0x08, 0x02 @ 020858c4
.L_020858c8:
@ thunk_FUN_02080098 at 0x020858c8
    ldr ip, [pc] @ 020858c8
    bx ip @ 020858cc
    .byte 0x99, 0x00, 0x08, 0x02 @ 020858d0
.L_020858d4:
@ thunk_FUN_02080100 at 0x020858d4
    ldr ip, [pc] @ 020858d4
    bx ip @ 020858d8
    .byte 0x01, 0x01, 0x08, 0x02 @ 020858dc
.L_020858e0:
@ thunk_FUN_0208014c at 0x020858e0
    ldr ip, [pc] @ 020858e0
    bx ip @ 020858e4
    .byte 0x4d, 0x01, 0x08, 0x02 @ 020858e8
.L_020858ec:
@ thunk_FUN_0207fb90 at 0x020858ec
    ldr ip, [pc] @ 020858ec
    bx ip @ 020858f0
    .byte 0x91, 0xfb, 0x07, 0x02 @ 020858f4
.L_020858f8:
@ thunk_FUN_0207fb70 at 0x020858f8
    ldr ip, [pc] @ 020858f8
    bx ip @ 020858fc
    .byte 0x71, 0xfb, 0x07, 0x02 @ 02085900
.L_02085904:
@ thunk_FUN_0207fc70 at 0x02085904
    ldr ip, [pc] @ 02085904
    bx ip @ 02085908
    .byte 0x71, 0xfc, 0x07, 0x02 @ 0208590c
.L_02085910:
@ thunk_FUN_02072cdc at 0x02085910
    ldr ip, [pc] @ 02085910
    bx ip @ 02085914
    .byte 0xdd, 0x2c, 0x07, 0x02 @ 02085918
.L_0208591c:
@ thunk_FUN_0208033e at 0x0208591c
    ldr ip, [pc] @ 0208591c
    bx ip @ 02085920
    .byte 0x3f, 0x03, 0x08, 0x02 @ 02085924
.L_02085928:
@ thunk_FUN_0207fc98 at 0x02085928
    ldr ip, [pc] @ 02085928
    bx ip @ 0208592c
    .byte 0x99, 0xfc, 0x07, 0x02 @ 02085930
.L_02085934:
@ thunk_FUN_0207fd44 at 0x02085934
    ldr ip, [pc] @ 02085934
    bx ip @ 02085938
    .byte 0x45, 0xfd, 0x07, 0x02 @ 0208593c
.L_02085940:
@ thunk_FUN_02084e4c at 0x02085940
.thumb
    bx pc @ 02085940
    .byte 0xc0, 0x46 @ 02085942
@ thunk_FUN_02084e4c at 0x02085944
.arm
    b .L_02084e4c @ 02085944
.L_02085948:
@ thunk_FUN_0208553c at 0x02085948
.thumb
    bx pc @ 02085948
    .byte 0xc0, 0x46 @ 0208594a
@ thunk_FUN_0208553c at 0x0208594c
.arm
    b .L_0208553c @ 0208594c
.L_02085950:
@ thunk_FUN_02083a6c at 0x02085950
.thumb
    bx pc @ 02085950
    .byte 0xc0, 0x46 @ 02085952
@ thunk_FUN_02083a6c at 0x02085954
.arm
    b .L_02083a6c @ 02085954
.L_02085958:
@ thunk_FUN_020836d4 at 0x02085958
.thumb
    bx pc @ 02085958
    .byte 0xc0, 0x46 @ 0208595a
@ thunk_FUN_020836d4 at 0x0208595c
.arm
    b .L_020836d4 @ 0208595c
.L_02085960:
@ thunk_FUN_02083c80 at 0x02085960
.thumb
    bx pc @ 02085960
    .byte 0xc0, 0x46 @ 02085962
@ thunk_FUN_02083c80 at 0x02085964
.arm
    b .L_02083c80 @ 02085964
.L_02085968:
@ thunk_FUN_020826fc at 0x02085968
.thumb
    bx pc @ 02085968
    .byte 0xc0, 0x46 @ 0208596a
@ thunk_FUN_020826fc at 0x0208596c
.arm
    b .L_020826fc @ 0208596c
.L_02085970:
@ thunk_FUN_02083058 at 0x02085970
.thumb
    bx pc @ 02085970
    .byte 0xc0, 0x46 @ 02085972
@ thunk_FUN_02083058 at 0x02085974
.arm
    b .L_02083058 @ 02085974
.L_02085978:
@ thunk_FUN_02082724 at 0x02085978
.thumb
    bx pc @ 02085978
    .byte 0xc0, 0x46 @ 0208597a
@ thunk_FUN_02082724 at 0x0208597c
.arm
    b .L_02082724 @ 0208597c
.L_02085980:
@ thunk_FUN_02080380 at 0x02085980
.thumb
    bx pc @ 02085980
    .byte 0xc0, 0x46 @ 02085982
@ thunk_FUN_02080380 at 0x02085984
.arm
    b .L_02080380 @ 02085984
.L_02085988:
@ thunk_FUN_02082ec0 at 0x02085988
.thumb
    bx pc @ 02085988
    .byte 0xc0, 0x46 @ 0208598a
@ thunk_FUN_02082ec0 at 0x0208598c
.arm
    b .L_02082ec0 @ 0208598c
.L_02085990:
@ thunk_FUN_0207cdc0 at 0x02085990
.thumb
    bx pc @ 02085990
    .byte 0xc0, 0x46 @ 02085992
@ thunk_FUN_0207cdc0 at 0x02085994
.arm
    b .L_0207cdc0 @ 02085994
.L_02085998:
@ thunk_FUN_02083dbc at 0x02085998
.thumb
    bx pc @ 02085998
    .byte 0xc0, 0x46 @ 0208599a
@ thunk_FUN_02083dbc at 0x0208599c
.arm
    b .L_02083dbc @ 0208599c
.L_020859a0:
@ thunk_FUN_02083f68 at 0x020859a0
.thumb
    bx pc @ 020859a0
    .byte 0xc0, 0x46 @ 020859a2
@ thunk_FUN_02083f68 at 0x020859a4
.arm
    b .L_02083f68 @ 020859a4
.L_020859a8:
@ thunk_FUN_0208047c at 0x020859a8
.thumb
    bx pc @ 020859a8
    .byte 0xc0, 0x46 @ 020859aa
@ thunk_FUN_0208047c at 0x020859ac
.arm
    b .L_0208047c @ 020859ac
.L_020859b0:
@ thunk_FUN_02083ed0 at 0x020859b0
.thumb
    bx pc @ 020859b0
    .byte 0xc0, 0x46 @ 020859b2
@ thunk_FUN_02083ed0 at 0x020859b4
.arm
    b .L_02083ed0 @ 020859b4
.L_020859b8:
@ thunk_FUN_02083638 at 0x020859b8
.thumb
    bx pc @ 020859b8
    .byte 0xc0, 0x46 @ 020859ba
@ thunk_FUN_02083638 at 0x020859bc
.arm
    b .L_02083638 @ 020859bc
.L_020859c0:
@ thunk_FUN_02083afc at 0x020859c0
.thumb
    bx pc @ 020859c0
    .byte 0xc0, 0x46 @ 020859c2
@ thunk_FUN_02083afc at 0x020859c4
.arm
    b .L_02083afc @ 020859c4
.L_020859c8:
@ thunk_FUN_02083f18 at 0x020859c8
.thumb
    bx pc @ 020859c8
    .byte 0xc0, 0x46 @ 020859ca
@ thunk_FUN_02083f18 at 0x020859cc
.arm
    b .L_02083f18 @ 020859cc
.L_020859d0:
@ thunk_FUN_02082f5c at 0x020859d0
.thumb
    bx pc @ 020859d0
    .byte 0xc0, 0x46 @ 020859d2
@ thunk_FUN_02082f5c at 0x020859d4
.arm
    b .L_02082f5c @ 020859d4
.L_020859d8:
@ thunk_FUN_02083fb8 at 0x020859d8
.thumb
    bx pc @ 020859d8
    .byte 0xc0, 0x46 @ 020859da
@ thunk_FUN_02083fb8 at 0x020859dc
.arm
    b .L_02083fb8 @ 020859dc
.L_020859e0:
@ thunk_FUN_02080494 at 0x020859e0
.thumb
    bx pc @ 020859e0
    .byte 0xc0, 0x46 @ 020859e2
@ thunk_FUN_02080494 at 0x020859e4
.arm
    b .L_02080494 @ 020859e4
.L_020859e8:
@ thunk_FUN_020805c0 at 0x020859e8
.thumb
    bx pc @ 020859e8
    .byte 0xc0, 0x46 @ 020859ea
@ thunk_FUN_020805c0 at 0x020859ec
.arm
    b .L_020805c0 @ 020859ec
    .byte 0x0d, 0xc0, 0xa0, 0xe1, 0xf8, 0xdf, 0x2d, 0xe9, 0x04, 0xb0, 0x4c, 0xe2, 0x28, 0xd0, 0x4b, 0xe2 @ 020859f0
    .byte 0xf0, 0x6f, 0x9d, 0xe8, 0x1e, 0xff, 0x2f, 0xe1, 0xc0, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff @ 02085a00
    .byte 0x58, 0xf2, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x68, 0xf2, 0x08, 0x02 @ 02085a10
    .byte 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x7c, 0xf2, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00 @ 02085a20
    .byte 0x20, 0x00, 0x00, 0x00, 0x90, 0xf2, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00 @ 02085a30
    .byte 0x9c, 0xf2, 0x08, 0x02, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0xac, 0xf2, 0x08, 0x02 @ 02085a40
    .byte 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xb8, 0xf2, 0x08, 0x02, 0x03, 0x00, 0x00, 0x00 @ 02085a50
    .byte 0x10, 0x00, 0x00, 0x00, 0xcc, 0xf2, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00 @ 02085a60
    .byte 0xdc, 0xf2, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0xec, 0xf2, 0x08, 0x02 @ 02085a70
