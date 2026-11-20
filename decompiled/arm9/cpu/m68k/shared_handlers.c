/* ARM9 shared handlers — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x02017250  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_02017250(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined1 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       *(undefined1 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x02017280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020172f0  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_020172f0(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         *(undefined1 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
    return;
  }
  (*(code *)(&m68k_byte_write_handlers)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x02017398  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_02017398(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = *(undefined1 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar4 = uVar2 + 2;
  }
  else {
    uVar4 = uVar2 + 1;
  }
  *puVar3 = uVar4;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&m68k_byte_write_handlers)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0201746c  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0201746c(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = *(undefined1 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  puVar3 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar2 = *puVar3;
  if ((unaff_r11 & 0xe00) == 0xe00) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar3 = uVar2;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&m68k_byte_write_handlers)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x02017500  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_02017500(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         *(undefined1 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
    return;
  }
  (*(code *)(&m68k_byte_write_handlers)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x020175c0  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_020175c0(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r8;
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
  uVar2 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&m68k_byte_write_handlers)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
       *(undefined1 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  return;
}


// 0x020176ec  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_020176ec(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (uint)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         *(undefined1 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
    return;
  }
  (*(code *)(&m68k_byte_write_handlers)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x0201777c  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0201777c(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = CONCAT22(*unaff_r10,unaff_r10[1]);
  if (0xdf < (*unaff_r10 & 0xf0)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         *(undefined1 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
    return;
  }
  uVar1 = uVar1 & 0xffffff;
  (*(code *)(&m68k_byte_write_handlers)[uVar1 >> 0x10])(uVar1);
  return;
}


// 0x0201caf0  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0201caf0(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) * 0x1000000 +
              (uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201cb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201f358  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0201f358(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(char *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       (char)((uint)*(byte *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) * 0x1000000 +
              (uint)*(byte *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) * -0x1000000 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x0201f398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202335c  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202335c(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  
  read_m68k_bus_byte(((unaff_r10 + 2) - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x020233a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020233a4  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_020233a4(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  
  read_m68k_bus_word(((unaff_r10 + 2) - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*(short *)(unaff_r10 + 2));
                    /* WARNING: Could not recover jumptable at 0x020233e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020233ec  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_020233ec(void)

{
  int unaff_r6;
  int unaff_r9;
  int unaff_r10;
  
  read_m68k_bus_long(((unaff_r10 + 4) - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*(short *)(unaff_r10 + 4));
                    /* WARNING: Could not recover jumptable at 0x02023434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x02023438  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_02023438(void)

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
  read_m68k_bus_byte(((unaff_r10 + 2) - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x020234a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x020234a8  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_020234a8(void)

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
  read_m68k_bus_word(((unaff_r10 + 2) - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x02023514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x02023518  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_02023518(void)

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
  uVar4 = *(ushort *)(unaff_r10 + 4);
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
  read_m68k_bus_long(((unaff_r10 + 4) - *piVar2 | *puVar3) + (int)(char)uVar4 + iVar5);
                    /* WARNING: Could not recover jumptable at 0x02023588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 6) * 4))();
  return;
}


// 0x0202ac54  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202ac54(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_byte(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202ac88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202ac8c  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202ac8c(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_word(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202acc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202acc4  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202acc4(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  
  read_m68k_bus_long(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
               (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202acfc  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202acfc(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202ad58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202ad5c  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202ad5c(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202adbc  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202adbc(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202ae18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202ae1c  m68k_shared_opcode_decode

void m68k_shared_opcode_decode_0202ae1c(void)

{
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       (&DAT_020168b0)[(unaff_r11 >> 4 & 0xf0) + (unaff_r7 & 0xf)];
                    /* WARNING: Could not recover jumptable at 0x0202ae4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202ae50  m68k_shared_opcode_decode

void m68k_shared_opcode_decode_0202ae50(void)

{
  uint uVar1;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         (&DAT_020168b0)[(unaff_r11 >> 4 & 0xf0) + (unaff_r7 & 0xf)];
    return;
  }
  (*(code *)(&m68k_byte_write_handlers)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x0202ae80  m68k_shared_opcode_decode

void m68k_shared_opcode_decode_0202ae80(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = (&DAT_020168b0)[(unaff_r11 >> 4 & 0xf0) + (unaff_r7 & 0xf)];
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3;
  if ((unaff_r11 & 7) == 7) {
    uVar4 = uVar2 + 2;
  }
  else {
    uVar4 = uVar2 + 1;
  }
  *puVar3 = uVar4;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&m68k_byte_write_handlers)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0202aec4  m68k_shared_opcode_decode

void m68k_shared_opcode_decode_0202aec4(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = (&DAT_020168b0)[(unaff_r11 >> 4 & 0xf0) + (unaff_r7 & 0xf)];
  puVar3 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar3;
  if ((unaff_r11 & 7) == 7) {
    uVar2 = uVar2 - 2;
  }
  else {
    uVar2 = uVar2 - 1;
  }
  *puVar3 = uVar2;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&m68k_byte_write_handlers)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = uVar1;
  return;
}


// 0x0202af08  m68k_shared_opcode_decode

void m68k_shared_opcode_decode_0202af08(void)

{
  uint uVar1;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         (&DAT_020168b0)[(unaff_r11 >> 4 & 0xf0) + (unaff_r7 & 0xf)];
    return;
  }
  (*(code *)(&m68k_byte_write_handlers)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x0202af40  m68k_shared_opcode_decode

void m68k_shared_opcode_decode_0202af40(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
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
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&m68k_byte_write_handlers)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) =
       (&DAT_020168b0)[(unaff_r11 >> 4 & 0xf0) + (unaff_r7 & 0xf)];
  return;
}


// 0x0202af9c  m68k_shared_opcode_decode

void m68k_shared_opcode_decode_0202af9c(void)

{
  uint uVar1;
  uint unaff_r7;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = (uint)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         (&DAT_020168b0)[(unaff_r11 >> 4 & 0xf0) + (unaff_r7 & 0xf)];
    return;
  }
  (*(code *)(&m68k_byte_write_handlers)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x0202afc4  m68k_shared_opcode_decode

void m68k_shared_opcode_decode_0202afc4(void)

{
  uint uVar1;
  uint unaff_r7;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = CONCAT22(*unaff_r10,unaff_r10[1]);
  if (0xdfffff < (*unaff_r10 & 0xf0) * 0x10000) {
    *(undefined *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) =
         (&DAT_020168b0)[(unaff_r11 >> 4 & 0xf0) + (unaff_r7 & 0xf)];
    return;
  }
  uVar1 = uVar1 & 0xffffff;
  (*(code *)(&m68k_byte_write_handlers)[uVar1 >> 0x10])(uVar1);
  return;
}


// 0x0202d1c8  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202d1c8(void)

{
  int unaff_r9;
  int unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x0202d1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202d24c  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202d24c(void)

{
  char cVar1;
  byte bVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  cVar1 = -*(char *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  bVar2 = cVar1 + 0x9a;
  if ((unaff_r7 & 0x10) != 0) {
    bVar2 = cVar1 + 0x99;
  }
  if (bVar2 != 0x9a) {
    if ((bVar2 & 0xf) == 10) {
      bVar2 = (bVar2 & 0xf0) + 0x10;
    }
    *(byte *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) = bVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0202d2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202e2b0  m68k_unrecognized_opcode

void m68k_unrecognized_opcode_0202e2b0(void)

{
  int unaff_r6;
  ushort unaff_r7;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(ushort *)(unaff_r6 + (unaff_r11 & 7) * 4) = unaff_r7 & 0x1f;
                    /* WARNING: Could not recover jumptable at 0x0202e2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202e2cc  m68k_unrecognized_opcode

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x02009e3c) */
/* WARNING: Removing unreachable block (ram,0x02009e58) */
/* WARNING: Removing unreachable block (ram,0x02009e5c) */
/* WARNING: Removing unreachable block (ram,0x02009e74) */
/* WARNING: Removing unreachable block (ram,0x02009e70) */
/* WARNING: Removing unreachable block (ram,0x0200a30c) */
/* WARNING: Removing unreachable block (ram,0x0200a360) */
/* WARNING: Removing unreachable block (ram,0x0200a390) */
/* WARNING: Removing unreachable block (ram,0x0200a3a8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ac) */
/* WARNING: Removing unreachable block (ram,0x0200a3b0) */
/* WARNING: Removing unreachable block (ram,0x0200a3b4) */
/* WARNING: Removing unreachable block (ram,0x0200a3c4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d0) */
/* WARNING: Removing unreachable block (ram,0x0200a3d4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d8) */
/* WARNING: Removing unreachable block (ram,0x0200a3e0) */
/* WARNING: Removing unreachable block (ram,0x0200a3e4) */
/* WARNING: Removing unreachable block (ram,0x0200a3e8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ec) */
/* WARNING: Removing unreachable block (ram,0x0200a3f0) */
/* WARNING: Removing unreachable block (ram,0x0200a400) */
/* WARNING: Removing unreachable block (ram,0x0200a410) */
/* WARNING: Removing unreachable block (ram,0x0200a420) */
/* WARNING: Removing unreachable block (ram,0x0200a42c) */
/* WARNING: Removing unreachable block (ram,0x0200a4c4) */
/* WARNING: Removing unreachable block (ram,0x0200a430) */
/* WARNING: Removing unreachable block (ram,0x0200a440) */
/* WARNING: Removing unreachable block (ram,0x0200a640) */
/* WARNING: Removing unreachable block (ram,0x0200a44c) */
/* WARNING: Removing unreachable block (ram,0x0200a45c) */
/* WARNING: Removing unreachable block (ram,0x0200a628) */
/* WARNING: Removing unreachable block (ram,0x0200a468) */
/* WARNING: Removing unreachable block (ram,0x0200a490) */
/* WARNING: Removing unreachable block (ram,0x0200a470) */
/* WARNING: Removing unreachable block (ram,0x0200a4ac) */
/* WARNING: Removing unreachable block (ram,0x0200a480) */
/* WARNING: Removing unreachable block (ram,0x0200a2fc) */
/* WARNING: Removing unreachable block (ram,0x02009f04) */
/* WARNING: Removing unreachable block (ram,0x0200a4e0) */
/* WARNING: Removing unreachable block (ram,0x0200a4fc) */
/* WARNING: Removing unreachable block (ram,0x0200a500) */
/* WARNING: Removing unreachable block (ram,0x0200a504) */
/* WARNING: Removing unreachable block (ram,0x0200a53c) */
/* WARNING: Removing unreachable block (ram,0x0200a58c) */
/* WARNING: Removing unreachable block (ram,0x0200a5a4) */
/* WARNING: Removing unreachable block (ram,0x0200a5c0) */
/* WARNING: Removing unreachable block (ram,0x0200a5d8) */
/* WARNING: Removing unreachable block (ram,0x0200a5e8) */
/* WARNING: Removing unreachable block (ram,0x0200a5ec) */
/* WARNING: Removing unreachable block (ram,0x0200a5f0) */
/* WARNING: Removing unreachable block (ram,0x0200a5f4) */
/* WARNING: Removing unreachable block (ram,0x0200a5f8) */
/* WARNING: Removing unreachable block (ram,0x0200a608) */
/* WARNING: Removing unreachable block (ram,0x02009f50) */
/* WARNING: Removing unreachable block (ram,0x02009e88) */
/* WARNING: Removing unreachable block (ram,0x02009e98) */
/* WARNING: Removing unreachable block (ram,0x02009eb0) */
/* WARNING: Removing unreachable block (ram,0x02009ed0) */
/* WARNING: Removing unreachable block (ram,0x02009f58) */
/* WARNING: Removing unreachable block (ram,0x02009f60) */
/* WARNING: Removing unreachable block (ram,0x0200a65c) */
/* WARNING: Removing unreachable block (ram,0x0200a688) */
/* WARNING: Removing unreachable block (ram,0x0200a698) */
/* WARNING: Removing unreachable block (ram,0x0200a69c) */
/* WARNING: Removing unreachable block (ram,0x0200a6a0) */
/* WARNING: Removing unreachable block (ram,0x0200a6a4) */
/* WARNING: Removing unreachable block (ram,0x0200a6a8) */
/* WARNING: Removing unreachable block (ram,0x0200a6b8) */
/* WARNING: Removing unreachable block (ram,0x0200a6bc) */
/* WARNING: Removing unreachable block (ram,0x0200a6dc) */
/* WARNING: Removing unreachable block (ram,0x0200a6e8) */
/* WARNING: Removing unreachable block (ram,0x0200a6ec) */
/* WARNING: Removing unreachable block (ram,0x0200a6f0) */
/* WARNING: Removing unreachable block (ram,0x0200a6fc) */
/* WARNING: Removing unreachable block (ram,0x0200a70c) */
/* WARNING: Removing unreachable block (ram,0x0200a718) */
/* WARNING: Removing unreachable block (ram,0x0200a71c) */
/* WARNING: Removing unreachable block (ram,0x0200a720) */
/* WARNING: Removing unreachable block (ram,0x0200aa30) */
/* WARNING: Removing unreachable block (ram,0x0200a72c) */
/* WARNING: Removing unreachable block (ram,0x0200a730) */
/* WARNING: Removing unreachable block (ram,0x0200a734) */
/* WARNING: Removing unreachable block (ram,0x0200a738) */
/* WARNING: Removing unreachable block (ram,0x0200a740) */
/* WARNING: Removing unreachable block (ram,0x0200a744) */
/* WARNING: Removing unreachable block (ram,0x0200a748) */
/* WARNING: Removing unreachable block (ram,0x0200a754) */
/* WARNING: Removing unreachable block (ram,0x0200aa54) */
/* WARNING: Removing unreachable block (ram,0x0200aa64) */
/* WARNING: Removing unreachable block (ram,0x0200a764) */
/* WARNING: Removing unreachable block (ram,0x0200a76c) */
/* WARNING: Removing unreachable block (ram,0x0200a780) */
/* WARNING: Removing unreachable block (ram,0x0200a78c) */
/* WARNING: Removing unreachable block (ram,0x0200a790) */
/* WARNING: Removing unreachable block (ram,0x0200a794) */
/* WARNING: Removing unreachable block (ram,0x0200a798) */
/* WARNING: Removing unreachable block (ram,0x0200a79c) */
/* WARNING: Removing unreachable block (ram,0x0200a7a0) */
/* WARNING: Removing unreachable block (ram,0x0200a7ac) */
/* WARNING: Removing unreachable block (ram,0x0200a7b0) */
/* WARNING: Removing unreachable block (ram,0x0200a7b4) */
/* WARNING: Removing unreachable block (ram,0x0200a7c8) */
/* WARNING: Removing unreachable block (ram,0x0200a7d8) */
/* WARNING: Removing unreachable block (ram,0x0200a7dc) */
/* WARNING: Removing unreachable block (ram,0x0200a7e0) */
/* WARNING: Removing unreachable block (ram,0x0200a7e4) */
/* WARNING: Removing unreachable block (ram,0x0200a7e8) */
/* WARNING: Removing unreachable block (ram,0x0200a7ec) */
/* WARNING: Removing unreachable block (ram,0x0200a7f8) */
/* WARNING: Removing unreachable block (ram,0x0200a7fc) */
/* WARNING: Removing unreachable block (ram,0x0200a800) */
/* WARNING: Removing unreachable block (ram,0x0200a804) */
/* WARNING: Removing unreachable block (ram,0x0200a808) */
/* WARNING: Removing unreachable block (ram,0x0200a80c) */
/* WARNING: Removing unreachable block (ram,0x0200a81c) */
/* WARNING: Removing unreachable block (ram,0x0200aa28) */
/* WARNING: Removing unreachable block (ram,0x0200a830) */
/* WARNING: Removing unreachable block (ram,0x0200a83c) */
/* WARNING: Removing unreachable block (ram,0x0200a840) */
/* WARNING: Removing unreachable block (ram,0x0200a844) */
/* WARNING: Removing unreachable block (ram,0x0200a848) */
/* WARNING: Removing unreachable block (ram,0x0200a84c) */
/* WARNING: Removing unreachable block (ram,0x0200a850) */
/* WARNING: Removing unreachable block (ram,0x0200a854) */
/* WARNING: Removing unreachable block (ram,0x0200a858) */
/* WARNING: Removing unreachable block (ram,0x0200a860) */
/* WARNING: Removing unreachable block (ram,0x0200a864) */
/* WARNING: Removing unreachable block (ram,0x0200a884) */
/* WARNING: Removing unreachable block (ram,0x0200a88c) */
/* WARNING: Removing unreachable block (ram,0x0200a8a0) */
/* WARNING: Removing unreachable block (ram,0x0200a8a4) */
/* WARNING: Removing unreachable block (ram,0x0200a8a8) */
/* WARNING: Removing unreachable block (ram,0x0200a8ac) */
/* WARNING: Removing unreachable block (ram,0x0200a8b0) */
/* WARNING: Removing unreachable block (ram,0x0200a8b4) */
/* WARNING: Removing unreachable block (ram,0x0200a8c8) */
/* WARNING: Removing unreachable block (ram,0x0200a8cc) */
/* WARNING: Removing unreachable block (ram,0x0200a8d0) */
/* WARNING: Removing unreachable block (ram,0x0200a8d4) */
/* WARNING: Removing unreachable block (ram,0x0200a8d8) */
/* WARNING: Removing unreachable block (ram,0x0200a8dc) */
/* WARNING: Removing unreachable block (ram,0x0200a8e0) */
/* WARNING: Removing unreachable block (ram,0x0200a8e4) */
/* WARNING: Removing unreachable block (ram,0x0200a8ec) */
/* WARNING: Removing unreachable block (ram,0x0200a8f0) */
/* WARNING: Removing unreachable block (ram,0x0200a910) */
/* WARNING: Removing unreachable block (ram,0x0200a924) */
/* WARNING: Removing unreachable block (ram,0x0200a934) */
/* WARNING: Removing unreachable block (ram,0x0200a978) */
/* WARNING: Removing unreachable block (ram,0x0200a980) */
/* WARNING: Removing unreachable block (ram,0x0200a9c8) */
/* WARNING: Removing unreachable block (ram,0x0200a9e0) */
/* WARNING: Removing unreachable block (ram,0x0200a9a0) */
/* WARNING: Removing unreachable block (ram,0x0200a99c) */
/* WARNING: Removing unreachable block (ram,0x0200a9e8) */
/* WARNING: Removing unreachable block (ram,0x0200aa1c) */
/* WARNING: Removing unreachable block (ram,0x02009f7c) */
/* WARNING: Removing unreachable block (ram,0x02009fa0) */
/* WARNING: Removing unreachable block (ram,0x02009fe4) */
/* WARNING: Removing unreachable block (ram,0x02009ff8) */
/* WARNING: Removing unreachable block (ram,0x0200a004) */
/* WARNING: Removing unreachable block (ram,0x0200a008) */
/* WARNING: Removing unreachable block (ram,0x0200a00c) */
/* WARNING: Removing unreachable block (ram,0x0200aa20) */
/* WARNING: Removing unreachable block (ram,0x0200a018) */
/* WARNING: Removing unreachable block (ram,0x0200a01c) */
/* WARNING: Removing unreachable block (ram,0x0200a020) */
/* WARNING: Removing unreachable block (ram,0x0200a024) */
/* WARNING: Removing unreachable block (ram,0x0200a02c) */
/* WARNING: Removing unreachable block (ram,0x0200a030) */
/* WARNING: Removing unreachable block (ram,0x0200a034) */
/* WARNING: Removing unreachable block (ram,0x0200a040) */
/* WARNING: Removing unreachable block (ram,0x0200aa40) */
/* WARNING: Removing unreachable block (ram,0x0200aa50) */
/* WARNING: Removing unreachable block (ram,0x0200a050) */
/* WARNING: Removing unreachable block (ram,0x0200a058) */
/* WARNING: Removing unreachable block (ram,0x0200a06c) */
/* WARNING: Removing unreachable block (ram,0x0200aa38) */
/* WARNING: Removing unreachable block (ram,0x0200a07c) */
/* WARNING: Removing unreachable block (ram,0x0200a08c) */
/* WARNING: Removing unreachable block (ram,0x0200a09c) */
/* WARNING: Removing unreachable block (ram,0x0200a0b4) */
/* WARNING: Removing unreachable block (ram,0x0200a0f0) */
/* WARNING: Removing unreachable block (ram,0x0200a108) */
/* WARNING: Removing unreachable block (ram,0x0200a11c) */
/* WARNING: Removing unreachable block (ram,0x0200a12c) */
/* WARNING: Removing unreachable block (ram,0x0200a14c) */
/* WARNING: Removing unreachable block (ram,0x0200a15c) */
/* WARNING: Removing unreachable block (ram,0x0200a174) */
/* WARNING: Removing unreachable block (ram,0x0200a1b0) */
/* WARNING: Removing unreachable block (ram,0x0200a1c8) */
/* WARNING: Removing unreachable block (ram,0x0200a1dc) */
/* WARNING: Removing unreachable block (ram,0x0200a1ec) */
/* WARNING: Removing unreachable block (ram,0x0200a208) */
/* WARNING: Removing unreachable block (ram,0x0200a20c) */
/* WARNING: Removing unreachable block (ram,0x0200a210) */
/* WARNING: Removing unreachable block (ram,0x0200a218) */
/* WARNING: Removing unreachable block (ram,0x0200a220) */
/* WARNING: Removing unreachable block (ram,0x0200a240) */
/* WARNING: Removing unreachable block (ram,0x0200a278) */
/* WARNING: Removing unreachable block (ram,0x0200a28c) */
/* WARNING: Removing unreachable block (ram,0x0200a290) */
/* WARNING: Removing unreachable block (ram,0x0200a294) */
/* WARNING: Removing unreachable block (ram,0x0200a298) */
/* WARNING: Removing unreachable block (ram,0x0200a2a8) */
/* WARNING: Removing unreachable block (ram,0x0200a2e4) */
/* WARNING: Removing unreachable block (ram,0x02009ee0) */
/* WARNING: Removing unreachable block (ram,0x02009ee4) */
/* WARNING: Removing unreachable block (ram,0x02009efc) */
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_unrecognized_opcode_0202e2cc(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r6;
  uint uVar12;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r11;
  bool bVar13;
  
  uVar6 = unaff_r7 & 0x1f;
  uVar4 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = (ushort)uVar6;
  if (0xdfffff < (uVar4 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar4 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar4 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  uVar2 = (undefined1)uVar6;
  if ((uVar4 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000 | uVar6;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff | (unaff_r7 & 3) << 0xe;
    vdp_access_code = vdp_access_code & 3 | uVar6 >> 2 & 0x3c;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    return;
  }
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar3 = vdp_address_increment;
  uVar4 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar13 = (vdp_address & 1) == 0;
    uVar11 = vdp_address & 0xffff;
    if (bVar13) {
      puVar8 = &vdp_vram + uVar11;
    }
    else {
      puVar8 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar12 = vdp_address_increment & 0xffff;
    if (!bVar13) {
      (&vdp_vram)[(int)puVar8] = uVar2;
    }
    uVar4 = uVar4 & 0xffff;
    if (bVar13) {
      (&vdp_vram)[uVar11] = 0;
      puVar8[1] = uVar2;
    }
    if (!bVar13) {
      (&vdp_vram)[uVar11] = 0;
    }
    uVar5 = uVar11 + uVar12 & 0xffff;
    uVar9 = uVar4;
    if (uVar4 != 0) {
      do {
        uVar9 = uVar9 - 1 & 0xffff;
        (&vdp_vram)[uVar5] = uVar2;
        uVar5 = uVar5 + uVar12 & 0xffff;
      } while (uVar9 != 0);
      uVar11 = vdp_address;
      if (uVar4 == 0xffff && uVar6 == 0) {
        vdp_address = uVar5;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar5;
    uVar11 = uVar11 & 0xfffe;
    if (uVar3 == 1) {
      uVar4 = uVar4 >> 1;
      uVar12 = 2;
    }
    do {
      if (uVar11 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar11 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar11)) {
          if ((uVar11 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar11)) {
            bVar13 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar11 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
            bVar13 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar11) && (uVar11 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar11 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
            bVar13 = true;
          }
          if ((vdp_window_name_table_base <= uVar11) && (uVar11 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar11 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
          }
          if (!bVar13) {
            update_cached_ds_pattern_from_vdp_word(uVar11,*(undefined2 *)(&vdp_vram + uVar11));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar11) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar4 = uVar4 - 1 & 0xffff;
      if (uVar4 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar11 = uVar11 + uVar12 & 0xfffe;
    } while( true );
  }
  uVar4 = vdp_access_code & 0xf;
  if (uVar4 == 3) {
    uVar6 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar6] = uVar1 & 0xeee;
    uVar1 = (ushort)((unaff_r7 & 0xe) << 1) | 0x8000;
    if ((uVar6 != 0) && (vdp_scanline < 0xdf)) {
      bVar7 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar7 == 200) {
        bVar7 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&scanline_pending_palette_changes)[bVar7] = &DAT_023dc8ca + (uint)(bVar7 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar6 + (uint)(bVar7 >> 5) * 0x40] = uVar1;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar6] = uVar1;
    DAT_0208f354 = 1;
    if (uVar6 == uVar4) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar4 == 5) {
    uVar6 = vdp_address & 0x7f;
    if (0x4f < uVar6) {
      vdp_address = uVar6;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar6;
    *(ushort *)((int)&vdp_vsram + uVar4) = uVar1;
  }
  else if (uVar4 == 1) {
    uVar4 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(ushort *)(&vdp_vram + uVar4) == uVar6) goto LAB_0200ae88;
      *(ushort *)(&vdp_vram + uVar4) = uVar1;
    }
    else {
      (&vdp_vram)[uVar4] = 0;
      (&vdp_vram_odd_byte_base)[uVar4] = uVar2;
      uVar6 = uVar6 << 8;
    }
    if (vdp_sprite_attribute_table_base <= uVar4) {
      if (vdp_wide_display_mode == '\0') {
        iVar10 = 0x200;
      }
      else {
        iVar10 = 0x280;
      }
      if (uVar4 < iVar10 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar4 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar4)) {
      bVar13 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar4 - vdp_plane_a_name_table_base,uVar6);
      bVar13 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar4) && (uVar4 < vdp_plane_b_name_table_end)) {
      (*write_ds_background_tilemap_word)(1,uVar4 - vdp_plane_b_name_table_base,uVar6);
      bVar13 = true;
    }
    if ((vdp_window_name_table_base <= uVar4) && (uVar4 < vdp_window_name_table_end)) {
      (*write_ds_window_tilemap_word)(uVar4 - vdp_window_name_table_base,uVar6);
    }
    if (!bVar13) {
      update_cached_ds_pattern_from_vdp_word(uVar4,uVar6);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x0202e2e8  m68k_unrecognized_opcode

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x02009e3c) */
/* WARNING: Removing unreachable block (ram,0x02009e58) */
/* WARNING: Removing unreachable block (ram,0x02009e5c) */
/* WARNING: Removing unreachable block (ram,0x02009e74) */
/* WARNING: Removing unreachable block (ram,0x02009e70) */
/* WARNING: Removing unreachable block (ram,0x0200a30c) */
/* WARNING: Removing unreachable block (ram,0x0200a360) */
/* WARNING: Removing unreachable block (ram,0x0200a390) */
/* WARNING: Removing unreachable block (ram,0x0200a3a8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ac) */
/* WARNING: Removing unreachable block (ram,0x0200a3b0) */
/* WARNING: Removing unreachable block (ram,0x0200a3b4) */
/* WARNING: Removing unreachable block (ram,0x0200a3c4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d0) */
/* WARNING: Removing unreachable block (ram,0x0200a3d4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d8) */
/* WARNING: Removing unreachable block (ram,0x0200a3e0) */
/* WARNING: Removing unreachable block (ram,0x0200a3e4) */
/* WARNING: Removing unreachable block (ram,0x0200a3e8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ec) */
/* WARNING: Removing unreachable block (ram,0x0200a3f0) */
/* WARNING: Removing unreachable block (ram,0x0200a400) */
/* WARNING: Removing unreachable block (ram,0x0200a410) */
/* WARNING: Removing unreachable block (ram,0x0200a420) */
/* WARNING: Removing unreachable block (ram,0x0200a42c) */
/* WARNING: Removing unreachable block (ram,0x0200a4c4) */
/* WARNING: Removing unreachable block (ram,0x0200a430) */
/* WARNING: Removing unreachable block (ram,0x0200a440) */
/* WARNING: Removing unreachable block (ram,0x0200a640) */
/* WARNING: Removing unreachable block (ram,0x0200a44c) */
/* WARNING: Removing unreachable block (ram,0x0200a45c) */
/* WARNING: Removing unreachable block (ram,0x0200a628) */
/* WARNING: Removing unreachable block (ram,0x0200a468) */
/* WARNING: Removing unreachable block (ram,0x0200a490) */
/* WARNING: Removing unreachable block (ram,0x0200a470) */
/* WARNING: Removing unreachable block (ram,0x0200a4ac) */
/* WARNING: Removing unreachable block (ram,0x0200a480) */
/* WARNING: Removing unreachable block (ram,0x0200a2fc) */
/* WARNING: Removing unreachable block (ram,0x02009f04) */
/* WARNING: Removing unreachable block (ram,0x0200a4e0) */
/* WARNING: Removing unreachable block (ram,0x0200a4fc) */
/* WARNING: Removing unreachable block (ram,0x0200a500) */
/* WARNING: Removing unreachable block (ram,0x0200a504) */
/* WARNING: Removing unreachable block (ram,0x0200a53c) */
/* WARNING: Removing unreachable block (ram,0x0200a58c) */
/* WARNING: Removing unreachable block (ram,0x0200a5a4) */
/* WARNING: Removing unreachable block (ram,0x0200a5c0) */
/* WARNING: Removing unreachable block (ram,0x0200a5d8) */
/* WARNING: Removing unreachable block (ram,0x0200a5e8) */
/* WARNING: Removing unreachable block (ram,0x0200a5ec) */
/* WARNING: Removing unreachable block (ram,0x0200a5f0) */
/* WARNING: Removing unreachable block (ram,0x0200a5f4) */
/* WARNING: Removing unreachable block (ram,0x0200a5f8) */
/* WARNING: Removing unreachable block (ram,0x0200a608) */
/* WARNING: Removing unreachable block (ram,0x02009f50) */
/* WARNING: Removing unreachable block (ram,0x02009e88) */
/* WARNING: Removing unreachable block (ram,0x02009e98) */
/* WARNING: Removing unreachable block (ram,0x02009eb0) */
/* WARNING: Removing unreachable block (ram,0x02009ed0) */
/* WARNING: Removing unreachable block (ram,0x02009f58) */
/* WARNING: Removing unreachable block (ram,0x02009f60) */
/* WARNING: Removing unreachable block (ram,0x0200a65c) */
/* WARNING: Removing unreachable block (ram,0x0200a688) */
/* WARNING: Removing unreachable block (ram,0x0200a698) */
/* WARNING: Removing unreachable block (ram,0x0200a69c) */
/* WARNING: Removing unreachable block (ram,0x0200a6a0) */
/* WARNING: Removing unreachable block (ram,0x0200a6a4) */
/* WARNING: Removing unreachable block (ram,0x0200a6a8) */
/* WARNING: Removing unreachable block (ram,0x0200a6b8) */
/* WARNING: Removing unreachable block (ram,0x0200a6bc) */
/* WARNING: Removing unreachable block (ram,0x0200a6dc) */
/* WARNING: Removing unreachable block (ram,0x0200a6e8) */
/* WARNING: Removing unreachable block (ram,0x0200a6ec) */
/* WARNING: Removing unreachable block (ram,0x0200a6f0) */
/* WARNING: Removing unreachable block (ram,0x0200a6fc) */
/* WARNING: Removing unreachable block (ram,0x0200a70c) */
/* WARNING: Removing unreachable block (ram,0x0200a718) */
/* WARNING: Removing unreachable block (ram,0x0200a71c) */
/* WARNING: Removing unreachable block (ram,0x0200a720) */
/* WARNING: Removing unreachable block (ram,0x0200aa30) */
/* WARNING: Removing unreachable block (ram,0x0200a72c) */
/* WARNING: Removing unreachable block (ram,0x0200a730) */
/* WARNING: Removing unreachable block (ram,0x0200a734) */
/* WARNING: Removing unreachable block (ram,0x0200a738) */
/* WARNING: Removing unreachable block (ram,0x0200a740) */
/* WARNING: Removing unreachable block (ram,0x0200a744) */
/* WARNING: Removing unreachable block (ram,0x0200a748) */
/* WARNING: Removing unreachable block (ram,0x0200a754) */
/* WARNING: Removing unreachable block (ram,0x0200aa54) */
/* WARNING: Removing unreachable block (ram,0x0200aa64) */
/* WARNING: Removing unreachable block (ram,0x0200a764) */
/* WARNING: Removing unreachable block (ram,0x0200a76c) */
/* WARNING: Removing unreachable block (ram,0x0200a780) */
/* WARNING: Removing unreachable block (ram,0x0200a78c) */
/* WARNING: Removing unreachable block (ram,0x0200a790) */
/* WARNING: Removing unreachable block (ram,0x0200a794) */
/* WARNING: Removing unreachable block (ram,0x0200a798) */
/* WARNING: Removing unreachable block (ram,0x0200a79c) */
/* WARNING: Removing unreachable block (ram,0x0200a7a0) */
/* WARNING: Removing unreachable block (ram,0x0200a7ac) */
/* WARNING: Removing unreachable block (ram,0x0200a7b0) */
/* WARNING: Removing unreachable block (ram,0x0200a7b4) */
/* WARNING: Removing unreachable block (ram,0x0200a7c8) */
/* WARNING: Removing unreachable block (ram,0x0200a7d8) */
/* WARNING: Removing unreachable block (ram,0x0200a7dc) */
/* WARNING: Removing unreachable block (ram,0x0200a7e0) */
/* WARNING: Removing unreachable block (ram,0x0200a7e4) */
/* WARNING: Removing unreachable block (ram,0x0200a7e8) */
/* WARNING: Removing unreachable block (ram,0x0200a7ec) */
/* WARNING: Removing unreachable block (ram,0x0200a7f8) */
/* WARNING: Removing unreachable block (ram,0x0200a7fc) */
/* WARNING: Removing unreachable block (ram,0x0200a800) */
/* WARNING: Removing unreachable block (ram,0x0200a804) */
/* WARNING: Removing unreachable block (ram,0x0200a808) */
/* WARNING: Removing unreachable block (ram,0x0200a80c) */
/* WARNING: Removing unreachable block (ram,0x0200a81c) */
/* WARNING: Removing unreachable block (ram,0x0200aa28) */
/* WARNING: Removing unreachable block (ram,0x0200a830) */
/* WARNING: Removing unreachable block (ram,0x0200a83c) */
/* WARNING: Removing unreachable block (ram,0x0200a840) */
/* WARNING: Removing unreachable block (ram,0x0200a844) */
/* WARNING: Removing unreachable block (ram,0x0200a848) */
/* WARNING: Removing unreachable block (ram,0x0200a84c) */
/* WARNING: Removing unreachable block (ram,0x0200a850) */
/* WARNING: Removing unreachable block (ram,0x0200a854) */
/* WARNING: Removing unreachable block (ram,0x0200a858) */
/* WARNING: Removing unreachable block (ram,0x0200a860) */
/* WARNING: Removing unreachable block (ram,0x0200a864) */
/* WARNING: Removing unreachable block (ram,0x0200a884) */
/* WARNING: Removing unreachable block (ram,0x0200a88c) */
/* WARNING: Removing unreachable block (ram,0x0200a8a0) */
/* WARNING: Removing unreachable block (ram,0x0200a8a4) */
/* WARNING: Removing unreachable block (ram,0x0200a8a8) */
/* WARNING: Removing unreachable block (ram,0x0200a8ac) */
/* WARNING: Removing unreachable block (ram,0x0200a8b0) */
/* WARNING: Removing unreachable block (ram,0x0200a8b4) */
/* WARNING: Removing unreachable block (ram,0x0200a8c8) */
/* WARNING: Removing unreachable block (ram,0x0200a8cc) */
/* WARNING: Removing unreachable block (ram,0x0200a8d0) */
/* WARNING: Removing unreachable block (ram,0x0200a8d4) */
/* WARNING: Removing unreachable block (ram,0x0200a8d8) */
/* WARNING: Removing unreachable block (ram,0x0200a8dc) */
/* WARNING: Removing unreachable block (ram,0x0200a8e0) */
/* WARNING: Removing unreachable block (ram,0x0200a8e4) */
/* WARNING: Removing unreachable block (ram,0x0200a8ec) */
/* WARNING: Removing unreachable block (ram,0x0200a8f0) */
/* WARNING: Removing unreachable block (ram,0x0200a910) */
/* WARNING: Removing unreachable block (ram,0x0200a924) */
/* WARNING: Removing unreachable block (ram,0x0200a934) */
/* WARNING: Removing unreachable block (ram,0x0200a978) */
/* WARNING: Removing unreachable block (ram,0x0200a980) */
/* WARNING: Removing unreachable block (ram,0x0200a9c8) */
/* WARNING: Removing unreachable block (ram,0x0200a9e0) */
/* WARNING: Removing unreachable block (ram,0x0200a9a0) */
/* WARNING: Removing unreachable block (ram,0x0200a99c) */
/* WARNING: Removing unreachable block (ram,0x0200a9e8) */
/* WARNING: Removing unreachable block (ram,0x0200aa1c) */
/* WARNING: Removing unreachable block (ram,0x02009f7c) */
/* WARNING: Removing unreachable block (ram,0x02009fa0) */
/* WARNING: Removing unreachable block (ram,0x02009fe4) */
/* WARNING: Removing unreachable block (ram,0x02009ff8) */
/* WARNING: Removing unreachable block (ram,0x0200a004) */
/* WARNING: Removing unreachable block (ram,0x0200a008) */
/* WARNING: Removing unreachable block (ram,0x0200a00c) */
/* WARNING: Removing unreachable block (ram,0x0200aa20) */
/* WARNING: Removing unreachable block (ram,0x0200a018) */
/* WARNING: Removing unreachable block (ram,0x0200a01c) */
/* WARNING: Removing unreachable block (ram,0x0200a020) */
/* WARNING: Removing unreachable block (ram,0x0200a024) */
/* WARNING: Removing unreachable block (ram,0x0200a02c) */
/* WARNING: Removing unreachable block (ram,0x0200a030) */
/* WARNING: Removing unreachable block (ram,0x0200a034) */
/* WARNING: Removing unreachable block (ram,0x0200a040) */
/* WARNING: Removing unreachable block (ram,0x0200aa40) */
/* WARNING: Removing unreachable block (ram,0x0200aa50) */
/* WARNING: Removing unreachable block (ram,0x0200a050) */
/* WARNING: Removing unreachable block (ram,0x0200a058) */
/* WARNING: Removing unreachable block (ram,0x0200a06c) */
/* WARNING: Removing unreachable block (ram,0x0200aa38) */
/* WARNING: Removing unreachable block (ram,0x0200a07c) */
/* WARNING: Removing unreachable block (ram,0x0200a08c) */
/* WARNING: Removing unreachable block (ram,0x0200a09c) */
/* WARNING: Removing unreachable block (ram,0x0200a0b4) */
/* WARNING: Removing unreachable block (ram,0x0200a0f0) */
/* WARNING: Removing unreachable block (ram,0x0200a108) */
/* WARNING: Removing unreachable block (ram,0x0200a11c) */
/* WARNING: Removing unreachable block (ram,0x0200a12c) */
/* WARNING: Removing unreachable block (ram,0x0200a14c) */
/* WARNING: Removing unreachable block (ram,0x0200a15c) */
/* WARNING: Removing unreachable block (ram,0x0200a174) */
/* WARNING: Removing unreachable block (ram,0x0200a1b0) */
/* WARNING: Removing unreachable block (ram,0x0200a1c8) */
/* WARNING: Removing unreachable block (ram,0x0200a1dc) */
/* WARNING: Removing unreachable block (ram,0x0200a1ec) */
/* WARNING: Removing unreachable block (ram,0x0200a208) */
/* WARNING: Removing unreachable block (ram,0x0200a20c) */
/* WARNING: Removing unreachable block (ram,0x0200a210) */
/* WARNING: Removing unreachable block (ram,0x0200a218) */
/* WARNING: Removing unreachable block (ram,0x0200a220) */
/* WARNING: Removing unreachable block (ram,0x0200a240) */
/* WARNING: Removing unreachable block (ram,0x0200a278) */
/* WARNING: Removing unreachable block (ram,0x0200a28c) */
/* WARNING: Removing unreachable block (ram,0x0200a290) */
/* WARNING: Removing unreachable block (ram,0x0200a294) */
/* WARNING: Removing unreachable block (ram,0x0200a298) */
/* WARNING: Removing unreachable block (ram,0x0200a2a8) */
/* WARNING: Removing unreachable block (ram,0x0200a2e4) */
/* WARNING: Removing unreachable block (ram,0x02009ee0) */
/* WARNING: Removing unreachable block (ram,0x02009ee4) */
/* WARNING: Removing unreachable block (ram,0x02009efc) */
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_unrecognized_opcode_0202e2e8(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_r6;
  uint uVar13;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r11;
  bool bVar14;
  
  uVar6 = unaff_r7 & 0x1f;
  puVar7 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar4 = *puVar7;
  *puVar7 = uVar4 + 2;
  uVar1 = (ushort)uVar6;
  if (0xdfffff < (uVar4 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar4 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar4 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  uVar2 = (undefined1)uVar6;
  if ((uVar4 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000 | uVar6;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff | (unaff_r7 & 3) << 0xe;
    vdp_access_code = vdp_access_code & 3 | uVar6 >> 2 & 0x3c;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    return;
  }
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar3 = vdp_address_increment;
  uVar4 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar14 = (vdp_address & 1) == 0;
    uVar12 = vdp_address & 0xffff;
    if (bVar14) {
      puVar9 = &vdp_vram + uVar12;
    }
    else {
      puVar9 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar13 = vdp_address_increment & 0xffff;
    if (!bVar14) {
      (&vdp_vram)[(int)puVar9] = uVar2;
    }
    uVar4 = uVar4 & 0xffff;
    if (bVar14) {
      (&vdp_vram)[uVar12] = 0;
      puVar9[1] = uVar2;
    }
    if (!bVar14) {
      (&vdp_vram)[uVar12] = 0;
    }
    uVar5 = uVar12 + uVar13 & 0xffff;
    uVar10 = uVar4;
    if (uVar4 != 0) {
      do {
        uVar10 = uVar10 - 1 & 0xffff;
        (&vdp_vram)[uVar5] = uVar2;
        uVar5 = uVar5 + uVar13 & 0xffff;
      } while (uVar10 != 0);
      uVar12 = vdp_address;
      if (uVar4 == 0xffff && uVar6 == 0) {
        vdp_address = uVar5;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar5;
    uVar12 = uVar12 & 0xfffe;
    if (uVar3 == 1) {
      uVar4 = uVar4 >> 1;
      uVar13 = 2;
    }
    do {
      if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar12 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar12)) {
            bVar14 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar14 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar14 = true;
          }
          if ((vdp_window_name_table_base <= uVar12) && (uVar12 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
          }
          if (!bVar14) {
            update_cached_ds_pattern_from_vdp_word(uVar12,*(undefined2 *)(&vdp_vram + uVar12));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar4 = uVar4 - 1 & 0xffff;
      if (uVar4 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar12 = uVar12 + uVar13 & 0xfffe;
    } while( true );
  }
  uVar4 = vdp_access_code & 0xf;
  if (uVar4 == 3) {
    uVar6 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar6] = uVar1 & 0xeee;
    uVar1 = (ushort)((unaff_r7 & 0xe) << 1) | 0x8000;
    if ((uVar6 != 0) && (vdp_scanline < 0xdf)) {
      bVar8 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar8 == 200) {
        bVar8 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&scanline_pending_palette_changes)[bVar8] = &DAT_023dc8ca + (uint)(bVar8 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar6 + (uint)(bVar8 >> 5) * 0x40] = uVar1;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar6] = uVar1;
    DAT_0208f354 = 1;
    if (uVar6 == uVar4) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar4 == 5) {
    uVar6 = vdp_address & 0x7f;
    if (0x4f < uVar6) {
      vdp_address = uVar6;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar6;
    *(ushort *)((int)&vdp_vsram + uVar4) = uVar1;
  }
  else if (uVar4 == 1) {
    uVar4 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(ushort *)(&vdp_vram + uVar4) == uVar6) goto LAB_0200ae88;
      *(ushort *)(&vdp_vram + uVar4) = uVar1;
    }
    else {
      (&vdp_vram)[uVar4] = 0;
      (&vdp_vram_odd_byte_base)[uVar4] = uVar2;
      uVar6 = uVar6 << 8;
    }
    if (vdp_sprite_attribute_table_base <= uVar4) {
      if (vdp_wide_display_mode == '\0') {
        iVar11 = 0x200;
      }
      else {
        iVar11 = 0x280;
      }
      if (uVar4 < iVar11 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar4 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar4)) {
      bVar14 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar4 - vdp_plane_a_name_table_base,uVar6);
      bVar14 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar4) && (uVar4 < vdp_plane_b_name_table_end)) {
      (*write_ds_background_tilemap_word)(1,uVar4 - vdp_plane_b_name_table_base,uVar6);
      bVar14 = true;
    }
    if ((vdp_window_name_table_base <= uVar4) && (uVar4 < vdp_window_name_table_end)) {
      (*write_ds_window_tilemap_word)(uVar4 - vdp_window_name_table_base,uVar6);
    }
    if (!bVar14) {
      update_cached_ds_pattern_from_vdp_word(uVar4,uVar6);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x0202e310  m68k_unrecognized_opcode

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x02009e3c) */
/* WARNING: Removing unreachable block (ram,0x02009e58) */
/* WARNING: Removing unreachable block (ram,0x02009e5c) */
/* WARNING: Removing unreachable block (ram,0x02009e74) */
/* WARNING: Removing unreachable block (ram,0x02009e70) */
/* WARNING: Removing unreachable block (ram,0x0200a30c) */
/* WARNING: Removing unreachable block (ram,0x0200a360) */
/* WARNING: Removing unreachable block (ram,0x0200a390) */
/* WARNING: Removing unreachable block (ram,0x0200a3a8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ac) */
/* WARNING: Removing unreachable block (ram,0x0200a3b0) */
/* WARNING: Removing unreachable block (ram,0x0200a3b4) */
/* WARNING: Removing unreachable block (ram,0x0200a3c4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d0) */
/* WARNING: Removing unreachable block (ram,0x0200a3d4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d8) */
/* WARNING: Removing unreachable block (ram,0x0200a3e0) */
/* WARNING: Removing unreachable block (ram,0x0200a3e4) */
/* WARNING: Removing unreachable block (ram,0x0200a3e8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ec) */
/* WARNING: Removing unreachable block (ram,0x0200a3f0) */
/* WARNING: Removing unreachable block (ram,0x0200a400) */
/* WARNING: Removing unreachable block (ram,0x0200a410) */
/* WARNING: Removing unreachable block (ram,0x0200a420) */
/* WARNING: Removing unreachable block (ram,0x0200a42c) */
/* WARNING: Removing unreachable block (ram,0x0200a4c4) */
/* WARNING: Removing unreachable block (ram,0x0200a430) */
/* WARNING: Removing unreachable block (ram,0x0200a440) */
/* WARNING: Removing unreachable block (ram,0x0200a640) */
/* WARNING: Removing unreachable block (ram,0x0200a44c) */
/* WARNING: Removing unreachable block (ram,0x0200a45c) */
/* WARNING: Removing unreachable block (ram,0x0200a628) */
/* WARNING: Removing unreachable block (ram,0x0200a468) */
/* WARNING: Removing unreachable block (ram,0x0200a490) */
/* WARNING: Removing unreachable block (ram,0x0200a470) */
/* WARNING: Removing unreachable block (ram,0x0200a4ac) */
/* WARNING: Removing unreachable block (ram,0x0200a480) */
/* WARNING: Removing unreachable block (ram,0x0200a2fc) */
/* WARNING: Removing unreachable block (ram,0x02009f04) */
/* WARNING: Removing unreachable block (ram,0x0200a4e0) */
/* WARNING: Removing unreachable block (ram,0x0200a4fc) */
/* WARNING: Removing unreachable block (ram,0x0200a500) */
/* WARNING: Removing unreachable block (ram,0x0200a504) */
/* WARNING: Removing unreachable block (ram,0x0200a53c) */
/* WARNING: Removing unreachable block (ram,0x0200a58c) */
/* WARNING: Removing unreachable block (ram,0x0200a5a4) */
/* WARNING: Removing unreachable block (ram,0x0200a5c0) */
/* WARNING: Removing unreachable block (ram,0x0200a5d8) */
/* WARNING: Removing unreachable block (ram,0x0200a5e8) */
/* WARNING: Removing unreachable block (ram,0x0200a5ec) */
/* WARNING: Removing unreachable block (ram,0x0200a5f0) */
/* WARNING: Removing unreachable block (ram,0x0200a5f4) */
/* WARNING: Removing unreachable block (ram,0x0200a5f8) */
/* WARNING: Removing unreachable block (ram,0x0200a608) */
/* WARNING: Removing unreachable block (ram,0x02009f50) */
/* WARNING: Removing unreachable block (ram,0x02009e88) */
/* WARNING: Removing unreachable block (ram,0x02009e98) */
/* WARNING: Removing unreachable block (ram,0x02009eb0) */
/* WARNING: Removing unreachable block (ram,0x02009ed0) */
/* WARNING: Removing unreachable block (ram,0x02009f58) */
/* WARNING: Removing unreachable block (ram,0x02009f60) */
/* WARNING: Removing unreachable block (ram,0x0200a65c) */
/* WARNING: Removing unreachable block (ram,0x0200a688) */
/* WARNING: Removing unreachable block (ram,0x0200a698) */
/* WARNING: Removing unreachable block (ram,0x0200a69c) */
/* WARNING: Removing unreachable block (ram,0x0200a6a0) */
/* WARNING: Removing unreachable block (ram,0x0200a6a4) */
/* WARNING: Removing unreachable block (ram,0x0200a6a8) */
/* WARNING: Removing unreachable block (ram,0x0200a6b8) */
/* WARNING: Removing unreachable block (ram,0x0200a6bc) */
/* WARNING: Removing unreachable block (ram,0x0200a6dc) */
/* WARNING: Removing unreachable block (ram,0x0200a6e8) */
/* WARNING: Removing unreachable block (ram,0x0200a6ec) */
/* WARNING: Removing unreachable block (ram,0x0200a6f0) */
/* WARNING: Removing unreachable block (ram,0x0200a6fc) */
/* WARNING: Removing unreachable block (ram,0x0200a70c) */
/* WARNING: Removing unreachable block (ram,0x0200a718) */
/* WARNING: Removing unreachable block (ram,0x0200a71c) */
/* WARNING: Removing unreachable block (ram,0x0200a720) */
/* WARNING: Removing unreachable block (ram,0x0200aa30) */
/* WARNING: Removing unreachable block (ram,0x0200a72c) */
/* WARNING: Removing unreachable block (ram,0x0200a730) */
/* WARNING: Removing unreachable block (ram,0x0200a734) */
/* WARNING: Removing unreachable block (ram,0x0200a738) */
/* WARNING: Removing unreachable block (ram,0x0200a740) */
/* WARNING: Removing unreachable block (ram,0x0200a744) */
/* WARNING: Removing unreachable block (ram,0x0200a748) */
/* WARNING: Removing unreachable block (ram,0x0200a754) */
/* WARNING: Removing unreachable block (ram,0x0200aa54) */
/* WARNING: Removing unreachable block (ram,0x0200aa64) */
/* WARNING: Removing unreachable block (ram,0x0200a764) */
/* WARNING: Removing unreachable block (ram,0x0200a76c) */
/* WARNING: Removing unreachable block (ram,0x0200a780) */
/* WARNING: Removing unreachable block (ram,0x0200a78c) */
/* WARNING: Removing unreachable block (ram,0x0200a790) */
/* WARNING: Removing unreachable block (ram,0x0200a794) */
/* WARNING: Removing unreachable block (ram,0x0200a798) */
/* WARNING: Removing unreachable block (ram,0x0200a79c) */
/* WARNING: Removing unreachable block (ram,0x0200a7a0) */
/* WARNING: Removing unreachable block (ram,0x0200a7ac) */
/* WARNING: Removing unreachable block (ram,0x0200a7b0) */
/* WARNING: Removing unreachable block (ram,0x0200a7b4) */
/* WARNING: Removing unreachable block (ram,0x0200a7c8) */
/* WARNING: Removing unreachable block (ram,0x0200a7d8) */
/* WARNING: Removing unreachable block (ram,0x0200a7dc) */
/* WARNING: Removing unreachable block (ram,0x0200a7e0) */
/* WARNING: Removing unreachable block (ram,0x0200a7e4) */
/* WARNING: Removing unreachable block (ram,0x0200a7e8) */
/* WARNING: Removing unreachable block (ram,0x0200a7ec) */
/* WARNING: Removing unreachable block (ram,0x0200a7f8) */
/* WARNING: Removing unreachable block (ram,0x0200a7fc) */
/* WARNING: Removing unreachable block (ram,0x0200a800) */
/* WARNING: Removing unreachable block (ram,0x0200a804) */
/* WARNING: Removing unreachable block (ram,0x0200a808) */
/* WARNING: Removing unreachable block (ram,0x0200a80c) */
/* WARNING: Removing unreachable block (ram,0x0200a81c) */
/* WARNING: Removing unreachable block (ram,0x0200aa28) */
/* WARNING: Removing unreachable block (ram,0x0200a830) */
/* WARNING: Removing unreachable block (ram,0x0200a83c) */
/* WARNING: Removing unreachable block (ram,0x0200a840) */
/* WARNING: Removing unreachable block (ram,0x0200a844) */
/* WARNING: Removing unreachable block (ram,0x0200a848) */
/* WARNING: Removing unreachable block (ram,0x0200a84c) */
/* WARNING: Removing unreachable block (ram,0x0200a850) */
/* WARNING: Removing unreachable block (ram,0x0200a854) */
/* WARNING: Removing unreachable block (ram,0x0200a858) */
/* WARNING: Removing unreachable block (ram,0x0200a860) */
/* WARNING: Removing unreachable block (ram,0x0200a864) */
/* WARNING: Removing unreachable block (ram,0x0200a884) */
/* WARNING: Removing unreachable block (ram,0x0200a88c) */
/* WARNING: Removing unreachable block (ram,0x0200a8a0) */
/* WARNING: Removing unreachable block (ram,0x0200a8a4) */
/* WARNING: Removing unreachable block (ram,0x0200a8a8) */
/* WARNING: Removing unreachable block (ram,0x0200a8ac) */
/* WARNING: Removing unreachable block (ram,0x0200a8b0) */
/* WARNING: Removing unreachable block (ram,0x0200a8b4) */
/* WARNING: Removing unreachable block (ram,0x0200a8c8) */
/* WARNING: Removing unreachable block (ram,0x0200a8cc) */
/* WARNING: Removing unreachable block (ram,0x0200a8d0) */
/* WARNING: Removing unreachable block (ram,0x0200a8d4) */
/* WARNING: Removing unreachable block (ram,0x0200a8d8) */
/* WARNING: Removing unreachable block (ram,0x0200a8dc) */
/* WARNING: Removing unreachable block (ram,0x0200a8e0) */
/* WARNING: Removing unreachable block (ram,0x0200a8e4) */
/* WARNING: Removing unreachable block (ram,0x0200a8ec) */
/* WARNING: Removing unreachable block (ram,0x0200a8f0) */
/* WARNING: Removing unreachable block (ram,0x0200a910) */
/* WARNING: Removing unreachable block (ram,0x0200a924) */
/* WARNING: Removing unreachable block (ram,0x0200a934) */
/* WARNING: Removing unreachable block (ram,0x0200a978) */
/* WARNING: Removing unreachable block (ram,0x0200a980) */
/* WARNING: Removing unreachable block (ram,0x0200a9c8) */
/* WARNING: Removing unreachable block (ram,0x0200a9e0) */
/* WARNING: Removing unreachable block (ram,0x0200a9a0) */
/* WARNING: Removing unreachable block (ram,0x0200a99c) */
/* WARNING: Removing unreachable block (ram,0x0200a9e8) */
/* WARNING: Removing unreachable block (ram,0x0200aa1c) */
/* WARNING: Removing unreachable block (ram,0x02009f7c) */
/* WARNING: Removing unreachable block (ram,0x02009fa0) */
/* WARNING: Removing unreachable block (ram,0x02009fe4) */
/* WARNING: Removing unreachable block (ram,0x02009ff8) */
/* WARNING: Removing unreachable block (ram,0x0200a004) */
/* WARNING: Removing unreachable block (ram,0x0200a008) */
/* WARNING: Removing unreachable block (ram,0x0200a00c) */
/* WARNING: Removing unreachable block (ram,0x0200aa20) */
/* WARNING: Removing unreachable block (ram,0x0200a018) */
/* WARNING: Removing unreachable block (ram,0x0200a01c) */
/* WARNING: Removing unreachable block (ram,0x0200a020) */
/* WARNING: Removing unreachable block (ram,0x0200a024) */
/* WARNING: Removing unreachable block (ram,0x0200a02c) */
/* WARNING: Removing unreachable block (ram,0x0200a030) */
/* WARNING: Removing unreachable block (ram,0x0200a034) */
/* WARNING: Removing unreachable block (ram,0x0200a040) */
/* WARNING: Removing unreachable block (ram,0x0200aa40) */
/* WARNING: Removing unreachable block (ram,0x0200aa50) */
/* WARNING: Removing unreachable block (ram,0x0200a050) */
/* WARNING: Removing unreachable block (ram,0x0200a058) */
/* WARNING: Removing unreachable block (ram,0x0200a06c) */
/* WARNING: Removing unreachable block (ram,0x0200aa38) */
/* WARNING: Removing unreachable block (ram,0x0200a07c) */
/* WARNING: Removing unreachable block (ram,0x0200a08c) */
/* WARNING: Removing unreachable block (ram,0x0200a09c) */
/* WARNING: Removing unreachable block (ram,0x0200a0b4) */
/* WARNING: Removing unreachable block (ram,0x0200a0f0) */
/* WARNING: Removing unreachable block (ram,0x0200a108) */
/* WARNING: Removing unreachable block (ram,0x0200a11c) */
/* WARNING: Removing unreachable block (ram,0x0200a12c) */
/* WARNING: Removing unreachable block (ram,0x0200a14c) */
/* WARNING: Removing unreachable block (ram,0x0200a15c) */
/* WARNING: Removing unreachable block (ram,0x0200a174) */
/* WARNING: Removing unreachable block (ram,0x0200a1b0) */
/* WARNING: Removing unreachable block (ram,0x0200a1c8) */
/* WARNING: Removing unreachable block (ram,0x0200a1dc) */
/* WARNING: Removing unreachable block (ram,0x0200a1ec) */
/* WARNING: Removing unreachable block (ram,0x0200a208) */
/* WARNING: Removing unreachable block (ram,0x0200a20c) */
/* WARNING: Removing unreachable block (ram,0x0200a210) */
/* WARNING: Removing unreachable block (ram,0x0200a218) */
/* WARNING: Removing unreachable block (ram,0x0200a220) */
/* WARNING: Removing unreachable block (ram,0x0200a240) */
/* WARNING: Removing unreachable block (ram,0x0200a278) */
/* WARNING: Removing unreachable block (ram,0x0200a28c) */
/* WARNING: Removing unreachable block (ram,0x0200a290) */
/* WARNING: Removing unreachable block (ram,0x0200a294) */
/* WARNING: Removing unreachable block (ram,0x0200a298) */
/* WARNING: Removing unreachable block (ram,0x0200a2a8) */
/* WARNING: Removing unreachable block (ram,0x0200a2e4) */
/* WARNING: Removing unreachable block (ram,0x02009ee0) */
/* WARNING: Removing unreachable block (ram,0x02009ee4) */
/* WARNING: Removing unreachable block (ram,0x02009efc) */
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_unrecognized_opcode_0202e310(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte bVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_r6;
  uint uVar13;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r11;
  bool bVar14;
  
  uVar6 = unaff_r7 & 0x1f;
  puVar7 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar4 = *puVar7 - 2;
  *puVar7 = uVar4;
  uVar1 = (ushort)uVar6;
  if (0xdfffff < (uVar4 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar4 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar4 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  uVar2 = (undefined1)uVar6;
  if ((uVar4 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000 | uVar6;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff | (unaff_r7 & 3) << 0xe;
    vdp_access_code = vdp_access_code & 3 | uVar6 >> 2 & 0x3c;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    return;
  }
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar3 = vdp_address_increment;
  uVar4 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar14 = (vdp_address & 1) == 0;
    uVar12 = vdp_address & 0xffff;
    if (bVar14) {
      puVar9 = &vdp_vram + uVar12;
    }
    else {
      puVar9 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar13 = vdp_address_increment & 0xffff;
    if (!bVar14) {
      (&vdp_vram)[(int)puVar9] = uVar2;
    }
    uVar4 = uVar4 & 0xffff;
    if (bVar14) {
      (&vdp_vram)[uVar12] = 0;
      puVar9[1] = uVar2;
    }
    if (!bVar14) {
      (&vdp_vram)[uVar12] = 0;
    }
    uVar5 = uVar12 + uVar13 & 0xffff;
    uVar10 = uVar4;
    if (uVar4 != 0) {
      do {
        uVar10 = uVar10 - 1 & 0xffff;
        (&vdp_vram)[uVar5] = uVar2;
        uVar5 = uVar5 + uVar13 & 0xffff;
      } while (uVar10 != 0);
      uVar12 = vdp_address;
      if (uVar4 == 0xffff && uVar6 == 0) {
        vdp_address = uVar5;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar5;
    uVar12 = uVar12 & 0xfffe;
    if (uVar3 == 1) {
      uVar4 = uVar4 >> 1;
      uVar13 = 2;
    }
    do {
      if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar12 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar12)) {
            bVar14 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar14 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar14 = true;
          }
          if ((vdp_window_name_table_base <= uVar12) && (uVar12 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
          }
          if (!bVar14) {
            update_cached_ds_pattern_from_vdp_word(uVar12,*(undefined2 *)(&vdp_vram + uVar12));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar4 = uVar4 - 1 & 0xffff;
      if (uVar4 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar12 = uVar12 + uVar13 & 0xfffe;
    } while( true );
  }
  uVar4 = vdp_access_code & 0xf;
  if (uVar4 == 3) {
    uVar6 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar6] = uVar1 & 0xeee;
    uVar1 = (ushort)((unaff_r7 & 0xe) << 1) | 0x8000;
    if ((uVar6 != 0) && (vdp_scanline < 0xdf)) {
      bVar8 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar8 == 200) {
        bVar8 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&scanline_pending_palette_changes)[bVar8] = &DAT_023dc8ca + (uint)(bVar8 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar6 + (uint)(bVar8 >> 5) * 0x40] = uVar1;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar6] = uVar1;
    DAT_0208f354 = 1;
    if (uVar6 == uVar4) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar4 == 5) {
    uVar6 = vdp_address & 0x7f;
    if (0x4f < uVar6) {
      vdp_address = uVar6;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar6;
    *(ushort *)((int)&vdp_vsram + uVar4) = uVar1;
  }
  else if (uVar4 == 1) {
    uVar4 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(ushort *)(&vdp_vram + uVar4) == uVar6) goto LAB_0200ae88;
      *(ushort *)(&vdp_vram + uVar4) = uVar1;
    }
    else {
      (&vdp_vram)[uVar4] = 0;
      (&vdp_vram_odd_byte_base)[uVar4] = uVar2;
      uVar6 = uVar6 << 8;
    }
    if (vdp_sprite_attribute_table_base <= uVar4) {
      if (vdp_wide_display_mode == '\0') {
        iVar11 = 0x200;
      }
      else {
        iVar11 = 0x280;
      }
      if (uVar4 < iVar11 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar4 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar4)) {
      bVar14 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar4 - vdp_plane_a_name_table_base,uVar6);
      bVar14 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar4) && (uVar4 < vdp_plane_b_name_table_end)) {
      (*write_ds_background_tilemap_word)(1,uVar4 - vdp_plane_b_name_table_base,uVar6);
      bVar14 = true;
    }
    if ((vdp_window_name_table_base <= uVar4) && (uVar4 < vdp_window_name_table_end)) {
      (*write_ds_window_tilemap_word)(uVar4 - vdp_window_name_table_base,uVar6);
    }
    if (!bVar14) {
      update_cached_ds_pattern_from_vdp_word(uVar4,uVar6);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x0202e338  m68k_unrecognized_opcode

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x02009e3c) */
/* WARNING: Removing unreachable block (ram,0x02009e58) */
/* WARNING: Removing unreachable block (ram,0x02009e5c) */
/* WARNING: Removing unreachable block (ram,0x02009e74) */
/* WARNING: Removing unreachable block (ram,0x02009e70) */
/* WARNING: Removing unreachable block (ram,0x0200a30c) */
/* WARNING: Removing unreachable block (ram,0x0200a360) */
/* WARNING: Removing unreachable block (ram,0x0200a390) */
/* WARNING: Removing unreachable block (ram,0x0200a3a8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ac) */
/* WARNING: Removing unreachable block (ram,0x0200a3b0) */
/* WARNING: Removing unreachable block (ram,0x0200a3b4) */
/* WARNING: Removing unreachable block (ram,0x0200a3c4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d0) */
/* WARNING: Removing unreachable block (ram,0x0200a3d4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d8) */
/* WARNING: Removing unreachable block (ram,0x0200a3e0) */
/* WARNING: Removing unreachable block (ram,0x0200a3e4) */
/* WARNING: Removing unreachable block (ram,0x0200a3e8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ec) */
/* WARNING: Removing unreachable block (ram,0x0200a3f0) */
/* WARNING: Removing unreachable block (ram,0x0200a400) */
/* WARNING: Removing unreachable block (ram,0x0200a410) */
/* WARNING: Removing unreachable block (ram,0x0200a420) */
/* WARNING: Removing unreachable block (ram,0x0200a42c) */
/* WARNING: Removing unreachable block (ram,0x0200a4c4) */
/* WARNING: Removing unreachable block (ram,0x0200a430) */
/* WARNING: Removing unreachable block (ram,0x0200a440) */
/* WARNING: Removing unreachable block (ram,0x0200a640) */
/* WARNING: Removing unreachable block (ram,0x0200a44c) */
/* WARNING: Removing unreachable block (ram,0x0200a45c) */
/* WARNING: Removing unreachable block (ram,0x0200a628) */
/* WARNING: Removing unreachable block (ram,0x0200a468) */
/* WARNING: Removing unreachable block (ram,0x0200a490) */
/* WARNING: Removing unreachable block (ram,0x0200a470) */
/* WARNING: Removing unreachable block (ram,0x0200a4ac) */
/* WARNING: Removing unreachable block (ram,0x0200a480) */
/* WARNING: Removing unreachable block (ram,0x0200a2fc) */
/* WARNING: Removing unreachable block (ram,0x02009f04) */
/* WARNING: Removing unreachable block (ram,0x0200a4e0) */
/* WARNING: Removing unreachable block (ram,0x0200a4fc) */
/* WARNING: Removing unreachable block (ram,0x0200a500) */
/* WARNING: Removing unreachable block (ram,0x0200a504) */
/* WARNING: Removing unreachable block (ram,0x0200a53c) */
/* WARNING: Removing unreachable block (ram,0x0200a58c) */
/* WARNING: Removing unreachable block (ram,0x0200a5a4) */
/* WARNING: Removing unreachable block (ram,0x0200a5c0) */
/* WARNING: Removing unreachable block (ram,0x0200a5d8) */
/* WARNING: Removing unreachable block (ram,0x0200a5e8) */
/* WARNING: Removing unreachable block (ram,0x0200a5ec) */
/* WARNING: Removing unreachable block (ram,0x0200a5f0) */
/* WARNING: Removing unreachable block (ram,0x0200a5f4) */
/* WARNING: Removing unreachable block (ram,0x0200a5f8) */
/* WARNING: Removing unreachable block (ram,0x0200a608) */
/* WARNING: Removing unreachable block (ram,0x02009f50) */
/* WARNING: Removing unreachable block (ram,0x02009e88) */
/* WARNING: Removing unreachable block (ram,0x02009e98) */
/* WARNING: Removing unreachable block (ram,0x02009eb0) */
/* WARNING: Removing unreachable block (ram,0x02009ed0) */
/* WARNING: Removing unreachable block (ram,0x02009f58) */
/* WARNING: Removing unreachable block (ram,0x02009f60) */
/* WARNING: Removing unreachable block (ram,0x0200a65c) */
/* WARNING: Removing unreachable block (ram,0x0200a688) */
/* WARNING: Removing unreachable block (ram,0x0200a698) */
/* WARNING: Removing unreachable block (ram,0x0200a69c) */
/* WARNING: Removing unreachable block (ram,0x0200a6a0) */
/* WARNING: Removing unreachable block (ram,0x0200a6a4) */
/* WARNING: Removing unreachable block (ram,0x0200a6a8) */
/* WARNING: Removing unreachable block (ram,0x0200a6b8) */
/* WARNING: Removing unreachable block (ram,0x0200a6bc) */
/* WARNING: Removing unreachable block (ram,0x0200a6dc) */
/* WARNING: Removing unreachable block (ram,0x0200a6e8) */
/* WARNING: Removing unreachable block (ram,0x0200a6ec) */
/* WARNING: Removing unreachable block (ram,0x0200a6f0) */
/* WARNING: Removing unreachable block (ram,0x0200a6fc) */
/* WARNING: Removing unreachable block (ram,0x0200a70c) */
/* WARNING: Removing unreachable block (ram,0x0200a718) */
/* WARNING: Removing unreachable block (ram,0x0200a71c) */
/* WARNING: Removing unreachable block (ram,0x0200a720) */
/* WARNING: Removing unreachable block (ram,0x0200aa30) */
/* WARNING: Removing unreachable block (ram,0x0200a72c) */
/* WARNING: Removing unreachable block (ram,0x0200a730) */
/* WARNING: Removing unreachable block (ram,0x0200a734) */
/* WARNING: Removing unreachable block (ram,0x0200a738) */
/* WARNING: Removing unreachable block (ram,0x0200a740) */
/* WARNING: Removing unreachable block (ram,0x0200a744) */
/* WARNING: Removing unreachable block (ram,0x0200a748) */
/* WARNING: Removing unreachable block (ram,0x0200a754) */
/* WARNING: Removing unreachable block (ram,0x0200aa54) */
/* WARNING: Removing unreachable block (ram,0x0200aa64) */
/* WARNING: Removing unreachable block (ram,0x0200a764) */
/* WARNING: Removing unreachable block (ram,0x0200a76c) */
/* WARNING: Removing unreachable block (ram,0x0200a780) */
/* WARNING: Removing unreachable block (ram,0x0200a78c) */
/* WARNING: Removing unreachable block (ram,0x0200a790) */
/* WARNING: Removing unreachable block (ram,0x0200a794) */
/* WARNING: Removing unreachable block (ram,0x0200a798) */
/* WARNING: Removing unreachable block (ram,0x0200a79c) */
/* WARNING: Removing unreachable block (ram,0x0200a7a0) */
/* WARNING: Removing unreachable block (ram,0x0200a7ac) */
/* WARNING: Removing unreachable block (ram,0x0200a7b0) */
/* WARNING: Removing unreachable block (ram,0x0200a7b4) */
/* WARNING: Removing unreachable block (ram,0x0200a7c8) */
/* WARNING: Removing unreachable block (ram,0x0200a7d8) */
/* WARNING: Removing unreachable block (ram,0x0200a7dc) */
/* WARNING: Removing unreachable block (ram,0x0200a7e0) */
/* WARNING: Removing unreachable block (ram,0x0200a7e4) */
/* WARNING: Removing unreachable block (ram,0x0200a7e8) */
/* WARNING: Removing unreachable block (ram,0x0200a7ec) */
/* WARNING: Removing unreachable block (ram,0x0200a7f8) */
/* WARNING: Removing unreachable block (ram,0x0200a7fc) */
/* WARNING: Removing unreachable block (ram,0x0200a800) */
/* WARNING: Removing unreachable block (ram,0x0200a804) */
/* WARNING: Removing unreachable block (ram,0x0200a808) */
/* WARNING: Removing unreachable block (ram,0x0200a80c) */
/* WARNING: Removing unreachable block (ram,0x0200a81c) */
/* WARNING: Removing unreachable block (ram,0x0200aa28) */
/* WARNING: Removing unreachable block (ram,0x0200a830) */
/* WARNING: Removing unreachable block (ram,0x0200a83c) */
/* WARNING: Removing unreachable block (ram,0x0200a840) */
/* WARNING: Removing unreachable block (ram,0x0200a844) */
/* WARNING: Removing unreachable block (ram,0x0200a848) */
/* WARNING: Removing unreachable block (ram,0x0200a84c) */
/* WARNING: Removing unreachable block (ram,0x0200a850) */
/* WARNING: Removing unreachable block (ram,0x0200a854) */
/* WARNING: Removing unreachable block (ram,0x0200a858) */
/* WARNING: Removing unreachable block (ram,0x0200a860) */
/* WARNING: Removing unreachable block (ram,0x0200a864) */
/* WARNING: Removing unreachable block (ram,0x0200a884) */
/* WARNING: Removing unreachable block (ram,0x0200a88c) */
/* WARNING: Removing unreachable block (ram,0x0200a8a0) */
/* WARNING: Removing unreachable block (ram,0x0200a8a4) */
/* WARNING: Removing unreachable block (ram,0x0200a8a8) */
/* WARNING: Removing unreachable block (ram,0x0200a8ac) */
/* WARNING: Removing unreachable block (ram,0x0200a8b0) */
/* WARNING: Removing unreachable block (ram,0x0200a8b4) */
/* WARNING: Removing unreachable block (ram,0x0200a8c8) */
/* WARNING: Removing unreachable block (ram,0x0200a8cc) */
/* WARNING: Removing unreachable block (ram,0x0200a8d0) */
/* WARNING: Removing unreachable block (ram,0x0200a8d4) */
/* WARNING: Removing unreachable block (ram,0x0200a8d8) */
/* WARNING: Removing unreachable block (ram,0x0200a8dc) */
/* WARNING: Removing unreachable block (ram,0x0200a8e0) */
/* WARNING: Removing unreachable block (ram,0x0200a8e4) */
/* WARNING: Removing unreachable block (ram,0x0200a8ec) */
/* WARNING: Removing unreachable block (ram,0x0200a8f0) */
/* WARNING: Removing unreachable block (ram,0x0200a910) */
/* WARNING: Removing unreachable block (ram,0x0200a924) */
/* WARNING: Removing unreachable block (ram,0x0200a934) */
/* WARNING: Removing unreachable block (ram,0x0200a978) */
/* WARNING: Removing unreachable block (ram,0x0200a980) */
/* WARNING: Removing unreachable block (ram,0x0200a9c8) */
/* WARNING: Removing unreachable block (ram,0x0200a9e0) */
/* WARNING: Removing unreachable block (ram,0x0200a9a0) */
/* WARNING: Removing unreachable block (ram,0x0200a99c) */
/* WARNING: Removing unreachable block (ram,0x0200a9e8) */
/* WARNING: Removing unreachable block (ram,0x0200aa1c) */
/* WARNING: Removing unreachable block (ram,0x02009f7c) */
/* WARNING: Removing unreachable block (ram,0x02009fa0) */
/* WARNING: Removing unreachable block (ram,0x02009fe4) */
/* WARNING: Removing unreachable block (ram,0x02009ff8) */
/* WARNING: Removing unreachable block (ram,0x0200a004) */
/* WARNING: Removing unreachable block (ram,0x0200a008) */
/* WARNING: Removing unreachable block (ram,0x0200a00c) */
/* WARNING: Removing unreachable block (ram,0x0200aa20) */
/* WARNING: Removing unreachable block (ram,0x0200a018) */
/* WARNING: Removing unreachable block (ram,0x0200a01c) */
/* WARNING: Removing unreachable block (ram,0x0200a020) */
/* WARNING: Removing unreachable block (ram,0x0200a024) */
/* WARNING: Removing unreachable block (ram,0x0200a02c) */
/* WARNING: Removing unreachable block (ram,0x0200a030) */
/* WARNING: Removing unreachable block (ram,0x0200a034) */
/* WARNING: Removing unreachable block (ram,0x0200a040) */
/* WARNING: Removing unreachable block (ram,0x0200aa40) */
/* WARNING: Removing unreachable block (ram,0x0200aa50) */
/* WARNING: Removing unreachable block (ram,0x0200a050) */
/* WARNING: Removing unreachable block (ram,0x0200a058) */
/* WARNING: Removing unreachable block (ram,0x0200a06c) */
/* WARNING: Removing unreachable block (ram,0x0200aa38) */
/* WARNING: Removing unreachable block (ram,0x0200a07c) */
/* WARNING: Removing unreachable block (ram,0x0200a08c) */
/* WARNING: Removing unreachable block (ram,0x0200a09c) */
/* WARNING: Removing unreachable block (ram,0x0200a0b4) */
/* WARNING: Removing unreachable block (ram,0x0200a0f0) */
/* WARNING: Removing unreachable block (ram,0x0200a108) */
/* WARNING: Removing unreachable block (ram,0x0200a11c) */
/* WARNING: Removing unreachable block (ram,0x0200a12c) */
/* WARNING: Removing unreachable block (ram,0x0200a14c) */
/* WARNING: Removing unreachable block (ram,0x0200a15c) */
/* WARNING: Removing unreachable block (ram,0x0200a174) */
/* WARNING: Removing unreachable block (ram,0x0200a1b0) */
/* WARNING: Removing unreachable block (ram,0x0200a1c8) */
/* WARNING: Removing unreachable block (ram,0x0200a1dc) */
/* WARNING: Removing unreachable block (ram,0x0200a1ec) */
/* WARNING: Removing unreachable block (ram,0x0200a208) */
/* WARNING: Removing unreachable block (ram,0x0200a20c) */
/* WARNING: Removing unreachable block (ram,0x0200a210) */
/* WARNING: Removing unreachable block (ram,0x0200a218) */
/* WARNING: Removing unreachable block (ram,0x0200a220) */
/* WARNING: Removing unreachable block (ram,0x0200a240) */
/* WARNING: Removing unreachable block (ram,0x0200a278) */
/* WARNING: Removing unreachable block (ram,0x0200a28c) */
/* WARNING: Removing unreachable block (ram,0x0200a290) */
/* WARNING: Removing unreachable block (ram,0x0200a294) */
/* WARNING: Removing unreachable block (ram,0x0200a298) */
/* WARNING: Removing unreachable block (ram,0x0200a2a8) */
/* WARNING: Removing unreachable block (ram,0x0200a2e4) */
/* WARNING: Removing unreachable block (ram,0x02009ee0) */
/* WARNING: Removing unreachable block (ram,0x02009ee4) */
/* WARNING: Removing unreachable block (ram,0x02009efc) */
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_unrecognized_opcode_0202e338(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r6;
  uint uVar12;
  uint unaff_r7;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar13;
  
  uVar6 = unaff_r7 & 0x1f;
  uVar4 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  uVar1 = (ushort)uVar6;
  if (0xdfffff < (uVar4 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar4 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar4 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  uVar2 = (undefined1)uVar6;
  if ((uVar4 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000 | uVar6;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff | (unaff_r7 & 3) << 0xe;
    vdp_access_code = vdp_access_code & 3 | uVar6 >> 2 & 0x3c;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    return;
  }
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar3 = vdp_address_increment;
  uVar4 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar13 = (vdp_address & 1) == 0;
    uVar11 = vdp_address & 0xffff;
    if (bVar13) {
      puVar8 = &vdp_vram + uVar11;
    }
    else {
      puVar8 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar12 = vdp_address_increment & 0xffff;
    if (!bVar13) {
      (&vdp_vram)[(int)puVar8] = uVar2;
    }
    uVar4 = uVar4 & 0xffff;
    if (bVar13) {
      (&vdp_vram)[uVar11] = 0;
      puVar8[1] = uVar2;
    }
    if (!bVar13) {
      (&vdp_vram)[uVar11] = 0;
    }
    uVar5 = uVar11 + uVar12 & 0xffff;
    uVar9 = uVar4;
    if (uVar4 != 0) {
      do {
        uVar9 = uVar9 - 1 & 0xffff;
        (&vdp_vram)[uVar5] = uVar2;
        uVar5 = uVar5 + uVar12 & 0xffff;
      } while (uVar9 != 0);
      uVar11 = vdp_address;
      if (uVar4 == 0xffff && uVar6 == 0) {
        vdp_address = uVar5;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar5;
    uVar11 = uVar11 & 0xfffe;
    if (uVar3 == 1) {
      uVar4 = uVar4 >> 1;
      uVar12 = 2;
    }
    do {
      if (uVar11 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar11 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar11)) {
          if ((uVar11 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar11)) {
            bVar13 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar11 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
            bVar13 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar11) && (uVar11 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar11 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
            bVar13 = true;
          }
          if ((vdp_window_name_table_base <= uVar11) && (uVar11 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar11 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
          }
          if (!bVar13) {
            update_cached_ds_pattern_from_vdp_word(uVar11,*(undefined2 *)(&vdp_vram + uVar11));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar11) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar4 = uVar4 - 1 & 0xffff;
      if (uVar4 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar11 = uVar11 + uVar12 & 0xfffe;
    } while( true );
  }
  uVar4 = vdp_access_code & 0xf;
  if (uVar4 == 3) {
    uVar6 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar6] = uVar1 & 0xeee;
    uVar1 = (ushort)((unaff_r7 & 0xe) << 1) | 0x8000;
    if ((uVar6 != 0) && (vdp_scanline < 0xdf)) {
      bVar7 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar7 == 200) {
        bVar7 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&scanline_pending_palette_changes)[bVar7] = &DAT_023dc8ca + (uint)(bVar7 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar6 + (uint)(bVar7 >> 5) * 0x40] = uVar1;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar6] = uVar1;
    DAT_0208f354 = 1;
    if (uVar6 == uVar4) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar4 == 5) {
    uVar6 = vdp_address & 0x7f;
    if (0x4f < uVar6) {
      vdp_address = uVar6;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar6;
    *(ushort *)((int)&vdp_vsram + uVar4) = uVar1;
  }
  else if (uVar4 == 1) {
    uVar4 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(ushort *)(&vdp_vram + uVar4) == uVar6) goto LAB_0200ae88;
      *(ushort *)(&vdp_vram + uVar4) = uVar1;
    }
    else {
      (&vdp_vram)[uVar4] = 0;
      (&vdp_vram_odd_byte_base)[uVar4] = uVar2;
      uVar6 = uVar6 << 8;
    }
    if (vdp_sprite_attribute_table_base <= uVar4) {
      if (vdp_wide_display_mode == '\0') {
        iVar10 = 0x200;
      }
      else {
        iVar10 = 0x280;
      }
      if (uVar4 < iVar10 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar4 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar4)) {
      bVar13 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar4 - vdp_plane_a_name_table_base,uVar6);
      bVar13 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar4) && (uVar4 < vdp_plane_b_name_table_end)) {
      (*write_ds_background_tilemap_word)(1,uVar4 - vdp_plane_b_name_table_base,uVar6);
      bVar13 = true;
    }
    if ((vdp_window_name_table_base <= uVar4) && (uVar4 < vdp_window_name_table_end)) {
      (*write_ds_window_tilemap_word)(uVar4 - vdp_window_name_table_base,uVar6);
    }
    if (!bVar13) {
      update_cached_ds_pattern_from_vdp_word(uVar4,uVar6);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x0202e35c  m68k_unrecognized_opcode

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x02009e3c) */
/* WARNING: Removing unreachable block (ram,0x02009e58) */
/* WARNING: Removing unreachable block (ram,0x02009e5c) */
/* WARNING: Removing unreachable block (ram,0x02009e74) */
/* WARNING: Removing unreachable block (ram,0x02009e70) */
/* WARNING: Removing unreachable block (ram,0x0200a30c) */
/* WARNING: Removing unreachable block (ram,0x0200a360) */
/* WARNING: Removing unreachable block (ram,0x0200a390) */
/* WARNING: Removing unreachable block (ram,0x0200a3a8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ac) */
/* WARNING: Removing unreachable block (ram,0x0200a3b0) */
/* WARNING: Removing unreachable block (ram,0x0200a3b4) */
/* WARNING: Removing unreachable block (ram,0x0200a3c4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d0) */
/* WARNING: Removing unreachable block (ram,0x0200a3d4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d8) */
/* WARNING: Removing unreachable block (ram,0x0200a3e0) */
/* WARNING: Removing unreachable block (ram,0x0200a3e4) */
/* WARNING: Removing unreachable block (ram,0x0200a3e8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ec) */
/* WARNING: Removing unreachable block (ram,0x0200a3f0) */
/* WARNING: Removing unreachable block (ram,0x0200a400) */
/* WARNING: Removing unreachable block (ram,0x0200a410) */
/* WARNING: Removing unreachable block (ram,0x0200a420) */
/* WARNING: Removing unreachable block (ram,0x0200a42c) */
/* WARNING: Removing unreachable block (ram,0x0200a4c4) */
/* WARNING: Removing unreachable block (ram,0x0200a430) */
/* WARNING: Removing unreachable block (ram,0x0200a440) */
/* WARNING: Removing unreachable block (ram,0x0200a640) */
/* WARNING: Removing unreachable block (ram,0x0200a44c) */
/* WARNING: Removing unreachable block (ram,0x0200a45c) */
/* WARNING: Removing unreachable block (ram,0x0200a628) */
/* WARNING: Removing unreachable block (ram,0x0200a468) */
/* WARNING: Removing unreachable block (ram,0x0200a490) */
/* WARNING: Removing unreachable block (ram,0x0200a470) */
/* WARNING: Removing unreachable block (ram,0x0200a4ac) */
/* WARNING: Removing unreachable block (ram,0x0200a480) */
/* WARNING: Removing unreachable block (ram,0x0200a2fc) */
/* WARNING: Removing unreachable block (ram,0x02009f04) */
/* WARNING: Removing unreachable block (ram,0x0200a4e0) */
/* WARNING: Removing unreachable block (ram,0x0200a4fc) */
/* WARNING: Removing unreachable block (ram,0x0200a500) */
/* WARNING: Removing unreachable block (ram,0x0200a504) */
/* WARNING: Removing unreachable block (ram,0x0200a53c) */
/* WARNING: Removing unreachable block (ram,0x0200a58c) */
/* WARNING: Removing unreachable block (ram,0x0200a5a4) */
/* WARNING: Removing unreachable block (ram,0x0200a5c0) */
/* WARNING: Removing unreachable block (ram,0x0200a5d8) */
/* WARNING: Removing unreachable block (ram,0x0200a5e8) */
/* WARNING: Removing unreachable block (ram,0x0200a5ec) */
/* WARNING: Removing unreachable block (ram,0x0200a5f0) */
/* WARNING: Removing unreachable block (ram,0x0200a5f4) */
/* WARNING: Removing unreachable block (ram,0x0200a5f8) */
/* WARNING: Removing unreachable block (ram,0x0200a608) */
/* WARNING: Removing unreachable block (ram,0x02009f50) */
/* WARNING: Removing unreachable block (ram,0x02009e88) */
/* WARNING: Removing unreachable block (ram,0x02009e98) */
/* WARNING: Removing unreachable block (ram,0x02009eb0) */
/* WARNING: Removing unreachable block (ram,0x02009ed0) */
/* WARNING: Removing unreachable block (ram,0x02009f58) */
/* WARNING: Removing unreachable block (ram,0x02009f60) */
/* WARNING: Removing unreachable block (ram,0x0200a65c) */
/* WARNING: Removing unreachable block (ram,0x0200a688) */
/* WARNING: Removing unreachable block (ram,0x0200a698) */
/* WARNING: Removing unreachable block (ram,0x0200a69c) */
/* WARNING: Removing unreachable block (ram,0x0200a6a0) */
/* WARNING: Removing unreachable block (ram,0x0200a6a4) */
/* WARNING: Removing unreachable block (ram,0x0200a6a8) */
/* WARNING: Removing unreachable block (ram,0x0200a6b8) */
/* WARNING: Removing unreachable block (ram,0x0200a6bc) */
/* WARNING: Removing unreachable block (ram,0x0200a6dc) */
/* WARNING: Removing unreachable block (ram,0x0200a6e8) */
/* WARNING: Removing unreachable block (ram,0x0200a6ec) */
/* WARNING: Removing unreachable block (ram,0x0200a6f0) */
/* WARNING: Removing unreachable block (ram,0x0200a6fc) */
/* WARNING: Removing unreachable block (ram,0x0200a70c) */
/* WARNING: Removing unreachable block (ram,0x0200a718) */
/* WARNING: Removing unreachable block (ram,0x0200a71c) */
/* WARNING: Removing unreachable block (ram,0x0200a720) */
/* WARNING: Removing unreachable block (ram,0x0200aa30) */
/* WARNING: Removing unreachable block (ram,0x0200a72c) */
/* WARNING: Removing unreachable block (ram,0x0200a730) */
/* WARNING: Removing unreachable block (ram,0x0200a734) */
/* WARNING: Removing unreachable block (ram,0x0200a738) */
/* WARNING: Removing unreachable block (ram,0x0200a740) */
/* WARNING: Removing unreachable block (ram,0x0200a744) */
/* WARNING: Removing unreachable block (ram,0x0200a748) */
/* WARNING: Removing unreachable block (ram,0x0200a754) */
/* WARNING: Removing unreachable block (ram,0x0200aa54) */
/* WARNING: Removing unreachable block (ram,0x0200aa64) */
/* WARNING: Removing unreachable block (ram,0x0200a764) */
/* WARNING: Removing unreachable block (ram,0x0200a76c) */
/* WARNING: Removing unreachable block (ram,0x0200a780) */
/* WARNING: Removing unreachable block (ram,0x0200a78c) */
/* WARNING: Removing unreachable block (ram,0x0200a790) */
/* WARNING: Removing unreachable block (ram,0x0200a794) */
/* WARNING: Removing unreachable block (ram,0x0200a798) */
/* WARNING: Removing unreachable block (ram,0x0200a79c) */
/* WARNING: Removing unreachable block (ram,0x0200a7a0) */
/* WARNING: Removing unreachable block (ram,0x0200a7ac) */
/* WARNING: Removing unreachable block (ram,0x0200a7b0) */
/* WARNING: Removing unreachable block (ram,0x0200a7b4) */
/* WARNING: Removing unreachable block (ram,0x0200a7c8) */
/* WARNING: Removing unreachable block (ram,0x0200a7d8) */
/* WARNING: Removing unreachable block (ram,0x0200a7dc) */
/* WARNING: Removing unreachable block (ram,0x0200a7e0) */
/* WARNING: Removing unreachable block (ram,0x0200a7e4) */
/* WARNING: Removing unreachable block (ram,0x0200a7e8) */
/* WARNING: Removing unreachable block (ram,0x0200a7ec) */
/* WARNING: Removing unreachable block (ram,0x0200a7f8) */
/* WARNING: Removing unreachable block (ram,0x0200a7fc) */
/* WARNING: Removing unreachable block (ram,0x0200a800) */
/* WARNING: Removing unreachable block (ram,0x0200a804) */
/* WARNING: Removing unreachable block (ram,0x0200a808) */
/* WARNING: Removing unreachable block (ram,0x0200a80c) */
/* WARNING: Removing unreachable block (ram,0x0200a81c) */
/* WARNING: Removing unreachable block (ram,0x0200aa28) */
/* WARNING: Removing unreachable block (ram,0x0200a830) */
/* WARNING: Removing unreachable block (ram,0x0200a83c) */
/* WARNING: Removing unreachable block (ram,0x0200a840) */
/* WARNING: Removing unreachable block (ram,0x0200a844) */
/* WARNING: Removing unreachable block (ram,0x0200a848) */
/* WARNING: Removing unreachable block (ram,0x0200a84c) */
/* WARNING: Removing unreachable block (ram,0x0200a850) */
/* WARNING: Removing unreachable block (ram,0x0200a854) */
/* WARNING: Removing unreachable block (ram,0x0200a858) */
/* WARNING: Removing unreachable block (ram,0x0200a860) */
/* WARNING: Removing unreachable block (ram,0x0200a864) */
/* WARNING: Removing unreachable block (ram,0x0200a884) */
/* WARNING: Removing unreachable block (ram,0x0200a88c) */
/* WARNING: Removing unreachable block (ram,0x0200a8a0) */
/* WARNING: Removing unreachable block (ram,0x0200a8a4) */
/* WARNING: Removing unreachable block (ram,0x0200a8a8) */
/* WARNING: Removing unreachable block (ram,0x0200a8ac) */
/* WARNING: Removing unreachable block (ram,0x0200a8b0) */
/* WARNING: Removing unreachable block (ram,0x0200a8b4) */
/* WARNING: Removing unreachable block (ram,0x0200a8c8) */
/* WARNING: Removing unreachable block (ram,0x0200a8cc) */
/* WARNING: Removing unreachable block (ram,0x0200a8d0) */
/* WARNING: Removing unreachable block (ram,0x0200a8d4) */
/* WARNING: Removing unreachable block (ram,0x0200a8d8) */
/* WARNING: Removing unreachable block (ram,0x0200a8dc) */
/* WARNING: Removing unreachable block (ram,0x0200a8e0) */
/* WARNING: Removing unreachable block (ram,0x0200a8e4) */
/* WARNING: Removing unreachable block (ram,0x0200a8ec) */
/* WARNING: Removing unreachable block (ram,0x0200a8f0) */
/* WARNING: Removing unreachable block (ram,0x0200a910) */
/* WARNING: Removing unreachable block (ram,0x0200a924) */
/* WARNING: Removing unreachable block (ram,0x0200a934) */
/* WARNING: Removing unreachable block (ram,0x0200a978) */
/* WARNING: Removing unreachable block (ram,0x0200a980) */
/* WARNING: Removing unreachable block (ram,0x0200a9c8) */
/* WARNING: Removing unreachable block (ram,0x0200a9e0) */
/* WARNING: Removing unreachable block (ram,0x0200a9a0) */
/* WARNING: Removing unreachable block (ram,0x0200a99c) */
/* WARNING: Removing unreachable block (ram,0x0200a9e8) */
/* WARNING: Removing unreachable block (ram,0x0200aa1c) */
/* WARNING: Removing unreachable block (ram,0x02009f7c) */
/* WARNING: Removing unreachable block (ram,0x02009fa0) */
/* WARNING: Removing unreachable block (ram,0x02009fe4) */
/* WARNING: Removing unreachable block (ram,0x02009ff8) */
/* WARNING: Removing unreachable block (ram,0x0200a004) */
/* WARNING: Removing unreachable block (ram,0x0200a008) */
/* WARNING: Removing unreachable block (ram,0x0200a00c) */
/* WARNING: Removing unreachable block (ram,0x0200aa20) */
/* WARNING: Removing unreachable block (ram,0x0200a018) */
/* WARNING: Removing unreachable block (ram,0x0200a01c) */
/* WARNING: Removing unreachable block (ram,0x0200a020) */
/* WARNING: Removing unreachable block (ram,0x0200a024) */
/* WARNING: Removing unreachable block (ram,0x0200a02c) */
/* WARNING: Removing unreachable block (ram,0x0200a030) */
/* WARNING: Removing unreachable block (ram,0x0200a034) */
/* WARNING: Removing unreachable block (ram,0x0200a040) */
/* WARNING: Removing unreachable block (ram,0x0200aa40) */
/* WARNING: Removing unreachable block (ram,0x0200aa50) */
/* WARNING: Removing unreachable block (ram,0x0200a050) */
/* WARNING: Removing unreachable block (ram,0x0200a058) */
/* WARNING: Removing unreachable block (ram,0x0200a06c) */
/* WARNING: Removing unreachable block (ram,0x0200aa38) */
/* WARNING: Removing unreachable block (ram,0x0200a07c) */
/* WARNING: Removing unreachable block (ram,0x0200a08c) */
/* WARNING: Removing unreachable block (ram,0x0200a09c) */
/* WARNING: Removing unreachable block (ram,0x0200a0b4) */
/* WARNING: Removing unreachable block (ram,0x0200a0f0) */
/* WARNING: Removing unreachable block (ram,0x0200a108) */
/* WARNING: Removing unreachable block (ram,0x0200a11c) */
/* WARNING: Removing unreachable block (ram,0x0200a12c) */
/* WARNING: Removing unreachable block (ram,0x0200a14c) */
/* WARNING: Removing unreachable block (ram,0x0200a15c) */
/* WARNING: Removing unreachable block (ram,0x0200a174) */
/* WARNING: Removing unreachable block (ram,0x0200a1b0) */
/* WARNING: Removing unreachable block (ram,0x0200a1c8) */
/* WARNING: Removing unreachable block (ram,0x0200a1dc) */
/* WARNING: Removing unreachable block (ram,0x0200a1ec) */
/* WARNING: Removing unreachable block (ram,0x0200a208) */
/* WARNING: Removing unreachable block (ram,0x0200a20c) */
/* WARNING: Removing unreachable block (ram,0x0200a210) */
/* WARNING: Removing unreachable block (ram,0x0200a218) */
/* WARNING: Removing unreachable block (ram,0x0200a220) */
/* WARNING: Removing unreachable block (ram,0x0200a240) */
/* WARNING: Removing unreachable block (ram,0x0200a278) */
/* WARNING: Removing unreachable block (ram,0x0200a28c) */
/* WARNING: Removing unreachable block (ram,0x0200a290) */
/* WARNING: Removing unreachable block (ram,0x0200a294) */
/* WARNING: Removing unreachable block (ram,0x0200a298) */
/* WARNING: Removing unreachable block (ram,0x0200a2a8) */
/* WARNING: Removing unreachable block (ram,0x0200a2e4) */
/* WARNING: Removing unreachable block (ram,0x02009ee0) */
/* WARNING: Removing unreachable block (ram,0x02009ee4) */
/* WARNING: Removing unreachable block (ram,0x02009efc) */
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_unrecognized_opcode_0202e35c(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r6;
  uint uVar12;
  uint unaff_r7;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar13;
  
  uVar6 = unaff_r7 & 0x1f;
  uVar1 = *unaff_r10;
  iVar10 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar10 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar10 = (int)*(short *)(iVar10 + uVar4);
  }
  else {
    iVar10 = *(int *)(iVar10 + uVar4);
  }
  uVar4 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar10;
  uVar1 = (ushort)uVar6;
  if (0xdfffff < (uVar4 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar4 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar4 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  uVar2 = (undefined1)uVar6;
  if ((uVar4 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000 | uVar6;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff | (unaff_r7 & 3) << 0xe;
    vdp_access_code = vdp_access_code & 3 | uVar6 >> 2 & 0x3c;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    return;
  }
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar3 = vdp_address_increment;
  uVar4 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar13 = (vdp_address & 1) == 0;
    uVar11 = vdp_address & 0xffff;
    if (bVar13) {
      puVar8 = &vdp_vram + uVar11;
    }
    else {
      puVar8 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar12 = vdp_address_increment & 0xffff;
    if (!bVar13) {
      (&vdp_vram)[(int)puVar8] = uVar2;
    }
    uVar4 = uVar4 & 0xffff;
    if (bVar13) {
      (&vdp_vram)[uVar11] = 0;
      puVar8[1] = uVar2;
    }
    if (!bVar13) {
      (&vdp_vram)[uVar11] = 0;
    }
    uVar5 = uVar11 + uVar12 & 0xffff;
    uVar9 = uVar4;
    if (uVar4 != 0) {
      do {
        uVar9 = uVar9 - 1 & 0xffff;
        (&vdp_vram)[uVar5] = uVar2;
        uVar5 = uVar5 + uVar12 & 0xffff;
      } while (uVar9 != 0);
      uVar11 = vdp_address;
      if (uVar4 == 0xffff && uVar6 == 0) {
        vdp_address = uVar5;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar5;
    uVar11 = uVar11 & 0xfffe;
    if (uVar3 == 1) {
      uVar4 = uVar4 >> 1;
      uVar12 = 2;
    }
    do {
      if (uVar11 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar11 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar11)) {
          if ((uVar11 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar11)) {
            bVar13 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar11 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
            bVar13 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar11) && (uVar11 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar11 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
            bVar13 = true;
          }
          if ((vdp_window_name_table_base <= uVar11) && (uVar11 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar11 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
          }
          if (!bVar13) {
            update_cached_ds_pattern_from_vdp_word(uVar11,*(undefined2 *)(&vdp_vram + uVar11));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar11) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar4 = uVar4 - 1 & 0xffff;
      if (uVar4 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar11 = uVar11 + uVar12 & 0xfffe;
    } while( true );
  }
  uVar4 = vdp_access_code & 0xf;
  if (uVar4 == 3) {
    uVar6 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar6] = uVar1 & 0xeee;
    uVar1 = (ushort)((unaff_r7 & 0xe) << 1) | 0x8000;
    if ((uVar6 != 0) && (vdp_scanline < 0xdf)) {
      bVar7 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar7 == 200) {
        bVar7 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&scanline_pending_palette_changes)[bVar7] = &DAT_023dc8ca + (uint)(bVar7 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar6 + (uint)(bVar7 >> 5) * 0x40] = uVar1;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar6] = uVar1;
    DAT_0208f354 = 1;
    if (uVar6 == uVar4) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar4 == 5) {
    uVar6 = vdp_address & 0x7f;
    if (0x4f < uVar6) {
      vdp_address = uVar6;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar6;
    *(ushort *)((int)&vdp_vsram + uVar4) = uVar1;
  }
  else if (uVar4 == 1) {
    uVar4 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(ushort *)(&vdp_vram + uVar4) == uVar6) goto LAB_0200ae88;
      *(ushort *)(&vdp_vram + uVar4) = uVar1;
    }
    else {
      (&vdp_vram)[uVar4] = 0;
      (&vdp_vram_odd_byte_base)[uVar4] = uVar2;
      uVar6 = uVar6 << 8;
    }
    if (vdp_sprite_attribute_table_base <= uVar4) {
      if (vdp_wide_display_mode == '\0') {
        iVar10 = 0x200;
      }
      else {
        iVar10 = 0x280;
      }
      if (uVar4 < iVar10 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar4 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar4)) {
      bVar13 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar4 - vdp_plane_a_name_table_base,uVar6);
      bVar13 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar4) && (uVar4 < vdp_plane_b_name_table_end)) {
      (*write_ds_background_tilemap_word)(1,uVar4 - vdp_plane_b_name_table_base,uVar6);
      bVar13 = true;
    }
    if ((vdp_window_name_table_base <= uVar4) && (uVar4 < vdp_window_name_table_end)) {
      (*write_ds_window_tilemap_word)(uVar4 - vdp_window_name_table_base,uVar6);
    }
    if (!bVar13) {
      update_cached_ds_pattern_from_vdp_word(uVar4,uVar6);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x0202e3a4  m68k_unrecognized_opcode

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x02009e3c) */
/* WARNING: Removing unreachable block (ram,0x02009e58) */
/* WARNING: Removing unreachable block (ram,0x02009e5c) */
/* WARNING: Removing unreachable block (ram,0x02009e74) */
/* WARNING: Removing unreachable block (ram,0x02009e70) */
/* WARNING: Removing unreachable block (ram,0x0200a30c) */
/* WARNING: Removing unreachable block (ram,0x0200a360) */
/* WARNING: Removing unreachable block (ram,0x0200a390) */
/* WARNING: Removing unreachable block (ram,0x0200a3a8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ac) */
/* WARNING: Removing unreachable block (ram,0x0200a3b0) */
/* WARNING: Removing unreachable block (ram,0x0200a3b4) */
/* WARNING: Removing unreachable block (ram,0x0200a3c4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d0) */
/* WARNING: Removing unreachable block (ram,0x0200a3d4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d8) */
/* WARNING: Removing unreachable block (ram,0x0200a3e0) */
/* WARNING: Removing unreachable block (ram,0x0200a3e4) */
/* WARNING: Removing unreachable block (ram,0x0200a3e8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ec) */
/* WARNING: Removing unreachable block (ram,0x0200a3f0) */
/* WARNING: Removing unreachable block (ram,0x0200a400) */
/* WARNING: Removing unreachable block (ram,0x0200a410) */
/* WARNING: Removing unreachable block (ram,0x0200a420) */
/* WARNING: Removing unreachable block (ram,0x0200a42c) */
/* WARNING: Removing unreachable block (ram,0x0200a4c4) */
/* WARNING: Removing unreachable block (ram,0x0200a430) */
/* WARNING: Removing unreachable block (ram,0x0200a440) */
/* WARNING: Removing unreachable block (ram,0x0200a640) */
/* WARNING: Removing unreachable block (ram,0x0200a44c) */
/* WARNING: Removing unreachable block (ram,0x0200a45c) */
/* WARNING: Removing unreachable block (ram,0x0200a628) */
/* WARNING: Removing unreachable block (ram,0x0200a468) */
/* WARNING: Removing unreachable block (ram,0x0200a490) */
/* WARNING: Removing unreachable block (ram,0x0200a470) */
/* WARNING: Removing unreachable block (ram,0x0200a4ac) */
/* WARNING: Removing unreachable block (ram,0x0200a480) */
/* WARNING: Removing unreachable block (ram,0x0200a2fc) */
/* WARNING: Removing unreachable block (ram,0x02009f04) */
/* WARNING: Removing unreachable block (ram,0x0200a4e0) */
/* WARNING: Removing unreachable block (ram,0x0200a4fc) */
/* WARNING: Removing unreachable block (ram,0x0200a500) */
/* WARNING: Removing unreachable block (ram,0x0200a504) */
/* WARNING: Removing unreachable block (ram,0x0200a53c) */
/* WARNING: Removing unreachable block (ram,0x0200a58c) */
/* WARNING: Removing unreachable block (ram,0x0200a5a4) */
/* WARNING: Removing unreachable block (ram,0x0200a5c0) */
/* WARNING: Removing unreachable block (ram,0x0200a5d8) */
/* WARNING: Removing unreachable block (ram,0x0200a5e8) */
/* WARNING: Removing unreachable block (ram,0x0200a5ec) */
/* WARNING: Removing unreachable block (ram,0x0200a5f0) */
/* WARNING: Removing unreachable block (ram,0x0200a5f4) */
/* WARNING: Removing unreachable block (ram,0x0200a5f8) */
/* WARNING: Removing unreachable block (ram,0x0200a608) */
/* WARNING: Removing unreachable block (ram,0x02009f50) */
/* WARNING: Removing unreachable block (ram,0x02009e88) */
/* WARNING: Removing unreachable block (ram,0x02009e98) */
/* WARNING: Removing unreachable block (ram,0x02009eb0) */
/* WARNING: Removing unreachable block (ram,0x02009ed0) */
/* WARNING: Removing unreachable block (ram,0x02009f58) */
/* WARNING: Removing unreachable block (ram,0x02009f60) */
/* WARNING: Removing unreachable block (ram,0x0200a65c) */
/* WARNING: Removing unreachable block (ram,0x0200a688) */
/* WARNING: Removing unreachable block (ram,0x0200a698) */
/* WARNING: Removing unreachable block (ram,0x0200a69c) */
/* WARNING: Removing unreachable block (ram,0x0200a6a0) */
/* WARNING: Removing unreachable block (ram,0x0200a6a4) */
/* WARNING: Removing unreachable block (ram,0x0200a6a8) */
/* WARNING: Removing unreachable block (ram,0x0200a6b8) */
/* WARNING: Removing unreachable block (ram,0x0200a6bc) */
/* WARNING: Removing unreachable block (ram,0x0200a6dc) */
/* WARNING: Removing unreachable block (ram,0x0200a6e8) */
/* WARNING: Removing unreachable block (ram,0x0200a6ec) */
/* WARNING: Removing unreachable block (ram,0x0200a6f0) */
/* WARNING: Removing unreachable block (ram,0x0200a6fc) */
/* WARNING: Removing unreachable block (ram,0x0200a70c) */
/* WARNING: Removing unreachable block (ram,0x0200a718) */
/* WARNING: Removing unreachable block (ram,0x0200a71c) */
/* WARNING: Removing unreachable block (ram,0x0200a720) */
/* WARNING: Removing unreachable block (ram,0x0200aa30) */
/* WARNING: Removing unreachable block (ram,0x0200a72c) */
/* WARNING: Removing unreachable block (ram,0x0200a730) */
/* WARNING: Removing unreachable block (ram,0x0200a734) */
/* WARNING: Removing unreachable block (ram,0x0200a738) */
/* WARNING: Removing unreachable block (ram,0x0200a740) */
/* WARNING: Removing unreachable block (ram,0x0200a744) */
/* WARNING: Removing unreachable block (ram,0x0200a748) */
/* WARNING: Removing unreachable block (ram,0x0200a754) */
/* WARNING: Removing unreachable block (ram,0x0200aa54) */
/* WARNING: Removing unreachable block (ram,0x0200aa64) */
/* WARNING: Removing unreachable block (ram,0x0200a764) */
/* WARNING: Removing unreachable block (ram,0x0200a76c) */
/* WARNING: Removing unreachable block (ram,0x0200a780) */
/* WARNING: Removing unreachable block (ram,0x0200a78c) */
/* WARNING: Removing unreachable block (ram,0x0200a790) */
/* WARNING: Removing unreachable block (ram,0x0200a794) */
/* WARNING: Removing unreachable block (ram,0x0200a798) */
/* WARNING: Removing unreachable block (ram,0x0200a79c) */
/* WARNING: Removing unreachable block (ram,0x0200a7a0) */
/* WARNING: Removing unreachable block (ram,0x0200a7ac) */
/* WARNING: Removing unreachable block (ram,0x0200a7b0) */
/* WARNING: Removing unreachable block (ram,0x0200a7b4) */
/* WARNING: Removing unreachable block (ram,0x0200a7c8) */
/* WARNING: Removing unreachable block (ram,0x0200a7d8) */
/* WARNING: Removing unreachable block (ram,0x0200a7dc) */
/* WARNING: Removing unreachable block (ram,0x0200a7e0) */
/* WARNING: Removing unreachable block (ram,0x0200a7e4) */
/* WARNING: Removing unreachable block (ram,0x0200a7e8) */
/* WARNING: Removing unreachable block (ram,0x0200a7ec) */
/* WARNING: Removing unreachable block (ram,0x0200a7f8) */
/* WARNING: Removing unreachable block (ram,0x0200a7fc) */
/* WARNING: Removing unreachable block (ram,0x0200a800) */
/* WARNING: Removing unreachable block (ram,0x0200a804) */
/* WARNING: Removing unreachable block (ram,0x0200a808) */
/* WARNING: Removing unreachable block (ram,0x0200a80c) */
/* WARNING: Removing unreachable block (ram,0x0200a81c) */
/* WARNING: Removing unreachable block (ram,0x0200aa28) */
/* WARNING: Removing unreachable block (ram,0x0200a830) */
/* WARNING: Removing unreachable block (ram,0x0200a83c) */
/* WARNING: Removing unreachable block (ram,0x0200a840) */
/* WARNING: Removing unreachable block (ram,0x0200a844) */
/* WARNING: Removing unreachable block (ram,0x0200a848) */
/* WARNING: Removing unreachable block (ram,0x0200a84c) */
/* WARNING: Removing unreachable block (ram,0x0200a850) */
/* WARNING: Removing unreachable block (ram,0x0200a854) */
/* WARNING: Removing unreachable block (ram,0x0200a858) */
/* WARNING: Removing unreachable block (ram,0x0200a860) */
/* WARNING: Removing unreachable block (ram,0x0200a864) */
/* WARNING: Removing unreachable block (ram,0x0200a884) */
/* WARNING: Removing unreachable block (ram,0x0200a88c) */
/* WARNING: Removing unreachable block (ram,0x0200a8a0) */
/* WARNING: Removing unreachable block (ram,0x0200a8a4) */
/* WARNING: Removing unreachable block (ram,0x0200a8a8) */
/* WARNING: Removing unreachable block (ram,0x0200a8ac) */
/* WARNING: Removing unreachable block (ram,0x0200a8b0) */
/* WARNING: Removing unreachable block (ram,0x0200a8b4) */
/* WARNING: Removing unreachable block (ram,0x0200a8c8) */
/* WARNING: Removing unreachable block (ram,0x0200a8cc) */
/* WARNING: Removing unreachable block (ram,0x0200a8d0) */
/* WARNING: Removing unreachable block (ram,0x0200a8d4) */
/* WARNING: Removing unreachable block (ram,0x0200a8d8) */
/* WARNING: Removing unreachable block (ram,0x0200a8dc) */
/* WARNING: Removing unreachable block (ram,0x0200a8e0) */
/* WARNING: Removing unreachable block (ram,0x0200a8e4) */
/* WARNING: Removing unreachable block (ram,0x0200a8ec) */
/* WARNING: Removing unreachable block (ram,0x0200a8f0) */
/* WARNING: Removing unreachable block (ram,0x0200a910) */
/* WARNING: Removing unreachable block (ram,0x0200a924) */
/* WARNING: Removing unreachable block (ram,0x0200a934) */
/* WARNING: Removing unreachable block (ram,0x0200a978) */
/* WARNING: Removing unreachable block (ram,0x0200a980) */
/* WARNING: Removing unreachable block (ram,0x0200a9c8) */
/* WARNING: Removing unreachable block (ram,0x0200a9e0) */
/* WARNING: Removing unreachable block (ram,0x0200a9a0) */
/* WARNING: Removing unreachable block (ram,0x0200a99c) */
/* WARNING: Removing unreachable block (ram,0x0200a9e8) */
/* WARNING: Removing unreachable block (ram,0x0200aa1c) */
/* WARNING: Removing unreachable block (ram,0x02009f7c) */
/* WARNING: Removing unreachable block (ram,0x02009fa0) */
/* WARNING: Removing unreachable block (ram,0x02009fe4) */
/* WARNING: Removing unreachable block (ram,0x02009ff8) */
/* WARNING: Removing unreachable block (ram,0x0200a004) */
/* WARNING: Removing unreachable block (ram,0x0200a008) */
/* WARNING: Removing unreachable block (ram,0x0200a00c) */
/* WARNING: Removing unreachable block (ram,0x0200aa20) */
/* WARNING: Removing unreachable block (ram,0x0200a018) */
/* WARNING: Removing unreachable block (ram,0x0200a01c) */
/* WARNING: Removing unreachable block (ram,0x0200a020) */
/* WARNING: Removing unreachable block (ram,0x0200a024) */
/* WARNING: Removing unreachable block (ram,0x0200a02c) */
/* WARNING: Removing unreachable block (ram,0x0200a030) */
/* WARNING: Removing unreachable block (ram,0x0200a034) */
/* WARNING: Removing unreachable block (ram,0x0200a040) */
/* WARNING: Removing unreachable block (ram,0x0200aa40) */
/* WARNING: Removing unreachable block (ram,0x0200aa50) */
/* WARNING: Removing unreachable block (ram,0x0200a050) */
/* WARNING: Removing unreachable block (ram,0x0200a058) */
/* WARNING: Removing unreachable block (ram,0x0200a06c) */
/* WARNING: Removing unreachable block (ram,0x0200aa38) */
/* WARNING: Removing unreachable block (ram,0x0200a07c) */
/* WARNING: Removing unreachable block (ram,0x0200a08c) */
/* WARNING: Removing unreachable block (ram,0x0200a09c) */
/* WARNING: Removing unreachable block (ram,0x0200a0b4) */
/* WARNING: Removing unreachable block (ram,0x0200a0f0) */
/* WARNING: Removing unreachable block (ram,0x0200a108) */
/* WARNING: Removing unreachable block (ram,0x0200a11c) */
/* WARNING: Removing unreachable block (ram,0x0200a12c) */
/* WARNING: Removing unreachable block (ram,0x0200a14c) */
/* WARNING: Removing unreachable block (ram,0x0200a15c) */
/* WARNING: Removing unreachable block (ram,0x0200a174) */
/* WARNING: Removing unreachable block (ram,0x0200a1b0) */
/* WARNING: Removing unreachable block (ram,0x0200a1c8) */
/* WARNING: Removing unreachable block (ram,0x0200a1dc) */
/* WARNING: Removing unreachable block (ram,0x0200a1ec) */
/* WARNING: Removing unreachable block (ram,0x0200a208) */
/* WARNING: Removing unreachable block (ram,0x0200a20c) */
/* WARNING: Removing unreachable block (ram,0x0200a210) */
/* WARNING: Removing unreachable block (ram,0x0200a218) */
/* WARNING: Removing unreachable block (ram,0x0200a220) */
/* WARNING: Removing unreachable block (ram,0x0200a240) */
/* WARNING: Removing unreachable block (ram,0x0200a278) */
/* WARNING: Removing unreachable block (ram,0x0200a28c) */
/* WARNING: Removing unreachable block (ram,0x0200a290) */
/* WARNING: Removing unreachable block (ram,0x0200a294) */
/* WARNING: Removing unreachable block (ram,0x0200a298) */
/* WARNING: Removing unreachable block (ram,0x0200a2a8) */
/* WARNING: Removing unreachable block (ram,0x0200a2e4) */
/* WARNING: Removing unreachable block (ram,0x02009ee0) */
/* WARNING: Removing unreachable block (ram,0x02009ee4) */
/* WARNING: Removing unreachable block (ram,0x02009efc) */
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_unrecognized_opcode_0202e3a4(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint unaff_r7;
  int unaff_r8;
  ushort *unaff_r10;
  bool bVar13;
  
  uVar6 = unaff_r7 & 0x1f;
  uVar4 = (uint)(short)*unaff_r10;
  uVar1 = (ushort)uVar6;
  if (0xdfffff < (uVar4 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uint)*unaff_r10) = uVar1;
    return;
  }
  if ((uVar4 & 0xf00000) < 0xc00000) {
    (*(code *)(&m68k_word_write_handlers)[(uVar4 & 0xffffff) >> 0x10])(uVar4 & 0xffffff);
    return;
  }
  uVar2 = (undefined1)uVar6;
  if ((uVar4 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000 | uVar6;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff | (unaff_r7 & 3) << 0xe;
    vdp_access_code = vdp_access_code & 3 | uVar6 >> 2 & 0x3c;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    return;
  }
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar3 = vdp_address_increment;
  uVar4 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar13 = (vdp_address & 1) == 0;
    uVar11 = vdp_address & 0xffff;
    if (bVar13) {
      puVar8 = &vdp_vram + uVar11;
    }
    else {
      puVar8 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar12 = vdp_address_increment & 0xffff;
    if (!bVar13) {
      (&vdp_vram)[(int)puVar8] = uVar2;
    }
    uVar4 = uVar4 & 0xffff;
    if (bVar13) {
      (&vdp_vram)[uVar11] = 0;
      puVar8[1] = uVar2;
    }
    if (!bVar13) {
      (&vdp_vram)[uVar11] = 0;
    }
    uVar5 = uVar11 + uVar12 & 0xffff;
    uVar9 = uVar4;
    if (uVar4 != 0) {
      do {
        uVar9 = uVar9 - 1 & 0xffff;
        (&vdp_vram)[uVar5] = uVar2;
        uVar5 = uVar5 + uVar12 & 0xffff;
      } while (uVar9 != 0);
      uVar11 = vdp_address;
      if (uVar4 == 0xffff && uVar6 == 0) {
        vdp_address = uVar5;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar5;
    uVar11 = uVar11 & 0xfffe;
    if (uVar3 == 1) {
      uVar4 = uVar4 >> 1;
      uVar12 = 2;
    }
    do {
      if (uVar11 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar11 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar11)) {
          if ((uVar11 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar11)) {
            bVar13 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar11 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
            bVar13 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar11) && (uVar11 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar11 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
            bVar13 = true;
          }
          if ((vdp_window_name_table_base <= uVar11) && (uVar11 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar11 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar11));
          }
          if (!bVar13) {
            update_cached_ds_pattern_from_vdp_word(uVar11,*(undefined2 *)(&vdp_vram + uVar11));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + vdp_sprite_attribute_table_base <= uVar11) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar4 = uVar4 - 1 & 0xffff;
      if (uVar4 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar11 = uVar11 + uVar12 & 0xfffe;
    } while( true );
  }
  uVar4 = vdp_access_code & 0xf;
  if (uVar4 == 3) {
    uVar6 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar6] = uVar1 & 0xeee;
    uVar1 = (ushort)((unaff_r7 & 0xe) << 1) | 0x8000;
    if ((uVar6 != 0) && (vdp_scanline < 0xdf)) {
      bVar7 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar7 == 200) {
        bVar7 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&scanline_pending_palette_changes)[bVar7] = &DAT_023dc8ca + (uint)(bVar7 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar6 + (uint)(bVar7 >> 5) * 0x40] = uVar1;
    }
    uVar4 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar6] = uVar1;
    DAT_0208f354 = 1;
    if (uVar6 == uVar4) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar4 == 5) {
    uVar6 = vdp_address & 0x7f;
    if (0x4f < uVar6) {
      vdp_address = uVar6;
      return;
    }
    uVar4 = vdp_address & 0x7e;
    vdp_address = uVar6;
    *(ushort *)((int)&vdp_vsram + uVar4) = uVar1;
  }
  else if (uVar4 == 1) {
    uVar4 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(ushort *)(&vdp_vram + uVar4) == uVar6) goto LAB_0200ae88;
      *(ushort *)(&vdp_vram + uVar4) = uVar1;
    }
    else {
      (&vdp_vram)[uVar4] = 0;
      (&vdp_vram_odd_byte_base)[uVar4] = uVar2;
      uVar6 = uVar6 << 8;
    }
    if (vdp_sprite_attribute_table_base <= uVar4) {
      if (vdp_wide_display_mode == '\0') {
        iVar10 = 0x200;
      }
      else {
        iVar10 = 0x280;
      }
      if (uVar4 < iVar10 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar4 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar4)) {
      bVar13 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar4 - vdp_plane_a_name_table_base,uVar6);
      bVar13 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar4) && (uVar4 < vdp_plane_b_name_table_end)) {
      (*write_ds_background_tilemap_word)(1,uVar4 - vdp_plane_b_name_table_base,uVar6);
      bVar13 = true;
    }
    if ((vdp_window_name_table_base <= uVar4) && (uVar4 < vdp_window_name_table_end)) {
      (*write_ds_window_tilemap_word)(uVar4 - vdp_window_name_table_base,uVar6);
    }
    if (!bVar13) {
      update_cached_ds_pattern_from_vdp_word(uVar4,uVar6);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x0202e3b8  m68k_unrecognized_opcode

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x02009e3c) */
/* WARNING: Removing unreachable block (ram,0x02009e58) */
/* WARNING: Removing unreachable block (ram,0x02009e5c) */
/* WARNING: Removing unreachable block (ram,0x02009e74) */
/* WARNING: Removing unreachable block (ram,0x02009e70) */
/* WARNING: Removing unreachable block (ram,0x0200a30c) */
/* WARNING: Removing unreachable block (ram,0x0200a360) */
/* WARNING: Removing unreachable block (ram,0x0200a390) */
/* WARNING: Removing unreachable block (ram,0x0200a3a8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ac) */
/* WARNING: Removing unreachable block (ram,0x0200a3b0) */
/* WARNING: Removing unreachable block (ram,0x0200a3b4) */
/* WARNING: Removing unreachable block (ram,0x0200a3c4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d0) */
/* WARNING: Removing unreachable block (ram,0x0200a3d4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d8) */
/* WARNING: Removing unreachable block (ram,0x0200a3e0) */
/* WARNING: Removing unreachable block (ram,0x0200a3e4) */
/* WARNING: Removing unreachable block (ram,0x0200a3e8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ec) */
/* WARNING: Removing unreachable block (ram,0x0200a3f0) */
/* WARNING: Removing unreachable block (ram,0x0200a400) */
/* WARNING: Removing unreachable block (ram,0x0200a410) */
/* WARNING: Removing unreachable block (ram,0x0200a420) */
/* WARNING: Removing unreachable block (ram,0x0200a42c) */
/* WARNING: Removing unreachable block (ram,0x0200a4c4) */
/* WARNING: Removing unreachable block (ram,0x0200a430) */
/* WARNING: Removing unreachable block (ram,0x0200a440) */
/* WARNING: Removing unreachable block (ram,0x0200a640) */
/* WARNING: Removing unreachable block (ram,0x0200a44c) */
/* WARNING: Removing unreachable block (ram,0x0200a45c) */
/* WARNING: Removing unreachable block (ram,0x0200a628) */
/* WARNING: Removing unreachable block (ram,0x0200a468) */
/* WARNING: Removing unreachable block (ram,0x0200a490) */
/* WARNING: Removing unreachable block (ram,0x0200a470) */
/* WARNING: Removing unreachable block (ram,0x0200a4ac) */
/* WARNING: Removing unreachable block (ram,0x0200a480) */
/* WARNING: Removing unreachable block (ram,0x0200a2fc) */
/* WARNING: Removing unreachable block (ram,0x02009f04) */
/* WARNING: Removing unreachable block (ram,0x0200a4e0) */
/* WARNING: Removing unreachable block (ram,0x0200a4fc) */
/* WARNING: Removing unreachable block (ram,0x0200a500) */
/* WARNING: Removing unreachable block (ram,0x0200a504) */
/* WARNING: Removing unreachable block (ram,0x0200a53c) */
/* WARNING: Removing unreachable block (ram,0x0200a58c) */
/* WARNING: Removing unreachable block (ram,0x0200a5a4) */
/* WARNING: Removing unreachable block (ram,0x0200a5c0) */
/* WARNING: Removing unreachable block (ram,0x0200a5d8) */
/* WARNING: Removing unreachable block (ram,0x0200a5e8) */
/* WARNING: Removing unreachable block (ram,0x0200a5ec) */
/* WARNING: Removing unreachable block (ram,0x0200a5f0) */
/* WARNING: Removing unreachable block (ram,0x0200a5f4) */
/* WARNING: Removing unreachable block (ram,0x0200a5f8) */
/* WARNING: Removing unreachable block (ram,0x0200a608) */
/* WARNING: Removing unreachable block (ram,0x02009f50) */
/* WARNING: Removing unreachable block (ram,0x02009e88) */
/* WARNING: Removing unreachable block (ram,0x02009e98) */
/* WARNING: Removing unreachable block (ram,0x02009eb0) */
/* WARNING: Removing unreachable block (ram,0x02009ed0) */
/* WARNING: Removing unreachable block (ram,0x02009f58) */
/* WARNING: Removing unreachable block (ram,0x02009f60) */
/* WARNING: Removing unreachable block (ram,0x0200a65c) */
/* WARNING: Removing unreachable block (ram,0x0200a688) */
/* WARNING: Removing unreachable block (ram,0x0200a698) */
/* WARNING: Removing unreachable block (ram,0x0200a69c) */
/* WARNING: Removing unreachable block (ram,0x0200a6a0) */
/* WARNING: Removing unreachable block (ram,0x0200a6a4) */
/* WARNING: Removing unreachable block (ram,0x0200a6a8) */
/* WARNING: Removing unreachable block (ram,0x0200a6b8) */
/* WARNING: Removing unreachable block (ram,0x0200a6bc) */
/* WARNING: Removing unreachable block (ram,0x0200a6dc) */
/* WARNING: Removing unreachable block (ram,0x0200a6e8) */
/* WARNING: Removing unreachable block (ram,0x0200a6ec) */
/* WARNING: Removing unreachable block (ram,0x0200a6f0) */
/* WARNING: Removing unreachable block (ram,0x0200a6fc) */
/* WARNING: Removing unreachable block (ram,0x0200a70c) */
/* WARNING: Removing unreachable block (ram,0x0200a718) */
/* WARNING: Removing unreachable block (ram,0x0200a71c) */
/* WARNING: Removing unreachable block (ram,0x0200a720) */
/* WARNING: Removing unreachable block (ram,0x0200aa30) */
/* WARNING: Removing unreachable block (ram,0x0200a72c) */
/* WARNING: Removing unreachable block (ram,0x0200a730) */
/* WARNING: Removing unreachable block (ram,0x0200a734) */
/* WARNING: Removing unreachable block (ram,0x0200a738) */
/* WARNING: Removing unreachable block (ram,0x0200a740) */
/* WARNING: Removing unreachable block (ram,0x0200a744) */
/* WARNING: Removing unreachable block (ram,0x0200a748) */
/* WARNING: Removing unreachable block (ram,0x0200a754) */
/* WARNING: Removing unreachable block (ram,0x0200aa54) */
/* WARNING: Removing unreachable block (ram,0x0200aa64) */
/* WARNING: Removing unreachable block (ram,0x0200a764) */
/* WARNING: Removing unreachable block (ram,0x0200a76c) */
/* WARNING: Removing unreachable block (ram,0x0200a780) */
/* WARNING: Removing unreachable block (ram,0x0200a78c) */
/* WARNING: Removing unreachable block (ram,0x0200a790) */
/* WARNING: Removing unreachable block (ram,0x0200a794) */
/* WARNING: Removing unreachable block (ram,0x0200a798) */
/* WARNING: Removing unreachable block (ram,0x0200a79c) */
/* WARNING: Removing unreachable block (ram,0x0200a7a0) */
/* WARNING: Removing unreachable block (ram,0x0200a7ac) */
/* WARNING: Removing unreachable block (ram,0x0200a7b0) */
/* WARNING: Removing unreachable block (ram,0x0200a7b4) */
/* WARNING: Removing unreachable block (ram,0x0200a7c8) */
/* WARNING: Removing unreachable block (ram,0x0200a7d8) */
/* WARNING: Removing unreachable block (ram,0x0200a7dc) */
/* WARNING: Removing unreachable block (ram,0x0200a7e0) */
/* WARNING: Removing unreachable block (ram,0x0200a7e4) */
/* WARNING: Removing unreachable block (ram,0x0200a7e8) */
/* WARNING: Removing unreachable block (ram,0x0200a7ec) */
/* WARNING: Removing unreachable block (ram,0x0200a7f8) */
/* WARNING: Removing unreachable block (ram,0x0200a7fc) */
/* WARNING: Removing unreachable block (ram,0x0200a800) */
/* WARNING: Removing unreachable block (ram,0x0200a804) */
/* WARNING: Removing unreachable block (ram,0x0200a808) */
/* WARNING: Removing unreachable block (ram,0x0200a80c) */
/* WARNING: Removing unreachable block (ram,0x0200a81c) */
/* WARNING: Removing unreachable block (ram,0x0200aa28) */
/* WARNING: Removing unreachable block (ram,0x0200a830) */
/* WARNING: Removing unreachable block (ram,0x0200a83c) */
/* WARNING: Removing unreachable block (ram,0x0200a840) */
/* WARNING: Removing unreachable block (ram,0x0200a844) */
/* WARNING: Removing unreachable block (ram,0x0200a848) */
/* WARNING: Removing unreachable block (ram,0x0200a84c) */
/* WARNING: Removing unreachable block (ram,0x0200a850) */
/* WARNING: Removing unreachable block (ram,0x0200a854) */
/* WARNING: Removing unreachable block (ram,0x0200a858) */
/* WARNING: Removing unreachable block (ram,0x0200a860) */
/* WARNING: Removing unreachable block (ram,0x0200a864) */
/* WARNING: Removing unreachable block (ram,0x0200a884) */
/* WARNING: Removing unreachable block (ram,0x0200a88c) */
/* WARNING: Removing unreachable block (ram,0x0200a8a0) */
/* WARNING: Removing unreachable block (ram,0x0200a8a4) */
/* WARNING: Removing unreachable block (ram,0x0200a8a8) */
/* WARNING: Removing unreachable block (ram,0x0200a8ac) */
/* WARNING: Removing unreachable block (ram,0x0200a8b0) */
/* WARNING: Removing unreachable block (ram,0x0200a8b4) */
/* WARNING: Removing unreachable block (ram,0x0200a8c8) */
/* WARNING: Removing unreachable block (ram,0x0200a8cc) */
/* WARNING: Removing unreachable block (ram,0x0200a8d0) */
/* WARNING: Removing unreachable block (ram,0x0200a8d4) */
/* WARNING: Removing unreachable block (ram,0x0200a8d8) */
/* WARNING: Removing unreachable block (ram,0x0200a8dc) */
/* WARNING: Removing unreachable block (ram,0x0200a8e0) */
/* WARNING: Removing unreachable block (ram,0x0200a8e4) */
/* WARNING: Removing unreachable block (ram,0x0200a8ec) */
/* WARNING: Removing unreachable block (ram,0x0200a8f0) */
/* WARNING: Removing unreachable block (ram,0x0200a910) */
/* WARNING: Removing unreachable block (ram,0x0200a924) */
/* WARNING: Removing unreachable block (ram,0x0200a934) */
/* WARNING: Removing unreachable block (ram,0x0200a978) */
/* WARNING: Removing unreachable block (ram,0x0200a980) */
/* WARNING: Removing unreachable block (ram,0x0200a9c8) */
/* WARNING: Removing unreachable block (ram,0x0200a9e0) */
/* WARNING: Removing unreachable block (ram,0x0200a9a0) */
/* WARNING: Removing unreachable block (ram,0x0200a99c) */
/* WARNING: Removing unreachable block (ram,0x0200a9e8) */
/* WARNING: Removing unreachable block (ram,0x0200aa1c) */
/* WARNING: Removing unreachable block (ram,0x02009f7c) */
/* WARNING: Removing unreachable block (ram,0x02009fa0) */
/* WARNING: Removing unreachable block (ram,0x02009fe4) */
/* WARNING: Removing unreachable block (ram,0x02009ff8) */
/* WARNING: Removing unreachable block (ram,0x0200a004) */
/* WARNING: Removing unreachable block (ram,0x0200a008) */
/* WARNING: Removing unreachable block (ram,0x0200a00c) */
/* WARNING: Removing unreachable block (ram,0x0200aa20) */
/* WARNING: Removing unreachable block (ram,0x0200a018) */
/* WARNING: Removing unreachable block (ram,0x0200a01c) */
/* WARNING: Removing unreachable block (ram,0x0200a020) */
/* WARNING: Removing unreachable block (ram,0x0200a024) */
/* WARNING: Removing unreachable block (ram,0x0200a02c) */
/* WARNING: Removing unreachable block (ram,0x0200a030) */
/* WARNING: Removing unreachable block (ram,0x0200a034) */
/* WARNING: Removing unreachable block (ram,0x0200a040) */
/* WARNING: Removing unreachable block (ram,0x0200aa40) */
/* WARNING: Removing unreachable block (ram,0x0200aa50) */
/* WARNING: Removing unreachable block (ram,0x0200a050) */
/* WARNING: Removing unreachable block (ram,0x0200a058) */
/* WARNING: Removing unreachable block (ram,0x0200a06c) */
/* WARNING: Removing unreachable block (ram,0x0200aa38) */
/* WARNING: Removing unreachable block (ram,0x0200a07c) */
/* WARNING: Removing unreachable block (ram,0x0200a08c) */
/* WARNING: Removing unreachable block (ram,0x0200a09c) */
/* WARNING: Removing unreachable block (ram,0x0200a0b4) */
/* WARNING: Removing unreachable block (ram,0x0200a0f0) */
/* WARNING: Removing unreachable block (ram,0x0200a108) */
/* WARNING: Removing unreachable block (ram,0x0200a11c) */
/* WARNING: Removing unreachable block (ram,0x0200a12c) */
/* WARNING: Removing unreachable block (ram,0x0200a14c) */
/* WARNING: Removing unreachable block (ram,0x0200a15c) */
/* WARNING: Removing unreachable block (ram,0x0200a174) */
/* WARNING: Removing unreachable block (ram,0x0200a1b0) */
/* WARNING: Removing unreachable block (ram,0x0200a1c8) */
/* WARNING: Removing unreachable block (ram,0x0200a1dc) */
/* WARNING: Removing unreachable block (ram,0x0200a1ec) */
/* WARNING: Removing unreachable block (ram,0x0200a208) */
/* WARNING: Removing unreachable block (ram,0x0200a20c) */
/* WARNING: Removing unreachable block (ram,0x0200a210) */
/* WARNING: Removing unreachable block (ram,0x0200a218) */
/* WARNING: Removing unreachable block (ram,0x0200a220) */
/* WARNING: Removing unreachable block (ram,0x0200a240) */
/* WARNING: Removing unreachable block (ram,0x0200a278) */
/* WARNING: Removing unreachable block (ram,0x0200a28c) */
/* WARNING: Removing unreachable block (ram,0x0200a290) */
/* WARNING: Removing unreachable block (ram,0x0200a294) */
/* WARNING: Removing unreachable block (ram,0x0200a298) */
/* WARNING: Removing unreachable block (ram,0x0200a2a8) */
/* WARNING: Removing unreachable block (ram,0x0200a2e4) */
/* WARNING: Removing unreachable block (ram,0x02009ee0) */
/* WARNING: Removing unreachable block (ram,0x02009ee4) */
/* WARNING: Removing unreachable block (ram,0x02009efc) */
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_unrecognized_opcode_0202e3b8(void)

{
  ushort uVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint unaff_r7;
  int unaff_r8;
  ushort *unaff_r10;
  bool bVar14;
  
  uVar6 = unaff_r7 & 0x1f;
  uVar1 = unaff_r10[1];
  uVar7 = (*unaff_r10 & 0xf0) * 0x10000;
  uVar3 = (ushort)uVar6;
  if (0xdfffff < uVar7) {
    *(ushort *)(unaff_r8 + (uint)uVar1) = uVar3;
    return;
  }
  if (uVar7 < 0xc00000) {
    uVar6 = CONCAT22(*unaff_r10,uVar1) & 0xffffff;
    (*(code *)(&m68k_word_write_handlers)[uVar6 >> 0x10])(uVar6);
    return;
  }
  uVar2 = (undefined1)uVar6;
  if ((uVar1 & 0x1c) != 0) {
    if (vdp_control_word_pending == '\0') {
      vdp_control_word_pending = 1;
      vdp_access_code = vdp_access_code & 0x3c;
      vdp_address = vdp_address & 0xc000 | uVar6;
      return;
    }
    vdp_control_word_pending = 0;
    vdp_address = vdp_address & 0x3fff | (unaff_r7 & 3) << 0xe;
    vdp_access_code = vdp_access_code & 3 | uVar6 >> 2 & 0x3c;
    if (vdp_dma_enabled == '\0') {
      return;
    }
    return;
  }
  if (((vdp_control_word_pending != '\0') && (vdp_control_word_pending = '\0', vdp_dma_enabled != '\0')) &&
     ((vdp_access_code & 0x20) != 0)) {
    execute_vdp_dma_command();
  }
  uVar4 = vdp_address_increment;
  uVar7 = vdp_dma_remaining;
  if (vdp_dma_fill_pending != '\0') {
    bVar14 = (vdp_address & 1) == 0;
    uVar12 = vdp_address & 0xffff;
    if (bVar14) {
      puVar9 = &vdp_vram + uVar12;
    }
    else {
      puVar9 = (undefined1 *)(vdp_address & 0xfffe);
    }
    uVar13 = vdp_address_increment & 0xffff;
    if (!bVar14) {
      (&vdp_vram)[(int)puVar9] = uVar2;
    }
    uVar7 = uVar7 & 0xffff;
    if (bVar14) {
      (&vdp_vram)[uVar12] = 0;
      puVar9[1] = uVar2;
    }
    if (!bVar14) {
      (&vdp_vram)[uVar12] = 0;
    }
    uVar5 = uVar12 + uVar13 & 0xffff;
    uVar10 = uVar7;
    if (uVar7 != 0) {
      do {
        uVar10 = uVar10 - 1 & 0xffff;
        (&vdp_vram)[uVar5] = uVar2;
        uVar5 = uVar5 + uVar13 & 0xffff;
      } while (uVar10 != 0);
      uVar12 = vdp_address;
      if (uVar7 == 0xffff && uVar6 == 0) {
        vdp_address = uVar5;
        clear_and_initialize_renderer_vram();
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
    }
    vdp_address = uVar5;
    uVar12 = uVar12 & 0xfffe;
    if (uVar4 == 1) {
      uVar7 = uVar7 >> 1;
      uVar13 = 2;
    }
    do {
      if (uVar12 < vdp_sprite_attribute_table_base) {
LAB_0200adc4:
        if ((uVar12 < vdp_hscroll_table_base) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar12)) {
            bVar14 = false;
          }
          else {
            (*write_ds_background_tilemap_word)(0,uVar12 - vdp_plane_a_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar14 = true;
          }
          if ((vdp_plane_b_name_table_base <= uVar12) && (uVar12 < vdp_plane_b_name_table_end)) {
            (*write_ds_background_tilemap_word)(1,uVar12 - vdp_plane_b_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
            bVar14 = true;
          }
          if ((vdp_window_name_table_base <= uVar12) && (uVar12 < vdp_window_name_table_end)) {
            (*write_ds_window_tilemap_word)(uVar12 - vdp_window_name_table_base,*(undefined2 *)(&vdp_vram + uVar12));
          }
          if (!bVar14) {
            update_cached_ds_pattern_from_vdp_word(uVar12,*(undefined2 *)(&vdp_vram + uVar12));
          }
        }
      }
      else {
        if (vdp_wide_display_mode == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + vdp_sprite_attribute_table_base <= uVar12) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar7 = uVar7 - 1 & 0xffff;
      if (uVar7 == 0) {
        vdp_dma_fill_pending = 0;
        vdp_dma_length_register = 0;
        vdp_dma_remaining = 0;
        return;
      }
      uVar12 = uVar12 + uVar13 & 0xfffe;
    } while( true );
  }
  uVar7 = vdp_access_code & 0xf;
  if (uVar7 == 3) {
    uVar6 = (vdp_address & 0x7e) >> 1;
    (&vdp_cram)[uVar6] = uVar3 & 0xeee;
    uVar1 = (ushort)((unaff_r7 & 0xe) << 1) | 0x8000;
    if ((uVar6 != 0) && (vdp_scanline < 0xdf)) {
      bVar8 = (&DAT_0208ebb0)[vdp_scanline];
      if (bVar8 == 200) {
        bVar8 = (&DAT_0208ebaf)[vdp_scanline];
      }
      (&scanline_pending_palette_changes)[bVar8] = &DAT_023dc8ca + (uint)(bVar8 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar6 + (uint)(bVar8 >> 5) * 0x40] = uVar1;
    }
    uVar7 = (uint)vdp_backdrop_color_index;
    (&ds_converted_vdp_palette)[uVar6] = uVar1;
    DAT_0208f354 = 1;
    if (uVar6 == uVar7) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar7 == 5) {
    uVar6 = vdp_address & 0x7f;
    if (0x4f < uVar6) {
      vdp_address = uVar6;
      return;
    }
    uVar7 = vdp_address & 0x7e;
    vdp_address = uVar6;
    *(ushort *)((int)&vdp_vsram + uVar7) = uVar3;
  }
  else if (uVar7 == 1) {
    uVar7 = vdp_address & 0xfffe;
    if ((vdp_address & 1) == 0) {
      if (*(ushort *)(&vdp_vram + uVar7) == uVar6) goto LAB_0200ae88;
      *(ushort *)(&vdp_vram + uVar7) = uVar3;
    }
    else {
      (&vdp_vram)[uVar7] = 0;
      (&vdp_vram_odd_byte_base)[uVar7] = uVar2;
      uVar6 = uVar6 << 8;
    }
    if (vdp_sprite_attribute_table_base <= uVar7) {
      if (vdp_wide_display_mode == '\0') {
        iVar11 = 0x200;
      }
      else {
        iVar11 = 0x280;
      }
      if (uVar7 < iVar11 + vdp_sprite_attribute_table_base) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar7 < vdp_plane_a_name_table_base) || (vdp_plane_a_name_table_end <= uVar7)) {
      bVar14 = false;
    }
    else {
      (*write_ds_background_tilemap_word)(0,uVar7 - vdp_plane_a_name_table_base,uVar6);
      bVar14 = true;
    }
    if ((vdp_plane_b_name_table_base <= uVar7) && (uVar7 < vdp_plane_b_name_table_end)) {
      (*write_ds_background_tilemap_word)(1,uVar7 - vdp_plane_b_name_table_base,uVar6);
      bVar14 = true;
    }
    if ((vdp_window_name_table_base <= uVar7) && (uVar7 < vdp_window_name_table_end)) {
      (*write_ds_window_tilemap_word)(uVar7 - vdp_window_name_table_base,uVar6);
    }
    if (!bVar14) {
      update_cached_ds_pattern_from_vdp_word(uVar7,uVar6);
    }
  }
LAB_0200ae88:
  vdp_address = vdp_address + vdp_address_increment;
  return;
}


// 0x020329a0  m68k_shared_opcode_decode

int m68k_shared_opcode_decode_020329a0(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar8;
  
  if (unaff_r11 == 0x4afc) {
    iVar3 = 4;
  }
  else {
    uVar4 = unaff_r11 >> 0xc & 0xf;
    if (uVar4 == 0xf) {
      iVar3 = 0xb;
    }
    else {
      if (uVar4 != 10) {
        iVar7 = unaff_r7 + -0x40000;
        if (iVar7 != 0 && 0x3ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x020329dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
          return iVar3;
        }
        goto LAB_01003084;
      }
      iVar3 = 10;
    }
  }
  iVar7 = unaff_r7 + -0x220000;
  uVar4 = *(uint *)(unaff_r6 + 0x50);
  iVar8 = *(int *)(unaff_r6 + 0x54);
  if ((uVar4 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar4 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar4 | (ushort)iVar7 & 0x1f;
  uVar4 = (int)unaff_r10 + (-2 - iVar8) | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar4 >> 0x10);
  puVar6[2] = (ushort)uVar4;
  puVar6 = (ushort *)(*(int *)(unaff_r6 + 0x60) + iVar3 * 4);
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  if ((uVar1 & 0xc0) == 0) {
    uVar4 = 0xffc00000;
    unaff_r8 = *(int *)(unaff_r6 + 0x60);
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar4;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar4));
  if ((iVar3 == 9) && (*(char *)(unaff_r6 + 0xa2) != '\0')) {
    *(undefined1 *)(unaff_r6 + 0xa2) = 0;
  }
  if (iVar7 >> 0x10 != 0 && iVar7 >> 0x10 < 0 == SBORROW4(iVar3,9)) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
    return iVar3;
  }
LAB_01003084:
  *(int *)(unaff_r6 + 0x4c) = iVar7;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar7 >> 0x10;
}

