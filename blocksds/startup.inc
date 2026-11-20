.macro SET_STACK mode, stack
    mov r0, #\mode
    msr cpsr_fc, r0
    ldr sp, \stack
.endm

.macro CLEAR_WORDS
    mov r2, #3
    add r1, r1, r2
    bics r1, r1, r2
    bxeq lr
    mov r2, #0
1:
    stmia r0!, {r2}
    subs r1, r1, #4
    bne 1b
    bx lr
.endm

.macro COPY_WORDS
    sub r3, r4, r2
    mov r0, #3
    add r3, r3, r0
    bics r3, r3, r0
    bxeq lr
2:
    ldmia r1!, {r0}
    stmia r2!, {r0}
    subs r3, r3, #4
    bne 2b
    bx lr
.endm
