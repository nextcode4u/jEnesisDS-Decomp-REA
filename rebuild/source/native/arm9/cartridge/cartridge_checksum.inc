/* Cartridge checksum. Release range 0x02001530–0x0200157c. */


/* 0x02001530 */
.global compute_genesis_rom_checksum
compute_genesis_rom_checksum:
    cmp        r1, #0x200
    mov        ip, r0
    movls      r0, #0
    bxls       lr
    mov        r2, #0x200
    mov        r0, #0
    mov        r3, r2
.L_0200154c:
    tst        r2, #1
    ldrbeq     r3, [ip, r3]
    ldrbne     r3, [r3, ip]
    add        r2, r2, #1
    addeq      r0, r0, r3, lsl #8
    addne      r0, r0, r3
    cmp        r2, r1
    mov        r3, r2
    bne        .L_0200154c
    lsl        r0, r0, #0x10
    lsr        r0, r0, #0x10
    bx         lr
