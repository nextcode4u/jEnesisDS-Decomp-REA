/* ARM9 processor callbacks and SDK interworking. */
.syntax unified
.arm
.section .native.arm9_empty_callback, "ax", %progbits
arm9_empty_callback:
    bx lr

.section .native.arm9_cp15_accessors, "ax", %progbits
    nop
    nop
write_cp15_c3_boot_value:
    mov r0, #7
    mcr p15, 0, r0, c3, c0, 0
    bx lr
    .word 0
read_cp15_c3:
    mrc p15, 0, r0, c3, c0, 0
    bx lr
    nop
    nop

.include "native/arm9/platform/sdk_veneers.inc"
