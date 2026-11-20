/* ARM9 branches — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x010030f4  m68k_bhi

int m68k_dispatch_010030f4(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 5) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x01003114  m68k_bhi

int m68k_dispatch_01003114(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  if ((unaff_r7 & 5) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x0100312c  m68k_bhi

int m68k_dispatch_0100312c(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 5) == 0) {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  else {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0100314c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x01003150  m68k_bls

int m68k_dispatch_01003150(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 5) != 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0100316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x01003170  m68k_bls

int m68k_dispatch_01003170(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  FUN_020052ec();
  if ((unaff_r7 & 5) == 0) {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0100318c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x010031c0  m68k_bls

int m68k_dispatch_010031c0(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 5) == 0) {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  else {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x010031e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x010031e4  m68k_bcc

int m68k_dispatch_010031e4(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 1) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x01003204  m68k_bcc

int m68k_dispatch_01003204(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  FUN_020052ec();
  if ((unaff_r7 & 1) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x01003254  m68k_bcc

int m68k_dispatch_01003254(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 1) == 0) {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  else {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x01003278  m68k_bcs

int m68k_dispatch_01003278(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 1) != 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x01003298  m68k_bcs

int m68k_dispatch_01003298(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  FUN_020052ec();
  if ((unaff_r7 & 1) == 0) {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010032b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x010032e8  m68k_bcs

int m68k_dispatch_010032e8(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 1) == 0) {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  else {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x0100330c  m68k_bne

int m68k_dispatch_0100330c(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 4) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x0100332c  m68k_bne

int m68k_dispatch_0100332c(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  FUN_020052ec();
  if ((unaff_r7 & 4) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x0100337c  m68k_bne

int m68k_dispatch_0100337c(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 4) == 0) {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  else {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0100339c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x010033a0  m68k_beq

int m68k_dispatch_010033a0(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 4) != 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x010033bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x010033c0  m68k_beq

int m68k_dispatch_010033c0(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  FUN_020052ec();
  if ((unaff_r7 & 4) == 0) {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010033dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x01003410  m68k_beq

int m68k_dispatch_01003410(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 4) == 0) {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  else {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x01003434  m68k_bvc

int m68k_dispatch_01003434(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 2) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x01003454  m68k_bvc

int m68k_dispatch_01003454(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  if ((unaff_r7 & 2) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x0100346c  m68k_bvc

int m68k_dispatch_0100346c(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 2) == 0) {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  else {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0100348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x01003490  m68k_bvs

int m68k_dispatch_01003490(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 2) != 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x010034ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x010034b0  m68k_bvs

int m68k_dispatch_010034b0(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  if ((unaff_r7 & 2) == 0) {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010034c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x010034c8  m68k_bvs

int m68k_dispatch_010034c8(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 2) == 0) {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  else {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x010034e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x010034ec  m68k_bpl

int m68k_dispatch_010034ec(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 8) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x0100350c  m68k_bpl

int m68k_dispatch_0100350c(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  FUN_020052ec();
  if ((unaff_r7 & 8) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x0100355c  m68k_bpl

int m68k_dispatch_0100355c(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 8) == 0) {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  else {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0100357c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x01003580  m68k_bmi

int m68k_dispatch_01003580(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if ((unaff_r7 & 8) != 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0100359c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x010035a0  m68k_bmi

int m68k_dispatch_010035a0(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  if ((unaff_r7 & 8) == 0) {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010035b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x010035b8  m68k_bmi

int m68k_dispatch_010035b8(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if ((unaff_r7 & 8) == 0) {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  else {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x010035d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x010035dc  m68k_bge

int m68k_dispatch_010035dc(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if (((unaff_r7 ^ unaff_r7 >> 2) & 2) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x010035fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x01003600  m68k_bge

int m68k_dispatch_01003600(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  FUN_020052ec();
  if (((unaff_r7 ^ unaff_r7 >> 2) & 2) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x0100365c  m68k_bge

int m68k_dispatch_0100365c(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if (((unaff_r7 ^ unaff_r7 >> 2) & 2) == 0) {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  else {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x01003684  m68k_blt

int m68k_dispatch_01003684(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  if (((unaff_r7 ^ unaff_r7 >> 2) & 2) != 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x010036a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x010036a8  m68k_blt

int m68k_dispatch_010036a8(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  
  if (((unaff_r7 ^ unaff_r7 >> 2) & 2) == 0) {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010036c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x010036c4  m68k_blt

int m68k_dispatch_010036c4(void)

{
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  
  if (((unaff_r7 ^ unaff_r7 >> 2) & 2) == 0) {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  else {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x010036e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x010036ec  m68k_bgt

int m68k_dispatch_010036ec(void)

{
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar2;
  
  bVar2 = (unaff_r7 & 4) == 0;
  if (bVar2) {
    unaff_r5 = unaff_r7 ^ unaff_r7 >> 2;
  }
  if (bVar2 && (unaff_r5 & 2) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x01003714  m68k_bgt

int m68k_dispatch_01003714(void)

{
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  bool bVar2;
  
  bVar2 = (unaff_r7 & 4) == 0;
  if (bVar2) {
    unaff_r5 = unaff_r7 ^ unaff_r7 >> 2;
  }
  if (bVar2 && (unaff_r5 & 2) == 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x01003734  m68k_bgt

int m68k_dispatch_01003734(void)

{
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  bool bVar3;
  
  bVar3 = (unaff_r7 & 4) == 0;
  if (bVar3) {
    unaff_r5 = unaff_r7 ^ unaff_r7 >> 2;
  }
  if (bVar3 && (unaff_r5 & 2) == 0) {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  else {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0100375c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x01003760  m68k_ble

int m68k_dispatch_01003760(void)

{
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar2;
  
  bVar2 = (unaff_r7 & 4) == 0;
  if (bVar2) {
    unaff_r5 = unaff_r7 ^ unaff_r7 >> 2;
  }
  if (!bVar2 || (unaff_r5 & 2) != 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (unaff_r11 & 0xff));
    unaff_r7 = unaff_r7 - 0x20000;
  }
  iVar1 = unaff_r7 - 0x80000;
  if (iVar1 == 0 || (int)unaff_r7 < 0x80000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return iVar1;
}


// 0x01003788  m68k_ble

int m68k_dispatch_01003788(void)

{
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  ushort *unaff_r10;
  char unaff_r11;
  bool bVar2;
  
  bVar2 = (unaff_r7 & 4) != 0;
  if (!bVar2) {
    unaff_r5 = unaff_r7 ^ unaff_r7 >> 2;
  }
  if (bVar2 || (unaff_r5 & 2) != 0) {
    unaff_r10 = (ushort *)((int)unaff_r10 + (int)unaff_r11);
    iVar1 = unaff_r7 - 0xa0000;
    if (iVar1 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  else {
    iVar1 = unaff_r7 - 0x80000;
    if (iVar1 != 0 && 0x7ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010037a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar1;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar1;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar1 >> 0x10;
}


// 0x010037a8  m68k_ble

int m68k_dispatch_010037a8(void)

{
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar1;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar2;
  bool bVar3;
  
  bVar3 = (unaff_r7 & 4) == 0;
  if (bVar3) {
    unaff_r5 = unaff_r7 ^ unaff_r7 >> 2;
  }
  if (bVar3 && (unaff_r5 & 2) == 0) {
    puVar2 = (ushort *)(unaff_r10 + 1);
    unaff_r7 = unaff_r7 - 0x20000;
  }
  else {
    puVar2 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  }
  iVar1 = unaff_r7 - 0xa0000;
  if (iVar1 == 0 || (int)unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x010037d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x010037f8  m68k_dbra

int m68k_dispatch_010037f8(void)

{
  short sVar1;
  ushort uVar2;
  ushort *unaff_r6;
  int unaff_r7;
  int iVar3;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  uVar2 = (ushort)(*unaff_r6 - 1);
  if ((int)(*unaff_r6 - 1) < 0) {
    *unaff_r6 = uVar2;
    puVar4 = (ushort *)(unaff_r10 + 1);
    iVar3 = unaff_r7 + -0xe0000;
    if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  else {
    sVar1 = *unaff_r10;
    *unaff_r6 = uVar2;
    puVar4 = (ushort *)((int)unaff_r10 + (int)sVar1);
    iVar3 = unaff_r7 + -0xa0000;
    if (iVar3 != 0 && 0x9ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0100381c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar3;
  *(ushort **)(unaff_r6 + 0x22) = puVar4;
  return iVar3 >> 0x10;
}


// 0x01003838  m68k_dbra

int m68k_dispatch_01003838(void)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  iVar3 = *(ushort *)(unaff_r6 + 4) - 1;
  uVar2 = (undefined2)iVar3;
  if (iVar3 < 0) {
    *(undefined2 *)(unaff_r6 + 4) = uVar2;
    puVar4 = (ushort *)(unaff_r10 + 1);
    iVar3 = unaff_r7 + -0xe0000;
    if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  else {
    sVar1 = *unaff_r10;
    *(undefined2 *)(unaff_r6 + 4) = uVar2;
    puVar4 = (ushort *)((int)unaff_r10 + (int)sVar1);
    iVar3 = unaff_r7 + -0xa0000;
    if (iVar3 != 0 && 0x9ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0100385c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar4;
  return iVar3 >> 0x10;
}


// 0x01003878  m68k_dbra

int m68k_dispatch_01003878(void)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  iVar3 = *(ushort *)(unaff_r6 + 8) - 1;
  uVar2 = (undefined2)iVar3;
  if (iVar3 < 0) {
    *(undefined2 *)(unaff_r6 + 8) = uVar2;
    puVar4 = (ushort *)(unaff_r10 + 1);
    iVar3 = unaff_r7 + -0xe0000;
    if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010038b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  else {
    sVar1 = *unaff_r10;
    *(undefined2 *)(unaff_r6 + 8) = uVar2;
    puVar4 = (ushort *)((int)unaff_r10 + (int)sVar1);
    iVar3 = unaff_r7 + -0xa0000;
    if (iVar3 != 0 && 0x9ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0100389c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar4;
  return iVar3 >> 0x10;
}


// 0x010038b8  m68k_dbra

int m68k_dispatch_010038b8(void)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  iVar3 = *(ushort *)(unaff_r6 + 0xc) - 1;
  uVar2 = (undefined2)iVar3;
  if (iVar3 < 0) {
    *(undefined2 *)(unaff_r6 + 0xc) = uVar2;
    puVar4 = (ushort *)(unaff_r10 + 1);
    iVar3 = unaff_r7 + -0xe0000;
    if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010038f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  else {
    sVar1 = *unaff_r10;
    *(undefined2 *)(unaff_r6 + 0xc) = uVar2;
    puVar4 = (ushort *)((int)unaff_r10 + (int)sVar1);
    iVar3 = unaff_r7 + -0xa0000;
    if (iVar3 != 0 && 0x9ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010038dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar4;
  return iVar3 >> 0x10;
}


// 0x010038f8  m68k_dbra

int m68k_dispatch_010038f8(void)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  iVar3 = *(ushort *)(unaff_r6 + 0x10) - 1;
  uVar2 = (undefined2)iVar3;
  if (iVar3 < 0) {
    *(undefined2 *)(unaff_r6 + 0x10) = uVar2;
    puVar4 = (ushort *)(unaff_r10 + 1);
    iVar3 = unaff_r7 + -0xe0000;
    if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  else {
    sVar1 = *unaff_r10;
    *(undefined2 *)(unaff_r6 + 0x10) = uVar2;
    puVar4 = (ushort *)((int)unaff_r10 + (int)sVar1);
    iVar3 = unaff_r7 + -0xa0000;
    if (iVar3 != 0 && 0x9ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0100391c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar4;
  return iVar3 >> 0x10;
}


// 0x01003938  m68k_dbra

int m68k_dispatch_01003938(void)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  iVar3 = *(ushort *)(unaff_r6 + 0x14) - 1;
  uVar2 = (undefined2)iVar3;
  if (iVar3 < 0) {
    *(undefined2 *)(unaff_r6 + 0x14) = uVar2;
    puVar4 = (ushort *)(unaff_r10 + 1);
    iVar3 = unaff_r7 + -0xe0000;
    if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x01003974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  else {
    sVar1 = *unaff_r10;
    *(undefined2 *)(unaff_r6 + 0x14) = uVar2;
    puVar4 = (ushort *)((int)unaff_r10 + (int)sVar1);
    iVar3 = unaff_r7 + -0xa0000;
    if (iVar3 != 0 && 0x9ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0100395c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar4;
  return iVar3 >> 0x10;
}


// 0x01003978  m68k_dbra

int m68k_dispatch_01003978(void)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  iVar3 = *(ushort *)(unaff_r6 + 0x18) - 1;
  uVar2 = (undefined2)iVar3;
  if (iVar3 < 0) {
    *(undefined2 *)(unaff_r6 + 0x18) = uVar2;
    puVar4 = (ushort *)(unaff_r10 + 1);
    iVar3 = unaff_r7 + -0xe0000;
    if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010039b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  else {
    sVar1 = *unaff_r10;
    *(undefined2 *)(unaff_r6 + 0x18) = uVar2;
    puVar4 = (ushort *)((int)unaff_r10 + (int)sVar1);
    iVar3 = unaff_r7 + -0xa0000;
    if (iVar3 != 0 && 0x9ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0100399c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar4;
  return iVar3 >> 0x10;
}


// 0x010039b8  m68k_dbra

int m68k_dispatch_010039b8(void)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r7;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar4;
  
  iVar3 = *(ushort *)(unaff_r6 + 0x1c) - 1;
  uVar2 = (undefined2)iVar3;
  if (iVar3 < 0) {
    *(undefined2 *)(unaff_r6 + 0x1c) = uVar2;
    puVar4 = (ushort *)(unaff_r10 + 1);
    iVar3 = unaff_r7 + -0xe0000;
    if (iVar3 != 0 && 0xdffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010039f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  else {
    sVar1 = *unaff_r10;
    *(undefined2 *)(unaff_r6 + 0x1c) = uVar2;
    puVar4 = (ushort *)((int)unaff_r10 + (int)sVar1);
    iVar3 = unaff_r7 + -0xa0000;
    if (iVar3 != 0 && 0x9ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x010039dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar4 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar3;
  *(ushort **)(unaff_r6 + 0x44) = puVar4;
  return iVar3 >> 0x10;
}


// 0x01003c1c  m68k_bra

int m68k_dispatch_01003c1c(void)

{
  int unaff_r6;
  int unaff_r7;
  int iVar1;
  int unaff_r9;
  int unaff_r10;
  ushort *puVar2;
  uint unaff_r11;
  
  puVar2 = (ushort *)(unaff_r10 + (unaff_r11 & 0xff));
  iVar1 = unaff_r7 + -0xa0000;
  if (iVar1 == 0 || unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = puVar2;
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*puVar2 * 4))();
  return iVar1;
}


// 0x01003c34  m68k_bra

int m68k_dispatch_01003c34(void)

{
  int unaff_r6;
  int unaff_r7;
  int iVar1;
  int unaff_r9;
  int unaff_r10;
  char unaff_r11;
  
  iVar1 = unaff_r7 + -0xa0000;
  if (iVar1 == 0 || unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = (ushort *)(unaff_r10 + unaff_r11);
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + unaff_r11) * 4))();
  return iVar1;
}


// 0x01003c54  m68k_bra

int m68k_dispatch_01003c54(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  
  sVar1 = *unaff_r10;
  iVar2 = unaff_r7 + -0xa0000;
  if (iVar2 == 0 || unaff_r7 < 0xa0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar2;
    *(ushort **)(unaff_r6 + 0x44) = (ushort *)((int)unaff_r10 + (int)sVar1);
    return iVar2 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x01003c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(unaff_r9 + (uint)*(ushort *)((int)unaff_r10 + (int)sVar1) * 4))();
  return iVar2;
}


// 0x01003c6c  m68k_bsr

int m68k_dispatch_01003c6c(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int unaff_r6;
  int unaff_r7;
  int iVar4;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  ushort *puVar5;
  ushort *puVar6;
  uint unaff_r11;
  
  uVar1 = unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c);
  uVar2 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar2;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
  puVar5 = (ushort *)(unaff_r10 + (char)unaff_r11);
  iVar4 = unaff_r7 + -0x120000;
  puVar6 = puVar5;
  if (iVar4 != 0 && 0x11ffff < unaff_r7) {
    puVar6 = puVar5 + 1;
    unaff_r11 = (uint)*puVar5;
  }
  *puVar3 = (short)(uVar1 >> 0x10);
  puVar3[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x01003cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x11ffff < unaff_r7) {
    iVar4 = (**(code **)(unaff_r9 + unaff_r11 * 4))();
    return iVar4;
  }
  *(int *)(unaff_r6 + 0x4c) = iVar4;
  *(ushort **)(unaff_r6 + 0x44) = puVar6;
  return iVar4 >> 0x10;
}


// 0x01003cb4  m68k_bsr

int m68k_dispatch_01003cb4(void)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int unaff_r6;
  int unaff_r7;
  int iVar4;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar5;
  ushort *puVar6;
  uint unaff_r11;
  
  uVar1 = (int)unaff_r10 + (2 - *(int *)(unaff_r6 + 0x54)) | *(uint *)(unaff_r6 + 0x9c);
  uVar2 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar2;
  puVar5 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
  iVar4 = unaff_r7 + -0x120000;
  puVar6 = puVar5;
  if (iVar4 != 0 && 0x11ffff < unaff_r7) {
    puVar6 = puVar5 + 1;
    unaff_r11 = (uint)*puVar5;
  }
  puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
  *puVar3 = (short)(uVar1 >> 0x10);
  puVar3[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x01003cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (iVar4 != 0 && 0x11ffff < unaff_r7) {
    iVar4 = (**(code **)(unaff_r9 + unaff_r11 * 4))();
    return iVar4;
  }
  *(int *)(unaff_r6 + 0x4c) = iVar4;
  *(ushort **)(unaff_r6 + 0x44) = puVar6;
  return iVar4 >> 0x10;
}


// 0x020052ec  classify_and_rewrite_m68k_short_loop_branch

int FUN_020052ec(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  if (DAT_0b000008 < 0x5a) {
    return 0;
  }
  uVar5 = param_1[-1];
  if (uVar5 >> 0xc != 6) {
    return 0;
  }
  if (uVar5 != 0x60fe) {
    uVar4 = (int)(char)uVar5 & 0xfffffffe;
    if (!CARRY4((uint)param_1,uVar4)) {
switchD_02005354_caseD_5:
      uVar5 = uVar5 & 0xfff | 0xf000;
      iVar3 = 0;
      goto LAB_020053c0;
    }
    uVar1 = *(ushort *)((int)param_1 + uVar4);
    puVar2 = (ushort *)((int)param_1 + uVar4);
    while (puVar7 = puVar2 + 1, param_1 != puVar7) {
      switch(uVar1 >> 0xc) {
      case 0:
        if ((uVar1 & 0xf1c0) != 0x100) {
          if ((uVar1 & 0xffc0) != 0x800) {
            if ((((uVar1 & 0xff00) == 0xc00) || ((uVar1 & 0xff00) == 0x200)) &&
               ((uVar1 & 0xc0) != 0xc0)) {
              puVar7 = puVar2 + 2;
              if ((uVar1 & 0xc0) == 0x80) {
                puVar7 = puVar2 + 3;
              }
              break;
            }
            if ((uVar1 & 0xffc0) != 0x880) goto switchD_02005354_caseD_5;
          }
          puVar7 = puVar2 + 2;
        }
        break;
      case 1:
      case 2:
      case 3:
        if ((uVar1 & 0x180) != 0) goto switchD_02005354_caseD_5;
        break;
      case 4:
        if (uVar1 == 0x4e71) goto LAB_02005468;
        if (((uVar1 & 0xff00) == 0x4a00) && ((uVar1 & 0xc0) != 0xc0)) break;
      default:
        goto switchD_02005354_caseD_5;
      case 0xb:
        if ((uVar1 & 0xf100) != 0xb000) goto switchD_02005354_caseD_5;
      }
      if ((uVar1 & 0x38) == 0x20 || (uVar1 & 0x38) == 0x18) goto switchD_02005354_caseD_5;
      uVar6 = uVar1 >> 3 & 7;
      if (uVar6 < 5) {
        iVar3 = 0;
      }
      else {
        iVar3 = 2;
      }
      if (uVar6 == 7 && (uVar1 & 7) == 1) {
        if (iVar3 == 0) {
          iVar3 = 2;
        }
        else {
          iVar3 = 4;
        }
      }
      puVar7 = (ushort *)(iVar3 + (int)puVar7);
LAB_02005468:
      if (param_1 <= puVar7) goto switchD_02005354_caseD_5;
      uVar1 = *puVar7;
      puVar2 = puVar7;
    }
  }
  uVar5 = uVar5 & 0xfff | 0xa000;
  iVar3 = 1;
LAB_020053c0:
  param_1[-1] = uVar5;
  DAT_0209903c = DAT_0209903c + iVar3;
  return iVar3;
}


// 0x02032400  m68k_dbt

int m68k_dispatch_02032400(void)

{
  int unaff_r6;
  int unaff_r7;
  int iVar1;
  int unaff_r9;
  int unaff_r10;
  
  iVar1 = unaff_r7 + -0xc0000;
  if (iVar1 == 0 || unaff_r7 < 0xc0000) {
    *(int *)(unaff_r6 + 0x4c) = iVar1;
    *(ushort **)(unaff_r6 + 0x44) = (ushort *)(unaff_r10 + 2);
    return iVar1 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x02032410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return iVar1;
}


// 0x02032414  m68k_dbhi

int m68k_dispatch_02032414(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 5) == 0) {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x02032454  m68k_dbls

int m68k_dispatch_02032454(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 5) == 0) {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x02032494  m68k_dbcc

int m68k_dispatch_02032494(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 1) == 0) {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020324d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x020324d4  m68k_dbcs

int m68k_dispatch_020324d4(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 1) == 0) {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x02032514  m68k_dbne

int m68k_dispatch_02032514(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 4) == 0) {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x02032554  m68k_dbeq

int m68k_dispatch_02032554(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 4) == 0) {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x02032594  m68k_dbvc

int m68k_dispatch_02032594(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 2) == 0) {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020325d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x020325d4  m68k_dbvs

int m68k_dispatch_020325d4(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 2) == 0) {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x02032614  m68k_dbpl

int m68k_dispatch_02032614(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 8) == 0) {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x02032654  m68k_dbmi

int m68k_dispatch_02032654(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if ((unaff_r7 & 8) == 0) {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x02032694  m68k_dbge

int m68k_dispatch_02032694(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if (((unaff_r7 ^ unaff_r7 >> 2) & 2) == 0) {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020326d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x020326d8  m68k_dblt

int m68k_dispatch_020326d8(void)

{
  short sVar1;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  
  if (((unaff_r7 ^ unaff_r7 >> 2) & 2) == 0) {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x0203271c  m68k_dbgt

int m68k_dispatch_0203271c(void)

{
  short sVar1;
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  bool bVar4;
  
  bVar4 = (unaff_r7 & 4) == 0;
  if (bVar4) {
    unaff_r5 = unaff_r7 ^ unaff_r7 >> 2;
  }
  if (bVar4 && (unaff_r5 & 2) == 0) {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x02032760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}


// 0x02032764  m68k_dble

int m68k_dispatch_02032764(void)

{
  short sVar1;
  uint unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int iVar2;
  int unaff_r9;
  short *unaff_r10;
  ushort *puVar3;
  uint unaff_r11;
  bool bVar4;
  
  bVar4 = (unaff_r7 & 4) != 0;
  if (!bVar4) {
    unaff_r5 = unaff_r7 ^ unaff_r7 >> 2;
  }
  if (bVar4 || (unaff_r5 & 2) != 0) {
    puVar3 = (ushort *)(unaff_r10 + 1);
    iVar2 = unaff_r7 - 0xc0000;
    if (iVar2 != 0 && 0xbffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  else {
    iVar2 = (unaff_r11 & 7) * 4;
    sVar1 = *(short *)(unaff_r6 + iVar2);
    *(short *)(unaff_r6 + iVar2) = sVar1 + -1;
    if (sVar1 == 0) {
      puVar3 = (ushort *)(unaff_r10 + 1);
      unaff_r7 = unaff_r7 - 0x40000;
    }
    else {
      puVar3 = (ushort *)((int)unaff_r10 + (int)*unaff_r10);
    }
    iVar2 = unaff_r7 - 0xa0000;
    if (iVar2 != 0 && 0x9ffff < (int)unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020327a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar3 * 4))();
      return iVar2;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar2;
  *(ushort **)(unaff_r6 + 0x44) = puVar3;
  return iVar2 >> 0x10;
}

