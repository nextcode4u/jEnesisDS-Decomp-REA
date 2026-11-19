// rea decompile_all
// name: m68k_dispatch_0202df84
// address: 0x202df84
// body: available
// range: 0x202df84-0x202dfb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0202df84(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar11;
  undefined1 *puVar12;
  int iVar13;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r11;
  bool bVar14;
  
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  uVar4 = unaff_r7 & 0x1f;
  uVar8 = uVar7 & 0xa700;
  uVar9 = uVar8 | uVar4;
  puVar10 = (uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar5 = *puVar10 - 2;
  *puVar10 = uVar5;
  uVar1 = (ushort)uVar9;
  if (0xdfffff < (uVar5 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar5 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar5 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  bVar11 = (byte)uVar4;
  if ((uVar5 & 0x1c) != 0) {
    if (DAT_020b4bf5 != '\0') {
      DAT_020b4bf5 = 0;
      DAT_0b003638 = DAT_0b003638 & 0x3fff | (unaff_r7 & 3) << 0xe;
      DAT_0b00363c = DAT_0b00363c & 3 | (unaff_r7 & 0x10) >> 2;
      if (DAT_020b4bf2 == '\0') {
        return;
      }
      return;
    }
    uVar9 = uVar8 >> 8 & 0x1f;
    if ((uVar7 & 0x8000) == 0x8000) {
      DAT_0b00363c = 0;
      iVar13 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar13 = 0;
      }
      if (uVar9 < 0xc) {
        iVar13 = 0;
      }
      (&DAT_020b4c18)[uVar9] = bVar11;
      if (iVar13 != 0) {
        return;
      }
      switch(uVar9) {
      case 0:
        DAT_0b003644 = (char)(uVar4 >> 4);
        DAT_020b4bf1 = ((byte)(uVar4 >> 1) ^ 1) & 1;
        return;
      case 1:
        DAT_020b4c06 = bVar11 & 4;
        DAT_0b00362f = 0;
        uVar9 = uVar4 >> 3 & 1;
        DAT_0b00362c = 0;
        DAT_020b4bf2 = (char)(uVar4 >> 4);
        DAT_023ddb06 = (char)uVar9;
        if (uVar9 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        break;
      case 2:
        DAT_023ddea0 = (unaff_r7 & 0x18) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (unaff_r7 & 0x18) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = DAT_023ddea0;
        DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
        return;
      case 3:
        DAT_023ddea8 = (unaff_r7 & 0x1e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar13 = 0x800;
        }
        else {
          iVar13 = 0x1000;
        }
        DAT_023dc8bc = iVar13 + DAT_023ddea8;
        return;
      case 4:
        DAT_023ddea4 = (unaff_r7 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (unaff_r7 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = DAT_023ddea4;
        DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
        return;
      case 5:
        DAT_0209cbe0 = DAT_023ddeac;
        DAT_023dcdac = &DAT_0209cbec + uVar4 * 0x200;
        DAT_023ddeac = uVar4 * 0x200;
        return;
      default:
        return;
      case 7:
        DAT_0b003640 = uVar4;
        DAT_020b4bf7 = bVar11;
        return;
      }
      return;
    }
    DAT_020b4bf5 = 1;
    DAT_0b00363c = DAT_0b00363c & 0x3c | uVar8 >> 0xe;
    DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar7 & 0x2700 | uVar4;
    return;
  }
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar3 = DAT_0b003630;
  uVar5 = DAT_020b4c00;
  uVar2 = (undefined1)(uVar8 >> 8);
  if (DAT_020b4bf3 != '\0') {
    bVar14 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar14) {
      puVar12 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar12 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar7 = DAT_0b003630 & 0xffff;
    if (!bVar14) {
      (&DAT_0209cbec)[(int)puVar12] = bVar11;
    }
    uVar5 = uVar5 & 0xffff;
    if (bVar14) {
      (&DAT_0209cbec)[uVar9] = uVar2;
      puVar12[1] = bVar11;
    }
    if (!bVar14) {
      (&DAT_0209cbec)[uVar9] = uVar2;
    }
    uVar6 = uVar9 + uVar7 & 0xffff;
    uVar8 = uVar5;
    if (uVar5 != 0) {
      do {
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar6] = bVar11;
        uVar6 = uVar6 + uVar7 & 0xffff;
      } while (uVar8 != 0);
      uVar9 = DAT_0b003638;
      if (uVar5 == 0xffff && uVar4 == 0) {
        DAT_0b003638 = uVar6;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar6;
    uVar9 = uVar9 & 0xfffe;
    if (uVar3 == 1) {
      uVar5 = uVar5 >> 1;
      uVar7 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar14 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar14 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar14 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar14) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar13 = 0x200;
        }
        else {
          iVar13 = 0x280;
        }
        if (iVar13 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar5 = uVar5 - 1 & 0xffff;
      if (uVar5 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar7 & 0xfffe;
    } while( true );
  }
  uVar5 = DAT_0b00363c & 0xf;
  if (uVar5 == 3) {
    uVar9 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar9] = uVar1 & 0xeee;
    uVar1 = (ushort)((uVar7 & 0x600) << 3) | 0x8000 | (ushort)((unaff_r7 & 0xe) << 1);
    if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar11 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar11 == 200) {
        bVar11 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar11] = &DAT_023dc8ca + (uint)(bVar11 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar9 + (uint)(bVar11 >> 5) * 0x40] = uVar1;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar9] = uVar1;
    DAT_0208f354 = 1;
    if (uVar9 == uVar4) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar5 == 5) {
    uVar9 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar9) {
      DAT_0b003638 = uVar9;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar9;
    *(ushort *)((int)&DAT_0b00364c + uVar4) = uVar1;
  }
  else if (uVar5 == 1) {
    uVar5 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(ushort *)(&DAT_0209cbec + uVar5) == uVar9) goto LAB_0200ae88;
      *(ushort *)(&DAT_0209cbec + uVar5) = uVar1;
    }
    else {
      (&DAT_0209cbec)[uVar5] = uVar2;
      (&DAT_0209cbed)[uVar5] = bVar11;
      uVar9 = uVar8 >> 8 | uVar4 << 8;
    }
    if (DAT_023ddeac <= uVar5) {
      if (DAT_023ddb05 == '\0') {
        iVar13 = 0x200;
      }
      else {
        iVar13 = 0x280;
      }
      if (uVar5 < iVar13 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar5 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar5)) {
      bVar14 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar5 - DAT_023ddea0,uVar9);
      bVar14 = true;
    }
    if ((DAT_023ddea4 <= uVar5) && (uVar5 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar5 - DAT_023ddea4,uVar9);
      bVar14 = true;
    }
    if ((DAT_023ddea8 <= uVar5) && (uVar5 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar5 - DAT_023ddea8,uVar9);
    }
    if (!bVar14) {
      FUN_020076d0(uVar5,uVar9);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}

