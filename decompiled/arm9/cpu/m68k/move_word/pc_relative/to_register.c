/* ARM9 to register — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x0201aaa8  m68k_move_word

void m68k_dispatch_0201aaa8(void)

{
  undefined2 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(undefined2 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201aaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201b244  m68k_move_word

void m68k_dispatch_0201b244(void)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar1);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar1);
  }
  uVar3 = FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar4);
  *(undefined2 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0201b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}

