/* ARM9 add — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x01003f64  m68k_addq_word

void m68k_dispatch_01003f64(void)

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
       (ushort)((uint)*(ushort *)((uint)*unaff_r10 + unaff_r8) * 0x10000 + uVar1 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x01003fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201ca30  m68k_add_byte

void m68k_dispatch_0201ca30(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) * 0x1000000 +
              (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201ca6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201ca70  m68k_add_word

void m68k_dispatch_0201ca70(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4) * 0x10000 +
               (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201cab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cab8  m68k_add_long

void m68k_dispatch_0201cab8(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201caec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cb34  m68k_add_word

void m68k_dispatch_0201cb34(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) * 0x10000 +
               (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201cb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cb80  m68k_add_long

void m68k_dispatch_0201cb80(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) +
       *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201cbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cbbc  m68k_add_byte

void m68k_dispatch_0201cbbc(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)(iVar1 * 0x1000000 + (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000
             >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201cc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cc04  m68k_add_word

void m68k_dispatch_0201cc04(void)

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
       (short)(iVar2 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201cc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cc50  m68k_add_long

void m68k_dispatch_0201cc50(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201cc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cc90  m68k_add_byte

void m68k_dispatch_0201cc90(void)

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
       (char)(iVar1 * 0x1000000 + (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000
             >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201cce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201ccec  m68k_add_word

void m68k_dispatch_0201ccec(void)

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
       (short)(iVar2 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201cd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cd44  m68k_add_long

void m68k_dispatch_0201cd44(void)

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
       iVar1 + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201cd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cd90  m68k_add_byte

void m68k_dispatch_0201cd90(void)

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
       (char)(iVar1 * 0x1000000 + (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000
             >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201cde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201cdec  m68k_add_word

void m68k_dispatch_0201cdec(void)

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
       (short)(iVar2 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201ce40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201ce44  m68k_add_long

void m68k_dispatch_0201ce44(void)

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
       iVar1 + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201ce8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201ce90  m68k_add_byte

void m68k_dispatch_0201ce90(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)(iVar1 * 0x1000000 + (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000
             >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201cedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201cee0  m68k_add_word

void m68k_dispatch_0201cee0(void)

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
       (short)(iVar2 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201cf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201cf34  m68k_add_long

void m68k_dispatch_0201cf34(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201cf7c  m68k_add_byte

void m68k_dispatch_0201cf7c(void)

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
       (char)(iVar3 * 0x1000000 + (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000
             >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201cfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201cff0  m68k_add_word

void m68k_dispatch_0201cff0(void)

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
       (short)(iVar3 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201d068  m68k_add_long

void m68k_dispatch_0201d068(void)

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
       iVar3 + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201d0d4  m68k_add_byte

void m68k_dispatch_0201d0d4(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c((int)*unaff_r10);
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)(iVar1 * 0x1000000 + (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000
             >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201d114  m68k_add_word

void m68k_dispatch_0201d114(void)

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
       (short)(iVar2 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201d158  m68k_add_long

void m68k_dispatch_0201d158(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc((int)*unaff_r10);
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201d18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201d190  m68k_add_byte

void m68k_dispatch_0201d190(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)(iVar1 * 0x1000000 + (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000
             >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201d1d8  m68k_add_word

void m68k_dispatch_0201d1d8(void)

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
       (short)(iVar2 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201d224  m68k_add_long

void m68k_dispatch_0201d224(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201d260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201d264  m68k_add_byte

void m68k_dispatch_0201d264(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)(iVar1 * 0x1000000 + (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000
             >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201d2b8  m68k_add_word

void m68k_dispatch_0201d2b8(void)

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
       (short)(iVar2 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201d310  m68k_add_long

void m68k_dispatch_0201d310(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201d358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201d35c  m68k_add_byte

void m68k_dispatch_0201d35c(void)

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
       (char)(iVar3 * 0x1000000 + (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000
             >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201d3d8  m68k_add_word

void m68k_dispatch_0201d3d8(void)

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
       (short)(iVar3 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201d458  m68k_add_long

void m68k_dispatch_0201d458(void)

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
       iVar3 + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201d4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201d4cc  m68k_add_byte

void m68k_dispatch_0201d4cc(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*unaff_r10 * 0x1000000 +
              (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0201d508  m68k_add_word

void m68k_dispatch_0201d508(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(short *)(unaff_r6 + uVar1) =
       (short)((uint)*unaff_r10 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201d548  m68k_add_long

void m68k_dispatch_0201d548(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       CONCAT22(*unaff_r10,unaff_r10[1]) + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201d580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201d584  m68k_add_byte

void m68k_dispatch_0201d584(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201d5d8  m68k_add_word

void m68k_dispatch_0201d5d8(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 +
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201d62c  m68k_add_long

void m68k_dispatch_0201d62c(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  iVar2 = CONCAT22(*puVar1,puVar1[1]) + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201d680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201d684  m68k_add_byte

void m68k_dispatch_0201d684(void)

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
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201d6ec  m68k_add_word

void m68k_dispatch_0201d6ec(void)

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
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201d74c  m68k_add_long

void m68k_dispatch_0201d74c(void)

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
  iVar4 = CONCAT22(*puVar3,puVar3[1]) + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)((uint)iVar4 >> 0x10);
  puVar3[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x0201d7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201d7b0  m68k_add_byte

void m68k_dispatch_0201d7b0(void)

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
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201d818  m68k_add_word

void m68k_dispatch_0201d818(void)

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
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201d878  m68k_add_long

void m68k_dispatch_0201d878(void)

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
  iVar4 = CONCAT22(*puVar3,puVar3[1]) + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)((uint)iVar4 >> 0x10);
  puVar3[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x0201d8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201d8dc  m68k_add_byte

void m68k_dispatch_0201d8dc(void)

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
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201d934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201d938  m68k_add_word

void m68k_dispatch_0201d938(void)

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
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201d990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201d994  m68k_add_long

void m68k_dispatch_0201d994(void)

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
  iVar2 = CONCAT22(*puVar1,puVar1[1]) + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201d9f4  m68k_add_byte

void m68k_dispatch_0201d9f4(void)

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
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201da74  m68k_add_word

void m68k_dispatch_0201da74(void)

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
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201daf4  m68k_add_long

void m68k_dispatch_0201daf4(void)

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
  iVar3 = CONCAT22(*puVar4,puVar4[1]) + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar4 = (short)((uint)iVar3 >> 0x10);
  puVar4[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201db74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201db78  m68k_add_byte

void m68k_dispatch_0201db78(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201dbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201dbc0  m68k_add_word

void m68k_dispatch_0201dbc0(void)

{
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) =
       (ushort)((uint)*(ushort *)((uint)*unaff_r10 + unaff_r8) * 0x10000 +
                (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201dc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201dc08  m68k_add_long

void m68k_dispatch_0201dc08(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  iVar2 = CONCAT22(*puVar1,puVar1[1]) + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201dc54  m68k_add_byte

void m68k_dispatch_0201dc54(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 +
                   (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201dc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0201dca0  m68k_add_word

void m68k_dispatch_0201dca0(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 +
                     (uint)*(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201dce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0201dcec  m68k_add_long

void m68k_dispatch_0201dcec(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  iVar2 = CONCAT22(*puVar1,puVar1[1]) + *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201dd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0201dd3c  m68k_adda_word

void m68k_dispatch_0201dd3c(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)*(short *)(unaff_r6 + (unaff_r11 & 7) * 4) +
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201dd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201dd68  m68k_adda_long

void m68k_dispatch_0201dd68(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) +
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201dd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201dd90  m68k_adda_word

void m68k_dispatch_0201dd90(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)*(short *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) +
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201ddbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201ddc0  m68k_adda_long

void m68k_dispatch_0201ddc0(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) +
       *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201dde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201ddec  m68k_adda_word

void m68k_dispatch_0201ddec(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)sVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201de24  m68k_adda_long

void m68k_dispatch_0201de24(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201de50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201de54  m68k_adda_word

void m68k_dispatch_0201de54(void)

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
       (int)sVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201de94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201de98  m68k_adda_long

void m68k_dispatch_0201de98(void)

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
       iVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201ded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201ded4  m68k_adda_word

void m68k_dispatch_0201ded4(void)

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
       (int)sVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201df14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201df18  m68k_adda_long

void m68k_dispatch_0201df18(void)

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
       iVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201df54  m68k_adda_word

void m68k_dispatch_0201df54(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)sVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201df90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201df94  m68k_adda_long

void m68k_dispatch_0201df94(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201dfc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201dfcc  m68k_adda_word

void m68k_dispatch_0201dfcc(void)

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
       (int)sVar3 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201e030  m68k_adda_long

void m68k_dispatch_0201e030(void)

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
       iVar3 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201e08c  m68k_adda_word

void m68k_dispatch_0201e08c(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4((int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)sVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201e0bc  m68k_adda_long

void m68k_dispatch_0201e0bc(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc((int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201e0e4  m68k_adda_word

void m68k_dispatch_0201e0e4(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)sVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201e11c  m68k_adda_long

void m68k_dispatch_0201e11c(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201e14c  m68k_adda_word

void m68k_dispatch_0201e14c(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)sVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201e190  m68k_adda_long

void m68k_dispatch_0201e190(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201e1cc  m68k_adda_word

void m68k_dispatch_0201e1cc(void)

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
       (int)sVar3 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201e238  m68k_adda_long

void m68k_dispatch_0201e238(void)

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
       iVar3 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201e29c  m68k_adda_word

void m68k_dispatch_0201e29c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)*unaff_r10 + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201e2c0  m68k_adda_long

void m68k_dispatch_0201e2c0(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       CONCAT22(*unaff_r10,unaff_r10[1]) + *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0201e2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201e2ec  m68k_addq_byte

void m68k_dispatch_0201e2ec(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar3 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar1 = FUN_0100408c(uVar3);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(char *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
         (char)(iVar1 * 0x1000000 + uVar2 * 0x1000000 >> 0x18);
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0201e33c  m68k_addq_word

void m68k_dispatch_0201e33c(void)

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
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + uVar2 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201e38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201e390  m68k_addq_long

void m68k_dispatch_0201e390(void)

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
  iVar3 = CONCAT22(*puVar1,puVar1[1]) + uVar2;
  *puVar1 = (short)((uint)iVar3 >> 0x10);
  puVar1[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201e3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201e3ec  m68k_addq_byte

void m68k_dispatch_0201e3ec(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = unaff_r11 & 7;
  uVar3 = *(uint *)(unaff_r6 + 0x20 + uVar2 * 4);
  if (uVar2 == 7) {
    iVar1 = uVar3 + 2;
  }
  else {
    iVar1 = uVar3 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar2 * 4) = iVar1;
  iVar1 = FUN_0100408c(uVar3);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(char *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
       (char)(iVar1 * 0x1000000 + uVar2 * 0x1000000 >> 0x18);
  return;
}


// 0x0201e44c  m68k_addq_word

void m68k_dispatch_0201e44c(void)

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
  *puVar3 = (ushort)((uint)*puVar3 * 0x10000 + uVar1 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201e4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201e4ac  m68k_addq_long

void m68k_dispatch_0201e4ac(void)

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
  iVar4 = CONCAT22(*puVar3,puVar3[1]) + uVar1;
  *puVar3 = (short)((uint)iVar4 >> 0x10);
  puVar3[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x0201e510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201e514  m68k_addq_byte

void m68k_dispatch_0201e514(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = unaff_r11 & 7;
  iVar2 = *(int *)(unaff_r6 + 0x20 + uVar1 * 4);
  if (uVar1 == 7) {
    uVar3 = iVar2 - 2;
  }
  else {
    uVar3 = iVar2 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar1 * 4) = uVar3;
  iVar2 = FUN_0100408c(uVar3);
  uVar1 = unaff_r11 >> 9 & 7;
  if (uVar1 == 0) {
    uVar1 = 8;
  }
  if ((uVar3 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
    return;
  }
  *(char *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
       (char)(iVar2 * 0x1000000 + uVar1 * 0x1000000 >> 0x18);
  return;
}


// 0x0201e574  m68k_addq_word

void m68k_dispatch_0201e574(void)

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
  *puVar3 = (ushort)((uint)*puVar3 * 0x10000 + uVar1 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201e5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201e5d4  m68k_addq_long

void m68k_dispatch_0201e5d4(void)

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
  iVar4 = CONCAT22(*puVar3,puVar3[1]) + uVar1;
  *puVar3 = (short)((uint)iVar4 >> 0x10);
  puVar3[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x0201e638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201e63c  m68k_addq_byte

void m68k_dispatch_0201e63c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  iVar1 = FUN_0100408c(uVar3);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(char *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
         (char)(iVar1 * 0x1000000 + uVar2 * 0x1000000 >> 0x18);
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0201e694  m68k_addq_word

void m68k_dispatch_0201e694(void)

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
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + uVar2 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201e6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201e6f0  m68k_addq_long

void m68k_dispatch_0201e6f0(void)

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
  iVar3 = CONCAT22(*puVar1,puVar1[1]) + uVar2;
  *puVar1 = (short)((uint)iVar3 >> 0x10);
  puVar1[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201e750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201e754  m68k_addq_byte

void m68k_dispatch_0201e754(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar2 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar2 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar2 = (int)*(short *)(iVar2 + uVar3);
  }
  else {
    iVar2 = *(int *)(iVar2 + uVar3);
  }
  uVar4 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar2;
  iVar2 = FUN_0100408c(uVar4);
  uVar3 = unaff_r11 >> 9 & 7;
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(char *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       (char)(iVar2 * 0x1000000 + uVar3 * 0x1000000 >> 0x18);
  return;
}


// 0x0201e7d0  m68k_addq_word

void m68k_dispatch_0201e7d0(void)

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
  *puVar3 = (ushort)((uint)*puVar3 * 0x10000 + uVar4 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201e84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201e850  m68k_addq_long

void m68k_dispatch_0201e850(void)

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
  iVar2 = CONCAT22(*puVar3,puVar3[1]) + uVar4;
  *puVar3 = (short)((uint)iVar2 >> 0x10);
  puVar3[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201e8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201e8d8  m68k_addq_byte

void m68k_dispatch_0201e8d8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar3 = (uint)*unaff_r10;
  iVar1 = FUN_0100408c(uVar3);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(char *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
         (char)(iVar1 * 0x1000000 + uVar2 * 0x1000000 >> 0x18);
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0201e920  m68k_addq_long

void m68k_dispatch_0201e920(void)

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
  iVar3 = CONCAT22(*puVar1,puVar1[1]) + uVar2;
  *puVar1 = (short)((uint)iVar3 >> 0x10);
  puVar1[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201e96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201e970  m68k_addq_byte

void m68k_dispatch_0201e970(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar4 = CONCAT22(uVar1,unaff_r10[1]);
  iVar2 = FUN_0100408c(uVar4);
  uVar3 = unaff_r11 >> 9 & 7;
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if (0xdf < (uVar1 & 0xf0)) {
    *(char *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
         (char)(iVar2 * 0x1000000 + uVar3 * 0x1000000 >> 0x18);
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
  return;
}


// 0x0201e9c0  m68k_addq_word

void m68k_dispatch_0201e9c0(void)

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
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + uVar2 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201ea08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0201ea0c  m68k_addq_long

void m68k_dispatch_0201ea0c(void)

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
  iVar3 = CONCAT22(*puVar1,puVar1[1]) + uVar2;
  *puVar1 = (short)((uint)iVar3 >> 0x10);
  puVar1[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201ea5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0201ea60  m68k_addi_byte

void m68k_dispatch_0201ea60(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       (char)((uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) * 0x1000000 +
              (uint)*unaff_r10 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201ea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0201ea9c  m68k_addi_word

void m68k_dispatch_0201ea9c(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(short *)(unaff_r6 + iVar1) =
       (short)((uint)*(ushort *)(unaff_r6 + iVar1) * 0x10000 + (uint)*unaff_r10 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201ead8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201eadc  m68k_addi_long

void m68k_dispatch_0201eadc(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) + CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x0201eb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201eb18  m68k_addi_byte

void m68k_dispatch_0201eb18(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + (uint)*unaff_r10 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201eb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0201eb68  m68k_addi_word

void m68k_dispatch_0201eb68(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + (uint)*unaff_r10 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201ebb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201ebb4  m68k_addi_long

void m68k_dispatch_0201ebb4(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  iVar2 = CONCAT22(*puVar1,puVar1[1]) + CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201ec0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201ec10  m68k_addi_byte

void m68k_dispatch_0201ec10(void)

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
  *pbVar5 = (byte)((uint)*pbVar5 * 0x1000000 + (uint)bVar1 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0201ec74  m68k_addi_word

void m68k_dispatch_0201ec74(void)

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
  *puVar4 = (ushort)((uint)*puVar4 * 0x10000 + (uint)uVar1 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201ecc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201eccc  m68k_addi_long

void m68k_dispatch_0201eccc(void)

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
  iVar6 = CONCAT22(*puVar5,puVar5[1]) + CONCAT22(uVar1,uVar2);
  *puVar5 = (short)((uint)iVar6 >> 0x10);
  puVar5[1] = (short)iVar6;
                    /* WARNING: Could not recover jumptable at 0x0201ed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201ed34  m68k_addi_byte

void m68k_dispatch_0201ed34(void)

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
  *pbVar4 = (byte)((uint)*pbVar4 * 0x1000000 + (uint)bVar1 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201ed94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0201ed98  m68k_addi_word

void m68k_dispatch_0201ed98(void)

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
  *puVar4 = (ushort)((uint)*puVar4 * 0x10000 + (uint)uVar1 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201edec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201edf0  m68k_addi_long

void m68k_dispatch_0201edf0(void)

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
  iVar6 = CONCAT22(*puVar5,puVar5[1]) + CONCAT22(uVar1,uVar2);
  *puVar5 = (short)((uint)iVar6 >> 0x10);
  puVar5[1] = (short)iVar6;
                    /* WARNING: Could not recover jumptable at 0x0201ee54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201ee58  m68k_addi_byte

void m68k_dispatch_0201ee58(void)

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
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + (uint)*unaff_r10 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201eeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0201eeb0  m68k_addi_word

void m68k_dispatch_0201eeb0(void)

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
  *puVar1 = (ushort)((uint)*puVar1 * 0x10000 + (uint)*unaff_r10 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201ef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x0201ef04  m68k_addi_long

void m68k_dispatch_0201ef04(void)

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
  iVar2 = CONCAT22(*puVar1,puVar1[1]) + CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201ef64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x0201ef68  m68k_addi_byte

void m68k_dispatch_0201ef68(void)

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
  *pbVar4 = (byte)((uint)*pbVar4 * 0x1000000 + (uint)*unaff_r10 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201efe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0201efe4  m68k_addi_word

void m68k_dispatch_0201efe4(void)

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
  *puVar4 = (ushort)((uint)*puVar4 * 0x10000 + (uint)*unaff_r10 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x0201f05c  m68k_addi_long

void m68k_dispatch_0201f05c(void)

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
  iVar3 = CONCAT22(*puVar4,puVar4[1]) + CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar4 = (short)((uint)iVar3 >> 0x10);
  puVar4[1] = (short)iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x0201f0e4  m68k_addi_byte

void m68k_dispatch_0201f0e4(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + (uint)*unaff_r10 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0201f128  m68k_addi_word

void m68k_dispatch_0201f128(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[1] + unaff_r8) =
       (ushort)((uint)*(ushort *)((uint)unaff_r10[1] + unaff_r8) * 0x10000 +
                (uint)*unaff_r10 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x0201f168  m68k_addi_long

void m68k_dispatch_0201f168(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[2] + unaff_r8);
  iVar2 = CONCAT22(*puVar1,puVar1[1]) + CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201f1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x0201f1b8  m68k_addi_byte

void m68k_dispatch_0201f1b8(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 4) + unaff_r8 ^ 1);
  *pbVar1 = (byte)((uint)*pbVar1 * 0x1000000 + (uint)*unaff_r10 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x0201f200  m68k_addi_word

void m68k_dispatch_0201f200(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[2] + unaff_r8) =
       (ushort)((uint)*(ushort *)((uint)unaff_r10[2] + unaff_r8) * 0x10000 +
                (uint)*unaff_r10 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0201f240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[3] * 4))();
  return;
}


// 0x0201f244  m68k_addi_long

void m68k_dispatch_0201f244(void)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[3] + unaff_r8);
  iVar2 = CONCAT22(*puVar1,puVar1[1]) + CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)((uint)iVar2 >> 0x10);
  puVar1[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201f294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[4] * 4))();
  return;
}


// 0x02030090  m68k_addq_byte

void m68k_dispatch_02030090(void)

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
       (char)((uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) * 0x1000000 + uVar1 * 0x1000000 >>
             0x18);
                    /* WARNING: Could not recover jumptable at 0x020300d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020300d4  m68k_addq_word

void m68k_dispatch_020300d4(void)

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
       (short)((uint)*(ushort *)(unaff_r6 + iVar1) * 0x10000 + uVar2 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02030118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0203011c  m68k_addq_long

void m68k_dispatch_0203011c(void)

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
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) + uVar1;
                    /* WARNING: Could not recover jumptable at 0x02030154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030158  m68k_addq_word_or_addq_long

void m68k_dispatch_02030158(void)

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
       *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + uVar1;
                    /* WARNING: Could not recover jumptable at 0x02030180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030184  m68k_addx_byte

void m68k_dispatch_02030184(void)

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
    *(char *)(unaff_r6 + (uVar3 >> 7)) = (char)(uVar1 * 0x1000000 + uVar2 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x020301c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(char *)(unaff_r6 + (uVar3 >> 7)) =
       (char)(uVar1 * 0x1000000 + 0x1000000 + uVar2 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02030210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030214  m68k_addx_word

void m68k_dispatch_02030214(void)

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
         (short)(uVar2 * 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02030260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(short *)(unaff_r6 + uVar1) =
       (short)(uVar2 * 0x10000 + 0x10000 + (uint)*(ushort *)(unaff_r6 + uVar1) * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020302a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020302ac  m68k_addx_long

void m68k_dispatch_020302ac(void)

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
    *(int *)(unaff_r6 + (uVar3 >> 7)) = iVar1 + iVar2;
                    /* WARNING: Could not recover jumptable at 0x020302e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(int *)(unaff_r6 + (uVar3 >> 7)) = iVar1 + 1 + iVar2;
                    /* WARNING: Could not recover jumptable at 0x02030328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0203032c  m68k_addx_byte

void m68k_dispatch_0203032c(void)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int in_r3;
  uint *puVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar4 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar4;
  if ((uVar1 & 0xc00000) == 0) {
    in_r3 = *(int *)(unaff_r6 + 0x60);
  }
  if ((unaff_r11 & 7) == 7) {
    uVar1 = uVar1 - 2;
  }
  else {
    uVar1 = uVar1 - 1;
  }
  *puVar4 = uVar1;
  if ((uVar1 & 0xc00000) == 0) {
    uVar1 = uVar1 & 0x3fffff;
  }
  else {
    uVar1 = uVar1 & 0xffff;
  }
  uVar1 = (uint)*(byte *)(in_r3 + uVar1 ^ 1);
  puVar4 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (puVar4 == (uint *)0xe00) {
    uVar2 = *puVar4 - 2;
  }
  else {
    uVar2 = *puVar4 - 1;
  }
  *puVar4 = uVar2;
  pbVar3 = (byte *)(unaff_r8 + (uVar2 & 0xffff) ^ 1);
  if ((unaff_r7 & 0x10) != 0) {
    *pbVar3 = (byte)(uVar1 * 0x1000000 + 0x1000000 + (uint)*pbVar3 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0203041c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *pbVar3 = (byte)(uVar1 * 0x1000000 + (uint)*pbVar3 * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x020303d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030420  m68k_addx_word

void m68k_dispatch_02030420(void)

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
    *puVar3 = (ushort)((uint)uVar1 * 0x10000 + 0x10000 + (uint)*puVar3 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020304f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *puVar3 = (ushort)((uint)uVar1 * 0x10000 + (uint)*puVar3 * 0x10000 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020304b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020304fc  m68k_addx_long

void m68k_dispatch_020304fc(void)

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
    iVar4 = iVar4 + 1 + CONCAT22(*puVar5,puVar5[1]);
    *puVar5 = (short)((uint)iVar4 >> 0x10);
    puVar5[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x020305e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  iVar4 = iVar4 + CONCAT22(*puVar5,puVar5[1]);
  *puVar5 = (short)((uint)iVar4 >> 0x10);
  puVar5[1] = (short)iVar4;
                    /* WARNING: Could not recover jumptable at 0x0203059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

