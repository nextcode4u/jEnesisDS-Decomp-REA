/* Thumb entry for Slot-1's call into the ARM newlib memcpy. */
.syntax unified
.thumb
.text
.global arm9_thumb_memcpy
.thumb_func
arm9_thumb_memcpy:
    bx pc
    mov r8, r8
.arm
    b memcpy
