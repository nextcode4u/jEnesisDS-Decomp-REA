OUTPUT_FORMAT("elf32-littlearm")
OUTPUT_ARCH(arm)
ENTRY(_start)

SECTIONS
{
    .text 0x02000000 :
    {
        *(.text.startup)
        __startup_end = .;
        *(.text.payload)
    }

    .dtcm 0x0b000000 : AT(0x02090004)
    {
        __dtcm_start = .;
        *(.dtcm)
        __dtcm_end = .;
    }

    .itcm 0x01000000 : AT(0x020936f0)
    {
        __itcm_start = .;
        *(.itcm)
        __itcm_end = .;
    }

    .bss 0x02098f70 (NOLOAD) :
    {
        __bss_start = .;
        . += 0x023eb350 - 0x02098f70;
        __bss_end = .;
    }

    __itcm_load = LOADADDR(.itcm);
    __dtcm_load = LOADADDR(.dtcm);
    arm9_main = 0x020011e4;
    arm9_constructors = 0x02082370;
}
