// rea decompile_all
// name: m68k_dispatch_0201a694
// address: 0x201a694
// body: available
// range: 0x201a694-0x201a6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201a694(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  bool bVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int unaff_r6;
  int unaff_r8;
  uint uVar19;
  undefined2 *unaff_r10;
  uint unaff_r11;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar17 = uVar7 & 0xffff;
  puVar12 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar8 = *puVar12 - 2;
  *puVar12 = uVar8;
  uVar18 = DAT_0b003634;
  uVar11 = DAT_0b003630;
  uVar1 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar8 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar13 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar18 = DAT_0b003630;
    uVar11 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar17 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar20 = (DAT_0b003638 & 1) == 0;
      uVar17 = DAT_0b003638 & 0xffff;
      if (bVar20) {
        puVar15 = &DAT_0209cbec + uVar17;
      }
      else {
        puVar15 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar8 = DAT_0b003630 & 0xffff;
      if (!bVar20) {
        (&DAT_0209cbec)[(int)puVar15] = bVar13;
      }
      uVar11 = uVar11 & 0xffff;
      if (bVar20) {
        (&DAT_0209cbec)[uVar17] = uVar3;
        puVar15[1] = bVar13;
      }
      if (!bVar20) {
        (&DAT_0209cbec)[uVar17] = uVar3;
      }
      uVar9 = uVar17 + uVar8 & 0xffff;
      uVar14 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar14 = uVar14 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar9] = bVar13;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar14 != 0);
        uVar17 = DAT_0b003638;
        if (uVar11 == 0xffff && (uVar7 & 0xff) == 0) {
          DAT_0b003638 = uVar9;
          FUN_02007420();
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
      }
      DAT_0b003638 = uVar9;
      uVar17 = uVar17 & 0xfffe;
      if (uVar18 == 1) {
        uVar11 = uVar11 >> 1;
        uVar8 = 2;
      }
      do {
        if (uVar17 < DAT_023ddeac) {
LAB_0200adc4:
          if ((uVar17 < DAT_023dcea4) || (DAT_023dcdaa <= uVar17)) {
            if ((uVar17 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar17)) {
              bVar20 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar17 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar17));
              bVar20 = true;
            }
            if ((DAT_023ddea4 <= uVar17) && (uVar17 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar17 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar17));
              bVar20 = true;
            }
            if ((DAT_023ddea8 <= uVar17) && (uVar17 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar17 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar17));
            }
            if (!bVar20) {
              FUN_020076d0(uVar17,*(undefined2 *)(&DAT_0209cbec + uVar17));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar16 = 0x200;
          }
          else {
            iVar16 = 0x280;
          }
          if (iVar16 + DAT_023ddeac <= uVar17) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar11 = uVar11 - 1 & 0xffff;
        if (uVar11 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar17 = uVar17 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar11 = DAT_0b00363c & 0xf;
    if (uVar11 == 3) {
      uVar11 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar11] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar11 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar13 == 200) {
          bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar11 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
      }
      uVar17 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar11] = uVar1;
      DAT_0208f354 = 1;
      if (uVar11 == uVar17) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar11 == 5) {
      uVar11 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar11) {
        DAT_0b003638 = uVar11;
        return;
      }
      uVar17 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar11;
      *(ushort *)((int)&DAT_0b00364c + uVar17) = uVar1;
    }
    else if (uVar11 == 1) {
      uVar11 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar11) == uVar17) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar11) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar11] = uVar3;
        (&DAT_0209cbed)[uVar11] = bVar13;
        uVar17 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar11) {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (uVar11 < iVar16 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar11 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar11)) {
        bVar20 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar11 - DAT_023ddea0,uVar17);
        bVar20 = true;
      }
      if ((DAT_023ddea4 <= uVar11) && (uVar11 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar11 - DAT_023ddea4,uVar17);
        bVar20 = true;
      }
      if ((DAT_023ddea8 <= uVar11) && (uVar11 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar11 - DAT_023ddea8,uVar17);
      }
      if (!bVar20) {
        FUN_020076d0(uVar11,uVar17);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  uVar17 = (uVar7 & 0xffff) >> 2;
  if (DAT_020b4bf5 == '\0') {
    uVar17 = uVar7 & 0xff;
    uVar11 = (uVar7 & 0xffff) >> 8 & 0x1f;
    if ((uVar7 & 0xc000) != 0x8000) {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar7 & 0xffff) >> 0xe;
      DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar7 & 0x3fff;
      return;
    }
    DAT_0b00363c = 0;
    iVar16 = 1 - (uint)DAT_020b4c06;
    if (1 < DAT_020b4c06) {
      iVar16 = 0;
    }
    if (uVar11 < 0xc) {
      iVar16 = 0;
    }
    (&DAT_020b4c18)[uVar11] = bVar13;
    if (iVar16 == 0) {
      switch(uVar11) {
      case 0:
        DAT_0b003644 = (byte)(uVar17 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar17 >> 1) ^ 1) & 1;
        return;
      case 1:
        DAT_020b4c06 = bVar13 & 4;
        DAT_0b00362f = (byte)(uVar17 >> 6) & 1;
        uVar11 = uVar17 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar17 >> 5) & 1;
        DAT_020b4bf2 = (byte)(uVar17 >> 4) & 1;
        DAT_023ddb06 = (char)uVar11;
        if (uVar11 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        DAT_023ddea0 = (uVar7 & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (uVar7 & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = DAT_023ddea0;
        DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
        return;
      case 3:
        DAT_023ddea8 = (uVar7 & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x800;
        }
        else {
          iVar16 = 0x1000;
        }
        DAT_023dc8bc = iVar16 + DAT_023ddea8;
        return;
      case 4:
        DAT_023ddea4 = (uVar7 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (uVar7 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = DAT_023ddea4;
        DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
        return;
      case 5:
        iVar16 = (uVar7 & 0x7f) * 0x200;
        DAT_0209cbe0 = DAT_023ddeac;
        DAT_023dcdac = &DAT_0209cbec + iVar16;
        DAT_023ddeac = iVar16;
        return;
      case 7:
        DAT_0b003640 = uVar7 & 0x3f;
        DAT_020b4bf7 = (char)(uVar7 & 0x3f);
        return;
      case 10:
        DAT_020b4bf8 = (short)uVar17;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar17 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar17 >> 2) & 1;
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
        uVar11 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar7 & 0x81) != 0;
        if ((uVar11 != (uVar17 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar11)) {
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
        DAT_023dcea4 = (ushort)((uVar7 << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        DAT_0b003630 = uVar17;
        return;
      case 0x10:
        uVar17 = uVar17 >> 4 & 3;
        uVar7 = uVar7 & 3;
        uVar11 = uVar17 | uVar7 << 4;
        if (uVar11 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar11;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar17 + uVar7 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
        DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
        DAT_023dcea6 = (char)uVar7;
        DAT_023dd372._0_1_ = (char)uVar17;
        return;
      case 0x11:
        uVar11 = (uVar7 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar17 >> 7);
        DAT_023ddb04 = (char)uVar11;
        if (uVar17 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar11);
        }
        else {
          DAT_023dcfa8 = (uVar7 & 0x1f) * -2 + 1;
          if (1 < uVar11) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar17 >> 7);
        DAT_020b4c10 = (uVar7 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar7 & 0x1f);
        return;
      case 0x13:
        DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar17;
        return;
      case 0x14:
        DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar17 << 8;
        return;
      case 0x15:
        DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar17 << 1;
        return;
      case 0x16:
        DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar17 << 9;
        return;
      case 0x17:
        DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar7 & 0x7f) << 0x11;
        DAT_020b4c05 = (byte)(uVar17 >> 6);
      }
      return;
    }
    return;
  }
  DAT_0b00363c = DAT_0b00363c & 3 | uVar17 & 0x3c;
  uVar7 = DAT_0b003638 & 0x3fff | (uVar7 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar7;
  if (DAT_020b4bf2 == '\0') {
    return;
  }
  if ((uVar17 & 0x20) == 0) {
    return;
  }
  uVar17 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar17 = 0xffff;
  }
  DAT_020b4c00 = uVar17;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar17 = DAT_0b003634 & 0xfffffe;
    puVar5 = (ushort *)FUN_02003cc8(uVar17);
    uVar9 = DAT_0b003638;
    uVar14 = DAT_020b4c00;
    uVar8 = DAT_020b4bec;
    uVar10 = DAT_0b00363c & 0xf;
    uVar7 = DAT_020b4c00 & 0xffff;
    if (uVar10 == 3) {
      bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar17 = uVar17 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar14 = (uint)DAT_020b4bf7;
      do {
        uVar10 = (uint)*puVar5;
        uVar9 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar10 & 0xe0) << 2) | (ushort)((uVar10 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar10 & 0xe) << 1);
        uVar17 = uVar17 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar11;
        if ((uVar10 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar9]) {
          (&DAT_023dc6b0)[uVar9] = (short)(uVar10 & 0xeee);
          if ((uVar9 != 0) && (uVar8 < 0xdf)) {
            (&DAT_023dc8ca)[uVar9 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar9] = uVar1;
          if (uVar9 == uVar14) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar18 & 0xfe0000 | uVar17 >> 0xf;
      return;
    }
    if (uVar10 == 5) {
      uVar17 = uVar17 << 0xf;
      do {
        uVar14 = DAT_0b003638 & 0x7f;
        uVar8 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar14;
        if (0x4f < uVar14) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar17 = uVar17 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar11 + uVar14;
      } while (uVar7 != 0);
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar18 & 0xfe0000 | uVar17 >> 0xf;
      return;
    }
    if (uVar10 != 1) {
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar17;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar8 = uVar11 & 0xffff;
      uVar17 = uVar17 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar10 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar10);
        uVar2 = *puVar6;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar10) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar7 = uVar7 - 1 & 0xffff;
        uVar17 = uVar17 + 0x8000;
        (&DAT_020acbec)[uVar10 >> 1] = uVar2 != uVar1;
        uVar10 = uVar10 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar19 = uVar10;
      if (uVar10 <= uVar9) {
        uVar19 = uVar10 + 0x10000;
      }
      uVar17 = uVar18 & 0xfe0000 | uVar17 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar17;
        return;
      }
      if (uVar9 < DAT_023ddeac) {
LAB_0200aa30:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + DAT_023ddeac <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar10;
        DAT_020b4c15 = 1;
      }
      uVar18 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa < uVar10)) && (bVar20)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          if (DAT_023ddea0 < uVar19) {
            if (DAT_023dc8b4 < uVar19) {
              bVar20 = false;
            }
            else {
              bVar20 = true;
            }
          }
          else {
            bVar20 = false;
          }
        }
        else {
          bVar20 = true;
        }
        if ((uStack_2c < DAT_023ddea4) || (DAT_023dc8b8 <= uStack_2c)) {
          if (DAT_023ddea4 < uVar19) {
            if (DAT_023dc8b8 < uVar19) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
          }
          else {
            bVar4 = false;
          }
        }
        else {
          bVar4 = true;
        }
        if (bVar20) {
          if ((DAT_023dc8a0 >> 1 <= uVar14) && (DAT_023dc8a4 = 1, !bVar4)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar17;
            return;
          }
          uVar7 = uStack_2c - DAT_023ddea0;
          bVar20 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar20) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar20) {
            uVar7 = 0;
          }
          uVar14 = uVar19 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea0) {
            uVar14 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar7,uVar11,uVar14);
          puVar6 = (ushort *)&DAT_0b003638;
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        else {
          puVar6 = (ushort *)0x0;
          bVar20 = false;
        }
        if (bVar4) {
          if (DAT_023dc8a0 >> 1 <= DAT_020b4c00) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a8 = 1;
            DAT_0b003634 = uVar17;
            return;
          }
          iVar16 = uStack_2c - DAT_023ddea4;
          bVar20 = iVar16 < 0;
          if (bVar20) {
            iVar16 = 0;
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar6 = puVar5;
          }
          uVar7 = uVar19 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea4) {
            uVar7 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar16,uVar11,uVar7);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar5,uStack_2c - DAT_023ddea8 & 0xffff,uVar11,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar20) {
          uVar11 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar11) {
            do {
              FUN_020076d0(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar11 = uVar11 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar11 != 0);
            uVar18 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar11 = uVar11 - 1 & 0xffff;
              uVar18 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar11 != 0);
          }
        }
      }
    }
    else {
      uVar11 = uVar11 & 0xffff;
      puVar6 = puVar5;
      uVar8 = uVar7;
      uVar19 = uStack_2c;
      do {
        uVar1 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar19] = (char)(uVar1 >> 8);
        uVar17 = uVar17 + 2 & 0x1ffff | uVar18 & 0xfe0000;
        (&DAT_0209cbed)[uVar19] = (char)uVar1;
        uVar19 = uVar19 + uVar11 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < DAT_023ddeac) {
LAB_0200aa20:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + DAT_023ddeac <= uVar9) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar18 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar18 = uVar7;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar7) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar7 = uVar7 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar7 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar18 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar18 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar18) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar18 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar18 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar18 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar18) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar18 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar18 = 0;
        }
        if (!bVar20) {
          uVar7 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar11 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar18 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
        }
      }
    }
    DAT_0b003638 = uVar19 & 0xffff;
    DAT_020b4bfc = uVar18;
    DAT_020b4c00 = uVar18;
    DAT_0b003634 = uVar17;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar18 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar14 = uVar18 + uVar17;
    uVar8 = DAT_0b003630 & 0xffff;
    do {
      uVar9 = uVar18 ^ 1;
      uVar18 = uVar18 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar9];
      DAT_0b003638 = DAT_0b003638 + uVar8 & 0xffff;
    } while (uVar18 != (uVar14 & 0xffff));
    if (uVar11 == 1) {
      uVar17 = uVar17 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar7 < DAT_023dcea4) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar7)) {
            bVar20 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar7 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar20 = true;
          }
          if ((DAT_023ddea4 <= uVar7) && (uVar7 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar7 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar20 = true;
          }
          if ((DAT_023ddea8 <= uVar7) && (uVar7 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar7 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar7));
          }
          if (!bVar20) {
            FUN_020076d0(uVar7,*(undefined2 *)(&DAT_0209cbec + uVar7));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + DAT_023ddeac <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar17 = uVar17 - 1 & 0xffff;
      if (uVar17 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}

