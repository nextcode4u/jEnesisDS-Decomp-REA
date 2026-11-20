/* Audio bridge. Release range 0x037f93d0–0x037f93d8. */


/* 0x037f93d0 */
.global return_zero_for_disabled_fm_status
return_zero_for_disabled_fm_status:
    mov        r0, #0
    bx         lr
