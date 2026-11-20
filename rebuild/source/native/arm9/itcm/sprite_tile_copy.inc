/* ARM9 tightly coupled instruction memory code. 0x010042c0–0x010056e0. */


/* 0x010042c0 */
.global copy_sprite_tiles_1x1
copy_sprite_tiles_1x1:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01004300 */
.global copy_sprite_tiles_2x1
copy_sprite_tiles_2x1:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}

/* 0x01004360 */
.global copy_sprite_tiles_3x1
copy_sprite_tiles_3x1:
    push       {r4, r5, r6, r7, r8, sb, lr}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}

/* 0x01004410 */
.global copy_sprite_tiles_4x1
copy_sprite_tiles_4x1:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010044d0 */
.global copy_sprite_tiles_1x2
copy_sprite_tiles_1x2:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}

/* 0x01004530 */
.global copy_sprite_tiles_2x2
copy_sprite_tiles_2x2:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010045f0 */
.global copy_sprite_tiles_3x2
copy_sprite_tiles_3x2:
    push       {r4, r5, r6, r7, r8, sb, lr}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x80
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xa0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01004750 */
.global copy_sprite_tiles_4x2
copy_sprite_tiles_4x2:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0xc0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x80
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xe0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xa0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x010048c0 */
.global copy_sprite_tiles_1x3
copy_sprite_tiles_1x3:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}

/* 0x01004970 */
.global copy_sprite_tiles_2x3
copy_sprite_tiles_2x3:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x80
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xa0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01004ab0 */
.global copy_sprite_tiles_3x3
copy_sprite_tiles_3x3:
    push       {r4, r5, r6, r7, r8, sb, lr}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xc0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xe0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x80
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x100
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xa0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}

/* 0x01004ce0 */
.global copy_sprite_tiles_4x3
copy_sprite_tiles_4x3:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0x120
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xc0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x140
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xe0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x80
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x160
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x100
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xa0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01004f30 */
.global copy_sprite_tiles_1x4
copy_sprite_tiles_1x4:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01004ff0 */
.global copy_sprite_tiles_2x4
copy_sprite_tiles_2x4:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0x80
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xa0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xc0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xe0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01005160 */
.global copy_sprite_tiles_3x4
copy_sprite_tiles_3x4:
    push       {r4, r5, r6, r7, r8, sb, lr}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x100
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x80
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x120
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xa0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x140
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xc0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    mov        r2, #0
    mov        r3, #0
    mov        r4, #0
    mov        r5, #0
    mov        r6, #0
    mov        r7, #0
    mov        r8, #0
    mov        sb, #0
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x160
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xe0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0

/* 0x01005410 */
.global copy_sprite_tiles_4x4
copy_sprite_tiles_4x4:
    push       {r4, r5, r6, r7, r8, sb, lr}
    add        lr, r0, #0x180
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x100
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x80
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x1a0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x120
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xa0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x20
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x1c0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x140
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xc0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x40
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x1e0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x160
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0xe0
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    add        lr, r0, #0x60
    ldm        lr!, {r2, r3, r4, r5, r6, r7, r8, sb}
    ror        r2, r2, #0x10
    ror        r3, r3, #0x10
    ror        r4, r4, #0x10
    ror        r5, r5, #0x10
    ror        r6, r6, #0x10
    ror        r7, r7, #0x10
    ror        r8, r8, #0x10
    ror        sb, sb, #0x10
    stm        r1!, {r2, r3, r4, r5, r6, r7, r8, sb}
    pop        {r4, r5, r6, r7, r8, sb, pc}
    andeq      r0, r0, r0
    andeq      r0, r0, r0
