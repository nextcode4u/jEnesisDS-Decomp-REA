/* Clear the ARM9 Z80 RAM and the two associated reset words. */
#include <string.h>

/* The original clears these words with RAM. Their other uses are unresolved. */
extern unsigned z80_reset_word_0;
extern unsigned z80_reset_word_1;
extern unsigned char z80_work_ram[];

void clear_z80_work_ram(void)
{
    z80_reset_word_0 = 0;
    z80_reset_word_1 = 0;
    memset(z80_work_ram, 0, 0x2000);
}
