/* ARM entry points for the Thumb SDK routines at 0x037f80f0–0x037f8144. */
.macro THUMB_CALL_VENEER arm_entry, thumb_entry
    .global \arm_entry
    .type \arm_entry, %function
\arm_entry:
    ldr ip, [pc]
    bx ip
    .word \thumb_entry
    .size \arm_entry, . - \arm_entry
.endm

THUMB_CALL_VENEER arm7_call_via_r3, _call_via_r3
THUMB_CALL_VENEER arm7_rtc_reset_veneer, rtcReset
THUMB_CALL_VENEER arm7_irq_init_veneer, irqInit
THUMB_CALL_VENEER irqSet, arm7_thumb_irqSet
THUMB_CALL_VENEER irqEnable, arm7_thumb_irqEnable
THUMB_CALL_VENEER arm7_wait_vblank_veneer, swiWaitForVBlank
THUMB_CALL_VENEER arm7_touch_read_veneer, touchReadXY
.purgem THUMB_CALL_VENEER
