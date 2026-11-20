/* Lzss file io. Release range 0x0200cda4–0x0200d03c. */


/* 0x0200cda4 */
.global load_file_and_decode_lzss_with_prefix
load_file_and_decode_lzss_with_prefix:
    push       {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    cmp        r1, #0
    cmpne      r0, #0
    sub        sp, sp, #4
    mov        r6, r0
    mov        r7, r1
    mov        r0, r2
    mov        r5, r3
    ldr        r8, [sp, #0x28]
    beq        .L_0200ce64
    cmp        r3, #0
    cmpne      r2, #0
    movne      sb, #0
    moveq      sb, #1
    beq        .L_0200ce64
    cmp        r3, r8
    bls        .L_0200ce64
    ldr        r3, .L_0200cf14
    ldr        fp, .L_0200cf18
    ldr        r2, .L_0200cf1c
    str        r3, [fp]
    ldr        r3, .L_0200cf20
    ldr        r1, .L_0200cf24
    str        r2, [r3]
    bl         fopen
    subs       sl, r0, #0
    beq        .L_0200ce64
    mov        r1, sb
    mov        r2, #2
    bl         fseek
    mov        r0, sl
    ldr        r4, [fp]
    bl         ftell
    mov        r1, sb
    str        r0, [r4, #8]
    mov        r2, sb
    mov        r0, sl
    bl         fseek
    ldr        r3, [fp]
    ldr        r3, [r3, #8]
    cmp        r5, r3
    blo        .L_0200ce54
    cmp        r8, r3
    bls        .L_0200ce6c
.L_0200ce54:
    mov        r0, sl
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    b          fclose
.L_0200ce64:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, pc}
.L_0200ce6c:
    mov        r2, r5
    mov        r3, sl
    mov        r1, #1
    mov        r0, r6
    bl         fread
    mov        r0, sl
    bl         fclose
    ldr        r2, .L_0200cf20
    cmp        r8, #0
    ldr        r3, [r2]
    ldr        r2, [fp]
    str        r5, [r3, #8]
    str        r6, [r2, #4]
    str        r6, [r2]
    str        sb, [r2, #0xc]
    str        r7, [r3]
    str        sb, [r3, #0xc]
    str        r7, [r3, #4]
    bne        .L_0200cec4
.L_0200ceb8:
    add        sp, sp, #4
    pop        {r4, r5, r6, r7, r8, sb, sl, fp, lr}
    b          decode_lzss_stream
.L_0200cec4:
    ldr        r1, [r2, #4]
    mov        r0, r7
    mov        r2, r8
    bl         address_02082ec0
    ldr        ip, [fp]
    ldr        r3, .L_0200cf20
    ldr        r2, [ip]
    ldr        r0, [r3]
    ldr        r3, [ip, #0xc]
    add        r2, r2, r8
    add        r3, r3, r8
    str        r3, [ip, #0xc]
    str        r2, [ip]
    ldr        r1, [r0]
    ldr        r3, [r0, #0xc]
    add        r1, r1, r8
    add        r3, r3, r8
    str        r3, [r0, #0xc]
    str        r1, [r0]
    b          .L_0200ceb8
.L_0200cf14:
    .word 0x023deed4
.L_0200cf18:
    .word 0x023ddebc
.L_0200cf1c:
    .word 0x023eb2fc
.L_0200cf20:
    .word 0x023eb2f8
.L_0200cf24:
    .word address_0208f074
    push       {r4, r5, r6, r7, r8, sb, sl, lr}
    cmp        r1, #0
    cmpne      r0, #0
    mov        lr, r1
    mov        ip, r0
    mov        r5, r2
    ldr        r4, [sp, #0x20]
    popeq      {r4, r5, r6, r7, r8, sb, sl, pc}
    cmp        r3, #0
    cmpne      r2, #0
    movne      r8, #0
    moveq      r8, #1
    popeq      {r4, r5, r6, r7, r8, sb, sl, pc}
    cmp        r3, r4
    ldr        r6, .L_0200d028
    ldr        r7, .L_0200d02c
    ldr        sl, .L_0200d030
    ldr        sb, .L_0200d034
    popls      {r4, r5, r6, r7, r8, sb, sl, pc}
    subs       r2, r4, #0
    mov        r1, r0
    str        r8, [r7, #0xc]
    mov        r0, lr
    str        r8, [r6, #0xc]
    str        r3, [r7, #8]
    str        r6, [sb]
    str        r7, [sl]
    str        ip, [r6]
    str        ip, [r6, #4]
    str        r3, [r6, #8]
    str        lr, [r7]
    str        lr, [r7, #4]
    bne        .L_0200cfe8
.L_0200cfac:
    bl         encode_lzss_stream
    ldr        r1, .L_0200d038
    mov        r0, r5
    bl         fopen
    subs       r4, r0, #0
    mov        r1, #1
    mov        r3, r4
    popeq      {r4, r5, r6, r7, r8, sb, sl, pc}
    ldr        ip, [sl]
    ldr        r2, [ip, #0xc]
    ldr        r0, [ip, #4]
    bl         fwrite
    mov        r0, r4
    pop        {r4, r5, r6, r7, r8, sb, sl, lr}
    b          fclose
.L_0200cfe8:
    bl         address_02082ec0
    ldr        ip, [sb]
    ldr        r0, [sl]
    ldr        r2, [ip]
    ldr        r3, [ip, #0xc]
    add        r2, r2, r4
    add        r3, r3, r4
    str        r3, [ip, #0xc]
    str        r2, [ip]
    ldr        r1, [r0]
    ldr        r3, [r0, #0xc]
    add        r1, r1, r4
    add        r3, r3, r4
    str        r3, [r0, #0xc]
    str        r1, [r0]
    b          .L_0200cfac
.L_0200d028:
    .word 0x023deed4
.L_0200d02c:
    .word 0x023eb2fc
.L_0200d030:
    .word 0x023eb2f8
.L_0200d034:
    .word 0x023ddebc
.L_0200d038:
    .word address_0208f070
