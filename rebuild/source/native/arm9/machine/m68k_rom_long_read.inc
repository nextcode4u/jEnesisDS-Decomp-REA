/* M68k rom long read. Release range 0x02003c58–0x02003c88. */


/* 0x02003c58 */
.global read_m68k_long_rom_or_page
read_m68k_long_rom_or_page:
    ldr        r1, .L_02003c84
    tst        r0, #0xc00000
    bic        r2, r0, #0xff000000
    add        r3, r1, #2
    mov        r0, r2
    bne        .L_02003c80
    ldrh       r3, [r2, r3]
    ldrh       r0, [r2, r1]
    orr        r0, r3, r0, lsl #16
    bx         lr
.L_02003c80:
    b          read_m68k_long_from_page
.L_02003c84:
    .word cartridge_rom_bytes
