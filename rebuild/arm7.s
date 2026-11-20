.include "startup.inc"

.arm
.section .text.startup, "ax", %progbits
.global _start
.type _start, %function
_start:
    mov r0, #0x04000000
    str r0, [r0, #0x208]

    SET_STACK 0x12, .Lirq_stack
    SET_STACK 0x13, .Lsvc_stack
    SET_STACK 0x1f, .Lsystem_stack

    ldr r0, .Lbss_start
    ldr r1, .Lbss_end
    sub r1, r1, r0
    bl .Lclear_words
    ldr r3, .Lconstructors
    bl arm7_call_via_r3
    mov r0, #0
    mov r1, #0
    ldr r3, .Lmain
    bl arm7_call_via_r3
    mov r0, #0x08000000
    bx r0

.Lclear_words:
    CLEAR_WORDS
.Lcopy_words:
    COPY_WORDS

.Lirq_stack:     .word 0x0380ffa0
.Lsvc_stack:     .word 0x0380fea0
.Lsystem_stack:  .word 0x0380fda0
.Lbss_start:     .word __bss_start
.Lbss_end:       .word __bss_end
.Lconstructors:  .word arm7_constructors
.Lmain:          .word arm7_main
    mov r0, r0
    mov r0, r0
    mov r0, r0
.size _start, . - _start

.ifndef use_recovered_c
.section .text.payload, "ax", %progbits
.global arm7_call_via_r3
    .incbin "arm7-main.bin", 0, 0x20
.type arm7_call_via_r3, %function
arm7_call_via_r3:
    .incbin "arm7-main.bin", 0x20
.endif
