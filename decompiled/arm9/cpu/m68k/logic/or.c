/* ARM9 or — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x02027b10  m68k_or_byte

void m68k_or_byte_02027b10(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027b48  m68k_or_word

void m68k_or_word_02027b48(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) =
       *(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4) | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02027b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027b88  m68k_or_long

void m68k_or_long_02027b88(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027bb8  m68k_or_byte

void m68k_or_byte_02027bb8(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027bf8  m68k_or_word

void m68k_or_word_02027bf8(void)

{
  uint uVar1;
  ushort uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02027c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027c3c  m68k_or_long

void m68k_or_long_02027c3c(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027c74  m68k_or_byte

void m68k_or_byte_02027c74(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar3;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + 2;
  }
  else {
    iVar2 = iVar2 + 1;
  }
  *piVar3 = iVar2;
  bVar1 = read_m68k_bus_byte();
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027cc8  m68k_or_word

void m68k_or_word_02027cc8(void)

{
  uint uVar1;
  ushort uVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar3 = *piVar3 + 2;
  uVar2 = read_m68k_bus_word();
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02027d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027d18  m68k_or_long

void m68k_or_long_02027d18(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + 4;
  uVar1 = read_m68k_bus_long();
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027d5c  m68k_or_byte

void m68k_or_byte_02027d5c(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  iVar2 = *piVar3;
  if ((unaff_r11 & 7) == 7) {
    iVar2 = iVar2 + -2;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  *piVar3 = iVar2;
  bVar1 = read_m68k_bus_byte();
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027db0  m68k_or_word

void m68k_or_word_02027db0(void)

{
  uint uVar1;
  ushort uVar2;
  int *piVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar3 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar3 = *piVar3 + -2;
  uVar2 = read_m68k_bus_word();
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02027dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027e00  m68k_or_long

void m68k_or_long_02027e00(void)

{
  uint uVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + -4;
  uVar1 = read_m68k_bus_long();
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02027e44  m68k_or_byte

void m68k_or_byte_02027e44(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02027e8c  m68k_or_word

void m68k_or_word_02027e8c(void)

{
  uint uVar1;
  ushort uVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02027ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02027ed8  m68k_or_long

void m68k_or_long_02027ed8(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02027f18  m68k_or_byte

void m68k_or_byte_02027f18(void)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
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
  bVar3 = read_m68k_bus_byte(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4);
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar3 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02027f84  m68k_or_word

void m68k_or_word_02027f84(void)

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
  uVar2 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02027ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02027ff4  m68k_or_long

void m68k_or_long_02027ff4(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3);
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar2 | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028058  m68k_or_byte

void m68k_or_byte_02028058(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte((int)*unaff_r10);
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202808c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02028090  m68k_or_word

void m68k_or_word_02028090(void)

{
  uint uVar1;
  ushort uVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_word((int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x020280c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020280cc  m68k_or_long

void m68k_or_long_020280cc(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long((int)*unaff_r10);
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020280f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020280fc  m68k_or_byte

void m68k_or_byte_020280fc(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0202813c  m68k_or_word

void m68k_or_word_0202813c(void)

{
  uint uVar1;
  ushort uVar2;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x0202817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02028180  m68k_or_long

void m68k_or_long_02028180(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020281b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x020281b8  m68k_or_byte

void m68k_or_byte_020281b8(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02028204  m68k_or_word

void m68k_or_word_02028204(void)

{
  uint uVar1;
  ushort uVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02028250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02028254  m68k_or_long

void m68k_or_long_02028254(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02028298  m68k_or_byte

void m68k_or_byte_02028298(void)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
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
  bVar3 = read_m68k_bus_byte(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar4);
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar3 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202830c  m68k_or_word

void m68k_or_word_0202830c(void)

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
  uVar2 = read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar3);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02028380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028384  m68k_or_long

void m68k_or_long_02028384(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar2);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar2);
  }
  uVar2 = read_m68k_bus_long(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar1 + iVar3);
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar2 | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020283ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020283f0  m68k_or_byte

void m68k_or_byte_020283f0(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *unaff_r10 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02028424  m68k_or_word

void m68k_or_word_02028424(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = *unaff_r10 | *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02028458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202845c  m68k_or_long

void m68k_or_long_0202845c(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       CONCAT22(*unaff_r10,unaff_r10[1]) | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202848c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02028490  m68k_or_byte

void m68k_or_byte_02028490(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = *pbVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020284d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020284dc  m68k_or_word

void m68k_or_word_020284dc(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = *puVar1 | *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02028528  m68k_or_long

void m68k_or_long_02028528(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = CONCAT22(*puVar1,puVar1[1]) | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02028574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02028578  m68k_or_byte

void m68k_or_byte_02028578(void)

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
  *pbVar4 = *pbVar4 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020285d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020285d8  m68k_or_word

void m68k_or_word_020285d8(void)

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
  *puVar3 = *puVar3 | *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02028630  m68k_or_long

void m68k_or_long_02028630(void)

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
  uVar1 = CONCAT22(*puVar3,puVar3[1]) | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)(uVar1 >> 0x10);
  puVar3[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x02028688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202868c  m68k_or_byte

void m68k_or_byte_0202868c(void)

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
  *pbVar3 = *pbVar3 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020286e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020286ec  m68k_or_word

void m68k_or_word_020286ec(void)

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
  *puVar3 = *puVar3 | *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02028744  m68k_or_long

void m68k_or_long_02028744(void)

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
  uVar1 = CONCAT22(*puVar3,puVar3[1]) | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)(uVar1 >> 0x10);
  puVar3[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x0202879c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020287a0  m68k_or_byte

void m68k_or_byte_020287a0(void)

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
  *pbVar1 = *pbVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020287f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020287f4  m68k_or_word

void m68k_or_word_020287f4(void)

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
  *puVar1 = *puVar1 | *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02028848  m68k_or_long

void m68k_or_long_02028848(void)

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
  uVar2 = CONCAT22(*puVar1,puVar1[1]) | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x0202889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020288a0  m68k_or_byte

void m68k_or_byte_020288a0(void)

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
  *pbVar4 = *pbVar4 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028918  m68k_or_word

void m68k_or_word_02028918(void)

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
  *puVar4 = *puVar4 | *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202898c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028990  m68k_or_long

void m68k_or_long_02028990(void)

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
  uVar4 = CONCAT22(*puVar3,puVar3[1]) | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)(uVar4 >> 0x10);
  puVar3[1] = (short)uVar4;
                    /* WARNING: Could not recover jumptable at 0x02028a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028a0c  m68k_or_byte

void m68k_or_byte_02028a0c(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028a4c  m68k_or_word

void m68k_or_word_02028a4c(void)

{
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) =
       *(ushort *)((uint)*unaff_r10 + unaff_r8) | *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7))
  ;
                    /* WARNING: Could not recover jumptable at 0x02028a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028a8c  m68k_or_long

void m68k_or_long_02028a8c(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02028acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028ad0  m68k_or_byte

void m68k_or_byte_02028ad0(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 | *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02028b14  m68k_or_word

void m68k_or_word_02028b14(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = *puVar1 | *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02028b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02028b58  m68k_or_long

void m68k_or_long_02028b58(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) | *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02028b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02028ba0  m68k_ori_byte

void m68k_ori_byte_02028ba0(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) | *unaff_r10
  ;
                    /* WARNING: Could not recover jumptable at 0x02028bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02028bd4  m68k_ori_word

void m68k_ori_word_02028bd4(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(ushort *)(unaff_r6 + iVar1) = *(ushort *)(unaff_r6 + iVar1) | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02028c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028c0c  m68k_ori_long

void m68k_ori_long_02028c0c(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) | CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x02028c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02028c40  m68k_ori_byte

void m68k_ori_byte_02028c40(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = *pbVar1 | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02028c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02028c88  m68k_ori_word

void m68k_ori_word_02028c88(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = *puVar1 | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02028cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028ccc  m68k_ori_long

void m68k_ori_long_02028ccc(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = CONCAT22(*puVar1,puVar1[1]) | CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02028d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02028d20  m68k_ori_byte

void m68k_ori_byte_02028d20(void)

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
  *pbVar5 = *pbVar5 | bVar1;
                    /* WARNING: Could not recover jumptable at 0x02028d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02028d7c  m68k_ori_word

void m68k_ori_word_02028d7c(void)

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
  *puVar4 = *puVar4 | uVar1;
                    /* WARNING: Could not recover jumptable at 0x02028dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028dcc  m68k_ori_long

void m68k_ori_long_02028dcc(void)

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
  uVar3 = CONCAT22(*puVar5,puVar5[1]) | CONCAT22(uVar1,uVar2);
  *puVar5 = (short)(uVar3 >> 0x10);
  puVar5[1] = (short)uVar3;
                    /* WARNING: Could not recover jumptable at 0x02028e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02028e2c  m68k_ori_byte

void m68k_ori_byte_02028e2c(void)

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
  *pbVar4 = *pbVar4 | bVar1;
                    /* WARNING: Could not recover jumptable at 0x02028e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02028e88  m68k_ori_word

void m68k_ori_word_02028e88(void)

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
  *puVar4 = *puVar4 | uVar1;
                    /* WARNING: Could not recover jumptable at 0x02028ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02028ed8  m68k_ori_long

void m68k_ori_long_02028ed8(void)

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
  uVar3 = CONCAT22(*puVar5,puVar5[1]) | CONCAT22(uVar1,uVar2);
  *puVar5 = (short)(uVar3 >> 0x10);
  puVar5[1] = (short)uVar3;
                    /* WARNING: Could not recover jumptable at 0x02028f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02028f38  m68k_ori_byte

void m68k_ori_byte_02028f38(void)

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
  *pbVar1 = *pbVar1 | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02028f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02028f88  m68k_ori_word

void m68k_ori_word_02028f88(void)

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
  *puVar1 = *puVar1 | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02028fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x02028fd4  m68k_ori_long

void m68k_ori_long_02028fd4(void)

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
  uVar2 = CONCAT22(*puVar1,puVar1[1]) | CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x0202902c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x02029030  m68k_ori_byte

void m68k_ori_byte_02029030(void)

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
  *pbVar4 = *pbVar4 | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x020290a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020290a4  m68k_ori_word

void m68k_ori_word_020290a4(void)

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
  *puVar4 = *puVar4 | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02029110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x02029114  m68k_ori_long

void m68k_ori_long_02029114(void)

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
  uVar4 = CONCAT22(*puVar3,puVar3[1]) | CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar3 = (short)(uVar4 >> 0x10);
  puVar3[1] = (short)uVar4;
                    /* WARNING: Could not recover jumptable at 0x02029190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x02029194  m68k_ori_byte

void m68k_ori_byte_02029194(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x020291cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020291d0  m68k_ori_word

void m68k_ori_word_020291d0(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[1] + unaff_r8) =
       *(ushort *)((uint)unaff_r10[1] + unaff_r8) | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02029204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x02029208  m68k_ori_long

void m68k_ori_long_02029208(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[2] + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) | CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x0202924c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x02029250  m68k_ori_byte

void m68k_ori_byte_02029250(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 4) + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0202928c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x02029290  m68k_ori_word

void m68k_ori_word_02029290(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[2] + unaff_r8) =
       *(ushort *)((uint)unaff_r10[2] + unaff_r8) | *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x020292c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[3] * 4))();
  return;
}


// 0x020292cc  m68k_ori_long

void m68k_ori_long_020292cc(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[3] + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) | CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02029314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[4] * 4))();
  return;
}


// 0x020328e0  m68k_ori_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_ori_word_020328e0(undefined4 param_1,undefined4 param_2)

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
    uVar4 = *(uint *)(unaff_r6 + 0x50) & 0xa700 | unaff_r7 & 0x1f | (uint)*unaff_r10;
    *(uint *)(unaff_r6 + 0x50) = uVar4 & 0xa700;
    uVar5 = uVar4 & 0x1f;
    if ((uVar4 & 0x2000) == 0) {
      param_2 = *(undefined4 *)(unaff_r6 + 0x3c);
      uVar5 = *(uint *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = param_2;
      *(uint *)(unaff_r6 + 0x3c) = uVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x02032934. Too many branches */
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


// 0x02032a58  m68k_ori_byte

void m68k_ori_byte_02032a58(undefined4 param_1,undefined4 param_2)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02032a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))(param_1,param_2,*unaff_r10 & 0x1f);
  return;
}

