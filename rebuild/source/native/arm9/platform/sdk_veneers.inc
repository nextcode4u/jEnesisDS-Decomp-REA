/* Release ARM/Thumb entries for libnds, libfat, libgcc and newlib routines. */
.macro CALL_THUMB arm_entry, thumb_function
    .arm
    .global \arm_entry
    .type \arm_entry, %function
\arm_entry:
    ldr ip, [pc]
    bx ip
    .word \thumb_function
    .size \arm_entry, . - \arm_entry
.endm

.macro CALL_ARM thumb_entry, arm_function
    .thumb
    .global \thumb_entry
    .thumb_func
\thumb_entry:
    bx pc
    mov r8, r8
    .arm
    b \arm_function
    .size \thumb_entry, . - \thumb_entry
.endm

.section .native.arm9_sdk_veneers, "ax", %progbits
CALL_THUMB arm9_call_via_r3, _call_via_r3
CALL_THUMB swiWaitForVBlank, arm9_thumb_swiWaitForVBlank
CALL_THUMB irqDisable, arm9_thumb_irqDisable
CALL_THUMB irqEnable, arm9_thumb_irqEnable
CALL_THUMB irqSet, arm9_thumb_irqSet
CALL_THUMB irqInit_arm_veneer, irqInit
CALL_THUMB irqClear_arm_veneer, irqClear
CALL_THUMB scanKeys_arm_veneer, scanKeys
CALL_THUMB keysHeld_arm_veneer, keysHeld
CALL_THUMB touchReadXY_arm_veneer, touchReadXY
CALL_THUMB fatInitDefault_arm_veneer, fatInitDefault
CALL_THUMB swiCopy_arm_veneer, swiCopy
CALL_THUMB vramSetMainBanks_arm_veneer, vramSetMainBanks
CALL_THUMB vramSetBankE_arm_veneer, vramSetBankE

CALL_ARM AddDevice_thumb_veneer, AddDevice
CALL_ARM chdir_thumb_veneer, chdir
CALL_ARM strlen_thumb_veneer, strlen
CALL_ARM strchr_thumb_veneer, strchr
CALL_ARM strncmp_thumb_veneer, strncmp
CALL_ARM free_thumb_veneer, free
CALL_ARM memset_thumb_veneer, memset
CALL_ARM malloc_thumb_veneer, malloc
CALL_ARM __udivsi3_thumb_veneer, __udivsi3

.section .native.arm9_storage_veneers, "ax", %progbits
CALL_ARM scsd_write_data_thumb_veneer, _SCSD_writeData_s
CALL_ARM strncpy_thumb_veneer, strncpy
CALL_ARM strrchr_thumb_veneer, strrchr
CALL_ARM __aeabi_uidivmod_thumb_veneer, __aeabi_uidivmod
CALL_ARM strnlen_thumb_veneer, strnlen
CALL_ARM strcasecmp_thumb_veneer, strcasecmp
CALL_ARM strncasecmp_thumb_veneer, strncasecmp
CALL_ARM strpbrk_thumb_veneer, strpbrk
CALL_ARM memmove_thumb_veneer, memmove
CALL_ARM strupr_thumb_veneer, strupr
CALL_ARM __divsi3_thumb_veneer, __divsi3
CALL_ARM __aeabi_idivmod_thumb_veneer, __aeabi_idivmod

.purgem CALL_THUMB
.purgem CALL_ARM
