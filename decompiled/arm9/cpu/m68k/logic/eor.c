/* ARM9 eor — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x02029318  m68k_eor_byte

void m68k_eor_byte_02029318(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) ^ *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202934c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02029350  m68k_eor_word

void m68k_eor_word_02029350(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(ushort *)(unaff_r6 + iVar1) =
       *(ushort *)(unaff_r6 + iVar1) ^ *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202938c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02029390  m68k_eor_long

void m68k_eor_long_02029390(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) ^ *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020293bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020293c0  m68k_eor_byte

void m68k_eor_byte_020293c0(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = *pbVar1 ^ *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202940c  m68k_eor_word

void m68k_eor_word_0202940c(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = *puVar1 ^ *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02029458  m68k_eor_long

void m68k_eor_long_02029458(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = CONCAT22(*puVar1,puVar1[1]) ^ *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x020294a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020294a8  m68k_eor_byte

void m68k_eor_byte_020294a8(void)

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
  *pbVar4 = *pbVar4 ^ *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02029508  m68k_eor_word

void m68k_eor_word_02029508(void)

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
  *puVar3 = *puVar3 ^ *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202955c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02029560  m68k_eor_long

void m68k_eor_long_02029560(void)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 4;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar1 & 0xffff));
  uVar1 = CONCAT22(*puVar3,puVar3[1]) ^ *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)(uVar1 >> 0x10);
  puVar3[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x020295b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020295bc  m68k_eor_byte

void m68k_eor_byte_020295bc(void)

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
  *pbVar3 = *pbVar3 ^ *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202961c  m68k_eor_word

void m68k_eor_word_0202961c(void)

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
  *puVar3 = *puVar3 ^ *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02029674  m68k_eor_long

void m68k_eor_long_02029674(void)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2 - 4;
  *puVar2 = uVar1;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar1 & 0xffff));
  uVar1 = CONCAT22(*puVar3,puVar3[1]) ^ *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)(uVar1 >> 0x10);
  puVar3[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x020296cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020296d0  m68k_eor_byte

void m68k_eor_byte_020296d0(void)

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
  *pbVar1 = *pbVar1 ^ *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02029724  m68k_eor_word

void m68k_eor_word_02029724(void)

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
  *puVar1 = *puVar1 ^ *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02029778  m68k_eor_long

void m68k_eor_long_02029778(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  uVar2 = CONCAT22(*puVar1,puVar1[1]) ^ *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x020297cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020297d0  m68k_eor_byte

void m68k_eor_byte_020297d0(void)

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
  *pbVar4 = *pbVar4 ^ *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02029848  m68k_eor_word

void m68k_eor_word_02029848(void)

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
  *puVar4 = *puVar4 ^ *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020298bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020298c0  m68k_eor_long

void m68k_eor_long_020298c0(void)

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
  uVar4 = CONCAT22(*puVar3,puVar3[1]) ^ *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)(uVar4 >> 0x10);
  puVar3[1] = (short)uVar4;
                    /* WARNING: Could not recover jumptable at 0x02029938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202993c  m68k_eor_byte

void m68k_eor_byte_0202993c(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 ^ *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202997c  m68k_eor_word

void m68k_eor_word_0202997c(void)

{
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) =
       *(ushort *)((uint)*unaff_r10 + unaff_r8) ^ *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7))
  ;
                    /* WARNING: Could not recover jumptable at 0x020299b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020299bc  m68k_eor_long

void m68k_eor_long_020299bc(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) ^ *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x020299fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02029a00  m68k_eor_byte

void m68k_eor_byte_02029a00(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 ^ *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02029a44  m68k_eor_word

void m68k_eor_word_02029a44(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = *puVar1 ^ *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02029a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02029a88  m68k_eor_long

void m68k_eor_long_02029a88(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) ^ *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02029acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02029ad0  m68k_eori_byte

void m68k_eori_byte_02029ad0(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) ^ *unaff_r10
  ;
                    /* WARNING: Could not recover jumptable at 0x02029b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02029b04  m68k_eori_word

void m68k_eori_word_02029b04(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(ushort *)(unaff_r6 + iVar1) = *(ushort *)(unaff_r6 + iVar1) ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02029b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02029b3c  m68k_eori_long

void m68k_eori_long_02029b3c(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) ^ CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x02029b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02029b70  m68k_eori_byte

void m68k_eori_byte_02029b70(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = *pbVar1 ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02029bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02029bb8  m68k_eori_word

void m68k_eori_word_02029bb8(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = *puVar1 ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02029bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02029bfc  m68k_eori_long

void m68k_eori_long_02029bfc(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = CONCAT22(*puVar1,puVar1[1]) ^ CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02029c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02029c50  m68k_eori_byte

void m68k_eori_byte_02029c50(void)

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
  *pbVar5 = *pbVar5 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x02029ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02029cac  m68k_eori_word

void m68k_eori_word_02029cac(void)

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
  *puVar4 = *puVar4 ^ uVar1;
                    /* WARNING: Could not recover jumptable at 0x02029cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02029cfc  m68k_eori_long

void m68k_eori_long_02029cfc(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 *puVar5;
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
  uVar3 = CONCAT22(*puVar5,puVar5[1]) ^ CONCAT22(uVar1,uVar2);
  *puVar5 = (short)(uVar3 >> 0x10);
  puVar5[1] = (short)uVar3;
                    /* WARNING: Could not recover jumptable at 0x02029d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02029d5c  m68k_eori_byte

void m68k_eori_byte_02029d5c(void)

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
  *pbVar4 = *pbVar4 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x02029db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02029db8  m68k_eori_word

void m68k_eori_word_02029db8(void)

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
  *puVar4 = *puVar4 ^ uVar1;
                    /* WARNING: Could not recover jumptable at 0x02029e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02029e08  m68k_eori_long

void m68k_eori_long_02029e08(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined2 *puVar5;
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
  uVar3 = CONCAT22(*puVar5,puVar5[1]) ^ CONCAT22(uVar1,uVar2);
  *puVar5 = (short)(uVar3 >> 0x10);
  puVar5[1] = (short)uVar3;
                    /* WARNING: Could not recover jumptable at 0x02029e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02029e68  m68k_eori_byte

void m68k_eori_byte_02029e68(void)

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
  *pbVar1 = *pbVar1 ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02029eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02029eb8  m68k_eori_word

void m68k_eori_word_02029eb8(void)

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
  *puVar1 = *puVar1 ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02029f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x02029f04  m68k_eori_long

void m68k_eori_long_02029f04(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(short)unaff_r10[2] & 0xffffU));
  uVar2 = CONCAT22(*puVar1,puVar1[1]) ^ CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02029f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x02029f60  m68k_eori_byte

void m68k_eori_byte_02029f60(void)

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
  *pbVar4 = *pbVar4 ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02029fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02029fd4  m68k_eori_word

void m68k_eori_word_02029fd4(void)

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
  *puVar4 = *puVar4 ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0202a040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x0202a044  m68k_eori_long

void m68k_eori_long_0202a044(void)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = unaff_r10[2];
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
  uVar4 = CONCAT22(*puVar3,puVar3[1]) ^ CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar3 = (short)(uVar4 >> 0x10);
  puVar3[1] = (short)uVar4;
                    /* WARNING: Could not recover jumptable at 0x0202a0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x0202a0c4  m68k_eori_byte

void m68k_eori_byte_0202a0c4(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0202a0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202a100  m68k_eori_word

void m68k_eori_word_0202a100(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[1] + unaff_r8) =
       *(ushort *)((uint)unaff_r10[1] + unaff_r8) ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0202a134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x0202a138  m68k_eori_long

void m68k_eori_long_0202a138(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[2] + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) ^ CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x0202a17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x0202a180  m68k_eori_byte

void m68k_eori_byte_0202a180(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 4) + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0202a1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x0202a1c0  m68k_eori_word

void m68k_eori_word_0202a1c0(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[2] + unaff_r8) =
       *(ushort *)((uint)unaff_r10[2] + unaff_r8) ^ *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0202a1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[3] * 4))();
  return;
}


// 0x0202a1fc  m68k_eori_long

void m68k_eori_long_0202a1fc(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[3] + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) ^ CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x0202a244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[4] * 4))();
  return;
}


// 0x02032888  m68k_eori_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_eori_word_02032888(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  int iVar8;
  
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) != 0) {
    uVar4 = (*(uint *)(unaff_r6 + 0x50) & 0xa700 | unaff_r7 & 0x1f) ^ (uint)*unaff_r10;
    *(uint *)(unaff_r6 + 0x50) = uVar4 & 0xa700;
    uVar5 = uVar4 & 0x1f;
    if ((uVar4 & 0x2000) == 0) {
      param_2 = *(undefined4 *)(unaff_r6 + 0x3c);
      uVar5 = *(uint *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = param_2;
      *(uint *)(unaff_r6 + 0x3c) = uVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x020328dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))(unaff_r7 & 0x1f,param_2,uVar5);
    return iVar3;
  }
  iVar3 = unaff_r7 - 0x22;
  uVar4 = *(uint *)(unaff_r6 + 0x50);
  iVar8 = *(int *)(unaff_r6 + 0x54);
  if ((uVar4 & 0x2000) == 0) {
    iVar6 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar6 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar6 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar4 & 0xff00 | 0x2000;
  puVar7 = (ushort *)(unaff_r8 + (iVar6 - 6U & 0xffff));
  *puVar7 = (ushort)uVar4 | (ushort)iVar3 & 0x1f;
  uVar4 = (int)unaff_r10 - iVar8 | *(uint *)(unaff_r6 + 0x9c);
  puVar7[1] = (ushort)(uVar4 >> 0x10);
  puVar7[2] = (ushort)uVar4;
  iVar8 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar8 + 0x20);
  uVar2 = *(undefined2 *)(iVar8 + 0x22);
  if ((uVar1 & 0xc0) == 0) {
    uVar4 = 0xffc00000;
    unaff_r8 = iVar8;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar4;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar7 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar4));
  if (iVar3 >> 0x10 < 1) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar7;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
  return iVar3;
}


// 0x02032a40  m68k_eori_byte

void m68k_eori_byte_02032a40(undefined4 param_1,undefined4 param_2)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02032a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))(param_1,param_2,*unaff_r10 & 0x1f);
  return;
}

