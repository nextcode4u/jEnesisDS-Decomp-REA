// Analysis annotation
// Role — write display palette
// Basis — pseudocode clue
// Pseudocode writes 0x05000200 (display palette).

// rea decompile_all
// name: FUN_0200ac7c
// address: 0x200ac7c
// body: available
// range: 0x200ac7c-0x200b1d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200ac7c(uint param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 uVar3;
  
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar6 = DAT_0b003630;
  uVar5 = DAT_020b4c00;
  uVar2 = (undefined1)param_1;
  uVar3 = (undefined1)(param_1 >> 8);
  if (DAT_020b4bf3 != '\0') {
    bVar13 = (DAT_0b003638 & 1) == 0;
    uVar11 = DAT_0b003638 & 0xffff;
    if (bVar13) {
      puVar8 = &DAT_0209cbec + uVar11;
    }
    else {
      puVar8 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar12 = DAT_0b003630 & 0xffff;
    if (!bVar13) {
      (&DAT_0209cbec)[(int)puVar8] = uVar2;
    }
    uVar5 = uVar5 & 0xffff;
    if (bVar13) {
      (&DAT_0209cbec)[uVar11] = uVar3;
      puVar8[1] = uVar2;
    }
    if (!bVar13) {
      (&DAT_0209cbec)[uVar11] = uVar3;
    }
    uVar4 = uVar11 + uVar12 & 0xffff;
    uVar9 = uVar5;
    if (uVar5 != 0) {
      do {
        uVar9 = uVar9 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar4] = uVar2;
        uVar4 = uVar4 + uVar12 & 0xffff;
      } while (uVar9 != 0);
      uVar11 = DAT_0b003638;
      if (uVar5 == 0xffff && (param_1 & 0xff) == 0) {
        DAT_0b003638 = uVar4;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar4;
    uVar11 = uVar11 & 0xfffe;
    if (uVar6 == 1) {
      uVar5 = uVar5 >> 1;
      uVar12 = 2;
    }
    do {
      if (uVar11 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar11 < DAT_023dcea4) || (DAT_023dcdaa <= uVar11)) {
          if ((uVar11 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar11)) {
            bVar13 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar11 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar11));
            bVar13 = true;
          }
          if ((DAT_023ddea4 <= uVar11) && (uVar11 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar11 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar11));
            bVar13 = true;
          }
          if ((DAT_023ddea8 <= uVar11) && (uVar11 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar11 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar11));
          }
          if (!bVar13) {
            FUN_020076d0(uVar11,*(undefined2 *)(&DAT_0209cbec + uVar11));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + DAT_023ddeac <= uVar11) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar5 = uVar5 - 1 & 0xffff;
      if (uVar5 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar11 = uVar11 + uVar12 & 0xfffe;
    } while( true );
  }
  uVar5 = DAT_0b00363c & 0xf;
  uVar1 = (ushort)param_1;
  if (uVar5 == 3) {
    uVar5 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar5] = uVar1 & 0xeee;
    uVar1 = (ushort)((param_1 & 0xe0) << 2) | (ushort)((param_1 & 0xe00) << 3) | 0x8000 |
            (ushort)((param_1 & 0xe) << 1);
    if ((uVar5 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar7 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar7 == 200) {
        bVar7 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar7] = &DAT_023dc8ca + (uint)(bVar7 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar5 + (uint)(bVar7 >> 5) * 0x40] = uVar1;
    }
    uVar6 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar5] = uVar1;
    DAT_0208f354 = 1;
    if (uVar5 == uVar6) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar5 == 5) {
    uVar5 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar5) {
      DAT_0b003638 = uVar5;
      return;
    }
    uVar6 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar5;
    *(ushort *)((int)&DAT_0b00364c + uVar6) = uVar1;
  }
  else if (uVar5 == 1) {
    uVar5 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(ushort *)(&DAT_0209cbec + uVar5) == param_1) goto LAB_0200ae88;
      *(ushort *)(&DAT_0209cbec + uVar5) = uVar1;
    }
    else {
      (&DAT_0209cbec)[uVar5] = uVar3;
      (&DAT_0209cbed)[uVar5] = uVar2;
      param_1 = (param_1 >> 8 | param_1 << 8) & 0xffff;
    }
    if (DAT_023ddeac <= uVar5) {
      if (DAT_023ddb05 == '\0') {
        iVar10 = 0x200;
      }
      else {
        iVar10 = 0x280;
      }
      if (uVar5 < iVar10 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar5 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar5)) {
      bVar13 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar5 - DAT_023ddea0,param_1);
      bVar13 = true;
    }
    if ((DAT_023ddea4 <= uVar5) && (uVar5 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar5 - DAT_023ddea4,param_1);
      bVar13 = true;
    }
    if ((DAT_023ddea8 <= uVar5) && (uVar5 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar5 - DAT_023ddea8,param_1);
    }
    if (!bVar13) {
      FUN_020076d0(uVar5,param_1);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}

