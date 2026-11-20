ENTRY(scanKeys)

SECTIONS
{
    .text 0x0207fb70 :
    {
        *(.text.keysHeld)
        *(.text.keysDown)
        *(.text.scanKeys)
        *(.text.keysDownRepeat)
        *(.text.keysSetRepeat)
        *(.text.keysUp)
    }
    .data 0x0208f390 : { *(.data) }
    .bss 0x020b4ca0 (NOLOAD) : { *(.bss) }
}
