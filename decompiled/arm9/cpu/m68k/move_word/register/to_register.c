/* ARM9 to register — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x02016d20  m68k_move_word

void m68k_dispatch_02016d20(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined2 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(undefined2 *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x02016d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02017284  m68k_move_word

void m68k_dispatch_02017284(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined2 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(undefined2 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x020172bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

