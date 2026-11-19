// rea decompile_all
// name: m68k_dispatch_020249cc
// address: 0x20249cc
// body: available
// range: 0x20249cc-0x20249ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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

