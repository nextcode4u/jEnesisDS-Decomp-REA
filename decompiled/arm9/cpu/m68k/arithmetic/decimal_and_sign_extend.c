/* ARM9 decimal and sign extend — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x0202d1f0  m68k_nbcd_byte

void m68k_nbcd_byte_0202d1f0(void)

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

void m68k_nbcd_byte_0202d2ac(void)

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

void m68k_nbcd_byte_0202d31c(void)

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

void m68k_nbcd_byte_0202d3a0(void)

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

void m68k_nbcd_byte_0202d424(void)

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

void m68k_nbcd_byte_0202d49c(void)

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

void m68k_nbcd_byte_0202d538(void)

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

void m68k_nbcd_byte_0202d59c(void)

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


// 0x02030c54  m68k_ext_word

void m68k_ext_word(void)

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

void m68k_ext_long(void)

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

void m68k_abcd_byte_02030cac(void)

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

void m68k_abcd_byte_02030d28(void)

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

void m68k_sbcd_byte(void)

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

void m68k_sbcd(void)

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

