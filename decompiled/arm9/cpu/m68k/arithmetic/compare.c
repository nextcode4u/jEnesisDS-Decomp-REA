/* ARM9 compare — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x02021b7c  m68k_cmp_byte

void m68k_cmp_byte_02021b7c(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021bb4  m68k_cmp_word

void m68k_cmp_word_02021bb4(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021bf4  m68k_cmp_long

void m68k_cmp_long_02021bf4(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021c28  m68k_cmp_word

void m68k_cmp_word_02021c28(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021c6c  m68k_cmp_long

void m68k_cmp_long_02021c6c(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02021ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021ca4  m68k_cmp_byte

void m68k_cmp_byte_02021ca4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_byte(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02021ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021ce4  m68k_cmp_word

void m68k_cmp_word_02021ce4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02021d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021d28  m68k_cmp_long

void m68k_cmp_long_02021d28(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_long(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02021d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021d64  m68k_cmp_byte

void m68k_cmp_byte_02021d64(void)

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
  read_m68k_bus_byte();
                    /* WARNING: Could not recover jumptable at 0x02021db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021db8  m68k_cmp_word

void m68k_cmp_word_02021db8(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 2;
  read_m68k_bus_word();
                    /* WARNING: Could not recover jumptable at 0x02021e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021e08  m68k_cmp_long

void m68k_cmp_long_02021e08(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 4;
  read_m68k_bus_long();
                    /* WARNING: Could not recover jumptable at 0x02021e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021e50  m68k_cmp_byte

void m68k_cmp_byte_02021e50(void)

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
  read_m68k_bus_byte();
                    /* WARNING: Could not recover jumptable at 0x02021ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021ea4  m68k_cmp_word

void m68k_cmp_word_02021ea4(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -2;
  read_m68k_bus_word();
                    /* WARNING: Could not recover jumptable at 0x02021ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021ef4  m68k_cmp_long

void m68k_cmp_long_02021ef4(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -4;
  read_m68k_bus_long();
                    /* WARNING: Could not recover jumptable at 0x02021f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02021f3c  m68k_cmp_byte

void m68k_cmp_byte_02021f3c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_byte(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02021f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02021f84  m68k_cmp_word

void m68k_cmp_word_02021f84(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02021fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02021fd0  m68k_cmp_long

void m68k_cmp_long_02021fd0(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022014  m68k_cmp_byte

void m68k_cmp_byte_02022014(void)

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
  read_m68k_bus_byte(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x0202207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022080  m68k_cmp_word

void m68k_cmp_word_02022080(void)

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
  read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x020220ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020220f0  m68k_cmp_long

void m68k_cmp_long_020220f0(void)

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
  read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x02022154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022158  m68k_cmp_byte

void m68k_cmp_byte_02022158(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_byte((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202218c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022190  m68k_cmp_word

void m68k_cmp_word_02022190(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_word((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020221c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020221cc  m68k_cmp_long

void m68k_cmp_long_020221cc(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_long((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020221fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022200  m68k_cmp_byte

void m68k_cmp_byte_02022200(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  read_m68k_bus_byte(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x0202223c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02022240  m68k_cmp_word

void m68k_cmp_word_02022240(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x02022280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02022284  m68k_cmp_long

void m68k_cmp_long_02022284(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  read_m68k_bus_long(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x020222bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x020222c0  m68k_cmp_byte

void m68k_cmp_byte_020222c0(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_byte(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202230c  m68k_cmp_word

void m68k_cmp_word_0202230c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202235c  m68k_cmp_long

void m68k_cmp_long_0202235c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_long(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020223a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020223a4  m68k_cmp_byte

void m68k_cmp_byte_020223a4(void)

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
  read_m68k_bus_byte(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x02022414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022418  m68k_cmp_word

void m68k_cmp_word_02022418(void)

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
  read_m68k_bus_word(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x0202248c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022490  m68k_cmp_long

void m68k_cmp_long_02022490(void)

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
  read_m68k_bus_long(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x020224fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022500  m68k_cmp_byte

void m68k_cmp_byte_02022500(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022534  m68k_cmp_word

void m68k_cmp_word_02022534(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x0202256c  m68k_cmp_long

void m68k_cmp_long_0202256c(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x020225a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020225a4  m68k_cmpa_word

void m68k_cmpa_word_020225a4(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x020225dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020225e0  m68k_cmpa_long

void m68k_cmpa_long_020225e0(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022618  m68k_cmpa_word

void m68k_cmpa_word_02022618(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022658  m68k_cmpa_long

void m68k_cmpa_long_02022658(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022694  m68k_cmpa_word

void m68k_cmpa_word_02022694(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x020226d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020226dc  m68k_cmpa_long

void m68k_cmpa_long_020226dc(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_long(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02022718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202271c  m68k_cmpa_word

void m68k_cmpa_word_0202271c(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 2;
  read_m68k_bus_word();
                    /* WARNING: Could not recover jumptable at 0x0202276c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022770  m68k_cmpa_long

void m68k_cmpa_long_02022770(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 4;
  read_m68k_bus_long();
                    /* WARNING: Could not recover jumptable at 0x020227b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020227bc  m68k_cmpa_word

void m68k_cmpa_word_020227bc(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -2;
  read_m68k_bus_word();
                    /* WARNING: Could not recover jumptable at 0x0202280c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02022810  m68k_cmpa_long

void m68k_cmpa_long_02022810(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -4;
  read_m68k_bus_long();
                    /* WARNING: Could not recover jumptable at 0x02022858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202285c  m68k_cmpa_word

void m68k_cmpa_word_0202285c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020228a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020228ac  m68k_cmpa_long

void m68k_cmpa_long_020228ac(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x020228f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x020228f4  m68k_cmpa_word

void m68k_cmpa_word_020228f4(void)

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
  read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x02022964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022968  m68k_cmpa_long

void m68k_cmpa_long_02022968(void)

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
  read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x020229d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x020229d4  m68k_cmpa_word

void m68k_cmpa_word_020229d4(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_word((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022a14  m68k_cmpa_long

void m68k_cmpa_long_02022a14(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_long((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022a4c  m68k_cmpa_word

void m68k_cmpa_word_02022a4c(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x02022a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02022a94  m68k_cmpa_long

void m68k_cmpa_long_02022a94(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  read_m68k_bus_long(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x02022ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x02022ad4  m68k_cmpa_word

void m68k_cmpa_word_02022ad4(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022b28  m68k_cmpa_long

void m68k_cmpa_long_02022b28(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_long(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x02022b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x02022b74  m68k_cmpa_word

void m68k_cmpa_word_02022b74(void)

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
  read_m68k_bus_word(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x02022bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022bf0  m68k_cmpa_long

void m68k_cmpa_long_02022bf0(void)

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
  read_m68k_bus_long(((int)unaff_r10 - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x02022c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x02022c64  m68k_cmpa_word

void m68k_cmpa_word_02022c64(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022c98  m68k_cmpa_long

void m68k_cmpa_long_02022c98(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022cd4  m68k_cmpi_byte

void m68k_cmpi_byte_02022cd4(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022d08  m68k_cmpi_word

void m68k_cmpi_word_02022d08(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022d40  m68k_cmpi_long

void m68k_cmpi_long_02022d40(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x02022d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022d78  m68k_cmpi_byte

void m68k_cmpi_byte_02022d78(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_byte(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02022db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022db4  m68k_cmpi_word

void m68k_cmpi_word_02022db4(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02022dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022df0  m68k_cmpi_long

void m68k_cmpi_long_02022df0(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_long(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x02022e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022e30  m68k_cmpi_byte

void m68k_cmpi_byte_02022e30(void)

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
  read_m68k_bus_byte();
                    /* WARNING: Could not recover jumptable at 0x02022e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022e80  m68k_cmpi_word

void m68k_cmpi_word_02022e80(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 2;
  read_m68k_bus_word();
                    /* WARNING: Could not recover jumptable at 0x02022ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022ec8  m68k_cmpi_long

void m68k_cmpi_long_02022ec8(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 4;
  read_m68k_bus_long();
                    /* WARNING: Could not recover jumptable at 0x02022f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022f14  m68k_cmpi_byte

void m68k_cmpi_byte_02022f14(void)

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
  read_m68k_bus_byte();
                    /* WARNING: Could not recover jumptable at 0x02022f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022f64  m68k_cmpi_word

void m68k_cmpi_word_02022f64(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -2;
  read_m68k_bus_word();
                    /* WARNING: Could not recover jumptable at 0x02022fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 2) * 4))();
  return;
}


// 0x02022fac  m68k_cmpi_long

void m68k_cmpi_long_02022fac(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -4;
  read_m68k_bus_long();
                    /* WARNING: Could not recover jumptable at 0x02022ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02022ff8  m68k_cmpi_byte

void m68k_cmpi_byte_02022ff8(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_byte(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x02023038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202303c  m68k_cmpi_word

void m68k_cmpi_word_0202303c(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x0202307c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023080  m68k_cmpi_long

void m68k_cmpi_long_02023080(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*(short *)(unaff_r10 + 4));
                    /* WARNING: Could not recover jumptable at 0x020230c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x020230c8  m68k_cmpi_byte

void m68k_cmpi_byte_020230c8(void)

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
  read_m68k_bus_byte(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x0202312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023130  m68k_cmpi_word

void m68k_cmpi_word_02023130(void)

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
  read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x02023194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023198  m68k_cmpi_long

void m68k_cmpi_long_02023198(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  
  uVar2 = *(ushort *)(unaff_r10 + 4);
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
  read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x02023200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x02023204  m68k_cmpi_byte

void m68k_cmpi_byte_02023204(void)

{
  int unaff_r9;
  int unaff_r10;
  
  read_m68k_bus_byte((int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x02023234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023238  m68k_cmpi_word

void m68k_cmpi_word_02023238(void)

{
  int unaff_r9;
  int unaff_r10;
  
  read_m68k_bus_word((int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x02023268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202326c  m68k_cmpi_long

void m68k_cmpi_long_0202326c(void)

{
  int unaff_r9;
  int unaff_r10;
  
  read_m68k_bus_long((int)*(short *)(unaff_r10 + 4));
                    /* WARNING: Could not recover jumptable at 0x020232a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x020232a4  m68k_cmpi_byte

void m68k_cmpi_byte_020232a4(void)

{
  int unaff_r9;
  int unaff_r10;
  
  read_m68k_bus_byte(CONCAT22(*(undefined2 *)(unaff_r10 + 2),*(undefined2 *)(unaff_r10 + 4)));
                    /* WARNING: Could not recover jumptable at 0x020232dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x020232e0  m68k_cmpi_word

void m68k_cmpi_word_020232e0(void)

{
  int unaff_r9;
  int unaff_r10;
  
  read_m68k_bus_word(CONCAT22(*(undefined2 *)(unaff_r10 + 2),*(undefined2 *)(unaff_r10 + 4)));
                    /* WARNING: Could not recover jumptable at 0x02023318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x0202331c  m68k_cmpi_long

void m68k_cmpi_long_0202331c(void)

{
  int unaff_r9;
  int unaff_r10;
  
  read_m68k_bus_long(CONCAT22(*(undefined2 *)(unaff_r10 + 4),*(undefined2 *)(unaff_r10 + 6)));
                    /* WARNING: Could not recover jumptable at 0x02023358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 8) * 4))();
  return;
}


// 0x02030b40  m68k_cmpm_byte

void m68k_cmpm_byte(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar3 = unaff_r6 + 0x20;
  uVar2 = unaff_r11 & 7;
  iVar1 = *(int *)(iVar3 + uVar2 * 4);
  if (uVar2 == 7) {
    iVar1 = iVar1 + 2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  *(int *)(iVar3 + uVar2 * 4) = iVar1;
  read_m68k_bus_byte();
  uVar2 = unaff_r11 & 0xe00;
  iVar1 = *(int *)(iVar3 + (uVar2 >> 7));
  if (uVar2 == 0xe00) {
    iVar1 = iVar1 + 2;
  }
  else {
    iVar1 = iVar1 + 1;
  }
  *(int *)(iVar3 + (uVar2 >> 7)) = iVar1;
  read_m68k_bus_byte();
                    /* WARNING: Could not recover jumptable at 0x02030ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030ba8  m68k_cmpm_word

void m68k_cmpm_word(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = unaff_r6 + 0x20;
  *(int *)(iVar1 + (unaff_r11 & 7) * 4) = *(int *)(iVar1 + (unaff_r11 & 7) * 4) + 2;
  read_m68k_bus_word();
  *(int *)(iVar1 + ((unaff_r11 & 0xe00) >> 7)) = *(int *)(iVar1 + ((unaff_r11 & 0xe00) >> 7)) + 2;
  read_m68k_bus_word();
                    /* WARNING: Could not recover jumptable at 0x02030bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030c00  m68k_cmpm_long

void m68k_cmpm_long(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = unaff_r6 + 0x20;
  *(int *)(iVar1 + (unaff_r11 & 7) * 4) = *(int *)(iVar1 + (unaff_r11 & 7) * 4) + 4;
  read_m68k_bus_long();
  *(int *)(iVar1 + ((unaff_r11 & 0xe00) >> 7)) = *(int *)(iVar1 + ((unaff_r11 & 0xe00) >> 7)) + 4;
  read_m68k_bus_long();
                    /* WARNING: Could not recover jumptable at 0x02030c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

