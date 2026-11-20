/* ARM9 move byte — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x02016cf4  m68k_move_byte

void m68k_dispatch_02016cf4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x02016d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02016d80  m68k_move_byte

void m68k_dispatch_02016d80(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4);
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x02016e14  m68k_move_byte

void m68k_dispatch_02016e14(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar3 = unaff_r11 & 0xe00;
  uVar2 = *(uint *)(unaff_r6 + 0x20 + (uVar3 >> 7));
  if (uVar3 == 0xe00) {
    iVar4 = uVar2 + 2;
  }
  else {
    iVar4 = uVar2 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + (uVar3 >> 7)) = iVar4;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02016ec8  m68k_move_byte

void m68k_dispatch_02016ec8(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar4 = unaff_r11 & 0xe00;
  iVar2 = *(int *)(unaff_r6 + 0x20 + (uVar4 >> 7));
  if (uVar4 == 0xe00) {
    uVar3 = iVar2 - 2;
  }
  else {
    uVar3 = iVar2 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + (uVar4 >> 7)) = uVar3;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02016f7c  m68k_move_byte

void m68k_dispatch_02016f7c(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4);
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x02017028  m68k_move_byte

void m68k_dispatch_02017028(void)

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
  uVar2 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
       *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4);
  return;
}


// 0x02017140  m68k_move_byte

void m68k_dispatch_02017140(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (uint)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4);
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x020171bc  m68k_move_byte

void m68k_dispatch_020171bc(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = CONCAT22(*unaff_r10,unaff_r10[1]);
  if (0xdf < (*unaff_r10 & 0xf0)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4);
    return;
  }
  uVar1 = uVar1 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar1 >> 0x10])(uVar1);
  return;
}


// 0x02017824  m68k_move_byte

void m68k_dispatch_02017824(void)

{
  undefined1 uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02017858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020178cc  m68k_move_byte

void m68k_dispatch_020178cc(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201797c  m68k_move_byte

void m68k_dispatch_0201797c(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar4 = uVar2 + 2;
  }
  else {
    uVar4 = uVar2 + 1;
  }
  *puVar3 = uVar4;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02017a58  m68k_move_byte

void m68k_dispatch_02017a58(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar3 = uVar2;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02017b34  m68k_move_byte

void m68k_dispatch_02017b34(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)*unaff_r10;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x02017bfc  m68k_move_byte

void m68k_dispatch_02017bfc(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar4;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x02017d30  m68k_move_byte

void m68k_dispatch_02017d30(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = (uint)*unaff_r10;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x02017dc8  m68k_move_byte

void m68k_dispatch_02017dc8(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = CONCAT22(*unaff_r10,unaff_r10[1]);
  if (0xdf < (*unaff_r10 & 0xf0)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  uVar2 = uVar2 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar2 >> 0x10])(uVar2);
  return;
}


// 0x02017e78  m68k_move_byte

void m68k_dispatch_02017e78(void)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar3;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  *piVar3 = iVar2;
  uVar1 = FUN_0100408c();
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02017ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02017f4c  m68k_move_byte

void m68k_dispatch_02017f4c(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  uVar3 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02018028  m68k_move_byte

void m68k_dispatch_02018028(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar5;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar6 = uVar3 + 2;
  }
  else {
    uVar6 = uVar3 + 1;
  }
  *puVar5 = uVar6;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02018130  m68k_move_byte

void m68k_dispatch_02018130(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar5;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar3 = uVar3 - 2;
  }
  else {
    uVar3 = uVar3 - 1;
  }
  *puVar5 = uVar3;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02018238  m68k_move_byte

void m68k_dispatch_02018238(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)*unaff_r10;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201832c  m68k_move_byte

void m68k_dispatch_0201832c(void)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar5 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar3 = *piVar5;
  if ((unaff_r11 & 7) == 7) {
    iVar3 = iVar3 + 2;
  }
  else {
    iVar3 = iVar3 + 1;
  }
  *piVar5 = iVar3;
  uVar2 = FUN_0100408c();
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
  uVar4 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar3;
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x0201848c  m68k_move_byte

void m68k_dispatch_0201848c(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  uVar3 = (uint)*unaff_r10;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02018514  m68k_move_byte

void m68k_dispatch_02018514(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  uVar3 = CONCAT22(*unaff_r10,unaff_r10[1]);
  if ((*unaff_r10 & 0xf0) < 0xe0) {
    uVar3 = uVar3 & 0xffffff;
    (*(code *)(&DAT_0b000e1c)[uVar3 >> 0x10])(uVar3);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x020185f0  m68k_move_byte

void m68k_dispatch_020185f0(void)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar3;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  *piVar3 = iVar2;
  uVar1 = FUN_0100408c();
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02018638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020186c4  m68k_move_byte

void m68k_dispatch_020186c4(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  uVar3 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x020187a0  m68k_move_byte

void m68k_dispatch_020187a0(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar5;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar6 = uVar3 + 2;
  }
  else {
    uVar6 = uVar3 + 1;
  }
  *puVar5 = uVar6;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x020188a8  m68k_move_byte

void m68k_dispatch_020188a8(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar5;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar3 = uVar3 - 2;
  }
  else {
    uVar3 = uVar3 - 1;
  }
  *puVar5 = uVar3;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x020189b0  m68k_move_byte

void m68k_dispatch_020189b0(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)*unaff_r10;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02018aa4  m68k_move_byte

void m68k_dispatch_02018aa4(void)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar5 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar3 = *piVar5;
  if ((unaff_r11 & 7) == 7) {
    iVar3 = iVar3 + -2;
  }
  else {
    iVar3 = iVar3 + -1;
  }
  *piVar5 = iVar3;
  uVar2 = FUN_0100408c();
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
  uVar4 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar3;
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x02018c04  m68k_move_byte

void m68k_dispatch_02018c04(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  uVar3 = (uint)*unaff_r10;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02018cc8  m68k_move_byte

void m68k_dispatch_02018cc8(void)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar4;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  *piVar4 = iVar2;
  uVar1 = FUN_0100408c();
  uVar3 = CONCAT22(*unaff_r10,unaff_r10[1]);
  if ((*unaff_r10 & 0xf0) < 0xe0) {
    uVar3 = uVar3 & 0xffffff;
    (*(code *)(&DAT_0b000e1c)[uVar3 >> 0x10])(uVar3);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02018da4  m68k_move_byte

void m68k_dispatch_02018da4(void)

{
  undefined1 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02018de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02018e2c  m68k_move_byte

void m68k_dispatch_02018e2c(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar2 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x02018ef4  m68k_move_byte

void m68k_dispatch_02018ef4(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar4 = uVar2 + 2;
  }
  else {
    uVar4 = uVar2 + 1;
  }
  *puVar3 = uVar4;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02018fe8  m68k_move_byte

void m68k_dispatch_02018fe8(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar3 = uVar2;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x020190dc  m68k_move_byte

void m68k_dispatch_020190dc(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar2 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)unaff_r10[1];
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x020191bc  m68k_move_byte

void m68k_dispatch_020191bc(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar1 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar4;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x02019308  m68k_move_byte

void m68k_dispatch_02019308(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar2 = (uint)unaff_r10[1];
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x020193b8  m68k_move_byte

void m68k_dispatch_020193b8(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar2 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if (0xdf < (unaff_r10[1] & 0xf0U)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  uVar2 = uVar2 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar2 >> 0x10])(uVar2);
  return;
}


// 0x02019480  m68k_move_byte

void m68k_dispatch_02019480(void)

{
  uint uVar1;
  ushort uVar2;
  undefined1 uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar1);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar1);
  }
  uVar3 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4);
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x020194e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020195ac  m68k_move_byte

void m68k_dispatch_020195ac(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar4);
  uVar3 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x020196e0  m68k_move_byte

void m68k_dispatch_020196e0(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar4);
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar5;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar6 = uVar3 + 2;
  }
  else {
    uVar6 = uVar3 + 1;
  }
  *puVar5 = uVar6;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x02019840  m68k_move_byte

void m68k_dispatch_02019840(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar4);
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar5;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar3 = uVar3 - 2;
  }
  else {
    uVar3 = uVar3 - 1;
  }
  *puVar5 = uVar3;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x020199a0  m68k_move_byte

void m68k_dispatch_020199a0(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar4);
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(short)unaff_r10[1];
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x02019aec  m68k_move_byte

void m68k_dispatch_02019aec(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar4);
  uVar1 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar4;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x02019ca4  m68k_move_byte

void m68k_dispatch_02019ca4(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar4);
  uVar3 = (uint)(short)unaff_r10[1];
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x02019dc0  m68k_move_byte

void m68k_dispatch_02019dc0(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar4);
  uVar3 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xf0) < 0xe0) {
    uVar3 = uVar3 & 0xffffff;
    (*(code *)(&DAT_0b000e1c)[uVar3 >> 0x10])(uVar3);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x02019ef4  m68k_move_byte

void m68k_dispatch_02019ef4(void)

{
  undefined1 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c((int)*unaff_r10);
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02019f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02019f84  m68k_move_byte

void m68k_dispatch_02019f84(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c((int)*unaff_r10);
  uVar2 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201a01c  m68k_move_byte

void m68k_dispatch_0201a01c(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c((int)*unaff_r10);
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar4 = uVar2 + 2;
  }
  else {
    uVar4 = uVar2 + 1;
  }
  *puVar3 = uVar4;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201a0e0  m68k_move_byte

void m68k_dispatch_0201a0e0(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c((int)*unaff_r10);
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar3 = uVar2;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201a168  m68k_move_byte

void m68k_dispatch_0201a168(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c((int)*unaff_r10);
  uVar2 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)unaff_r10[1];
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201a218  m68k_move_byte

void m68k_dispatch_0201a218(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = FUN_0100408c((int)*unaff_r10);
  uVar1 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar4;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x0201a334  m68k_move_byte

void m68k_dispatch_0201a334(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r8;
  short *unaff_r10;
  
  uVar1 = FUN_0100408c((int)*unaff_r10);
  uVar2 = (uint)unaff_r10[1];
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201a3b4  m68k_move_byte

void m68k_dispatch_0201a3b4(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r8;
  short *unaff_r10;
  
  uVar1 = FUN_0100408c((int)*unaff_r10);
  uVar2 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if (0xdf < (unaff_r10[1] & 0xf0U)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  uVar2 = uVar2 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar2 >> 0x10])(uVar2);
  return;
}


// 0x0201a44c  m68k_move_byte

void m68k_dispatch_0201a44c(void)

{
  undefined1 uVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201a480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201a4b8  m68k_move_byte

void m68k_dispatch_0201a4b8(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar2 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201a568  m68k_move_byte

void m68k_dispatch_0201a568(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar4 = uVar2 + 2;
  }
  else {
    uVar4 = uVar2 + 1;
  }
  *puVar3 = uVar4;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201a644  m68k_move_byte

void m68k_dispatch_0201a644(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_r6;
  int unaff_r8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar3 = uVar2;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201a720  m68k_move_byte

void m68k_dispatch_0201a720(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar2 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(short)unaff_r10[2];
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201a7e8  m68k_move_byte

void m68k_dispatch_0201a7e8(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar2 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar1 = unaff_r10[2];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar4;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x0201a91c  m68k_move_byte

void m68k_dispatch_0201a91c(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r8;
  undefined2 *unaff_r10;
  
  uVar1 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar2 = (uint)(short)unaff_r10[2];
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201a9b4  m68k_move_byte

void m68k_dispatch_0201a9b4(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r8;
  undefined2 *unaff_r10;
  
  uVar1 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar2 = CONCAT22(unaff_r10[2],unaff_r10[3]);
  if (0xdf < (unaff_r10[2] & 0xf0)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  uVar2 = uVar2 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar2 >> 0x10])(uVar2);
  return;
}


// 0x0201aa64  m68k_move_byte

void m68k_dispatch_0201aa64(void)

{
  undefined1 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201aaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201ab30  m68k_move_byte

void m68k_dispatch_0201ab30(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar2 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201ac04  m68k_move_byte

void m68k_dispatch_0201ac04(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar4 = uVar2 + 2;
  }
  else {
    uVar4 = uVar2 + 1;
  }
  *puVar3 = uVar4;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201ad04  m68k_move_byte

void m68k_dispatch_0201ad04(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar3 = uVar2;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201ae04  m68k_move_byte

void m68k_dispatch_0201ae04(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar2 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)unaff_r10[1];
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201aef0  m68k_move_byte

void m68k_dispatch_0201aef0(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar1 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar4;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x0201b048  m68k_move_byte

void m68k_dispatch_0201b048(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  
  uVar1 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar2 = (uint)unaff_r10[1];
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0201b104  m68k_move_byte

void m68k_dispatch_0201b104(void)

{
  undefined1 uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  
  uVar1 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar2 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if (0xdf < (unaff_r10[1] & 0xf0U)) {
    *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
    return;
  }
  uVar2 = uVar2 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar2 >> 0x10])(uVar2);
  return;
}


// 0x0201b1d8  m68k_move_byte

void m68k_dispatch_0201b1d8(void)

{
  uint uVar1;
  ushort uVar2;
  undefined1 uVar3;
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
  uVar3 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar4);
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0201b240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201b31c  m68k_move_byte

void m68k_dispatch_0201b31c(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar1 + iVar4);
  uVar3 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x0201b468  m68k_move_byte

void m68k_dispatch_0201b468(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar1 + iVar4);
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar5;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar6 = uVar3 + 2;
  }
  else {
    uVar6 = uVar3 + 1;
  }
  *puVar5 = uVar6;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x0201b5e0  m68k_move_byte

void m68k_dispatch_0201b5e0(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar1 + iVar4);
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar5;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar3 = uVar3 - 2;
  }
  else {
    uVar3 = uVar3 - 1;
  }
  *puVar5 = uVar3;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x0201b758  m68k_move_byte

void m68k_dispatch_0201b758(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar1 + iVar4);
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(short)unaff_r10[1];
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x0201b8bc  m68k_move_byte

void m68k_dispatch_0201b8bc(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar2 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar1 + iVar4);
  uVar1 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar3);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar4;
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = uVar2;
  return;
}


// 0x0201ba8c  m68k_move_byte

void m68k_dispatch_0201ba8c(void)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  
  piVar1 = (int *)(unaff_r6 + 0x54);
  puVar2 = (uint *)(unaff_r6 + 0x9c);
  uVar3 = *unaff_r10;
  if ((uVar3 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar5 = (uVar3 & 0x7000) >> 10;
  if ((uVar3 & 0x800) == 0) {
    iVar6 = (int)*(short *)(unaff_r6 + uVar5);
  }
  else {
    iVar6 = *(int *)(unaff_r6 + uVar5);
  }
  uVar4 = FUN_0100408c(((int)unaff_r10 - *piVar1 | *puVar2) + (int)(char)uVar3 + iVar6);
  uVar5 = (uint)(short)unaff_r10[1];
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = uVar4;
  return;
}


// 0x0201bbc0  m68k_move_byte

void m68k_dispatch_0201bbc0(void)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  
  piVar1 = (int *)(unaff_r6 + 0x54);
  puVar2 = (uint *)(unaff_r6 + 0x9c);
  uVar3 = *unaff_r10;
  if ((uVar3 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar5 = (uVar3 & 0x7000) >> 10;
  if ((uVar3 & 0x800) == 0) {
    iVar6 = (int)*(short *)(unaff_r6 + uVar5);
  }
  else {
    iVar6 = *(int *)(unaff_r6 + uVar5);
  }
  uVar4 = FUN_0100408c(((int)unaff_r10 - *piVar1 | *puVar2) + (int)(char)uVar3 + iVar6);
  uVar5 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xf0) < 0xe0) {
    uVar5 = uVar5 & 0xffffff;
    (*(code *)(&DAT_0b000e1c)[uVar5 >> 0x10])(uVar5);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = uVar4;
  return;
}


// 0x0201bd0c  m68k_move_byte

void m68k_dispatch_0201bd0c(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined1 *unaff_r10;
  uint unaff_r11;
  
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0201bd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0201bd98  m68k_move_byte

void m68k_dispatch_0201bd98(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  undefined1 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = *unaff_r10;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x0201be2c  m68k_move_byte

void m68k_dispatch_0201be2c(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  undefined1 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar4 = uVar2 + 2;
  }
  else {
    uVar4 = uVar2 + 1;
  }
  *puVar3 = uVar4;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201beec  m68k_move_byte

void m68k_dispatch_0201beec(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_r6;
  int unaff_r8;
  undefined1 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar3 = uVar2;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201bfac  m68k_move_byte

void m68k_dispatch_0201bfac(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  undefined1 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)*(short *)(unaff_r10 + 2);
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = *unaff_r10;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x0201c058  m68k_move_byte

void m68k_dispatch_0201c058(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r8;
  undefined1 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(ushort *)(unaff_r10 + 2);
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
  uVar2 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = *unaff_r10;
  return;
}


// 0x0201c170  m68k_move_byte

void m68k_dispatch_0201c170(void)

{
  uint uVar1;
  int unaff_r8;
  undefined1 *unaff_r10;
  
  uVar1 = (uint)*(short *)(unaff_r10 + 2);
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = *unaff_r10;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x0201c1ec  m68k_move_byte

void m68k_dispatch_0201c1ec(void)

{
  uint uVar1;
  int unaff_r8;
  undefined1 *unaff_r10;
  
  uVar1 = CONCAT22(*(ushort *)(unaff_r10 + 2),*(undefined2 *)(unaff_r10 + 4));
  if (0xdf < (*(ushort *)(unaff_r10 + 2) & 0xf0)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = *unaff_r10;
    return;
  }
  uVar1 = uVar1 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar1 >> 0x10])(uVar1);
  return;
}

