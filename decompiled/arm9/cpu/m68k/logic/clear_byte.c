/* ARM9 clear byte — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020245bc  m68k_clr_byte

void m68k_dispatch_020245bc(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x020245d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024620  m68k_clr_byte

void m68k_dispatch_02024620(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x0202468c  m68k_clr_byte

void m68k_dispatch_0202468c(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  if ((unaff_r11 & 7) == 7) {
    uVar3 = uVar1 + 2;
  }
  else {
    uVar3 = uVar1 + 1;
  }
  *puVar2 = uVar3;
  if ((uVar1 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
  return;
}


// 0x02024724  m68k_clr_byte

void m68k_dispatch_02024724(void)

{
  uint uVar1;
  uint *puVar2;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  if ((unaff_r11 & 7) == 7) {
    uVar1 = uVar1 - 2;
  }
  else {
    uVar1 = uVar1 - 1;
  }
  *puVar2 = uVar1;
  if ((uVar1 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
  return;
}


// 0x020247bc  m68k_clr_byte

void m68k_dispatch_020247bc(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x02024840  m68k_clr_byte

void m68k_dispatch_02024840(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = 0;
  return;
}


// 0x02024930  m68k_clr_byte

void m68k_dispatch_02024930(void)

{
  uint uVar1;
  int unaff_r8;
  short *unaff_r10;
  
  uVar1 = (uint)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x02024984  m68k_clr_byte

void m68k_dispatch_02024984(void)

{
  uint uVar1;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = CONCAT22(*unaff_r10,unaff_r10[1]);
  if (0xdfffff < (*unaff_r10 & 0xf0) * 0x10000) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
    return;
  }
  uVar1 = uVar1 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar1 >> 0x10])(uVar1);
  return;
}

