/* ARM9 to register — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x01003ae8  m68k_move_word

void m68k_dispatch_01003ae8(void)

{
  undefined2 uVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(undefined2 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x01003b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02019f24  m68k_move_word

void m68k_dispatch_02019f24(void)

{
  undefined2 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040c4((int)*unaff_r10);
  *(undefined2 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02019f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201bd38  m68k_move_word

void m68k_dispatch_0201bd38(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(undefined2 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0201bd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}

