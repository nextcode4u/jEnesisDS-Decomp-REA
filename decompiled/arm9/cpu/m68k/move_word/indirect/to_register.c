/* ARM9 to register — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0201785c  m68k_move_word

void m68k_dispatch_0201785c(void)

{
  undefined2 uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(undefined2 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02017894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

