/* ARM9 clear complement and test — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x010039f8  m68k_tst_byte

void m68k_dispatch_010039f8(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_0100408c((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x01003a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x01003a1c  m68k_tst_word

void m68k_dispatch_01003a1c(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040c4((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x01003a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x01003a40  m68k_tst_long

void m68k_dispatch_01003a40(void)

{
  int unaff_r9;
  short *unaff_r10;
  
  FUN_010040fc((int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x01003a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x01003a64  m68k_tst_byte

void m68k_dispatch_01003a64(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_0100408c(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x01003a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x01003a90  m68k_tst_word

void m68k_dispatch_01003a90(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x01003ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x01003abc  m68k_tst_long

void m68k_dispatch_01003abc(void)

{
  int unaff_r9;
  undefined2 *unaff_r10;
  
  FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
                    /* WARNING: Could not recover jumptable at 0x01003ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x01003fac  m68k_tst_byte

void m68k_dispatch_01003fac(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x01003fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x01003fd8  m68k_tst_word

void m68k_dispatch_01003fd8(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x01004000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x01004004  m68k_tst_long

void m68k_dispatch_01004004(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  FUN_010040fc(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x0100402c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020245bc  m68k_clr_byte

void m68k_dispatch_020245bc(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined1 *)(unaff_r6 + (unaff_r11 & 7) * 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x020245d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x020245dc  m68k_clr_word

void m68k_dispatch_020245dc(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined2 *)(unaff_r6 + (unaff_r11 & 7) * 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x020245fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024600  m68k_clr_long

void m68k_dispatch_02024600(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined4 *)(unaff_r6 + (unaff_r11 & 7) * 4) = 0;
                    /* WARNING: Could not recover jumptable at 0x0202461c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02024620  m68k_clr_byte

void m68k_dispatch_02024620(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x02024644  m68k_clr_word

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

void m68k_dispatch_02024644(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_r6;
  uint uVar9;
  int unaff_r8;
  uint unaff_r11;
  bool bVar10;
  
  uVar1 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined2 *)(unaff_r8 + (uVar1 & 0xffff)) = 0;
    return;
  }
  if ((uVar1 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
    return;
  }
  if ((uVar1 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar3 = DAT_0b003630;
  uVar1 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar10 = (DAT_0b003638 & 1) == 0;
    uVar8 = DAT_0b003638 & 0xffff;
    if (bVar10) {
      puVar5 = &DAT_0209cbec + uVar8;
    }
    else {
      puVar5 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar9 = DAT_0b003630 & 0xffff;
    if (!bVar10) {
      (&DAT_0209cbec)[(int)puVar5] = 0;
    }
    uVar1 = uVar1 & 0xffff;
    if (bVar10) {
      (&DAT_0209cbec)[uVar8] = 0;
      puVar5[1] = 0;
    }
    if (!bVar10) {
      (&DAT_0209cbec)[uVar8] = 0;
    }
    uVar2 = uVar8 + uVar9 & 0xffff;
    uVar6 = uVar1;
    if (uVar1 != 0) {
      do {
        uVar6 = uVar6 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar2] = 0;
        uVar2 = uVar2 + uVar9 & 0xffff;
      } while (uVar6 != 0);
      uVar8 = DAT_0b003638;
      if (uVar1 == 0xffff) {
        DAT_0b003638 = uVar2;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar2;
    uVar8 = uVar8 & 0xfffe;
    if (uVar3 == 1) {
      uVar1 = uVar1 >> 1;
      uVar9 = 2;
    }
    do {
      if (uVar8 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar8 < DAT_023dcea4) || (DAT_023dcdaa <= uVar8)) {
          if ((uVar8 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar8)) {
            bVar10 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar8 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar8));
            bVar10 = true;
          }
          if ((DAT_023ddea4 <= uVar8) && (uVar8 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar8 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar8));
            bVar10 = true;
          }
          if ((DAT_023ddea8 <= uVar8) && (uVar8 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar8 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar8));
          }
          if (!bVar10) {
            FUN_020076d0(uVar8,*(undefined2 *)(&DAT_0209cbec + uVar8));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar7 = 0x200;
        }
        else {
          iVar7 = 0x280;
        }
        if (iVar7 + DAT_023ddeac <= uVar8) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar1 = uVar1 - 1 & 0xffff;
      if (uVar1 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar8 = uVar8 + uVar9 & 0xfffe;
    } while( true );
  }
  uVar1 = DAT_0b00363c & 0xf;
  if (uVar1 == 3) {
    uVar1 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar1] = 0;
    if ((uVar1 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar4 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar4 == 200) {
        bVar4 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar4] = &DAT_023dc8ca + (uint)(bVar4 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar1 + (uint)(bVar4 >> 5) * 0x40] = 0x8000;
    }
    uVar3 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar1] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar1 == uVar3) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar1 == 5) {
    uVar1 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar1) {
      DAT_0b003638 = uVar1;
      return;
    }
    uVar3 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar1;
    *(undefined2 *)((int)&DAT_0b00364c + uVar3) = 0;
  }
  else if (uVar1 == 1) {
    uVar1 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar1) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar1) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar1] = 0;
      (&DAT_0209cbed)[uVar1] = 0;
    }
    if (DAT_023ddeac <= uVar1) {
      if (DAT_023ddb05 == '\0') {
        iVar7 = 0x200;
      }
      else {
        iVar7 = 0x280;
      }
      if (uVar1 < iVar7 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar1 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar1)) {
      bVar10 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar1 - DAT_023ddea0,0);
      bVar10 = true;
    }
    if ((DAT_023ddea4 <= uVar1) && (uVar1 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar1 - DAT_023ddea4,0);
      bVar10 = true;
    }
    if ((DAT_023ddea8 <= uVar1) && (uVar1 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar1 - DAT_023ddea8,0);
    }
    if (!bVar10) {
      FUN_020076d0(uVar1,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x02024668  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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

void m68k_dispatch_02024668(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_r6;
  uint uVar10;
  int unaff_r8;
  uint unaff_r11;
  bool bVar11;
  
  uVar2 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_0b003638 = 0;
      DAT_0b00363c = 0;
      if (DAT_020b4bf2 != '\0') {
        return;
      }
      return;
    }
    FUN_0200aaf8(0);
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  FUN_0200ac7c(0);
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar4 = DAT_0b003630;
  uVar2 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar11 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar11) {
      puVar6 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar10 = DAT_0b003630 & 0xffff;
    if (!bVar11) {
      (&DAT_0209cbec)[(int)puVar6] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
    }
    uVar3 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar3] = 0;
        uVar3 = uVar3 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = DAT_0b003638;
      if (uVar2 == 0xffff) {
        DAT_0b003638 = uVar3;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar3;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar11) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar2 = DAT_0b00363c & 0xf;
  if (uVar2 == 3) {
    uVar2 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar2] = 0;
    if ((uVar2 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar2) {
      DAT_0b003638 = uVar2;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar2;
    *(undefined2 *)((int)&DAT_0b00364c + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar2) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar2] = 0;
      (&DAT_0209cbed)[uVar2] = 0;
    }
    if (DAT_023ddeac <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar2 < iVar8 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar2)) {
      bVar11 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar2 - DAT_023ddea0,0);
      bVar11 = true;
    }
    if ((DAT_023ddea4 <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar2 - DAT_023ddea4,0);
      bVar11 = true;
    }
    if ((DAT_023ddea8 <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar2 - DAT_023ddea8,0);
    }
    if (!bVar11) {
      FUN_020076d0(uVar2,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x0202468c  m68k_clr_byte

void m68k_dispatch_0202468c(void)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  uint unaff_r11;
  
  puVar2 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar2;
  if ((unaff_r11 & 7) == 7) {
    uVar3 = uVar1 + 2;
  }
  else {
    uVar3 = uVar1 + 1;
  }
  *puVar2 = uVar3;
  if ((uVar1 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
  return;
}


// 0x020246c4  m68k_clr_word

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

void m68k_dispatch_020246c4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_r6;
  uint uVar10;
  int unaff_r8;
  uint unaff_r11;
  bool bVar11;
  
  puVar4 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar4;
  *puVar4 = uVar1 + 2;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined2 *)(unaff_r8 + (uVar1 & 0xffff)) = 0;
    return;
  }
  if ((uVar1 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
    return;
  }
  if ((uVar1 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar3 = DAT_0b003630;
  uVar1 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar11 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar11) {
      puVar6 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar10 = DAT_0b003630 & 0xffff;
    if (!bVar11) {
      (&DAT_0209cbec)[(int)puVar6] = 0;
    }
    uVar1 = uVar1 & 0xffff;
    if (bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
    }
    uVar2 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar1;
    if (uVar1 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar2] = 0;
        uVar2 = uVar2 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = DAT_0b003638;
      if (uVar1 == 0xffff) {
        DAT_0b003638 = uVar2;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar2;
    uVar9 = uVar9 & 0xfffe;
    if (uVar3 == 1) {
      uVar1 = uVar1 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar11) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar1 = uVar1 - 1 & 0xffff;
      if (uVar1 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar1 = DAT_0b00363c & 0xf;
  if (uVar1 == 3) {
    uVar1 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar1] = 0;
    if ((uVar1 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar1 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar3 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar1] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar1 == uVar3) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar1 == 5) {
    uVar1 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar1) {
      DAT_0b003638 = uVar1;
      return;
    }
    uVar3 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar1;
    *(undefined2 *)((int)&DAT_0b00364c + uVar3) = 0;
  }
  else if (uVar1 == 1) {
    uVar1 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar1) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar1) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar1] = 0;
      (&DAT_0209cbed)[uVar1] = 0;
    }
    if (DAT_023ddeac <= uVar1) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar1 < iVar8 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar1 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar1)) {
      bVar11 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar1 - DAT_023ddea0,0);
      bVar11 = true;
    }
    if ((DAT_023ddea4 <= uVar1) && (uVar1 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar1 - DAT_023ddea4,0);
      bVar11 = true;
    }
    if ((DAT_023ddea8 <= uVar1) && (uVar1 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar1 - DAT_023ddea8,0);
    }
    if (!bVar11) {
      FUN_020076d0(uVar1,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x020246f4  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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

void m68k_dispatch_020246f4(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r6;
  uint uVar11;
  int unaff_r8;
  uint unaff_r11;
  bool bVar12;
  
  puVar5 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar5;
  *puVar5 = uVar2 + 4;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_0b003638 = 0;
      DAT_0b00363c = 0;
      if (DAT_020b4bf2 != '\0') {
        return;
      }
      return;
    }
    FUN_0200aaf8(0);
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  FUN_0200ac7c(0);
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar4 = DAT_0b003630;
  uVar2 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar12 = (DAT_0b003638 & 1) == 0;
    uVar10 = DAT_0b003638 & 0xffff;
    if (bVar12) {
      puVar7 = &DAT_0209cbec + uVar10;
    }
    else {
      puVar7 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar11 = DAT_0b003630 & 0xffff;
    if (!bVar12) {
      (&DAT_0209cbec)[(int)puVar7] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar12) {
      (&DAT_0209cbec)[uVar10] = 0;
      puVar7[1] = 0;
    }
    if (!bVar12) {
      (&DAT_0209cbec)[uVar10] = 0;
    }
    uVar3 = uVar10 + uVar11 & 0xffff;
    uVar8 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar3] = 0;
        uVar3 = uVar3 + uVar11 & 0xffff;
      } while (uVar8 != 0);
      uVar10 = DAT_0b003638;
      if (uVar2 == 0xffff) {
        DAT_0b003638 = uVar3;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar3;
    uVar10 = uVar10 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar11 = 2;
    }
    do {
      if (uVar10 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar10 < DAT_023dcea4) || (DAT_023dcdaa <= uVar10)) {
          if ((uVar10 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar10)) {
            bVar12 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar10 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar12 = true;
          }
          if ((DAT_023ddea4 <= uVar10) && (uVar10 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar10 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar12 = true;
          }
          if ((DAT_023ddea8 <= uVar10) && (uVar10 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar10 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
          if (!bVar12) {
            FUN_020076d0(uVar10,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        if (iVar9 + DAT_023ddeac <= uVar10) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar10 = uVar10 + uVar11 & 0xfffe;
    } while( true );
  }
  uVar2 = DAT_0b00363c & 0xf;
  if (uVar2 == 3) {
    uVar2 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar2] = 0;
    if ((uVar2 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar6 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar6 == 200) {
        bVar6 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar6] = &DAT_023dc8ca + (uint)(bVar6 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar6 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar2) {
      DAT_0b003638 = uVar2;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar2;
    *(undefined2 *)((int)&DAT_0b00364c + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar2) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar2] = 0;
      (&DAT_0209cbed)[uVar2] = 0;
    }
    if (DAT_023ddeac <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar9 = 0x200;
      }
      else {
        iVar9 = 0x280;
      }
      if (uVar2 < iVar9 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar2)) {
      bVar12 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar2 - DAT_023ddea0,0);
      bVar12 = true;
    }
    if ((DAT_023ddea4 <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar2 - DAT_023ddea4,0);
      bVar12 = true;
    }
    if ((DAT_023ddea8 <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar2 - DAT_023ddea8,0);
    }
    if (!bVar12) {
      FUN_020076d0(uVar2,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x02024724  m68k_clr_byte

void m68k_dispatch_02024724(void)

{
  uint uVar1;
  uint *puVar2;
  int unaff_r6;
  int unaff_r8;
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
  if ((uVar1 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
  return;
}


// 0x0202475c  m68k_clr_word

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

void m68k_dispatch_0202475c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_r6;
  uint uVar10;
  int unaff_r8;
  uint unaff_r11;
  bool bVar11;
  
  puVar4 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = *puVar4 - 2;
  *puVar4 = uVar1;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined2 *)(unaff_r8 + (uVar1 & 0xffff)) = 0;
    return;
  }
  if ((uVar1 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
    return;
  }
  if ((uVar1 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar3 = DAT_0b003630;
  uVar1 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar11 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar11) {
      puVar6 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar10 = DAT_0b003630 & 0xffff;
    if (!bVar11) {
      (&DAT_0209cbec)[(int)puVar6] = 0;
    }
    uVar1 = uVar1 & 0xffff;
    if (bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
    }
    uVar2 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar1;
    if (uVar1 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar2] = 0;
        uVar2 = uVar2 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = DAT_0b003638;
      if (uVar1 == 0xffff) {
        DAT_0b003638 = uVar2;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar2;
    uVar9 = uVar9 & 0xfffe;
    if (uVar3 == 1) {
      uVar1 = uVar1 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar11) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar1 = uVar1 - 1 & 0xffff;
      if (uVar1 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar1 = DAT_0b00363c & 0xf;
  if (uVar1 == 3) {
    uVar1 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar1] = 0;
    if ((uVar1 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar1 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar3 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar1] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar1 == uVar3) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar1 == 5) {
    uVar1 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar1) {
      DAT_0b003638 = uVar1;
      return;
    }
    uVar3 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar1;
    *(undefined2 *)((int)&DAT_0b00364c + uVar3) = 0;
  }
  else if (uVar1 == 1) {
    uVar1 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar1) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar1) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar1] = 0;
      (&DAT_0209cbed)[uVar1] = 0;
    }
    if (DAT_023ddeac <= uVar1) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar1 < iVar8 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar1 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar1)) {
      bVar11 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar1 - DAT_023ddea0,0);
      bVar11 = true;
    }
    if ((DAT_023ddea4 <= uVar1) && (uVar1 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar1 - DAT_023ddea4,0);
      bVar11 = true;
    }
    if ((DAT_023ddea8 <= uVar1) && (uVar1 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar1 - DAT_023ddea8,0);
    }
    if (!bVar11) {
      FUN_020076d0(uVar1,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x0202478c  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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

void m68k_dispatch_0202478c(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r6;
  uint uVar11;
  int unaff_r8;
  uint unaff_r11;
  bool bVar12;
  
  puVar5 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar2 = *puVar5 - 4;
  *puVar5 = uVar2;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_0b003638 = 0;
      DAT_0b00363c = 0;
      if (DAT_020b4bf2 != '\0') {
        return;
      }
      return;
    }
    FUN_0200aaf8(0);
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  FUN_0200ac7c(0);
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar4 = DAT_0b003630;
  uVar2 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar12 = (DAT_0b003638 & 1) == 0;
    uVar10 = DAT_0b003638 & 0xffff;
    if (bVar12) {
      puVar7 = &DAT_0209cbec + uVar10;
    }
    else {
      puVar7 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar11 = DAT_0b003630 & 0xffff;
    if (!bVar12) {
      (&DAT_0209cbec)[(int)puVar7] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar12) {
      (&DAT_0209cbec)[uVar10] = 0;
      puVar7[1] = 0;
    }
    if (!bVar12) {
      (&DAT_0209cbec)[uVar10] = 0;
    }
    uVar3 = uVar10 + uVar11 & 0xffff;
    uVar8 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar3] = 0;
        uVar3 = uVar3 + uVar11 & 0xffff;
      } while (uVar8 != 0);
      uVar10 = DAT_0b003638;
      if (uVar2 == 0xffff) {
        DAT_0b003638 = uVar3;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar3;
    uVar10 = uVar10 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar11 = 2;
    }
    do {
      if (uVar10 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar10 < DAT_023dcea4) || (DAT_023dcdaa <= uVar10)) {
          if ((uVar10 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar10)) {
            bVar12 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar10 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar12 = true;
          }
          if ((DAT_023ddea4 <= uVar10) && (uVar10 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar10 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar12 = true;
          }
          if ((DAT_023ddea8 <= uVar10) && (uVar10 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar10 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
          if (!bVar12) {
            FUN_020076d0(uVar10,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        if (iVar9 + DAT_023ddeac <= uVar10) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar10 = uVar10 + uVar11 & 0xfffe;
    } while( true );
  }
  uVar2 = DAT_0b00363c & 0xf;
  if (uVar2 == 3) {
    uVar2 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar2] = 0;
    if ((uVar2 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar6 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar6 == 200) {
        bVar6 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar6] = &DAT_023dc8ca + (uint)(bVar6 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar6 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar2) {
      DAT_0b003638 = uVar2;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar2;
    *(undefined2 *)((int)&DAT_0b00364c + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar2) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar2] = 0;
      (&DAT_0209cbed)[uVar2] = 0;
    }
    if (DAT_023ddeac <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar9 = 0x200;
      }
      else {
        iVar9 = 0x280;
      }
      if (uVar2 < iVar9 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar2)) {
      bVar12 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar2 - DAT_023ddea0,0);
      bVar12 = true;
    }
    if ((DAT_023ddea4 <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar2 - DAT_023ddea4,0);
      bVar12 = true;
    }
    if ((DAT_023ddea8 <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar2 - DAT_023ddea8,0);
    }
    if (!bVar12) {
      FUN_020076d0(uVar2,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x020247bc  m68k_clr_byte

void m68k_dispatch_020247bc(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x020247e8  m68k_clr_word

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

void m68k_dispatch_020247e8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int unaff_r6;
  uint uVar9;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar10;
  
  uVar1 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined2 *)(unaff_r8 + (uVar1 & 0xffff)) = 0;
    return;
  }
  if ((uVar1 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
    return;
  }
  if ((uVar1 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar3 = DAT_0b003630;
  uVar1 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar10 = (DAT_0b003638 & 1) == 0;
    uVar8 = DAT_0b003638 & 0xffff;
    if (bVar10) {
      puVar5 = &DAT_0209cbec + uVar8;
    }
    else {
      puVar5 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar9 = DAT_0b003630 & 0xffff;
    if (!bVar10) {
      (&DAT_0209cbec)[(int)puVar5] = 0;
    }
    uVar1 = uVar1 & 0xffff;
    if (bVar10) {
      (&DAT_0209cbec)[uVar8] = 0;
      puVar5[1] = 0;
    }
    if (!bVar10) {
      (&DAT_0209cbec)[uVar8] = 0;
    }
    uVar2 = uVar8 + uVar9 & 0xffff;
    uVar6 = uVar1;
    if (uVar1 != 0) {
      do {
        uVar6 = uVar6 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar2] = 0;
        uVar2 = uVar2 + uVar9 & 0xffff;
      } while (uVar6 != 0);
      uVar8 = DAT_0b003638;
      if (uVar1 == 0xffff) {
        DAT_0b003638 = uVar2;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar2;
    uVar8 = uVar8 & 0xfffe;
    if (uVar3 == 1) {
      uVar1 = uVar1 >> 1;
      uVar9 = 2;
    }
    do {
      if (uVar8 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar8 < DAT_023dcea4) || (DAT_023dcdaa <= uVar8)) {
          if ((uVar8 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar8)) {
            bVar10 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar8 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar8));
            bVar10 = true;
          }
          if ((DAT_023ddea4 <= uVar8) && (uVar8 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar8 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar8));
            bVar10 = true;
          }
          if ((DAT_023ddea8 <= uVar8) && (uVar8 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar8 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar8));
          }
          if (!bVar10) {
            FUN_020076d0(uVar8,*(undefined2 *)(&DAT_0209cbec + uVar8));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar7 = 0x200;
        }
        else {
          iVar7 = 0x280;
        }
        if (iVar7 + DAT_023ddeac <= uVar8) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar1 = uVar1 - 1 & 0xffff;
      if (uVar1 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar8 = uVar8 + uVar9 & 0xfffe;
    } while( true );
  }
  uVar1 = DAT_0b00363c & 0xf;
  if (uVar1 == 3) {
    uVar1 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar1] = 0;
    if ((uVar1 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar4 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar4 == 200) {
        bVar4 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar4] = &DAT_023dc8ca + (uint)(bVar4 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar1 + (uint)(bVar4 >> 5) * 0x40] = 0x8000;
    }
    uVar3 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar1] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar1 == uVar3) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar1 == 5) {
    uVar1 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar1) {
      DAT_0b003638 = uVar1;
      return;
    }
    uVar3 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar1;
    *(undefined2 *)((int)&DAT_0b00364c + uVar3) = 0;
  }
  else if (uVar1 == 1) {
    uVar1 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar1) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar1) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar1] = 0;
      (&DAT_0209cbed)[uVar1] = 0;
    }
    if (DAT_023ddeac <= uVar1) {
      if (DAT_023ddb05 == '\0') {
        iVar7 = 0x200;
      }
      else {
        iVar7 = 0x280;
      }
      if (uVar1 < iVar7 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar1 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar1)) {
      bVar10 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar1 - DAT_023ddea0,0);
      bVar10 = true;
    }
    if ((DAT_023ddea4 <= uVar1) && (uVar1 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar1 - DAT_023ddea4,0);
      bVar10 = true;
    }
    if ((DAT_023ddea8 <= uVar1) && (uVar1 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar1 - DAT_023ddea8,0);
    }
    if (!bVar10) {
      FUN_020076d0(uVar1,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x02024814  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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

void m68k_dispatch_02024814(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_r6;
  uint uVar10;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar11;
  
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_0b003638 = 0;
      DAT_0b00363c = 0;
      if (DAT_020b4bf2 != '\0') {
        return;
      }
      return;
    }
    FUN_0200aaf8(0);
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  FUN_0200ac7c(0);
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar4 = DAT_0b003630;
  uVar2 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar11 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar11) {
      puVar6 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar10 = DAT_0b003630 & 0xffff;
    if (!bVar11) {
      (&DAT_0209cbec)[(int)puVar6] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
    }
    uVar3 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar3] = 0;
        uVar3 = uVar3 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = DAT_0b003638;
      if (uVar2 == 0xffff) {
        DAT_0b003638 = uVar3;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar3;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar11) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar2 = DAT_0b00363c & 0xf;
  if (uVar2 == 3) {
    uVar2 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar2] = 0;
    if ((uVar2 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar2) {
      DAT_0b003638 = uVar2;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar2;
    *(undefined2 *)((int)&DAT_0b00364c + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar2) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar2] = 0;
      (&DAT_0209cbed)[uVar2] = 0;
    }
    if (DAT_023ddeac <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar2 < iVar8 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar2)) {
      bVar11 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar2 - DAT_023ddea0,0);
      bVar11 = true;
    }
    if ((DAT_023ddea4 <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar2 - DAT_023ddea4,0);
      bVar11 = true;
    }
    if ((DAT_023ddea8 <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar2 - DAT_023ddea8,0);
    }
    if (!bVar11) {
      FUN_020076d0(uVar2,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x02024840  m68k_clr_byte

void m68k_dispatch_02024840(void)

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
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar3;
  if ((uVar2 & 0xf00000) < 0xe00000) {
    (*(code *)(&DAT_0b000e1c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  *(undefined1 *)(unaff_r8 + ((uVar2 ^ 1) & 0xffff)) = 0;
  return;
}


// 0x02024890  m68k_clr_word

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

void m68k_dispatch_02024890(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int unaff_r6;
  uint uVar10;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar11;
  
  uVar1 = *unaff_r10;
  iVar8 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar8 = unaff_r6;
  }
  uVar2 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar8 = (int)*(short *)(iVar8 + uVar2);
  }
  else {
    iVar8 = *(int *)(iVar8 + uVar2);
  }
  uVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar8;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    *(undefined2 *)(unaff_r8 + (uVar2 & 0xffff)) = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar2 & 0xffffff) >> 0x10])(uVar2 & 0xffffff);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar4 = DAT_0b003630;
  uVar2 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar11 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar11) {
      puVar6 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar10 = DAT_0b003630 & 0xffff;
    if (!bVar11) {
      (&DAT_0209cbec)[(int)puVar6] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
    }
    uVar3 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar3] = 0;
        uVar3 = uVar3 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = DAT_0b003638;
      if (uVar2 == 0xffff) {
        DAT_0b003638 = uVar3;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar3;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar11) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar2 = DAT_0b00363c & 0xf;
  if (uVar2 == 3) {
    uVar2 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar2] = 0;
    if ((uVar2 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar2) {
      DAT_0b003638 = uVar2;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar2;
    *(undefined2 *)((int)&DAT_0b00364c + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar2) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar2] = 0;
      (&DAT_0209cbed)[uVar2] = 0;
    }
    if (DAT_023ddeac <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar2 < iVar8 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar2)) {
      bVar11 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar2 - DAT_023ddea0,0);
      bVar11 = true;
    }
    if ((DAT_023ddea4 <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar2 - DAT_023ddea4,0);
      bVar11 = true;
    }
    if ((DAT_023ddea8 <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar2 - DAT_023ddea8,0);
    }
    if (!bVar11) {
      FUN_020076d0(uVar2,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x020248e0  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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

void m68k_dispatch_020248e0(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r6;
  uint uVar11;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar12;
  
  uVar1 = *unaff_r10;
  iVar9 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar9 = unaff_r6;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar9 = (int)*(short *)(iVar9 + uVar3);
  }
  else {
    iVar9 = *(int *)(iVar9 + uVar3);
  }
  uVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar9;
  if (0xdfffff < (uVar3 & 0xf00000)) {
    puVar2 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    *puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  if ((uVar3 & 0xf00000) < 0xc00000) {
    uVar3 = uVar3 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3,0);
    (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3 + 2,0);
    return;
  }
  if ((uVar3 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_0b003638 = 0;
      DAT_0b00363c = 0;
      if (DAT_020b4bf2 != '\0') {
        return;
      }
      return;
    }
    FUN_0200aaf8(0);
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  FUN_0200ac7c(0);
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar5 = DAT_0b003630;
  uVar3 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar12 = (DAT_0b003638 & 1) == 0;
    uVar10 = DAT_0b003638 & 0xffff;
    if (bVar12) {
      puVar7 = &DAT_0209cbec + uVar10;
    }
    else {
      puVar7 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar11 = DAT_0b003630 & 0xffff;
    if (!bVar12) {
      (&DAT_0209cbec)[(int)puVar7] = 0;
    }
    uVar3 = uVar3 & 0xffff;
    if (bVar12) {
      (&DAT_0209cbec)[uVar10] = 0;
      puVar7[1] = 0;
    }
    if (!bVar12) {
      (&DAT_0209cbec)[uVar10] = 0;
    }
    uVar4 = uVar10 + uVar11 & 0xffff;
    uVar8 = uVar3;
    if (uVar3 != 0) {
      do {
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar4] = 0;
        uVar4 = uVar4 + uVar11 & 0xffff;
      } while (uVar8 != 0);
      uVar10 = DAT_0b003638;
      if (uVar3 == 0xffff) {
        DAT_0b003638 = uVar4;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar4;
    uVar10 = uVar10 & 0xfffe;
    if (uVar5 == 1) {
      uVar3 = uVar3 >> 1;
      uVar11 = 2;
    }
    do {
      if (uVar10 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar10 < DAT_023dcea4) || (DAT_023dcdaa <= uVar10)) {
          if ((uVar10 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar10)) {
            bVar12 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar10 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar12 = true;
          }
          if ((DAT_023ddea4 <= uVar10) && (uVar10 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar10 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar12 = true;
          }
          if ((DAT_023ddea8 <= uVar10) && (uVar10 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar10 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
          if (!bVar12) {
            FUN_020076d0(uVar10,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        if (iVar9 + DAT_023ddeac <= uVar10) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar3 = uVar3 - 1 & 0xffff;
      if (uVar3 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar10 = uVar10 + uVar11 & 0xfffe;
    } while( true );
  }
  uVar3 = DAT_0b00363c & 0xf;
  if (uVar3 == 3) {
    uVar3 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar3] = 0;
    if ((uVar3 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar6 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar6 == 200) {
        bVar6 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar6] = &DAT_023dc8ca + (uint)(bVar6 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar3 + (uint)(bVar6 >> 5) * 0x40] = 0x8000;
    }
    uVar5 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar3] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar3 == uVar5) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar3 == 5) {
    uVar3 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar3) {
      DAT_0b003638 = uVar3;
      return;
    }
    uVar5 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar3;
    *(undefined2 *)((int)&DAT_0b00364c + uVar5) = 0;
  }
  else if (uVar3 == 1) {
    uVar3 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar3) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar3) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar3] = 0;
      (&DAT_0209cbed)[uVar3] = 0;
    }
    if (DAT_023ddeac <= uVar3) {
      if (DAT_023ddb05 == '\0') {
        iVar9 = 0x200;
      }
      else {
        iVar9 = 0x280;
      }
      if (uVar3 < iVar9 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar3 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar3)) {
      bVar12 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar3 - DAT_023ddea0,0);
      bVar12 = true;
    }
    if ((DAT_023ddea4 <= uVar3) && (uVar3 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar3 - DAT_023ddea4,0);
      bVar12 = true;
    }
    if ((DAT_023ddea8 <= uVar3) && (uVar3 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar3 - DAT_023ddea8,0);
    }
    if (!bVar12) {
      FUN_020076d0(uVar3,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x02024930  m68k_clr_byte

void m68k_dispatch_02024930(void)

{
  uint uVar1;
  int unaff_r8;
  short *unaff_r10;
  
  uVar1 = (uint)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
  return;
}


// 0x0202494c  m68k_clr_word

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

void m68k_dispatch_0202494c(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r8;
  ushort *unaff_r10;
  bool bVar10;
  
  uVar1 = (uint)(short)*unaff_r10;
  if (0xdfffff < (uVar1 & 0xf00000)) {
    *(undefined2 *)(unaff_r8 + (uint)*unaff_r10) = 0;
    return;
  }
  if ((uVar1 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar1 & 0xffffff) >> 0x10])(uVar1 & 0xffffff);
    return;
  }
  if ((uVar1 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar3 = DAT_0b003630;
  uVar1 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar10 = (DAT_0b003638 & 1) == 0;
    uVar8 = DAT_0b003638 & 0xffff;
    if (bVar10) {
      puVar5 = &DAT_0209cbec + uVar8;
    }
    else {
      puVar5 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar9 = DAT_0b003630 & 0xffff;
    if (!bVar10) {
      (&DAT_0209cbec)[(int)puVar5] = 0;
    }
    uVar1 = uVar1 & 0xffff;
    if (bVar10) {
      (&DAT_0209cbec)[uVar8] = 0;
      puVar5[1] = 0;
    }
    if (!bVar10) {
      (&DAT_0209cbec)[uVar8] = 0;
    }
    uVar2 = uVar8 + uVar9 & 0xffff;
    uVar6 = uVar1;
    if (uVar1 != 0) {
      do {
        uVar6 = uVar6 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar2] = 0;
        uVar2 = uVar2 + uVar9 & 0xffff;
      } while (uVar6 != 0);
      uVar8 = DAT_0b003638;
      if (uVar1 == 0xffff) {
        DAT_0b003638 = uVar2;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar2;
    uVar8 = uVar8 & 0xfffe;
    if (uVar3 == 1) {
      uVar1 = uVar1 >> 1;
      uVar9 = 2;
    }
    do {
      if (uVar8 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar8 < DAT_023dcea4) || (DAT_023dcdaa <= uVar8)) {
          if ((uVar8 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar8)) {
            bVar10 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar8 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar8));
            bVar10 = true;
          }
          if ((DAT_023ddea4 <= uVar8) && (uVar8 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar8 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar8));
            bVar10 = true;
          }
          if ((DAT_023ddea8 <= uVar8) && (uVar8 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar8 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar8));
          }
          if (!bVar10) {
            FUN_020076d0(uVar8,*(undefined2 *)(&DAT_0209cbec + uVar8));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar7 = 0x200;
        }
        else {
          iVar7 = 0x280;
        }
        if (iVar7 + DAT_023ddeac <= uVar8) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar1 = uVar1 - 1 & 0xffff;
      if (uVar1 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar8 = uVar8 + uVar9 & 0xfffe;
    } while( true );
  }
  uVar1 = DAT_0b00363c & 0xf;
  if (uVar1 == 3) {
    uVar1 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar1] = 0;
    if ((uVar1 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar4 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar4 == 200) {
        bVar4 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar4] = &DAT_023dc8ca + (uint)(bVar4 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar1 + (uint)(bVar4 >> 5) * 0x40] = 0x8000;
    }
    uVar3 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar1] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar1 == uVar3) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar1 == 5) {
    uVar1 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar1) {
      DAT_0b003638 = uVar1;
      return;
    }
    uVar3 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar1;
    *(undefined2 *)((int)&DAT_0b00364c + uVar3) = 0;
  }
  else if (uVar1 == 1) {
    uVar1 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar1) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar1) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar1] = 0;
      (&DAT_0209cbed)[uVar1] = 0;
    }
    if (DAT_023ddeac <= uVar1) {
      if (DAT_023ddb05 == '\0') {
        iVar7 = 0x200;
      }
      else {
        iVar7 = 0x280;
      }
      if (uVar1 < iVar7 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar1 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar1)) {
      bVar10 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar1 - DAT_023ddea0,0);
      bVar10 = true;
    }
    if ((DAT_023ddea4 <= uVar1) && (uVar1 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar1 - DAT_023ddea4,0);
      bVar10 = true;
    }
    if ((DAT_023ddea8 <= uVar1) && (uVar1 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar1 - DAT_023ddea8,0);
    }
    if (!bVar10) {
      FUN_020076d0(uVar1,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x02024968  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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

void m68k_dispatch_02024968(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r8;
  ushort *unaff_r10;
  bool bVar11;
  
  uVar2 = (uint)(short)*unaff_r10;
  if (0xdfffff < (uVar2 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uint)*unaff_r10);
    *puVar1 = 0;
    puVar1[1] = 0;
    return;
  }
  if ((uVar2 & 0xf00000) < 0xc00000) {
    uVar2 = uVar2 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2,0);
    (*(code *)(&DAT_0b00121c)[uVar2 >> 0x10])(uVar2 + 2,0);
    return;
  }
  if ((uVar2 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_0b003638 = 0;
      DAT_0b00363c = 0;
      if (DAT_020b4bf2 != '\0') {
        return;
      }
      return;
    }
    FUN_0200aaf8(0);
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  FUN_0200ac7c(0);
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar4 = DAT_0b003630;
  uVar2 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar11 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar11) {
      puVar6 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar10 = DAT_0b003630 & 0xffff;
    if (!bVar11) {
      (&DAT_0209cbec)[(int)puVar6] = 0;
    }
    uVar2 = uVar2 & 0xffff;
    if (bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
    }
    uVar3 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar2;
    if (uVar2 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar3] = 0;
        uVar3 = uVar3 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = DAT_0b003638;
      if (uVar2 == 0xffff) {
        DAT_0b003638 = uVar3;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar3;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar2 = uVar2 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar11) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar2 = uVar2 - 1 & 0xffff;
      if (uVar2 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar2 = DAT_0b00363c & 0xf;
  if (uVar2 == 3) {
    uVar2 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar2] = 0;
    if ((uVar2 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar2 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar2] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar2 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar2 == 5) {
    uVar2 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar2) {
      DAT_0b003638 = uVar2;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar2;
    *(undefined2 *)((int)&DAT_0b00364c + uVar4) = 0;
  }
  else if (uVar2 == 1) {
    uVar2 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar2) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar2) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar2] = 0;
      (&DAT_0209cbed)[uVar2] = 0;
    }
    if (DAT_023ddeac <= uVar2) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar2 < iVar8 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar2 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar2)) {
      bVar11 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar2 - DAT_023ddea0,0);
      bVar11 = true;
    }
    if ((DAT_023ddea4 <= uVar2) && (uVar2 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar2 - DAT_023ddea4,0);
      bVar11 = true;
    }
    if ((DAT_023ddea8 <= uVar2) && (uVar2 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar2 - DAT_023ddea8,0);
    }
    if (!bVar11) {
      FUN_020076d0(uVar2,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x02024984  m68k_clr_byte

void m68k_dispatch_02024984(void)

{
  uint uVar1;
  int unaff_r8;
  ushort *unaff_r10;
  
  uVar1 = CONCAT22(*unaff_r10,unaff_r10[1]);
  if (0xdfffff < (*unaff_r10 & 0xf0) * 0x10000) {
    *(undefined1 *)(unaff_r8 + ((uVar1 ^ 1) & 0xffff)) = 0;
    return;
  }
  uVar1 = uVar1 & 0xffffff;
  (*(code *)(&DAT_0b000e1c)[uVar1 >> 0x10])(uVar1);
  return;
}


// 0x020249a8  m68k_clr_word

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

void m68k_dispatch_020249a8(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r8;
  ushort *unaff_r10;
  bool bVar11;
  
  uVar1 = unaff_r10[1];
  uVar3 = (*unaff_r10 & 0xf0) * 0x10000;
  if (0xdfffff < uVar3) {
    *(undefined2 *)(unaff_r8 + (uint)uVar1) = 0;
    return;
  }
  if (uVar3 < 0xc00000) {
    uVar3 = CONCAT22(*unaff_r10,uVar1) & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3);
    return;
  }
  if ((uVar1 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar4 = DAT_0b003630;
  uVar3 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar11 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar11) {
      puVar6 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar10 = DAT_0b003630 & 0xffff;
    if (!bVar11) {
      (&DAT_0209cbec)[(int)puVar6] = 0;
    }
    uVar3 = uVar3 & 0xffff;
    if (bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
    }
    uVar2 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar3;
    if (uVar3 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar2] = 0;
        uVar2 = uVar2 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = DAT_0b003638;
      if (uVar3 == 0xffff) {
        DAT_0b003638 = uVar2;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar2;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar3 = uVar3 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar11) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar3 = uVar3 - 1 & 0xffff;
      if (uVar3 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar3 = DAT_0b00363c & 0xf;
  if (uVar3 == 3) {
    uVar3 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar3] = 0;
    if ((uVar3 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar3 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar3] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar3 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar3 == 5) {
    uVar3 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar3) {
      DAT_0b003638 = uVar3;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar3;
    *(undefined2 *)((int)&DAT_0b00364c + uVar4) = 0;
  }
  else if (uVar3 == 1) {
    uVar3 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar3) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar3) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar3] = 0;
      (&DAT_0209cbed)[uVar3] = 0;
    }
    if (DAT_023ddeac <= uVar3) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar3 < iVar8 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar3 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar3)) {
      bVar11 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar3 - DAT_023ddea0,0);
      bVar11 = true;
    }
    if ((DAT_023ddea4 <= uVar3) && (uVar3 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar3 - DAT_023ddea4,0);
      bVar11 = true;
    }
    if ((DAT_023ddea8 <= uVar3) && (uVar3 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar3 - DAT_023ddea8,0);
    }
    if (!bVar11) {
      FUN_020076d0(uVar3,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x020249cc  m68k_clr_long

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200ab70) */
/* WARNING: Removing unreachable block (ram,0x0200ac50) */
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

void m68k_dispatch_020249cc(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r8;
  ushort *unaff_r10;
  bool bVar11;
  
  uVar1 = unaff_r10[1];
  uVar3 = (*unaff_r10 & 0xf0) * 0x10000;
  if (0xdfffff < uVar3) {
    *(undefined2 *)(unaff_r8 + (uint)uVar1) = 0;
    ((undefined2 *)(unaff_r8 + (uint)uVar1))[1] = 0;
    return;
  }
  if (uVar3 < 0xc00000) {
    uVar3 = CONCAT22(*unaff_r10,uVar1) & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3,0);
    (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3 + 2,0);
    return;
  }
  if ((uVar1 & 0x1c) != 0) {
    if (DAT_020b4bf5 == '\0') {
      DAT_0b003638 = 0;
      DAT_0b00363c = 0;
      if (DAT_020b4bf2 != '\0') {
        return;
      }
      return;
    }
    FUN_0200aaf8(0);
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000;
      return;
    }
    DAT_020b4bf5 = 0;
    DAT_0b003638 = DAT_0b003638 & 0x3fff;
    DAT_0b00363c = DAT_0b00363c & 3;
    if (DAT_020b4bf2 != '\0') {
      return;
    }
    return;
  }
  FUN_0200ac7c(0);
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar4 = DAT_0b003630;
  uVar3 = DAT_020b4c00;
  if (DAT_020b4bf3 != '\0') {
    bVar11 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar11) {
      puVar6 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar6 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar10 = DAT_0b003630 & 0xffff;
    if (!bVar11) {
      (&DAT_0209cbec)[(int)puVar6] = 0;
    }
    uVar3 = uVar3 & 0xffff;
    if (bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
      puVar6[1] = 0;
    }
    if (!bVar11) {
      (&DAT_0209cbec)[uVar9] = 0;
    }
    uVar2 = uVar9 + uVar10 & 0xffff;
    uVar7 = uVar3;
    if (uVar3 != 0) {
      do {
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar2] = 0;
        uVar2 = uVar2 + uVar10 & 0xffff;
      } while (uVar7 != 0);
      uVar9 = DAT_0b003638;
      if (uVar3 == 0xffff) {
        DAT_0b003638 = uVar2;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar2;
    uVar9 = uVar9 & 0xfffe;
    if (uVar4 == 1) {
      uVar3 = uVar3 >> 1;
      uVar10 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar11 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar11 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar11) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar8 = 0x200;
        }
        else {
          iVar8 = 0x280;
        }
        if (iVar8 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar3 = uVar3 - 1 & 0xffff;
      if (uVar3 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar10 & 0xfffe;
    } while( true );
  }
  uVar3 = DAT_0b00363c & 0xf;
  if (uVar3 == 3) {
    uVar3 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar3] = 0;
    if ((uVar3 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar5 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar5 == 200) {
        bVar5 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar5] = &DAT_023dc8ca + (uint)(bVar5 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar3 + (uint)(bVar5 >> 5) * 0x40] = 0x8000;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar3] = 0x8000;
    DAT_0208f354 = 1;
    if (uVar3 == uVar4) {
      _DAT_05000200 = 0x8000;
    }
  }
  else if (uVar3 == 5) {
    uVar3 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar3) {
      DAT_0b003638 = uVar3;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar3;
    *(undefined2 *)((int)&DAT_0b00364c + uVar4) = 0;
  }
  else if (uVar3 == 1) {
    uVar3 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(short *)(&DAT_0209cbec + uVar3) == 0) goto LAB_0200ae88;
      *(undefined2 *)(&DAT_0209cbec + uVar3) = 0;
    }
    else {
      (&DAT_0209cbec)[uVar3] = 0;
      (&DAT_0209cbed)[uVar3] = 0;
    }
    if (DAT_023ddeac <= uVar3) {
      if (DAT_023ddb05 == '\0') {
        iVar8 = 0x200;
      }
      else {
        iVar8 = 0x280;
      }
      if (uVar3 < iVar8 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar3 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar3)) {
      bVar11 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar3 - DAT_023ddea0,0);
      bVar11 = true;
    }
    if ((DAT_023ddea4 <= uVar3) && (uVar3 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar3 - DAT_023ddea4,0);
      bVar11 = true;
    }
    if ((DAT_023ddea8 <= uVar3) && (uVar3 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar3 - DAT_023ddea8,0);
    }
    if (!bVar11) {
      FUN_020076d0(uVar3,0);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x0202a248  m68k_not_byte

void m68k_dispatch_0202a248(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(byte *)(unaff_r6 + (unaff_r11 & 7) * 4) = ~*(byte *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0202a270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a274  m68k_not_word

void m68k_dispatch_0202a274(void)

{
  int iVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar1 = (unaff_r11 & 7) * 4;
  *(ushort *)(unaff_r6 + iVar1) = ~*(ushort *)(unaff_r6 + iVar1);
                    /* WARNING: Could not recover jumptable at 0x0202a2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a2a4  m68k_not_long

void m68k_dispatch_0202a2a4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) = ~*(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0202a2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a2cc  m68k_not_byte

void m68k_dispatch_0202a2cc(void)

{
  byte *pbVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  pbVar1 = (byte *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) ^ 1);
  *pbVar1 = ~*pbVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a30c  m68k_not_word

void m68k_dispatch_0202a30c(void)

{
  ushort *puVar1;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  puVar1 = (ushort *)(unaff_r8 + (uint)*(ushort *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *puVar1 = ~*puVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a348  m68k_not_long

void m68k_dispatch_0202a348(void)

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
  *puVar2 = (short)(~CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)~CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a390  m68k_not_byte

void m68k_dispatch_0202a390(void)

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
  *pbVar4 = ~*pbVar4;
                    /* WARNING: Could not recover jumptable at 0x0202a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a3e4  m68k_not_word

void m68k_dispatch_0202a3e4(void)

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
  *puVar3 = ~*puVar3;
                    /* WARNING: Could not recover jumptable at 0x0202a428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a42c  m68k_not_long

void m68k_dispatch_0202a42c(void)

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
  *puVar4 = (short)(~CONCAT22(uVar1,puVar4[1]) >> 0x10);
  puVar4[1] = (short)~CONCAT22(uVar1,puVar4[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a480  m68k_not_byte

void m68k_dispatch_0202a480(void)

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
  *pbVar3 = ~*pbVar3;
                    /* WARNING: Could not recover jumptable at 0x0202a4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a4d4  m68k_not_word

void m68k_dispatch_0202a4d4(void)

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
  *puVar3 = ~*puVar3;
                    /* WARNING: Could not recover jumptable at 0x0202a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a51c  m68k_not_long

void m68k_dispatch_0202a51c(void)

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
  *puVar4 = (short)(~CONCAT22(uVar1,puVar4[1]) >> 0x10);
  puVar4[1] = (short)~CONCAT22(uVar1,puVar4[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a570  m68k_not_byte

void m68k_dispatch_0202a570(void)

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
  *pbVar1 = ~*pbVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202a5b8  m68k_not_word

void m68k_dispatch_0202a5b8(void)

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
  *puVar1 = ~*puVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202a5fc  m68k_not_long

void m68k_dispatch_0202a5fc(void)

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
  *puVar2 = (short)(~CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)~CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202a64c  m68k_not_byte

void m68k_dispatch_0202a64c(void)

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
  *pbVar4 = ~*pbVar4;
                    /* WARNING: Could not recover jumptable at 0x0202a6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a6b8  m68k_not_word

void m68k_dispatch_0202a6b8(void)

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
  *puVar4 = ~*puVar4;
                    /* WARNING: Could not recover jumptable at 0x0202a71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a720  m68k_not_long

void m68k_dispatch_0202a720(void)

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
  *puVar5 = (short)(~CONCAT22(uVar3,puVar5[1]) >> 0x10);
  puVar5[1] = (short)~CONCAT22(uVar3,puVar5[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a794  m68k_not_byte

void m68k_dispatch_0202a794(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  pbVar1 = (byte *)((uint)*unaff_r10 + unaff_r8 ^ 1);
  *pbVar1 = ~*pbVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a7c8  m68k_not_word

void m68k_dispatch_0202a7c8(void)

{
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  *(ushort *)((uint)*unaff_r10 + unaff_r8) = ~*(ushort *)((uint)*unaff_r10 + unaff_r8);
                    /* WARNING: Could not recover jumptable at 0x0202a7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a7f8  m68k_not_long

void m68k_dispatch_0202a7f8(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  puVar2 = (undefined2 *)((uint)*unaff_r10 + unaff_r8);
  uVar1 = *puVar2;
  *puVar2 = (short)(~CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)~CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202a834  m68k_not_byte

void m68k_dispatch_0202a834(void)

{
  byte *pbVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  pbVar1 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  *pbVar1 = ~*pbVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202a86c  m68k_not_word

void m68k_dispatch_0202a86c(void)

{
  ushort *puVar1;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar1 = (ushort *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  *puVar1 = ~*puVar1;
                    /* WARNING: Could not recover jumptable at 0x0202a89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202a8a0  m68k_not_long

void m68k_dispatch_0202a8a0(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  puVar2 = (undefined2 *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8);
  uVar1 = *puVar2;
  *puVar2 = (short)(~CONCAT22(uVar1,puVar2[1]) >> 0x10);
  puVar2[1] = (short)~CONCAT22(uVar1,puVar2[1]);
                    /* WARNING: Could not recover jumptable at 0x0202a8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}


// 0x0202a8e0  m68k_tst_byte

void m68k_dispatch_0202a8e0(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x0202a900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a904  m68k_tst_word

void m68k_dispatch_0202a904(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x0202a928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a92c  m68k_tst_long

void m68k_dispatch_0202a92c(void)

{
  int unaff_r9;
  ushort *unaff_r10;
  
                    /* WARNING: Could not recover jumptable at 0x0202a94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a950  m68k_tst_byte

void m68k_dispatch_0202a950(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202a98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a990  m68k_tst_word

void m68k_dispatch_0202a990(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 2;
  FUN_010040c4();
                    /* WARNING: Could not recover jumptable at 0x0202a9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202a9c8  m68k_tst_long

void m68k_dispatch_0202a9c8(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + 4;
  FUN_010040fc();
                    /* WARNING: Could not recover jumptable at 0x0202a9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202aa00  m68k_tst_byte

void m68k_dispatch_0202aa00(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202aa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202aa40  m68k_tst_word

void m68k_dispatch_0202aa40(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -2;
  FUN_010040c4();
                    /* WARNING: Could not recover jumptable at 0x0202aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202aa78  m68k_tst_long

void m68k_dispatch_0202aa78(void)

{
  int *piVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar1 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar1 = *piVar1 + -4;
  FUN_010040fc();
                    /* WARNING: Could not recover jumptable at 0x0202aaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202aab0  m68k_tst_byte

void m68k_dispatch_0202aab0(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_0100408c(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202aae4  m68k_tst_word

void m68k_dispatch_0202aae4(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202ab14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202ab18  m68k_tst_long

void m68k_dispatch_0202ab18(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
                    /* WARNING: Could not recover jumptable at 0x0202ab48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202ab4c  m68k_tst_byte

void m68k_dispatch_0202ab4c(void)

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
                    /* WARNING: Could not recover jumptable at 0x0202aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202aba4  m68k_tst_word

void m68k_dispatch_0202aba4(void)

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
  FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x0202abf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202abfc  m68k_tst_long

void m68k_dispatch_0202abfc(void)

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
  FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3);
                    /* WARNING: Could not recover jumptable at 0x0202ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}

