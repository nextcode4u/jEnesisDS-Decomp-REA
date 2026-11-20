/* ARM9 test — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x010039f8  m68k_tst_byte

void m68k_tst_byte_010039f8(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_byte((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x01003a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x01003a1c  m68k_tst_word

void m68k_tst_word_01003a1c(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_word((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x01003a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x01003a40  m68k_tst_long

void m68k_tst_long_01003a40(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_long((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x01003a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x01003a64  m68k_tst_byte

void m68k_tst_byte_01003a64(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  read_m68k_bus_byte(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x01003a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x01003a90  m68k_tst_word

void m68k_tst_word_01003a90(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  read_m68k_bus_word(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x01003ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x01003abc  m68k_tst_long

void m68k_tst_long_01003abc(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  read_m68k_bus_long(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x01003ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x01003fac  m68k_tst_byte

void m68k_tst_byte_01003fac(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_byte(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x01003fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x01003fd8  m68k_tst_word

void m68k_tst_word_01003fd8(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_word(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x01004000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x01004004  m68k_tst_long

void m68k_tst_long_01004004(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_long(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x0100402c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a8e0  m68k_tst_byte

void m68k_tst_byte_0202a8e0(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x0202a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a904  m68k_tst_word

void m68k_tst_word_0202a904(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x0202a928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a92c  m68k_tst_long

void m68k_tst_long_0202a92c(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x0202a94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a950  m68k_tst_byte

void m68k_tst_byte_0202a950(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202a98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a990  m68k_tst_word

void m68k_tst_word_0202a990(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 2;
  read_m68k_bus_word();
                    /* WARNING: Could not recover jumptable at 0x0202a9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a9c8  m68k_tst_long

void m68k_tst_long_0202a9c8(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 4;
  read_m68k_bus_long();
                    /* WARNING: Could not recover jumptable at 0x0202a9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202aa00  m68k_tst_byte

void m68k_tst_byte_0202aa00(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202aa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202aa40  m68k_tst_word

void m68k_tst_word_0202aa40(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -2;
  read_m68k_bus_word();
                    /* WARNING: Could not recover jumptable at 0x0202aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202aa78  m68k_tst_long

void m68k_tst_long_0202aa78(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -4;
  read_m68k_bus_long();
                    /* WARNING: Could not recover jumptable at 0x0202aaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202aab0  m68k_tst_byte

void m68k_tst_byte_0202aab0(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_byte(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202aae4  m68k_tst_word

void m68k_tst_word_0202aae4(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_word(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202ab14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202ab18  m68k_tst_long

void m68k_tst_long_0202ab18(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  read_m68k_bus_long(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202ab48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202ab4c  m68k_tst_byte

void m68k_tst_byte_0202ab4c(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202aba4  m68k_tst_word

void m68k_tst_word_0202aba4(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202abf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202abfc  m68k_tst_long

void m68k_tst_long_0202abfc(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}

