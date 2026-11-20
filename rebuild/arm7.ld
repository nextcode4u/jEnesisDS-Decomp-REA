OUTPUT_FORMAT("elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(_start)

SECTIONS
{
    .text 0x037f8000 :
    {
        *(.text.startup)
        __startup_end = .;
        *(.text.payload)
    }

    .bss 0x03806d94 (NOLOAD) :
    {
        __bss_start = .;
        *crtbegin.o(.bss)
        . = 0x0380becc - 0x03806d94;
        __bss_end = .;
    }

    arm7_main = 0x037f81f4;
    arm7_constructors = 0x03802524;
}
