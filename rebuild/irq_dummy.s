/* The period linker padded this two-byte libnds callback with zeroes. */
.section .text.irqDummy, "ax", %progbits
.thumb
.global irqDummy
.thumb_func
irqDummy:
    bx lr
    .hword 0
