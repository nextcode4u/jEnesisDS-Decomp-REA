/* Z80 memory stubs. Release range 0x02004c44–0x02004c50. */

/* 0x02004c44 */
.global z80_memory_stubs
z80_memory_stubs:
    bx         lr
    mov        r0, #0xff
    bx         lr
