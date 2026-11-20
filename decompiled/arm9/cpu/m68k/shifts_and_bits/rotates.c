/* ARM9 rotates — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0202b0f4  m68k_rol_word

void m68k_rol_word_0202b0f4(void)

{
  ushort uVar1;
  ushort *puVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar1 = *puVar2;
  *puVar2 = uVar1 >> 0xf | uVar1 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202b134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b138  m68k_ror_word

void m68k_ror_word_0202b138(void)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar1 = *puVar2;
  uVar3 = uVar1 >> 1;
  if ((bool)((byte)uVar1 & 1)) {
    uVar3 = uVar3 | 0x8000;
  }
  *puVar2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0202b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b174  m68k_roxl_word

void m68k_roxl_word_0202b174(void)

{
  ushort *puVar1;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = (ushort)(unaff_r7 >> 4) & 1 | *puVar1 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202b1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b1bc  m68k_roxr_word

void m68k_roxr_word_0202b1bc(void)

{
  ushort *puVar1;
  ushort uVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  if ((unaff_r7 & 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x8000;
  }
  *puVar1 = uVar2 | *puVar1 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b330  m68k_rol_word

void m68k_rol_word_0202b330(void)

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
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3;
  *puVar3 = uVar2 + 2;
  puVar4 = (ushort *)(unaff_r8 + (uVar2 & 0xffff));
  uVar1 = *puVar4;
  *puVar4 = uVar1 >> 0xf | uVar1 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202b37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b380  m68k_ror_word

void m68k_ror_word_0202b380(void)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  ushort *puVar4;
  ushort uVar5;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3;
  *puVar3 = uVar2 + 2;
  puVar4 = (ushort *)(unaff_r8 + (uVar2 & 0xffff));
  uVar1 = *puVar4;
  uVar5 = uVar1 >> 1;
  if ((bool)((byte)uVar1 & 1)) {
    uVar5 = uVar5 | 0x8000;
  }
  *puVar4 = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0202b3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b3c8  m68k_roxl_word

void m68k_roxl_word_0202b3c8(void)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 2;
  puVar3 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  *puVar3 = (ushort)(unaff_r7 >> 4) & 1 | *puVar3 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202b418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b41c  m68k_roxr_word

void m68k_roxr_word_0202b41c(void)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 2;
  puVar3 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  if ((unaff_r7 & 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  *puVar3 = uVar4 | *puVar3 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b59c  m68k_rol_word

void m68k_rol_word_0202b59c(void)

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
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3 - 2;
  *puVar3 = uVar2;
  puVar4 = (ushort *)(unaff_r8 + (uVar2 & 0xffff));
  uVar1 = *puVar4;
  *puVar4 = uVar1 >> 0xf | uVar1 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202b5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b5ec  m68k_ror_word

void m68k_ror_word_0202b5ec(void)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  ushort *puVar4;
  ushort uVar5;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3 - 2;
  *puVar3 = uVar2;
  puVar4 = (ushort *)(unaff_r8 + (uVar2 & 0xffff));
  uVar1 = *puVar4;
  uVar5 = uVar1 >> 1;
  if ((bool)((byte)uVar1 & 1)) {
    uVar5 = uVar5 | 0x8000;
  }
  *puVar4 = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0202b630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b634  m68k_roxl_word

void m68k_roxl_word_0202b634(void)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2 - 2;
  *puVar2 = uVar1;
  puVar3 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  *puVar3 = (ushort)(unaff_r7 >> 4) & 1 | *puVar3 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202b684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b688  m68k_roxr_word

void m68k_roxr_word_0202b688(void)

{
  uint uVar1;
  uint *puVar2;
  ushort *puVar3;
  ushort uVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2 - 2;
  *puVar2 = uVar1;
  puVar3 = (ushort *)(unaff_r8 + (uVar1 & 0xffff));
  if ((unaff_r7 & 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  *puVar3 = uVar4 | *puVar3 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b7f8  m68k_rol_word

void m68k_rol_word_0202b7f8(void)

{
  ushort uVar1;
  ushort *puVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (ushort *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  uVar1 = *puVar2;
  *puVar2 = uVar1 >> 0xf | uVar1 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202b840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202b844  m68k_ror_word

void m68k_ror_word_0202b844(void)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar2 = (ushort *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  uVar1 = *puVar2;
  uVar3 = uVar1 >> 1;
  if ((bool)((byte)uVar1 & 1)) {
    uVar3 = uVar3 | 0x8000;
  }
  *puVar2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0202b884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202b888  m68k_roxl_word

void m68k_roxl_word_0202b888(void)

{
  ushort *puVar1;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  *puVar1 = (ushort)(unaff_r7 >> 4) & 1 | *puVar1 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202b8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202b8d8  m68k_roxr_word

void m68k_roxr_word_0202b8d8(void)

{
  ushort *puVar1;
  ushort uVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)
           (unaff_r8 + (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU)
           );
  if ((unaff_r7 & 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x8000;
  }
  *puVar1 = uVar2 | *puVar1 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202bad4  m68k_rol_word

void m68k_rol_word_0202bad4(void)

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
  uVar2 = *puVar4;
  *puVar4 = uVar2 >> 0xf | uVar2 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202bb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bb44  m68k_ror_word

void m68k_ror_word_0202bb44(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
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
  uVar2 = *puVar4;
  uVar5 = uVar2 >> 1;
  if ((bool)((byte)uVar2 & 1)) {
    uVar5 = uVar5 | 0x8000;
  }
  *puVar4 = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0202bba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bbac  m68k_roxl_word

void m68k_roxl_word_0202bbac(void)

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
  *puVar4 = (ushort)(unaff_r7 >> 4) & 1 | *puVar4 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202bc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bc20  m68k_roxr_word

void m68k_roxr_word_0202bc20(void)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar4 = *unaff_r10;
  iVar2 = unaff_r6 + 0x20;
  if ((uVar4 & 0x8000) == 0) {
    iVar2 = unaff_r6;
  }
  uVar1 = (uVar4 & 0x7000) >> 10;
  if ((uVar4 & 0x800) == 0) {
    iVar2 = (int)*(short *)(iVar2 + uVar1);
  }
  else {
    iVar2 = *(int *)(iVar2 + uVar1);
  }
  puVar3 = (ushort *)
           (unaff_r8 +
           (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar4 + iVar2 & 0xffffU));
  if ((unaff_r7 & 0x10) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000;
  }
  *puVar3 = uVar4 | *puVar3 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bd60  m68k_rol_word

void m68k_rol_word_0202bd60(void)

{
  ushort uVar1;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  uVar1 = *(ushort *)((uint)*unaff_r10 + unaff_r8);
  *(ushort *)((uint)*unaff_r10 + unaff_r8) = uVar1 >> 0xf | uVar1 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202bd94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bd98  m68k_ror_word

void m68k_ror_word_0202bd98(void)

{
  ushort uVar1;
  ushort uVar2;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  uVar1 = *(ushort *)((uint)*unaff_r10 + unaff_r8);
  uVar2 = uVar1 >> 1;
  if ((bool)((byte)uVar1 & 1)) {
    uVar2 = uVar2 | 0x8000;
  }
  *(ushort *)((uint)*unaff_r10 + unaff_r8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0202bdc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bdc8  m68k_roxl_word

void m68k_roxl_word_0202bdc8(void)

{
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) =
       (ushort)(unaff_r7 >> 4) & 1 | *(ushort *)((uint)*unaff_r10 + unaff_r8) << 1;
                    /* WARNING: Could not recover jumptable at 0x0202be00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202be04  m68k_roxr_word

void m68k_roxr_word_0202be04(void)

{
  ushort uVar1;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  if ((unaff_r7 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x8000;
  }
  *(ushort *)((uint)*unaff_r10 + unaff_r8) = uVar1 | *(ushort *)((uint)*unaff_r10 + unaff_r8) >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202be3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bf1c  m68k_rol_word

void m68k_rol_word_0202bf1c(void)

{
  ushort uVar1;
  ushort *puVar2;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar2 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar1 = *puVar2;
  *puVar2 = uVar1 >> 0xf | uVar1 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202bf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202bf58  m68k_ror_word

void m68k_ror_word_0202bf58(void)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar2 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar1 = *puVar2;
  uVar3 = uVar1 >> 1;
  if ((bool)((byte)uVar1 & 1)) {
    uVar3 = uVar3 | 0x8000;
  }
  *puVar2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0202bf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202bf8c  m68k_roxl_word

void m68k_roxl_word_0202bf8c(void)

{
  ushort *puVar1;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = (ushort)(unaff_r7 >> 4) & 1 | *puVar1 << 1;
                    /* WARNING: Could not recover jumptable at 0x0202bfc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202bfcc  m68k_roxr_word

void m68k_roxr_word_0202bfcc(void)

{
  ushort *puVar1;
  ushort uVar2;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  if ((unaff_r7 & 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x8000;
  }
  *puVar1 = uVar2 | *puVar1 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202c008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02031828  m68k_rol_byte

void m68k_rol_byte_02031828(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 != 0) {
    *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = bVar1 << uVar2 | bVar1 >> (8 - uVar2 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x0203186c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0203188c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031890  m68k_rol_byte

void m68k_rol_byte_02031890(void)

{
  byte bVar1;
  byte bVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  bVar2 = *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if ((bVar1 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02031918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((bVar1 & 7) != 0) {
    *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         bVar2 << (bVar1 & 7) | bVar2 >> (8 - (bVar1 & 7) & 0xff);
                    /* WARNING: Could not recover jumptable at 0x020318e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0203191c  m68k_rol_word

void m68k_rol_word_0203191c(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  uVar2 = *(ushort *)(unaff_r6 + iVar1);
  uVar3 = unaff_r11 >> 9 & 7;
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  *(ushort *)(unaff_r6 + iVar1) = uVar2 << uVar3 | uVar2 >> (0x10 - uVar3 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x02031964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031968  m68k_rol_word

void m68k_rol_word_02031968(void)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar2 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar1 = (unaff_r11 & 7) * 4;
  uVar3 = *(ushort *)(unaff_r6 + iVar1);
  if ((bVar2 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x020319f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((bVar2 & 0xf) != 0) {
    *(ushort *)(unaff_r6 + iVar1) = uVar3 << (bVar2 & 0xf) | uVar3 >> (0x10 - (bVar2 & 0xf) & 0xff);
                    /* WARNING: Could not recover jumptable at 0x020319bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x020319dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020319f8  m68k_rol_long

void m68k_rol_long_020319f8(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) = uVar1 << uVar2 | uVar1 >> (0x20 - uVar2 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x02031a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031a3c  m68k_rol_long

void m68k_rol_long_02031a3c(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if ((bVar1 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02031ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((bVar1 & 0x1f) != 0) {
    *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         uVar2 << (bVar1 & 0x1f) | uVar2 >> (0x20 - (bVar1 & 0x1f) & 0xff);
                    /* WARNING: Could not recover jumptable at 0x02031a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031ac4  m68k_ror_byte

void m68k_ror_byte_02031ac4(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 != 0) {
    *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = bVar1 >> uVar2 | bVar1 << (8 - uVar2 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x02031b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031b24  m68k_ror_byte

void m68k_ror_byte_02031b24(void)

{
  byte bVar1;
  byte bVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  bVar2 = *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if ((bVar1 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02031ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((bVar1 & 7) != 0) {
    *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         bVar2 >> (bVar1 & 7) | bVar2 << (8 - (bVar1 & 7) & 0xff);
                    /* WARNING: Could not recover jumptable at 0x02031b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031ba8  m68k_ror_word

void m68k_ror_word_02031ba8(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  uVar2 = *(ushort *)(unaff_r6 + iVar1);
  uVar3 = unaff_r11 >> 9 & 7;
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  *(ushort *)(unaff_r6 + iVar1) = uVar2 >> uVar3 | uVar2 << (0x10 - uVar3 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x02031bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031bf4  m68k_ror_word

void m68k_ror_word_02031bf4(void)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar2 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar1 = (unaff_r11 & 7) * 4;
  uVar3 = *(ushort *)(unaff_r6 + iVar1);
  if ((bVar2 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02031c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((bVar2 & 0xf) != 0) {
    *(ushort *)(unaff_r6 + iVar1) = uVar3 >> (bVar2 & 0xf) | uVar3 << (0x10 - (bVar2 & 0xf) & 0xff);
                    /* WARNING: Could not recover jumptable at 0x02031c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031c7c  m68k_ror_long

void m68k_ror_long_02031c7c(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) = uVar1 >> uVar2 | uVar1 << 0x20 - uVar2;
                    /* WARNING: Could not recover jumptable at 0x02031cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031cb8  m68k_ror_long

void m68k_ror_long_02031cb8(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if ((bVar1 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02031d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((bVar1 & 0x1f) != 0) {
    *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         uVar2 >> (bVar1 & 0x1f) | uVar2 << 0x20 - (bVar1 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x02031cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031d34  m68k_roxl_byte

void m68k_roxl_byte_02031d34(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  if ((unaff_r7 & 0x10) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       (byte)(uVar1 << uVar2) | (byte)(uVar1 >> (9 - uVar2 & 0xff));
                    /* WARNING: Could not recover jumptable at 0x02031d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031d84  m68k_roxl_byte

/* WARNING: Removing unreachable block (ram,0x02031de4) */

void m68k_roxl_byte_02031d84(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = (uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if ((bVar1 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02031dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((unaff_r7 & 0x10) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       (byte)(uVar2 << (uint)(byte)(&DAT_020169b0)[bVar1 & 0x3f]) |
       (byte)(uVar2 >> (9 - (byte)(&DAT_020169b0)[bVar1 & 0x3f] & 0xff));
                    /* WARNING: Could not recover jumptable at 0x02031ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031e00  m68k_roxl_word

void m68k_roxl_word_02031e00(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  uVar2 = (uint)*(ushort *)(unaff_r6 + iVar1);
  uVar3 = unaff_r11 >> 9 & 7;
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if ((unaff_r7 & 0x10) != 0) {
    uVar2 = uVar2 | 0x10000;
  }
  *(ushort *)(unaff_r6 + iVar1) =
       (ushort)(uVar2 << uVar3) | (ushort)(uVar2 >> (0x11 - uVar3 & 0xff));
                    /* WARNING: Could not recover jumptable at 0x02031e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031e54  m68k_roxl_word

/* WARNING: Removing unreachable block (ram,0x02031eb8) */

void m68k_roxl_word_02031e54(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar2 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar1 = (unaff_r11 & 7) * 4;
  uVar3 = (uint)*(ushort *)(unaff_r6 + iVar1);
  if ((bVar2 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02031ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((unaff_r7 & 0x10) != 0) {
    uVar3 = uVar3 | 0x10000;
  }
  *(ushort *)(unaff_r6 + iVar1) =
       (ushort)(uVar3 << (uint)(byte)(&DAT_020169f0)[bVar2 & 0x3f]) |
       (ushort)(uVar3 >> (0x11 - (byte)(&DAT_020169f0)[bVar2 & 0x3f] & 0xff));
                    /* WARNING: Could not recover jumptable at 0x02031eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031ed4  m68k_roxl_long

void m68k_roxl_long_02031ed4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  if ((unaff_r7 & 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1 << (uVar2 - 1 & 0xff);
  }
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       uVar1 << uVar2 | uVar1 >> (0x21 - uVar2 & 0xff) | uVar3;
                    /* WARNING: Could not recover jumptable at 0x02031f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031f30  m68k_roxl_long

void m68k_roxl_long_02031f30(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if (((bVar1 & 0x3f) != 0) && (uVar3 = (uint)(byte)(&DAT_02016a30)[bVar1 & 0x3f], uVar3 != 0)) {
    if ((unaff_r7 & 0x10) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1 << (uVar3 - 1 & 0xff);
    }
    *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         uVar2 << uVar3 | uVar2 >> (0x21 - uVar3 & 0xff) | uVar4;
                    /* WARNING: Could not recover jumptable at 0x02031f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031fc0  m68k_roxr_byte

void m68k_roxr_byte(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  if ((unaff_r7 & 0x10) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       (byte)(uVar1 >> uVar2) | (byte)(uVar1 << (9 - uVar2 & 0xff));
                    /* WARNING: Could not recover jumptable at 0x0203200c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032010  m68k_roxr_long

/* WARNING: Removing unreachable block (ram,0x02032070) */

void m68k_roxr_long_02032010(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = (uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if ((bVar1 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x02032088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((unaff_r7 & 0x10) != 0) {
    uVar2 = uVar2 | 0x100;
  }
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       (byte)(uVar2 >> (uint)(byte)(&DAT_020169b0)[bVar1 & 0x3f]) |
       (byte)(uVar2 << (9 - (byte)(&DAT_020169b0)[bVar1 & 0x3f] & 0xff));
                    /* WARNING: Could not recover jumptable at 0x02032068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0203208c  m68k_roxr_word

void m68k_roxr_word_0203208c(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  uVar2 = (uint)*(ushort *)(unaff_r6 + iVar1);
  uVar3 = unaff_r11 >> 9 & 7;
  if (uVar3 == 0) {
    uVar3 = 8;
  }
  if ((unaff_r7 & 0x10) != 0) {
    uVar2 = uVar2 | 0x10000;
  }
  *(ushort *)(unaff_r6 + iVar1) =
       (ushort)(uVar2 >> uVar3) | (ushort)(uVar2 << (0x11 - uVar3 & 0xff));
                    /* WARNING: Could not recover jumptable at 0x020320dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020320e0  m68k_roxr_word

/* WARNING: Removing unreachable block (ram,0x02032144) */

void m68k_roxr_word_020320e0(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar2 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar1 = (unaff_r11 & 7) * 4;
  uVar3 = (uint)*(ushort *)(unaff_r6 + iVar1);
  if ((bVar2 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0203215c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if ((unaff_r7 & 0x10) != 0) {
    uVar3 = uVar3 | 0x10000;
  }
  *(ushort *)(unaff_r6 + iVar1) =
       (ushort)(uVar3 >> (uint)(byte)(&DAT_020169f0)[bVar2 & 0x3f]) |
       (ushort)(uVar3 << (0x11 - (byte)(&DAT_020169f0)[bVar2 & 0x3f] & 0xff));
                    /* WARNING: Could not recover jumptable at 0x0203213c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032160  m68k_roxr_long

void m68k_roxr_long_02032160(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    uVar2 = 8;
  }
  if ((unaff_r7 & 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1 << (0x20 - uVar2 & 0xff);
  }
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       uVar1 >> uVar2 | uVar1 << (0x21 - uVar2 & 0xff) | uVar3;
                    /* WARNING: Could not recover jumptable at 0x020321b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020321bc  m68k_roxr_long

void m68k_roxr_long_020321bc(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  if (((bVar1 & 0x3f) != 0) && (uVar3 = (uint)(byte)(&DAT_02016a30)[bVar1 & 0x3f], uVar3 != 0)) {
    if ((unaff_r7 & 0x10) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1 << (0x20 - uVar3 & 0xff);
    }
    *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         uVar2 >> uVar3 | uVar2 << (0x21 - uVar3 & 0xff) | uVar4;
                    /* WARNING: Could not recover jumptable at 0x02032228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02032248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

