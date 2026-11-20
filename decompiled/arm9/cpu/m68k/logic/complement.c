/* ARM9 complement — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0202a248  m68k_not_byte

void m68k_not_byte_0202a248(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = ~*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0202a270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a274  m68k_not_word

void m68k_not_word_0202a274(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(ushort *)(unaff_r6 + iVar1) = ~*(ushort *)(unaff_r6 + iVar1);
                    /* WARNING: Could not recover jumptable at 0x0202a2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a2a4  m68k_not_long

void m68k_not_long_0202a2a4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) = ~*(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0202a2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a2cc  m68k_not_byte

void m68k_not_byte_0202a2cc(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = ~*pbVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a30c  m68k_not_word

void m68k_not_word_0202a30c(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = ~*puVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a348  m68k_not_long

void m68k_not_long_0202a348(void)

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
  *puVar2 = (short)(~CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)~CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a390  m68k_not_byte

void m68k_not_byte_0202a390(void)

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
  *pbVar4 = ~*pbVar4;
                    /* WARNING: Could not recover jumptable at 0x0202a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a3e4  m68k_not_word

void m68k_not_word_0202a3e4(void)

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
  *puVar3 = ~*puVar3;
                    /* WARNING: Could not recover jumptable at 0x0202a428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a42c  m68k_not_long

void m68k_not_long_0202a42c(void)

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
  *puVar4 = (short)(~CONCAT22(uVar1,puVar4[1]) >> 0x10);
  puVar4[1] = (short)~CONCAT22(uVar1,puVar4[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a480  m68k_not_byte

void m68k_not_byte_0202a480(void)

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
  *pbVar3 = ~*pbVar3;
                    /* WARNING: Could not recover jumptable at 0x0202a4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a4d4  m68k_not_word

void m68k_not_word_0202a4d4(void)

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
  *puVar3 = ~*puVar3;
                    /* WARNING: Could not recover jumptable at 0x0202a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a51c  m68k_not_long

void m68k_not_long_0202a51c(void)

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
  *puVar4 = (short)(~CONCAT22(uVar1,puVar4[1]) >> 0x10);
  puVar4[1] = (short)~CONCAT22(uVar1,puVar4[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a570  m68k_not_byte

void m68k_not_byte_0202a570(void)

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
  *pbVar1 = ~*pbVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202a5b8  m68k_not_word

void m68k_not_word_0202a5b8(void)

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
  *puVar1 = ~*puVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202a5fc  m68k_not_long

void m68k_not_long_0202a5fc(void)

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
  *puVar2 = (short)(~CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)~CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202a64c  m68k_not_byte

void m68k_not_byte_0202a64c(void)

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
  *pbVar4 = ~*pbVar4;
                    /* WARNING: Could not recover jumptable at 0x0202a6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a6b8  m68k_not_word

void m68k_not_word_0202a6b8(void)

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
  *puVar4 = ~*puVar4;
                    /* WARNING: Could not recover jumptable at 0x0202a71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a720  m68k_not_long

void m68k_not_long_0202a720(void)

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
  *puVar5 = (short)(~CONCAT22(uVar3,puVar5[1]) >> 0x10);
  puVar5[1] = (short)~CONCAT22(uVar3,puVar5[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a794  m68k_not_byte

void m68k_not_byte_0202a794(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  pbVar1 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  *pbVar1 = ~*pbVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a7c8  m68k_not_word

void m68k_not_word_0202a7c8(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) = ~*(ushort *)((uint)*unaff_r10 + unaff_r8);
                    /* WARNING: Could not recover jumptable at 0x0202a7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a7f8  m68k_not_long

void m68k_not_long_0202a7f8(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  puVar2 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  uVar1 = *puVar2;
  *puVar2 = (short)(~CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)~CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a834  m68k_not_byte

void m68k_not_byte_0202a834(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = ~*pbVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202a86c  m68k_not_word

void m68k_not_word_0202a86c(void)

{
  ushort *puVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = ~*puVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202a8a0  m68k_not_long

void m68k_not_long_0202a8a0(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar2 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar1 = *puVar2;
  *puVar2 = (short)(~CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)~CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}

