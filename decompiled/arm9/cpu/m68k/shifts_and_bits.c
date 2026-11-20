/* ARM9 shifts and bits — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x0202aff8  m68k_asl_word

void m68k_dispatch_0202aff8(void)

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

void m68k_dispatch_0202b040(void)

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

void m68k_dispatch_0202b07c(void)

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

void m68k_dispatch_0202b0bc(void)

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


// 0x0202b0f4  m68k_rol_word

void m68k_dispatch_0202b0f4(void)

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

void m68k_dispatch_0202b138(void)

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

void m68k_dispatch_0202b174(void)

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

void m68k_dispatch_0202b1bc(void)

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


// 0x0202b204  m68k_asl_word

void m68k_dispatch_0202b204(void)

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

void m68k_dispatch_0202b258(void)

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

void m68k_dispatch_0202b2a0(void)

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

void m68k_dispatch_0202b2ec(void)

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


// 0x0202b330  m68k_rol_word

void m68k_dispatch_0202b330(void)

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

void m68k_dispatch_0202b380(void)

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

void m68k_dispatch_0202b3c8(void)

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

void m68k_dispatch_0202b41c(void)

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


// 0x0202b470  m68k_asl_word

void m68k_dispatch_0202b470(void)

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

void m68k_dispatch_0202b4c4(void)

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

void m68k_dispatch_0202b50c(void)

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

void m68k_dispatch_0202b558(void)

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


// 0x0202b59c  m68k_rol_word

void m68k_dispatch_0202b59c(void)

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

void m68k_dispatch_0202b5ec(void)

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

void m68k_dispatch_0202b634(void)

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

void m68k_dispatch_0202b688(void)

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


// 0x0202b6dc  m68k_asl_word

void m68k_dispatch_0202b6dc(void)

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

void m68k_dispatch_0202b72c(void)

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

void m68k_dispatch_0202b770(void)

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

void m68k_dispatch_0202b7b8(void)

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


// 0x0202b7f8  m68k_rol_word

void m68k_dispatch_0202b7f8(void)

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

void m68k_dispatch_0202b844(void)

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

void m68k_dispatch_0202b888(void)

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

void m68k_dispatch_0202b8d8(void)

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


// 0x0202b928  m68k_asl_word

void m68k_dispatch_0202b928(void)

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

void m68k_dispatch_0202b99c(void)

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

void m68k_dispatch_0202ba04(void)

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

void m68k_dispatch_0202ba70(void)

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


// 0x0202bad4  m68k_rol_word

void m68k_dispatch_0202bad4(void)

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

void m68k_dispatch_0202bb44(void)

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

void m68k_dispatch_0202bbac(void)

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

void m68k_dispatch_0202bc20(void)

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


// 0x0202bc94  m68k_asl_word

void m68k_dispatch_0202bc94(void)

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

void m68k_dispatch_0202bcd0(void)

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

void m68k_dispatch_0202bd00(void)

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

void m68k_dispatch_0202bd34(void)

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


// 0x0202bd60  m68k_rol_word

void m68k_dispatch_0202bd60(void)

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

void m68k_dispatch_0202bd98(void)

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

void m68k_dispatch_0202bdc8(void)

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

void m68k_dispatch_0202be04(void)

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


// 0x0202be40  m68k_asl_word

void m68k_dispatch_0202be40(void)

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

void m68k_dispatch_0202be80(void)

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

void m68k_dispatch_0202beb4(void)

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

void m68k_dispatch_0202beec(void)

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


// 0x0202bf1c  m68k_rol_word

void m68k_dispatch_0202bf1c(void)

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

void m68k_dispatch_0202bf58(void)

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

void m68k_dispatch_0202bf8c(void)

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

void m68k_dispatch_0202bfcc(void)

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


// 0x0202c00c  m68k_bchg_byte

void m68k_dispatch_0202c00c(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c050  m68k_bchg_byte

void m68k_dispatch_0202c050(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c090  m68k_bchg_byte

void m68k_dispatch_0202c090(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar3 = unaff_r11 & 7;
  uVar4 = *(uint *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    iVar2 = uVar4 + 2;
  }
  else {
    iVar2 = uVar4 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar3 * 4) = iVar2;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c0e4  m68k_bchg_byte

void m68k_dispatch_0202c0e4(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar4 = unaff_r11 & 7;
  uVar5 = *(uint *)(unaff_r6 + 0x20 + uVar4 * 4);
  if (uVar4 == 7) {
    iVar3 = uVar5 + 2;
  }
  else {
    iVar3 = uVar5 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar4 * 4) = iVar3;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c134  m68k_bchg_byte

void m68k_dispatch_0202c134(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = unaff_r11 & 7;
  iVar3 = *(int *)(unaff_r6 + 0x20 + uVar2 * 4);
  if (uVar2 == 7) {
    uVar4 = iVar3 - 2;
  }
  else {
    uVar4 = iVar3 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar2 * 4) = uVar4;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c188  m68k_bchg_byte

void m68k_dispatch_0202c188(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = unaff_r11 & 7;
  iVar4 = *(int *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    uVar5 = iVar4 - 2;
  }
  else {
    uVar5 = iVar4 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar3 * 4) = uVar5;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c1d8  m68k_bchg_byte

void m68k_dispatch_0202c1d8(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c224  m68k_bchg_byte

void m68k_dispatch_0202c224(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c26c  m68k_bchg_byte

void m68k_dispatch_0202c26c(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar4);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar4);
  }
  uVar4 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  bVar2 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar2 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c2dc  m68k_bchg_byte

void m68k_dispatch_0202c2dc(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar5 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar5);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar5);
  }
  uVar5 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4;
  bVar3 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar3 ^ (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c348  m68k_bchg_byte

void m68k_dispatch_0202c348(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = (uint)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c384  m68k_bchg_byte

void m68k_dispatch_0202c384(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar3 = (uint)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 ^ (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c3bc  m68k_bchg_byte

void m68k_dispatch_0202c3bc(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = CONCAT22(uVar1,unaff_r10[1]);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdf < (uVar1 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
         bVar2 ^ (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c400  m68k_bchg_byte

void m68k_dispatch_0202c400(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  uVar4 = CONCAT22(uVar2,unaff_r10[2]);
  bVar3 = FUN_0100408c(uVar4);
  if (0xdf < (uVar2 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) = bVar3 ^ (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
  return;
}


// 0x0202c440  m68k_bclr_byte

void m68k_dispatch_0202c440(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c484  m68k_bclr_byte

void m68k_dispatch_0202c484(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c4c4  m68k_bclr_byte

void m68k_dispatch_0202c4c4(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar3 = unaff_r11 & 7;
  uVar4 = *(uint *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    iVar2 = uVar4 + 2;
  }
  else {
    iVar2 = uVar4 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar3 * 4) = iVar2;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c518  m68k_bclr_byte

void m68k_dispatch_0202c518(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar4 = unaff_r11 & 7;
  uVar5 = *(uint *)(unaff_r6 + 0x20 + uVar4 * 4);
  if (uVar4 == 7) {
    iVar3 = uVar5 + 2;
  }
  else {
    iVar3 = uVar5 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar4 * 4) = iVar3;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c568  m68k_bclr_byte

void m68k_dispatch_0202c568(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = unaff_r11 & 7;
  iVar3 = *(int *)(unaff_r6 + 0x20 + uVar2 * 4);
  if (uVar2 == 7) {
    uVar4 = iVar3 - 2;
  }
  else {
    uVar4 = iVar3 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar2 * 4) = uVar4;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c5bc  m68k_bclr_byte

void m68k_dispatch_0202c5bc(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = unaff_r11 & 7;
  iVar4 = *(int *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    uVar5 = iVar4 - 2;
  }
  else {
    uVar5 = iVar4 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar3 * 4) = uVar5;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c60c  m68k_bclr_byte

void m68k_dispatch_0202c60c(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c658  m68k_bclr_byte

void m68k_dispatch_0202c658(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c6a0  m68k_bclr_byte

void m68k_dispatch_0202c6a0(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar4);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar4);
  }
  uVar4 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  bVar2 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar2 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c710  m68k_bclr_byte

void m68k_dispatch_0202c710(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar5 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar5);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar5);
  }
  uVar5 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4;
  bVar3 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar3 & ~(byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c77c  m68k_bclr_byte

void m68k_dispatch_0202c77c(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = (uint)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c7b8  m68k_bclr_byte

void m68k_dispatch_0202c7b8(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar3 = (uint)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 & ~(byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c7f0  m68k_bclr_byte

void m68k_dispatch_0202c7f0(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = CONCAT22(uVar1,unaff_r10[1]);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdf < (uVar1 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
         bVar2 & ~(byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c834  m68k_bclr_byte

void m68k_dispatch_0202c834(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  uVar4 = CONCAT22(uVar2,unaff_r10[2]);
  bVar3 = FUN_0100408c(uVar4);
  if (0xdf < (uVar2 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) = bVar3 & ~(byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
  return;
}


// 0x0202c874  m68k_bset_byte

void m68k_dispatch_0202c874(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202c8b8  m68k_bset_byte

void m68k_dispatch_0202c8b8(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202c8f8  m68k_bset_byte

void m68k_dispatch_0202c8f8(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar3 = unaff_r11 & 7;
  uVar4 = *(uint *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    iVar2 = uVar4 + 2;
  }
  else {
    iVar2 = uVar4 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar3 * 4) = iVar2;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c94c  m68k_bset_byte

void m68k_dispatch_0202c94c(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar4 = unaff_r11 & 7;
  uVar5 = *(uint *)(unaff_r6 + 0x20 + uVar4 * 4);
  if (uVar4 == 7) {
    iVar3 = uVar5 + 2;
  }
  else {
    iVar3 = uVar5 + 1;
  }
  *(int *)(unaff_r6 + 0x20 + uVar4 * 4) = iVar3;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202c99c  m68k_bset_byte

void m68k_dispatch_0202c99c(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar2 = unaff_r11 & 7;
  iVar3 = *(int *)(unaff_r6 + 0x20 + uVar2 * 4);
  if (uVar2 == 7) {
    uVar4 = iVar3 - 2;
  }
  else {
    uVar4 = iVar3 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar2 * 4) = uVar4;
  bVar1 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202c9f0  m68k_bset_byte

void m68k_dispatch_0202c9f0(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = unaff_r11 & 7;
  iVar4 = *(int *)(unaff_r6 + 0x20 + uVar3 * 4);
  if (uVar3 == 7) {
    uVar5 = iVar4 - 2;
  }
  else {
    uVar5 = iVar4 - 1;
  }
  *(uint *)(unaff_r6 + 0x20 + uVar3 * 4) = uVar5;
  bVar2 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202ca40  m68k_bset_byte

void m68k_dispatch_0202ca40(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202ca8c  m68k_bset_byte

void m68k_dispatch_0202ca8c(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202cad4  m68k_bset_byte

void m68k_dispatch_0202cad4(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar4);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar4);
  }
  uVar4 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  bVar2 = FUN_0100408c(uVar4);
  if ((uVar4 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) =
       bVar2 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
  return;
}


// 0x0202cb44  m68k_bset_byte

void m68k_dispatch_0202cb44(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar5 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar5);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar5);
  }
  uVar5 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4;
  bVar3 = FUN_0100408c(uVar5);
  if ((uVar5 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  *(byte *)(unaff_r8 + ((uVar5 ^ 1) & 0xffff)) = bVar3 | (byte)(1 << (uVar1 & 7));
  return;
}


// 0x0202cbb0  m68k_bset_byte

void m68k_dispatch_0202cbb0(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = (uint)*unaff_r10;
  bVar1 = FUN_0100408c(uVar2);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
         bVar1 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
  return;
}


// 0x0202cbec  m68k_bset_byte

void m68k_dispatch_0202cbec(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar3 = (uint)(short)unaff_r10[1];
  bVar2 = FUN_0100408c(uVar3);
  if (0xdfffff < (uVar3 & 0xf00000)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) = bVar2 | (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202cc24  m68k_bset_byte

void m68k_dispatch_0202cc24(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  uVar3 = CONCAT22(uVar1,unaff_r10[1]);
  bVar2 = FUN_0100408c(uVar3);
  if (0xdf < (uVar1 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar3 ^ 1) & 0xffff)) =
         bVar2 | (byte)(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar3 & 0xffffff) >> 0x10])(uVar3 & 0xffffff);
  return;
}


// 0x0202cc68  m68k_bset_byte

void m68k_dispatch_0202cc68(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  uVar4 = CONCAT22(uVar2,unaff_r10[2]);
  bVar3 = FUN_0100408c(uVar4);
  if (0xdf < (uVar2 & 0xf0)) {
    *(byte *)(unaff_r8 + ((uVar4 ^ 1) & 0xffff)) = bVar3 | (byte)(1 << (uVar1 & 7));
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
  return;
}


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


// 0x02030fa8  m68k_asl_byte

void m68k_dispatch_02030fa8(void)

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

void m68k_dispatch_02031030(void)

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

void m68k_dispatch_020310e4(void)

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

void m68k_dispatch_02031148(void)

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

void m68k_dispatch_020311fc(void)

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

void m68k_dispatch_02031250(void)

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

void m68k_dispatch_020312f0(void)

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

void m68k_dispatch_02031330(void)

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

void m68k_dispatch_02031370(void)

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

void m68k_dispatch_020313b0(void)

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

void m68k_dispatch_020313f0(void)

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

void m68k_dispatch_0203142c(void)

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

void m68k_dispatch_02031468(void)

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

void m68k_dispatch_020314ac(void)

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

void m68k_dispatch_02031510(void)

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

void m68k_dispatch_02031558(void)

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

void m68k_dispatch_020315c0(void)

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

void m68k_dispatch_020315fc(void)

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

void m68k_dispatch_02031658(void)

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

void m68k_dispatch_02031690(void)

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

void m68k_dispatch_020316f0(void)

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

void m68k_dispatch_0203172c(void)

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

void m68k_dispatch_02031790(void)

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

void m68k_dispatch_020317c8(void)

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


// 0x02031828  m68k_rol_byte

void m68k_dispatch_02031828(void)

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

void m68k_dispatch_02031890(void)

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

void m68k_dispatch_0203191c(void)

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

void m68k_dispatch_02031968(void)

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

void m68k_dispatch_020319f8(void)

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

void m68k_dispatch_02031a3c(void)

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

void m68k_dispatch_02031ac4(void)

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

void m68k_dispatch_02031b24(void)

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

void m68k_dispatch_02031ba8(void)

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

void m68k_dispatch_02031bf4(void)

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

void m68k_dispatch_02031c7c(void)

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

void m68k_dispatch_02031cb8(void)

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

void m68k_dispatch_02031d34(void)

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

void m68k_dispatch_02031d84(void)

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

void m68k_dispatch_02031e00(void)

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

void m68k_dispatch_02031e54(void)

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

void m68k_dispatch_02031ed4(void)

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

void m68k_dispatch_02031f30(void)

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

void m68k_dispatch_02031fc0(void)

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

void m68k_dispatch_02032010(void)

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

void m68k_dispatch_0203208c(void)

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

void m68k_dispatch_020320e0(void)

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

void m68k_dispatch_02032160(void)

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

void m68k_dispatch_020321bc(void)

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


// 0x02032258  m68k_bchg_byte

void m68k_dispatch_02032258(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) ^
       1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x0203228c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032290  m68k_bchg_byte

void m68k_dispatch_02032290(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) ^ 1 << (*unaff_r10 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x020322c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020322c4  m68k_bclr_byte

void m68k_dispatch_020322c4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) &
       ~(1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 0x1f));
                    /* WARNING: Could not recover jumptable at 0x020322f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020322fc  m68k_bclr_byte

void m68k_dispatch_020322fc(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) & ~(1 << (*unaff_r10 & 0x1f));
                    /* WARNING: Could not recover jumptable at 0x0203232c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02032330  m68k_bset_byte

void m68k_dispatch_02032330(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) |
       1 << (*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x02032364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02032368  m68k_bset_byte

void m68k_dispatch_02032368(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) | 1 << (*unaff_r10 & 0x1f);
                    /* WARNING: Could not recover jumptable at 0x02032398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
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

