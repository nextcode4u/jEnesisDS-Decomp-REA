// rea decompile_all
// name: m68k_dispatch_0201bb5c
// address: 0x201bb5c
// body: available
// range: 0x201bb5c-0x201bbbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201bb5c(void)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  bool bVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  undefined1 *puVar18;
  int unaff_r6;
  uint uVar19;
  uint uVar20;
  int unaff_r8;
  uint uVar21;
  ushort *unaff_r10;
  bool bVar22;
  uint uStack_44;
  uint uStack_2c;
  
  piVar1 = (int *)(unaff_r6 + 0x54);
  puVar2 = (uint *)(unaff_r6 + 0x9c);
  uVar4 = *unaff_r10;
  if ((uVar4 & 0x8000) != 0) {
    unaff_r6 = unaff_r6 + 0x20;
  }
  uVar10 = (uVar4 & 0x7000) >> 10;
  if ((uVar4 & 0x800) == 0) {
    iVar13 = (int)*(short *)(unaff_r6 + uVar10);
  }
  else {
    iVar13 = *(int *)(unaff_r6 + uVar10);
  }
  uVar10 = FUN_010040fc(((int)unaff_r10 - *piVar1 | *puVar2) + (int)(char)uVar4 + iVar13);
  uVar11 = (uint)(short)unaff_r10[1];
  uVar4 = (ushort)uVar10;
  if (0xdfffff < (uVar11 & 0xf00000)) {
    puVar7 = (undefined2 *)(unaff_r8 + (uint)unaff_r10[1]);
    *puVar7 = (short)(uVar10 >> 0x10);
    puVar7[1] = uVar4;
    return;
  }
  if ((uVar11 & 0xf00000) < 0xc00000) {
    uVar11 = uVar11 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar11 >> 0x10])(uVar11,uVar10 >> 0x10);
    (*(code *)(&DAT_0b00121c)[uVar11 >> 0x10])(uVar11 + 2,uVar10 & 0xffff);
    return;
  }
  bVar16 = (byte)uVar10;
  if ((uVar11 & 0x1c) == 0) {
    FUN_0200ac7c(uVar10 >> 0x10);
    uVar11 = uVar10 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar19 = DAT_0b003630;
    uVar15 = DAT_020b4c00;
    uVar5 = (undefined1)(uVar11 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar22 = (DAT_0b003638 & 1) == 0;
      uVar11 = DAT_0b003638 & 0xffff;
      if (bVar22) {
        puVar18 = &DAT_0209cbec + uVar11;
      }
      else {
        puVar18 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar20 = DAT_0b003630 & 0xffff;
      if (!bVar22) {
        (&DAT_0209cbec)[(int)puVar18] = bVar16;
      }
      uVar15 = uVar15 & 0xffff;
      if (bVar22) {
        (&DAT_0209cbec)[uVar11] = uVar5;
        puVar18[1] = bVar16;
      }
      if (!bVar22) {
        (&DAT_0209cbec)[uVar11] = uVar5;
      }
      uVar12 = uVar11 + uVar20 & 0xffff;
      uVar17 = uVar15;
      if (uVar15 != 0) {
        do {
          uVar17 = uVar17 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar12] = bVar16;
          uVar12 = uVar12 + uVar20 & 0xffff;
        } while (uVar17 != 0);
        uVar11 = DAT_0b003638;
        if (uVar15 == 0xffff && (uVar10 & 0xff) == 0) {
          DAT_0b003638 = uVar12;
          FUN_02007420();
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
      }
      DAT_0b003638 = uVar12;
      uVar11 = uVar11 & 0xfffe;
      if (uVar19 == 1) {
        uVar15 = uVar15 >> 1;
        uVar20 = 2;
      }
      do {
        if (uVar11 < DAT_023ddeac) {
LAB_0200adc4:
          if ((uVar11 < DAT_023dcea4) || (DAT_023dcdaa <= uVar11)) {
            if ((uVar11 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar11)) {
              bVar22 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar11 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar11));
              bVar22 = true;
            }
            if ((DAT_023ddea4 <= uVar11) && (uVar11 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar11 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar11));
              bVar22 = true;
            }
            if ((DAT_023ddea8 <= uVar11) && (uVar11 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar11 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar11));
            }
            if (!bVar22) {
              FUN_020076d0(uVar11,*(undefined2 *)(&DAT_0209cbec + uVar11));
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
          if (iVar13 + DAT_023ddeac <= uVar11) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar15 = uVar15 - 1 & 0xffff;
        if (uVar15 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar11 = uVar11 + uVar20 & 0xfffe;
      } while( true );
    }
    uVar15 = DAT_0b00363c & 0xf;
    if (uVar15 == 3) {
      uVar11 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar11] = uVar4 & 0xeee;
      uVar4 = (ushort)((uVar10 & 0xe0) << 2) | (ushort)((uVar10 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar10 & 0xe) << 1);
      if ((uVar11 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar16 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar16 == 200) {
          bVar16 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar16] = &DAT_023dc8ca + (uint)(bVar16 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar11 + (uint)(bVar16 >> 5) * 0x40] = uVar4;
      }
      uVar10 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar11] = uVar4;
      DAT_0208f354 = 1;
      if (uVar11 == uVar10) {
        _DAT_05000200 = uVar4;
      }
    }
    else if (uVar15 == 5) {
      uVar10 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar10) {
        DAT_0b003638 = uVar10;
        return;
      }
      uVar11 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar10;
      *(ushort *)((int)&DAT_0b00364c + uVar11) = uVar4;
    }
    else if (uVar15 == 1) {
      uVar15 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar15) == uVar11) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar15) = uVar4;
      }
      else {
        (&DAT_0209cbec)[uVar15] = uVar5;
        (&DAT_0209cbed)[uVar15] = bVar16;
        uVar11 = (uVar10 & 0xffff) >> 8 | (uVar10 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar15) {
        if (DAT_023ddb05 == '\0') {
          iVar13 = 0x200;
        }
        else {
          iVar13 = 0x280;
        }
        if (uVar15 < iVar13 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar15 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar15)) {
        bVar22 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar15 - DAT_023ddea0,uVar11);
        bVar22 = true;
      }
      if ((DAT_023ddea4 <= uVar15) && (uVar15 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar15 - DAT_023ddea4,uVar11);
        bVar22 = true;
      }
      if ((DAT_023ddea8 <= uVar15) && (uVar15 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar15 - DAT_023ddea8,uVar11);
      }
      if (!bVar22) {
        FUN_020076d0(uVar15,uVar11);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar15 = uVar10 >> 2 & 0x3c | uVar10 >> 0x1e;
    uVar11 = (uVar10 & 3) << 0xe | (uVar10 & 0x3fffffff) >> 0x10;
    if ((uVar10 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar11;
    DAT_0b00363c = uVar15;
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar10 >> 2 & 0x20) == 0) {
      return;
    }
  }
  else {
LAB_0200ac58:
    FUN_0200aaf8(uVar10 >> 0x10);
    uVar11 = (uVar10 & 0xffff) >> 2;
    if (DAT_020b4bf5 == '\0') {
      uVar15 = uVar10 & 0xff;
      uVar11 = (uVar10 & 0xffff) >> 8 & 0x1f;
      if ((uVar10 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar10 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar10 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar13 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar13 = 0;
      }
      if (uVar11 < 0xc) {
        iVar13 = 0;
      }
      (&DAT_020b4c18)[uVar11] = bVar16;
      if (iVar13 == 0) {
        switch(uVar11) {
        case 0:
          DAT_0b003644 = (byte)(uVar15 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar15 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar16 & 4;
          DAT_0b00362f = (byte)(uVar15 >> 6) & 1;
          uVar10 = uVar15 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar15 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar15 >> 4) & 1;
          DAT_023ddb06 = (char)uVar10;
          if (uVar10 == 0) {
            DAT_023dd370 = 0xe0;
            DAT_0b000004 = 0xe0;
          }
          else {
            DAT_023dd370 = 0xf0;
            DAT_0b000004 = 0xf0;
          }
          return;
        case 2:
          DAT_023ddea0 = (uVar10 & 0x38) * 0x400;
          DAT_023dde8c = &DAT_020acbec + (uVar10 & 0x38) * 0x200;
          if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
            DAT_023dc8a4 = 1;
          }
          ram0x023dd374 = DAT_023ddea0;
          DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
          return;
        case 3:
          DAT_023ddea8 = (uVar10 & 0x3e) * 0x400;
          if (DAT_023ddb05 == '\0') {
            iVar13 = 0x800;
          }
          else {
            iVar13 = 0x1000;
          }
          DAT_023dc8bc = iVar13 + DAT_023ddea8;
          return;
        case 4:
          DAT_023ddea4 = (uVar10 & 7) * 0x2000;
          DAT_023dde90 = &DAT_020acbec + (uVar10 & 7) * 0x1000;
          if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
            DAT_023dc8a8 = 1;
          }
          DAT_023dd378 = DAT_023ddea4;
          DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
          return;
        case 5:
          iVar13 = (uVar10 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar13;
          DAT_023ddeac = iVar13;
          return;
        case 7:
          DAT_0b003640 = uVar10 & 0x3f;
          DAT_020b4bf7 = (char)(uVar10 & 0x3f);
          return;
        case 10:
          DAT_020b4bf8 = (short)uVar15;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar15 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar15 >> 2) & 1;
          DAT_023dcdb0 = bVar16 & 3;
          if ((DAT_023cb610 & 4) == 0) {
            DAT_023dcea8 = FUN_0200c280;
          }
          else {
            switch(bVar16 & 3) {
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
          DAT_023ddb05 = (uVar10 & 0x81) != 0;
          if ((uVar11 != (uVar15 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar11)) {
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
          DAT_023dcea4 = (ushort)((uVar10 << 0x1a) >> 0x10);
          DAT_023dcdaa = DAT_023dcea4 + 0x380;
          return;
        case 0xf:
          DAT_0b003630 = uVar15;
          return;
        case 0x10:
          uVar15 = uVar15 >> 4 & 3;
          uVar10 = uVar10 & 3;
          uVar11 = uVar15 | uVar10 << 4;
          if (uVar11 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar11;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar15 + uVar10 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar10];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar10;
          DAT_023dd372._0_1_ = (char)uVar15;
          return;
        case 0x11:
          uVar11 = (uVar10 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar15 >> 7);
          DAT_023ddb04 = (char)uVar11;
          if (uVar15 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar11);
          }
          else {
            DAT_023dcfa8 = (uVar10 & 0x1f) * -2 + 1;
            if (1 < uVar11) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          DAT_023dde94 = (char)(uVar15 >> 7);
          DAT_020b4c10 = (uVar10 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar10 & 0x1f);
          return;
        case 0x13:
          DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar15;
          return;
        case 0x14:
          DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar15 << 8;
          return;
        case 0x15:
          DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar15 << 1;
          return;
        case 0x16:
          DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar15 << 9;
          return;
        case 0x17:
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar10 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar15 >> 6);
        }
        return;
      }
      return;
    }
    DAT_0b00363c = DAT_0b00363c & 3 | uVar11 & 0x3c;
    DAT_0b003638 = DAT_0b003638 & 0x3fff | (uVar10 & 3) << 0xe;
    DAT_020b4bf5 = '\0';
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar11 & 0x20) == 0) {
      return;
    }
  }
  uVar15 = DAT_0b003634;
  uVar10 = DAT_0b003630;
  uVar11 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar11 = 0xffff;
  }
  DAT_020b4c00 = uVar11;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar11 = DAT_0b003634 & 0xfffffe;
    puVar8 = (ushort *)FUN_02003cc8(uVar11);
    uVar12 = DAT_0b003638;
    uVar17 = DAT_020b4c00;
    uVar20 = DAT_020b4bec;
    uVar14 = DAT_0b00363c & 0xf;
    uVar19 = DAT_020b4c00 & 0xffff;
    if (uVar14 == 3) {
      bVar16 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar11 = uVar11 << 0xf;
      if (bVar16 == 200) {
        bVar16 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar17 = (uint)DAT_020b4bf7;
      do {
        uVar14 = (uint)*puVar8;
        uVar12 = (DAT_0b003638 & 0x7e) >> 1;
        uVar4 = (ushort)((uVar14 & 0xe0) << 2) | (ushort)((uVar14 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar14 & 0xe) << 1);
        uVar11 = uVar11 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar10;
        if ((uVar14 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar12]) {
          (&DAT_023dc6b0)[uVar12] = (short)(uVar14 & 0xeee);
          if ((uVar12 != 0) && (uVar20 < 0xdf)) {
            (&DAT_023dc8ca)[uVar12 + (uint)(bVar16 >> 5) * 0x40] = uVar4;
            (&DAT_023ddb0c)[bVar16] = &DAT_023dc8ca + (uint)(bVar16 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar12] = uVar4;
          if (uVar12 == uVar17) {
            _DAT_05000200 = uVar4;
          }
        }
        uVar19 = uVar19 - 1 & 0xffff;
        puVar8 = puVar8 + 1;
      } while (uVar19 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar15 & 0xfe0000 | uVar11 >> 0xf;
      return;
    }
    if (uVar14 == 5) {
      uVar11 = uVar11 << 0xf;
      do {
        uVar17 = DAT_0b003638 & 0x7f;
        uVar20 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar17;
        if (0x4f < uVar17) break;
        uVar19 = uVar19 - 1 & 0xffff;
        uVar11 = uVar11 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar20) = *puVar8;
        puVar8 = puVar8 + 1;
        DAT_0b003638 = uVar10 + uVar17;
      } while (uVar19 != 0);
      DAT_020b4bfc = uVar19;
      DAT_020b4c00 = uVar19;
      DAT_0b003634 = uVar15 & 0xfe0000 | uVar11 >> 0xf;
      return;
    }
    if (uVar14 != 1) {
      DAT_020b4bfc = uVar19;
      DAT_020b4c00 = uVar19;
      DAT_0b003634 = uVar11;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar20 = uVar10 & 0xffff;
      uVar11 = uVar11 << 0xf;
      uStack_44 = 0;
      puVar9 = puVar8;
      uVar14 = uStack_2c;
      do {
        uVar4 = *(ushort *)(&DAT_0209cbec + uVar14);
        uVar3 = *puVar9;
        if (uVar3 != uVar4) {
          *(ushort *)(&DAT_0209cbec + uVar14) = uVar3;
          uStack_44 = uStack_44 + 1;
        }
        uVar19 = uVar19 - 1 & 0xffff;
        uVar11 = uVar11 + 0x8000;
        (&DAT_020acbec)[uVar14 >> 1] = uVar3 != uVar4;
        uVar14 = uVar14 + uVar20 & 0xffff;
        puVar9 = puVar9 + 1;
      } while (uVar19 != 0);
      uVar21 = uVar14;
      if (uVar14 <= uVar12) {
        uVar21 = uVar14 + 0x10000;
      }
      uVar11 = uVar15 & 0xfe0000 | uVar11 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar11;
        return;
      }
      if (uVar12 < DAT_023ddeac) {
LAB_0200aa30:
        bVar22 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar13 = 0x200;
        }
        else {
          iVar13 = 0x280;
        }
        if (iVar13 + DAT_023ddeac <= uVar12) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar13 = 0x200;
        }
        else {
          iVar13 = 0x280;
        }
        bVar22 = iVar13 + DAT_023ddeac < uVar14;
        DAT_020b4c15 = 1;
      }
      uVar15 = 0;
      if (((uVar12 != DAT_023dcea4) || (DAT_023dcdaa < uVar14)) && (bVar22)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          if (DAT_023ddea0 < uVar21) {
            if (DAT_023dc8b4 < uVar21) {
              bVar22 = false;
            }
            else {
              bVar22 = true;
            }
          }
          else {
            bVar22 = false;
          }
        }
        else {
          bVar22 = true;
        }
        if ((uStack_2c < DAT_023ddea4) || (DAT_023dc8b8 <= uStack_2c)) {
          if (DAT_023ddea4 < uVar21) {
            if (DAT_023dc8b8 < uVar21) {
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
        if (bVar22) {
          if ((DAT_023dc8a0 >> 1 <= uVar17) && (DAT_023dc8a4 = 1, !bVar6)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar11;
            return;
          }
          uVar19 = uStack_2c - DAT_023ddea0;
          bVar22 = (int)uVar19 < 0;
          puVar9 = puVar8;
          if (bVar22) {
            puVar9 = (ushort *)((int)puVar8 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar19 = uStack_2c;
          }
          if (bVar22) {
            uVar19 = 0;
          }
          uVar17 = uVar21 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar21 - DAT_023ddea0) {
            uVar17 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar9,uVar19,uVar10,uVar17);
          puVar9 = (ushort *)&DAT_0b003638;
          bVar22 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        else {
          puVar9 = (ushort *)0x0;
          bVar22 = false;
        }
        if (bVar6) {
          if (DAT_023dc8a0 >> 1 <= DAT_020b4c00) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a8 = 1;
            DAT_0b003634 = uVar11;
            return;
          }
          iVar13 = uStack_2c - DAT_023ddea4;
          bVar22 = iVar13 < 0;
          if (bVar22) {
            iVar13 = 0;
            puVar9 = (ushort *)((int)puVar8 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar22) {
            puVar9 = puVar8;
          }
          uVar19 = uVar21 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar21 - DAT_023ddea4) {
            uVar19 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar9,iVar13,uVar10,uVar19);
          bVar22 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar8,uStack_2c - DAT_023ddea8 & 0xffff,uVar10,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar22) {
          uVar10 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar10) {
            do {
              FUN_020076d0(uStack_2c,*puVar8);
              uStack_2c = uStack_2c + uVar20 & 0xffff;
              uVar10 = uVar10 - 1 & 0xffff;
              puVar8 = puVar8 + 1;
            } while (uVar10 != 0);
            uVar15 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar8);
              }
              uStack_2c = uStack_2c + uVar20 & 0xffff;
              uVar10 = uVar10 - 1 & 0xffff;
              uVar15 = 0;
              puVar8 = puVar8 + 1;
            } while (uVar10 != 0);
          }
        }
      }
    }
    else {
      uVar10 = uVar10 & 0xffff;
      puVar9 = puVar8;
      uVar20 = uVar19;
      uVar21 = uStack_2c;
      do {
        uVar4 = *puVar9;
        uVar20 = uVar20 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar21] = (char)(uVar4 >> 8);
        uVar11 = uVar11 + 2 & 0x1ffff | uVar15 & 0xfe0000;
        (&DAT_0209cbed)[uVar21] = (char)uVar4;
        uVar21 = uVar21 + uVar10 & 0xffff;
        puVar9 = puVar9 + 1;
      } while (uVar20 != 0);
      if (uVar12 < DAT_023ddeac) {
LAB_0200aa20:
        bVar22 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar13 = 0x200;
        }
        else {
          iVar13 = 0x280;
        }
        if (iVar13 + DAT_023ddeac <= uVar12) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar13 = 0x200;
        }
        else {
          iVar13 = 0x280;
        }
        bVar22 = iVar13 + DAT_023ddeac < uVar21;
        DAT_020b4c15 = 1;
      }
      uVar15 = 0;
      if (((uVar12 != DAT_023dcea4) || (DAT_023dcdaa <= uVar21)) && (bVar22)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar22 = false;
          uVar15 = uVar19;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar19) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar9 = puVar8;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar9 << 8 | (uint)(*puVar9 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar10;
            uVar19 = uVar19 - 1 & 0xffff;
            puVar9 = puVar9 + 1;
          } while (uVar19 != 0);
          bVar22 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar15 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar15 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar15) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar9 = puVar8;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar9 << 8 | (uint)(*puVar9 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar10;
            uVar15 = uVar15 - 1 & 0xffff;
            puVar9 = puVar9 + 1;
          } while (uVar15 != 0);
          bVar22 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar15 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar15 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar19 = 0x400;
          }
          else {
            uVar19 = 0x800;
          }
          if (uVar19 <= uVar15) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar9 = puVar8;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar9 << 8 | (uint)(*puVar9 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar10;
            uVar15 = uVar15 - 1 & 0xffff;
            puVar9 = puVar9 + 1;
          } while (uVar15 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar15 = 0;
        }
        if (!bVar22) {
          uVar19 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = uStack_2c + uVar10 & 0xffff;
            uVar19 = uVar19 - 1 & 0xffff;
            uVar15 = 0;
            puVar8 = puVar8 + 1;
          } while (uVar19 != 0);
        }
      }
    }
    DAT_0b003638 = uVar21 & 0xffff;
    DAT_020b4bfc = uVar15;
    DAT_020b4c00 = uVar15;
    DAT_0b003634 = uVar11;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar15 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar17 = uVar15 + uVar11;
    uVar19 = DAT_0b003630 & 0xffff;
    uVar20 = DAT_0b003638;
    do {
      uVar12 = uVar15 ^ 1;
      uVar15 = uVar15 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar20 ^ 1] = (&DAT_0209cbec)[uVar12];
      uVar20 = uVar20 + uVar19 & 0xffff;
    } while (uVar15 != (uVar17 & 0xffff));
    uVar15 = DAT_0b003638;
    if (uVar10 == 1) {
      uVar11 = uVar11 >> 1;
      uVar19 = 2;
    }
    do {
      DAT_0b003638 = uVar20;
      uVar15 = uVar15 & 0xfffe;
      if (uVar15 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar15 < DAT_023dcea4) || (DAT_023dcdaa <= uVar15)) {
          if ((uVar15 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar15)) {
            bVar22 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar15 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar15));
            bVar22 = true;
          }
          if ((DAT_023ddea4 <= uVar15) && (uVar15 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar15 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar15));
            bVar22 = true;
          }
          if ((DAT_023ddea8 <= uVar15) && (uVar15 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar15 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar15));
          }
          if (!bVar22) {
            FUN_020076d0(uVar15,*(undefined2 *)(&DAT_0209cbec + uVar15));
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
        if (iVar13 + DAT_023ddeac <= uVar15) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar11 = uVar11 - 1 & 0xffff;
      if (uVar11 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar15 = uVar15 + uVar19;
      uVar20 = DAT_0b003638;
    } while( true );
  }
  return;
}

