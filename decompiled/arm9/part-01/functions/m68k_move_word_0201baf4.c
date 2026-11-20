// Analysis annotation
// Role — m68k move word
// Basis — dispatch table
// Reached by 1 M68000 opcode-table slot. Decoded forms include move word (1). Example
// opcode words are 0x31FB.

// rea decompile_all
// name: m68k_dispatch_0201baf4
// address: 0x201baf4
// body: available
// range: 0x201baf4-0x201bb5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201baf4(void)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  bool bVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  uint uVar19;
  int unaff_r6;
  int unaff_r8;
  uint uVar20;
  ushort *unaff_r10;
  bool bVar21;
  uint uStack_44;
  uint uStack_2c;
  
  piVar1 = (int *)(unaff_r6 + 0x54);
  puVar2 = (uint *)(unaff_r6 + 0x9c);
  uVar4 = *unaff_r10;
  if ((uVar4 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar14 = (uVar4 & 0x7000) >> 10;
  if ((uVar4 & 0x800) == 0) {
    iVar12 = (int)*(short *)(unaff_r6 + uVar14);
  }
  else {
    iVar12 = *(int *)(unaff_r6 + uVar14);
  }
  uVar9 = FUN_010040c4(((int)unaff_r10 - *piVar1 | *puVar2) + (int)(char)uVar4 + iVar12);
  uVar19 = DAT_0b003634;
  uVar14 = DAT_0b003630;
  uVar18 = uVar9 & 0xffff;
  uVar10 = (uint)(short)unaff_r10[1];
  uVar4 = (ushort)uVar9;
  if (0xdfffff < (uVar10 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uint)unaff_r10[1]) = uVar4;
    return;
  }
  if ((uVar10 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar10 & 0xffffff) >> 0x10])(uVar10 & 0xffffff);
    return;
  }
  bVar15 = (byte)uVar9;
  if ((uVar10 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar19 = DAT_0b003630;
    uVar14 = DAT_020b4c00;
    uVar5 = (undefined1)(uVar18 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar21 = (DAT_0b003638 & 1) == 0;
      uVar18 = DAT_0b003638 & 0xffff;
      if (bVar21) {
        puVar17 = &DAT_0209cbec + uVar18;
      }
      else {
        puVar17 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar10 = DAT_0b003630 & 0xffff;
      if (!bVar21) {
        (&DAT_0209cbec)[(int)puVar17] = bVar15;
      }
      uVar14 = uVar14 & 0xffff;
      if (bVar21) {
        (&DAT_0209cbec)[uVar18] = uVar5;
        puVar17[1] = bVar15;
      }
      if (!bVar21) {
        (&DAT_0209cbec)[uVar18] = uVar5;
      }
      uVar11 = uVar18 + uVar10 & 0xffff;
      uVar16 = uVar14;
      if (uVar14 != 0) {
        do {
          uVar16 = uVar16 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar11] = bVar15;
          uVar11 = uVar11 + uVar10 & 0xffff;
        } while (uVar16 != 0);
        uVar18 = DAT_0b003638;
        if (uVar14 == 0xffff && (uVar9 & 0xff) == 0) {
          DAT_0b003638 = uVar11;
          FUN_02007420();
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
      }
      DAT_0b003638 = uVar11;
      uVar18 = uVar18 & 0xfffe;
      if (uVar19 == 1) {
        uVar14 = uVar14 >> 1;
        uVar10 = 2;
      }
      do {
        if (uVar18 < DAT_023ddeac) {
LAB_0200adc4:
          if ((uVar18 < DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) {
            if ((uVar18 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar18)) {
              bVar21 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar18 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar18));
              bVar21 = true;
            }
            if ((DAT_023ddea4 <= uVar18) && (uVar18 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar18 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar18));
              bVar21 = true;
            }
            if ((DAT_023ddea8 <= uVar18) && (uVar18 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar18 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar18));
            }
            if (!bVar21) {
              FUN_020076d0(uVar18,*(undefined2 *)(&DAT_0209cbec + uVar18));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar12 = 0x200;
          }
          else {
            iVar12 = 0x280;
          }
          if (iVar12 + DAT_023ddeac <= uVar18) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar14 = uVar14 - 1 & 0xffff;
        if (uVar14 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar18 = uVar18 + uVar10 & 0xfffe;
      } while( true );
    }
    uVar14 = DAT_0b00363c & 0xf;
    if (uVar14 == 3) {
      uVar14 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar14] = uVar4 & 0xeee;
      uVar4 = (ushort)((uVar9 & 0xe0) << 2) | (ushort)((uVar9 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar9 & 0xe) << 1);
      if ((uVar14 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar15 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar15 == 200) {
          bVar15 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar14 + (uint)(bVar15 >> 5) * 0x40] = uVar4;
      }
      uVar18 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar14] = uVar4;
      DAT_0208f354 = 1;
      if (uVar14 == uVar18) {
        _DAT_05000200 = uVar4;
      }
    }
    else if (uVar14 == 5) {
      uVar14 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar14) {
        DAT_0b003638 = uVar14;
        return;
      }
      uVar18 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar14;
      *(ushort *)((int)&DAT_0b00364c + uVar18) = uVar4;
    }
    else if (uVar14 == 1) {
      uVar14 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar14) == uVar18) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar14) = uVar4;
      }
      else {
        (&DAT_0209cbec)[uVar14] = uVar5;
        (&DAT_0209cbed)[uVar14] = bVar15;
        uVar18 = (uVar9 & 0xffff) >> 8 | (uVar9 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar14) {
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        if (uVar14 < iVar12 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar14 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar14)) {
        bVar21 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar14 - DAT_023ddea0,uVar18);
        bVar21 = true;
      }
      if ((DAT_023ddea4 <= uVar14) && (uVar14 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar14 - DAT_023ddea4,uVar18);
        bVar21 = true;
      }
      if ((DAT_023ddea8 <= uVar14) && (uVar14 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar14 - DAT_023ddea8,uVar18);
      }
      if (!bVar21) {
        FUN_020076d0(uVar14,uVar18);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  uVar18 = (uVar9 & 0xffff) >> 2;
  if (DAT_020b4bf5 == '\0') {
    uVar18 = uVar9 & 0xff;
    uVar14 = (uVar9 & 0xffff) >> 8 & 0x1f;
    if ((uVar9 & 0xc000) != 0x8000) {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar9 & 0xffff) >> 0xe;
      DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar9 & 0x3fff;
      return;
    }
    DAT_0b00363c = 0;
    iVar12 = 1 - (uint)DAT_020b4c06;
    if (1 < DAT_020b4c06) {
      iVar12 = 0;
    }
    if (uVar14 < 0xc) {
      iVar12 = 0;
    }
    (&DAT_020b4c18)[uVar14] = bVar15;
    if (iVar12 == 0) {
      switch(uVar14) {
      case 0:
        DAT_0b003644 = (byte)(uVar18 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar18 >> 1) ^ 1) & 1;
        return;
      case 1:
        DAT_020b4c06 = bVar15 & 4;
        DAT_0b00362f = (byte)(uVar18 >> 6) & 1;
        uVar14 = uVar18 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar18 >> 5) & 1;
        DAT_020b4bf2 = (byte)(uVar18 >> 4) & 1;
        DAT_023ddb06 = (char)uVar14;
        if (uVar14 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        return;
      case 2:
        DAT_023ddea0 = (uVar9 & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (uVar9 & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = DAT_023ddea0;
        DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
        return;
      case 3:
        DAT_023ddea8 = (uVar9 & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x800;
        }
        else {
          iVar12 = 0x1000;
        }
        DAT_023dc8bc = iVar12 + DAT_023ddea8;
        return;
      case 4:
        DAT_023ddea4 = (uVar9 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (uVar9 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = DAT_023ddea4;
        DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
        return;
      case 5:
        iVar12 = (uVar9 & 0x7f) * 0x200;
        DAT_0209cbe0 = DAT_023ddeac;
        DAT_023dcdac = &DAT_0209cbec + iVar12;
        DAT_023ddeac = iVar12;
        return;
      case 7:
        DAT_0b003640 = uVar9 & 0x3f;
        DAT_020b4bf7 = (char)(uVar9 & 0x3f);
        return;
      case 10:
        DAT_020b4bf8 = (short)uVar18;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar18 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar18 >> 2) & 1;
        DAT_023dcdb0 = bVar15 & 3;
        if ((DAT_023cb610 & 4) == 0) {
          DAT_023dcea8 = FUN_0200c280;
        }
        else {
          switch(bVar15 & 3) {
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
        uVar14 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar9 & 0x81) != 0;
        if ((uVar14 != (uVar18 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar14)) {
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
        DAT_023dcea4 = (ushort)((uVar9 << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        DAT_0b003630 = uVar18;
        return;
      case 0x10:
        uVar18 = uVar18 >> 4 & 3;
        uVar9 = uVar9 & 3;
        uVar14 = uVar18 | uVar9 << 4;
        if (uVar14 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar14;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar18 + uVar9 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar9];
        DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
        DAT_023dcea6 = (char)uVar9;
        DAT_023dd372._0_1_ = (char)uVar18;
        return;
      case 0x11:
        uVar14 = (uVar9 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar18 >> 7);
        DAT_023ddb04 = (char)uVar14;
        if (uVar18 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar14);
        }
        else {
          DAT_023dcfa8 = (uVar9 & 0x1f) * -2 + 1;
          if (1 < uVar14) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar18 >> 7);
        DAT_020b4c10 = (uVar9 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar9 & 0x1f);
        return;
      case 0x13:
        DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar18;
        return;
      case 0x14:
        DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar18 << 8;
        return;
      case 0x15:
        DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar18 << 1;
        return;
      case 0x16:
        DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar18 << 9;
        return;
      case 0x17:
        DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar9 & 0x7f) << 0x11;
        DAT_020b4c05 = (byte)(uVar18 >> 6);
      }
      return;
    }
    return;
  }
  DAT_0b00363c = DAT_0b00363c & 3 | uVar18 & 0x3c;
  uVar9 = DAT_0b003638 & 0x3fff | (uVar9 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar9;
  if (DAT_020b4bf2 == '\0') {
    return;
  }
  if ((uVar18 & 0x20) == 0) {
    return;
  }
  uVar18 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar18 = 0xffff;
  }
  DAT_020b4c00 = uVar18;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar18 = DAT_0b003634 & 0xfffffe;
    puVar7 = (ushort *)FUN_02003cc8(uVar18);
    uVar11 = DAT_0b003638;
    uVar16 = DAT_020b4c00;
    uVar10 = DAT_020b4bec;
    uVar13 = DAT_0b00363c & 0xf;
    uVar9 = DAT_020b4c00 & 0xffff;
    if (uVar13 == 3) {
      bVar15 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar18 = uVar18 << 0xf;
      if (bVar15 == 200) {
        bVar15 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar16 = (uint)DAT_020b4bf7;
      do {
        uVar13 = (uint)*puVar7;
        uVar11 = (DAT_0b003638 & 0x7e) >> 1;
        uVar4 = (ushort)((uVar13 & 0xe0) << 2) | (ushort)((uVar13 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar13 & 0xe) << 1);
        uVar18 = uVar18 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar14;
        if ((uVar13 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar11]) {
          (&DAT_023dc6b0)[uVar11] = (short)(uVar13 & 0xeee);
          if ((uVar11 != 0) && (uVar10 < 0xdf)) {
            (&DAT_023dc8ca)[uVar11 + (uint)(bVar15 >> 5) * 0x40] = uVar4;
            (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar11] = uVar4;
          if (uVar11 == uVar16) {
            _DAT_05000200 = uVar4;
          }
        }
        uVar9 = uVar9 - 1 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar9 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar19 & 0xfe0000 | uVar18 >> 0xf;
      return;
    }
    if (uVar13 == 5) {
      uVar18 = uVar18 << 0xf;
      do {
        uVar16 = DAT_0b003638 & 0x7f;
        uVar10 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar16;
        if (0x4f < uVar16) break;
        uVar9 = uVar9 - 1 & 0xffff;
        uVar18 = uVar18 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar10) = *puVar7;
        puVar7 = puVar7 + 1;
        DAT_0b003638 = uVar14 + uVar16;
      } while (uVar9 != 0);
      DAT_020b4bfc = uVar9;
      DAT_020b4c00 = uVar9;
      DAT_0b003634 = uVar19 & 0xfe0000 | uVar18 >> 0xf;
      return;
    }
    if (uVar13 != 1) {
      DAT_020b4bfc = uVar9;
      DAT_020b4c00 = uVar9;
      DAT_0b003634 = uVar18;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar10 = uVar14 & 0xffff;
      uVar18 = uVar18 << 0xf;
      uStack_44 = 0;
      puVar8 = puVar7;
      uVar13 = uStack_2c;
      do {
        uVar4 = *(ushort *)(&DAT_0209cbec + uVar13);
        uVar3 = *puVar8;
        if (uVar3 != uVar4) {
          *(ushort *)(&DAT_0209cbec + uVar13) = uVar3;
          uStack_44 = uStack_44 + 1;
        }
        uVar9 = uVar9 - 1 & 0xffff;
        uVar18 = uVar18 + 0x8000;
        (&DAT_020acbec)[uVar13 >> 1] = uVar3 != uVar4;
        uVar13 = uVar13 + uVar10 & 0xffff;
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
      uVar20 = uVar13;
      if (uVar13 <= uVar11) {
        uVar20 = uVar13 + 0x10000;
      }
      uVar18 = uVar19 & 0xfe0000 | uVar18 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar18;
        return;
      }
      if (uVar11 < DAT_023ddeac) {
LAB_0200aa30:
        bVar21 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        if (iVar12 + DAT_023ddeac <= uVar11) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        bVar21 = iVar12 + DAT_023ddeac < uVar13;
        DAT_020b4c15 = 1;
      }
      uVar19 = 0;
      if (((uVar11 != DAT_023dcea4) || (DAT_023dcdaa < uVar13)) && (bVar21)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          if (DAT_023ddea0 < uVar20) {
            if (DAT_023dc8b4 < uVar20) {
              bVar21 = false;
            }
            else {
              bVar21 = true;
            }
          }
          else {
            bVar21 = false;
          }
        }
        else {
          bVar21 = true;
        }
        if ((uStack_2c < DAT_023ddea4) || (DAT_023dc8b8 <= uStack_2c)) {
          if (DAT_023ddea4 < uVar20) {
            if (DAT_023dc8b8 < uVar20) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
          }
          else {
            bVar6 = false;
          }
        }
        else {
          bVar6 = true;
        }
        if (bVar21) {
          if ((DAT_023dc8a0 >> 1 <= uVar16) && (DAT_023dc8a4 = 1, !bVar6)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar18;
            return;
          }
          uVar9 = uStack_2c - DAT_023ddea0;
          bVar21 = (int)uVar9 < 0;
          puVar8 = puVar7;
          if (bVar21) {
            puVar8 = (ushort *)((int)puVar7 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar9 = uStack_2c;
          }
          if (bVar21) {
            uVar9 = 0;
          }
          uVar16 = uVar20 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar20 - DAT_023ddea0) {
            uVar16 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar8,uVar9,uVar14,uVar16);
          puVar8 = (ushort *)&DAT_0b003638;
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        else {
          puVar8 = (ushort *)0x0;
          bVar21 = false;
        }
        if (bVar6) {
          if (DAT_023dc8a0 >> 1 <= DAT_020b4c00) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a8 = 1;
            DAT_0b003634 = uVar18;
            return;
          }
          iVar12 = uStack_2c - DAT_023ddea4;
          bVar21 = iVar12 < 0;
          if (bVar21) {
            iVar12 = 0;
            puVar8 = (ushort *)((int)puVar7 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar21) {
            puVar8 = puVar7;
          }
          uVar9 = uVar20 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar20 - DAT_023ddea4) {
            uVar9 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar8,iVar12,uVar14,uVar9);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar7,uStack_2c - DAT_023ddea8 & 0xffff,uVar14,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar21) {
          uVar14 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar14) {
            do {
              FUN_020076d0(uStack_2c,*puVar7);
              uStack_2c = uStack_2c + uVar10 & 0xffff;
              uVar14 = uVar14 - 1 & 0xffff;
              puVar7 = puVar7 + 1;
            } while (uVar14 != 0);
            uVar19 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar7);
              }
              uStack_2c = uStack_2c + uVar10 & 0xffff;
              uVar14 = uVar14 - 1 & 0xffff;
              uVar19 = 0;
              puVar7 = puVar7 + 1;
            } while (uVar14 != 0);
          }
        }
      }
    }
    else {
      uVar14 = uVar14 & 0xffff;
      puVar8 = puVar7;
      uVar10 = uVar9;
      uVar20 = uStack_2c;
      do {
        uVar4 = *puVar8;
        uVar10 = uVar10 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar20] = (char)(uVar4 >> 8);
        uVar18 = uVar18 + 2 & 0x1ffff | uVar19 & 0xfe0000;
        (&DAT_0209cbed)[uVar20] = (char)uVar4;
        uVar20 = uVar20 + uVar14 & 0xffff;
        puVar8 = puVar8 + 1;
      } while (uVar10 != 0);
      if (uVar11 < DAT_023ddeac) {
LAB_0200aa20:
        bVar21 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        if (iVar12 + DAT_023ddeac <= uVar11) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        bVar21 = iVar12 + DAT_023ddeac < uVar20;
        DAT_020b4c15 = 1;
      }
      uVar19 = 0;
      if (((uVar11 != DAT_023dcea4) || (DAT_023dcdaa <= uVar20)) && (bVar21)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar21 = false;
          uVar19 = uVar9;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar9) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar8 = puVar7;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar14;
            uVar9 = uVar9 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar9 != 0);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar19 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar19 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar19) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar8 = puVar7;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar14;
            uVar19 = uVar19 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar19 != 0);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar19 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar19 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar9 = 0x400;
          }
          else {
            uVar9 = 0x800;
          }
          if (uVar9 <= uVar19) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar8 = puVar7;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar14;
            uVar19 = uVar19 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar19 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar19 = 0;
        }
        if (!bVar21) {
          uVar9 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = uStack_2c + uVar14 & 0xffff;
            uVar9 = uVar9 - 1 & 0xffff;
            uVar19 = 0;
            puVar7 = puVar7 + 1;
          } while (uVar9 != 0);
        }
      }
    }
    DAT_0b003638 = uVar20 & 0xffff;
    DAT_020b4bfc = uVar19;
    DAT_020b4c00 = uVar19;
    DAT_0b003634 = uVar18;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar19 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar16 = uVar19 + uVar18;
    uVar10 = DAT_0b003630 & 0xffff;
    do {
      uVar11 = uVar19 ^ 1;
      uVar19 = uVar19 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar11];
      DAT_0b003638 = DAT_0b003638 + uVar10 & 0xffff;
    } while (uVar19 != (uVar16 & 0xffff));
    if (uVar14 == 1) {
      uVar18 = uVar18 >> 1;
      uVar10 = 2;
    }
    do {
      uVar9 = uVar9 & 0xfffe;
      if (uVar9 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar21 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar21 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar21 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar21) {
            FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x200;
        }
        else {
          iVar12 = 0x280;
        }
        if (iVar12 + DAT_023ddeac <= uVar9) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar18 = uVar18 - 1 & 0xffff;
      if (uVar18 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar10;
    } while( true );
  }
  return;
}

