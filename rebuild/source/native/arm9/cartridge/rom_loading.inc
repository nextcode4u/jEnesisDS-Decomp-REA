/* Rom loading. Release range 0x02001b08–0x02002088. */


/* 0x02001b08 */
.global rom_header_lacks_sega_signature
rom_header_lacks_sega_signature:
    push       {r4, r5, r6, lr}
    mov        r3, #0
    sub        sp, sp, #8
    mov        r2, r3
    add        r6, sp, #8
    mov        r1, #0x100
    strb       r3, [r6, #-1]!
    mov        r5, r0
    bl         fseek
    mov        r1, #1
    mov        r3, r5
    mov        r0, r6
    mov        r2, r1
    bl         fread
    ldrb       r3, [sp, #7]
    cmp        r3, #0x20
    bne        .L_02001c44
    ldrh       r3, [r5, #0xc]
    ands       r3, r3, #0x20
    bne        .L_02001c44
    mov        r4, r3
    b          .L_02001b6c
.L_02001b60:
    ldrh       r3, [r5, #0xc]
    tst        r3, #0x20
    bne        .L_02001b90
.L_02001b6c:
    mov        r1, #1
    mov        r3, r5
    mov        r0, r6
    mov        r2, r1
    bl         fread
    ldrb       r3, [sp, #7]
    add        r4, r4, #1
    cmp        r3, #0x20
    beq        .L_02001b60
.L_02001b90:
    add        r1, r4, #0x100
.L_02001b94:
    mov        r2, #0
    mov        r0, r5
    bl         fseek
    mov        r1, #1
    mov        r2, r1
    mov        r3, r5
    mov        r0, r6
    bl         fread
    ldrb       ip, [sp, #7]
    mov        r1, #1
    mov        r2, r1
    mov        r3, r5
    mov        r0, r6
    cmp        ip, #0x53
    movne      r4, #0
    moveq      r4, #1
    bl         fread
    ldrb       r3, [sp, #7]
    mov        r1, #1
    cmp        r3, #0x45
    mov        r2, r1
    mov        r3, r5
    mov        r0, r6
    addeq      r4, r4, #1
    bl         fread
    ldrb       r3, [sp, #7]
    mov        r1, #1
    cmp        r3, #0x47
    mov        r2, r1
    mov        r3, r5
    mov        r0, r6
    addeq      r4, r4, #1
    bl         fread
    ldrb       r3, [sp, #7]
    mov        r1, #0
    cmp        r3, #0x41
    mov        r0, r5
    mov        r2, r1
    addeq      r4, r4, #1
    bl         fseek
    subs       r0, r4, #4
    movne      r0, #1
    add        sp, sp, #8
    pop        {r4, r5, r6, pc}
.L_02001c44:
    mov        r1, #0x100
    b          .L_02001b94

/* 0x02001c4c */
.global deinterleave_smd_rom_blocks
deinterleave_smd_rom_blocks:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    cmp        r1, #0x200
    movhs      r3, #0
    movlo      r3, #1
    cmp        r0, #0
    movne      r5, r3
    orreq      r5, r3, #1
    cmp        r5, #0
    sub        sp, sp, #0xc
    mov        r4, r1
    mov        r7, r0
    beq        .L_02001c84
    add        sp, sp, #0xc
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_02001c84:
    mov        r0, #0x4000
    bl         address_02082724
    ldr        sl, .L_02001d38
    lsr        r3, r4, #0xe
    cmp        r3, #0
    str        r3, [sp, #4]
    str        r0, [sl]
    beq        .L_02001d28
    ldr        r8, .L_02001d3c
    mov        fp, r5
    mov        sb, r7
    mov        r6, #1
.L_02001cb4:
    mov        r1, sb
    ldr        r0, [sl]
    mov        r2, #0x4000
    bl         address_02082ec0
    mov        r1, #0
    b          .L_02001cec
.L_02001ccc:
    cmp        r4, r6
    ldrhi      r3, [sl]
    ldrbhi     r2, [r1, r3]
    strbhi     r2, [r7, r6]
    addhi      r6, r6, #2
    add        r1, r1, #1
    cmp        r1, #0x4000
    beq        .L_02001d14
.L_02001cec:
    cmp        r1, r8
    bls        .L_02001ccc
    cmp        r4, r5
    ldrhi      r3, [sl]
    ldrbhi     r2, [r3, r1]
    add        r1, r1, #1
    strbhi     r2, [r7, r5]
    addhi      r5, r5, #2
    cmp        r1, #0x4000
    bne        .L_02001cec
.L_02001d14:
    ldr        r3, [sp, #4]
    add        fp, fp, #1
    cmp        r3, fp
    add        sb, sb, #0x4000
    bne        .L_02001cb4
.L_02001d28:
    ldr        r0, [sl]
    add        sp, sp, #0xc
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    b          address_020826fc
.L_02001d38:
    .word 0x023bb4ec
.L_02001d3c:
    .word 0x00001fff

/* 0x02001d40 */
.global load_genesis_rom_from_stream
load_genesis_rom_from_stream:
    push       {r4, r5, r6, r7, r8, lr}
    ldr        r8, .L_02002058
    ldr        r7, .L_0200205c
    mov        r4, r0
    mov        r5, r1
    ldr        r0, .L_02002060
    mov        r1, #0
    mov        r2, r8
    bl         address_02083058
    ldr        r0, [r7]
    cmp        r0, #0
    beq        .L_02001fb4
.L_02001d70:
    mov        r1, r5
    mov        r2, #0x100
    bl         address_02083dbc
    ldr        r3, [r7]
    mov        r5, #0
    cmp        r4, #0
    str        r5, [r3, #0x258]
    beq        .L_02001dcc
    mov        r1, r5
    mov        r2, #2
    mov        r0, r4
    bl         fseek
    mov        r0, r4
    bl         ftell
    mov        r1, r5
    mov        r6, r0
    mov        r2, r5
    mov        r0, r4
    bl         fseek
    cmp        r6, r8
    bhi        .L_02001e00
    cmp        r6, #0
    bne        .L_02001e1c
.L_02001dcc:
    mov        r4, #0
    mov        r6, r4
.L_02001dd4:
    ldr        r2, [r7]
    ldr        r3, [r2, #0x258]
    str        r6, [r2, #0x244]
    orr        r3, r3, #1
    str        r3, [r2, #0x258]
    bl         probe_savestate_slots
    mov        r1, r6
    ldr        r0, .L_02002060
    bl         swap_adjacent_bytes_in_backing_buffer
    mov        r0, r4
    pop        {r4, r5, r6, r7, r8, pc}
.L_02001e00:
    ldr        r2, [r7]
    mov        r4, r5
    ldr        r3, [r2, #0x258]
    mov        r0, r4
    orr        r3, r3, #6
    str        r3, [r2, #0x258]
    pop        {r4, r5, r6, r7, r8, pc}
.L_02001e1c:
    mov        r0, r4
    bl         rom_header_lacks_sega_signature
    subs       r8, r0, #0
    beq        .L_02001fc4
    sub        r6, r6, #0x200
    mov        r2, r5
    mov        r1, #0x200
    mov        r0, r4
    bl         fseek
    mov        r3, r4
    mov        r2, r6
    mov        r1, #1
    ldr        r0, .L_02002060
    bl         fread
    ldr        r0, .L_02002060
    mov        r1, r6
    bl         deinterleave_smd_rom_blocks
    ldr        r2, [r7]
    mov        r3, #1
    strb       r3, [r2, #0x260]
.L_02001e6c:
    ldr        r4, .L_02002060
    ldr        r5, .L_02002064
    mov        r0, r4
    mov        r1, r6
    bl         parse_cartridge_header
    ldr        r3, [r5]
    tst        r3, #0x20
    bne        .L_02002014
.L_02001e8c:
    ldr        r3, [r5]
    lsr        r3, r3, #0x10
    and        r3, r3, #3
    cmp        r3, #1
    moveq      ip, #0x4a
    beq        .L_02001eb0
    cmp        r3, #2
    movne      ip, #0x55
    moveq      ip, #0x45
.L_02001eb0:
    ldr        r1, .L_02002060
    mov        r0, #0x55
    mov        lr, #0
    add        r4, r1, #3
.L_02001ec0:
    ldrb       r2, [r1, #0x1f0]
    eor        r3, lr, #1
    cmp        ip, r2
    add        r1, r1, #1
    beq        .L_02002050
    cmp        r2, #0x20
    moveq      r3, #0
    andne      r3, r3, #1
    cmp        r3, #0
    movne      r0, r2
    movne      lr, #1
    cmp        r4, r1
    bne        .L_02001ec0
.L_02001ef4:
    sub        r3, r0, #0x31
    cmp        r3, #0x24
    ldrls      pc, [pc, r3, lsl #2]
    b          .L_02001f98
    .word .L_02001fe4
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001ffc
    .word .L_02001ffc
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001ffc
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001fe4
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001f98
    .word .L_02001ffc
.L_02001f98:
    ldr        r2, [r7]
    mov        r3, #2
    strb       r3, [r2, #0x254]
    mov        r0, #0xc0
    bl         set_genesis_region_and_version_register
    mov        r4, #1
    b          .L_02001dd4
.L_02001fb4:
    add        r0, r0, #0x268
    bl         address_02082724
    str        r0, [r7]
    b          .L_02001d70
.L_02001fc4:
    mov        r3, r4
    ldr        r0, .L_02002060
    mov        r1, #1
    mov        r2, r6
    bl         fread
    ldr        r3, [r7]
    strb       r8, [r3, #0x260]
    b          .L_02001e6c
.L_02001fe4:
    ldr        r3, [r7]
    mov        r0, #0
    strb       r0, [r3, #0x254]
    bl         set_genesis_region_and_version_register
    mov        r4, #1
    b          .L_02001dd4
.L_02001ffc:
    ldr        r3, [r7]
    mov        r4, #1
    strb       r4, [r3, #0x254]
    mov        r0, #0x80
    bl         set_genesis_region_and_version_register
    b          .L_02001dd4
.L_02002014:
    mov        r1, r6
    mov        r0, r4
    bl         compute_genesis_rom_checksum
    ldr        r1, [r7]
    ldr        r3, [r1, #0x240]
    cmp        r0, r3
    beq        .L_02001e8c
    ldr        r3, [r1, #0x258]
    lsr        r2, r0, #8
    orr        r3, r3, #0x10
    str        r3, [r1, #0x258]
    str        r0, [r1, #0x240]
    strb       r0, [r4, #0x18f]
    strb       r2, [r4, #0x18e]
    b          .L_02001e8c
.L_02002050:
    mov        r0, r2
    b          .L_02001ef4
.L_02002058:
    .word 0x00306800
.L_0200205c:
    .word loaded_cartridge_metadata
.L_02002060:
    .word cartridge_rom_bytes
.L_02002064:
    .word emulator_option_flags

/* 0x02002068 */
.global initialize_default_emulator_options
initialize_default_emulator_options:
    ldr        r2, .L_02002084
    ldr        r3, [r2]
    orr        r3, r3, #0x5c
    bic        r3, r3, #0x33000
    orr        r3, r3, #0x2000
    str        r3, [r2]
    bx         lr
.L_02002084:
    .word emulator_option_flags
