/* Cartridge storage. Release range 0x020015c0–0x02001b08. */

/* 0x020015c0 */
.global cartridge_storage
cartridge_storage:
    ldr        r3, .L_02001630
    str        lr, [sp, #-4]!
    ldr        ip, [r3]
    ldr        r2, [ip, #0x25c]
    cmp        r2, #0
    ldreq       pc, [sp], #4
    ldrb       r2, [ip, #0x264]
    cmp        r2, r0
    ldreq       pc, [sp], #4
    ldr        r3, [ip, #0x248]
    ldr        r1, [ip, #0x24c]
    lsrs       lr, r3, #1
    ldr        r3, .L_02001634
    eor        r2, r2, #1
    strb       r2, [ip, #0x264]
    add        r1, r1, r3
    ldreq       pc, [sp], #4
    ldr        r0, .L_02001638
    mov        ip, lr
    mov        r2, #0
.L_02001610:
    ldrh       r3, [r1]
    ldrh       lr, [r0]
    add        r2, r2, #1
    cmp        ip, r2
    strh       lr, [r1], #2
    strh       r3, [r0], #2
    bhi        .L_02001610
    ldr         pc, [sp], #4
.L_02001630:
    .word loaded_cartridge_metadata
.L_02001634:
    .word cartridge_rom_bytes
.L_02001638:
    .word cartridge_sram_buffer

/* 0x0200163c */
.global flush_cartridge_save_ram
flush_cartridge_save_ram:
    push       {r4, r5, r6, r7, lr}
    ldr        r7, .L_020016c4
    ldr        r1, .L_020016c8
    ldr        r0, [r7]
    sub        sp, sp, #4
    ldrb       r3, [r0, #0x264]
    ldr        r4, [r0, #0x248]
    cmp        r3, #0
    ldrne      r2, [r0, #0x24c]
    ldrne      r3, .L_020016cc
    add        r0, r0, #0x100
    ldr        r6, .L_020016d0
    addne      r6, r2, r3
    bl         fopen
    subs       r5, r0, #0
    mov        r1, r4
    mov        r0, r6
    beq        .L_020016b0
    bl         swap_adjacent_bytes_in_backing_buffer
    mov        r2, r4
    mov        r3, r5
    mov        r1, #1
    mov        r0, r6
    bl         fwrite
    mov        r0, r6
    mov        r1, r4
    bl         swap_adjacent_bytes_in_backing_buffer
    mov        r0, r5
    bl         fclose
.L_020016b0:
    ldr        r2, [r7]
    mov        r3, #0
    strb       r3, [r2, #0x263]
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, pc}
.L_020016c4:
    .word loaded_cartridge_metadata
.L_020016c8:
    .word address_0208f070
.L_020016cc:
    .word cartridge_rom_bytes
.L_020016d0:
    .word cartridge_sram_buffer

/* 0x020016d4 */
.global parse_cartridge_header
parse_cartridge_header:
    push       {r4, r5, r6, lr}
    subs       r4, r0, #0
    moveq      r0, r4
    popeq      {r4, r5, r6, pc}
    ldr        r5, .L_0200193c
    mov        r1, #0
    ldr        r0, [r5]
    mov        r2, #0x20
    add        r0, r0, #0x200
    bl         address_02083058
    ldr        r0, [r5]
    mov        r1, #0
    mov        r2, #0x20
    add        r0, r0, #0x220
    bl         address_02083058
    mov        r3, #0
    ldr        r2, [r5]
    mov        ip, r3
    mov        r1, #0x120
    mov        r0, r3
    strb       r3, [r2, #0x262]
    str        r3, [r2, #0x240]
    str        r3, [r2, #0x244]
    str        r3, [r2, #0x24c]
    str        r3, [r2, #0x250]
    str        r3, [r2, #0x248]
    strb       r3, [r2, #0x261]
    str        r3, [r2, #0x25c]
    b          .L_02001760
.L_02001748:
    ldr        r3, [r5]
    cmp        r1, #0x150
    add        r3, r0, r3
    strb       r2, [r3, #0x200]
    add        r0, r0, #1
    beq        .L_02001784
.L_02001760:
    ldrb       r2, [r1, r4]
    cmp        ip, #0x20
    add        r1, r1, #1
    mov        ip, r2
    bne        .L_02001748
    cmp        r2, #0x20
    bne        .L_02001748
    cmp        r1, #0x150
    bne        .L_02001760
.L_02001784:
    mov        ip, #0
    mov        r0, ip
    b          .L_020017a8
.L_02001790:
    ldr        r3, [r5]
    cmp        r1, #0x180
    add        r3, r0, r3
    strb       r2, [r3, #0x220]
    add        r0, r0, #1
    beq        .L_020017cc
.L_020017a8:
    ldrb       r2, [r1, r4]
    cmp        ip, #0x20
    add        r1, r1, #1
    mov        ip, r2
    bne        .L_02001790
    cmp        r2, #0x20
    bne        .L_02001790
    cmp        r1, #0x180
    bne        .L_020017a8
.L_020017cc:
    ldrb       r3, [r4, #0x18e]
    ldrb       r2, [r4, #0x18f]
    ldr        r6, [r5]
    orr        r2, r2, r3, lsl #8
    str        r2, [r6, #0x240]
    ldrb       r3, [r4, #0x1b0]
    cmp        r3, #0x52
    beq        .L_02001824
.L_020017ec:
    ldr        r2, [r5]
    mov        r3, #0
    mov        r0, r3
    mov        r1, r3
    strb       r3, [r2, #0x262]
    strb       r3, [r2, #0x261]
.L_02001804:
    ldr        r3, [r5]
    mov        r2, #0
    str        r0, [r3, #0x250]
    mov        r0, #1
    strb       r2, [r3, #0x265]
    str        r1, [r3, #0x24c]
    str        r2, [r3, #0x248]
    pop        {r4, r5, r6, pc}
.L_02001824:
    ldrb       r3, [r4, #0x1b1]
    cmp        r3, #0x41
    bne        .L_020017ec
    ldrb       r3, [r4, #0x1b5]
    ldrb       r2, [r4, #0x1b9]
    ldrb       r0, [r4, #0x1b4]
    ldrb       ip, [r4, #0x1b8]
    ldrb       r1, [r4, #0x1b7]
    lsl        r3, r3, #0x10
    lsl        r2, r2, #0x10
    ldrb       lr, [r4, #0x1bb]
    orr        r3, r3, r0, lsl #24
    orr        r2, r2, ip, lsl #24
    ldrb       r0, [r4, #0x1b6]
    ldrb       ip, [r4, #0x1ba]
    orr        r3, r3, r1
    orr        r2, r2, lr
    orr        r1, r3, r0, lsl #8
    orr        r0, r2, ip, lsl #8
    cmp        r1, r0
    bhs        .L_020018e4
    tst        r1, #1
    subne      r1, r1, #1
    tst        r0, #1
    addeq      r0, r0, #1
    rsb        r3, r1, r0
    add        r3, r3, #1
    mov        ip, #0
    mov        r2, #1
    cmp        r3, #0
    str        r0, [r6, #0x250]
    str        r1, [r6, #0x24c]
    strb       r2, [r6, #0x261]
    strb       ip, [r6, #0x262]
    str        r3, [r6, #0x248]
    strb       ip, [r6, #0x265]
    moveq      r0, r2
    popeq      {r4, r5, r6, pc}
    cmp        r3, #0x10000
    movhs      r0, r2
    strbhs     ip, [r6, #0x262]
    strbhs     ip, [r6, #0x261]
    pophs      {r4, r5, r6, pc}
.L_020018d0:
    mov        r3, #1
    ldr        r2, [r5]
    mov        r0, r3
    strb       r3, [r2, #0x265]
    pop        {r4, r5, r6, pc}
.L_020018e4:
    ldr        r3, .L_02001940
    movne      r2, #0
    moveq      r2, #1
    cmp        r1, r3
    movne      r3, #0
    andeq      r3, r2, #1
    cmp        r3, #0
    strbeq     r3, [r6, #0x262]
    strbeq     r3, [r6, #0x261]
    beq        .L_02001804
    mov        r3, #0
    strb       r3, [r6, #0x265]
    add        r3, r3, #0x80
    str        r3, [r6, #0x248]
    ldr        r3, .L_02001944
    mov        r1, #1
    mov        r2, #0x200000
    strb       r1, [r6, #0x262]
    str        r2, [r6, #0x24c]
    str        r3, [r6, #0x250]
    strb       r1, [r6, #0x261]
    b          .L_020018d0
.L_0200193c:
    .word loaded_cartridge_metadata
.L_02001940:
    .word 0x00200001
.L_02001944:
    .word 0x002000ff

/* 0x02001948 */
.global configure_cartridge_save_ram
configure_cartridge_save_ram:
    push       {r4, r5, r6, r7, r8, sb, sl, lr}
    mov        r7, r1
    mov        r5, r2
    mov        r8, r0
    bl         address_02083a6c
    ldr        r6, .L_02001af0
    ldr        r3, .L_02001af4
    ldr        lr, [r6]
    mov        r1, #0
    ldr        ip, [lr, #0x250]
    mov        sl, r0
    cmp        ip, r3
    mov        r2, #0x10000
    ldr        r0, .L_02001af8
    mov        r4, r1
    strhi      r1, [lr, #0x24c]
    strbhi     r1, [lr, #0x261]
    strhi      r1, [lr, #0x250]
    bls        .L_0200199c
.L_02001994:
    mov        r0, #0
    pop        {r4, r5, r6, r7, r8, sb, sl, pc}
.L_0200199c:
    bl         address_02083058
    ldr        lr, [r6]
    ldr        sb, .L_02001afc
    ldr        r3, [lr, #0x24c]
    mov        ip, #0
    mov        r4, #1
    cmp        r3, r5
    add        r1, r3, sb
    ldr        r0, .L_02001af8
    mov        r2, r7
    str        ip, [lr, #0x25c]
    strb       ip, [lr, #0x263]
    strb       r4, [lr, #0x264]
    ldrhs      sb, .L_02001afc
    blo        .L_02001a98
.L_020019d8:
    mov        r1, r8
    add        r0, lr, #0x100
    mov        r2, #0x100
    bl         address_02083dbc
    ldr        r3, [r6]
    mov        r2, #0x2e
    add        r4, r3, #0x100
    add        r1, r4, sl
    mov        r3, #0x6d
    strb       r3, [r1, #-1]
    strb       r2, [r1, #-4]
    add        r3, r3, #6
    add        r2, r2, #0x44
    strb       r2, [r1, #-2]
    strb       r3, [r1, #-3]
    mov        r0, r4
    ldr        r1, .L_02001b00
    bl         fopen
    subs       r5, r0, #0
    mov        r1, #0
    mov        r2, #2
    beq        .L_02001aa8
    bl         fseek
    mov        r0, r5
    bl         ftell
    mov        r1, #0
    mov        r2, r1
    mov        r4, r0
    mov        r0, r5
    bl         fseek
    ldr        r3, [r6]
    cmp        r7, r4
    movlo      r4, r7
    ldr        r0, [r3, #0x24c]
    mov        r2, r4
    mov        r3, r5
    add        r0, r0, sb
    mov        r1, #1
    bl         fread
    ldr        r3, [r6]
    mov        r1, r4
    ldr        r0, [r3, #0x24c]
    add        r0, r0, sb
    bl         swap_adjacent_bytes_in_backing_buffer
    mov        r0, r5
    bl         fclose
    mov        r0, #0
    pop        {r4, r5, r6, r7, r8, sb, sl, pc}
.L_02001a98:
    str        r4, [lr, #0x25c]
    bl         address_02082ec0
    ldr        lr, [r6]
    b          .L_020019d8
.L_02001aa8:
    mov        r0, r4
    ldr        r1, .L_02001b04
    bl         fopen
    mov        r2, r7
    mov        r3, r0
    mov        r4, r0
    mov        r1, #1
    ldr        r0, .L_02001af8
    bl         fwrite
    mov        r0, r4
    bl         fclose
    ldr        r3, [r6]
    mov        r1, r5
    ldr        r0, [r3, #0x24c]
    mov        r2, r7
    add        r0, r0, sb
    bl         address_02083058
    b          .L_02001994
.L_02001af0:
    .word loaded_cartridge_metadata
.L_02001af4:
    .word 0x003067ff
.L_02001af8:
    .word cartridge_sram_buffer
.L_02001afc:
    .word cartridge_rom_bytes
.L_02001b00:
    .word address_0208f074
.L_02001b04:
    .word address_0208f070
