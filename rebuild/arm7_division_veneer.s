/* Thumb entry for callers of the ARM libgcc division routine. */
.syntax unified
.thumb
.text
.global arm7_thumb_divsi3
.thumb_func
arm7_thumb_divsi3:
    bx pc
    mov r8, r8
.arm
    b __divsi3
