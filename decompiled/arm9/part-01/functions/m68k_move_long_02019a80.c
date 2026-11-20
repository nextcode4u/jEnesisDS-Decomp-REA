// Analysis annotation
// Role — m68k move long
// Basis — dispatch table
// Reached by 64 M68000 opcode-table slots. Decoded forms include move long (64). Example
// opcode words are 0x2170, 0x2171, 0x2172, 0x2173, 0x2174.

// rea decompile_all
// name: m68k_dispatch_02019a80
// address: 0x2019a80
// body: available
// range: 0x2019a80-0x2019aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_02019a80(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  undefined1 *puVar16;
  int unaff_r6;
  uint uVar17;
  uint uVar18;
  int unaff_r8;
  uint uVar19;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar2 = *unaff_r10;
  iVar11 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar11 = unaff_r6;
  }
  uVar8 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar11 = (int)*(short *)(iVar11 + uVar8);
  }
  else {
    iVar11 = *(int *)(iVar11 + uVar8);
  }
  uVar8 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar11);
  uVar9 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(short)unaff_r10[1];
  uVar2 = (ushort)uVar8;
  if (0xdfffff < (uVar9 & 0xf00000)) {
    puVar5 = (undefined2 *)(unaff_r8 + (uVar9 & 0xffff));
    *puVar5 = (short)(uVar8 >> 0x10);
    puVar5[1] = uVar2;
    return;
  }
  if ((uVar9 & 0xf00000) < 0xc00000) {
    uVar9 = uVar9 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar9 >> 0x10])(uVar9,uVar8 >> 0x10);
    (*(code *)(&DAT_0b00121c)[uVar9 >> 0x10])(uVar9 + 2,uVar8 & 0xffff);
    return;
  }
  bVar14 = (byte)uVar8;
  if ((uVar9 & 0x1c) == 0) {
    FUN_0200ac7c(uVar8 >> 0x10);
    uVar9 = uVar8 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar17 = DAT_0b003630;
    uVar13 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar9 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar20 = (DAT_0b003638 & 1) == 0;
      uVar9 = DAT_0b003638 & 0xffff;
      if (bVar20) {
        puVar16 = &DAT_0209cbec + uVar9;
      }
      else {
        puVar16 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar18 = DAT_0b003630 & 0xffff;
      if (!bVar20) {
        (&DAT_0209cbec)[(int)puVar16] = bVar14;
      }
      uVar13 = uVar13 & 0xffff;
      if (bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
        puVar16[1] = bVar14;
      }
      if (!bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
      }
      uVar10 = uVar9 + uVar18 & 0xffff;
      uVar15 = uVar13;
      if (uVar13 != 0) {
        do {
          uVar15 = uVar15 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar10] = bVar14;
          uVar10 = uVar10 + uVar18 & 0xffff;
        } while (uVar15 != 0);
        uVar9 = DAT_0b003638;
        if (uVar13 == 0xffff && (uVar8 & 0xff) == 0) {
          DAT_0b003638 = uVar10;
          FUN_02007420();
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
      }
      DAT_0b003638 = uVar10;
      uVar9 = uVar9 & 0xfffe;
      if (uVar17 == 1) {
        uVar13 = uVar13 >> 1;
        uVar18 = 2;
      }
      do {
        if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
          if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
            if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
              bVar20 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
              bVar20 = true;
            }
            if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
              bVar20 = true;
            }
            if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
            }
            if (!bVar20) {
              FUN_020076d0(uVar9,*(undefined2 *)(&DAT_0209cbec + uVar9));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar11 = 0x200;
          }
          else {
            iVar11 = 0x280;
          }
          if (iVar11 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar13 = uVar13 - 1 & 0xffff;
        if (uVar13 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar9 = uVar9 + uVar18 & 0xfffe;
      } while( true );
    }
    uVar13 = DAT_0b00363c & 0xf;
    if (uVar13 == 3) {
      uVar9 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar9] = uVar2 & 0xeee;
      uVar2 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar8 & 0xe) << 1);
      if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar14 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar14 == 200) {
          bVar14 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar14 >> 5) * 0x40] = uVar2;
      }
      uVar8 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar9] = uVar2;
      DAT_0208f354 = 1;
      if (uVar9 == uVar8) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar13 == 5) {
      uVar8 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar8) {
        DAT_0b003638 = uVar8;
        return;
      }
      uVar9 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar8;
      *(ushort *)((int)&DAT_0b00364c + uVar9) = uVar2;
    }
    else if (uVar13 == 1) {
      uVar13 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar13) == uVar9) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar13) = uVar2;
      }
      else {
        (&DAT_0209cbec)[uVar13] = uVar3;
        (&DAT_0209cbed)[uVar13] = bVar14;
        uVar9 = (uVar8 & 0xffff) >> 8 | (uVar8 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar13) {
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (uVar13 < iVar11 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar13 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar13)) {
        bVar20 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar13 - DAT_023ddea0,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea4 <= uVar13) && (uVar13 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar13 - DAT_023ddea4,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea8 <= uVar13) && (uVar13 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar13 - DAT_023ddea8,uVar9);
      }
      if (!bVar20) {
        FUN_020076d0(uVar13,uVar9);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar13 = uVar8 >> 2 & 0x3c | uVar8 >> 0x1e;
    uVar9 = (uVar8 & 3) << 0xe | (uVar8 & 0x3fffffff) >> 0x10;
    if ((uVar8 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar9;
    DAT_0b00363c = uVar13;
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar8 >> 2 & 0x20) == 0) {
      return;
    }
  }
  else {
LAB_0200ac58:
    FUN_0200aaf8(uVar8 >> 0x10);
    uVar9 = (uVar8 & 0xffff) >> 2;
    if (DAT_020b4bf5 == '\0') {
      uVar13 = uVar8 & 0xff;
      uVar9 = (uVar8 & 0xffff) >> 8 & 0x1f;
      if ((uVar8 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar8 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar8 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar11 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar11 = 0;
      }
      if (uVar9 < 0xc) {
        iVar11 = 0;
      }
      (&DAT_020b4c18)[uVar9] = bVar14;
      if (iVar11 == 0) {
        switch(uVar9) {
        case 0:
          DAT_0b003644 = (byte)(uVar13 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar13 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar14 & 4;
          DAT_0b00362f = (byte)(uVar13 >> 6) & 1;
          uVar8 = uVar13 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar13 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar13 >> 4) & 1;
          DAT_023ddb06 = (char)uVar8;
          if (uVar8 == 0) {
            DAT_023dd370 = 0xe0;
            DAT_0b000004 = 0xe0;
          }
          else {
            DAT_023dd370 = 0xf0;
            DAT_0b000004 = 0xf0;
          }
          return;
        case 2:
          DAT_023ddea0 = (uVar8 & 0x38) * 0x400;
          DAT_023dde8c = &DAT_020acbec + (uVar8 & 0x38) * 0x200;
          if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
            DAT_023dc8a4 = 1;
          }
          ram0x023dd374 = DAT_023ddea0;
          DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
          return;
        case 3:
          DAT_023ddea8 = (uVar8 & 0x3e) * 0x400;
          if (DAT_023ddb05 == '\0') {
            iVar11 = 0x800;
          }
          else {
            iVar11 = 0x1000;
          }
          DAT_023dc8bc = iVar11 + DAT_023ddea8;
          return;
        case 4:
          DAT_023ddea4 = (uVar8 & 7) * 0x2000;
          DAT_023dde90 = &DAT_020acbec + (uVar8 & 7) * 0x1000;
          if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
            DAT_023dc8a8 = 1;
          }
          DAT_023dd378 = DAT_023ddea4;
          DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
          return;
        case 5:
          iVar11 = (uVar8 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar11;
          DAT_023ddeac = iVar11;
          return;
        case 7:
          DAT_0b003640 = uVar8 & 0x3f;
          DAT_020b4bf7 = (char)(uVar8 & 0x3f);
          return;
        case 10:
          DAT_020b4bf8 = (short)uVar13;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar13 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar13 >> 2) & 1;
          DAT_023dcdb0 = bVar14 & 3;
          if ((DAT_023cb610 & 4) == 0) {
            DAT_023dcea8 = FUN_0200c280;
          }
          else {
            switch(bVar14 & 3) {
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
          uVar9 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar8 & 0x81) != 0;
          if ((uVar9 != (uVar13 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar9)) {
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
          DAT_023dcea4 = (ushort)((uVar8 << 0x1a) >> 0x10);
          DAT_023dcdaa = DAT_023dcea4 + 0x380;
          return;
        case 0xf:
          DAT_0b003630 = uVar13;
          return;
        case 0x10:
          uVar13 = uVar13 >> 4 & 3;
          uVar8 = uVar8 & 3;
          uVar9 = uVar13 | uVar8 << 4;
          if (uVar9 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar9;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar13 + uVar8 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar8];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar8;
          DAT_023dd372._0_1_ = (char)uVar13;
          return;
        case 0x11:
          uVar9 = (uVar8 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar13 >> 7);
          DAT_023ddb04 = (char)uVar9;
          if (uVar13 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar9);
          }
          else {
            DAT_023dcfa8 = (uVar8 & 0x1f) * -2 + 1;
            if (1 < uVar9) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          DAT_023dde94 = (char)(uVar13 >> 7);
          DAT_020b4c10 = (uVar8 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar8 & 0x1f);
          return;
        case 0x13:
          DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar13;
          return;
        case 0x14:
          DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar13 << 8;
          return;
        case 0x15:
          DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar13 << 1;
          return;
        case 0x16:
          DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar13 << 9;
          return;
        case 0x17:
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar8 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar13 >> 6);
        }
        return;
      }
      return;
    }
    DAT_0b00363c = DAT_0b00363c & 3 | uVar9 & 0x3c;
    DAT_0b003638 = DAT_0b003638 & 0x3fff | (uVar8 & 3) << 0xe;
    DAT_020b4bf5 = '\0';
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar9 & 0x20) == 0) {
      return;
    }
  }
  uVar13 = DAT_0b003634;
  uVar8 = DAT_0b003630;
  uVar9 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar9 = 0xffff;
  }
  DAT_020b4c00 = uVar9;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar9 = DAT_0b003634 & 0xfffffe;
    puVar6 = (ushort *)FUN_02003cc8(uVar9);
    uVar10 = DAT_0b003638;
    uVar15 = DAT_020b4c00;
    uVar18 = DAT_020b4bec;
    uVar12 = DAT_0b00363c & 0xf;
    uVar17 = DAT_020b4c00 & 0xffff;
    if (uVar12 == 3) {
      bVar14 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar9 = uVar9 << 0xf;
      if (bVar14 == 200) {
        bVar14 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar15 = (uint)DAT_020b4bf7;
      do {
        uVar12 = (uint)*puVar6;
        uVar10 = (DAT_0b003638 & 0x7e) >> 1;
        uVar2 = (ushort)((uVar12 & 0xe0) << 2) | (ushort)((uVar12 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar12 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar8;
        if ((uVar12 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar10]) {
          (&DAT_023dc6b0)[uVar10] = (short)(uVar12 & 0xeee);
          if ((uVar10 != 0) && (uVar18 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar14 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar10] = uVar2;
          if (uVar10 == uVar15) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar17 = uVar17 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar12 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar15 = DAT_0b003638 & 0x7f;
        uVar18 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar15;
        if (0x4f < uVar15) break;
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar18) = *puVar6;
        puVar6 = puVar6 + 1;
        DAT_0b003638 = uVar8 + uVar15;
      } while (uVar17 != 0);
      DAT_020b4bfc = uVar17;
      DAT_020b4c00 = uVar17;
      DAT_0b003634 = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar12 != 1) {
      DAT_020b4bfc = uVar17;
      DAT_020b4c00 = uVar17;
      DAT_0b003634 = uVar9;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar18 = uVar8 & 0xffff;
      uVar9 = uVar9 << 0xf;
      uStack_44 = 0;
      puVar7 = puVar6;
      uVar12 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&DAT_0209cbec + uVar12);
        uVar1 = *puVar7;
        if (uVar1 != uVar2) {
          *(ushort *)(&DAT_0209cbec + uVar12) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar12 >> 1] = uVar1 != uVar2;
        uVar12 = uVar12 + uVar18 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar17 != 0);
      uVar19 = uVar12;
      if (uVar12 <= uVar10) {
        uVar19 = uVar12 + 0x10000;
      }
      uVar9 = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar9;
        return;
      }
      if (uVar10 < DAT_023ddeac) {
LAB_0200aa30:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + DAT_023ddeac <= uVar10) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        bVar20 = iVar11 + DAT_023ddeac < uVar12;
        DAT_020b4c15 = 1;
      }
      uVar13 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar12)) && (bVar20)) {
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
          if ((DAT_023dc8a0 >> 1 <= uVar15) && (DAT_023dc8a4 = 1, !bVar4)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar9;
            return;
          }
          uVar17 = uStack_2c - DAT_023ddea0;
          bVar20 = (int)uVar17 < 0;
          puVar7 = puVar6;
          if (bVar20) {
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar17 = uStack_2c;
          }
          if (bVar20) {
            uVar17 = 0;
          }
          uVar15 = uVar19 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea0) {
            uVar15 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar7,uVar17,uVar8,uVar15);
          puVar7 = (ushort *)&DAT_0b003638;
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        else {
          puVar7 = (ushort *)0x0;
          bVar20 = false;
        }
        if (bVar4) {
          if (DAT_023dc8a0 >> 1 <= DAT_020b4c00) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a8 = 1;
            DAT_0b003634 = uVar9;
            return;
          }
          iVar11 = uStack_2c - DAT_023ddea4;
          bVar20 = iVar11 < 0;
          if (bVar20) {
            iVar11 = 0;
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar7 = puVar6;
          }
          uVar17 = uVar19 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea4) {
            uVar17 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar7,iVar11,uVar8,uVar17);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar6,uStack_2c - DAT_023ddea8 & 0xffff,uVar8,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar20) {
          uVar8 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar8) {
            do {
              FUN_020076d0(uStack_2c,*puVar6);
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
            uVar13 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar6);
              }
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar13 = 0;
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
          }
        }
      }
    }
    else {
      uVar8 = uVar8 & 0xffff;
      puVar7 = puVar6;
      uVar18 = uVar17;
      uVar19 = uStack_2c;
      do {
        uVar2 = *puVar7;
        uVar18 = uVar18 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar19] = (char)(uVar2 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar13 & 0xfe0000;
        (&DAT_0209cbed)[uVar19] = (char)uVar2;
        uVar19 = uVar19 + uVar8 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      if (uVar10 < DAT_023ddeac) {
LAB_0200aa20:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + DAT_023ddeac <= uVar10) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        bVar20 = iVar11 + DAT_023ddeac < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar13 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar13 = uVar17;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar17) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar17 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar13 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar13 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar13) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar13 = uVar13 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar13 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar13 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar13 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar13) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar7 = puVar6;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar13 = uVar13 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar13 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar13 = 0;
        }
        if (!bVar20) {
          uVar17 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar8 & 0xffff;
            uVar17 = uVar17 - 1 & 0xffff;
            uVar13 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    DAT_0b003638 = uVar19 & 0xffff;
    DAT_020b4bfc = uVar13;
    DAT_020b4c00 = uVar13;
    DAT_0b003634 = uVar9;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar13 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar15 = uVar13 + uVar9;
    uVar17 = DAT_0b003630 & 0xffff;
    uVar18 = DAT_0b003638;
    do {
      uVar10 = uVar13 ^ 1;
      uVar13 = uVar13 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar18 ^ 1] = (&DAT_0209cbec)[uVar10];
      uVar18 = uVar18 + uVar17 & 0xffff;
    } while (uVar13 != (uVar15 & 0xffff));
    uVar13 = DAT_0b003638;
    if (uVar8 == 1) {
      uVar9 = uVar9 >> 1;
      uVar17 = 2;
    }
    do {
      DAT_0b003638 = uVar18;
      uVar13 = uVar13 & 0xfffe;
      if (uVar13 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar13 < DAT_023dcea4) || (DAT_023dcdaa <= uVar13)) {
          if ((uVar13 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar13)) {
            bVar20 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar13 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar13));
            bVar20 = true;
          }
          if ((DAT_023ddea4 <= uVar13) && (uVar13 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar13 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar13));
            bVar20 = true;
          }
          if ((DAT_023ddea8 <= uVar13) && (uVar13 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar13 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar13));
          }
          if (!bVar20) {
            FUN_020076d0(uVar13,*(undefined2 *)(&DAT_0209cbec + uVar13));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + DAT_023ddeac <= uVar13) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar9 = uVar9 - 1 & 0xffff;
      if (uVar9 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar13 = uVar13 + uVar17;
      uVar18 = DAT_0b003638;
    } while( true );
  }
  return;
}

