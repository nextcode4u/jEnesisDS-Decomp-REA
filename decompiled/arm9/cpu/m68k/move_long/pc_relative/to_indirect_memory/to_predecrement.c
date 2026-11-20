/* ARM9 to predecrement — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0201adb4  m68k_move_long

void m68k_dispatch_0201adb4(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  puVar4 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar4 - 4;
  *puVar4 = uVar3;
  if (0xdfffff < (uVar3 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    *puVar1 = (short)(uVar2 >> 0x10);
    puVar1[1] = (short)uVar2;
    return;
  }
  uVar3 = uVar3 & 0xffffff;
  (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3 + 2,uVar2 & 0xffff);
  (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3,uVar2 >> 0x10);
  return;
}


// 0x0201b6e0  m68k_move_long

void m68k_dispatch_0201b6e0(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar5 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar5 = unaff_r6 + 0x20;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar5 = (int)*(short *)(iVar5 + uVar3);
  }
  else {
    iVar5 = *(int *)(iVar5 + uVar3);
  }
  uVar3 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar1 + iVar5);
  puVar6 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar4 = *puVar6 - 4;
  *puVar6 = uVar4;
  if ((uVar4 & 0xf00000) < 0xe00000) {
    uVar4 = uVar4 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar4 >> 0x10])(uVar4 + 2,uVar3 & 0xffff);
    (*(code *)(&DAT_0b00121c)[uVar4 >> 0x10])(uVar4,uVar3 >> 0x10);
    return;
  }
  puVar2 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
  *puVar2 = (short)(uVar3 >> 0x10);
  puVar2[1] = (short)uVar3;
  return;
}

