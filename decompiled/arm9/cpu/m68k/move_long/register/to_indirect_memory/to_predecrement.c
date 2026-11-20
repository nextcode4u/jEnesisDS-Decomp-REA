/* ARM9 to predecrement — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x01003d34  m68k_move_long

void m68k_dispatch_01003d34(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  iVar4 = unaff_r6 + 0x20;
  uVar1 = *(uint *)(iVar4 + (unaff_r11 & 7) * 4);
  uVar2 = *(int *)(iVar4 + ((unaff_r11 & 0xe00) >> 7)) - 4;
  *(uint *)(iVar4 + ((unaff_r11 & 0xe00) >> 7)) = uVar2;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar3 = (short)(uVar1 >> 0x10);
    puVar3[1] = (short)uVar1;
    return;
  }
  uVar2 = uVar2 & 0xffffff;
  (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2 + 2,uVar1 & 0xffff);
  (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2,uVar1 >> 0x10);
  return;
}


// 0x02016f44  m68k_move_long

void m68k_dispatch_02016f44(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - 4;
  *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar3;
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

