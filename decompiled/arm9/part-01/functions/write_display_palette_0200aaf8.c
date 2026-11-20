// Analysis annotation
// Role — write display palette
// Basis — pseudocode clue
// Pseudocode writes 0x05000200 (display palette).

// rea decompile_all
// name: FUN_0200aaf8
// address: 0x200aaf8
// body: available
// range: 0x200aaf8-0x200abd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200aaf8(uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint uStack_44;
  uint uStack_2c;
  
  uVar9 = DAT_0b003634;
  uVar6 = DAT_0b003630;
  if (DAT_020b4bf5 == '\0') {
    uVar9 = param_1 & 0xff;
    uVar6 = param_1 >> 8 & 0x1f;
    if ((param_1 & 0xc000) != 0x8000) {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c | param_1 >> 0xe;
      DAT_0b003638 = DAT_0b003638 & 0xc000 | param_1 & 0x3fff;
      return;
    }
    DAT_0b00363c = 0;
    iVar10 = 1 - (uint)DAT_020b4c06;
    if (1 < DAT_020b4c06) {
      iVar10 = 0;
    }
    if (uVar6 < 0xc) {
      iVar10 = 0;
    }
    bVar13 = (byte)param_1;
    (&DAT_020b4c18)[uVar6] = bVar13;
    if (iVar10 == 0) {
      switch(uVar6) {
      case 0:
        DAT_0b003644 = (byte)(uVar9 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar9 >> 1) ^ 1) & 1;
        return;
      case 1:
        DAT_020b4c06 = bVar13 & 4;
        DAT_0b00362f = (byte)(uVar9 >> 6) & 1;
        uVar6 = uVar9 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar9 >> 5) & 1;
        DAT_020b4bf2 = (byte)(uVar9 >> 4) & 1;
        DAT_023ddb06 = (char)uVar6;
        if (uVar6 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        DAT_023ddea0 = (param_1 & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (param_1 & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = DAT_023ddea0;
        DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
        return;
      case 3:
        DAT_023ddea8 = (param_1 & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x800;
        }
        else {
          iVar10 = 0x1000;
        }
        DAT_023dc8bc = iVar10 + DAT_023ddea8;
        return;
      case 4:
        DAT_023ddea4 = (param_1 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (param_1 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = DAT_023ddea4;
        DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
        return;
      case 5:
        iVar10 = (param_1 & 0x7f) * 0x200;
        DAT_0209cbe0 = DAT_023ddeac;
        DAT_023dcdac = &DAT_0209cbec + iVar10;
        DAT_023ddeac = iVar10;
        return;
      case 7:
        DAT_0b003640 = param_1 & 0x3f;
        DAT_020b4bf7 = (char)(param_1 & 0x3f);
        return;
      case 10:
        DAT_020b4bf8 = (short)uVar9;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar9 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar9 >> 2) & 1;
        DAT_023dcdb0 = bVar13 & 3;
        if ((DAT_023cb610 & 4) == 0) {
          DAT_023dcea8 = FUN_0200c280;
        }
        else {
          switch(bVar13 & 3) {
          case 0:
            DAT_023dcea8 = (code *)&LAB_0200bbd0;
            return;
          case 1:
            DAT_023dcea8 = (code *)&LAB_0200c0cc;
            return;
          case 2:
            DAT_023dcea8 = (code *)&LAB_0200bf18;
            return;
          case 3:
            DAT_023dcea8 = (code *)&LAB_0200bd6c;
            return;
          }
        }
        return;
      case 0xc:
        uVar6 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (param_1 & 0x81) != 0;
        if ((uVar6 != (uVar9 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar6)) {
          DAT_020b4bf4 = 0;
        }
        if ((bool)DAT_023ddb05) {
          DAT_023dc8bc = DAT_023ddea8 + 0x1000;
          DAT_020b4c0c = 0xf000;
          DAT_020b4c0a = 0x50;
          DAT_023ddeb2 = 0x28;
          DAT_023dc8ae = 0x140;
          DAT_023dc8c8 = 0x40;
        }
        else {
          DAT_020b4c0c = 0xf800;
          DAT_023dc8bc = DAT_023ddea8 + 0x800;
          DAT_020b4c14 = 1;
          DAT_020b4c0a = 0x40;
          DAT_023ddeb2 = 0x20;
          DAT_023dc8ae = 0x100;
          DAT_023dc8c8 = 0x20;
        }
        if (DAT_023ddeb4 == '\0') {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= DAT_023ddb04);
        }
        else {
          DAT_023dcfa8 = 1 - DAT_023ddb04;
          if (1 < DAT_023ddb04) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0xd:
        DAT_023dcea4 = (ushort)((param_1 << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        DAT_0b003630 = uVar9;
        return;
      case 0x10:
        uVar9 = uVar9 >> 4 & 3;
        param_1 = param_1 & 3;
        uVar6 = uVar9 | param_1 << 4;
        if (uVar6 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar6;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar9 + param_1 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[param_1];
        DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
        DAT_023dcea6 = (char)param_1;
        DAT_023dd372._0_1_ = (char)uVar9;
        return;
      case 0x11:
        uVar6 = (param_1 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar9 >> 7);
        DAT_023ddb04 = (char)uVar6;
        if (uVar9 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar6);
        }
        else {
          DAT_023dcfa8 = (param_1 & 0x1f) * -2 + 1;
          if (1 < uVar6) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar9 >> 7);
        DAT_020b4c10 = (param_1 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(param_1 & 0x1f);
        return;
      case 0x13:
        DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar9;
        return;
      case 0x14:
        DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar9 << 8;
        return;
      case 0x15:
        DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar9 << 1;
        return;
      case 0x16:
        DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar9 << 9;
        return;
      case 0x17:
        DAT_0b003634 = DAT_0b003634 & 0x1ffff | (param_1 & 0x7f) << 0x11;
        DAT_020b4c05 = (byte)(uVar9 >> 6);
      }
      return;
    }
    return;
  }
  DAT_0b00363c = DAT_0b00363c & 3 | param_1 >> 2 & 0x3c;
  uVar12 = DAT_0b003638 & 0x3fff | (param_1 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar12;
  if (DAT_020b4bf2 == '\0') {
    return;
  }
  if ((param_1 >> 2 & 0x20) == 0) {
    return;
  }
  uVar7 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar7 = 0xffff;
  }
  DAT_020b4c00 = uVar7;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar12 = DAT_0b003634 & 0xfffffe;
    puVar4 = (ushort *)FUN_02003cc8(uVar12);
    uVar8 = DAT_0b003638;
    uVar14 = DAT_020b4c00;
    uVar15 = DAT_020b4bec;
    uVar11 = DAT_0b00363c & 0xf;
    uVar7 = DAT_020b4c00 & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar12 = uVar12 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar14 = (uint)DAT_020b4bf7;
      do {
        uVar11 = (uint)*puVar4;
        uVar8 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar12 = uVar12 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar6;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar8]) {
          (&DAT_023dc6b0)[uVar8] = (short)(uVar11 & 0xeee);
          if ((uVar8 != 0) && (uVar15 < 0xdf)) {
            (&DAT_023dc8ca)[uVar8 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar8] = uVar1;
          if (uVar8 == uVar14) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar7 = uVar7 - 1 & 0xffff;
        puVar4 = puVar4 + 1;
      } while (uVar7 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar9 & 0xfe0000 | uVar12 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar12 = uVar12 << 0xf;
      do {
        uVar14 = DAT_0b003638 & 0x7f;
        uVar15 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar14;
        if (0x4f < uVar14) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar12 = uVar12 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar15) = *puVar4;
        puVar4 = puVar4 + 1;
        DAT_0b003638 = uVar6 + uVar14;
      } while (uVar7 != 0);
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar9 & 0xfe0000 | uVar12 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar12;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar15 = uVar6 & 0xffff;
      uVar12 = uVar12 << 0xf;
      uStack_44 = 0;
      puVar5 = puVar4;
      uVar11 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar11);
        uVar2 = *puVar5;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar11) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar7 = uVar7 - 1 & 0xffff;
        uVar12 = uVar12 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar2 != uVar1;
        uVar11 = uVar11 + uVar15 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      uVar16 = uVar11;
      if (uVar11 <= uVar8) {
        uVar16 = uVar11 + 0x10000;
      }
      uVar12 = uVar9 & 0xfe0000 | uVar12 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar12;
        return;
      }
      if (uVar8 < DAT_023ddeac) {
LAB_0200aa30:
        bVar17 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + DAT_023ddeac <= uVar8) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar17 = iVar10 + DAT_023ddeac < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar9 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar17)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          if (DAT_023ddea0 < uVar16) {
            if (DAT_023dc8b4 < uVar16) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
          }
          else {
            bVar17 = false;
          }
        }
        else {
          bVar17 = true;
        }
        if ((uStack_2c < DAT_023ddea4) || (DAT_023dc8b8 <= uStack_2c)) {
          if (DAT_023ddea4 < uVar16) {
            if (DAT_023dc8b8 < uVar16) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
          }
          else {
            bVar3 = false;
          }
        }
        else {
          bVar3 = true;
        }
        if (bVar17) {
          if ((DAT_023dc8a0 >> 1 <= uVar14) && (DAT_023dc8a4 = 1, !bVar3)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar12;
            return;
          }
          uVar7 = uStack_2c - DAT_023ddea0;
          bVar17 = (int)uVar7 < 0;
          puVar5 = puVar4;
          if (bVar17) {
            puVar5 = (ushort *)((int)puVar4 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar17) {
            uVar7 = 0;
          }
          uVar14 = uVar16 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar16 - DAT_023ddea0) {
            uVar14 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar5,uVar7,uVar6,uVar14);
          puVar5 = (ushort *)&DAT_0b003638;
          bVar17 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        else {
          puVar5 = (ushort *)0x0;
          bVar17 = false;
        }
        if (bVar3) {
          if (DAT_023dc8a0 >> 1 <= DAT_020b4c00) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a8 = 1;
            DAT_0b003634 = uVar12;
            return;
          }
          iVar10 = uStack_2c - DAT_023ddea4;
          bVar17 = iVar10 < 0;
          if (bVar17) {
            iVar10 = 0;
            puVar5 = (ushort *)((int)puVar4 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar17) {
            puVar5 = puVar4;
          }
          uVar7 = uVar16 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar16 - DAT_023ddea4) {
            uVar7 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar5,iVar10,uVar6,uVar7);
          bVar17 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar4,uStack_2c - DAT_023ddea8 & 0xffff,uVar6,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar17) {
          uVar6 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar6) {
            do {
              FUN_020076d0(uStack_2c,*puVar4);
              uStack_2c = uStack_2c + uVar15 & 0xffff;
              uVar6 = uVar6 - 1 & 0xffff;
              puVar4 = puVar4 + 1;
            } while (uVar6 != 0);
            uVar9 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar4);
              }
              uStack_2c = uStack_2c + uVar15 & 0xffff;
              uVar6 = uVar6 - 1 & 0xffff;
              uVar9 = 0;
              puVar4 = puVar4 + 1;
            } while (uVar6 != 0);
          }
        }
      }
    }
    else {
      uVar6 = uVar6 & 0xffff;
      puVar5 = puVar4;
      uVar15 = uVar7;
      uVar16 = uStack_2c;
      do {
        uVar1 = *puVar5;
        uVar15 = uVar15 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar16] = (char)(uVar1 >> 8);
        uVar12 = uVar12 + 2 & 0x1ffff | uVar9 & 0xfe0000;
        (&DAT_0209cbed)[uVar16] = (char)uVar1;
        uVar16 = uVar16 + uVar6 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar15 != 0);
      if (uVar8 < DAT_023ddeac) {
LAB_0200aa20:
        bVar17 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        if (iVar10 + DAT_023ddeac <= uVar8) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar10 = 0x200;
        }
        else {
          iVar10 = 0x280;
        }
        bVar17 = iVar10 + DAT_023ddeac < uVar16;
        DAT_020b4c15 = 1;
      }
      uVar9 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa <= uVar16)) && (bVar17)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar17 = false;
          uVar9 = uVar7;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar7) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar5 = puVar4;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar6;
            uVar7 = uVar7 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
          bVar17 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar9 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar9 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar9) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar5 = puVar4;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar6;
            uVar9 = uVar9 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar9 != 0);
          bVar17 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar9 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar9 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar9) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar5 = puVar4;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar6;
            uVar9 = uVar9 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar9 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar9 = 0;
        }
        if (!bVar17) {
          uVar7 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar4 << 8 | (uint)(*puVar4 >> 8));
            uStack_2c = uStack_2c + uVar6 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar9 = 0;
            puVar4 = puVar4 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    DAT_0b003638 = uVar16 & 0xffff;
    DAT_020b4bfc = uVar9;
    DAT_020b4c00 = uVar9;
    DAT_0b003634 = uVar12;
    break;
  case 2:
    DAT_020b4bf3 = 1;
    break;
  case 3:
    uVar9 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar14 = uVar9 + uVar7;
    uVar15 = DAT_0b003630 & 0xffff;
    do {
      uVar8 = uVar9 ^ 1;
      uVar9 = uVar9 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar8];
      DAT_0b003638 = DAT_0b003638 + uVar15 & 0xffff;
    } while (uVar9 != (uVar14 & 0xffff));
    if (uVar6 == 1) {
      uVar7 = uVar7 >> 1;
      uVar15 = 2;
    }
    do {
      uVar12 = uVar12 & 0xfffe;
      if (uVar12 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar12 < DAT_023dcea4) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
            bVar17 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar17 = true;
          }
          if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar17 = true;
          }
          if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar12));
          }
          if (!bVar17) {
            FUN_020076d0(uVar12,*(undefined2 *)(&DAT_0209cbec + uVar12));
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
        if (iVar10 + DAT_023ddeac <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar7 = uVar7 - 1 & 0xffff;
      if (uVar7 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar12 = uVar12 + uVar15;
    } while( true );
  }
  return;
}

