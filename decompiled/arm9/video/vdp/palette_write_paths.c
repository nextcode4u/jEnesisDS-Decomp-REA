/* ARM9 palette write paths — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x02004c50  write_display_palette

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02004c50(uint param_1,uint param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  uint uStack_44;
  uint uStack_2c;
  
  uVar20 = DAT_0b003634;
  uVar17 = DAT_0b003630;
  iVar7 = DAT_02099068;
  iVar13 = DAT_02099064;
  uVar9 = DAT_02099054;
  bVar15 = (byte)param_2;
  switch((int)param_1 >> 0xd & 7) {
  case 0:
  case 1:
    (&DAT_0b00161c)[param_1 & 0x1fff] = bVar15;
    return;
  case 2:
    uVar17 = param_2 & 0xff;
    do {
    } while ((_DAT_04000180 & 0xf) == 0);
    switch(param_1 & 3) {
    case 0:
      DAT_02099060 = 0;
      DAT_02099064 = uVar17;
      return;
    case 1:
      goto switchD_02005bc0_caseD_1;
    case 2:
      DAT_02099060 = 1;
      DAT_02099068 = uVar17;
      return;
    case 3:
      if (DAT_02099060 == 0) {
        return;
      }
      if (((&DAT_0209927c)[DAT_02099068] != '\0') && ((byte)(&DAT_0209917c)[DAT_02099068] == uVar17)
         ) {
        return;
      }
      (&DAT_0209917c)[DAT_02099068] = bVar15;
      if (0x1fd < uVar9) {
        return;
      }
      DAT_02099054 = uVar9 + 2;
      *(char *)(uVar9 + DAT_023db760) = (char)iVar7;
      *(byte *)(uVar9 + 1 + DAT_023db760) = bVar15;
    default:
      return;
    }
  case 3:
    if ((param_1 & 0xff00) == 0x6000) {
      DAT_02099008 = (param_2 & 1) << 0x17 | DAT_02099008 >> 1 & 0xff8000;
      return;
    }
    if ((param_1 & 0xff00) != 0x7f00) {
      return;
    }
    if (0x17 < (param_1 & 0x1f)) {
      return;
    }
    if ((1 << (param_1 & 0x1f) & 0xaa0000U) == 0) {
      return;
    }
    param_2 = param_2 & 0xff;
LAB_02005adc:
    do {
    } while ((_DAT_04000180 & 0xf) == 0);
    if (DAT_02099058 < 0x100) {
      *(char *)(DAT_02099058 + DAT_023db658) = (char)param_2;
      DAT_02099058 = DAT_02099058 + 1;
    }
    if ((param_2 & 0x80) == 0) {
      if ((DAT_0209939c & 1) == 0) {
        *(uint *)(&DAT_0209937c + DAT_0209939c * 4) =
             *(uint *)(&DAT_0209937c + DAT_0209939c * 4) & 0xf | (param_2 & 0x3f) << 4;
        return;
      }
      return;
    }
    DAT_0209939c = (int)(param_2 & 0x70) >> 4;
    *(uint *)(&DAT_0209937c + DAT_0209939c * 4) =
         *(uint *)(&DAT_0209937c + DAT_0209939c * 4) & 0x3f0 | param_2 & 0xf;
    return;
  }
  uVar9 = param_1 & 0x7fff | DAT_02099008;
  uVar16 = (int)uVar9 >> 0x15 & 7;
  if (uVar16 == 6) {
    if ((uVar9 & 0xe700e0) != 0xc00000) {
      return;
    }
    if (0x17 < (uVar9 & 0x1f)) {
      return;
    }
    uVar16 = 1 << (uVar9 & 0x1f);
    if ((uVar16 & 0xaa0000) != 0) goto LAB_02005adc;
    if ((uVar16 & 0xff) == 0) {
      return;
    }
    uVar16 = param_2 & 0xffff;
    bVar15 = (byte)uVar16;
    if ((uVar9 & 0x1c) == 0) {
      if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
         ((DAT_0b00363c & 0x20) != 0)) {
        FUN_02009e3c();
      }
      uVar9 = DAT_0b003630;
      uVar17 = DAT_020b4c00;
      uVar4 = (undefined1)(uVar16 >> 8);
      if (DAT_020b4bf3 != '\0') {
        bVar23 = (DAT_0b003638 & 1) == 0;
        uVar20 = DAT_0b003638 & 0xffff;
        if (bVar23) {
          puVar19 = &DAT_0209cbec + uVar20;
        }
        else {
          puVar19 = (undefined1 *)(DAT_0b003638 & 0xfffe);
        }
        uVar16 = DAT_0b003630 & 0xffff;
        if (!bVar23) {
          (&DAT_0209cbec)[(int)puVar19] = bVar15;
        }
        uVar17 = uVar17 & 0xffff;
        if (bVar23) {
          (&DAT_0209cbec)[uVar20] = uVar4;
          puVar19[1] = bVar15;
        }
        if (!bVar23) {
          (&DAT_0209cbec)[uVar20] = uVar4;
        }
        uVar18 = uVar20 + uVar16 & 0xffff;
        uVar21 = uVar17;
        if (uVar17 != 0) {
          do {
            uVar21 = uVar21 - 1 & 0xffff;
            (&DAT_0209cbec)[uVar18] = bVar15;
            uVar18 = uVar18 + uVar16 & 0xffff;
          } while (uVar21 != 0);
          uVar20 = DAT_0b003638;
          if (uVar17 == 0xffff && (param_2 & 0xff) == 0) {
            DAT_0b003638 = uVar18;
            FUN_02007420();
            DAT_020b4bf3 = 0;
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            return;
          }
        }
        DAT_0b003638 = uVar18;
        uVar20 = uVar20 & 0xfffe;
        if (uVar9 == 1) {
          uVar17 = uVar17 >> 1;
          uVar16 = 2;
        }
        do {
          if (uVar20 < DAT_023ddeac) {
LAB_0200adc4:
            if ((uVar20 < DAT_023dcea4) || (DAT_023dcdaa <= uVar20)) {
              if ((uVar20 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar20)) {
                bVar23 = false;
              }
              else {
                (*DAT_023dc69c)(0,uVar20 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar20));
                bVar23 = true;
              }
              if ((DAT_023ddea4 <= uVar20) && (uVar20 < DAT_023dc8b8)) {
                (*DAT_023dc69c)(1,uVar20 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar20));
                bVar23 = true;
              }
              if ((DAT_023ddea8 <= uVar20) && (uVar20 < DAT_023dc8bc)) {
                (*DAT_023dc5a8)(uVar20 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar20));
              }
              if (!bVar23) {
                FUN_020076d0(uVar20,*(undefined2 *)(&DAT_0209cbec + uVar20));
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
            if (iVar13 + DAT_023ddeac <= uVar20) goto LAB_0200adc4;
            DAT_020b4c15 = 1;
          }
          uVar17 = uVar17 - 1 & 0xffff;
          if (uVar17 == 0) {
            DAT_020b4bf3 = 0;
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            return;
          }
          uVar20 = uVar20 + uVar16 & 0xfffe;
        } while( true );
      }
      uVar17 = DAT_0b00363c & 0xf;
      uVar1 = (ushort)param_2;
      if (uVar17 == 3) {
        uVar17 = (DAT_0b003638 & 0x7e) >> 1;
        (&DAT_023dc6b0)[uVar17] = uVar1 & 0xeee;
        uVar1 = (ushort)((param_2 & 0xe0) << 2) | (ushort)((param_2 & 0xe00) << 3) | 0x8000 |
                (ushort)((param_2 & 0xe) << 1);
        if ((uVar17 != 0) && (DAT_020b4bec < 0xdf)) {
          bVar15 = (&DAT_0208ebb0)[DAT_020b4bec];
          if (bVar15 == 200) {
            bVar15 = (&DAT_0208ebaf)[DAT_020b4bec];
          }
          (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
          (&DAT_023dc8ca)[uVar17 + (uint)(bVar15 >> 5) * 0x40] = uVar1;
        }
        uVar9 = (uint)DAT_020b4bf7;
        (&DAT_023dc730)[uVar17] = uVar1;
        DAT_0208f354 = 1;
        if (uVar17 == uVar9) {
          _DAT_05000200 = uVar1;
        }
      }
      else if (uVar17 == 5) {
        uVar17 = DAT_0b003638 & 0x7f;
        if (0x4f < uVar17) {
          DAT_0b003638 = uVar17;
          return;
        }
        uVar9 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar17;
        *(ushort *)((int)&DAT_0b00364c + uVar9) = uVar1;
      }
      else if (uVar17 == 1) {
        uVar17 = DAT_0b003638 & 0xfffe;
        if ((DAT_0b003638 & 1) == 0) {
          if (*(ushort *)(&DAT_0209cbec + uVar17) == uVar16) goto LAB_0200ae88;
          *(ushort *)(&DAT_0209cbec + uVar17) = uVar1;
        }
        else {
          (&DAT_0209cbec)[uVar17] = uVar4;
          (&DAT_0209cbed)[uVar17] = bVar15;
          uVar16 = uVar16 >> 8 | (param_2 & 0xff) << 8;
        }
        if (DAT_023ddeac <= uVar17) {
          if (DAT_023ddb05 == '\0') {
            iVar13 = 0x200;
          }
          else {
            iVar13 = 0x280;
          }
          if (uVar17 < iVar13 + DAT_023ddeac) {
            DAT_020b4c15 = 1;
            goto LAB_0200ae88;
          }
        }
        if ((uVar17 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar17)) {
          bVar23 = false;
        }
        else {
          (*DAT_023dc69c)(0,uVar17 - DAT_023ddea0,uVar16);
          bVar23 = true;
        }
        if ((DAT_023ddea4 <= uVar17) && (uVar17 < DAT_023dc8b8)) {
          (*DAT_023dc69c)(1,uVar17 - DAT_023ddea4,uVar16);
          bVar23 = true;
        }
        if ((DAT_023ddea8 <= uVar17) && (uVar17 < DAT_023dc8bc)) {
          (*DAT_023dc5a8)(uVar17 - DAT_023ddea8,uVar16);
        }
        if (!bVar23) {
          FUN_020076d0(uVar17,uVar16);
        }
      }
LAB_0200ae88:
      DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
      return;
    }
    if (DAT_020b4bf5 == '\0') {
      uVar9 = param_2 & 0xff;
      uVar17 = uVar16 >> 8 & 0x1f;
      if ((param_2 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | uVar16 >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | param_2 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar13 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar13 = 0;
      }
      if (uVar17 < 0xc) {
        iVar13 = 0;
      }
      (&DAT_020b4c18)[uVar17] = bVar15;
      if (iVar13 == 0) {
        switch(uVar17) {
        case 0:
          DAT_0b003644 = (byte)(uVar9 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar9 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar15 & 4;
          DAT_0b00362f = (byte)(uVar9 >> 6) & 1;
          uVar17 = uVar9 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar9 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar9 >> 4) & 1;
          DAT_023ddb06 = (char)uVar17;
          if (uVar17 == 0) {
            DAT_023dd370 = 0xe0;
            DAT_0b000004 = 0xe0;
          }
          else {
            DAT_023dd370 = 0xf0;
            DAT_0b000004 = 0xf0;
          }
          return;
        case 2:
          DAT_023ddea0 = (param_2 & 0x38) * 0x400;
          DAT_023dde8c = &DAT_020acbec + (param_2 & 0x38) * 0x200;
          if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
            DAT_023dc8a4 = 1;
          }
          ram0x023dd374 = DAT_023ddea0;
          DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
          return;
        case 3:
          DAT_023ddea8 = (param_2 & 0x3e) * 0x400;
          if (DAT_023ddb05 == '\0') {
            iVar13 = 0x800;
          }
          else {
            iVar13 = 0x1000;
          }
          DAT_023dc8bc = iVar13 + DAT_023ddea8;
          return;
        case 4:
          DAT_023ddea4 = (param_2 & 7) * 0x2000;
          DAT_023dde90 = &DAT_020acbec + (param_2 & 7) * 0x1000;
          if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
            DAT_023dc8a8 = 1;
          }
          DAT_023dd378 = DAT_023ddea4;
          DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
          return;
        case 5:
          iVar13 = (param_2 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar13;
          DAT_023ddeac = iVar13;
          return;
        case 7:
          DAT_0b003640 = param_2 & 0x3f;
          DAT_020b4bf7 = (char)(param_2 & 0x3f);
          return;
        case 10:
          DAT_020b4bf8 = (short)uVar9;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar9 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar9 >> 2) & 1;
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
          uVar17 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (param_2 & 0x81) != 0;
          if ((uVar17 != (uVar9 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar17)) {
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
          DAT_023dcea4 = (ushort)((param_2 << 0x1a) >> 0x10);
          DAT_023dcdaa = DAT_023dcea4 + 0x380;
          return;
        case 0xf:
          DAT_0b003630 = uVar9;
          return;
        case 0x10:
          uVar9 = uVar9 >> 4 & 3;
          param_2 = param_2 & 3;
          uVar17 = uVar9 | param_2 << 4;
          if (uVar17 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar17;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar9 + param_2 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[param_2];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)param_2;
          DAT_023dd372._0_1_ = (char)uVar9;
          return;
        case 0x11:
          uVar17 = (param_2 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar9 >> 7);
          DAT_023ddb04 = (char)uVar17;
          if (uVar9 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar17);
          }
          else {
            DAT_023dcfa8 = (param_2 & 0x1f) * -2 + 1;
            if (1 < uVar17) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          DAT_023dde94 = (char)(uVar9 >> 7);
          DAT_020b4c10 = (param_2 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(param_2 & 0x1f);
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
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (param_2 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar9 >> 6);
        }
        return;
      }
      return;
    }
    DAT_0b00363c = DAT_0b00363c & 3 | uVar16 >> 2 & 0x3c;
    uVar9 = DAT_0b003638 & 0x3fff | (param_2 & 3) << 0xe;
    DAT_020b4bf5 = 0;
    DAT_0b003638 = uVar9;
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar16 >> 2 & 0x20) == 0) {
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
      uVar9 = DAT_0b003634 & 0xfffffe;
      puVar10 = (ushort *)FUN_02003cc8(uVar9);
      uVar12 = DAT_0b003638;
      uVar18 = DAT_020b4c00;
      uVar21 = DAT_020b4bec;
      uVar14 = DAT_0b00363c & 0xf;
      uVar16 = DAT_020b4c00 & 0xffff;
      if (uVar14 == 3) {
        bVar15 = (&DAT_0208ebb0)[DAT_020b4bec];
        uVar9 = uVar9 << 0xf;
        if (bVar15 == 200) {
          bVar15 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        uVar18 = (uint)DAT_020b4bf7;
        do {
          uVar14 = (uint)*puVar10;
          uVar12 = (DAT_0b003638 & 0x7e) >> 1;
          uVar1 = (ushort)((uVar14 & 0xe0) << 2) | (ushort)((uVar14 & 0xe00) << 3) | 0x8000 |
                  (ushort)((uVar14 & 0xe) << 1);
          uVar9 = uVar9 + 0x8000;
          DAT_0b003638 = DAT_0b003638 + uVar17;
          if ((uVar14 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar12]) {
            (&DAT_023dc6b0)[uVar12] = (short)(uVar14 & 0xeee);
            if ((uVar12 != 0) && (uVar21 < 0xdf)) {
              (&DAT_023dc8ca)[uVar12 + (uint)(bVar15 >> 5) * 0x40] = uVar1;
              (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
            }
            DAT_0208f354 = 1;
            (&DAT_023dc730)[uVar12] = uVar1;
            if (uVar12 == uVar18) {
              _DAT_05000200 = uVar1;
            }
          }
          uVar16 = uVar16 - 1 & 0xffff;
          puVar10 = puVar10 + 1;
        } while (uVar16 != 0);
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar20 & 0xfe0000 | uVar9 >> 0xf;
        return;
      }
      if (uVar14 == 5) {
        uVar9 = uVar9 << 0xf;
        do {
          uVar18 = DAT_0b003638 & 0x7f;
          uVar21 = DAT_0b003638 & 0x7e;
          DAT_0b003638 = uVar18;
          if (0x4f < uVar18) break;
          uVar16 = uVar16 - 1 & 0xffff;
          uVar9 = uVar9 + 0x8000;
          *(ushort *)((int)&DAT_0b00364c + uVar21) = *puVar10;
          puVar10 = puVar10 + 1;
          DAT_0b003638 = uVar17 + uVar18;
        } while (uVar16 != 0);
        DAT_020b4bfc = uVar16;
        DAT_020b4c00 = uVar16;
        DAT_0b003634 = uVar20 & 0xfe0000 | uVar9 >> 0xf;
        return;
      }
      if (uVar14 != 1) {
        DAT_020b4bfc = uVar16;
        DAT_020b4c00 = uVar16;
        DAT_0b003634 = uVar9;
        return;
      }
      uStack_2c = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        uVar21 = uVar17 & 0xffff;
        uVar9 = uVar9 << 0xf;
        uStack_44 = 0;
        puVar11 = puVar10;
        uVar14 = uStack_2c;
        do {
          uVar1 = *(ushort *)(&DAT_0209cbec + uVar14);
          uVar3 = *puVar11;
          if (uVar3 != uVar1) {
            *(ushort *)(&DAT_0209cbec + uVar14) = uVar3;
            uStack_44 = uStack_44 + 1;
          }
          uVar16 = uVar16 - 1 & 0xffff;
          uVar9 = uVar9 + 0x8000;
          (&DAT_020acbec)[uVar14 >> 1] = uVar3 != uVar1;
          uVar14 = uVar14 + uVar21 & 0xffff;
          puVar11 = puVar11 + 1;
        } while (uVar16 != 0);
        uVar22 = uVar14;
        if (uVar14 <= uVar12) {
          uVar22 = uVar14 + 0x10000;
        }
        uVar9 = uVar20 & 0xfe0000 | uVar9 >> 0xf;
        if (uStack_44 == 0) {
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          DAT_0b003634 = uVar9;
          return;
        }
        if (uVar12 < DAT_023ddeac) {
LAB_0200aa30:
          bVar23 = true;
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
          bVar23 = iVar13 + DAT_023ddeac < uVar14;
          DAT_020b4c15 = 1;
        }
        uVar20 = 0;
        if (((uVar12 != DAT_023dcea4) || (DAT_023dcdaa < uVar14)) && (bVar23)) {
          if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
            if (DAT_023ddea0 < uVar22) {
              if (DAT_023dc8b4 < uVar22) {
                bVar23 = false;
              }
              else {
                bVar23 = true;
              }
            }
            else {
              bVar23 = false;
            }
          }
          else {
            bVar23 = true;
          }
          if ((uStack_2c < DAT_023ddea4) || (DAT_023dc8b8 <= uStack_2c)) {
            if (DAT_023ddea4 < uVar22) {
              if (DAT_023dc8b8 < uVar22) {
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
          if (bVar23) {
            if ((DAT_023dc8a0 >> 1 <= uVar18) && (DAT_023dc8a4 = 1, !bVar6)) {
              DAT_020b4bfc = 0;
              DAT_020b4c00 = 0;
              DAT_023dc8a4 = 1;
              DAT_0b003634 = uVar9;
              return;
            }
            uVar16 = uStack_2c - DAT_023ddea0;
            bVar23 = (int)uVar16 < 0;
            puVar11 = puVar10;
            if (bVar23) {
              puVar11 = (ushort *)((int)puVar10 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
              uVar16 = uStack_2c;
            }
            if (bVar23) {
              uVar16 = 0;
            }
            uVar18 = uVar22 - DAT_023ddea0;
            if (DAT_023dc8a0 < uVar22 - DAT_023ddea0) {
              uVar18 = DAT_023dc8a0;
            }
            (*DAT_023dc6ac)(puVar11,uVar16,uVar17,uVar18);
            puVar11 = (ushort *)&DAT_0b003638;
            bVar23 = true;
            uStack_2c = DAT_0b003638 & 0xfffe;
          }
          else {
            puVar11 = (ushort *)0x0;
            bVar23 = false;
          }
          if (bVar6) {
            if (DAT_023dc8a0 >> 1 <= DAT_020b4c00) {
              DAT_020b4bfc = 0;
              DAT_020b4c00 = 0;
              DAT_023dc8a8 = 1;
              DAT_0b003634 = uVar9;
              return;
            }
            iVar13 = uStack_2c - DAT_023ddea4;
            bVar23 = iVar13 < 0;
            if (bVar23) {
              iVar13 = 0;
              puVar11 = (ushort *)((int)puVar10 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
            }
            if (!bVar23) {
              puVar11 = puVar10;
            }
            uVar16 = uVar22 - DAT_023ddea4;
            if (DAT_023dc8a0 < uVar22 - DAT_023ddea4) {
              uVar16 = DAT_023dc8a0;
            }
            (*DAT_023dc6a0)(puVar11,iVar13,uVar17,uVar16);
            bVar23 = true;
            uStack_2c = DAT_0b003638 & 0xfffe;
          }
          if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
            (*DAT_023dc5b8)(puVar10,uStack_2c - DAT_023ddea8 & 0xffff,uVar17,DAT_020b4c00 & 0xffff);
            uStack_2c = DAT_0b003638 & 0xfffe;
          }
          if (!bVar23) {
            uVar17 = DAT_020b4c00 & 0xffff;
            if (uStack_44 == uVar17) {
              do {
                FUN_020076d0(uStack_2c,*puVar10);
                uStack_2c = uStack_2c + uVar21 & 0xffff;
                uVar17 = uVar17 - 1 & 0xffff;
                puVar10 = puVar10 + 1;
              } while (uVar17 != 0);
              uVar20 = 0;
            }
            else {
              do {
                if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                  FUN_020076d0(uStack_2c,*puVar10);
                }
                uStack_2c = uStack_2c + uVar21 & 0xffff;
                uVar17 = uVar17 - 1 & 0xffff;
                uVar20 = 0;
                puVar10 = puVar10 + 1;
              } while (uVar17 != 0);
            }
          }
        }
      }
      else {
        uVar17 = uVar17 & 0xffff;
        puVar11 = puVar10;
        uVar21 = uVar16;
        uVar22 = uStack_2c;
        do {
          uVar1 = *puVar11;
          uVar21 = uVar21 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar22] = (char)(uVar1 >> 8);
          uVar9 = uVar9 + 2 & 0x1ffff | uVar20 & 0xfe0000;
          (&DAT_0209cbed)[uVar22] = (char)uVar1;
          uVar22 = uVar22 + uVar17 & 0xffff;
          puVar11 = puVar11 + 1;
        } while (uVar21 != 0);
        if (uVar12 < DAT_023ddeac) {
LAB_0200aa20:
          bVar23 = true;
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
          bVar23 = iVar13 + DAT_023ddeac < uVar22;
          DAT_020b4c15 = 1;
        }
        uVar20 = 0;
        if (((uVar12 != DAT_023dcea4) || (DAT_023dcdaa <= uVar22)) && (bVar23)) {
          if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
            bVar23 = false;
            uVar20 = uVar16;
          }
          else {
            if (DAT_023dc8a0 >> 1 <= uVar16) {
              FUN_020075d0(0);
            }
            uStack_2c = uStack_2c - DAT_023ddea0;
            puVar11 = puVar10;
            do {
              (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar16 = uVar16 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar16 != 0);
            bVar23 = true;
            uStack_2c = DAT_0b003638 & 0xfffe;
            uVar20 = 0;
          }
          if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
            uVar20 = DAT_020b4c00 & 0xffff;
            if (DAT_023dc8a0 >> 1 <= uVar20) {
              FUN_020075d0(1);
            }
            uStack_2c = uStack_2c - DAT_023ddea4;
            puVar11 = puVar10;
            do {
              (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar20 = uVar20 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar20 != 0);
            bVar23 = true;
            uStack_2c = DAT_0b003638 & 0xfffe;
            uVar20 = 0;
          }
          if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
            uVar20 = DAT_020b4c00 & 0xffff;
            if (DAT_023ddb05 == '\0') {
              uVar16 = 0x400;
            }
            else {
              uVar16 = 0x800;
            }
            if (uVar16 <= uVar20) {
              FUN_020075d0(2);
            }
            uStack_2c = uStack_2c - DAT_023ddea8;
            puVar11 = puVar10;
            do {
              (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar20 = uVar20 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar20 != 0);
            uStack_2c = DAT_0b003638 & 0xfffe;
            uVar20 = 0;
          }
          if (!bVar23) {
            uVar16 = DAT_020b4c00 & 0xffff;
            do {
              FUN_020076d0(uStack_2c,(uint)*puVar10 << 8 | (uint)(*puVar10 >> 8));
              uStack_2c = uStack_2c + uVar17 & 0xffff;
              uVar16 = uVar16 - 1 & 0xffff;
              uVar20 = 0;
              puVar10 = puVar10 + 1;
            } while (uVar16 != 0);
          }
        }
      }
      DAT_0b003638 = uVar22 & 0xffff;
      DAT_020b4bfc = uVar20;
      DAT_020b4c00 = uVar20;
      DAT_0b003634 = uVar9;
      break;
    case 2:
      DAT_020b4bf3 = '\x01';
      break;
    case 3:
      uVar20 = (DAT_0b003634 & 0x1ffff) >> 1;
      uVar18 = uVar20 + uVar16;
      uVar21 = DAT_0b003630 & 0xffff;
      do {
        uVar12 = uVar20 ^ 1;
        uVar20 = uVar20 + 1 & 0xffff;
        (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar12];
        DAT_0b003638 = DAT_0b003638 + uVar21 & 0xffff;
      } while (uVar20 != (uVar18 & 0xffff));
      if (uVar17 == 1) {
        uVar16 = uVar16 >> 1;
        uVar21 = 2;
      }
      do {
        uVar9 = uVar9 & 0xfffe;
        if (uVar9 < DAT_023ddeac) {
LAB_0200a3f0:
          if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
            if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
              bVar23 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
              bVar23 = true;
            }
            if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
              bVar23 = true;
            }
            if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
            }
            if (!bVar23) {
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
          if (iVar13 + DAT_023ddeac <= uVar9) goto LAB_0200a3f0;
          DAT_020b4c15 = 1;
        }
        uVar16 = uVar16 - 1 & 0xffff;
        if (uVar16 == 0) {
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar9 = uVar9 + uVar21;
      } while( true );
    }
    return;
  }
  if (uVar16 == 7) {
    (&DAT_023cb634)[(param_1 & 0x7fff | DAT_02099008 & 0xffff) ^ 1] = bVar15;
    return;
  }
  if (uVar16 != 5) {
    return;
  }
  if ((int)uVar9 < 0xa10000) {
    return;
  }
  uVar17 = (int)uVar9 >> 8 & 0xff;
  if (uVar17 == 0x11) {
    if ((uVar9 & 1) == 0) {
      DAT_02099000 = (byte)(param_2 & 1);
      DAT_0b0000a8 = 1;
      DAT_0208f349 = DAT_02099000 & DAT_02099001 ^ 1;
      if ((((param_2 & 1) == 0) && (DAT_02099001 == 1)) && ((DAT_023cb610 & 2) == 0)) {
        FUN_0200081c(0x20);
      }
      DAT_02099004 = 0;
      return;
    }
    return;
  }
  if (uVar17 == 0x12) {
    if ((uVar9 & 1) == 0) {
      DAT_02099001 = (byte)(param_2 & 1);
      DAT_0b0000a8 = 1;
      DAT_0208f349 = DAT_02099001 & DAT_02099000 ^ 1;
      if ((param_2 & 1) == 0) {
        FUN_020062d0();
        FUN_02000bfc();
      }
      DAT_02099004 = 0;
      return;
    }
    return;
  }
  if (uVar17 != 0) {
    return;
  }
  if (0xa1001f < (int)uVar9) {
    return;
  }
  switch((int)uVar9 >> 1 & 0xe) {
  case 2:
    puVar8 = DAT_0b000030;
    break;
  case 4:
    puVar8 = DAT_0b000034;
    break;
  default:
    return;
  case 8:
    puVar8 = DAT_0b000030;
    goto LAB_02003820;
  case 10:
    puVar8 = DAT_0b000034;
LAB_02003820:
    *(byte *)((int)puVar8 + 0x1a) = bVar15;
    return;
  }
  *(undefined1 *)((int)puVar8 + 0x1f) = *(undefined1 *)((int)puVar8 + 0x1e);
  *(byte *)((int)puVar8 + 0x1e) = (byte)((param_2 & 0xff) >> 6) & 1;
  *(byte *)((int)puVar8 + 0x19) = bVar15;
  if ((char)puVar8[6] != '\0') {
    uVar17 = FUN_0200052c();
    puVar8[1] = uVar17;
    uVar9 = uVar17 - puVar8[2];
    *puVar8 = uVar9;
    if (0x1fff < uVar9) {
      puVar8[3] = 0;
    }
    if (0x1fff < uVar9) {
      puVar8[2] = uVar17;
    }
    if (*(short *)((int)puVar8 + 0x1e) == 0x100) {
      puVar8[3] = puVar8[3] + 1;
    }
    return;
  }
  return;
switchD_02005bc0_caseD_1:
  if (DAT_02099064 == 0x2a) {
    if (DAT_02099048 < 0x400) {
      DAT_0209904c = param_2 & 0x7f | DAT_0209904c;
      *(byte *)(DAT_02099048 + DAT_023db774) = bVar15;
      DAT_02099048 = DAT_02099048 + 1;
      return;
    }
    return;
  }
  if (DAT_02099060 != 0) {
    return;
  }
  if (((&DAT_0209927c)[DAT_02099064] != '\0') && ((byte)(&DAT_0209907c)[DAT_02099064] == uVar17)) {
    return;
  }
  (&DAT_0209907c)[DAT_02099064] = bVar15;
  iVar7 = DAT_0b00002c;
  switch(iVar13) {
  case 0x24:
    uVar17 = DAT_023db784 & 3 | uVar17 << 2;
    if (DAT_023db784 == uVar17) {
      return;
    }
    break;
  case 0x25:
    uVar17 = DAT_023db784 & 0x3fc | param_2 & 3;
    if (DAT_023db784 == uVar17) {
      return;
    }
    break;
  case 0x26:
    if (DAT_023db790 != uVar17) {
      iVar13 = (uint)(ushort)(&DAT_023dbf98)[uVar17] << 5;
      DAT_023db788 = iVar13;
      DAT_023db790 = uVar17;
      *(undefined1 *)(DAT_0b00002c + 0x48f) = 0;
      *(char *)(iVar7 + 0x48d) = (char)((uint)iVar13 >> 8);
      *(char *)(iVar7 + 0x48e) = (char)((uint)iVar13 >> 0x10);
      *(char *)(iVar7 + 0x48c) = (char)iVar13;
      iVar13 = DAT_0b00002c;
      *(undefined1 *)(DAT_0b00002c + 0x490) = (undefined1)DAT_023db788;
      *(undefined1 *)(iVar13 + 0x491) = DAT_023db788._1_1_;
      *(undefined1 *)(iVar13 + 0x492) = DAT_023db788._2_1_;
      *(undefined1 *)(iVar13 + 0x493) = DAT_023db788._3_1_;
      return;
    }
    return;
  case 0x27:
    DAT_023db778 = uVar17;
    if ((param_2 & 0x20) != 0) {
      DAT_023db794 = DAT_023db794 & 0xfffffffd;
      puVar8 = (uint *)(DAT_0b00002c + 0x480);
      uVar17 = *puVar8 & 0xfffffffd;
      *(char *)(DAT_0b00002c + 0x483) = (char)(uVar17 >> 0x18);
      *(byte *)(iVar7 + 0x480) = (byte)*puVar8 & 0xfd;
      *(char *)(iVar7 + 0x481) = (char)(uVar17 >> 8);
      *(char *)(iVar7 + 0x482) = (char)(uVar17 >> 0x10);
    }
    iVar7 = DAT_0b00002c;
    if ((param_2 & 0x10) != 0) {
      DAT_023db794 = DAT_023db794 & 0xfffffffe;
      puVar8 = (uint *)(DAT_0b00002c + 0x480);
      uVar17 = *puVar8 & 0xfffffffe;
      *(char *)(DAT_0b00002c + 0x483) = (char)(uVar17 >> 0x18);
      *(byte *)(iVar7 + 0x480) = (byte)*puVar8 & 0xfe;
      *(char *)(iVar7 + 0x481) = (char)(uVar17 >> 8);
      *(char *)(iVar7 + 0x482) = (char)(uVar17 >> 0x10);
    }
    iVar7 = DAT_0b00002c;
    bVar2 = *(byte *)(DAT_0b00002c + 0x480);
    *(undefined1 *)(DAT_0b00002c + 0x481) = 0;
    *(undefined1 *)(iVar7 + 0x483) = 0;
    *(undefined1 *)(iVar7 + 0x482) = 0;
    *(byte *)(iVar7 + 0x480) = bVar2 & 3;
    iVar7 = DAT_0b00002c;
    uVar5 = *(undefined4 *)(DAT_0b00002c + 0x480);
    *(char *)(DAT_0b00002c + 0x483) = (char)((uint)uVar5 >> 0x18);
    *(byte *)(iVar7 + 0x481) = (byte)((uint)uVar5 >> 8) | bVar15;
    *(char *)(iVar7 + 0x482) = (char)((uint)uVar5 >> 0x10);
    *(char *)(iVar7 + 0x480) = (char)uVar5;
  default:
    if (DAT_02099050 < 0x1fe) {
      *(char *)(DAT_02099050 + DAT_023db644) = (char)iVar13;
      *(byte *)(DAT_02099050 + 1 + DAT_023db644) = bVar15;
      DAT_02099050 = DAT_02099050 + 2;
      return;
    }
    return;
  }
  iVar13 = (uint)(ushort)(&DAT_023db798)[uVar17] << 1;
  DAT_023db77c = iVar13;
  DAT_023db784 = uVar17;
  *(undefined1 *)(DAT_0b00002c + 0x487) = 0;
  *(char *)(iVar7 + 0x485) = (char)((uint)iVar13 >> 8);
  *(char *)(iVar7 + 0x486) = (char)((uint)iVar13 >> 0x10);
  *(char *)(iVar7 + 0x484) = (char)iVar13;
  iVar13 = DAT_0b00002c;
  *(undefined1 *)(DAT_0b00002c + 0x488) = (undefined1)DAT_023db77c;
  *(undefined1 *)(iVar13 + 0x489) = DAT_023db77c._1_1_;
  *(undefined1 *)(iVar13 + 0x48a) = DAT_023db77c._2_1_;
  *(undefined1 *)(iVar13 + 0x48b) = DAT_023db77c._3_1_;
  return;
}


// 0x02004ce4  write_display_palette

/* WARNING: Removing unreachable block (ram,0x02009614) */
/* WARNING: Removing unreachable block (ram,0x02009628) */
/* WARNING: Removing unreachable block (ram,0x0200962c) */
/* WARNING: Removing unreachable block (ram,0x02009630) */
/* WARNING: Removing unreachable block (ram,0x02009634) */
/* WARNING: Removing unreachable block (ram,0x02009640) */
/* WARNING: Removing unreachable block (ram,0x02009644) */
/* WARNING: Removing unreachable block (ram,0x02009648) */
/* WARNING: Removing unreachable block (ram,0x020096dc) */
/* WARNING: Removing unreachable block (ram,0x0200964c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02004ce4(int param_1,uint param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  uint uStack_44;
  uint uStack_2c;
  
  FUN_02004c50(param_1,param_2 & 0xff);
  uVar20 = DAT_0b003634;
  uVar17 = DAT_0b003630;
  iVar6 = DAT_02099068;
  iVar19 = DAT_02099064;
  uVar8 = DAT_02099054;
  param_2 = param_2 & 0xff00;
  uVar9 = param_1 + 1;
  uVar14 = param_2 >> 8;
  bVar15 = (byte)(param_2 >> 8);
  switch((int)uVar9 >> 0xd & 7) {
  case 0:
  case 1:
    (&DAT_0b00161c)[uVar9 & 0x1fff] = bVar15;
    return;
  case 2:
    do {
    } while ((_DAT_04000180 & 0xf) == 0);
    switch(uVar9 & 3) {
    case 0:
      DAT_02099060 = 0;
      DAT_02099064 = uVar14;
      return;
    case 1:
      goto switchD_02005bc0_caseD_1;
    case 2:
      DAT_02099060 = 1;
      DAT_02099068 = uVar14;
      return;
    case 3:
      if (DAT_02099060 == 0) {
        return;
      }
      if (((&DAT_0209927c)[DAT_02099068] != '\0') && ((byte)(&DAT_0209917c)[DAT_02099068] == uVar14)
         ) {
        return;
      }
      (&DAT_0209917c)[DAT_02099068] = bVar15;
      if (0x1fd < uVar8) {
        return;
      }
      DAT_02099054 = uVar8 + 2;
      *(char *)(uVar8 + DAT_023db760) = (char)iVar6;
      *(byte *)(uVar8 + 1 + DAT_023db760) = bVar15;
    default:
      return;
    }
  case 3:
    if ((uVar9 & 0xff00) == 0x6000) {
      DAT_02099008 = (uVar14 & 1) << 0x17 | DAT_02099008 >> 1 & 0xff8000;
      return;
    }
    if ((uVar9 & 0xff00) != 0x7f00) {
      return;
    }
    if (0x17 < (uVar9 & 0x1f)) {
      return;
    }
    if ((1 << (uVar9 & 0x1f) & 0xaa0000U) == 0) {
      return;
    }
LAB_02005adc:
    do {
    } while ((_DAT_04000180 & 0xf) == 0);
    if (DAT_02099058 < 0x100) {
      *(byte *)(DAT_02099058 + DAT_023db658) = bVar15;
      DAT_02099058 = DAT_02099058 + 1;
    }
    if ((uVar14 & 0x80) == 0) {
      if ((DAT_0209939c & 1) == 0) {
        *(uint *)(&DAT_0209937c + DAT_0209939c * 4) =
             *(uint *)(&DAT_0209937c + DAT_0209939c * 4) & 0xf | (uVar14 & 0x3f) << 4;
        return;
      }
      return;
    }
    DAT_0209939c = (int)(uVar14 & 0x70) >> 4;
    *(uint *)(&DAT_0209937c + DAT_0209939c * 4) =
         *(uint *)(&DAT_0209937c + DAT_0209939c * 4) & 0x3f0 | uVar14 & 0xf;
    return;
  }
  uVar8 = uVar9 & 0x7fff | DAT_02099008;
  uVar16 = (int)uVar8 >> 0x15 & 7;
  if (uVar16 == 6) {
    if ((uVar8 & 0xe700e0) != 0xc00000) {
      return;
    }
    if (0x17 < (uVar8 & 0x1f)) {
      return;
    }
    uVar9 = 1 << (uVar8 & 0x1f);
    if ((uVar9 & 0xaa0000) != 0) goto LAB_02005adc;
    if ((uVar9 & 0xff) == 0) {
      return;
    }
    if ((uVar8 & 0x1c) == 0) {
      if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
         ((DAT_0b00363c & 0x20) != 0)) {
        FUN_02009e3c();
      }
      uVar8 = DAT_0b003630;
      uVar17 = DAT_020b4c00;
      if (DAT_020b4bf3 != '\0') {
        bVar22 = (DAT_0b003638 & 1) == 0;
        uVar20 = DAT_0b003638 & 0xffff;
        if (bVar22) {
          puVar18 = &DAT_0209cbec + uVar20;
        }
        else {
          puVar18 = (undefined1 *)(DAT_0b003638 & 0xfffe);
        }
        uVar9 = DAT_0b003630 & 0xffff;
        if (!bVar22) {
          (&DAT_0209cbec)[(int)puVar18] = bVar15;
        }
        uVar17 = uVar17 & 0xffff;
        if (bVar22) {
          (&DAT_0209cbec)[uVar20] = 0;
          puVar18[1] = bVar15;
        }
        if (!bVar22) {
          (&DAT_0209cbec)[uVar20] = 0;
        }
        uVar12 = uVar20 + uVar9 & 0xffff;
        uVar16 = uVar17;
        if (uVar17 != 0) {
          do {
            uVar16 = uVar16 - 1 & 0xffff;
            (&DAT_0209cbec)[uVar12] = bVar15;
            uVar12 = uVar12 + uVar9 & 0xffff;
          } while (uVar16 != 0);
          uVar20 = DAT_0b003638;
          if (uVar17 == 0xffff && uVar14 == 0) {
            DAT_0b003638 = uVar12;
            FUN_02007420();
            DAT_020b4bf3 = 0;
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            return;
          }
        }
        DAT_0b003638 = uVar12;
        uVar20 = uVar20 & 0xfffe;
        if (uVar8 == 1) {
          uVar17 = uVar17 >> 1;
          uVar9 = 2;
        }
        do {
          if (uVar20 < DAT_023ddeac) {
LAB_0200adc4:
            if ((uVar20 < DAT_023dcea4) || (DAT_023dcdaa <= uVar20)) {
              if ((uVar20 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar20)) {
                bVar22 = false;
              }
              else {
                (*DAT_023dc69c)(0,uVar20 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar20));
                bVar22 = true;
              }
              if ((DAT_023ddea4 <= uVar20) && (uVar20 < DAT_023dc8b8)) {
                (*DAT_023dc69c)(1,uVar20 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar20));
                bVar22 = true;
              }
              if ((DAT_023ddea8 <= uVar20) && (uVar20 < DAT_023dc8bc)) {
                (*DAT_023dc5a8)(uVar20 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar20));
              }
              if (!bVar22) {
                FUN_020076d0(uVar20,*(undefined2 *)(&DAT_0209cbec + uVar20));
              }
            }
          }
          else {
            if (DAT_023ddb05 == '\0') {
              iVar19 = 0x200;
            }
            else {
              iVar19 = 0x280;
            }
            if (iVar19 + DAT_023ddeac <= uVar20) goto LAB_0200adc4;
            DAT_020b4c15 = 1;
          }
          uVar17 = uVar17 - 1 & 0xffff;
          if (uVar17 == 0) {
            DAT_020b4bf3 = 0;
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            return;
          }
          uVar20 = uVar20 + uVar9 & 0xfffe;
        } while( true );
      }
      uVar17 = DAT_0b00363c & 0xf;
      uVar1 = (ushort)(param_2 >> 8);
      if (uVar17 == 3) {
        uVar17 = (DAT_0b003638 & 0x7e) >> 1;
        (&DAT_023dc6b0)[uVar17] = uVar1 & 0xeee;
        uVar1 = (ushort)((uVar14 & 0xe0) << 2) | 0x8000 | (ushort)((uVar14 & 0xe) << 1);
        if ((uVar17 != 0) && (DAT_020b4bec < 0xdf)) {
          bVar15 = (&DAT_0208ebb0)[DAT_020b4bec];
          if (bVar15 == 200) {
            bVar15 = (&DAT_0208ebaf)[DAT_020b4bec];
          }
          (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
          (&DAT_023dc8ca)[uVar17 + (uint)(bVar15 >> 5) * 0x40] = uVar1;
        }
        uVar14 = (uint)DAT_020b4bf7;
        (&DAT_023dc730)[uVar17] = uVar1;
        DAT_0208f354 = 1;
        if (uVar17 == uVar14) {
          _DAT_05000200 = uVar1;
        }
      }
      else if (uVar17 == 5) {
        uVar17 = DAT_0b003638 & 0x7f;
        if (0x4f < uVar17) {
          DAT_0b003638 = uVar17;
          return;
        }
        uVar14 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar17;
        *(ushort *)((int)&DAT_0b00364c + uVar14) = uVar1;
      }
      else if (uVar17 == 1) {
        uVar17 = DAT_0b003638 & 0xfffe;
        if ((DAT_0b003638 & 1) == 0) {
          if (*(ushort *)(&DAT_0209cbec + uVar17) == uVar14) goto LAB_0200ae88;
          *(ushort *)(&DAT_0209cbec + uVar17) = uVar1;
        }
        else {
          (&DAT_0209cbec)[uVar17] = 0;
          (&DAT_0209cbed)[uVar17] = bVar15;
          uVar14 = uVar14 << 8;
        }
        if (DAT_023ddeac <= uVar17) {
          if (DAT_023ddb05 == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          if (uVar17 < iVar19 + DAT_023ddeac) {
            DAT_020b4c15 = 1;
            goto LAB_0200ae88;
          }
        }
        if ((uVar17 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar17)) {
          bVar22 = false;
        }
        else {
          (*DAT_023dc69c)(0,uVar17 - DAT_023ddea0,uVar14);
          bVar22 = true;
        }
        if ((DAT_023ddea4 <= uVar17) && (uVar17 < DAT_023dc8b8)) {
          (*DAT_023dc69c)(1,uVar17 - DAT_023ddea4,uVar14);
          bVar22 = true;
        }
        if ((DAT_023ddea8 <= uVar17) && (uVar17 < DAT_023dc8bc)) {
          (*DAT_023dc5a8)(uVar17 - DAT_023ddea8,uVar14);
        }
        if (!bVar22) {
          FUN_020076d0(uVar17,uVar14);
        }
      }
LAB_0200ae88:
      DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
      return;
    }
    if (DAT_020b4bf5 == '\0') {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c;
      DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar14;
      return;
    }
    DAT_0b00363c = DAT_0b00363c & 3 | param_2 >> 10 & 0x3c;
    uVar14 = DAT_0b003638 & 0x3fff | (uVar14 & 3) << 0xe;
    DAT_020b4bf5 = 0;
    DAT_0b003638 = uVar14;
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((param_2 >> 10 & 0x20) == 0) {
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
      uVar14 = DAT_0b003634 & 0xfffffe;
      puVar10 = (ushort *)FUN_02003cc8(uVar14);
      uVar12 = DAT_0b003638;
      uVar16 = DAT_020b4c00;
      uVar9 = DAT_020b4bec;
      uVar13 = DAT_0b00363c & 0xf;
      uVar8 = DAT_020b4c00 & 0xffff;
      if (uVar13 == 3) {
        bVar15 = (&DAT_0208ebb0)[DAT_020b4bec];
        uVar14 = uVar14 << 0xf;
        if (bVar15 == 200) {
          bVar15 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        uVar16 = (uint)DAT_020b4bf7;
        do {
          uVar13 = (uint)*puVar10;
          uVar12 = (DAT_0b003638 & 0x7e) >> 1;
          uVar1 = (ushort)((uVar13 & 0xe0) << 2) | (ushort)((uVar13 & 0xe00) << 3) | 0x8000 |
                  (ushort)((uVar13 & 0xe) << 1);
          uVar14 = uVar14 + 0x8000;
          DAT_0b003638 = DAT_0b003638 + uVar17;
          if ((uVar13 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar12]) {
            (&DAT_023dc6b0)[uVar12] = (short)(uVar13 & 0xeee);
            if ((uVar12 != 0) && (uVar9 < 0xdf)) {
              (&DAT_023dc8ca)[uVar12 + (uint)(bVar15 >> 5) * 0x40] = uVar1;
              (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
            }
            DAT_0208f354 = 1;
            (&DAT_023dc730)[uVar12] = uVar1;
            if (uVar12 == uVar16) {
              _DAT_05000200 = uVar1;
            }
          }
          uVar8 = uVar8 - 1 & 0xffff;
          puVar10 = puVar10 + 1;
        } while (uVar8 != 0);
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar20 & 0xfe0000 | uVar14 >> 0xf;
        return;
      }
      if (uVar13 == 5) {
        uVar14 = uVar14 << 0xf;
        do {
          uVar16 = DAT_0b003638 & 0x7f;
          uVar9 = DAT_0b003638 & 0x7e;
          DAT_0b003638 = uVar16;
          if (0x4f < uVar16) break;
          uVar8 = uVar8 - 1 & 0xffff;
          uVar14 = uVar14 + 0x8000;
          *(ushort *)((int)&DAT_0b00364c + uVar9) = *puVar10;
          puVar10 = puVar10 + 1;
          DAT_0b003638 = uVar17 + uVar16;
        } while (uVar8 != 0);
        DAT_020b4bfc = uVar8;
        DAT_020b4c00 = uVar8;
        DAT_0b003634 = uVar20 & 0xfe0000 | uVar14 >> 0xf;
        return;
      }
      if (uVar13 != 1) {
        DAT_020b4bfc = uVar8;
        DAT_020b4c00 = uVar8;
        DAT_0b003634 = uVar14;
        return;
      }
      uStack_2c = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        uVar9 = uVar17 & 0xffff;
        uVar14 = uVar14 << 0xf;
        uStack_44 = 0;
        puVar11 = puVar10;
        uVar13 = uStack_2c;
        do {
          uVar1 = *(ushort *)(&DAT_0209cbec + uVar13);
          uVar3 = *puVar11;
          if (uVar3 != uVar1) {
            *(ushort *)(&DAT_0209cbec + uVar13) = uVar3;
            uStack_44 = uStack_44 + 1;
          }
          uVar8 = uVar8 - 1 & 0xffff;
          uVar14 = uVar14 + 0x8000;
          (&DAT_020acbec)[uVar13 >> 1] = uVar3 != uVar1;
          uVar13 = uVar13 + uVar9 & 0xffff;
          puVar11 = puVar11 + 1;
        } while (uVar8 != 0);
        uVar21 = uVar13;
        if (uVar13 <= uVar12) {
          uVar21 = uVar13 + 0x10000;
        }
        uVar14 = uVar20 & 0xfe0000 | uVar14 >> 0xf;
        if (uStack_44 == 0) {
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          DAT_0b003634 = uVar14;
          return;
        }
        if (uVar12 < DAT_023ddeac) {
LAB_0200aa30:
          bVar22 = true;
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          if (iVar19 + DAT_023ddeac <= uVar12) goto LAB_0200aa30;
          if (DAT_023ddb05 == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          bVar22 = iVar19 + DAT_023ddeac < uVar13;
          DAT_020b4c15 = 1;
        }
        uVar20 = 0;
        if (((uVar12 != DAT_023dcea4) || (DAT_023dcdaa < uVar13)) && (bVar22)) {
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
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
            }
            else {
              bVar5 = false;
            }
          }
          else {
            bVar5 = true;
          }
          if (bVar22) {
            if ((DAT_023dc8a0 >> 1 <= uVar16) && (DAT_023dc8a4 = 1, !bVar5)) {
              DAT_020b4bfc = 0;
              DAT_020b4c00 = 0;
              DAT_023dc8a4 = 1;
              DAT_0b003634 = uVar14;
              return;
            }
            uVar8 = uStack_2c - DAT_023ddea0;
            bVar22 = (int)uVar8 < 0;
            puVar11 = puVar10;
            if (bVar22) {
              puVar11 = (ushort *)((int)puVar10 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
              uVar8 = uStack_2c;
            }
            if (bVar22) {
              uVar8 = 0;
            }
            uVar16 = uVar21 - DAT_023ddea0;
            if (DAT_023dc8a0 < uVar21 - DAT_023ddea0) {
              uVar16 = DAT_023dc8a0;
            }
            (*DAT_023dc6ac)(puVar11,uVar8,uVar17,uVar16);
            puVar11 = (ushort *)&DAT_0b003638;
            bVar22 = true;
            uStack_2c = DAT_0b003638 & 0xfffe;
          }
          else {
            puVar11 = (ushort *)0x0;
            bVar22 = false;
          }
          if (bVar5) {
            if (DAT_023dc8a0 >> 1 <= DAT_020b4c00) {
              DAT_020b4bfc = 0;
              DAT_020b4c00 = 0;
              DAT_023dc8a8 = 1;
              DAT_0b003634 = uVar14;
              return;
            }
            iVar19 = uStack_2c - DAT_023ddea4;
            bVar22 = iVar19 < 0;
            if (bVar22) {
              iVar19 = 0;
              puVar11 = (ushort *)((int)puVar10 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
            }
            if (!bVar22) {
              puVar11 = puVar10;
            }
            uVar8 = uVar21 - DAT_023ddea4;
            if (DAT_023dc8a0 < uVar21 - DAT_023ddea4) {
              uVar8 = DAT_023dc8a0;
            }
            (*DAT_023dc6a0)(puVar11,iVar19,uVar17,uVar8);
            bVar22 = true;
            uStack_2c = DAT_0b003638 & 0xfffe;
          }
          if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
            (*DAT_023dc5b8)(puVar10,uStack_2c - DAT_023ddea8 & 0xffff,uVar17,DAT_020b4c00 & 0xffff);
            uStack_2c = DAT_0b003638 & 0xfffe;
          }
          if (!bVar22) {
            uVar17 = DAT_020b4c00 & 0xffff;
            if (uStack_44 == uVar17) {
              do {
                FUN_020076d0(uStack_2c,*puVar10);
                uStack_2c = uStack_2c + uVar9 & 0xffff;
                uVar17 = uVar17 - 1 & 0xffff;
                puVar10 = puVar10 + 1;
              } while (uVar17 != 0);
              uVar20 = 0;
            }
            else {
              do {
                if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                  FUN_020076d0(uStack_2c,*puVar10);
                }
                uStack_2c = uStack_2c + uVar9 & 0xffff;
                uVar17 = uVar17 - 1 & 0xffff;
                uVar20 = 0;
                puVar10 = puVar10 + 1;
              } while (uVar17 != 0);
            }
          }
        }
      }
      else {
        uVar17 = uVar17 & 0xffff;
        puVar11 = puVar10;
        uVar9 = uVar8;
        uVar21 = uStack_2c;
        do {
          uVar1 = *puVar11;
          uVar9 = uVar9 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar21] = (char)(uVar1 >> 8);
          uVar14 = uVar14 + 2 & 0x1ffff | uVar20 & 0xfe0000;
          (&DAT_0209cbed)[uVar21] = (char)uVar1;
          uVar21 = uVar21 + uVar17 & 0xffff;
          puVar11 = puVar11 + 1;
        } while (uVar9 != 0);
        if (uVar12 < DAT_023ddeac) {
LAB_0200aa20:
          bVar22 = true;
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          if (iVar19 + DAT_023ddeac <= uVar12) goto LAB_0200aa20;
          if (DAT_023ddb05 == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          bVar22 = iVar19 + DAT_023ddeac < uVar21;
          DAT_020b4c15 = 1;
        }
        uVar20 = 0;
        if (((uVar12 != DAT_023dcea4) || (DAT_023dcdaa <= uVar21)) && (bVar22)) {
          if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
            bVar22 = false;
            uVar20 = uVar8;
          }
          else {
            if (DAT_023dc8a0 >> 1 <= uVar8) {
              FUN_020075d0(0);
            }
            uStack_2c = uStack_2c - DAT_023ddea0;
            puVar11 = puVar10;
            do {
              (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar8 != 0);
            bVar22 = true;
            uStack_2c = DAT_0b003638 & 0xfffe;
            uVar20 = 0;
          }
          if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
            uVar8 = DAT_020b4c00 & 0xffff;
            if (DAT_023dc8a0 >> 1 <= uVar8) {
              FUN_020075d0(1);
            }
            uStack_2c = uStack_2c - DAT_023ddea4;
            puVar11 = puVar10;
            do {
              (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar8 != 0);
            bVar22 = true;
            uStack_2c = DAT_0b003638 & 0xfffe;
            uVar20 = 0;
          }
          if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
            uVar8 = DAT_020b4c00 & 0xffff;
            if (DAT_023ddb05 == '\0') {
              uVar20 = 0x400;
            }
            else {
              uVar20 = 0x800;
            }
            if (uVar20 <= uVar8) {
              FUN_020075d0(2);
            }
            uStack_2c = uStack_2c - DAT_023ddea8;
            puVar11 = puVar10;
            do {
              (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar11 << 8 | (uint)(*puVar11 >> 8));
              uStack_2c = (uStack_2c & 0xffff) + uVar17;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar11 = puVar11 + 1;
            } while (uVar8 != 0);
            uStack_2c = DAT_0b003638 & 0xfffe;
            uVar20 = 0;
          }
          if (!bVar22) {
            uVar8 = DAT_020b4c00 & 0xffff;
            do {
              FUN_020076d0(uStack_2c,(uint)*puVar10 << 8 | (uint)(*puVar10 >> 8));
              uStack_2c = uStack_2c + uVar17 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar20 = 0;
              puVar10 = puVar10 + 1;
            } while (uVar8 != 0);
          }
        }
      }
      DAT_0b003638 = uVar21 & 0xffff;
      DAT_020b4bfc = uVar20;
      DAT_020b4c00 = uVar20;
      DAT_0b003634 = uVar14;
      break;
    case 2:
      DAT_020b4bf3 = '\x01';
      break;
    case 3:
      uVar20 = (DAT_0b003634 & 0x1ffff) >> 1;
      uVar16 = uVar20 + uVar8;
      uVar9 = DAT_0b003630 & 0xffff;
      do {
        uVar12 = uVar20 ^ 1;
        uVar20 = uVar20 + 1 & 0xffff;
        (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar12];
        DAT_0b003638 = DAT_0b003638 + uVar9 & 0xffff;
      } while (uVar20 != (uVar16 & 0xffff));
      if (uVar17 == 1) {
        uVar8 = uVar8 >> 1;
        uVar9 = 2;
      }
      do {
        uVar14 = uVar14 & 0xfffe;
        if (uVar14 < DAT_023ddeac) {
LAB_0200a3f0:
          if ((uVar14 < DAT_023dcea4) || (DAT_023dcdaa <= uVar14)) {
            if ((uVar14 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar14)) {
              bVar22 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar14 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar14));
              bVar22 = true;
            }
            if ((DAT_023ddea4 <= uVar14) && (uVar14 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar14 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar14));
              bVar22 = true;
            }
            if ((DAT_023ddea8 <= uVar14) && (uVar14 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar14 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar14));
            }
            if (!bVar22) {
              FUN_020076d0(uVar14,*(undefined2 *)(&DAT_0209cbec + uVar14));
            }
          }
        }
        else {
          if (DAT_023ddb05 == '\0') {
            iVar19 = 0x200;
          }
          else {
            iVar19 = 0x280;
          }
          if (iVar19 + DAT_023ddeac <= uVar14) goto LAB_0200a3f0;
          DAT_020b4c15 = 1;
        }
        uVar8 = uVar8 - 1 & 0xffff;
        if (uVar8 == 0) {
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar14 = uVar14 + uVar9;
      } while( true );
    }
    return;
  }
  if (uVar16 == 7) {
    (&DAT_023cb634)[(uVar9 & 0x7fff | DAT_02099008 & 0xffff) ^ 1] = bVar15;
    return;
  }
  if (uVar16 != 5) {
    return;
  }
  if ((int)uVar8 < 0xa10000) {
    return;
  }
  uVar17 = (int)uVar8 >> 8 & 0xff;
  if (uVar17 == 0x11) {
    if ((uVar8 & 1) == 0) {
      DAT_02099000 = (byte)(uVar14 & 1);
      DAT_0b0000a8 = 1;
      DAT_0208f349 = DAT_02099000 & DAT_02099001 ^ 1;
      if ((((uVar14 & 1) == 0) && (DAT_02099001 == 1)) && ((DAT_023cb610 & 2) == 0)) {
        FUN_0200081c(0x20);
      }
      DAT_02099004 = 0;
      return;
    }
    return;
  }
  if (uVar17 == 0x12) {
    if ((uVar8 & 1) == 0) {
      DAT_02099001 = (byte)(uVar14 & 1);
      DAT_0b0000a8 = 1;
      DAT_0208f349 = DAT_02099001 & DAT_02099000 ^ 1;
      if ((uVar14 & 1) == 0) {
        FUN_020062d0();
        FUN_02000bfc();
      }
      DAT_02099004 = 0;
      return;
    }
    return;
  }
  if (uVar17 != 0) {
    return;
  }
  if (0xa1001f < (int)uVar8) {
    return;
  }
  switch((int)uVar8 >> 1 & 0xe) {
  case 2:
    puVar7 = DAT_0b000030;
    break;
  case 4:
    puVar7 = DAT_0b000034;
    break;
  default:
    return;
  case 8:
    puVar7 = DAT_0b000030;
    goto LAB_02003820;
  case 10:
    puVar7 = DAT_0b000034;
LAB_02003820:
    *(byte *)((int)puVar7 + 0x1a) = bVar15;
    return;
  }
  *(undefined1 *)((int)puVar7 + 0x1f) = *(undefined1 *)((int)puVar7 + 0x1e);
  *(byte *)((int)puVar7 + 0x1e) = (byte)(param_2 >> 0xe) & 1;
  *(byte *)((int)puVar7 + 0x19) = bVar15;
  if ((char)puVar7[6] != '\0') {
    uVar17 = FUN_0200052c();
    puVar7[1] = uVar17;
    uVar14 = uVar17 - puVar7[2];
    *puVar7 = uVar14;
    if (0x1fff < uVar14) {
      puVar7[3] = 0;
    }
    if (0x1fff < uVar14) {
      puVar7[2] = uVar17;
    }
    if (*(short *)((int)puVar7 + 0x1e) == 0x100) {
      puVar7[3] = puVar7[3] + 1;
    }
    return;
  }
  return;
switchD_02005bc0_caseD_1:
  if (DAT_02099064 == 0x2a) {
    if (DAT_02099048 < 0x400) {
      DAT_0209904c = uVar14 & 0x7f | DAT_0209904c;
      *(byte *)(DAT_02099048 + DAT_023db774) = bVar15;
      DAT_02099048 = DAT_02099048 + 1;
      return;
    }
    return;
  }
  if (DAT_02099060 != 0) {
    return;
  }
  if (((&DAT_0209927c)[DAT_02099064] != '\0') && ((byte)(&DAT_0209907c)[DAT_02099064] == uVar14)) {
    return;
  }
  (&DAT_0209907c)[DAT_02099064] = bVar15;
  iVar6 = DAT_0b00002c;
  switch(iVar19) {
  case 0x24:
    uVar17 = DAT_023db784 & 3 | uVar14 << 2;
    if (DAT_023db784 == uVar17) {
      return;
    }
    break;
  case 0x25:
    uVar17 = DAT_023db784 & 0x3fc | uVar14 & 3;
    if (DAT_023db784 == uVar17) {
      return;
    }
    break;
  case 0x26:
    if (DAT_023db790 != uVar14) {
      iVar19 = (uint)(ushort)(&DAT_023dbf98)[uVar14] << 5;
      DAT_023db788 = iVar19;
      DAT_023db790 = uVar14;
      *(undefined1 *)(DAT_0b00002c + 0x48f) = 0;
      *(char *)(iVar6 + 0x48d) = (char)((uint)iVar19 >> 8);
      *(char *)(iVar6 + 0x48e) = (char)((uint)iVar19 >> 0x10);
      *(char *)(iVar6 + 0x48c) = (char)iVar19;
      iVar19 = DAT_0b00002c;
      *(undefined1 *)(DAT_0b00002c + 0x490) = (undefined1)DAT_023db788;
      *(undefined1 *)(iVar19 + 0x491) = DAT_023db788._1_1_;
      *(undefined1 *)(iVar19 + 0x492) = DAT_023db788._2_1_;
      *(undefined1 *)(iVar19 + 0x493) = DAT_023db788._3_1_;
      return;
    }
    return;
  case 0x27:
    DAT_023db778 = uVar14;
    if ((uVar14 & 0x20) != 0) {
      DAT_023db794 = DAT_023db794 & 0xfffffffd;
      puVar7 = (uint *)(DAT_0b00002c + 0x480);
      uVar17 = *puVar7 & 0xfffffffd;
      *(char *)(DAT_0b00002c + 0x483) = (char)(uVar17 >> 0x18);
      *(byte *)(iVar6 + 0x480) = (byte)*puVar7 & 0xfd;
      *(char *)(iVar6 + 0x481) = (char)(uVar17 >> 8);
      *(char *)(iVar6 + 0x482) = (char)(uVar17 >> 0x10);
    }
    iVar6 = DAT_0b00002c;
    if ((uVar14 & 0x10) != 0) {
      DAT_023db794 = DAT_023db794 & 0xfffffffe;
      puVar7 = (uint *)(DAT_0b00002c + 0x480);
      uVar17 = *puVar7 & 0xfffffffe;
      *(char *)(DAT_0b00002c + 0x483) = (char)(uVar17 >> 0x18);
      *(byte *)(iVar6 + 0x480) = (byte)*puVar7 & 0xfe;
      *(char *)(iVar6 + 0x481) = (char)(uVar17 >> 8);
      *(char *)(iVar6 + 0x482) = (char)(uVar17 >> 0x10);
    }
    iVar6 = DAT_0b00002c;
    bVar2 = *(byte *)(DAT_0b00002c + 0x480);
    *(undefined1 *)(DAT_0b00002c + 0x481) = 0;
    *(undefined1 *)(iVar6 + 0x483) = 0;
    *(undefined1 *)(iVar6 + 0x482) = 0;
    *(byte *)(iVar6 + 0x480) = bVar2 & 3;
    iVar6 = DAT_0b00002c;
    uVar4 = *(undefined4 *)(DAT_0b00002c + 0x480);
    *(char *)(DAT_0b00002c + 0x483) = (char)((uint)uVar4 >> 0x18);
    *(byte *)(iVar6 + 0x481) = (byte)((uint)uVar4 >> 8) | bVar15;
    *(char *)(iVar6 + 0x482) = (char)((uint)uVar4 >> 0x10);
    *(char *)(iVar6 + 0x480) = (char)uVar4;
  default:
    if (DAT_02099050 < 0x1fe) {
      *(char *)(DAT_02099050 + DAT_023db644) = (char)iVar19;
      *(byte *)(DAT_02099050 + 1 + DAT_023db644) = bVar15;
      DAT_02099050 = DAT_02099050 + 2;
      return;
    }
    return;
  }
  iVar19 = (uint)(ushort)(&DAT_023db798)[uVar17] << 1;
  DAT_023db77c = iVar19;
  DAT_023db784 = uVar17;
  *(undefined1 *)(DAT_0b00002c + 0x487) = 0;
  *(char *)(iVar6 + 0x485) = (char)((uint)iVar19 >> 8);
  *(char *)(iVar6 + 0x486) = (char)((uint)iVar19 >> 0x10);
  *(char *)(iVar6 + 0x484) = (char)iVar19;
  iVar19 = DAT_0b00002c;
  *(undefined1 *)(DAT_0b00002c + 0x488) = (undefined1)DAT_023db77c;
  *(undefined1 *)(iVar19 + 0x489) = DAT_023db77c._1_1_;
  *(undefined1 *)(iVar19 + 0x48a) = DAT_023db77c._2_1_;
  *(undefined1 *)(iVar19 + 0x48b) = DAT_023db77c._3_1_;
  return;
}

