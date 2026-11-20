// Analysis annotation
// Role — m68k move long
// Basis — dispatch table
// Reached by 8 M68000 opcode-table slots. Decoded forms include move long (8). Example
// opcode words are 0x23F0, 0x23F1, 0x23F2, 0x23F3, 0x23F4.

// rea decompile_all
// name: m68k_dispatch_02019e90
// address: 0x2019e90
// body: available
// range: 0x2019e90-0x2019ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_02019e90(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  bool bVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
  int unaff_r6;
  uint uVar16;
  uint uVar17;
  int unaff_r8;
  uint uVar18;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar2 = *unaff_r10;
  iVar9 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar9 = unaff_r6;
  }
  uVar15 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar9 = (int)*(short *)(iVar9 + uVar15);
  }
  else {
    iVar9 = *(int *)(iVar9 + uVar15);
  }
  uVar7 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar9);
  uVar2 = unaff_r10[2];
  uVar15 = (unaff_r10[1] & 0xf0) * 0x10000;
  uVar1 = (ushort)uVar7;
  if (0xdfffff < uVar15) {
    *(undefined2 *)(unaff_r8 + (uint)uVar2) = (short)(uVar7 >> 0x10);
    ((undefined2 *)(unaff_r8 + (uint)uVar2))[1] = uVar1;
    return;
  }
  if (uVar15 < 0xc00000) {
    uVar15 = CONCAT22(unaff_r10[1],uVar2) & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar15 >> 0x10])(uVar15,uVar7 >> 0x10);
    (*(code *)(&DAT_0b00121c)[uVar15 >> 0x10])(uVar15 + 2,uVar7 & 0xffff);
    return;
  }
  bVar12 = (byte)uVar7;
  if ((uVar2 & 0x1c) == 0) {
    FUN_0200ac7c(uVar7 >> 0x10);
    uVar15 = uVar7 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar16 = DAT_0b003630;
    uVar11 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar15 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar19 = (DAT_0b003638 & 1) == 0;
      uVar15 = DAT_0b003638 & 0xffff;
      if (bVar19) {
        puVar14 = &DAT_0209cbec + uVar15;
      }
      else {
        puVar14 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar17 = DAT_0b003630 & 0xffff;
      if (!bVar19) {
        (&DAT_0209cbec)[(int)puVar14] = bVar12;
      }
      uVar11 = uVar11 & 0xffff;
      if (bVar19) {
        (&DAT_0209cbec)[uVar15] = uVar3;
        puVar14[1] = bVar12;
      }
      if (!bVar19) {
        (&DAT_0209cbec)[uVar15] = uVar3;
      }
      uVar8 = uVar15 + uVar17 & 0xffff;
      uVar13 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar13 = uVar13 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar8] = bVar12;
          uVar8 = uVar8 + uVar17 & 0xffff;
        } while (uVar13 != 0);
        uVar15 = DAT_0b003638;
        if (uVar11 == 0xffff && (uVar7 & 0xff) == 0) {
          DAT_0b003638 = uVar8;
          FUN_02007420();
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
      }
      DAT_0b003638 = uVar8;
      uVar15 = uVar15 & 0xfffe;
      if (uVar16 == 1) {
        uVar11 = uVar11 >> 1;
        uVar17 = 2;
      }
      do {
        if (uVar15 < DAT_023ddeac) {
LAB_0200adc4:
          if ((uVar15 < DAT_023dcea4) || (DAT_023dcdaa <= uVar15)) {
            if ((uVar15 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar15)) {
              bVar19 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar15 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar15));
              bVar19 = true;
            }
            if ((DAT_023ddea4 <= uVar15) && (uVar15 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar15 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar15));
              bVar19 = true;
            }
            if ((DAT_023ddea8 <= uVar15) && (uVar15 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar15 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar15));
            }
            if (!bVar19) {
              FUN_020076d0(uVar15,*(undefined2 *)(&DAT_0209cbec + uVar15));
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
          if (iVar9 + DAT_023ddeac <= uVar15) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar11 = uVar11 - 1 & 0xffff;
        if (uVar11 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar15 = uVar15 + uVar17 & 0xfffe;
      } while( true );
    }
    uVar11 = DAT_0b00363c & 0xf;
    if (uVar11 == 3) {
      uVar15 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar15] = uVar1 & 0xeee;
      uVar2 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar15 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar12 == 200) {
          bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar15 + (uint)(bVar12 >> 5) * 0x40] = uVar2;
      }
      uVar7 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar15] = uVar2;
      DAT_0208f354 = 1;
      if (uVar15 == uVar7) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar11 == 5) {
      uVar15 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar15) {
        DAT_0b003638 = uVar15;
        return;
      }
      uVar7 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar15;
      *(ushort *)((int)&DAT_0b00364c + uVar7) = uVar1;
    }
    else if (uVar11 == 1) {
      uVar11 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar11) == uVar15) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar11) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar11] = uVar3;
        (&DAT_0209cbed)[uVar11] = bVar12;
        uVar15 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar11) {
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        if (uVar11 < iVar9 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar11 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar11)) {
        bVar19 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar11 - DAT_023ddea0,uVar15);
        bVar19 = true;
      }
      if ((DAT_023ddea4 <= uVar11) && (uVar11 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar11 - DAT_023ddea4,uVar15);
        bVar19 = true;
      }
      if ((DAT_023ddea8 <= uVar11) && (uVar11 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar11 - DAT_023ddea8,uVar15);
      }
      if (!bVar19) {
        FUN_020076d0(uVar11,uVar15);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar11 = uVar7 >> 2 & 0x3c | uVar7 >> 0x1e;
    uVar15 = (uVar7 & 3) << 0xe | (uVar7 & 0x3fffffff) >> 0x10;
    if ((uVar7 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar15;
    DAT_0b00363c = uVar11;
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar7 >> 2 & 0x20) == 0) {
      return;
    }
  }
  else {
LAB_0200ac58:
    FUN_0200aaf8(uVar7 >> 0x10);
    uVar15 = (uVar7 & 0xffff) >> 2;
    if (DAT_020b4bf5 == '\0') {
      uVar11 = uVar7 & 0xff;
      uVar15 = (uVar7 & 0xffff) >> 8 & 0x1f;
      if ((uVar7 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar7 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar7 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar9 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar9 = 0;
      }
      if (uVar15 < 0xc) {
        iVar9 = 0;
      }
      (&DAT_020b4c18)[uVar15] = bVar12;
      if (iVar9 == 0) {
        switch(uVar15) {
        case 0:
          DAT_0b003644 = (byte)(uVar11 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar11 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar12 & 4;
          DAT_0b00362f = (byte)(uVar11 >> 6) & 1;
          uVar15 = uVar11 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar11 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar11 >> 4) & 1;
          DAT_023ddb06 = (char)uVar15;
          if (uVar15 == 0) {
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
            iVar9 = 0x800;
          }
          else {
            iVar9 = 0x1000;
          }
          DAT_023dc8bc = iVar9 + DAT_023ddea8;
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
          iVar9 = (uVar7 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar9;
          DAT_023ddeac = iVar9;
          return;
        case 7:
          DAT_0b003640 = uVar7 & 0x3f;
          DAT_020b4bf7 = (char)(uVar7 & 0x3f);
          return;
        case 10:
          DAT_020b4bf8 = (short)uVar11;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar11 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar11 >> 2) & 1;
          DAT_023dcdb0 = bVar12 & 3;
          if ((DAT_023cb610 & 4) == 0) {
            DAT_023dcea8 = FUN_0200c280;
          }
          else {
            switch(bVar12 & 3) {
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
          uVar15 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar7 & 0x81) != 0;
          if ((uVar15 != (uVar11 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar15)) {
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
          DAT_0b003630 = uVar11;
          return;
        case 0x10:
          uVar11 = uVar11 >> 4 & 3;
          uVar7 = uVar7 & 3;
          uVar15 = uVar11 | uVar7 << 4;
          if (uVar15 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar15;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar11 + uVar7 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar7;
          DAT_023dd372._0_1_ = (char)uVar11;
          return;
        case 0x11:
          uVar15 = (uVar7 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar11 >> 7);
          DAT_023ddb04 = (char)uVar15;
          if (uVar11 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar15);
          }
          else {
            DAT_023dcfa8 = (uVar7 & 0x1f) * -2 + 1;
            if (1 < uVar15) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          DAT_023dde94 = (char)(uVar11 >> 7);
          DAT_020b4c10 = (uVar7 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar7 & 0x1f);
          return;
        case 0x13:
          DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar11;
          return;
        case 0x14:
          DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar11 << 8;
          return;
        case 0x15:
          DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar11 << 1;
          return;
        case 0x16:
          DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar11 << 9;
          return;
        case 0x17:
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar7 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar11 >> 6);
        }
        return;
      }
      return;
    }
    DAT_0b00363c = DAT_0b00363c & 3 | uVar15 & 0x3c;
    DAT_0b003638 = DAT_0b003638 & 0x3fff | (uVar7 & 3) << 0xe;
    DAT_020b4bf5 = '\0';
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar15 & 0x20) == 0) {
      return;
    }
  }
  uVar11 = DAT_0b003634;
  uVar15 = DAT_0b003630;
  uVar7 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar7 = 0xffff;
  }
  DAT_020b4c00 = uVar7;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar7 = DAT_0b003634 & 0xfffffe;
    puVar5 = (ushort *)FUN_02003cc8(uVar7);
    uVar8 = DAT_0b003638;
    uVar13 = DAT_020b4c00;
    uVar17 = DAT_020b4bec;
    uVar10 = DAT_0b00363c & 0xf;
    uVar16 = DAT_020b4c00 & 0xffff;
    if (uVar10 == 3) {
      bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar7 = uVar7 << 0xf;
      if (bVar12 == 200) {
        bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar13 = (uint)DAT_020b4bf7;
      do {
        uVar10 = (uint)*puVar5;
        uVar8 = (DAT_0b003638 & 0x7e) >> 1;
        uVar2 = (ushort)((uVar10 & 0xe0) << 2) | (ushort)((uVar10 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar10 & 0xe) << 1);
        uVar7 = uVar7 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar15;
        if ((uVar10 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar8]) {
          (&DAT_023dc6b0)[uVar8] = (short)(uVar10 & 0xeee);
          if ((uVar8 != 0) && (uVar17 < 0xdf)) {
            (&DAT_023dc8ca)[uVar8 + (uint)(bVar12 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar8] = uVar2;
          if (uVar8 == uVar13) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar16 = uVar16 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar16 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar11 & 0xfe0000 | uVar7 >> 0xf;
      return;
    }
    if (uVar10 == 5) {
      uVar7 = uVar7 << 0xf;
      do {
        uVar13 = DAT_0b003638 & 0x7f;
        uVar17 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar13;
        if (0x4f < uVar13) break;
        uVar16 = uVar16 - 1 & 0xffff;
        uVar7 = uVar7 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar17) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar15 + uVar13;
      } while (uVar16 != 0);
      DAT_020b4bfc = uVar16;
      DAT_020b4c00 = uVar16;
      DAT_0b003634 = uVar11 & 0xfe0000 | uVar7 >> 0xf;
      return;
    }
    if (uVar10 != 1) {
      DAT_020b4bfc = uVar16;
      DAT_020b4c00 = uVar16;
      DAT_0b003634 = uVar7;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar17 = uVar15 & 0xffff;
      uVar7 = uVar7 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar10 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&DAT_0209cbec + uVar10);
        uVar1 = *puVar6;
        if (uVar1 != uVar2) {
          *(ushort *)(&DAT_0209cbec + uVar10) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar16 = uVar16 - 1 & 0xffff;
        uVar7 = uVar7 + 0x8000;
        (&DAT_020acbec)[uVar10 >> 1] = uVar1 != uVar2;
        uVar10 = uVar10 + uVar17 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar16 != 0);
      uVar18 = uVar10;
      if (uVar10 <= uVar8) {
        uVar18 = uVar10 + 0x10000;
      }
      uVar7 = uVar11 & 0xfe0000 | uVar7 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar7;
        return;
      }
      if (uVar8 < DAT_023ddeac) {
LAB_0200aa30:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        if (iVar9 + DAT_023ddeac <= uVar8) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        bVar19 = iVar9 + DAT_023ddeac < uVar10;
        DAT_020b4c15 = 1;
      }
      uVar11 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa < uVar10)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          if (DAT_023ddea0 < uVar18) {
            if (DAT_023dc8b4 < uVar18) {
              bVar19 = false;
            }
            else {
              bVar19 = true;
            }
          }
          else {
            bVar19 = false;
          }
        }
        else {
          bVar19 = true;
        }
        if ((uStack_2c < DAT_023ddea4) || (DAT_023dc8b8 <= uStack_2c)) {
          if (DAT_023ddea4 < uVar18) {
            if (DAT_023dc8b8 < uVar18) {
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
        if (bVar19) {
          if ((DAT_023dc8a0 >> 1 <= uVar13) && (DAT_023dc8a4 = 1, !bVar4)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar7;
            return;
          }
          uVar16 = uStack_2c - DAT_023ddea0;
          bVar19 = (int)uVar16 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar16 = uStack_2c;
          }
          if (bVar19) {
            uVar16 = 0;
          }
          uVar13 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar13 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar16,uVar15,uVar13);
          puVar6 = (ushort *)&DAT_0b003638;
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        else {
          puVar6 = (ushort *)0x0;
          bVar19 = false;
        }
        if (bVar4) {
          if (DAT_023dc8a0 >> 1 <= DAT_020b4c00) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a8 = 1;
            DAT_0b003634 = uVar7;
            return;
          }
          iVar9 = uStack_2c - DAT_023ddea4;
          bVar19 = iVar9 < 0;
          if (bVar19) {
            iVar9 = 0;
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar19) {
            puVar6 = puVar5;
          }
          uVar16 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar16 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar9,uVar15,uVar16);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar5,uStack_2c - DAT_023ddea8 & 0xffff,uVar15,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar19) {
          uVar15 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar15) {
            do {
              FUN_020076d0(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar17 & 0xffff;
              uVar15 = uVar15 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar15 != 0);
            uVar11 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar17 & 0xffff;
              uVar15 = uVar15 - 1 & 0xffff;
              uVar11 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar15 != 0);
          }
        }
      }
    }
    else {
      uVar15 = uVar15 & 0xffff;
      puVar6 = puVar5;
      uVar17 = uVar16;
      uVar18 = uStack_2c;
      do {
        uVar2 = *puVar6;
        uVar17 = uVar17 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar18] = (char)(uVar2 >> 8);
        uVar7 = uVar7 + 2 & 0x1ffff | uVar11 & 0xfe0000;
        (&DAT_0209cbed)[uVar18] = (char)uVar2;
        uVar18 = uVar18 + uVar15 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      if (uVar8 < DAT_023ddeac) {
LAB_0200aa20:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        if (iVar9 + DAT_023ddeac <= uVar8) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar9 = 0x200;
        }
        else {
          iVar9 = 0x280;
        }
        bVar19 = iVar9 + DAT_023ddeac < uVar18;
        DAT_020b4c15 = 1;
      }
      uVar11 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar11 = uVar16;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar16) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar15;
            uVar16 = uVar16 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar16 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar11 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar11 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar11) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar15;
            uVar11 = uVar11 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar11 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar11 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar11 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar16 = 0x400;
          }
          else {
            uVar16 = 0x800;
          }
          if (uVar16 <= uVar11) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar15;
            uVar11 = uVar11 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar11 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar11 = 0;
        }
        if (!bVar19) {
          uVar16 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar15 & 0xffff;
            uVar16 = uVar16 - 1 & 0xffff;
            uVar11 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar16 != 0);
        }
      }
    }
    DAT_0b003638 = uVar18 & 0xffff;
    DAT_020b4bfc = uVar11;
    DAT_020b4c00 = uVar11;
    DAT_0b003634 = uVar7;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar11 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar13 = uVar11 + uVar7;
    uVar16 = DAT_0b003630 & 0xffff;
    uVar17 = DAT_0b003638;
    do {
      uVar8 = uVar11 ^ 1;
      uVar11 = uVar11 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar17 ^ 1] = (&DAT_0209cbec)[uVar8];
      uVar17 = uVar17 + uVar16 & 0xffff;
    } while (uVar11 != (uVar13 & 0xffff));
    uVar11 = DAT_0b003638;
    if (uVar15 == 1) {
      uVar7 = uVar7 >> 1;
      uVar16 = 2;
    }
    do {
      DAT_0b003638 = uVar17;
      uVar11 = uVar11 & 0xfffe;
      if (uVar11 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar11 < DAT_023dcea4) || (DAT_023dcdaa <= uVar11)) {
          if ((uVar11 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar11)) {
            bVar19 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar11 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar11));
            bVar19 = true;
          }
          if ((DAT_023ddea4 <= uVar11) && (uVar11 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar11 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar11));
            bVar19 = true;
          }
          if ((DAT_023ddea8 <= uVar11) && (uVar11 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar11 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar11));
          }
          if (!bVar19) {
            FUN_020076d0(uVar11,*(undefined2 *)(&DAT_0209cbec + uVar11));
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
        if (iVar9 + DAT_023ddeac <= uVar11) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar7 = uVar7 - 1 & 0xffff;
      if (uVar7 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar11 = uVar11 + uVar16;
      uVar17 = DAT_0b003638;
    } while( true );
  }
  return;
}

