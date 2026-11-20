/* ARM9 bit tests and tas — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0202cca8  m68k_btst_long

void m68k_dispatch_0202cca8(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x0202ccdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202cce0  m68k_btst_byte

void m68k_dispatch_0202cce0(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x0202cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0202cd14  m68k_btst_long

void m68k_dispatch_0202cd14(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar1 = *piVar2;
  if ((unaff_r11 & 7) == 7) {
    iVar1 = iVar1 + 2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  *piVar2 = iVar1;
  FUN_0100408c();
                    /* WARNING: Could not recover jumptable at 0x0202cd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202cd60  m68k_btst_byte

void m68k_dispatch_0202cd60(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar1 = *piVar2;
  if ((unaff_r11 & 7) == 7) {
    iVar1 = iVar1 + 2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  *piVar2 = iVar1;
  FUN_0100408c();
                    /* WARNING: Could not recover jumptable at 0x0202cda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0202cda8  m68k_btst_long

void m68k_dispatch_0202cda8(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar1 = *piVar2;
  if ((unaff_r11 & 7) == 7) {
    iVar1 = iVar1 + -2;
  }
  else {
    iVar1 = iVar1 + -1;
  }
  *piVar2 = iVar1;
  FUN_0100408c();
                    /* WARNING: Could not recover jumptable at 0x0202cdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202cdf4  m68k_btst_byte

void m68k_dispatch_0202cdf4(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar1 = *piVar2;
  if ((unaff_r11 & 7) == 7) {
    iVar1 = iVar1 + -2;
  }
  else {
    iVar1 = iVar1 + -1;
  }
  *piVar2 = iVar1;
  FUN_0100408c();
                    /* WARNING: Could not recover jumptable at 0x0202ce38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0202ce3c  m68k_btst_long

void m68k_dispatch_0202ce3c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202ce78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202ce7c  m68k_btst_byte

void m68k_dispatch_0202ce7c(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x0202ceb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202ceb8  m68k_btst_long

void m68k_dispatch_0202ceb8(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar1);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar1);
  }
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x0202cf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202cf1c  m68k_btst_byte

void m68k_dispatch_0202cf1c(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  uVar2 = *(ushort *)(unaff_r10 + 2);
  iVar3 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar1);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar1);
  }
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x0202cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202cf7c  m68k_btst_long

void m68k_dispatch_0202cf7c(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_0100408c((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202cfa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202cfac  m68k_btst_byte

void m68k_dispatch_0202cfac(void)

{
  int unaff_r9;
  int unaff_r10;
  
  FUN_0100408c((int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x0202cfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202cfd8  m68k_btst_long

void m68k_dispatch_0202cfd8(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x0202d00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0202d010  m68k_btst_byte

void m68k_dispatch_0202d010(void)

{
  int unaff_r9;
  int unaff_r10;
  
  FUN_0100408c(CONCAT22(*(undefined2 *)(unaff_r10 + 2),*(undefined2 *)(unaff_r10 + 4)));
                    /* WARNING: Could not recover jumptable at 0x0202d040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x0202d044  m68k_btst_long

void m68k_dispatch_0202d044(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202d088  m68k_btst_byte

void m68k_dispatch_0202d088(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  
  FUN_0100408c(((unaff_r10 + 2) - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x0202d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202d0c8  m68k_btst_long

void m68k_dispatch_0202d0c8(void)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  
  piVar2 = (int *)(unaff_r6 + 0x54);
  puVar3 = (uint *)(unaff_r6 + 0x9c);
  uVar4 = *unaff_r10;
  if ((uVar4 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar4 & 0x7000) >> 10;
  if ((uVar4 & 0x800) == 0) {
    iVar5 = (int)*(short *)(unaff_r6 + uVar1);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + uVar1);
  }
  FUN_0100408c(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x0202d130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202d134  m68k_btst_byte

void m68k_dispatch_0202d134(void)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  int iVar5;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  
  piVar2 = (int *)(unaff_r6 + 0x54);
  puVar3 = (uint *)(unaff_r6 + 0x9c);
  uVar4 = *(ushort *)(unaff_r10 + 2);
  if ((uVar4 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar4 & 0x7000) >> 10;
  if ((uVar4 & 0x800) == 0) {
    iVar5 = (int)*(short *)(unaff_r6 + uVar1);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + uVar1);
  }
  FUN_0100408c(((unaff_r10 + 2) - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x0202d198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202d19c  m68k_btst_long

void m68k_dispatch_0202d19c(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x0202d1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0203239c  m68k_btst_long

void m68k_dispatch_0203239c(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x020323c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020323cc  m68k_btst_byte

void m68k_dispatch_020323cc(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x020323f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02032a70  m68k_tas_byte

void m68k_dispatch_02032a70(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) | 0x80;
                    /* WARNING: Could not recover jumptable at 0x02032a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032aa0  m68k_tas_byte

void m68k_dispatch_02032aa0(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02032ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032acc  m68k_tas_byte

void m68k_dispatch_02032acc(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar1 = *piVar2;
  if ((unaff_r11 & 7) == 7) {
    iVar1 = iVar1 + 2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  *piVar2 = iVar1;
  FUN_0100408c();
                    /* WARNING: Could not recover jumptable at 0x02032b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032b0c  m68k_tas_byte

void m68k_dispatch_02032b0c(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar1 = *piVar2;
  if ((unaff_r11 & 7) == 7) {
    iVar1 = iVar1 + -2;
  }
  else {
    iVar1 = iVar1 + -1;
  }
  *piVar2 = iVar1;
  FUN_0100408c();
                    /* WARNING: Could not recover jumptable at 0x02032b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032b4c  m68k_tas_byte

void m68k_dispatch_02032b4c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02032b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02032b80  m68k_tas_byte

void m68k_dispatch_02032b80(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar1);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar1);
  }
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x02032bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02032bd8  m68k_tas_byte

void m68k_dispatch_02032bd8(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_0100408c((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02032bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02032bfc  m68k_tas_byte

void m68k_dispatch_02032bfc(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x02032c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}

