/* ARM9 arithmetic — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
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


// 0x02021b7c  m68k_cmp_byte

void m68k_dispatch_02021b7c(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021bb4  m68k_cmp_word

void m68k_dispatch_02021bb4(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021bf4  m68k_cmp_long

void m68k_dispatch_02021bf4(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021c28  m68k_cmp_word

void m68k_dispatch_02021c28(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021c6c  m68k_cmp_long

void m68k_dispatch_02021c6c(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021ca4  m68k_cmp_byte

void m68k_dispatch_02021ca4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02021ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021ce4  m68k_cmp_word

void m68k_dispatch_02021ce4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02021d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021d28  m68k_cmp_long

void m68k_dispatch_02021d28(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_010040fc(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02021d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021d64  m68k_cmp_byte

void m68k_dispatch_02021d64(void)

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
                    /* WARNING: Could not recover jumptable at 0x02021db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021db8  m68k_cmp_word

void m68k_dispatch_02021db8(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 2;
  FUN_010040c4();
                    /* WARNING: Could not recover jumptable at 0x02021e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021e08  m68k_cmp_long

void m68k_dispatch_02021e08(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 4;
  FUN_010040fc();
                    /* WARNING: Could not recover jumptable at 0x02021e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021e50  m68k_cmp_byte

void m68k_dispatch_02021e50(void)

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
                    /* WARNING: Could not recover jumptable at 0x02021ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021ea4  m68k_cmp_word

void m68k_dispatch_02021ea4(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -2;
  FUN_010040c4();
                    /* WARNING: Could not recover jumptable at 0x02021ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021ef4  m68k_cmp_long

void m68k_dispatch_02021ef4(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -4;
  FUN_010040fc();
                    /* WARNING: Could not recover jumptable at 0x02021f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021f3c  m68k_cmp_byte

void m68k_dispatch_02021f3c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02021f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02021f84  m68k_cmp_word

void m68k_dispatch_02021f84(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02021fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02021fd0  m68k_cmp_long

void m68k_dispatch_02021fd0(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022014  m68k_cmp_byte

void m68k_dispatch_02022014(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022080  m68k_cmp_word

void m68k_dispatch_02022080(void)

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
  FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x020220ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020220f0  m68k_cmp_long

void m68k_dispatch_020220f0(void)

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
  FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x02022154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022158  m68k_cmp_byte

void m68k_dispatch_02022158(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_0100408c((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022190  m68k_cmp_word

void m68k_dispatch_02022190(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040c4((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020221c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020221cc  m68k_cmp_long

void m68k_dispatch_020221cc(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040fc((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020221fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022200  m68k_cmp_byte

void m68k_dispatch_02022200(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x0202223c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02022240  m68k_cmp_word

void m68k_dispatch_02022240(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x02022280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02022284  m68k_cmp_long

void m68k_dispatch_02022284(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x020222bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x020222c0  m68k_cmp_byte

void m68k_dispatch_020222c0(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  FUN_0100408c(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202230c  m68k_cmp_word

void m68k_dispatch_0202230c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202235c  m68k_cmp_long

void m68k_dispatch_0202235c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020223a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020223a4  m68k_cmp_byte

void m68k_dispatch_020223a4(void)

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
                    /* WARNING: Could not recover jumptable at 0x02022414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022418  m68k_cmp_word

void m68k_dispatch_02022418(void)

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
  FUN_010040c4(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x0202248c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022490  m68k_cmp_long

void m68k_dispatch_02022490(void)

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
  FUN_010040fc(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x020224fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022500  m68k_cmp_byte

void m68k_dispatch_02022500(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022534  m68k_cmp_word

void m68k_dispatch_02022534(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0202256c  m68k_cmp_long

void m68k_dispatch_0202256c(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x020225a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020225a4  m68k_cmpa_word

void m68k_dispatch_020225a4(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x020225dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020225e0  m68k_cmpa_long

void m68k_dispatch_020225e0(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022618  m68k_cmpa_word

void m68k_dispatch_02022618(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022658  m68k_cmpa_long

void m68k_dispatch_02022658(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022694  m68k_cmpa_word

void m68k_dispatch_02022694(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x020226d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020226dc  m68k_cmpa_long

void m68k_dispatch_020226dc(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_010040fc(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02022718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202271c  m68k_cmpa_word

void m68k_dispatch_0202271c(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 2;
  FUN_010040c4();
                    /* WARNING: Could not recover jumptable at 0x0202276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022770  m68k_cmpa_long

void m68k_dispatch_02022770(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 4;
  FUN_010040fc();
                    /* WARNING: Could not recover jumptable at 0x020227b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020227bc  m68k_cmpa_word

void m68k_dispatch_020227bc(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -2;
  FUN_010040c4();
                    /* WARNING: Could not recover jumptable at 0x0202280c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022810  m68k_cmpa_long

void m68k_dispatch_02022810(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -4;
  FUN_010040fc();
                    /* WARNING: Could not recover jumptable at 0x02022858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202285c  m68k_cmpa_word

void m68k_dispatch_0202285c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020228a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020228ac  m68k_cmpa_long

void m68k_dispatch_020228ac(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020228f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020228f4  m68k_cmpa_word

void m68k_dispatch_020228f4(void)

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
  FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x02022964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022968  m68k_cmpa_long

void m68k_dispatch_02022968(void)

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
  FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x020229d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020229d4  m68k_cmpa_word

void m68k_dispatch_020229d4(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040c4((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022a14  m68k_cmpa_long

void m68k_dispatch_02022a14(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040fc((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022a4c  m68k_cmpa_word

void m68k_dispatch_02022a4c(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x02022a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02022a94  m68k_cmpa_long

void m68k_dispatch_02022a94(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x02022ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02022ad4  m68k_cmpa_word

void m68k_dispatch_02022ad4(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022b28  m68k_cmpa_long

void m68k_dispatch_02022b28(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022b74  m68k_cmpa_word

void m68k_dispatch_02022b74(void)

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
  FUN_010040c4(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x02022bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022bf0  m68k_cmpa_long

void m68k_dispatch_02022bf0(void)

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
  FUN_010040fc(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x02022c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022c64  m68k_cmpa_word

void m68k_dispatch_02022c64(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022c98  m68k_cmpa_long

void m68k_dispatch_02022c98(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022cd4  m68k_cmpi_byte

void m68k_dispatch_02022cd4(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022d08  m68k_cmpi_word

void m68k_dispatch_02022d08(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022d40  m68k_cmpi_long

void m68k_dispatch_02022d40(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022d78  m68k_cmpi_byte

void m68k_dispatch_02022d78(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02022db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022db4  m68k_cmpi_word

void m68k_dispatch_02022db4(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02022dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022df0  m68k_cmpi_long

void m68k_dispatch_02022df0(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  FUN_010040fc(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02022e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022e30  m68k_cmpi_byte

void m68k_dispatch_02022e30(void)

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
                    /* WARNING: Could not recover jumptable at 0x02022e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022e80  m68k_cmpi_word

void m68k_dispatch_02022e80(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 2;
  FUN_010040c4();
                    /* WARNING: Could not recover jumptable at 0x02022ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022ec8  m68k_cmpi_long

void m68k_dispatch_02022ec8(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 4;
  FUN_010040fc();
                    /* WARNING: Could not recover jumptable at 0x02022f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022f14  m68k_cmpi_byte

void m68k_dispatch_02022f14(void)

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
                    /* WARNING: Could not recover jumptable at 0x02022f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022f64  m68k_cmpi_word

void m68k_dispatch_02022f64(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -2;
  FUN_010040c4();
                    /* WARNING: Could not recover jumptable at 0x02022fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022fac  m68k_cmpi_long

void m68k_dispatch_02022fac(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -4;
  FUN_010040fc();
                    /* WARNING: Could not recover jumptable at 0x02022ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022ff8  m68k_cmpi_byte

void m68k_dispatch_02022ff8(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x02023038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202303c  m68k_cmpi_word

void m68k_dispatch_0202303c(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x0202307c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023080  m68k_cmpi_long

void m68k_dispatch_02023080(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*(short *)(unaff_r10 + 4));
                    /* WARNING: Could not recover jumptable at 0x020230c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x020230c8  m68k_cmpi_byte

void m68k_dispatch_020230c8(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023130  m68k_cmpi_word

void m68k_dispatch_02023130(void)

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
  FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x02023194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023198  m68k_cmpi_long

void m68k_dispatch_02023198(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  uVar2 = *(ushort *)(unaff_r10 + 4);
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
  FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x02023200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x02023204  m68k_cmpi_byte

void m68k_dispatch_02023204(void)

{
  int unaff_r9;
  int unaff_r10;
  
  FUN_0100408c((int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x02023234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023238  m68k_cmpi_word

void m68k_dispatch_02023238(void)

{
  int unaff_r9;
  int unaff_r10;
  
  FUN_010040c4((int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x02023268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202326c  m68k_cmpi_long

void m68k_dispatch_0202326c(void)

{
  int unaff_r9;
  int unaff_r10;
  
  FUN_010040fc((int)*(short *)(unaff_r10 + 4));
                    /* WARNING: Could not recover jumptable at 0x020232a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x020232a4  m68k_cmpi_byte

void m68k_dispatch_020232a4(void)

{
  int unaff_r9;
  int unaff_r10;
  
  FUN_0100408c(CONCAT22(*(undefined2 *)(unaff_r10 + 2),*(undefined2 *)(unaff_r10 + 4)));
                    /* WARNING: Could not recover jumptable at 0x020232dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x020232e0  m68k_cmpi_word

void m68k_dispatch_020232e0(void)

{
  int unaff_r9;
  int unaff_r10;
  
  FUN_010040c4(CONCAT22(*(undefined2 *)(unaff_r10 + 2),*(undefined2 *)(unaff_r10 + 4)));
                    /* WARNING: Could not recover jumptable at 0x02023318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x0202331c  m68k_cmpi_long

void m68k_dispatch_0202331c(void)

{
  int unaff_r9;
  int unaff_r10;
  
  FUN_010040fc(CONCAT22(*(undefined2 *)(unaff_r10 + 4),*(undefined2 *)(unaff_r10 + 6)));
                    /* WARNING: Could not recover jumptable at 0x02023358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 8) * 4))();
  return;
}


// 0x0202358c  m68k_neg_byte

void m68k_dispatch_0202358c(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + (unaff_r11 & 7) * 4) = -*(char *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x020235c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020235c4  m68k_neg_word

void m68k_dispatch_020235c4(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(short *)(unaff_r6 + iVar1) = -*(short *)(unaff_r6 + iVar1);
                    /* WARNING: Could not recover jumptable at 0x020235fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023600  m68k_neg_long

void m68k_dispatch_02023600(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) = -*(int *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0202362c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023630  m68k_neg_byte

void m68k_dispatch_02023630(void)

{
  char *pcVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pcVar1 = (char *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pcVar1 = -*pcVar1;
                    /* WARNING: Could not recover jumptable at 0x02023678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202367c  m68k_neg_word

void m68k_dispatch_0202367c(void)

{
  short *psVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  psVar1 = (short *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *psVar1 = -*psVar1;
                    /* WARNING: Could not recover jumptable at 0x020236c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020236c4  m68k_neg_long

void m68k_dispatch_020236c4(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar1 = *puVar2;
  *puVar2 = (short)((uint)-CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)-CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x02023710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023714  m68k_neg_byte

void m68k_dispatch_02023714(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
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
  pcVar4 = (char *)(unaff_r8 + (uVar1 & 0xffff) ^ 1);
  *pcVar4 = -*pcVar4;
                    /* WARNING: Could not recover jumptable at 0x02023770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023774  m68k_neg_word

void m68k_dispatch_02023774(void)

{
  uint uVar1;
  uint *puVar2;
  short *psVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 2;
  psVar3 = (short *)(unaff_r8 + (uVar1 & 0xffff));
  *psVar3 = -*psVar3;
                    /* WARNING: Could not recover jumptable at 0x020237c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020237c8  m68k_neg_long

void m68k_dispatch_020237c8(void)

{
  undefined2 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3;
  *puVar3 = uVar2 + 4;
  puVar4 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
  uVar1 = *puVar4;
  *puVar4 = (short)((uint)-CONCAT22(uVar1,puVar4[1]) >> 0x10);
  puVar4[1] = (short)-CONCAT22(uVar1,puVar4[1]);
                    /* WARNING: Could not recover jumptable at 0x02023820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023824  m68k_neg_byte

void m68k_dispatch_02023824(void)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
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
  pcVar3 = (char *)(unaff_r8 + (uVar1 & 0xffff) ^ 1);
  *pcVar3 = -*pcVar3;
                    /* WARNING: Could not recover jumptable at 0x02023880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023884  m68k_neg_word

void m68k_dispatch_02023884(void)

{
  uint uVar1;
  uint *puVar2;
  short *psVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2 - 2;
  *puVar2 = uVar1;
  psVar3 = (short *)(unaff_r8 + (uVar1 & 0xffff));
  *psVar3 = -*psVar3;
                    /* WARNING: Could not recover jumptable at 0x020238d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020238d8  m68k_neg_long

void m68k_dispatch_020238d8(void)

{
  undefined2 uVar1;
  uint uVar2;
  uint *puVar3;
  undefined2 *puVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3 - 4;
  *puVar3 = uVar2;
  puVar4 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
  uVar1 = *puVar4;
  *puVar4 = (short)((uint)-CONCAT22(uVar1,puVar4[1]) >> 0x10);
  puVar4[1] = (short)-CONCAT22(uVar1,puVar4[1]);
                    /* WARNING: Could not recover jumptable at 0x02023930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023934  m68k_neg_byte

void m68k_dispatch_02023934(void)

{
  char *pcVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  pcVar1 = (char *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU) ^
                   1);
  *pcVar1 = -*pcVar1;
                    /* WARNING: Could not recover jumptable at 0x02023984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02023988  m68k_neg_word

void m68k_dispatch_02023988(void)

{
  short *psVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  psVar1 = (short *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU));
  *psVar1 = -*psVar1;
                    /* WARNING: Could not recover jumptable at 0x020239d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020239d8  m68k_neg_long

void m68k_dispatch_020239d8(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (undefined2 *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  uVar1 = *puVar2;
  *puVar2 = (short)((uint)-CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)-CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x02023a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02023a30  m68k_neg_byte

void m68k_dispatch_02023a30(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
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
  pcVar4 = (char *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3 &
                    0xffffU) ^ 1);
  *pcVar4 = -*pcVar4;
                    /* WARNING: Could not recover jumptable at 0x02023aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02023aa8  m68k_neg_word

void m68k_dispatch_02023aa8(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
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
  psVar4 = (short *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3 &
                    0xffffU));
  *psVar4 = -*psVar4;
                    /* WARNING: Could not recover jumptable at 0x02023b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02023b1c  m68k_neg_long

void m68k_dispatch_02023b1c(void)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int unaff_r6;
  int unaff_r8;
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
  puVar5 = (undefined2 *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4 & 0xffffU));
  uVar3 = *puVar5;
  *puVar5 = (short)((uint)-CONCAT22(uVar3,puVar5[1]) >> 0x10);
  puVar5[1] = (short)-CONCAT22(uVar3,puVar5[1]);
                    /* WARNING: Could not recover jumptable at 0x02023b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02023b98  m68k_neg_byte

void m68k_dispatch_02023b98(void)

{
  char *pcVar1;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  pcVar1 = (char *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  *pcVar1 = -*pcVar1;
                    /* WARNING: Could not recover jumptable at 0x02023bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02023bd8  m68k_neg_word

void m68k_dispatch_02023bd8(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(short *)((uint)*unaff_r10 + unaff_r8) = -*(short *)((uint)*unaff_r10 + unaff_r8);
                    /* WARNING: Could not recover jumptable at 0x02023c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02023c14  m68k_neg_long

void m68k_dispatch_02023c14(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  puVar2 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  uVar1 = *puVar2;
  *puVar2 = (short)((uint)-CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)-CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x02023c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02023c58  m68k_neg_byte

void m68k_dispatch_02023c58(void)

{
  char *pcVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  pcVar1 = (char *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pcVar1 = -*pcVar1;
                    /* WARNING: Could not recover jumptable at 0x02023c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023c9c  m68k_neg_word

void m68k_dispatch_02023c9c(void)

{
  short *psVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  psVar1 = (short *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *psVar1 = -*psVar1;
                    /* WARNING: Could not recover jumptable at 0x02023cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023cdc  m68k_neg_long

void m68k_dispatch_02023cdc(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar2 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar1 = *puVar2;
  *puVar2 = (short)((uint)-CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)-CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x02023d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023d24  m68k_negx_byte

void m68k_dispatch_02023d24(void)

{
  int iVar1;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) * 0x1000000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *(char *)(unaff_r6 + (unaff_r11 & 7) * 4) = (char)((uint)-iVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02023d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023d64  m68k_negx_word

void m68k_dispatch_02023d64(void)

{
  int iVar1;
  int iVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  iVar2 = (uint)*(ushort *)(unaff_r6 + iVar1) * 0x10000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  *(short *)(unaff_r6 + iVar1) = (short)((uint)-iVar2 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02023da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023da8  m68k_negx_long

void m68k_dispatch_02023da8(void)

{
  int iVar1;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = *(int *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) = -iVar1;
                    /* WARNING: Could not recover jumptable at 0x02023de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023de8  m68k_negx_byte

void m68k_dispatch_02023de8(void)

{
  int iVar1;
  byte *pbVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar2 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  iVar1 = (uint)*pbVar2 * 0x1000000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *pbVar2 = (byte)((uint)-iVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02023e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023e3c  m68k_negx_word

void m68k_dispatch_02023e3c(void)

{
  int iVar1;
  ushort *puVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  iVar1 = (uint)*puVar2 * 0x10000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *puVar2 = (ushort)((uint)-iVar1 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02023e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023e8c  m68k_negx_long

void m68k_dispatch_02023e8c(void)

{
  int iVar1;
  undefined2 *puVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  iVar1 = CONCAT22(*puVar2,puVar2[1]);
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *puVar2 = (short)((uint)-iVar1 >> 0x10);
  puVar2[1] = (short)-iVar1;
                    /* WARNING: Could not recover jumptable at 0x02023ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023eec  m68k_negx_byte

void m68k_dispatch_02023eec(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar4 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar4;
  if ((unaff_r11 & 7) == 7) {
    uVar3 = uVar1 + 2;
  }
  else {
    uVar3 = uVar1 + 1;
  }
  *puVar4 = uVar3;
  pbVar5 = (byte *)(unaff_r8 + (uVar1 & 0xffff) ^ 1);
  iVar2 = (uint)*pbVar5 * 0x1000000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  *pbVar5 = (byte)((uint)-iVar2 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02023f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023f54  m68k_negx_word

void m68k_dispatch_02023f54(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ushort *puVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar3;
  *puVar3 = uVar1 + 2;
  puVar4 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  iVar2 = (uint)*puVar4 * 0x10000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  *puVar4 = (ushort)((uint)-iVar2 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02023fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02023fb0  m68k_negx_long

void m68k_dispatch_02023fb0(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined2 *puVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar3;
  *puVar3 = uVar1 + 4;
  puVar4 = (undefined2 *)(unaff_r8 + (uVar1 & 0xffff));
  iVar2 = CONCAT22(*puVar4,puVar4[1]);
  if ((unaff_r7 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  *puVar4 = (short)((uint)-iVar2 >> 0x10);
  puVar4[1] = (short)-iVar2;
                    /* WARNING: Could not recover jumptable at 0x02024018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202401c  m68k_negx_byte

void m68k_dispatch_0202401c(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar3;
  if ((unaff_r11 & 7) == 7) {
    uVar1 = uVar1 - 2;
  }
  else {
    uVar1 = uVar1 - 1;
  }
  *puVar3 = uVar1;
  pbVar4 = (byte *)(unaff_r8 + (uVar1 & 0xffff) ^ 1);
  iVar2 = (uint)*pbVar4 * 0x1000000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  *pbVar4 = (byte)((uint)-iVar2 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02024080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024084  m68k_negx_word

void m68k_dispatch_02024084(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  ushort *puVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar3 - 2;
  *puVar3 = uVar1;
  puVar4 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  iVar2 = (uint)*puVar4 * 0x10000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  *puVar4 = (ushort)((uint)-iVar2 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020240dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020240e0  m68k_negx_long

void m68k_dispatch_020240e0(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined2 *puVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar3 - 4;
  *puVar3 = uVar1;
  puVar4 = (undefined2 *)(unaff_r8 + (uVar1 & 0xffff));
  iVar2 = CONCAT22(*puVar4,puVar4[1]);
  if ((unaff_r7 & 0x10) != 0) {
    iVar2 = iVar2 + 1;
  }
  *puVar4 = (short)((uint)-iVar2 >> 0x10);
  puVar4[1] = (short)-iVar2;
                    /* WARNING: Could not recover jumptable at 0x02024148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202414c  m68k_negx_byte

void m68k_dispatch_0202414c(void)

{
  int iVar1;
  byte *pbVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  pbVar2 = (byte *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU) ^
                   1);
  iVar1 = (uint)*pbVar2 * 0x1000000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *pbVar2 = (byte)((uint)-iVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x020241a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020241a8  m68k_negx_word

void m68k_dispatch_020241a8(void)

{
  int iVar1;
  ushort *puVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (ushort *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  iVar1 = (uint)*puVar2 * 0x10000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *puVar2 = (ushort)((uint)-iVar1 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020241fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02024200  m68k_negx_long

void m68k_dispatch_02024200(void)

{
  int iVar1;
  undefined2 *puVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (undefined2 *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  iVar1 = CONCAT22(*puVar2,puVar2[1]);
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *puVar2 = (short)((uint)-iVar1 >> 0x10);
  puVar2[1] = (short)-iVar1;
                    /* WARNING: Could not recover jumptable at 0x02024264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02024268  m68k_negx_byte

void m68k_dispatch_02024268(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  int unaff_r6;
  uint unaff_r7;
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
  iVar3 = (uint)*pbVar4 * 0x1000000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar3 = iVar3 + 1;
  }
  *pbVar4 = (byte)((uint)-iVar3 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x020242e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020242e8  m68k_negx_word

void m68k_dispatch_020242e8(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int unaff_r6;
  uint unaff_r7;
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
  iVar3 = (uint)*puVar4 * 0x10000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar3 = iVar3 + 1;
  }
  *puVar4 = (ushort)((uint)-iVar3 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02024360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02024364  m68k_negx_long

void m68k_dispatch_02024364(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined2 *puVar4;
  int unaff_r6;
  uint unaff_r7;
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
  iVar3 = CONCAT22(*puVar4,puVar4[1]);
  if ((unaff_r7 & 0x10) != 0) {
    iVar3 = iVar3 + 1;
  }
  *puVar4 = (short)((uint)-iVar3 >> 0x10);
  puVar4[1] = (short)-iVar3;
                    /* WARNING: Could not recover jumptable at 0x020243ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020243f0  m68k_negx_byte

void m68k_dispatch_020243f0(void)

{
  int iVar1;
  byte *pbVar2;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  pbVar2 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  iVar1 = (uint)*pbVar2 * 0x1000000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *pbVar2 = (byte)((uint)-iVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02024434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02024438  m68k_negx_word

void m68k_dispatch_02024438(void)

{
  int iVar1;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  iVar1 = (uint)*(ushort *)((uint)*unaff_r10 + unaff_r8) * 0x10000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *(ushort *)((uint)*unaff_r10 + unaff_r8) = (ushort)((uint)-iVar1 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02024478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202447c  m68k_negx_long

void m68k_dispatch_0202447c(void)

{
  int iVar1;
  undefined2 *puVar2;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  puVar2 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  iVar1 = CONCAT22(*puVar2,puVar2[1]);
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *puVar2 = (short)((uint)-iVar1 >> 0x10);
  puVar2[1] = (short)-iVar1;
                    /* WARNING: Could not recover jumptable at 0x020244cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020244d0  m68k_negx_byte

void m68k_dispatch_020244d0(void)

{
  int iVar1;
  byte *pbVar2;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  pbVar2 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  iVar1 = (uint)*pbVar2 * 0x1000000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *pbVar2 = (byte)((uint)-iVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02024518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202451c  m68k_negx_word

void m68k_dispatch_0202451c(void)

{
  int iVar1;
  ushort *puVar2;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar2 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  iVar1 = (uint)*puVar2 * 0x10000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *puVar2 = (ushort)((uint)-iVar1 >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02024560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02024564  m68k_negx_long

void m68k_dispatch_02024564(void)

{
  int iVar1;
  undefined2 *puVar2;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar2 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  iVar1 = CONCAT22(*puVar2,puVar2[1]);
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *puVar2 = (short)((uint)-iVar1 >> 0x10);
  puVar2[1] = (short)-iVar1;
                    /* WARNING: Could not recover jumptable at 0x020245b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202d1f0  m68k_nbcd_byte

void m68k_dispatch_0202d1f0(void)

{
  char cVar1;
  byte bVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  cVar1 = -*(char *)(unaff_r6 + (unaff_r11 & 7) * 4);
  bVar2 = cVar1 + 0x9a;
  if ((unaff_r7 & 0x10) != 0) {
    bVar2 = cVar1 + 0x99;
  }
  if (bVar2 != 0x9a) {
    if ((bVar2 & 0xf) == 10) {
      bVar2 = (bVar2 & 0xf0) + 0x10;
    }
    *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = bVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0202d248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202d2ac  m68k_nbcd_byte

void m68k_dispatch_0202d2ac(void)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar2 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  cVar1 = -*pbVar2;
  bVar3 = cVar1 + 0x9a;
  if ((unaff_r7 & 0x10) != 0) {
    bVar3 = cVar1 + 0x99;
  }
  if (bVar3 != 0x9a) {
    if ((bVar3 & 0xf) == 10) {
      bVar3 = (bVar3 & 0xf0) + 0x10;
    }
    *pbVar2 = bVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0202d318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202d31c  m68k_nbcd_byte

void m68k_dispatch_0202d31c(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  byte bVar6;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
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
  cVar1 = -*pbVar5;
  bVar6 = cVar1 + 0x9a;
  if ((unaff_r7 & 0x10) != 0) {
    bVar6 = cVar1 + 0x99;
  }
  if (bVar6 != 0x9a) {
    if ((bVar6 & 0xf) == 10) {
      bVar6 = (bVar6 & 0xf0) + 0x10;
    }
    *pbVar5 = bVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0202d39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202d3a0  m68k_nbcd_byte

void m68k_dispatch_0202d3a0(void)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
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
  cVar1 = -*pbVar4;
  bVar5 = cVar1 + 0x9a;
  if ((unaff_r7 & 0x10) != 0) {
    bVar5 = cVar1 + 0x99;
  }
  if (bVar5 != 0x9a) {
    if ((bVar5 & 0xf) == 10) {
      bVar5 = (bVar5 & 0xf0) + 0x10;
    }
    *pbVar4 = bVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0202d420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202d424  m68k_nbcd_byte

void m68k_dispatch_0202d424(void)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  pbVar2 = (byte *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU) ^
                   1);
  cVar1 = -*pbVar2;
  bVar3 = cVar1 + 0x9a;
  if ((unaff_r7 & 0x10) != 0) {
    bVar3 = cVar1 + 0x99;
  }
  if (bVar3 != 0x9a) {
    if ((bVar3 & 0xf) == 10) {
      bVar3 = (bVar3 & 0xf0) + 0x10;
    }
    *pbVar2 = bVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0202d498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202d49c  m68k_nbcd_byte

void m68k_dispatch_0202d49c(void)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
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
  pbVar5 = (byte *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4 &
                    0xffffU) ^ 1);
  cVar3 = -*pbVar5;
  bVar6 = cVar3 + 0x9a;
  if ((unaff_r7 & 0x10) != 0) {
    bVar6 = cVar3 + 0x99;
  }
  if (bVar6 != 0x9a) {
    if ((bVar6 & 0xf) == 10) {
      bVar6 = (bVar6 & 0xf0) + 0x10;
    }
    *pbVar5 = bVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0202d534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202d538  m68k_nbcd_byte

void m68k_dispatch_0202d538(void)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  pbVar2 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  cVar1 = -*pbVar2;
  bVar3 = cVar1 + 0x9a;
  if ((unaff_r7 & 0x10) != 0) {
    bVar3 = cVar1 + 0x99;
  }
  if (bVar3 != 0x9a) {
    if ((bVar3 & 0xf) == 10) {
      bVar3 = (bVar3 & 0xf0) + 0x10;
    }
    *pbVar2 = bVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0202d598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202d59c  m68k_nbcd_byte

void m68k_dispatch_0202d59c(void)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  pbVar2 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  cVar1 = -*pbVar2;
  bVar3 = cVar1 + 0x9a;
  if ((unaff_r7 & 0x10) != 0) {
    bVar3 = cVar1 + 0x99;
  }
  if (bVar3 != 0x9a) {
    if ((bVar3 & 0xf) == 10) {
      bVar3 = (bVar3 & 0xf0) + 0x10;
    }
    *pbVar2 = bVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0202d600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
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


// 0x02030b40  m68k_cmpm_byte

void m68k_dispatch_02030b40(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar3 = unaff_r6 + 0x20;
  uVar2 = unaff_r11 & 7;
  iVar1 = *(int *)(iVar3 + uVar2 * 4);
  if (uVar2 == 7) {
    iVar1 = iVar1 + 2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  *(int *)(iVar3 + uVar2 * 4) = iVar1;
  FUN_0100408c();
  uVar2 = unaff_r11 & 0xe00;
  iVar1 = *(int *)(iVar3 + (uVar2 >> 7));
  if (uVar2 == 0xe00) {
    iVar1 = iVar1 + 2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  *(int *)(iVar3 + (uVar2 >> 7)) = iVar1;
  FUN_0100408c();
                    /* WARNING: Could not recover jumptable at 0x02030ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030ba8  m68k_cmpm_word

void m68k_dispatch_02030ba8(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = unaff_r6 + 0x20;
  *(int *)(iVar1 + (unaff_r11 & 7) * 4) = *(int *)(iVar1 + (unaff_r11 & 7) * 4) + 2;
  FUN_010040c4();
  *(int *)(iVar1 + ((unaff_r11 & 0xe00) >> 7)) = *(int *)(iVar1 + ((unaff_r11 & 0xe00) >> 7)) + 2;
  FUN_010040c4();
                    /* WARNING: Could not recover jumptable at 0x02030bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030c00  m68k_cmpm_long

void m68k_dispatch_02030c00(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = unaff_r6 + 0x20;
  *(int *)(iVar1 + (unaff_r11 & 7) * 4) = *(int *)(iVar1 + (unaff_r11 & 7) * 4) + 4;
  FUN_010040fc();
  *(int *)(iVar1 + ((unaff_r11 & 0xe00) >> 7)) = *(int *)(iVar1 + ((unaff_r11 & 0xe00) >> 7)) + 4;
  FUN_010040fc();
                    /* WARNING: Could not recover jumptable at 0x02030c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030c54  m68k_ext_word

void m68k_dispatch_02030c54(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(short *)(unaff_r6 + iVar1) = (short)*(char *)(unaff_r6 + iVar1);
                    /* WARNING: Could not recover jumptable at 0x02030c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030c80  m68k_ext_long

void m68k_dispatch_02030c80(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(int *)(unaff_r6 + iVar1) = (int)*(short *)(unaff_r6 + iVar1);
                    /* WARNING: Could not recover jumptable at 0x02030ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030cac  m68k_abcd_byte

void m68k_dispatch_02030cac(void)

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
  uVar2 = (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = (uVar2 & 0xf) + (uVar1 & 0xf);
  if ((unaff_r7 & 0x10) != 0) {
    uVar3 = uVar3 + 1;
  }
  if (9 < uVar3) {
    uVar3 = uVar3 + 6;
  }
  uVar1 = uVar3 + (uVar1 & 0xf0) + (uVar2 & 0xf0);
  if (0x99 < uVar1) {
    uVar1 = uVar1 - 0xa0;
  }
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x02030d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030d28  m68k_abcd_byte

void m68k_dispatch_02030d28(void)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
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
  uVar2 = (uint)*pbVar3;
  uVar6 = (uVar2 & 0xf) + (uVar1 & 0xf);
  if ((unaff_r7 & 0x10) != 0) {
    uVar6 = uVar6 + 1;
  }
  if (9 < uVar6) {
    uVar6 = uVar6 + 6;
  }
  uVar1 = uVar6 + (uVar1 & 0xf0) + (uVar2 & 0xf0);
  if (0x99 < uVar1) {
    uVar1 = uVar1 - 0xa0;
  }
  *pbVar3 = (byte)uVar1;
                    /* WARNING: Could not recover jumptable at 0x02030e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030e08  m68k_sbcd_byte

void m68k_dispatch_02030e08(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (ushort)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = (ushort)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = (uVar2 & 0xf) - (uVar1 & 0xf);
  if ((unaff_r7 & 0x10) != 0) {
    uVar3 = uVar3 - 1;
  }
  if (9 < (uVar3 & 0xff)) {
    uVar3 = uVar3 - 6;
  }
  uVar3 = uVar3 + ((uVar2 & 0xf0) - (uVar1 & 0xf0));
  if (0x99 < uVar3) {
    uVar3 = uVar3 + 0xa0;
  }
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = (char)uVar3;
                    /* WARNING: Could not recover jumptable at 0x02030e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030e90  m68k_sbcd

void m68k_dispatch_02030e90(void)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  uint *puVar6;
  ushort uVar7;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar6 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar6;
  iVar5 = unaff_r8;
  if ((uVar2 & 0xc00000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x60);
  }
  if ((unaff_r11 & 7) == 7) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar6 = uVar2;
  if ((uVar2 & 0xc00000) == 0) {
    uVar2 = uVar2 & 0x3fffff;
  }
  else {
    uVar2 = uVar2 & 0xffff;
  }
  uVar1 = (ushort)*(byte *)(iVar5 + uVar2 ^ 1);
  puVar6 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar6;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar6 = uVar2;
  pbVar4 = (byte *)(unaff_r8 + (uVar2 & 0xffff) ^ 1);
  uVar3 = (ushort)*pbVar4;
  uVar7 = (uVar3 & 0xf) - (uVar1 & 0xf);
  if ((unaff_r7 & 0x10) != 0) {
    uVar7 = uVar7 - 1;
  }
  if (9 < (uVar7 & 0xff)) {
    uVar7 = uVar7 - 6;
  }
  uVar7 = uVar7 + ((uVar3 & 0xf0) - (uVar1 & 0xf0));
  if (0x99 < uVar7) {
    uVar7 = uVar7 + 0xa0;
  }
  *pbVar4 = (byte)uVar7;
                    /* WARNING: Could not recover jumptable at 0x02030f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

