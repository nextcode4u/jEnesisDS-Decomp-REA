/* ARM9 to absolute long — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0201a3e8  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201a3e8(void)

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
  byte bVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int unaff_r8;
  uint uVar18;
  short *unaff_r10;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4((int)*unaff_r10);
  uVar17 = DAT_0b003634;
  uVar11 = DAT_0b003630;
  uVar16 = uVar7 & 0xffff;
  uVar2 = unaff_r10[2];
  uVar10 = ((ushort)unaff_r10[1] & 0xf0) * 0x10000;
  uVar1 = (ushort)uVar7;
  if (0xdfffff < uVar10) {
    *(ushort *)(unaff_r8 + (uint)uVar2) = uVar1;
    return;
  }
  if (uVar10 < 0xc00000) {
    uVar11 = CONCAT22(unaff_r10[1],uVar2) & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar11 >> 0x10])(uVar11);
    return;
  }
  bVar12 = (byte)uVar7;
  if ((uVar2 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar10 = DAT_0b003630;
    uVar11 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar16 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar19 = (DAT_0b003638 & 1) == 0;
      uVar16 = DAT_0b003638 & 0xffff;
      if (bVar19) {
        puVar14 = &DAT_0209cbec + uVar16;
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
        (&DAT_0209cbec)[uVar16] = uVar3;
        puVar14[1] = bVar12;
      }
      if (!bVar19) {
        (&DAT_0209cbec)[uVar16] = uVar3;
      }
      uVar8 = uVar16 + uVar17 & 0xffff;
      uVar13 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar13 = uVar13 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar8] = bVar12;
          uVar8 = uVar8 + uVar17 & 0xffff;
        } while (uVar13 != 0);
        uVar16 = DAT_0b003638;
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
      uVar16 = uVar16 & 0xfffe;
      if (uVar10 == 1) {
        uVar11 = uVar11 >> 1;
        uVar17 = 2;
      }
      do {
        if (uVar16 < DAT_023ddeac) {
LAB_0200adc4:
          if ((uVar16 < DAT_023dcea4) || (DAT_023dcdaa <= uVar16)) {
            if ((uVar16 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar16)) {
              bVar19 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar16 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar16));
              bVar19 = true;
            }
            if ((DAT_023ddea4 <= uVar16) && (uVar16 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar16 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar16));
              bVar19 = true;
            }
            if ((DAT_023ddea8 <= uVar16) && (uVar16 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar16 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar16));
            }
            if (!bVar19) {
              FUN_020076d0(uVar16,*(undefined2 *)(&DAT_0209cbec + uVar16));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar15 = 0x200;
          }
          else {
            iVar15 = 0x280;
          }
          if (iVar15 + DAT_023ddeac <= uVar16) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar11 = uVar11 - 1 & 0xffff;
        if (uVar11 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar16 = uVar16 + uVar17 & 0xfffe;
      } while( true );
    }
    uVar11 = DAT_0b00363c & 0xf;
    if (uVar11 == 3) {
      uVar11 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar11] = uVar1 & 0xeee;
      uVar2 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar11 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar12 == 200) {
          bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar11 + (uint)(bVar12 >> 5) * 0x40] = uVar2;
      }
      uVar16 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar11] = uVar2;
      DAT_0208f354 = 1;
      if (uVar11 == uVar16) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar11 == 5) {
      uVar11 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar11) {
        DAT_0b003638 = uVar11;
        return;
      }
      uVar16 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar11;
      *(ushort *)((int)&DAT_0b00364c + uVar16) = uVar1;
    }
    else if (uVar11 == 1) {
      uVar11 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar11) == uVar16) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar11) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar11] = uVar3;
        (&DAT_0209cbed)[uVar11] = bVar12;
        uVar16 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar11) {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (uVar11 < iVar15 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar11 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar11)) {
        bVar19 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar11 - DAT_023ddea0,uVar16);
        bVar19 = true;
      }
      if ((DAT_023ddea4 <= uVar11) && (uVar11 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar11 - DAT_023ddea4,uVar16);
        bVar19 = true;
      }
      if ((DAT_023ddea8 <= uVar11) && (uVar11 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar11 - DAT_023ddea8,uVar16);
      }
      if (!bVar19) {
        FUN_020076d0(uVar11,uVar16);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  uVar16 = (uVar7 & 0xffff) >> 2;
  if (DAT_020b4bf5 == '\0') {
    uVar16 = uVar7 & 0xff;
    uVar11 = (uVar7 & 0xffff) >> 8 & 0x1f;
    if ((uVar7 & 0xc000) != 0x8000) {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar7 & 0xffff) >> 0xe;
      DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar7 & 0x3fff;
      return;
    }
    DAT_0b00363c = 0;
    iVar15 = 1 - (uint)DAT_020b4c06;
    if (1 < DAT_020b4c06) {
      iVar15 = 0;
    }
    if (uVar11 < 0xc) {
      iVar15 = 0;
    }
    (&DAT_020b4c18)[uVar11] = bVar12;
    if (iVar15 == 0) {
      switch(uVar11) {
      case 0:
        DAT_0b003644 = (byte)(uVar16 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar16 >> 1) ^ 1) & 1;
        return;
      case 1:
        DAT_020b4c06 = bVar12 & 4;
        DAT_0b00362f = (byte)(uVar16 >> 6) & 1;
        uVar11 = uVar16 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar16 >> 5) & 1;
        DAT_020b4bf2 = (byte)(uVar16 >> 4) & 1;
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
          iVar15 = 0x800;
        }
        else {
          iVar15 = 0x1000;
        }
        DAT_023dc8bc = iVar15 + DAT_023ddea8;
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
        iVar15 = (uVar7 & 0x7f) * 0x200;
        DAT_0209cbe0 = DAT_023ddeac;
        DAT_023dcdac = &DAT_0209cbec + iVar15;
        DAT_023ddeac = iVar15;
        return;
      case 7:
        DAT_0b003640 = uVar7 & 0x3f;
        DAT_020b4bf7 = (char)(uVar7 & 0x3f);
        return;
      case 10:
        DAT_020b4bf8 = (short)uVar16;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar16 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar16 >> 2) & 1;
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
        uVar11 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar7 & 0x81) != 0;
        if ((uVar11 != (uVar16 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar11)) {
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
        DAT_0b003630 = uVar16;
        return;
      case 0x10:
        uVar16 = uVar16 >> 4 & 3;
        uVar7 = uVar7 & 3;
        uVar11 = uVar16 | uVar7 << 4;
        if (uVar11 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar11;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar16 + uVar7 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
        DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
        DAT_023dcea6 = (char)uVar7;
        DAT_023dd372._0_1_ = (char)uVar16;
        return;
      case 0x11:
        uVar11 = (uVar7 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar16 >> 7);
        DAT_023ddb04 = (char)uVar11;
        if (uVar16 >> 7 == 0) {
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
        DAT_023dde94 = (char)(uVar16 >> 7);
        DAT_020b4c10 = (uVar7 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar7 & 0x1f);
        return;
      case 0x13:
        DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar16;
        return;
      case 0x14:
        DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar16 << 8;
        return;
      case 0x15:
        DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar16 << 1;
        return;
      case 0x16:
        DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar16 << 9;
        return;
      case 0x17:
        DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar7 & 0x7f) << 0x11;
        DAT_020b4c05 = (byte)(uVar16 >> 6);
      }
      return;
    }
    return;
  }
  DAT_0b00363c = DAT_0b00363c & 3 | uVar16 & 0x3c;
  uVar10 = DAT_0b003638 & 0x3fff | (uVar7 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar10;
  if (DAT_020b4bf2 == '\0') {
    return;
  }
  if ((uVar16 & 0x20) == 0) {
    return;
  }
  uVar16 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar16 = 0xffff;
  }
  DAT_020b4c00 = uVar16;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar16 = DAT_0b003634 & 0xfffffe;
    puVar5 = (ushort *)FUN_02003cc8(uVar16);
    uVar8 = DAT_0b003638;
    uVar13 = DAT_020b4c00;
    uVar7 = DAT_020b4bec;
    uVar9 = DAT_0b00363c & 0xf;
    uVar10 = DAT_020b4c00 & 0xffff;
    if (uVar9 == 3) {
      bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar16 = uVar16 << 0xf;
      if (bVar12 == 200) {
        bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar13 = (uint)DAT_020b4bf7;
      do {
        uVar9 = (uint)*puVar5;
        uVar8 = (DAT_0b003638 & 0x7e) >> 1;
        uVar2 = (ushort)((uVar9 & 0xe0) << 2) | (ushort)((uVar9 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar9 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar11;
        if ((uVar9 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar8]) {
          (&DAT_023dc6b0)[uVar8] = (short)(uVar9 & 0xeee);
          if ((uVar8 != 0) && (uVar7 < 0xdf)) {
            (&DAT_023dc8ca)[uVar8 + (uint)(bVar12 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar8] = uVar2;
          if (uVar8 == uVar13) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar10 = uVar10 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar10 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar9 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar13 = DAT_0b003638 & 0x7f;
        uVar7 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar13;
        if (0x4f < uVar13) break;
        uVar10 = uVar10 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar7) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar11 + uVar13;
      } while (uVar10 != 0);
      DAT_020b4bfc = uVar10;
      DAT_020b4c00 = uVar10;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar9 != 1) {
      DAT_020b4bfc = uVar10;
      DAT_020b4c00 = uVar10;
      DAT_0b003634 = uVar16;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar7 = uVar11 & 0xffff;
      uVar16 = uVar16 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar9 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&DAT_0209cbec + uVar9);
        uVar1 = *puVar6;
        if (uVar1 != uVar2) {
          *(ushort *)(&DAT_0209cbec + uVar9) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar10 = uVar10 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        (&DAT_020acbec)[uVar9 >> 1] = uVar1 != uVar2;
        uVar9 = uVar9 + uVar7 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar10 != 0);
      uVar18 = uVar9;
      if (uVar9 <= uVar8) {
        uVar18 = uVar9 + 0x10000;
      }
      uVar16 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar16;
        return;
      }
      if (uVar8 < DAT_023ddeac) {
LAB_0200aa30:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + DAT_023ddeac <= uVar8) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + DAT_023ddeac < uVar9;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa < uVar9)) && (bVar19)) {
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
            DAT_0b003634 = uVar16;
            return;
          }
          uVar10 = uStack_2c - DAT_023ddea0;
          bVar19 = (int)uVar10 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar10 = uStack_2c;
          }
          if (bVar19) {
            uVar10 = 0;
          }
          uVar13 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar13 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar10,uVar11,uVar13);
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
            DAT_0b003634 = uVar16;
            return;
          }
          iVar15 = uStack_2c - DAT_023ddea4;
          bVar19 = iVar15 < 0;
          if (bVar19) {
            iVar15 = 0;
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar19) {
            puVar6 = puVar5;
          }
          uVar10 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar10 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar15,uVar11,uVar10);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar5,uStack_2c - DAT_023ddea8 & 0xffff,uVar11,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar19) {
          uVar11 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar11) {
            do {
              FUN_020076d0(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar7 & 0xffff;
              uVar11 = uVar11 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar11 != 0);
            uVar17 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar7 & 0xffff;
              uVar11 = uVar11 - 1 & 0xffff;
              uVar17 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar11 != 0);
          }
        }
      }
    }
    else {
      uVar11 = uVar11 & 0xffff;
      puVar6 = puVar5;
      uVar7 = uVar10;
      uVar18 = uStack_2c;
      do {
        uVar2 = *puVar6;
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar18] = (char)(uVar2 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&DAT_0209cbed)[uVar18] = (char)uVar2;
        uVar18 = uVar18 + uVar11 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      if (uVar8 < DAT_023ddeac) {
LAB_0200aa20:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + DAT_023ddeac <= uVar8) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + DAT_023ddeac < uVar18;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar10;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar10) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar10 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar10) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar10 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar10) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar10 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar11 & 0xffff;
            uVar10 = uVar10 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar10 != 0);
        }
      }
    }
    DAT_0b003638 = uVar18 & 0xffff;
    DAT_020b4bfc = uVar17;
    DAT_020b4c00 = uVar17;
    DAT_0b003634 = uVar16;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar17 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar13 = uVar17 + uVar16;
    uVar7 = DAT_0b003630 & 0xffff;
    do {
      uVar8 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar8];
      DAT_0b003638 = DAT_0b003638 + uVar7 & 0xffff;
    } while (uVar17 != (uVar13 & 0xffff));
    if (uVar11 == 1) {
      uVar16 = uVar16 >> 1;
      uVar7 = 2;
    }
    do {
      uVar10 = uVar10 & 0xfffe;
      if (uVar10 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar10 < DAT_023dcea4) || (DAT_023dcdaa <= uVar10)) {
          if ((uVar10 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar10)) {
            bVar19 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar10 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar19 = true;
          }
          if ((DAT_023ddea4 <= uVar10) && (uVar10 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar10 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar19 = true;
          }
          if ((DAT_023ddea8 <= uVar10) && (uVar10 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar10 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
          if (!bVar19) {
            FUN_020076d0(uVar10,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + DAT_023ddeac <= uVar10) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar10 = uVar10 + uVar7;
    } while( true );
  }
  return;
}


// 0x0201a9f0  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201a9f0(void)

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
  byte bVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int unaff_r8;
  uint uVar18;
  undefined2 *unaff_r10;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
  uVar17 = DAT_0b003634;
  uVar11 = DAT_0b003630;
  uVar16 = uVar7 & 0xffff;
  uVar2 = unaff_r10[3];
  uVar10 = ((ushort)unaff_r10[2] & 0xf0) * 0x10000;
  uVar1 = (ushort)uVar7;
  if (0xdfffff < uVar10) {
    *(ushort *)(unaff_r8 + (uint)uVar2) = uVar1;
    return;
  }
  if (uVar10 < 0xc00000) {
    uVar11 = CONCAT22(unaff_r10[2],uVar2) & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar11 >> 0x10])(uVar11);
    return;
  }
  bVar12 = (byte)uVar7;
  if ((uVar2 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar10 = DAT_0b003630;
    uVar11 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar16 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar19 = (DAT_0b003638 & 1) == 0;
      uVar16 = DAT_0b003638 & 0xffff;
      if (bVar19) {
        puVar14 = &DAT_0209cbec + uVar16;
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
        (&DAT_0209cbec)[uVar16] = uVar3;
        puVar14[1] = bVar12;
      }
      if (!bVar19) {
        (&DAT_0209cbec)[uVar16] = uVar3;
      }
      uVar8 = uVar16 + uVar17 & 0xffff;
      uVar13 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar13 = uVar13 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar8] = bVar12;
          uVar8 = uVar8 + uVar17 & 0xffff;
        } while (uVar13 != 0);
        uVar16 = DAT_0b003638;
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
      uVar16 = uVar16 & 0xfffe;
      if (uVar10 == 1) {
        uVar11 = uVar11 >> 1;
        uVar17 = 2;
      }
      do {
        if (uVar16 < DAT_023ddeac) {
LAB_0200adc4:
          if ((uVar16 < DAT_023dcea4) || (DAT_023dcdaa <= uVar16)) {
            if ((uVar16 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar16)) {
              bVar19 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar16 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar16));
              bVar19 = true;
            }
            if ((DAT_023ddea4 <= uVar16) && (uVar16 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar16 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar16));
              bVar19 = true;
            }
            if ((DAT_023ddea8 <= uVar16) && (uVar16 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar16 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar16));
            }
            if (!bVar19) {
              FUN_020076d0(uVar16,*(undefined2 *)(&DAT_0209cbec + uVar16));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar15 = 0x200;
          }
          else {
            iVar15 = 0x280;
          }
          if (iVar15 + DAT_023ddeac <= uVar16) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar11 = uVar11 - 1 & 0xffff;
        if (uVar11 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar16 = uVar16 + uVar17 & 0xfffe;
      } while( true );
    }
    uVar11 = DAT_0b00363c & 0xf;
    if (uVar11 == 3) {
      uVar11 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar11] = uVar1 & 0xeee;
      uVar2 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar11 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar12 == 200) {
          bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar11 + (uint)(bVar12 >> 5) * 0x40] = uVar2;
      }
      uVar16 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar11] = uVar2;
      DAT_0208f354 = 1;
      if (uVar11 == uVar16) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar11 == 5) {
      uVar11 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar11) {
        DAT_0b003638 = uVar11;
        return;
      }
      uVar16 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar11;
      *(ushort *)((int)&DAT_0b00364c + uVar16) = uVar1;
    }
    else if (uVar11 == 1) {
      uVar11 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar11) == uVar16) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar11) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar11] = uVar3;
        (&DAT_0209cbed)[uVar11] = bVar12;
        uVar16 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar11) {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (uVar11 < iVar15 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar11 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar11)) {
        bVar19 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar11 - DAT_023ddea0,uVar16);
        bVar19 = true;
      }
      if ((DAT_023ddea4 <= uVar11) && (uVar11 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar11 - DAT_023ddea4,uVar16);
        bVar19 = true;
      }
      if ((DAT_023ddea8 <= uVar11) && (uVar11 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar11 - DAT_023ddea8,uVar16);
      }
      if (!bVar19) {
        FUN_020076d0(uVar11,uVar16);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  uVar16 = (uVar7 & 0xffff) >> 2;
  if (DAT_020b4bf5 == '\0') {
    uVar16 = uVar7 & 0xff;
    uVar11 = (uVar7 & 0xffff) >> 8 & 0x1f;
    if ((uVar7 & 0xc000) != 0x8000) {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar7 & 0xffff) >> 0xe;
      DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar7 & 0x3fff;
      return;
    }
    DAT_0b00363c = 0;
    iVar15 = 1 - (uint)DAT_020b4c06;
    if (1 < DAT_020b4c06) {
      iVar15 = 0;
    }
    if (uVar11 < 0xc) {
      iVar15 = 0;
    }
    (&DAT_020b4c18)[uVar11] = bVar12;
    if (iVar15 == 0) {
      switch(uVar11) {
      case 0:
        DAT_0b003644 = (byte)(uVar16 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar16 >> 1) ^ 1) & 1;
        return;
      case 1:
        DAT_020b4c06 = bVar12 & 4;
        DAT_0b00362f = (byte)(uVar16 >> 6) & 1;
        uVar11 = uVar16 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar16 >> 5) & 1;
        DAT_020b4bf2 = (byte)(uVar16 >> 4) & 1;
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
          iVar15 = 0x800;
        }
        else {
          iVar15 = 0x1000;
        }
        DAT_023dc8bc = iVar15 + DAT_023ddea8;
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
        iVar15 = (uVar7 & 0x7f) * 0x200;
        DAT_0209cbe0 = DAT_023ddeac;
        DAT_023dcdac = &DAT_0209cbec + iVar15;
        DAT_023ddeac = iVar15;
        return;
      case 7:
        DAT_0b003640 = uVar7 & 0x3f;
        DAT_020b4bf7 = (char)(uVar7 & 0x3f);
        return;
      case 10:
        DAT_020b4bf8 = (short)uVar16;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar16 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar16 >> 2) & 1;
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
        uVar11 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar7 & 0x81) != 0;
        if ((uVar11 != (uVar16 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar11)) {
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
        DAT_0b003630 = uVar16;
        return;
      case 0x10:
        uVar16 = uVar16 >> 4 & 3;
        uVar7 = uVar7 & 3;
        uVar11 = uVar16 | uVar7 << 4;
        if (uVar11 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar11;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar16 + uVar7 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
        DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
        DAT_023dcea6 = (char)uVar7;
        DAT_023dd372._0_1_ = (char)uVar16;
        return;
      case 0x11:
        uVar11 = (uVar7 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar16 >> 7);
        DAT_023ddb04 = (char)uVar11;
        if (uVar16 >> 7 == 0) {
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
        DAT_023dde94 = (char)(uVar16 >> 7);
        DAT_020b4c10 = (uVar7 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar7 & 0x1f);
        return;
      case 0x13:
        DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar16;
        return;
      case 0x14:
        DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar16 << 8;
        return;
      case 0x15:
        DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar16 << 1;
        return;
      case 0x16:
        DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar16 << 9;
        return;
      case 0x17:
        DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar7 & 0x7f) << 0x11;
        DAT_020b4c05 = (byte)(uVar16 >> 6);
      }
      return;
    }
    return;
  }
  DAT_0b00363c = DAT_0b00363c & 3 | uVar16 & 0x3c;
  uVar10 = DAT_0b003638 & 0x3fff | (uVar7 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar10;
  if (DAT_020b4bf2 == '\0') {
    return;
  }
  if ((uVar16 & 0x20) == 0) {
    return;
  }
  uVar16 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar16 = 0xffff;
  }
  DAT_020b4c00 = uVar16;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar16 = DAT_0b003634 & 0xfffffe;
    puVar5 = (ushort *)FUN_02003cc8(uVar16);
    uVar8 = DAT_0b003638;
    uVar13 = DAT_020b4c00;
    uVar7 = DAT_020b4bec;
    uVar9 = DAT_0b00363c & 0xf;
    uVar10 = DAT_020b4c00 & 0xffff;
    if (uVar9 == 3) {
      bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar16 = uVar16 << 0xf;
      if (bVar12 == 200) {
        bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar13 = (uint)DAT_020b4bf7;
      do {
        uVar9 = (uint)*puVar5;
        uVar8 = (DAT_0b003638 & 0x7e) >> 1;
        uVar2 = (ushort)((uVar9 & 0xe0) << 2) | (ushort)((uVar9 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar9 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar11;
        if ((uVar9 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar8]) {
          (&DAT_023dc6b0)[uVar8] = (short)(uVar9 & 0xeee);
          if ((uVar8 != 0) && (uVar7 < 0xdf)) {
            (&DAT_023dc8ca)[uVar8 + (uint)(bVar12 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar8] = uVar2;
          if (uVar8 == uVar13) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar10 = uVar10 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar10 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar9 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar13 = DAT_0b003638 & 0x7f;
        uVar7 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar13;
        if (0x4f < uVar13) break;
        uVar10 = uVar10 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar7) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar11 + uVar13;
      } while (uVar10 != 0);
      DAT_020b4bfc = uVar10;
      DAT_020b4c00 = uVar10;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar9 != 1) {
      DAT_020b4bfc = uVar10;
      DAT_020b4c00 = uVar10;
      DAT_0b003634 = uVar16;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar7 = uVar11 & 0xffff;
      uVar16 = uVar16 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar9 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&DAT_0209cbec + uVar9);
        uVar1 = *puVar6;
        if (uVar1 != uVar2) {
          *(ushort *)(&DAT_0209cbec + uVar9) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar10 = uVar10 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        (&DAT_020acbec)[uVar9 >> 1] = uVar1 != uVar2;
        uVar9 = uVar9 + uVar7 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar10 != 0);
      uVar18 = uVar9;
      if (uVar9 <= uVar8) {
        uVar18 = uVar9 + 0x10000;
      }
      uVar16 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar16;
        return;
      }
      if (uVar8 < DAT_023ddeac) {
LAB_0200aa30:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + DAT_023ddeac <= uVar8) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + DAT_023ddeac < uVar9;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa < uVar9)) && (bVar19)) {
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
            DAT_0b003634 = uVar16;
            return;
          }
          uVar10 = uStack_2c - DAT_023ddea0;
          bVar19 = (int)uVar10 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar10 = uStack_2c;
          }
          if (bVar19) {
            uVar10 = 0;
          }
          uVar13 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar13 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar10,uVar11,uVar13);
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
            DAT_0b003634 = uVar16;
            return;
          }
          iVar15 = uStack_2c - DAT_023ddea4;
          bVar19 = iVar15 < 0;
          if (bVar19) {
            iVar15 = 0;
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar19) {
            puVar6 = puVar5;
          }
          uVar10 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar10 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar15,uVar11,uVar10);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar5,uStack_2c - DAT_023ddea8 & 0xffff,uVar11,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar19) {
          uVar11 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar11) {
            do {
              FUN_020076d0(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar7 & 0xffff;
              uVar11 = uVar11 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar11 != 0);
            uVar17 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar7 & 0xffff;
              uVar11 = uVar11 - 1 & 0xffff;
              uVar17 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar11 != 0);
          }
        }
      }
    }
    else {
      uVar11 = uVar11 & 0xffff;
      puVar6 = puVar5;
      uVar7 = uVar10;
      uVar18 = uStack_2c;
      do {
        uVar2 = *puVar6;
        uVar7 = uVar7 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar18] = (char)(uVar2 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&DAT_0209cbed)[uVar18] = (char)uVar2;
        uVar18 = uVar18 + uVar11 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      if (uVar8 < DAT_023ddeac) {
LAB_0200aa20:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + DAT_023ddeac <= uVar8) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + DAT_023ddeac < uVar18;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar10;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar10) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar10 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar10) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar10 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar10) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar10 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar11 & 0xffff;
            uVar10 = uVar10 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar10 != 0);
        }
      }
    }
    DAT_0b003638 = uVar18 & 0xffff;
    DAT_020b4bfc = uVar17;
    DAT_020b4c00 = uVar17;
    DAT_0b003634 = uVar16;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar17 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar13 = uVar17 + uVar16;
    uVar7 = DAT_0b003630 & 0xffff;
    do {
      uVar8 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar8];
      DAT_0b003638 = DAT_0b003638 + uVar7 & 0xffff;
    } while (uVar17 != (uVar13 & 0xffff));
    if (uVar11 == 1) {
      uVar16 = uVar16 >> 1;
      uVar7 = 2;
    }
    do {
      uVar10 = uVar10 & 0xfffe;
      if (uVar10 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar10 < DAT_023dcea4) || (DAT_023dcdaa <= uVar10)) {
          if ((uVar10 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar10)) {
            bVar19 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar10 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar19 = true;
          }
          if ((DAT_023ddea4 <= uVar10) && (uVar10 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar10 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar10));
            bVar19 = true;
          }
          if ((DAT_023ddea8 <= uVar10) && (uVar10 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar10 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
          if (!bVar19) {
            FUN_020076d0(uVar10,*(undefined2 *)(&DAT_0209cbec + uVar10));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + DAT_023ddeac <= uVar10) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar10 = uVar10 + uVar7;
    } while( true );
  }
  return;
}


// 0x0201c21c  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201c21c(void)

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
  byte bVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int unaff_r8;
  uint uVar18;
  ushort *unaff_r10;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar17 = DAT_0b003634;
  uVar10 = DAT_0b003630;
  uVar1 = *unaff_r10;
  uVar15 = (uint)uVar1;
  uVar2 = unaff_r10[2];
  uVar8 = (unaff_r10[1] & 0xf0) * 0x10000;
  if (0xdfffff < uVar8) {
    *(ushort *)(unaff_r8 + (uint)uVar2) = uVar1;
    return;
  }
  if (uVar8 < 0xc00000) {
    uVar10 = CONCAT22(unaff_r10[1],uVar2) & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar10 >> 0x10])(uVar10);
    return;
  }
  bVar11 = (byte)uVar1;
  if ((uVar2 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar8 = DAT_0b003630;
    uVar10 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar1 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar19 = (DAT_0b003638 & 1) == 0;
      uVar15 = DAT_0b003638 & 0xffff;
      if (bVar19) {
        puVar13 = &DAT_0209cbec + uVar15;
      }
      else {
        puVar13 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar17 = DAT_0b003630 & 0xffff;
      if (!bVar19) {
        (&DAT_0209cbec)[(int)puVar13] = bVar11;
      }
      uVar10 = uVar10 & 0xffff;
      if (bVar19) {
        (&DAT_0209cbec)[uVar15] = uVar3;
        puVar13[1] = bVar11;
      }
      if (!bVar19) {
        (&DAT_0209cbec)[uVar15] = uVar3;
      }
      uVar12 = uVar15 + uVar17 & 0xffff;
      uVar16 = uVar10;
      if (uVar10 != 0) {
        do {
          uVar16 = uVar16 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar12] = bVar11;
          uVar12 = uVar12 + uVar17 & 0xffff;
        } while (uVar16 != 0);
        uVar15 = DAT_0b003638;
        if (uVar10 == 0xffff && (uVar1 & 0xff) == 0) {
          DAT_0b003638 = uVar12;
          FUN_02007420();
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
      }
      DAT_0b003638 = uVar12;
      uVar15 = uVar15 & 0xfffe;
      if (uVar8 == 1) {
        uVar10 = uVar10 >> 1;
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
            iVar14 = 0x200;
          }
          else {
            iVar14 = 0x280;
          }
          if (iVar14 + DAT_023ddeac <= uVar15) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar10 = uVar10 - 1 & 0xffff;
        if (uVar10 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar15 = uVar15 + uVar17 & 0xfffe;
      } while( true );
    }
    uVar10 = DAT_0b00363c & 0xf;
    if (uVar10 == 3) {
      uVar10 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar10] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar15 & 0xe0) << 2) | (ushort)((uVar15 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar15 & 0xe) << 1);
      if ((uVar10 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar11 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar11 == 200) {
          bVar11 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar11] = &DAT_023dc8ca + (uint)(bVar11 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar10 + (uint)(bVar11 >> 5) * 0x40] = uVar1;
      }
      uVar15 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar10] = uVar1;
      DAT_0208f354 = 1;
      if (uVar10 == uVar15) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar10 == 5) {
      uVar10 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar10) {
        DAT_0b003638 = uVar10;
        return;
      }
      uVar15 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar10;
      *(ushort *)((int)&DAT_0b00364c + uVar15) = uVar1;
    }
    else if (uVar10 == 1) {
      uVar10 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar10) == uVar15) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar10) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar10] = uVar3;
        (&DAT_0209cbed)[uVar10] = bVar11;
        uVar15 = (uint)(uVar1 >> 8) | (uVar15 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar10) {
        if (DAT_023ddb05 == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (uVar10 < iVar14 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar10 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar10)) {
        bVar19 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar10 - DAT_023ddea0,uVar15);
        bVar19 = true;
      }
      if ((DAT_023ddea4 <= uVar10) && (uVar10 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar10 - DAT_023ddea4,uVar15);
        bVar19 = true;
      }
      if ((DAT_023ddea8 <= uVar10) && (uVar10 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar10 - DAT_023ddea8,uVar15);
      }
      if (!bVar19) {
        FUN_020076d0(uVar10,uVar15);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar8 = uVar15 & 0xff;
    uVar10 = uVar1 >> 8 & 0x1f;
    if ((uVar15 & 0xc000) != 0x8000) {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c | (uint)(uVar1 >> 0xe);
      DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar15 & 0x3fff;
      return;
    }
    DAT_0b00363c = 0;
    iVar14 = 1 - (uint)DAT_020b4c06;
    if (1 < DAT_020b4c06) {
      iVar14 = 0;
    }
    if (uVar10 < 0xc) {
      iVar14 = 0;
    }
    (&DAT_020b4c18)[uVar10] = bVar11;
    if (iVar14 == 0) {
      switch(uVar10) {
      case 0:
        DAT_0b003644 = (byte)(uVar8 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar8 >> 1) ^ 1) & 1;
        return;
      case 1:
        DAT_020b4c06 = bVar11 & 4;
        DAT_0b00362f = (byte)(uVar8 >> 6) & 1;
        uVar10 = uVar8 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar8 >> 5) & 1;
        DAT_020b4bf2 = (byte)(uVar8 >> 4) & 1;
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
        DAT_023ddea0 = (uVar15 & 0x38) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (uVar15 & 0x38) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = DAT_023ddea0;
        DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
        return;
      case 3:
        DAT_023ddea8 = (uVar15 & 0x3e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar14 = 0x800;
        }
        else {
          iVar14 = 0x1000;
        }
        DAT_023dc8bc = iVar14 + DAT_023ddea8;
        return;
      case 4:
        DAT_023ddea4 = (uVar15 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (uVar15 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = DAT_023ddea4;
        DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
        return;
      case 5:
        iVar14 = (uVar15 & 0x7f) * 0x200;
        DAT_0209cbe0 = DAT_023ddeac;
        DAT_023dcdac = &DAT_0209cbec + iVar14;
        DAT_023ddeac = iVar14;
        return;
      case 7:
        DAT_0b003640 = uVar15 & 0x3f;
        DAT_020b4bf7 = (char)(uVar15 & 0x3f);
        return;
      case 10:
        DAT_020b4bf8 = (short)uVar8;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar8 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar8 >> 2) & 1;
        DAT_023dcdb0 = bVar11 & 3;
        if ((DAT_023cb610 & 4) == 0) {
          DAT_023dcea8 = FUN_0200c280;
        }
        else {
          switch(bVar11 & 3) {
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
        uVar10 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (uVar1 & 0x81) != 0;
        if ((uVar10 != (uVar8 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar10)) {
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
        DAT_023dcea4 = (ushort)((uVar15 << 0x1a) >> 0x10);
        DAT_023dcdaa = DAT_023dcea4 + 0x380;
        return;
      case 0xf:
        DAT_0b003630 = uVar8;
        return;
      case 0x10:
        uVar8 = uVar8 >> 4 & 3;
        uVar15 = uVar15 & 3;
        uVar10 = uVar8 | uVar15 << 4;
        if (uVar10 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar10;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar8 + uVar15 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar15];
        DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
        DAT_023dcea6 = (char)uVar15;
        DAT_023dd372._0_1_ = (char)uVar8;
        return;
      case 0x11:
        uVar10 = (uVar15 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar8 >> 7);
        DAT_023ddb04 = (char)uVar10;
        if (uVar8 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar10);
        }
        else {
          DAT_023dcfa8 = (uVar15 & 0x1f) * -2 + 1;
          if (1 < uVar10) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar8 >> 7);
        DAT_020b4c10 = (uVar15 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(uVar15 & 0x1f);
        return;
      case 0x13:
        DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar8;
        return;
      case 0x14:
        DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar8 << 8;
        return;
      case 0x15:
        DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar8 << 1;
        return;
      case 0x16:
        DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar8 << 9;
        return;
      case 0x17:
        DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar15 & 0x7f) << 0x11;
        DAT_020b4c05 = (byte)(uVar8 >> 6);
      }
      return;
    }
    return;
  }
  DAT_0b00363c = DAT_0b00363c & 3 | uVar1 >> 2 & 0x3c;
  uVar15 = DAT_0b003638 & 0x3fff | (uVar15 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar15;
  if (DAT_020b4bf2 == '\0') {
    return;
  }
  if ((uVar1 >> 2 & 0x20) == 0) {
    return;
  }
  uVar8 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar8 = 0xffff;
  }
  DAT_020b4c00 = uVar8;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar15 = DAT_0b003634 & 0xfffffe;
    puVar5 = (ushort *)FUN_02003cc8(uVar15);
    uVar7 = DAT_0b003638;
    uVar12 = DAT_020b4c00;
    uVar16 = DAT_020b4bec;
    uVar9 = DAT_0b00363c & 0xf;
    uVar8 = DAT_020b4c00 & 0xffff;
    if (uVar9 == 3) {
      bVar11 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar15 = uVar15 << 0xf;
      if (bVar11 == 200) {
        bVar11 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar12 = (uint)DAT_020b4bf7;
      do {
        uVar9 = (uint)*puVar5;
        uVar7 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar9 & 0xe0) << 2) | (ushort)((uVar9 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar9 & 0xe) << 1);
        uVar15 = uVar15 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar10;
        if ((uVar9 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar7]) {
          (&DAT_023dc6b0)[uVar7] = (short)(uVar9 & 0xeee);
          if ((uVar7 != 0) && (uVar16 < 0xdf)) {
            (&DAT_023dc8ca)[uVar7 + (uint)(bVar11 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar11] = &DAT_023dc8ca + (uint)(bVar11 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar7] = uVar1;
          if (uVar7 == uVar12) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar8 = uVar8 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar8 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar15 >> 0xf;
      return;
    }
    if (uVar9 == 5) {
      uVar15 = uVar15 << 0xf;
      do {
        uVar12 = DAT_0b003638 & 0x7f;
        uVar16 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar12;
        if (0x4f < uVar12) break;
        uVar8 = uVar8 - 1 & 0xffff;
        uVar15 = uVar15 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar16) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar10 + uVar12;
      } while (uVar8 != 0);
      DAT_020b4bfc = uVar8;
      DAT_020b4c00 = uVar8;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar15 >> 0xf;
      return;
    }
    if (uVar9 != 1) {
      DAT_020b4bfc = uVar8;
      DAT_020b4c00 = uVar8;
      DAT_0b003634 = uVar15;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar16 = uVar10 & 0xffff;
      uVar15 = uVar15 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar9 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar9);
        uVar2 = *puVar6;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar9) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar8 = uVar8 - 1 & 0xffff;
        uVar15 = uVar15 + 0x8000;
        (&DAT_020acbec)[uVar9 >> 1] = uVar2 != uVar1;
        uVar9 = uVar9 + uVar16 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      uVar18 = uVar9;
      if (uVar9 <= uVar7) {
        uVar18 = uVar9 + 0x10000;
      }
      uVar15 = uVar17 & 0xfe0000 | uVar15 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar15;
        return;
      }
      if (uVar7 < DAT_023ddeac) {
LAB_0200aa30:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (iVar14 + DAT_023ddeac <= uVar7) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        bVar19 = iVar14 + DAT_023ddeac < uVar9;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar7 != DAT_023dcea4) || (DAT_023dcdaa < uVar9)) && (bVar19)) {
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
          if ((DAT_023dc8a0 >> 1 <= uVar12) && (DAT_023dc8a4 = 1, !bVar4)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar15;
            return;
          }
          uVar8 = uStack_2c - DAT_023ddea0;
          bVar19 = (int)uVar8 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar8 = uStack_2c;
          }
          if (bVar19) {
            uVar8 = 0;
          }
          uVar12 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar12 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar8,uVar10,uVar12);
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
            DAT_0b003634 = uVar15;
            return;
          }
          iVar14 = uStack_2c - DAT_023ddea4;
          bVar19 = iVar14 < 0;
          if (bVar19) {
            iVar14 = 0;
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar19) {
            puVar6 = puVar5;
          }
          uVar8 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar8 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar14,uVar10,uVar8);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar5,uStack_2c - DAT_023ddea8 & 0xffff,uVar10,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar19) {
          uVar10 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar10) {
            do {
              FUN_020076d0(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar16 & 0xffff;
              uVar10 = uVar10 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar10 != 0);
            uVar17 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar16 & 0xffff;
              uVar10 = uVar10 - 1 & 0xffff;
              uVar17 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar10 != 0);
          }
        }
      }
    }
    else {
      uVar10 = uVar10 & 0xffff;
      puVar6 = puVar5;
      uVar16 = uVar8;
      uVar18 = uStack_2c;
      do {
        uVar1 = *puVar6;
        uVar16 = uVar16 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar18] = (char)(uVar1 >> 8);
        uVar15 = uVar15 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&DAT_0209cbed)[uVar18] = (char)uVar1;
        uVar18 = uVar18 + uVar10 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar16 != 0);
      if (uVar7 < DAT_023ddeac) {
LAB_0200aa20:
        bVar19 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (iVar14 + DAT_023ddeac <= uVar7) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        bVar19 = iVar14 + DAT_023ddeac < uVar18;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar7 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar8;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar8) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar10;
            uVar8 = uVar8 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar8 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar8 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar8) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar10;
            uVar8 = uVar8 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar8 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar8 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar8) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar10;
            uVar8 = uVar8 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar8 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar8 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar10 & 0xffff;
            uVar8 = uVar8 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar8 != 0);
        }
      }
    }
    DAT_0b003638 = uVar18 & 0xffff;
    DAT_020b4bfc = uVar17;
    DAT_020b4c00 = uVar17;
    DAT_0b003634 = uVar15;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar17 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar12 = uVar17 + uVar8;
    uVar16 = DAT_0b003630 & 0xffff;
    do {
      uVar7 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar7];
      DAT_0b003638 = DAT_0b003638 + uVar16 & 0xffff;
    } while (uVar17 != (uVar12 & 0xffff));
    if (uVar10 == 1) {
      uVar8 = uVar8 >> 1;
      uVar16 = 2;
    }
    do {
      uVar15 = uVar15 & 0xfffe;
      if (uVar15 < DAT_023ddeac) {
LAB_0200a3f0:
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
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (iVar14 + DAT_023ddeac <= uVar15) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar8 = uVar8 - 1 & 0xffff;
      if (uVar8 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar15 = uVar15 + uVar16;
    } while( true );
  }
  return;
}

