/* ARM9 to predecrement — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x01003d6c  m68k_move_long

void m68k_move_long_01003d6c(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long((int)*unaff_r10);
  uVar2 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - 4;
  *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar2;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar3 = (short)(uVar1 >> 0x10);
    puVar3[1] = (short)uVar1;
    return;
  }
  uVar2 = uVar2 & 0xffffff;
  (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2 + 2,uVar1 & 0xffff);
  (*(code *)(&m68k_word_write_handlers)[uVar2 >> 0x10])(uVar2,uVar1 >> 0x10);
  return;
}


// 0x0201a6dc  m68k_move_long

void m68k_move_long_0201a6dc(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int unaff_r6;
  int unaff_r8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_long(CONCAT22(*unaff_r10,unaff_r10[1]));
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
  (*(code *)(&m68k_word_write_handlers)[uVar3 >> 0x10])(uVar3 + 2,uVar2 & 0xffff);
  (*(code *)(&m68k_word_write_handlers)[uVar3 >> 0x10])(uVar3,uVar2 >> 0x10);
  return;
}


// 0x0201bf6c  m68k_move_long

void m68k_move_long_0201bf6c(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint *puVar5;
  int unaff_r6;
  int unaff_r8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar4 = *puVar5 - 4;
  *puVar5 = uVar4;
  if (0xdfffff < (uVar4 & 0xf00000)) {
    puVar3 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    return;
  }
  uVar4 = uVar4 & 0xffffff;
  (*(code *)(&m68k_word_write_handlers)[uVar4 >> 0x10])(uVar4 + 2,uVar2);
  (*(code *)(&m68k_word_write_handlers)[uVar4 >> 0x10])(uVar4,uVar1);
  return;
}

