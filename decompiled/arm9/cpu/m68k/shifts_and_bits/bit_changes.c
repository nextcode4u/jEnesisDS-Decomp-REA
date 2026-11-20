/* ARM9 bit changes — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0202c00c  m68k_bchg_byte

void m68k_dispatch_0202c00c(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c050  m68k_bchg_byte

void m68k_dispatch_0202c050(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c090  m68k_bchg_byte

void m68k_dispatch_0202c090(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar3 = unaff_r11 & 7;
  uVar4 = *(uint *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    iVar2 = uVar4 + 2;
  }
  else {
    iVar2 = uVar4 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar3 * 4) = iVar2;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c0e4  m68k_bchg_byte

void m68k_dispatch_0202c0e4(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar4 = unaff_r11 & 7;
  uVar5 = *(uint *)(unaff_r6 + 0x20 + uVar4 * 4);
  if (uVar4 == 7) {
    iVar3 = uVar5 + 2;
  }
  else {
    iVar3 = uVar5 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar4 * 4) = iVar3;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c134  m68k_bchg_byte

void m68k_dispatch_0202c134(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = unaff_r11 & 7;
  iVar3 = *(int *)(unaff_r6 + 0x20 + uVar2 * 4);
  if (uVar2 == 7) {
    uVar4 = iVar3 - 2;
  }
  else {
    uVar4 = iVar3 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar2 * 4) = uVar4;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c188  m68k_bchg_byte

void m68k_dispatch_0202c188(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = unaff_r11 & 7;
  iVar4 = *(int *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    uVar5 = iVar4 - 2;
  }
  else {
    uVar5 = iVar4 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar3 * 4) = uVar5;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c1d8  m68k_bchg_byte

void m68k_dispatch_0202c1d8(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c224  m68k_bchg_byte

void m68k_dispatch_0202c224(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c26c  m68k_bchg_byte

void m68k_dispatch_0202c26c(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar4);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar4);
  }
  uVar4 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  bVar2 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar2 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c2dc  m68k_bchg_byte

void m68k_dispatch_0202c2dc(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar5 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar5);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar5);
  }
  uVar5 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4;
  bVar3 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar3 ^ (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c348  m68k_bchg_byte

void m68k_dispatch_0202c348(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = (uint)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c384  m68k_bchg_byte

void m68k_dispatch_0202c384(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar3 = (uint)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c3bc  m68k_bchg_byte

void m68k_dispatch_0202c3bc(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = CONCAT22(uVar1,unaff_r10[1]);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdf < (uVar1 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
         bVar2 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c400  m68k_bchg_byte

void m68k_dispatch_0202c400(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  uVar4 = CONCAT22(uVar2,unaff_r10[2]);
  bVar3 = FUN_0100408c(uVar4);
  if (0xdf < (uVar2 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) = bVar3 ^ (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
  return;
}


// 0x0202c440  m68k_bclr_byte

void m68k_dispatch_0202c440(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c484  m68k_bclr_byte

void m68k_dispatch_0202c484(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c4c4  m68k_bclr_byte

void m68k_dispatch_0202c4c4(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar3 = unaff_r11 & 7;
  uVar4 = *(uint *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    iVar2 = uVar4 + 2;
  }
  else {
    iVar2 = uVar4 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar3 * 4) = iVar2;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c518  m68k_bclr_byte

void m68k_dispatch_0202c518(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar4 = unaff_r11 & 7;
  uVar5 = *(uint *)(unaff_r6 + 0x20 + uVar4 * 4);
  if (uVar4 == 7) {
    iVar3 = uVar5 + 2;
  }
  else {
    iVar3 = uVar5 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar4 * 4) = iVar3;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c568  m68k_bclr_byte

void m68k_dispatch_0202c568(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = unaff_r11 & 7;
  iVar3 = *(int *)(unaff_r6 + 0x20 + uVar2 * 4);
  if (uVar2 == 7) {
    uVar4 = iVar3 - 2;
  }
  else {
    uVar4 = iVar3 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar2 * 4) = uVar4;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c5bc  m68k_bclr_byte

void m68k_dispatch_0202c5bc(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = unaff_r11 & 7;
  iVar4 = *(int *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    uVar5 = iVar4 - 2;
  }
  else {
    uVar5 = iVar4 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar3 * 4) = uVar5;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c60c  m68k_bclr_byte

void m68k_dispatch_0202c60c(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c658  m68k_bclr_byte

void m68k_dispatch_0202c658(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c6a0  m68k_bclr_byte

void m68k_dispatch_0202c6a0(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar4);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar4);
  }
  uVar4 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  bVar2 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar2 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c710  m68k_bclr_byte

void m68k_dispatch_0202c710(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar5 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar5);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar5);
  }
  uVar5 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4;
  bVar3 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar3 & ~(byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c77c  m68k_bclr_byte

void m68k_dispatch_0202c77c(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = (uint)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c7b8  m68k_bclr_byte

void m68k_dispatch_0202c7b8(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar3 = (uint)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c7f0  m68k_bclr_byte

void m68k_dispatch_0202c7f0(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = CONCAT22(uVar1,unaff_r10[1]);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdf < (uVar1 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
         bVar2 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c834  m68k_bclr_byte

void m68k_dispatch_0202c834(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  uVar4 = CONCAT22(uVar2,unaff_r10[2]);
  bVar3 = FUN_0100408c(uVar4);
  if (0xdf < (uVar2 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) = bVar3 & ~(byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
  return;
}


// 0x0202c874  m68k_bset_byte

void m68k_dispatch_0202c874(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c8b8  m68k_bset_byte

void m68k_dispatch_0202c8b8(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c8f8  m68k_bset_byte

void m68k_dispatch_0202c8f8(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar3 = unaff_r11 & 7;
  uVar4 = *(uint *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    iVar2 = uVar4 + 2;
  }
  else {
    iVar2 = uVar4 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar3 * 4) = iVar2;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c94c  m68k_bset_byte

void m68k_dispatch_0202c94c(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar4 = unaff_r11 & 7;
  uVar5 = *(uint *)(unaff_r6 + 0x20 + uVar4 * 4);
  if (uVar4 == 7) {
    iVar3 = uVar5 + 2;
  }
  else {
    iVar3 = uVar5 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar4 * 4) = iVar3;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c99c  m68k_bset_byte

void m68k_dispatch_0202c99c(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = unaff_r11 & 7;
  iVar3 = *(int *)(unaff_r6 + 0x20 + uVar2 * 4);
  if (uVar2 == 7) {
    uVar4 = iVar3 - 2;
  }
  else {
    uVar4 = iVar3 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar2 * 4) = uVar4;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c9f0  m68k_bset_byte

void m68k_dispatch_0202c9f0(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = unaff_r11 & 7;
  iVar4 = *(int *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    uVar5 = iVar4 - 2;
  }
  else {
    uVar5 = iVar4 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar3 * 4) = uVar5;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202ca40  m68k_bset_byte

void m68k_dispatch_0202ca40(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202ca8c  m68k_bset_byte

void m68k_dispatch_0202ca8c(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202cad4  m68k_bset_byte

void m68k_dispatch_0202cad4(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar4);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar4);
  }
  uVar4 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  bVar2 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar2 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202cb44  m68k_bset_byte

void m68k_dispatch_0202cb44(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar5 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar5);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar5);
  }
  uVar5 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4;
  bVar3 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar3 | (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202cbb0  m68k_bset_byte

void m68k_dispatch_0202cbb0(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = (uint)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202cbec  m68k_bset_byte

void m68k_dispatch_0202cbec(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar3 = (uint)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202cc24  m68k_bset_byte

void m68k_dispatch_0202cc24(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = CONCAT22(uVar1,unaff_r10[1]);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdf < (uVar1 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
         bVar2 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202cc68  m68k_bset_byte

void m68k_dispatch_0202cc68(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  uVar4 = CONCAT22(uVar2,unaff_r10[2]);
  bVar3 = FUN_0100408c(uVar4);
  if (0xdf < (uVar2 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) = bVar3 | (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
  return;
}


// 0x02032258  m68k_bchg_byte

void m68k_dispatch_02032258(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) ^
       1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x0203228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032290  m68k_bchg_byte

void m68k_dispatch_02032290(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) ^ 1 << (*unaff_r10 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x020322c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020322c4  m68k_bclr_byte

void m68k_dispatch_020322c4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) &
       ~(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 0x1f));
                    /* WARNING: Could not recover jumptable at 0x020322f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020322fc  m68k_bclr_byte

void m68k_dispatch_020322fc(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) & ~(1 << (*unaff_r10 & 0x1f));
                    /* WARNING: Could not recover jumptable at 0x0203232c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02032330  m68k_bset_byte

void m68k_dispatch_02032330(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) |
       1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x02032364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032368  m68k_bset_byte

void m68k_dispatch_02032368(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) | 1 << (*unaff_r10 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x02032398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}

