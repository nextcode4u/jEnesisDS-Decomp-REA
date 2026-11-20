/* ARM9 and — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x02026308  m68k_and_byte

void m68k_and_byte_02026308(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026340  m68k_and_word

void m68k_and_word_02026340(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) =
       *(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4) & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x0202637c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026380  m68k_and_long

void m68k_and_long_02026380(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020263ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020263b0  m68k_and_byte

void m68k_and_byte_020263b0(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020263ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020263f0  m68k_and_word

void m68k_and_word_020263f0(void)

{
  uint uVar1;
  ushort uVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02026430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026434  m68k_and_long

void m68k_and_long_02026434(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202646c  m68k_and_byte

void m68k_and_byte_0202646c(void)

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
       bVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020264bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020264c0  m68k_and_word

void m68k_and_word_020264c0(void)

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
  *(ushort *)(unaff_r6 + uVar1) = uVar2 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x0202650c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026510  m68k_and_long

void m68k_and_long_02026510(void)

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
       uVar1 & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026554  m68k_and_byte

void m68k_and_byte_02026554(void)

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
       bVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020265a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020265a8  m68k_and_word

void m68k_and_word_020265a8(void)

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
  *(ushort *)(unaff_r6 + uVar1) = uVar2 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x020265f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020265f8  m68k_and_long

void m68k_and_long_020265f8(void)

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
       uVar1 & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202663c  m68k_and_byte

void m68k_and_byte_0202663c(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02026684  m68k_and_word

void m68k_and_word_02026684(void)

{
  uint uVar1;
  ushort uVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x020266cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020266d0  m68k_and_long

void m68k_and_long_020266d0(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202670c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02026710  m68k_and_byte

void m68k_and_byte_02026710(void)

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
       bVar3 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202677c  m68k_and_word

void m68k_and_word_0202677c(void)

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
  *(ushort *)(unaff_r6 + uVar1) = uVar2 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x020267e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020267ec  m68k_and_long

void m68k_and_long_020267ec(void)

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
       uVar2 & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202684c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02026850  m68k_and_byte

void m68k_and_byte_02026850(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte((int)*unaff_r10);
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02026888  m68k_and_word

void m68k_and_word_02026888(void)

{
  uint uVar1;
  ushort uVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_word((int)*unaff_r10);
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x020268c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020268c4  m68k_and_long

void m68k_and_long_020268c4(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long((int)*unaff_r10);
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020268f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020268f4  m68k_and_byte

void m68k_and_byte_020268f4(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02026934  m68k_and_word

void m68k_and_word_02026934(void)

{
  uint uVar1;
  ushort uVar2;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar2 = read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = uVar2 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02026974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02026978  m68k_and_long

void m68k_and_long_02026978(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020269ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x020269b0  m68k_and_byte

void m68k_and_byte_020269b0(void)

{
  byte bVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  bVar1 = read_m68k_bus_byte(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       bVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x020269f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020269fc  m68k_and_word

void m68k_and_word_020269fc(void)

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
  *(ushort *)(unaff_r6 + uVar1) = uVar2 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02026a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02026a4c  m68k_and_long

void m68k_and_long_02026a4c(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = read_m68k_bus_long(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       uVar1 & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02026a90  m68k_and_byte

void m68k_and_byte_02026a90(void)

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
       bVar3 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02026b04  m68k_and_word

void m68k_and_word_02026b04(void)

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
  *(ushort *)(unaff_r6 + uVar1) = uVar2 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02026b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02026b7c  m68k_and_long

void m68k_and_long_02026b7c(void)

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
       uVar2 & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02026be8  m68k_and_byte

void m68k_and_byte_02026be8(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *unaff_r10 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02026c1c  m68k_and_word

void m68k_and_word_02026c1c(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (unaff_r11 & 0xe00) >> 7;
  *(ushort *)(unaff_r6 + uVar1) = *unaff_r10 & *(ushort *)(unaff_r6 + uVar1);
                    /* WARNING: Could not recover jumptable at 0x02026c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02026c54  m68k_and_long

void m68k_and_long_02026c54(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       CONCAT22(*unaff_r10,unaff_r10[1]) & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02026c88  m68k_and_byte

void m68k_and_byte_02026c88(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = *pbVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026cd4  m68k_and_word

void m68k_and_word_02026cd4(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = *puVar1 & *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026d20  m68k_and_long

void m68k_and_long_02026d20(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = CONCAT22(*puVar1,puVar1[1]) & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02026d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026d70  m68k_and_byte

void m68k_and_byte_02026d70(void)

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
  *pbVar4 = *pbVar4 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026dd0  m68k_and_word

void m68k_and_word_02026dd0(void)

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
  *puVar3 = *puVar3 & *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026e28  m68k_and_long

void m68k_and_long_02026e28(void)

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
  uVar1 = CONCAT22(*puVar3,puVar3[1]) & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)(uVar1 >> 0x10);
  puVar3[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x02026e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026e84  m68k_and_byte

void m68k_and_byte_02026e84(void)

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
  *pbVar3 = *pbVar3 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026ee4  m68k_and_word

void m68k_and_word_02026ee4(void)

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
  *puVar3 = *puVar3 & *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026f3c  m68k_and_long

void m68k_and_long_02026f3c(void)

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
  uVar1 = CONCAT22(*puVar3,puVar3[1]) & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)(uVar1 >> 0x10);
  puVar3[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x02026f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02026f98  m68k_and_byte

void m68k_and_byte_02026f98(void)

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
  *pbVar1 = *pbVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02026fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02026fec  m68k_and_word

void m68k_and_word_02026fec(void)

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
  *puVar1 = *puVar1 & *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202703c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02027040  m68k_and_long

void m68k_and_long_02027040(void)

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
  uVar2 = CONCAT22(*puVar1,puVar1[1]) & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02027094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02027098  m68k_and_byte

void m68k_and_byte_02027098(void)

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
  *pbVar4 = *pbVar4 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202710c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02027110  m68k_and_word

void m68k_and_word_02027110(void)

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
  *puVar4 = *puVar4 & *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02027188  m68k_and_long

void m68k_and_long_02027188(void)

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
  uVar4 = CONCAT22(*puVar3,puVar3[1]) & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar3 = (short)(uVar4 >> 0x10);
  puVar3[1] = (short)uVar4;
                    /* WARNING: Could not recover jumptable at 0x02027200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02027204  m68k_and_byte

void m68k_and_byte_02027204(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02027244  m68k_and_word

void m68k_and_word_02027244(void)

{
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) =
       *(ushort *)((uint)*unaff_r10 + unaff_r8) & *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7))
  ;
                    /* WARNING: Could not recover jumptable at 0x02027280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02027284  m68k_and_long

void m68k_and_long_02027284(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x020272c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020272c8  m68k_and_byte

void m68k_and_byte_020272c8(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 & *(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x02027308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202730c  m68k_and_word

void m68k_and_word_0202730c(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = *puVar1 & *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
                    /* WARNING: Could not recover jumptable at 0x0202734c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02027350  m68k_and_long

void m68k_and_long_02027350(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) & *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02027394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02027398  m68k_andi_byte

void m68k_andi_byte_02027398(void)

{
  int unaff_r6;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) & *unaff_r10
  ;
                    /* WARNING: Could not recover jumptable at 0x020273c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x020273cc  m68k_andi_word

void m68k_andi_word_020273cc(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(ushort *)(unaff_r6 + iVar1) = *(ushort *)(unaff_r6 + iVar1) & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02027400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02027404  m68k_andi_long

void m68k_andi_long_02027404(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) & CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x02027434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02027438  m68k_andi_byte

void m68k_andi_byte_02027438(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = *pbVar1 & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0202747c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02027480  m68k_andi_word

void m68k_andi_word_02027480(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = *puVar1 & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x020274c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020274c4  m68k_andi_long

void m68k_andi_long_020274c4(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (undefined2 *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar2 = CONCAT22(*puVar1,puVar1[1]) & CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02027514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02027518  m68k_andi_byte

void m68k_andi_byte_02027518(void)

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
  *pbVar5 = *pbVar5 & bVar1;
                    /* WARNING: Could not recover jumptable at 0x02027570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02027574  m68k_andi_word

void m68k_andi_word_02027574(void)

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
  *puVar4 = *puVar4 & uVar1;
                    /* WARNING: Could not recover jumptable at 0x020275c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020275c4  m68k_andi_long

void m68k_andi_long_020275c4(void)

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
  uVar3 = CONCAT22(*puVar5,puVar5[1]) & CONCAT22(uVar1,uVar2);
  *puVar5 = (short)(uVar3 >> 0x10);
  puVar5[1] = (short)uVar3;
                    /* WARNING: Could not recover jumptable at 0x02027620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02027624  m68k_andi_byte

void m68k_andi_byte_02027624(void)

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
  *pbVar4 = *pbVar4 & bVar1;
                    /* WARNING: Could not recover jumptable at 0x0202767c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02027680  m68k_andi_word

void m68k_andi_word_02027680(void)

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
  *puVar4 = *puVar4 & uVar1;
                    /* WARNING: Could not recover jumptable at 0x020276cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020276d0  m68k_andi_long

void m68k_andi_long_020276d0(void)

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
  uVar3 = CONCAT22(*puVar5,puVar5[1]) & CONCAT22(uVar1,uVar2);
  *puVar5 = (short)(uVar3 >> 0x10);
  puVar5[1] = (short)uVar3;
                    /* WARNING: Could not recover jumptable at 0x0202772c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02027730  m68k_andi_byte

void m68k_andi_byte_02027730(void)

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
  *pbVar1 = *pbVar1 & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0202777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02027780  m68k_andi_word

void m68k_andi_word_02027780(void)

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
  *puVar1 = *puVar1 & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x020277c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x020277cc  m68k_andi_long

void m68k_andi_long_020277cc(void)

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
  uVar2 = CONCAT22(*puVar1,puVar1[1]) & CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02027824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x02027828  m68k_andi_byte

void m68k_andi_byte_02027828(void)

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
  *pbVar4 = *pbVar4 & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02027898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202789c  m68k_andi_word

void m68k_andi_word_0202789c(void)

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
  *puVar4 = *puVar4 & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02027908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x0202790c  m68k_andi_long

void m68k_andi_long_0202790c(void)

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
  uVar4 = CONCAT22(*puVar3,puVar3[1]) & CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar3 = (short)(uVar4 >> 0x10);
  puVar3[1] = (short)uVar4;
                    /* WARNING: Could not recover jumptable at 0x02027988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x0202798c  m68k_andi_byte

void m68k_andi_byte_0202798c(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x020279c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020279c8  m68k_andi_word

void m68k_andi_word_020279c8(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[1] + unaff_r8) =
       *(ushort *)((uint)unaff_r10[1] + unaff_r8) & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x020279fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return;
}


// 0x02027a00  m68k_andi_long

void m68k_andi_long_02027a00(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[2] + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) & CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02027a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[3] * 4))();
  return;
}


// 0x02027a48  m68k_andi_byte

void m68k_andi_byte_02027a48(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  byte *unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 4) + unaff_r8 ^ 1);
  *pbVar1 = *pbVar1 & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02027a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x02027a88  m68k_andi_word

void m68k_andi_word_02027a88(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)unaff_r10[2] + unaff_r8) =
       *(ushort *)((uint)unaff_r10[2] + unaff_r8) & *unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x02027ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[3] * 4))();
  return;
}


// 0x02027ac4  m68k_andi_long

void m68k_andi_long_02027ac4(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  puVar1 = (undefined2 *)((uint)(ushort)unaff_r10[3] + unaff_r8);
  uVar2 = CONCAT22(*puVar1,puVar1[1]) & CONCAT22(*unaff_r10,unaff_r10[1]);
  *puVar1 = (short)(uVar2 >> 0x10);
  puVar1[1] = (short)uVar2;
                    /* WARNING: Could not recover jumptable at 0x02027b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[4] * 4))();
  return;
}


// 0x02032830  m68k_andi_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_andi_word_02032830(undefined4 param_1,undefined4 param_2)

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
    uVar4 = (*(uint *)(unaff_r6 + 0x50) & 0xa700 | unaff_r7 & 0x1f) & (uint)*unaff_r10;
    *(uint *)(unaff_r6 + 0x50) = uVar4 & 0xa700;
    uVar5 = uVar4 & 0x1f;
    if ((uVar4 & 0x2000) == 0) {
      param_2 = *(undefined4 *)(unaff_r6 + 0x3c);
      uVar5 = *(uint *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = param_2;
      *(uint *)(unaff_r6 + 0x3c) = uVar5;
    }
                    /* WARNING: Could not recover jumptable at 0x02032884. Too many branches */
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


// 0x02032a20  m68k_andi_byte

void m68k_andi_byte_02032a20(void)

{
  ushort unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02032a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))(unaff_r7 & *unaff_r10 & 0x1f);
  return;
}

