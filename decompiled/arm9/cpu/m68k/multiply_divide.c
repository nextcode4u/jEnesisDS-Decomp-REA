/* ARM9 multiply divide — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x020249f0  m68k_mulu_word

void m68k_mulu_word_020249f0(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) =
       (uint)*(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4) * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024a28  m68k_mulu_word

void m68k_mulu_word_02024a28(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar2 = read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = iVar2 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024a64  m68k_mulu_word

void m68k_mulu_word_02024a64(void)

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
  iVar2 = read_m68k_bus_word();
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = iVar2 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024aac  m68k_mulu_word

void m68k_mulu_word_02024aac(void)

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
  iVar2 = read_m68k_bus_word();
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = iVar2 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024af4  m68k_mulu_word

void m68k_mulu_word_02024af4(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar2 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = iVar2 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02024b38  m68k_mulu_word

void m68k_mulu_word_02024b38(void)

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
  iVar3 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = iVar3 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02024ba0  m68k_mulu_word

void m68k_mulu_word_02024ba0(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar2 = read_m68k_bus_word((int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = iVar2 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02024bd4  m68k_mulu_word

void m68k_mulu_word_02024bd4(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  iVar2 = read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = iVar2 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02024c10  m68k_mulu_word

void m68k_mulu_word_02024c10(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar2 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = iVar2 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02024c58  m68k_mulu_word

void m68k_mulu_word_02024c58(void)

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
  iVar3 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar3);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = iVar3 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02024cc8  m68k_mulu_word

void m68k_mulu_word_02024cc8(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(uint *)(unaff_r6 + uVar1) = (uint)*unaff_r10 * (uint)*(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02024cf8  m68k_muls_word

void m68k_muls_word_02024cf8(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) =
       (int)*(short *)(unaff_r6 + (unaff_r11 & 7) * 4) * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024d30  m68k_muls_word

void m68k_muls_word_02024d30(void)

{
  uint uVar1;
  short sVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  sVar2 = read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar2 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024d74  m68k_muls_word

void m68k_muls_word_02024d74(void)

{
  uint uVar1;
  short sVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar3 = *piVar3 + 2;
  sVar2 = read_m68k_bus_word();
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar2 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024dc4  m68k_muls_word

void m68k_muls_word_02024dc4(void)

{
  uint uVar1;
  short sVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar3 = *piVar3 + -2;
  sVar2 = read_m68k_bus_word();
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar2 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024e14  m68k_muls_word

void m68k_muls_word_02024e14(void)

{
  uint uVar1;
  short sVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar2 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar2 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02024e60  m68k_muls_word

void m68k_muls_word_02024e60(void)

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
  sVar3 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar3 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02024ed0  m68k_muls_word

void m68k_muls_word_02024ed0(void)

{
  uint uVar1;
  short sVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar2 = read_m68k_bus_word((int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar2 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02024f0c  m68k_muls_word

void m68k_muls_word_02024f0c(void)

{
  uint uVar1;
  short sVar2;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  sVar2 = read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar2 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02024f50  m68k_muls_word

void m68k_muls_word_02024f50(void)

{
  uint uVar1;
  short sVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar2 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar2 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02024f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02024fa0  m68k_muls_word

void m68k_muls_word_02024fa0(void)

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
  sVar3 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar4);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)sVar3 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02025014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02025018  m68k_muls_word

void m68k_muls_word_02025018(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(int *)(unaff_r6 + uVar1) = (int)*unaff_r10 * (int)*(short *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02025044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02025048  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_02025048(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar3 = (uint)*(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if (uVar3 == 0) {
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar3 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xff00 | 0x2000;
    puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar6 = (ushort)uVar3 | (ushort)unaff_r7 & 0x1f;
    uVar3 = (int)unaff_r10 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar3 >> 0x10);
    puVar6[2] = (ushort)uVar3;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar4;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = uVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar3 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar3 = uVar3 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar3 = uVar3 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar3 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x020250c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar4;
      }
    }
    else {
      uVar3 = unaff_r7 | 2;
      unaff_r7 = uVar3 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x020250dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar4;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}


// 0x020250f4  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_020250f4(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar3 = read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  if (iVar3 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar5 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)unaff_r10 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar6 >> 0x10);
    puVar5[2] = (ushort)uVar6;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar3;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = iVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar6 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar6 = uVar6 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar6 = uVar6 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar6 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
    }
    else {
      uVar6 = unaff_r7 | 2;
      unaff_r7 = uVar6 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202518c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}


// 0x020251a4  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_020251a4(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar4 = *piVar4 + 2;
  iVar3 = read_m68k_bus_word();
  if (iVar3 == 0) {
    uVar7 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar7 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
    puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar6 = (ushort)uVar7 | (ushort)unaff_r7 & 0x1f;
    uVar7 = (int)unaff_r10 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar7 >> 0x10);
    puVar6[2] = (ushort)uVar7;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar7 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar7 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar3;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = iVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar7 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar7 = uVar7 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar7 = uVar7 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar7 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x02025234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
    }
    else {
      uVar7 = unaff_r7 | 2;
      unaff_r7 = uVar7 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x02025248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025260  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_02025260(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar4 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar4 = *piVar4 + -2;
  iVar3 = read_m68k_bus_word();
  if (iVar3 == 0) {
    uVar7 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar7 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
    puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar6 = (ushort)uVar7 | (ushort)unaff_r7 & 0x1f;
    uVar7 = (int)unaff_r10 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar7 >> 0x10);
    puVar6[2] = (ushort)uVar7;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar7 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar7 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar3;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = iVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar7 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar7 = uVar7 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar7 = uVar7 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar7 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x020252f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
    }
    else {
      uVar7 = unaff_r7 | 2;
      unaff_r7 = uVar7 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x02025304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}


// 0x0202531c  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_0202531c(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar7;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar7 = (ushort *)(unaff_r10 + 1);
  iVar3 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  if (iVar3 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar5 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar7 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar6 >> 0x10);
    puVar5[2] = (ushort)uVar6;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar3;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = iVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar6 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar6 = uVar6 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar6 = uVar6 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar6 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x020253a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
    else {
      uVar6 = unaff_r7 | 2;
      unaff_r7 = uVar6 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x020253bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return (int)unaff_r7 >> 0x10;
}


// 0x020253d4  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_020253d4(void)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar7;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar7 = unaff_r10 + 1;
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar6 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar6);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar6);
  }
  iVar3 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
  if (iVar3 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar5 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar7 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar6 >> 0x10);
    puVar5[2] = (ushort)uVar6;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar2 = *(ushort *)(iVar3 + 0x14);
    uVar1 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar2 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar3;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = iVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar6 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar6 = uVar6 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar6 = uVar6 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar6 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
    else {
      uVar6 = unaff_r7 | 2;
      unaff_r7 = uVar6 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return (int)unaff_r7 >> 0x10;
}


// 0x020254b0  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_020254b0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar7;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar7 = (ushort *)(unaff_r10 + 1);
  iVar3 = read_m68k_bus_word((int)*unaff_r10);
  if (iVar3 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar5 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar7 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar6 >> 0x10);
    puVar5[2] = (ushort)uVar6;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar3;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = iVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar6 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar6 = uVar6 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar6 = uVar6 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar6 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202552c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
    else {
      uVar6 = unaff_r7 | 2;
      unaff_r7 = uVar6 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025558  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_02025558(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar7;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar7 = unaff_r10 + 2;
  iVar3 = read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
  if (iVar3 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar5 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar7 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar6 >> 0x10);
    puVar5[2] = (ushort)uVar6;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar3;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = iVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar6 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar6 = uVar6 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar6 = uVar6 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar6 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x020255dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
    else {
      uVar6 = unaff_r7 | 2;
      unaff_r7 = uVar6 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x020255f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025608  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_02025608(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar7;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar7 = (ushort *)(unaff_r10 + 1);
  iVar3 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  if (iVar3 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar5 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar7 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar6 >> 0x10);
    puVar5[2] = (ushort)uVar6;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar3;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = iVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar6 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar6 = uVar6 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar6 = uVar6 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar6 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
    else {
      uVar6 = unaff_r7 | 2;
      unaff_r7 = uVar6 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x020256ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return (int)unaff_r7 >> 0x10;
}


// 0x020256c4  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_020256c4(void)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int unaff_r6;
  uint unaff_r7;
  uint uVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar7;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar7 = unaff_r10 + 1;
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar6 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar6);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar6);
  }
  iVar3 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar3);
  if (iVar3 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar5 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar5 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar7 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar5[1] = (ushort)(uVar6 >> 0x10);
    puVar5[2] = (ushort)uVar6;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar2 = *(ushort *)(iVar3 + 0x14);
    uVar1 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar2 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar3;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = iVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar6 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar6 = uVar6 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar6 = uVar6 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar6 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202577c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
    else {
      uVar6 = unaff_r7 | 2;
      unaff_r7 = uVar6 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar3;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return (int)unaff_r7 >> 0x10;
}


// 0x020257a8  m68k_divu_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divu_word_020257a8(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar7;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar7 = unaff_r10 + 1;
  uVar3 = (uint)*unaff_r10;
  if (uVar3 == 0) {
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar3 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xff00 | 0x2000;
    puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar6 = (ushort)uVar3 | (ushort)unaff_r7 & 0x1f;
    uVar3 = (int)puVar7 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar3 >> 0x10);
    puVar6[2] = (ushort)uVar3;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar4;
    }
  }
  else {
    _DAT_04000280 = _DAT_04000280 & 0xffff0000;
    _DAT_04000290 = *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
    _DAT_04000298 = uVar3;
    if (_DAT_040002a0 >> 0x10 == 0) {
      uVar3 = unaff_r7 & 0xfffffff0;
      if (_DAT_040002a0 == 0) {
        uVar3 = uVar3 | 4;
      }
      if ((_DAT_040002a0 & 0x8000) != 0) {
        uVar3 = uVar3 | 8;
      }
      *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = _DAT_040002a0 | _DAT_040002a8 << 0x10;
      unaff_r7 = uVar3 - 0x8c0000;
      if (unaff_r7 != 0 && 0x8bffff < (int)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x02025820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar4;
      }
    }
    else {
      uVar3 = unaff_r7 | 2;
      unaff_r7 = uVar3 - 0x4a0000;
      if (unaff_r7 != 0 && 0x49ffff < (int)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x02025834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
        return iVar4;
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar7;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025850  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02025850(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar3 = (int)*(short *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if (iVar3 == 0) {
    uVar5 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar5 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar5 & 0xff00 | 0x2000;
    puVar6 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar6 = (ushort)uVar5 | (ushort)unaff_r7 & 0x1f;
    uVar5 = (int)unaff_r10 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar5 >> 0x10);
    puVar6[2] = (ushort)uVar5;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar5 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar5 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar5;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar5));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar3;
    }
  }
  else {
    uVar5 = unaff_r11 & 0xe00;
    iVar4 = *(int *)(unaff_r6 + (uVar5 >> 7));
    if (iVar3 == -1 && iVar4 == -0x80000000) {
      uVar7 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar5 >> 7)) = 0;
      unaff_r7 = uVar7 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202591c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar3;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar4;
      _DAT_04000298 = iVar3;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar7 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar7 = uVar7 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar7 = uVar7 | 8;
        }
        *(uint *)(unaff_r6 + (uVar5 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar7 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x020258e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar3;
        }
      }
      else {
        uVar5 = unaff_r7 | 2;
        unaff_r7 = uVar5 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x020258fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar3;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025934  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02025934(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  sVar3 = read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar7 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)unaff_r10 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar6 >> 0x10);
    puVar7[2] = (ushort)uVar6;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar4;
    }
  }
  else {
    uVar6 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar6 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar8 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar6 >> 7)) = 0;
      unaff_r7 = uVar8 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar8 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar8 = uVar8 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar8 = uVar8 | 8;
        }
        *(uint *)(unaff_r6 + (uVar6 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar8 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x020259d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar4;
        }
      }
      else {
        uVar6 = unaff_r7 | 2;
        unaff_r7 = uVar6 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x020259ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025a24  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02025a24(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ushort *puVar8;
  int unaff_r6;
  uint unaff_r7;
  uint uVar9;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar6 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar6 = *piVar6 + 2;
  sVar3 = read_m68k_bus_word();
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar7 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar7 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
    puVar8 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar8 = (ushort)uVar7 | (ushort)unaff_r7 & 0x1f;
    uVar7 = (int)unaff_r10 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar8[1] = (ushort)(uVar7 >> 0x10);
    puVar8[2] = (ushort)uVar7;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar7 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar7 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar4;
    }
  }
  else {
    uVar7 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar7 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar9 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar7 >> 7)) = 0;
      unaff_r7 = uVar9 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x02025b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar9 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar9 = uVar9 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar9 = uVar9 | 8;
        }
        *(uint *)(unaff_r6 + (uVar7 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar9 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x02025ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar4;
        }
      }
      else {
        uVar7 = unaff_r7 | 2;
        unaff_r7 = uVar7 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x02025ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025b20  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02025b20(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ushort *puVar8;
  int unaff_r6;
  uint unaff_r7;
  uint uVar9;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar6 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar6 = *piVar6 + -2;
  sVar3 = read_m68k_bus_word();
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar7 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar7 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar7 & 0xff00 | 0x2000;
    puVar8 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar8 = (ushort)uVar7 | (ushort)unaff_r7 & 0x1f;
    uVar7 = (int)unaff_r10 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar8[1] = (ushort)(uVar7 >> 0x10);
    puVar8[2] = (ushort)uVar7;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar7 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar7 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar7;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar7));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar4;
    }
  }
  else {
    uVar7 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar7 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar9 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar7 >> 7)) = 0;
      unaff_r7 = uVar9 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x02025c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar9 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar9 = uVar9 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar9 = uVar9 | 8;
        }
        *(uint *)(unaff_r6 + (uVar7 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar9 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar9) {
                    /* WARNING: Could not recover jumptable at 0x02025bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar4;
        }
      }
      else {
        uVar7 = unaff_r7 | 2;
        unaff_r7 = uVar7 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x02025be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025c1c  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02025c1c(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar9 = (ushort *)(unaff_r10 + 1);
  sVar3 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar7 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar9 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar6 >> 0x10);
    puVar7[2] = (ushort)uVar6;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar9 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar4;
    }
  }
  else {
    uVar6 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar6 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar8 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar6 >> 7)) = 0;
      unaff_r7 = uVar8 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar8 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar8 = uVar8 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar8 = uVar8 | 8;
        }
        *(uint *)(unaff_r6 + (uVar6 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar8 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
      else {
        uVar6 = unaff_r7 | 2;
        unaff_r7 = uVar6 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar9;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025d14  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02025d14(void)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar9 = unaff_r10 + 1;
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar6 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar6);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar6);
  }
  sVar3 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4);
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar7 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar9 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar6 >> 0x10);
    puVar7[2] = (ushort)uVar6;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar2 = *(ushort *)(iVar4 + 0x14);
    uVar1 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar2 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar9 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar4;
    }
  }
  else {
    uVar6 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar6 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar8 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar6 >> 7)) = 0;
      unaff_r7 = uVar8 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar8 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar8 = uVar8 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar8 = uVar8 | 8;
        }
        *(uint *)(unaff_r6 + (uVar6 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar8 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
      else {
        uVar6 = unaff_r7 | 2;
        unaff_r7 = uVar6 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar9;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025e30  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02025e30(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar9 = (ushort *)(unaff_r10 + 1);
  sVar3 = read_m68k_bus_word((int)*unaff_r10);
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar7 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar9 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar6 >> 0x10);
    puVar7[2] = (ushort)uVar6;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar9 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar4;
    }
  }
  else {
    uVar6 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar6 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar8 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar6 >> 7)) = 0;
      unaff_r7 = uVar8 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar8 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar8 = uVar8 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar8 = uVar8 | 8;
        }
        *(uint *)(unaff_r6 + (uVar6 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar8 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
      else {
        uVar6 = unaff_r7 | 2;
        unaff_r7 = uVar6 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar9;
  return (int)unaff_r7 >> 0x10;
}


// 0x02025f18  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02025f18(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar9 = unaff_r10 + 2;
  sVar3 = read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar7 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar9 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar6 >> 0x10);
    puVar7[2] = (ushort)uVar6;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar9 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar4;
    }
  }
  else {
    uVar6 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar6 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar8 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar6 >> 7)) = 0;
      unaff_r7 = uVar8 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar8 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar8 = uVar8 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar8 = uVar8 | 8;
        }
        *(uint *)(unaff_r6 + (uVar6 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar8 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02025fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
      else {
        uVar6 = unaff_r7 | 2;
        unaff_r7 = uVar6 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x02025fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar9;
  return (int)unaff_r7 >> 0x10;
}


// 0x02026008  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02026008(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar9 = (ushort *)(unaff_r10 + 1);
  sVar3 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar7 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar9 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar6 >> 0x10);
    puVar7[2] = (ushort)uVar6;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar4 + 0x14);
    uVar2 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar9 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar4;
    }
  }
  else {
    uVar6 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar6 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar8 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar6 >> 7)) = 0;
      unaff_r7 = uVar8 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x020260ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar8 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar8 = uVar8 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar8 = uVar8 | 8;
        }
        *(uint *)(unaff_r6 + (uVar6 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar8 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x020260b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
      else {
        uVar6 = unaff_r7 | 2;
        unaff_r7 = uVar6 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x020260cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar9;
  return (int)unaff_r7 >> 0x10;
}


// 0x02026104  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02026104(void)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  uint uVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar9 = unaff_r10 + 1;
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar6 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar6);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar6);
  }
  sVar3 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar4);
  iVar4 = (int)sVar3;
  if (iVar4 == 0) {
    uVar6 = *(uint *)(unaff_r6 + 0x50);
    iVar4 = *(int *)(unaff_r6 + 0x54);
    if ((uVar6 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar6 & 0xff00 | 0x2000;
    puVar7 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar7 = (ushort)uVar6 | (ushort)unaff_r7 & 0x1f;
    uVar6 = (int)puVar9 - iVar4 | *(uint *)(unaff_r6 + 0x9c);
    puVar7[1] = (ushort)(uVar6 >> 0x10);
    puVar7[2] = (ushort)uVar6;
    iVar4 = *(int *)(unaff_r6 + 0x60);
    uVar2 = *(ushort *)(iVar4 + 0x14);
    uVar1 = *(undefined2 *)(iVar4 + 0x16);
    if ((uVar2 & 0xc0) == 0) {
      uVar6 = 0xffc00000;
      unaff_r8 = iVar4;
    }
    else {
      uVar6 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar2 << 0x10 & uVar6;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar9 = (ushort *)(unaff_r8 + (CONCAT22(uVar2,uVar1) & ~uVar6));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar4;
    }
  }
  else {
    uVar6 = unaff_r11 & 0xe00;
    iVar5 = *(int *)(unaff_r6 + (uVar6 >> 7));
    if (iVar4 == -1 && iVar5 == -0x80000000) {
      uVar8 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar6 >> 7)) = 0;
      unaff_r7 = uVar8 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x02026210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
        return iVar4;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar5;
      _DAT_04000298 = iVar4;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar8 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar8 = uVar8 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar8 = uVar8 | 8;
        }
        *(uint *)(unaff_r6 + (uVar6 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar8 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar8) {
                    /* WARNING: Could not recover jumptable at 0x020261dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
      else {
        uVar6 = unaff_r7 | 2;
        unaff_r7 = uVar6 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar6) {
                    /* WARNING: Could not recover jumptable at 0x020261f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
          return iVar4;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar9;
  return (int)unaff_r7 >> 0x10;
}


// 0x02026228  m68k_divs_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int m68k_divs_word_02026228(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *puVar8;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar8 = (ushort *)(unaff_r10 + 1);
  iVar3 = (int)*unaff_r10;
  if (iVar3 == 0) {
    uVar5 = *(uint *)(unaff_r6 + 0x50);
    iVar3 = *(int *)(unaff_r6 + 0x54);
    if ((uVar5 & 0x2000) == 0) {
      iVar4 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar4 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar4 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar5 & 0xff00 | 0x2000;
    puVar6 = (ushort *)(unaff_r8 + (iVar4 - 6U & 0xffff));
    *puVar6 = (ushort)uVar5 | (ushort)unaff_r7 & 0x1f;
    uVar5 = (int)puVar8 - iVar3 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar5 >> 0x10);
    puVar6[2] = (ushort)uVar5;
    iVar3 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar3 + 0x14);
    uVar2 = *(undefined2 *)(iVar3 + 0x16);
    if ((uVar1 & 0xc0) == 0) {
      uVar5 = 0xffc00000;
      unaff_r8 = iVar3;
    }
    else {
      uVar5 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar5;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    puVar8 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar5));
    if (0 < (int)unaff_r7 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar3;
    }
  }
  else {
    uVar5 = unaff_r11 & 0xe00;
    iVar4 = *(int *)(unaff_r6 + (uVar5 >> 7));
    if (iVar3 == -1 && iVar4 == -0x80000000) {
      uVar7 = unaff_r7 & 0xfffffff0 | 4;
      *(undefined4 *)(unaff_r6 + (uVar5 >> 7)) = 0;
      unaff_r7 = uVar7 - 0x320000;
      if (unaff_r7 != 0 && 0x31ffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x020262ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
        return iVar3;
      }
    }
    else {
      _DAT_04000280 = _DAT_04000280 & 0xffff0000;
      _DAT_04000290 = iVar4;
      _DAT_04000298 = iVar3;
      if (((int)_DAT_040002a0 < 0x8000) && (-0x8001 < (int)_DAT_040002a0)) {
        uVar7 = unaff_r7 & 0xfffffff0;
        if (_DAT_040002a0 == 0) {
          uVar7 = uVar7 | 4;
        }
        if ((int)(_DAT_040002a0 << 0x10) < 0) {
          uVar7 = uVar7 | 8;
        }
        *(uint *)(unaff_r6 + (uVar5 >> 7)) = _DAT_040002a0 & 0xffff | _DAT_040002a8 << 0x10;
        unaff_r7 = uVar7 - 0x9e0000;
        if (unaff_r7 != 0 && 0x9dffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x020262b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
          return iVar3;
        }
      }
      else {
        uVar5 = unaff_r7 | 2;
        unaff_r7 = uVar5 - 0x500000;
        if (unaff_r7 != 0 && 0x4fffff < (int)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x020262cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
          return iVar3;
        }
      }
    }
  }
  *(uint *)(unaff_r6 + 0x4c) = unaff_r7;
  *(ushort **)(unaff_r6 + 0x44) = puVar8;
  return (int)unaff_r7 >> 0x10;
}

