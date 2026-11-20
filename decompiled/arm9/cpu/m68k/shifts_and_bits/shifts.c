/* ARM9 shifts — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0202aff8  m68k_asl_word

void m68k_asl_word_0202aff8(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = (ushort)(((uint)*puVar1 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202b03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b040  m68k_asr_word_or_bftst

void m68k_asr_word_or_bftst_0202b040(void)

{
  short *psVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  psVar1 = (short *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *psVar1 = *psVar1 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b07c  m68k_lsl_word

void m68k_lsl_word_0202b07c(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = (ushort)(((uint)*puVar1 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202b0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b0bc  m68k_lsr_word

void m68k_lsr_word_0202b0bc(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = *puVar1 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b204  m68k_asl_word

void m68k_asl_word_0202b204(void)

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
  *puVar3 = (ushort)(((uint)*puVar3 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b258  m68k_asr_word

void m68k_asr_word_0202b258(void)

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
  *psVar3 = *psVar3 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b2a0  m68k_lsl_word

void m68k_lsl_word_0202b2a0(void)

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
  *puVar3 = (ushort)(((uint)*puVar3 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202b2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b2ec  m68k_lsr_word

void m68k_lsr_word_0202b2ec(void)

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
  *puVar3 = *puVar3 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b470  m68k_asl_word

void m68k_asl_word_0202b470(void)

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
  *puVar3 = (ushort)(((uint)*puVar3 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202b4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b4c4  m68k_asr_word

void m68k_asr_word_0202b4c4(void)

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
  *psVar3 = *psVar3 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b50c  m68k_lsl_word

void m68k_lsl_word_0202b50c(void)

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
  *puVar3 = (ushort)(((uint)*puVar3 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202b554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b558  m68k_lsr_word

void m68k_lsr_word_0202b558(void)

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
  *puVar3 = *puVar3 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202b6dc  m68k_asl_word

void m68k_asl_word_0202b6dc(void)

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
  *puVar1 = (ushort)(((uint)*puVar1 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202b728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202b72c  m68k_asr_word_or_bftst

void m68k_asr_word_or_bftst_0202b72c(void)

{
  short *psVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  psVar1 = (short *)(unaff_r8 +
                    (*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10 & 0xffffU));
  *psVar1 = *psVar1 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202b770  m68k_lsl_word

void m68k_lsl_word_0202b770(void)

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
  *puVar1 = (ushort)(((uint)*puVar1 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202b7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202b7b8  m68k_lsr_word

void m68k_lsr_word_0202b7b8(void)

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
  *puVar1 = *puVar1 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202b7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202b928  m68k_asl_word

void m68k_asl_word_0202b928(void)

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
  *puVar4 = (ushort)(((uint)*puVar4 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202b998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202b99c  m68k_asr_word_or_bftst

void m68k_asr_word_or_bftst_0202b99c(void)

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
  *psVar4 = *psVar4 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202ba00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202ba04  m68k_lsl_word

void m68k_lsl_word_0202ba04(void)

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
  *puVar4 = (ushort)(((uint)*puVar4 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202ba6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202ba70  m68k_lsr_word

void m68k_lsr_word_0202ba70(void)

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
  *puVar4 = *puVar4 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202bad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bc94  m68k_asl_word

void m68k_asl_word_0202bc94(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) =
       (ushort)(((uint)*(ushort *)((uint)*unaff_r10 + unaff_r8) << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202bccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bcd0  m68k_asr_word_or_bftst

void m68k_asr_word_or_bftst_0202bcd0(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(short *)((uint)*unaff_r10 + unaff_r8) = *(short *)((uint)*unaff_r10 + unaff_r8) >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202bcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bd00  m68k_lsl_word

void m68k_lsl_word_0202bd00(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) =
       (ushort)(((uint)*(ushort *)((uint)*unaff_r10 + unaff_r8) << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202bd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202bd34  m68k_lsr_word

void m68k_lsr_word_0202bd34(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) = *(ushort *)((uint)*unaff_r10 + unaff_r8) >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202be40  m68k_asl_word

void m68k_asl_word_0202be40(void)

{
  ushort *puVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = (ushort)(((uint)*puVar1 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202be7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202be80  m68k_asr_word_or_bftst

void m68k_asr_word_or_bftst_0202be80(void)

{
  short *psVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  psVar1 = (short *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *psVar1 = *psVar1 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202beb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202beb4  m68k_lsl_word

void m68k_lsl_word_0202beb4(void)

{
  ushort *puVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = (ushort)(((uint)*puVar1 << 0x11) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x0202bee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202beec  m68k_lsr_word

void m68k_lsr_word_0202beec(void)

{
  ushort *puVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = *puVar1 >> 1;
                    /* WARNING: Could not recover jumptable at 0x0202bf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02030fa8  m68k_asl_byte

void m68k_asl_byte_02030fa8(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = unaff_r11 & 7;
  uVar2 = unaff_r11 >> 9 & 7;
  if (uVar2 == 0) {
    *(undefined1 *)(unaff_r6 + uVar1 * 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x0203102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(char *)(unaff_r6 + uVar1 * 4) =
       (char)((((uint)*(byte *)(unaff_r6 + uVar1 * 4) << 0x18) << uVar2) >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02031008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031030  m68k_asl_byte

void m68k_asl_byte_02031030(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = unaff_r11 & 7;
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = bVar1 & 0x3f;
  if ((bVar1 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x020310e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if (7 < uVar3) {
    *(undefined1 *)(unaff_r6 + uVar2 * 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x020310c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(char *)(unaff_r6 + uVar2 * 4) =
       (char)((((uint)*(byte *)(unaff_r6 + uVar2 * 4) << 0x18) << uVar3) >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0203109c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020310e4  m68k_asl_word

void m68k_asl_word_020310e4(void)

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
       (short)((((uint)*(ushort *)(unaff_r6 + iVar1) << 0x10) << uVar2) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02031144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031148  m68k_asl_word

void m68k_asl_word_02031148(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  bVar2 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = bVar2 & 0x3f;
  if ((bVar2 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x020311f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if (0xf < uVar3) {
    *(undefined2 *)(unaff_r6 + iVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x020311d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(short *)(unaff_r6 + iVar1) =
       (short)((((uint)*(ushort *)(unaff_r6 + iVar1) << 0x10) << uVar3) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020311b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020311fc  m68k_asl_long

void m68k_asl_long_020311fc(void)

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
  *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) << uVar1;
                    /* WARNING: Could not recover jumptable at 0x0203124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031250  m68k_asl_long

void m68k_asl_long_02031250(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = unaff_r11 & 7;
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = bVar1 & 0x3f;
  if ((bVar1 & 0x3f) == 0) {
                    /* WARNING: Could not recover jumptable at 0x020312ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  if (0x1f < uVar3) {
    *(undefined4 *)(unaff_r6 + uVar2 * 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x020312d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
  *(int *)(unaff_r6 + uVar2 * 4) = *(int *)(unaff_r6 + uVar2 * 4) << uVar3;
                    /* WARNING: Could not recover jumptable at 0x020312ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020312f0  m68k_asr_byte

void m68k_asr_byte_020312f0(void)

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
  *(char *)(unaff_r6 + iVar1) = (char)((int)*(char *)(unaff_r6 + iVar1) >> uVar2);
                    /* WARNING: Could not recover jumptable at 0x0203132c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031330  m68k_asr_byte

void m68k_asr_byte_02031330(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(char *)(unaff_r6 + iVar1) =
       (char)((int)*(char *)(unaff_r6 + iVar1) >>
             (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 0x3f));
                    /* WARNING: Could not recover jumptable at 0x0203136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031370  m68k_asr_word

void m68k_asr_word_02031370(void)

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
  *(short *)(unaff_r6 + iVar1) = (short)((int)*(short *)(unaff_r6 + iVar1) >> uVar2);
                    /* WARNING: Could not recover jumptable at 0x020313ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020313b0  m68k_asr_word

void m68k_asr_word_020313b0(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(short *)(unaff_r6 + iVar1) =
       (short)((int)*(short *)(unaff_r6 + iVar1) >>
              (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 0x3f));
                    /* WARNING: Could not recover jumptable at 0x020313ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020313f0  m68k_asr_long

void m68k_asr_long_020313f0(void)

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
  *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) >> uVar1;
                    /* WARNING: Could not recover jumptable at 0x02031428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0203142c  m68k_asr_long

void m68k_asr_long_0203142c(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) >>
       (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 0x3f);
                    /* WARNING: Could not recover jumptable at 0x02031464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031468  m68k_lsl_byte

void m68k_lsl_byte_02031468(void)

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
       (char)((((uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) << 0x18) << uVar1) >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x020314a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020314ac  m68k_lsl_byte

void m68k_lsl_byte_020314ac(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  if ((bVar1 & 0x3f) != 0) {
    *(char *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         (char)((((uint)*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) << 0x18) << (bVar1 & 0x3f)) >>
               0x18);
                    /* WARNING: Could not recover jumptable at 0x020314f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0203150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031510  m68k_lsl_word

void m68k_lsl_word_02031510(void)

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
       (short)((((uint)*(ushort *)(unaff_r6 + iVar1) << 0x10) << uVar2) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x02031554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031558  m68k_lsl_word

void m68k_lsl_word_02031558(void)

{
  int iVar1;
  byte bVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar2 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar1 = (unaff_r11 & 7) * 4;
  if ((bVar2 & 0x3f) != 0) {
    *(short *)(unaff_r6 + iVar1) =
         (short)((((uint)*(ushort *)(unaff_r6 + iVar1) << 0x10) << (bVar2 & 0x3f)) >> 0x10);
                    /* WARNING: Could not recover jumptable at 0x020315a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x020315bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020315c0  m68k_lsl_long

void m68k_lsl_long_020315c0(void)

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
  *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) << uVar1;
                    /* WARNING: Could not recover jumptable at 0x020315f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020315fc  m68k_lsl_long

void m68k_lsl_long_020315fc(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  if ((bVar1 & 0x3f) != 0) {
    *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         *(int *)(unaff_r6 + (unaff_r11 & 7) * 4) << (bVar1 & 0x3f);
                    /* WARNING: Could not recover jumptable at 0x02031638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031658  m68k_lsr_byte

void m68k_lsr_byte_02031658(void)

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
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) >> uVar1;
                    /* WARNING: Could not recover jumptable at 0x0203168c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031690  m68k_lsr_byte

void m68k_lsr_byte_02031690(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  if ((bVar1 & 0x3f) != 0) {
    *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) >> (bVar1 & 0x3f);
                    /* WARNING: Could not recover jumptable at 0x020316d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x020316ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020316f0  m68k_lsr_word

void m68k_lsr_word_020316f0(void)

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
  *(ushort *)(unaff_r6 + iVar1) = *(ushort *)(unaff_r6 + iVar1) >> uVar2;
                    /* WARNING: Could not recover jumptable at 0x02031728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0203172c  m68k_lsr_word

void m68k_lsr_word_0203172c(void)

{
  int iVar1;
  byte bVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar2 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar1 = (unaff_r11 & 7) * 4;
  if ((bVar2 & 0x3f) != 0) {
    *(ushort *)(unaff_r6 + iVar1) = *(ushort *)(unaff_r6 + iVar1) >> (bVar2 & 0x3f);
                    /* WARNING: Could not recover jumptable at 0x02031770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0203178c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02031790  m68k_lsr_long

void m68k_lsr_long_02031790(void)

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
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) >> uVar1;
                    /* WARNING: Could not recover jumptable at 0x020317c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020317c8  m68k_lsr_long

void m68k_lsr_long_020317c8(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  if ((bVar1 & 0x3f) != 0) {
    *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
         *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) >> (bVar1 & 0x3f);
                    /* WARNING: Could not recover jumptable at 0x02031808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02031824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

