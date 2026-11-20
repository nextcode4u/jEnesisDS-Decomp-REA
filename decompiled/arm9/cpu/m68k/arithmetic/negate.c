/* ARM9 negate — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

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

