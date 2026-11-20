.include "startup.inc"

.arm
.section .text.startup, "ax", %progbits
.global _start
.type _start, %function
_start:
    /* Configure the ARM946E-S MPU and disable interrupts during setup. */
    mov r0, #0x04000000
    str r0, [r0, #0x208]
    ldr r1, .Lpower_mask
    add r0, r0, #0x304
    strh r1, [r0]
    ldr r1, .Linitial_control
    mcr p15, 0, r1, c1, c0, 0
    mov r0, #0
    mcr p15, 0, r0, c7, c5, 0
    mcr p15, 0, r0, c7, c6, 0
    mcr p15, 0, r0, c7, c10, 4

    ldr r0, .Ldtcm_address
    orr r0, r0, #0x0a
    mcr p15, 0, r0, c9, c1, 0
    mov r0, #0x20
    mcr p15, 0, r0, c9, c1, 1

    ldr r0, .Lio_region
    mcr p15, 0, r0, c6, c0, 0
    ldr r0, .Lmain_ram_region
    mcr p15, 0, r0, c6, c1, 0
    ldr r0, .Lshared_ram_region
    mcr p15, 0, r0, c6, c2, 0
    ldr r0, .Lcart_region
    mcr p15, 0, r0, c6, c3, 0
    ldr r0, .Ldtcm_address
    orr r0, r0, #0x1b
    mcr p15, 0, r0, c6, c4, 0
    ldr r0, .Litcm_address
    orr r0, r0, #0x1d
    mcr p15, 0, r0, c6, c5, 0
    ldr r0, .Lbios_region
    mcr p15, 0, r0, c6, c6, 0
    ldr r0, .Luncached_ram_region
    mcr p15, 0, r0, c6, c7, 0

    mov r0, #6
    mcr p15, 0, r0, c3, c0, 0
    mov r0, #0x42
    mcr p15, 0, r0, c2, c0, 0
    mcr p15, 0, r0, c2, c0, 1
    ldr r0, .Linstruction_permissions
    mcr p15, 0, r0, c5, c0, 3
    ldr r0, .Ldata_permissions
    mcr p15, 0, r0, c5, c0, 2
    mrc p15, 0, r0, c1, c0, 0
    ldr r1, .Lcontrol_enable_bits
    orr r0, r0, r1
    mcr p15, 0, r0, c1, c0, 0

    SET_STACK 0x12, .Lirq_stack
    SET_STACK 0x13, .Lsvc_stack
    SET_STACK 0x1f, .Lsystem_stack

    /* Copy the TCM images from their boot load addresses. */
    ldr r1, .Litcm_source
    ldr r2, .Litcm_address
    ldr r4, .Litcm_end
    bl .Lcopy_words
    ldr r1, .Ldtcm_source
    ldr r2, .Ldtcm_address
    ldr r4, .Ldtcm_end
    bl .Lcopy_words

    ldr r0, .Lbss_start
    ldr r1, .Lbss_end
    sub r1, r1, r0
    bl .Lclear_words
    ldr r0, .Lsbss_start
    ldr r1, .Lsbss_end
    sub r1, r1, r0
    bl .Lclear_words

    ldr r1, .Lheap_slot
    ldr r0, .Lheap_limit
    str r0, [r1]
    ldr r3, .Lconstructors
    bl arm9_call_via_r3
    mov r0, #0
    mov r1, #0
    ldr r3, .Lmain
    bl arm9_call_via_r3

    ldr r0, .Lreturn_loop_address
    ldr r0, [r0]
    ldr r1, .Lreturn_address
    str r0, [r1]
    bx r1
.Lreturn_loop:
    b .Lreturn_loop

.Lclear_words:
    CLEAR_WORDS
.Lcopy_words:
    COPY_WORDS

.Lpower_mask:               .word 0x00008203
.Linitial_control:          .word 0x00002078
.Ldtcm_address:             .word __dtcm_start
.Lio_region:                .word 0x04000033
.Lmain_ram_region:          .word 0x0200002b
.Lshared_ram_region:        .word 0x037f801d
.Lcart_region:              .word 0x08000035
.Litcm_address:             .word __itcm_start
.Lbios_region:              .word 0xffff001d
.Luncached_ram_region:      .word 0x0240002b
.Linstruction_permissions:  .word 0x36636333
.Ldata_permissions:         .word 0x36333333
.Lcontrol_enable_bits:      .word 0x00051005
.Lirq_stack:                .word __dtcm_start + 0x3e00
.Lsvc_stack:                .word __dtcm_start + 0x3f00
.Lsystem_stack:             .word __dtcm_start + 0x3d00
.Litcm_source:              .word __itcm_load
.Litcm_end:                 .word __itcm_end
.Ldtcm_source:              .word __dtcm_load
.Ldtcm_end:                 .word __dtcm_end
.Lbss_start:                .word __bss_start
.Lbss_end:                  .word __bss_end
.Lsbss_start:               .word __dtcm_end
.Lsbss_end:                 .word __dtcm_end
.Lheap_slot:                .word 0x020b4ce0
.Lheap_limit:               .word 0x023ff000
.Lconstructors:             .word arm9_constructors
.Lmain:                     .word arm9_main
.Lreturn_loop_address:      .word .Lreturn_loop
.Lreturn_address:           .word 0x027ffe78
.size _start, . - _start

.include "arm9_main.s"
.include "arm9_dtcm.s"
.include "arm9_itcm.s"
