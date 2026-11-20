/* ARM9 subtract — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x0201f298  m68k_sub_byte

void m68k_dispatch_0201f298(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              (uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f2d8  m68k_sub_word

void m68k_dispatch_0201f2d8(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 +
               (uint)*(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4) * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f320  m68k_sub_long

void m68k_dispatch_0201f320(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - *(int *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0201f354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f39c  m68k_sub_word

void m68k_dispatch_0201f39c(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 +
               (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f3e8  m68k_sub_long

void m68k_dispatch_0201f3e8(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) -
       *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0201f420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f424  m68k_sub_byte

void m68k_dispatch_0201f424(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              iVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f46c  m68k_sub_word

void m68k_dispatch_0201f46c(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar2 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + iVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f4b8  m68k_sub_long

void m68k_dispatch_0201f4b8(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201f4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f4f8  m68k_sub_byte

void m68k_dispatch_0201f4f8(void)

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
  iVar1 = FUN_0100408c();
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              iVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f554  m68k_sub_word

void m68k_dispatch_0201f554(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar3 = *piVar3 + 2;
  iVar2 = FUN_010040c4();
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + iVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f5ac  m68k_sub_long

void m68k_dispatch_0201f5ac(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + 4;
  iVar1 = FUN_010040fc();
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201f5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f5f8  m68k_sub_byte

void m68k_dispatch_0201f5f8(void)

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
  iVar1 = FUN_0100408c();
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              iVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f654  m68k_sub_word

void m68k_dispatch_0201f654(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar3 = *piVar3 + -2;
  iVar2 = FUN_010040c4();
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + iVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f6ac  m68k_sub_long

void m68k_dispatch_0201f6ac(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + -4;
  iVar1 = FUN_010040fc();
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201f6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f6f8  m68k_sub_byte

void m68k_dispatch_0201f6f8(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              iVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201f748  m68k_sub_word

void m68k_dispatch_0201f748(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar2 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + iVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201f79c  m68k_sub_long

void m68k_dispatch_0201f79c(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201f7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201f7e4  m68k_sub_byte

void m68k_dispatch_0201f7e4(void)

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
  iVar3 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              iVar3 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201f858  m68k_sub_word

void m68k_dispatch_0201f858(void)

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
  iVar3 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + iVar3 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201f8d0  m68k_sub_long

void m68k_dispatch_0201f8d0(void)

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
  iVar3 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201f938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201f93c  m68k_sub_byte

void m68k_dispatch_0201f93c(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c((int)*unaff_r10);
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              iVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201f97c  m68k_sub_word

void m68k_dispatch_0201f97c(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar2 = FUN_010040c4((int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + iVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201f9c0  m68k_sub_long

void m68k_dispatch_0201f9c0(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc((int)*unaff_r10);
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201f9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201f9f8  m68k_sub_byte

void m68k_dispatch_0201f9f8(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              iVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201fa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201fa40  m68k_sub_word

void m68k_dispatch_0201fa40(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  iVar2 = FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + iVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201fa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201fa8c  m68k_sub_long

void m68k_dispatch_0201fa8c(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201fac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201facc  m68k_sub_byte

void m68k_dispatch_0201facc(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              iVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201fb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201fb20  m68k_sub_word

void m68k_dispatch_0201fb20(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar2 = FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + iVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201fb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201fb78  m68k_sub_long

void m68k_dispatch_0201fb78(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201fbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201fbc4  m68k_sub_byte

void m68k_dispatch_0201fbc4(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar1);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar1);
  }
  iVar3 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar3);
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              iVar3 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201fc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201fc40  m68k_sub_word

void m68k_dispatch_0201fc40(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar1);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar1);
  }
  iVar3 = FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar3);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + iVar3 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201fcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201fcc0  m68k_sub_long

void m68k_dispatch_0201fcc0(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar1);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar1);
  }
  iVar3 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar3);
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201fd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201fd34  m68k_sub_byte

void m68k_dispatch_0201fd34(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              (uint)*unaff_r10 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201fd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0201fd70  m68k_sub_word

void m68k_dispatch_0201fd70(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + (uint)*unaff_r10 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201fdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201fdb0  m68k_sub_long

void m68k_dispatch_0201fdb0(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) - CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x0201fde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201fdec  m68k_sub_byte

void m68k_dispatch_0201fdec(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201fe3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201fe40  m68k_sub_word

void m68k_dispatch_0201fe40(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 +
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201fe94  m68k_sub_long

void m68k_dispatch_0201fe94(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  iVar2 = CONCAT22(*puVar1,puVar1[1]) - *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201fee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201feec  m68k_sub_byte

void m68k_dispatch_0201feec(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar3;
  if ((unaff_r11 & 7) == 7) {
    uVar2 = uVar1 + 2;
  }
  else {
    uVar2 = uVar1 + 1;
  }
  *puVar3 = uVar2;
  pbVar4 = (byte *)(unaff_r8 + (uVar1 & 0xffff) ^ 1);
  *pbVar4 = (byte)((uint)*pbVar4 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201ff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201ff54  m68k_sub_word

void m68k_dispatch_0201ff54(void)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 2;
  puVar3 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  *puVar3 = (ushort)((uint)*puVar3 * 0x10000 +
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201ffb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201ffb4  m68k_sub_long

void m68k_dispatch_0201ffb4(void)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 4;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar1 & 0xffff));
  iVar4 = CONCAT22(*puVar3,puVar3[1]) - *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)((uint)iVar4 >> 0x10);
  puVar3[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x02020014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020018  m68k_sub_byte

void m68k_dispatch_02020018(void)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
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
  pbVar3 = (byte *)(unaff_r8 + (uVar1 & 0xffff) ^ 1);
  *pbVar3 = (byte)((uint)*pbVar3 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0202007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020080  m68k_sub_word

void m68k_dispatch_02020080(void)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2 - 2;
  *puVar2 = uVar1;
  puVar3 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  *puVar3 = (ushort)((uint)*puVar3 * 0x10000 +
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020200dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020200e0  m68k_sub_long

void m68k_dispatch_020200e0(void)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2 - 4;
  *puVar2 = uVar1;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar1 & 0xffff));
  iVar4 = CONCAT22(*puVar3,puVar3[1]) - *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)((uint)iVar4 >> 0x10);
  puVar3[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x02020140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020144  m68k_sub_byte

void m68k_dispatch_02020144(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU) ^
                   1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0202019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020201a0  m68k_sub_word

void m68k_dispatch_020201a0(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 +
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020201f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020201fc  m68k_sub_long

void m68k_dispatch_020201fc(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  iVar2 = CONCAT22(*puVar1,puVar1[1]) - *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x02020258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202025c  m68k_sub_byte

void m68k_dispatch_0202025c(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  int unaff_r6;
  int unaff_r8;
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
  pbVar4 = (byte *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3 &
                    0xffffU) ^ 1);
  *pbVar4 = (byte)((uint)*pbVar4 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x020202d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020202dc  m68k_sub_word

void m68k_dispatch_020202dc(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int unaff_r6;
  int unaff_r8;
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
  puVar4 = (ushort *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3 & 0xffffU));
  *puVar4 = (ushort)((uint)*puVar4 * 0x10000 +
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02020358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202035c  m68k_sub_long

void m68k_dispatch_0202035c(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r8;
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
  puVar4 = (undefined2 *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3 & 0xffffU));
  iVar3 = CONCAT22(*puVar4,puVar4[1]) - *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar4 = (short)((uint)iVar3 >> 0x10);
  puVar4[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x020203dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020203e0  m68k_sub_byte

void m68k_dispatch_020203e0(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02020424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02020428  m68k_sub_word

void m68k_dispatch_02020428(void)

{
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) =
       (ushort)((uint)*(ushort *)((uint)*unaff_r10 + unaff_r8) * 0x10000 +
                (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202046c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02020470  m68k_sub_long

void m68k_dispatch_02020470(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  iVar2 = CONCAT22(*puVar1,puVar1[1]) - *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x020204b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020204bc  m68k_sub_byte

void m68k_dispatch_020204bc(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02020504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02020508  m68k_sub_word

void m68k_dispatch_02020508(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 +
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02020550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02020554  m68k_sub_long

void m68k_dispatch_02020554(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  iVar2 = CONCAT22(*puVar1,puVar1[1]) - *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x020205a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020205a4  m68k_suba_word

void m68k_dispatch_020205a4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) -
       (int)*(short *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x020205cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020205d0  m68k_suba_long

void m68k_dispatch_020205d0(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) -
       *(int *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x020205f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020205f8  m68k_suba_word

void m68k_dispatch_020205f8(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) -
       (int)*(short *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x02020624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020628  m68k_suba_long

void m68k_dispatch_02020628(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) -
       *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x02020650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020654  m68k_suba_word

void m68k_dispatch_02020654(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x02020688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202068c  m68k_suba_long

void m68k_dispatch_0202068c(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x020206b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020206bc  m68k_suba_word

void m68k_dispatch_020206bc(void)

{
  short sVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + 2;
  sVar1 = FUN_010040c4();
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x020206fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020700  m68k_suba_long

void m68k_dispatch_02020700(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + 4;
  iVar1 = FUN_010040fc();
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x02020738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202073c  m68k_suba_word

void m68k_dispatch_0202073c(void)

{
  short sVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + -2;
  sVar1 = FUN_010040c4();
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x0202077c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020780  m68k_suba_long

void m68k_dispatch_02020780(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + -4;
  iVar1 = FUN_010040fc();
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x020207b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020207bc  m68k_suba_word

void m68k_dispatch_020207bc(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x020207f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020207fc  m68k_suba_long

void m68k_dispatch_020207fc(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x02020830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02020834  m68k_suba_word

void m68k_dispatch_02020834(void)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
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
  sVar3 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)sVar3;
                    /* WARNING: Could not recover jumptable at 0x02020894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02020898  m68k_suba_long

void m68k_dispatch_02020898(void)

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
  iVar3 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - iVar3;
                    /* WARNING: Could not recover jumptable at 0x020208f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020208f4  m68k_suba_word

void m68k_dispatch_020208f4(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4((int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x02020920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02020924  m68k_suba_long

void m68k_dispatch_02020924(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc((int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x02020948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202094c  m68k_suba_word

void m68k_dispatch_0202094c(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x02020980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02020984  m68k_suba_long

void m68k_dispatch_02020984(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x020209b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x020209b4  m68k_suba_word

void m68k_dispatch_020209b4(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x020209f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020209f8  m68k_suba_long

void m68k_dispatch_020209f8(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x02020a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02020a34  m68k_suba_word

void m68k_dispatch_02020a34(void)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
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
  sVar3 = FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar4);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)sVar3;
                    /* WARNING: Could not recover jumptable at 0x02020a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02020aa0  m68k_suba_long

void m68k_dispatch_02020aa0(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar1);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar1);
  }
  iVar3 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar3);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - iVar3;
                    /* WARNING: Could not recover jumptable at 0x02020b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02020b04  m68k_suba_word

void m68k_dispatch_02020b04(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - (int)*unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02020b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02020b28  m68k_suba_long

void m68k_dispatch_02020b28(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) - CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x02020b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02020b54  m68k_subq_byte

void m68k_dispatch_02020b54(void)

{
  byte *pbVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + uVar2 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02020ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020bac  m68k_subq_word

void m68k_dispatch_02020bac(void)

{
  ushort *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + uVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02020bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020c00  m68k_subq_long

void m68k_dispatch_02020c00(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  iVar3 = CONCAT22(*puVar1,puVar1[1]) - uVar2;
  *puVar1 = (short)((uint)iVar3 >> 0x10);
  puVar1[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x02020c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020c5c  m68k_subq_byte

void m68k_dispatch_02020c5c(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar3;
  if ((unaff_r11 & 7) == 7) {
    uVar2 = uVar1 + 2;
  }
  else {
    uVar2 = uVar1 + 1;
  }
  *puVar3 = uVar2;
  pbVar4 = (byte *)(unaff_r8 + (uVar1 & 0xffff) ^ 1);
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  *pbVar4 = (byte)((uint)*pbVar4 * 0x1000000 + uVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02020cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020cc8  m68k_subq_word

void m68k_dispatch_02020cc8(void)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 2;
  puVar3 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  *puVar3 = (ushort)((uint)*puVar3 * 0x10000 + uVar1 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02020d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020d28  m68k_subq_long

void m68k_dispatch_02020d28(void)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 4;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar1 & 0xffff));
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  iVar4 = CONCAT22(*puVar3,puVar3[1]) - uVar1;
  *puVar3 = (short)((uint)iVar4 >> 0x10);
  puVar3[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x02020d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020d90  m68k_subq_byte

void m68k_dispatch_02020d90(void)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
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
  pbVar3 = (byte *)(unaff_r8 + (uVar1 & 0xffff) ^ 1);
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  *pbVar3 = (byte)((uint)*pbVar3 * 0x1000000 + uVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02020df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020dfc  m68k_subq_word

void m68k_dispatch_02020dfc(void)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2 - 2;
  *puVar2 = uVar1;
  puVar3 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  *puVar3 = (ushort)((uint)*puVar3 * 0x10000 + uVar1 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02020e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020e5c  m68k_subq_long

void m68k_dispatch_02020e5c(void)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2 - 4;
  *puVar2 = uVar1;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar1 & 0xffff));
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  iVar4 = CONCAT22(*puVar3,puVar3[1]) - uVar1;
  *puVar3 = (short)((uint)iVar4 >> 0x10);
  puVar3[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x02020ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02020ec4  m68k_subq_byte

void m68k_dispatch_02020ec4(void)

{
  byte *pbVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU) ^
                   1);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + uVar2 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02020f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02020f24  m68k_subq_word

void m68k_dispatch_02020f24(void)

{
  ushort *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + uVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02020f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02020f80  m68k_subq_long

void m68k_dispatch_02020f80(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  iVar3 = CONCAT22(*puVar1,puVar1[1]) - uVar2;
  *puVar1 = (short)((uint)iVar3 >> 0x10);
  puVar1[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x02020fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02020fe4  m68k_subq_byte

void m68k_dispatch_02020fe4(void)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar2 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar2 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar2 = (int)*(short *)(iVar2 + uVar4);
  }
  else {
    iVar2 = *(int *)(iVar2 + uVar4);
  }
  pbVar3 = (byte *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar2 &
                    0xffffU) ^ 1);
  uVar4 = unaff_r11 >> 9 & 7;
  if (uVar4 == 0) {
    uVar4 = 8;
  }
  *pbVar3 = (byte)((uint)*pbVar3 * 0x1000000 + uVar4 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02021064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02021068  m68k_subq_word

void m68k_dispatch_02021068(void)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar2 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar2 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar2 = (int)*(short *)(iVar2 + uVar4);
  }
  else {
    iVar2 = *(int *)(iVar2 + uVar4);
  }
  puVar3 = (ushort *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar2 & 0xffffU));
  uVar4 = unaff_r11 >> 9 & 7;
  if (uVar4 == 0) {
    uVar4 = 8;
  }
  *puVar3 = (ushort)((uint)*puVar3 * 0x10000 + uVar4 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020210e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020210e8  m68k_subq_long

void m68k_dispatch_020210e8(void)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar2 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar2 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar2 = (int)*(short *)(iVar2 + uVar4);
  }
  else {
    iVar2 = *(int *)(iVar2 + uVar4);
  }
  puVar3 = (undefined2 *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar2 & 0xffffU));
  uVar4 = unaff_r11 >> 9 & 7;
  if (uVar4 == 0) {
    uVar4 = 8;
  }
  iVar2 = CONCAT22(*puVar3,puVar3[1]) - uVar4;
  *puVar3 = (short)((uint)iVar2 >> 0x10);
  puVar3[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0202116c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02021170  m68k_subq_byte

void m68k_dispatch_02021170(void)

{
  byte *pbVar1;
  uint uVar2;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + uVar2 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x020211b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020211bc  m68k_subq_word

void m68k_dispatch_020211bc(void)

{
  uint uVar1;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  *(ushort *)((uint)*unaff_r10 + unaff_r8) =
       (ushort)((uint)*(ushort *)((uint)*unaff_r10 + unaff_r8) * 0x10000 + uVar1 * -0x10000 >> 0x10)
  ;
                    /* WARNING: Could not recover jumptable at 0x02021200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02021204  m68k_subq_long

void m68k_dispatch_02021204(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  iVar3 = CONCAT22(*puVar1,puVar1[1]) - uVar2;
  *puVar1 = (short)((uint)iVar3 >> 0x10);
  puVar1[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x02021250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02021254  m68k_subq_byte

void m68k_dispatch_02021254(void)

{
  byte *pbVar1;
  uint uVar2;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + uVar2 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x020212a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020212a4  m68k_subq_word

void m68k_dispatch_020212a4(void)

{
  ushort *puVar1;
  uint uVar2;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + uVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020212ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020212f0  m68k_subq_long

void m68k_dispatch_020212f0(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  iVar3 = CONCAT22(*puVar1,puVar1[1]) - uVar2;
  *puVar1 = (short)((uint)iVar3 >> 0x10);
  puVar1[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x02021340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02021344  m68k_subi_byte

void m68k_dispatch_02021344(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       (char)((uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) * 0x1000000 +
              (uint)*unaff_r10 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0202137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02021380  m68k_subi_word

void m68k_dispatch_02021380(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(short *)(unaff_r6 + iVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + iVar1) * 0x10000 + (uint)*unaff_r10 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020213bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020213c0  m68k_subi_long

void m68k_dispatch_020213c0(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) - CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x020213f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x020213fc  m68k_subi_byte

void m68k_dispatch_020213fc(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + (uint)*unaff_r10 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02021448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0202144c  m68k_subi_word

void m68k_dispatch_0202144c(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + (uint)*unaff_r10 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02021494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02021498  m68k_subi_long

void m68k_dispatch_02021498(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  iVar2 = CONCAT22(*puVar1,puVar1[1]) - CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x020214f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x020214f4  m68k_subi_byte

void m68k_dispatch_020214f4(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *unaff_r10;
  puVar4 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar4;
  if ((unaff_r11 & 7) == 7) {
    uVar3 = uVar2 + 2;
  }
  else {
    uVar3 = uVar2 + 1;
  }
  *puVar4 = uVar3;
  pbVar5 = (byte *)(unaff_r8 + (uVar2 & 0xffff) ^ 1);
  *pbVar5 = (byte)((uint)*pbVar5 * 0x1000000 + (uint)bVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02021554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02021558  m68k_subi_word

void m68k_dispatch_02021558(void)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  ushort *puVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3;
  *puVar3 = uVar2 + 2;
  puVar4 = (ushort *)(unaff_r8 + (uVar2 & 0xffff));
  *puVar4 = (ushort)((uint)*puVar4 * 0x10000 + (uint)uVar1 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020215ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020215b0  m68k_subi_long

void m68k_dispatch_020215b0(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  puVar4 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar3 = *puVar4;
  *puVar4 = uVar3 + 4;
  puVar5 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  iVar6 = CONCAT22(*puVar5,puVar5[1]) - CONCAT22(uVar1,uVar2);
  *puVar5 = (short)((uint)iVar6 >> 0x10);
  puVar5[1] = (short)iVar6;
                    /* WARNING: Could not recover jumptable at 0x02021614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02021618  m68k_subi_byte

void m68k_dispatch_02021618(void)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *unaff_r10;
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3;
  if ((unaff_r11 & 7) == 7) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar3 = uVar2;
  pbVar4 = (byte *)(unaff_r8 + (uVar2 & 0xffff) ^ 1);
  *pbVar4 = (byte)((uint)*pbVar4 * 0x1000000 + (uint)bVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02021678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0202167c  m68k_subi_word

void m68k_dispatch_0202167c(void)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  ushort *puVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3 - 2;
  *puVar3 = uVar2;
  puVar4 = (ushort *)(unaff_r8 + (uVar2 & 0xffff));
  *puVar4 = (ushort)((uint)*puVar4 * 0x10000 + (uint)uVar1 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020216d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020216d4  m68k_subi_long

void m68k_dispatch_020216d4(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  puVar4 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar3 = *puVar4 - 4;
  *puVar4 = uVar3;
  puVar5 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  iVar6 = CONCAT22(*puVar5,puVar5[1]) - CONCAT22(uVar1,uVar2);
  *puVar5 = (short)((uint)iVar6 >> 0x10);
  puVar5[1] = (short)iVar6;
                    /* WARNING: Could not recover jumptable at 0x02021738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0202173c  m68k_subi_byte

void m68k_dispatch_0202173c(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) +
                     (int)*(short *)(unaff_r10 + 2) & 0xffffU) ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + (uint)*unaff_r10 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02021790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02021794  m68k_subi_word

void m68k_dispatch_02021794(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(short)unaff_r10[1] & 0xffffU));
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + (uint)*unaff_r10 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020217e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x020217e8  m68k_subi_long

void m68k_dispatch_020217e8(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(short)unaff_r10[2] & 0xffffU));
  iVar2 = CONCAT22(*puVar1,puVar1[1]) - CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x02021848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x0202184c  m68k_subi_byte

void m68k_dispatch_0202184c(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
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
  pbVar4 = (byte *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3 &
                    0xffffU) ^ 1);
  *pbVar4 = (byte)((uint)*pbVar4 * 0x1000000 + (uint)*unaff_r10 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x020218c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020218c8  m68k_subi_word

void m68k_dispatch_020218c8(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = unaff_r10[1];
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
  puVar4 = (ushort *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3 & 0xffffU));
  *puVar4 = (ushort)((uint)*puVar4 * 0x10000 + (uint)*unaff_r10 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202193c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x02021940  m68k_subi_long

void m68k_dispatch_02021940(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar2 = unaff_r10[2];
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
  puVar4 = (undefined2 *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3 & 0xffffU));
  iVar3 = CONCAT22(*puVar4,puVar4[1]) - CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar4 = (short)((uint)iVar3 >> 0x10);
  puVar4[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x020219c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x020219c8  m68k_subi_byte

void m68k_dispatch_020219c8(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + (uint)*unaff_r10 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02021a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02021a0c  m68k_subi_word

void m68k_dispatch_02021a0c(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[1] + unaff_r8) =
       (ushort)((uint)*(ushort *)((uint)unaff_r10[1] + unaff_r8) * 0x10000 +
                (uint)*unaff_r10 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02021a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x02021a4c  m68k_subi_long

void m68k_dispatch_02021a4c(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[2] + unaff_r8);
  iVar2 = CONCAT22(*puVar1,puVar1[1]) - CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x02021a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x02021a9c  m68k_subi_byte

void m68k_dispatch_02021a9c(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 4) + unaff_r8 ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + (uint)*unaff_r10 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02021ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x02021ae4  m68k_subi_word

void m68k_dispatch_02021ae4(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[2] + unaff_r8) =
       (ushort)((uint)*(ushort *)((uint)unaff_r10[2] + unaff_r8) * 0x10000 +
                (uint)*unaff_r10 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02021b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[3] * 4))();
  return;
}


// 0x02021b28  m68k_subi_long

void m68k_dispatch_02021b28(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[3] + unaff_r8);
  iVar2 = CONCAT22(*puVar1,puVar1[1]) - CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x02021b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[4] * 4))();
  return;
}


// 0x020305e8  m68k_subq_byte

void m68k_dispatch_020305e8(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  *(char *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       (char)((uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) * 0x1000000 + uVar1 * -0x1000000 >>
             0x18);
                    /* WARNING: Could not recover jumptable at 0x02030628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0203062c  m68k_subq_word

void m68k_dispatch_0203062c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *(short *)(unaff_r6 + iVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + iVar1) * 0x10000 + uVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02030670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030674  m68k_subq_long

void m68k_dispatch_02030674(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) - uVar1;
                    /* WARNING: Could not recover jumptable at 0x020306ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020306b0  m68k_subq_word_or_subq_long

void m68k_dispatch_020306b0(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) =
       *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) - uVar1;
                    /* WARNING: Could not recover jumptable at 0x020306d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020306dc  m68k_subx_byte

void m68k_dispatch_020306dc(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar3 = unaff_r11 & 0xe00;
  uVar2 = (uint)*(byte *)(unaff_r6 + (uVar3 >> 7));
  if ((unaff_r7 & 0x10) == 0) {
    *(char *)(unaff_r6 + (uVar3 >> 7)) = (char)(uVar2 * 0x1000000 + uVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02030720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(char *)(unaff_r6 + (uVar3 >> 7)) =
       (char)(uVar2 * 0x1000000 + -0x1000000 + uVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02030768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0203076c  m68k_subx_word

void m68k_dispatch_0203076c(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = (uint)*(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  if ((unaff_r7 & 0x10) == 0) {
    *(short *)(unaff_r6 + uVar1) =
         (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + uVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020307b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 + -0x10000 + uVar2 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02030800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030804  m68k_subx_long

void m68k_dispatch_02030804(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = *(int *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar3 = unaff_r11 & 0xe00;
  iVar2 = *(int *)(unaff_r6 + (uVar3 >> 7));
  if ((unaff_r7 & 0x10) == 0) {
    *(int *)(unaff_r6 + (uVar3 >> 7)) = iVar2 - iVar1;
                    /* WARNING: Could not recover jumptable at 0x02030840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(int *)(unaff_r6 + (uVar3 >> 7)) = (iVar2 + -1) - iVar1;
                    /* WARNING: Could not recover jumptable at 0x02030880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030884  m68k_subx_byte

void m68k_dispatch_02030884(void)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar5 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar5;
  iVar4 = unaff_r8;
  if ((uVar1 & 0xc00000) == 0) {
    iVar4 = *(int *)(unaff_r6 + 0x60);
  }
  if ((unaff_r11 & 7) == 7) {
    uVar1 = uVar1 - 2;
  }
  else {
    uVar1 = uVar1 - 1;
  }
  *puVar5 = uVar1;
  if ((uVar1 & 0xc00000) == 0) {
    uVar1 = uVar1 & 0x3fffff;
  }
  else {
    uVar1 = uVar1 & 0xffff;
  }
  uVar1 = (uint)*(byte *)(iVar4 + uVar1 ^ 1);
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (puVar5 == (uint *)0xe00) {
    uVar2 = *puVar5 - 2;
  }
  else {
    uVar2 = *puVar5 - 1;
  }
  *puVar5 = uVar2;
  pbVar3 = (byte *)(unaff_r8 + (uVar2 & 0xffff) ^ 1);
  if ((unaff_r7 & 0x10) != 0) {
    *pbVar3 = (byte)((uint)*pbVar3 * 0x1000000 + -0x1000000 + uVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02030974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *pbVar3 = (byte)((uint)*pbVar3 * 0x1000000 + uVar1 * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0203092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030978  m68k_subx_word

void m68k_dispatch_02030978(void)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  uint *puVar5;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar5 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar5;
  iVar4 = unaff_r8;
  if ((uVar2 & 0xc00000) == 0) {
    iVar4 = *(int *)(unaff_r6 + 0x60);
  }
  uVar2 = uVar2 - 2;
  *puVar5 = uVar2;
  if ((uVar2 & 0xc00000) == 0) {
    uVar2 = uVar2 & 0x3fffff;
  }
  else {
    uVar2 = uVar2 & 0xffff;
  }
  uVar1 = *(ushort *)(iVar4 + uVar2);
  puVar5 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar5 - 2;
  *puVar5 = uVar2;
  puVar3 = (ushort *)(unaff_r8 + (uVar2 & 0xffff));
  if ((unaff_r7 & 0x10) != 0) {
    *puVar3 = (ushort)((uint)*puVar3 * 0x10000 + -0x10000 + (uint)uVar1 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02030a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *puVar3 = (ushort)((uint)*puVar3 * 0x10000 + (uint)uVar1 * -0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02030a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030a54  m68k_subx_long

void m68k_dispatch_02030a54(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint *puVar6;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar6 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar3 = *puVar6;
  iVar4 = unaff_r8;
  if ((uVar3 & 0xc00000) == 0) {
    iVar4 = *(int *)(unaff_r6 + 0x60);
  }
  uVar3 = uVar3 - 4;
  *puVar6 = uVar3;
  if ((uVar3 & 0xc00000) == 0) {
    uVar3 = uVar3 & 0x3fffff;
  }
  else {
    uVar3 = uVar3 & 0xffff;
  }
  uVar1 = *(undefined2 *)(iVar4 + uVar3);
  uVar2 = ((undefined2 *)(iVar4 + uVar3))[1];
  puVar6 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar6 - 4;
  *puVar6 = uVar3;
  puVar5 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  iVar4 = CONCAT22(uVar1,uVar2);
  if ((unaff_r7 & 0x10) != 0) {
    iVar4 = (CONCAT22(*puVar5,puVar5[1]) + -1) - iVar4;
    *puVar5 = (short)((uint)iVar4 >> 0x10);
    puVar5[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x02030b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  iVar4 = CONCAT22(*puVar5,puVar5[1]) - iVar4;
  *puVar5 = (short)((uint)iVar4 >> 0x10);
  puVar5[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x02030af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

