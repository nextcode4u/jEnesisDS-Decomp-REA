/* ARM9 vdp — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x01004160  write_display_palette

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01004160(uint param_1,uint param_2)

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
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar10 = DAT_0b003634;
  uVar9 = DAT_0b003630;
  uVar1 = (ushort)param_2;
  if (0xdfffff < (param_1 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (param_1 & 0xffff)) = uVar1;
    return;
  }
  if ((param_1 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(param_1 & 0xffffff) >> 0x10])(param_1 & 0xffffff);
    return;
  }
  bVar11 = (byte)param_2;
  if ((param_1 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar10 = DAT_0b003630;
    uVar9 = DAT_020b4c00;
    uVar3 = (undefined1)(param_2 >> 8);
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
      uVar9 = uVar9 & 0xffff;
      if (bVar19) {
        (&DAT_0209cbec)[uVar15] = uVar3;
        puVar13[1] = bVar11;
      }
      if (!bVar19) {
        (&DAT_0209cbec)[uVar15] = uVar3;
      }
      uVar12 = uVar15 + uVar17 & 0xffff;
      uVar16 = uVar9;
      if (uVar9 != 0) {
        do {
          uVar16 = uVar16 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar12] = bVar11;
          uVar12 = uVar12 + uVar17 & 0xffff;
        } while (uVar16 != 0);
        uVar15 = DAT_0b003638;
        if (uVar9 == 0xffff && (param_2 & 0xff) == 0) {
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
      if (uVar10 == 1) {
        uVar9 = uVar9 >> 1;
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
        uVar9 = uVar9 - 1 & 0xffff;
        if (uVar9 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar15 = uVar15 + uVar17 & 0xfffe;
      } while( true );
    }
    uVar9 = DAT_0b00363c & 0xf;
    if (uVar9 == 3) {
      uVar9 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar9] = uVar1 & 0xeee;
      uVar1 = (ushort)((param_2 & 0xe0) << 2) | (ushort)((param_2 & 0xe00) << 3) | 0x8000 |
              (ushort)((param_2 & 0xe) << 1);
      if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar11 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar11 == 200) {
          bVar11 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar11] = &DAT_023dc8ca + (uint)(bVar11 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar11 >> 5) * 0x40] = uVar1;
      }
      uVar10 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar9] = uVar1;
      DAT_0208f354 = 1;
      if (uVar9 == uVar10) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar9 == 5) {
      uVar9 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar9) {
        DAT_0b003638 = uVar9;
        return;
      }
      uVar10 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar9;
      *(ushort *)((int)&DAT_0b00364c + uVar10) = uVar1;
    }
    else if (uVar9 == 1) {
      uVar9 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar9) == param_2) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar9) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar9] = uVar3;
        (&DAT_0209cbed)[uVar9] = bVar11;
        param_2 = (param_2 >> 8 | param_2 << 8) & 0xffff;
      }
      if (DAT_023ddeac <= uVar9) {
        if (DAT_023ddb05 == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (uVar9 < iVar14 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
        bVar19 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,param_2);
        bVar19 = true;
      }
      if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,param_2);
        bVar19 = true;
      }
      if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,param_2);
      }
      if (!bVar19) {
        FUN_020076d0(uVar9,param_2);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar10 = param_2 & 0xff;
    uVar9 = param_2 >> 8 & 0x1f;
    if ((param_2 & 0xc000) != 0x8000) {
      DAT_020b4bf5 = 1;
      DAT_0b00363c = DAT_0b00363c & 0x3c | param_2 >> 0xe;
      DAT_0b003638 = DAT_0b003638 & 0xc000 | param_2 & 0x3fff;
      return;
    }
    DAT_0b00363c = 0;
    iVar14 = 1 - (uint)DAT_020b4c06;
    if (1 < DAT_020b4c06) {
      iVar14 = 0;
    }
    if (uVar9 < 0xc) {
      iVar14 = 0;
    }
    (&DAT_020b4c18)[uVar9] = bVar11;
    if (iVar14 == 0) {
      switch(uVar9) {
      case 0:
        DAT_0b003644 = (byte)(uVar10 >> 4) & 1;
        DAT_020b4bf1 = ((byte)(uVar10 >> 1) ^ 1) & 1;
        return;
      case 1:
        DAT_020b4c06 = bVar11 & 4;
        DAT_0b00362f = (byte)(uVar10 >> 6) & 1;
        uVar9 = uVar10 >> 3 & 1;
        DAT_0b00362c = (byte)(uVar10 >> 5) & 1;
        DAT_020b4bf2 = (byte)(uVar10 >> 4) & 1;
        DAT_023ddb06 = (char)uVar9;
        if (uVar9 == 0) {
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
          iVar14 = 0x800;
        }
        else {
          iVar14 = 0x1000;
        }
        DAT_023dc8bc = iVar14 + DAT_023ddea8;
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
        iVar14 = (param_2 & 0x7f) * 0x200;
        DAT_0209cbe0 = DAT_023ddeac;
        DAT_023dcdac = &DAT_0209cbec + iVar14;
        DAT_023ddeac = iVar14;
        return;
      case 7:
        DAT_0b003640 = param_2 & 0x3f;
        DAT_020b4bf7 = (char)(param_2 & 0x3f);
        return;
      case 10:
        DAT_020b4bf8 = (short)uVar10;
        return;
      case 0xb:
        DAT_020b4bf0 = (byte)(uVar10 >> 3) & 1;
        DAT_023dcfac = (byte)(uVar10 >> 2) & 1;
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
        uVar9 = (uint)DAT_020b4bf4;
        DAT_023ddb05 = (param_2 & 0x81) != 0;
        if ((uVar9 != (uVar10 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar9)) {
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
        DAT_0b003630 = uVar10;
        return;
      case 0x10:
        uVar10 = uVar10 >> 4 & 3;
        param_2 = param_2 & 3;
        uVar9 = uVar10 | param_2 << 4;
        if (uVar9 != (DAT_023dcfa4 & 0xff)) {
          DAT_0208f358 = 1;
        }
        DAT_023dcfa4 = uVar9;
        DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar10 + param_2 * 4) * 4);
        DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
        DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[param_2];
        DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
        DAT_023dcea6 = (char)param_2;
        DAT_023dd372._0_1_ = (char)uVar10;
        return;
      case 0x11:
        uVar9 = (param_2 & 0x1f) * 2;
        DAT_023ddeb4 = (char)(uVar10 >> 7);
        DAT_023ddb04 = (char)uVar9;
        if (uVar10 >> 7 == 0) {
          DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar9);
        }
        else {
          DAT_023dcfa8 = (param_2 & 0x1f) * -2 + 1;
          if (1 < uVar9) {
            DAT_023dcfa8 = 0;
          }
        }
        return;
      case 0x12:
        DAT_023dde94 = (char)(uVar10 >> 7);
        DAT_020b4c10 = (param_2 & 0x1f) << 3;
        DAT_023ddeb0 = (char)(param_2 & 0x1f);
        return;
      case 0x13:
        DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar10;
        return;
      case 0x14:
        DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar10 << 8;
        return;
      case 0x15:
        DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar10 << 1;
        return;
      case 0x16:
        DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar10 << 9;
        return;
      case 0x17:
        DAT_0b003634 = DAT_0b003634 & 0x1ffff | (param_2 & 0x7f) << 0x11;
        DAT_020b4c05 = (byte)(uVar10 >> 6);
      }
      return;
    }
    return;
  }
  DAT_0b00363c = DAT_0b00363c & 3 | param_2 >> 2 & 0x3c;
  uVar15 = DAT_0b003638 & 0x3fff | (param_2 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar15;
  if (DAT_020b4bf2 == '\0') {
    return;
  }
  if ((param_2 >> 2 & 0x20) == 0) {
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
    uVar15 = DAT_0b003634 & 0xfffffe;
    puVar5 = (ushort *)FUN_02003cc8(uVar15);
    uVar7 = DAT_0b003638;
    uVar12 = DAT_020b4c00;
    uVar16 = DAT_020b4bec;
    uVar8 = DAT_0b00363c & 0xf;
    uVar17 = DAT_020b4c00 & 0xffff;
    if (uVar8 == 3) {
      bVar11 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar15 = uVar15 << 0xf;
      if (bVar11 == 200) {
        bVar11 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar12 = (uint)DAT_020b4bf7;
      do {
        uVar8 = (uint)*puVar5;
        uVar7 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar8 & 0xe) << 1);
        uVar15 = uVar15 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar9;
        if ((uVar8 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar7]) {
          (&DAT_023dc6b0)[uVar7] = (short)(uVar8 & 0xeee);
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
        uVar17 = uVar17 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar17 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar10 & 0xfe0000 | uVar15 >> 0xf;
      return;
    }
    if (uVar8 == 5) {
      uVar15 = uVar15 << 0xf;
      do {
        uVar12 = DAT_0b003638 & 0x7f;
        uVar16 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar12;
        if (0x4f < uVar12) break;
        uVar17 = uVar17 - 1 & 0xffff;
        uVar15 = uVar15 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar16) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar9 + uVar12;
      } while (uVar17 != 0);
      DAT_020b4bfc = uVar17;
      DAT_020b4c00 = uVar17;
      DAT_0b003634 = uVar10 & 0xfe0000 | uVar15 >> 0xf;
      return;
    }
    if (uVar8 != 1) {
      DAT_020b4bfc = uVar17;
      DAT_020b4c00 = uVar17;
      DAT_0b003634 = uVar15;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar16 = uVar9 & 0xffff;
      uVar15 = uVar15 << 0xf;
      uStack_44 = 0;
      puVar6 = puVar5;
      uVar8 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar8);
        uVar2 = *puVar6;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar8) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar17 = uVar17 - 1 & 0xffff;
        uVar15 = uVar15 + 0x8000;
        (&DAT_020acbec)[uVar8 >> 1] = uVar2 != uVar1;
        uVar8 = uVar8 + uVar16 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      uVar18 = uVar8;
      if (uVar8 <= uVar7) {
        uVar18 = uVar8 + 0x10000;
      }
      uVar15 = uVar10 & 0xfe0000 | uVar15 >> 0xf;
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
        bVar19 = iVar14 + DAT_023ddeac < uVar8;
        DAT_020b4c15 = 1;
      }
      uVar10 = 0;
      if (((uVar7 != DAT_023dcea4) || (DAT_023dcdaa < uVar8)) && (bVar19)) {
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
          uVar17 = uStack_2c - DAT_023ddea0;
          bVar19 = (int)uVar17 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar17 = uStack_2c;
          }
          if (bVar19) {
            uVar17 = 0;
          }
          uVar12 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar12 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar17,uVar9,uVar12);
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
          uVar17 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar17 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar14,uVar9,uVar17);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar5,uStack_2c - DAT_023ddea8 & 0xffff,uVar9,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar19) {
          uVar9 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar9) {
            do {
              FUN_020076d0(uStack_2c,*puVar5);
              uStack_2c = uStack_2c + uVar16 & 0xffff;
              uVar9 = uVar9 - 1 & 0xffff;
              puVar5 = puVar5 + 1;
            } while (uVar9 != 0);
            uVar10 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar16 & 0xffff;
              uVar9 = uVar9 - 1 & 0xffff;
              uVar10 = 0;
              puVar5 = puVar5 + 1;
            } while (uVar9 != 0);
          }
        }
      }
    }
    else {
      uVar9 = uVar9 & 0xffff;
      puVar6 = puVar5;
      uVar16 = uVar17;
      uVar18 = uStack_2c;
      do {
        uVar1 = *puVar6;
        uVar16 = uVar16 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar18] = (char)(uVar1 >> 8);
        uVar15 = uVar15 + 2 & 0x1ffff | uVar10 & 0xfe0000;
        (&DAT_0209cbed)[uVar18] = (char)uVar1;
        uVar18 = uVar18 + uVar9 & 0xffff;
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
      uVar10 = 0;
      if (((uVar7 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar10 = uVar17;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar17) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar9;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar10 = 0;
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
            uStack_2c = (uStack_2c & 0xffff) + uVar9;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar10 = 0;
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
            uStack_2c = (uStack_2c & 0xffff) + uVar9;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar10 = 0;
        }
        if (!bVar19) {
          uVar17 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar9 & 0xffff;
            uVar17 = uVar17 - 1 & 0xffff;
            uVar10 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    DAT_0b003638 = uVar18 & 0xffff;
    DAT_020b4bfc = uVar10;
    DAT_020b4c00 = uVar10;
    DAT_0b003634 = uVar15;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar10 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar12 = uVar10 + uVar17;
    uVar16 = DAT_0b003630 & 0xffff;
    do {
      uVar7 = uVar10 ^ 1;
      uVar10 = uVar10 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar7];
      DAT_0b003638 = DAT_0b003638 + uVar16 & 0xffff;
    } while (uVar10 != (uVar12 & 0xffff));
    if (uVar9 == 1) {
      uVar17 = uVar17 >> 1;
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
      uVar17 = uVar17 - 1 & 0xffff;
      if (uVar17 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar15 = uVar15 + uVar16;
    } while( true );
  }
  return;
}


// 0x01004194  write_display_palette

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01004194(uint param_1,uint param_2)

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
  uint uVar11;
  byte bVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int unaff_r8;
  uint uVar19;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar1 = (ushort)param_2;
  if (0xdfffff < (param_1 & 0xf00000)) {
    puVar5 = (undefined2 *)(unaff_r8 + (param_1 & 0xffff));
    *puVar5 = (short)(param_2 >> 0x10);
    puVar5[1] = uVar1;
    return;
  }
  if ((param_1 & 0xf00000) < 0xc00000) {
    param_1 = param_1 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[param_1 >> 0x10])(param_1,param_2 >> 0x10);
    (*(code *)(&DAT_0b00121c)[param_1 >> 0x10])(param_1 + 2,param_2 & 0xffff);
    return;
  }
  bVar12 = (byte)param_2;
  if ((param_1 & 0x1c) == 0) {
    FUN_0200ac7c(param_2 >> 0x10);
    uVar17 = param_2 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar16 = DAT_0b003630;
    uVar11 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar17 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar20 = (DAT_0b003638 & 1) == 0;
      uVar17 = DAT_0b003638 & 0xffff;
      if (bVar20) {
        puVar14 = &DAT_0209cbec + uVar17;
      }
      else {
        puVar14 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar18 = DAT_0b003630 & 0xffff;
      if (!bVar20) {
        (&DAT_0209cbec)[(int)puVar14] = bVar12;
      }
      uVar11 = uVar11 & 0xffff;
      if (bVar20) {
        (&DAT_0209cbec)[uVar17] = uVar3;
        puVar14[1] = bVar12;
      }
      if (!bVar20) {
        (&DAT_0209cbec)[uVar17] = uVar3;
      }
      uVar13 = uVar17 + uVar18 & 0xffff;
      uVar8 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar8 = uVar8 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar13] = bVar12;
          uVar13 = uVar13 + uVar18 & 0xffff;
        } while (uVar8 != 0);
        uVar17 = DAT_0b003638;
        if (uVar11 == 0xffff && (param_2 & 0xff) == 0) {
          DAT_0b003638 = uVar13;
          FUN_02007420();
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
      }
      DAT_0b003638 = uVar13;
      uVar17 = uVar17 & 0xfffe;
      if (uVar16 == 1) {
        uVar11 = uVar11 >> 1;
        uVar18 = 2;
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
            iVar15 = 0x200;
          }
          else {
            iVar15 = 0x280;
          }
          if (iVar15 + DAT_023ddeac <= uVar17) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar11 = uVar11 - 1 & 0xffff;
        if (uVar11 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar17 = uVar17 + uVar18 & 0xfffe;
      } while( true );
    }
    uVar11 = DAT_0b00363c & 0xf;
    if (uVar11 == 3) {
      uVar17 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar17] = uVar1 & 0xeee;
      uVar1 = (ushort)((param_2 & 0xe0) << 2) | (ushort)((param_2 & 0xe00) << 3) | 0x8000 |
              (ushort)((param_2 & 0xe) << 1);
      if ((uVar17 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar12 == 200) {
          bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar17 + (uint)(bVar12 >> 5) * 0x40] = uVar1;
      }
      uVar11 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar17] = uVar1;
      DAT_0208f354 = 1;
      if (uVar17 == uVar11) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar11 == 5) {
      uVar17 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar17) {
        DAT_0b003638 = uVar17;
        return;
      }
      uVar11 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar17;
      *(ushort *)((int)&DAT_0b00364c + uVar11) = uVar1;
    }
    else if (uVar11 == 1) {
      uVar11 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar11) == uVar17) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar11) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar11] = uVar3;
        (&DAT_0209cbed)[uVar11] = bVar12;
        uVar17 = (param_2 & 0xffff) >> 8 | (param_2 & 0xff) << 8;
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
  if (DAT_020b4bf5 == '\0') {
    uVar11 = param_2 >> 2 & 0x3c | param_2 >> 0x1e;
    uVar17 = (param_2 & 3) << 0xe | (param_2 & 0x3fffffff) >> 0x10;
    if ((param_2 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar17;
    DAT_0b00363c = uVar11;
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((param_2 >> 2 & 0x20) == 0) {
      return;
    }
  }
  else {
LAB_0200ac58:
    FUN_0200aaf8(param_2 >> 0x10);
    uVar17 = (param_2 & 0xffff) >> 2;
    if (DAT_020b4bf5 == '\0') {
      uVar11 = param_2 & 0xff;
      uVar17 = (param_2 & 0xffff) >> 8 & 0x1f;
      if ((param_2 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (param_2 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | param_2 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar15 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar15 = 0;
      }
      if (uVar17 < 0xc) {
        iVar15 = 0;
      }
      (&DAT_020b4c18)[uVar17] = bVar12;
      if (iVar15 == 0) {
        switch(uVar17) {
        case 0:
          DAT_0b003644 = (byte)(uVar11 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar11 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar12 & 4;
          DAT_0b00362f = (byte)(uVar11 >> 6) & 1;
          uVar17 = uVar11 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar11 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar11 >> 4) & 1;
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
            iVar15 = 0x800;
          }
          else {
            iVar15 = 0x1000;
          }
          DAT_023dc8bc = iVar15 + DAT_023ddea8;
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
          iVar15 = (param_2 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar15;
          DAT_023ddeac = iVar15;
          return;
        case 7:
          DAT_0b003640 = param_2 & 0x3f;
          DAT_020b4bf7 = (char)(param_2 & 0x3f);
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
          uVar17 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (param_2 & 0x81) != 0;
          if ((uVar17 != (uVar11 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar17)) {
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
          DAT_0b003630 = uVar11;
          return;
        case 0x10:
          uVar11 = uVar11 >> 4 & 3;
          param_2 = param_2 & 3;
          uVar17 = uVar11 | param_2 << 4;
          if (uVar17 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar17;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar11 + param_2 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[param_2];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)param_2;
          DAT_023dd372._0_1_ = (char)uVar11;
          return;
        case 0x11:
          uVar17 = (param_2 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar11 >> 7);
          DAT_023ddb04 = (char)uVar17;
          if (uVar11 >> 7 == 0) {
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
          DAT_023dde94 = (char)(uVar11 >> 7);
          DAT_020b4c10 = (param_2 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(param_2 & 0x1f);
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
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (param_2 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar11 >> 6);
        }
        return;
      }
      return;
    }
    DAT_0b00363c = DAT_0b00363c & 3 | uVar17 & 0x3c;
    DAT_0b003638 = DAT_0b003638 & 0x3fff | (param_2 & 3) << 0xe;
    DAT_020b4bf5 = '\0';
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar17 & 0x20) == 0) {
      return;
    }
  }
  uVar16 = DAT_0b003634;
  uVar17 = DAT_0b003630;
  uVar11 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar11 = 0xffff;
  }
  DAT_020b4c00 = uVar11;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar11 = DAT_0b003634 & 0xfffffe;
    puVar6 = (ushort *)FUN_02003cc8(uVar11);
    uVar9 = DAT_0b003638;
    uVar13 = DAT_020b4c00;
    uVar8 = DAT_020b4bec;
    uVar10 = DAT_0b00363c & 0xf;
    uVar18 = DAT_020b4c00 & 0xffff;
    if (uVar10 == 3) {
      bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar11 = uVar11 << 0xf;
      if (bVar12 == 200) {
        bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar13 = (uint)DAT_020b4bf7;
      do {
        uVar10 = (uint)*puVar6;
        uVar9 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar10 & 0xe0) << 2) | (ushort)((uVar10 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar10 & 0xe) << 1);
        uVar11 = uVar11 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar17;
        if ((uVar10 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar9]) {
          (&DAT_023dc6b0)[uVar9] = (short)(uVar10 & 0xeee);
          if ((uVar9 != 0) && (uVar8 < 0xdf)) {
            (&DAT_023dc8ca)[uVar9 + (uint)(bVar12 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar9] = uVar1;
          if (uVar9 == uVar13) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar18 = uVar18 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar18 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar16 & 0xfe0000 | uVar11 >> 0xf;
      return;
    }
    if (uVar10 == 5) {
      uVar11 = uVar11 << 0xf;
      do {
        uVar13 = DAT_0b003638 & 0x7f;
        uVar8 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar13;
        if (0x4f < uVar13) break;
        uVar18 = uVar18 - 1 & 0xffff;
        uVar11 = uVar11 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar8) = *puVar6;
        puVar6 = puVar6 + 1;
        DAT_0b003638 = uVar17 + uVar13;
      } while (uVar18 != 0);
      DAT_020b4bfc = uVar18;
      DAT_020b4c00 = uVar18;
      DAT_0b003634 = uVar16 & 0xfe0000 | uVar11 >> 0xf;
      return;
    }
    if (uVar10 != 1) {
      DAT_020b4bfc = uVar18;
      DAT_020b4c00 = uVar18;
      DAT_0b003634 = uVar11;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar8 = uVar17 & 0xffff;
      uVar11 = uVar11 << 0xf;
      uStack_44 = 0;
      puVar7 = puVar6;
      uVar10 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar10);
        uVar2 = *puVar7;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar10) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar18 = uVar18 - 1 & 0xffff;
        uVar11 = uVar11 + 0x8000;
        (&DAT_020acbec)[uVar10 >> 1] = uVar2 != uVar1;
        uVar10 = uVar10 + uVar8 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      uVar19 = uVar10;
      if (uVar10 <= uVar9) {
        uVar19 = uVar10 + 0x10000;
      }
      uVar11 = uVar16 & 0xfe0000 | uVar11 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar11;
        return;
      }
      if (uVar9 < DAT_023ddeac) {
LAB_0200aa30:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar20 = iVar15 + DAT_023ddeac < uVar10;
        DAT_020b4c15 = 1;
      }
      uVar16 = 0;
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
          if ((DAT_023dc8a0 >> 1 <= uVar13) && (DAT_023dc8a4 = 1, !bVar4)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar11;
            return;
          }
          uVar18 = uStack_2c - DAT_023ddea0;
          bVar20 = (int)uVar18 < 0;
          puVar7 = puVar6;
          if (bVar20) {
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar18 = uStack_2c;
          }
          if (bVar20) {
            uVar18 = 0;
          }
          uVar13 = uVar19 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea0) {
            uVar13 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar7,uVar18,uVar17,uVar13);
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
            DAT_0b003634 = uVar11;
            return;
          }
          iVar15 = uStack_2c - DAT_023ddea4;
          bVar20 = iVar15 < 0;
          if (bVar20) {
            iVar15 = 0;
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar7 = puVar6;
          }
          uVar18 = uVar19 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea4) {
            uVar18 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar7,iVar15,uVar17,uVar18);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar6,uStack_2c - DAT_023ddea8 & 0xffff,uVar17,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar20) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar17) {
            do {
              FUN_020076d0(uStack_2c,*puVar6);
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar17 = uVar17 - 1 & 0xffff;
              puVar6 = puVar6 + 1;
            } while (uVar17 != 0);
            uVar16 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar6);
              }
              uStack_2c = uStack_2c + uVar8 & 0xffff;
              uVar17 = uVar17 - 1 & 0xffff;
              uVar16 = 0;
              puVar6 = puVar6 + 1;
            } while (uVar17 != 0);
          }
        }
      }
    }
    else {
      uVar17 = uVar17 & 0xffff;
      puVar7 = puVar6;
      uVar8 = uVar18;
      uVar19 = uStack_2c;
      do {
        uVar1 = *puVar7;
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar19] = (char)(uVar1 >> 8);
        uVar11 = uVar11 + 2 & 0x1ffff | uVar16 & 0xfe0000;
        (&DAT_0209cbed)[uVar19] = (char)uVar1;
        uVar19 = uVar19 + uVar17 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar8 != 0);
      if (uVar9 < DAT_023ddeac) {
LAB_0200aa20:
        bVar20 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar20 = iVar15 + DAT_023ddeac < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar16 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar16 = uVar18;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar18) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar17;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar18 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar16 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar16 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar16) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar17;
            uVar16 = uVar16 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar16 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar16 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar16 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar18 = 0x400;
          }
          else {
            uVar18 = 0x800;
          }
          if (uVar18 <= uVar16) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar7 = puVar6;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar17;
            uVar16 = uVar16 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar16 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar16 = 0;
        }
        if (!bVar20) {
          uVar18 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar17 & 0xffff;
            uVar18 = uVar18 - 1 & 0xffff;
            uVar16 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar18 != 0);
        }
      }
    }
    DAT_0b003638 = uVar19 & 0xffff;
    DAT_020b4bfc = uVar16;
    DAT_020b4c00 = uVar16;
    DAT_0b003634 = uVar11;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar16 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar13 = uVar16 + uVar11;
    uVar18 = DAT_0b003630 & 0xffff;
    uVar8 = DAT_0b003638;
    do {
      uVar9 = uVar16 ^ 1;
      uVar16 = uVar16 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar8 ^ 1] = (&DAT_0209cbec)[uVar9];
      uVar8 = uVar8 + uVar18 & 0xffff;
    } while (uVar16 != (uVar13 & 0xffff));
    uVar16 = DAT_0b003638;
    if (uVar17 == 1) {
      uVar11 = uVar11 >> 1;
      uVar18 = 2;
    }
    do {
      DAT_0b003638 = uVar8;
      uVar16 = uVar16 & 0xfffe;
      if (uVar16 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar16 < DAT_023dcea4) || (DAT_023dcdaa <= uVar16)) {
          if ((uVar16 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar16)) {
            bVar20 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar16 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar16));
            bVar20 = true;
          }
          if ((DAT_023ddea4 <= uVar16) && (uVar16 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar16 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar16));
            bVar20 = true;
          }
          if ((DAT_023ddea8 <= uVar16) && (uVar16 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar16 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar16));
          }
          if (!bVar20) {
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
        if (iVar15 + DAT_023ddeac <= uVar16) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar11 = uVar11 - 1 & 0xffff;
      if (uVar11 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar16 = uVar16 + uVar18;
      uVar8 = DAT_0b003638;
    } while( true );
  }
  return;
}


// 0x02000f3c  write_display_status

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000f3c(void)

{
  if (DAT_020b4ce8 == 1) {
    FUN_020083ec(0);
    DAT_020b4ce8 = 2;
  }
  else if (DAT_020b4ce8 == 2) {
    thunk_FUN_020801fc(2);
    DAT_020b4ce8 = 0;
  }
  else if (DAT_020b4ce8 == 0) {
    thunk_FUN_0208024c(2);
    DAT_020b4ce8 = 1;
  }
  _DAT_04000004 =
       _DAT_04000004 & 0x7f | (&DAT_02085a08)[DAT_020b4ce8] << 8 |
       (ushort)(((ushort)(&DAT_02085a08)[DAT_020b4ce8] & 0x100) >> 1);
  return;
}


// 0x0200106c  write_display_status_and_interrupt_master_enable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0200106c(void)

{
  if (DAT_02098fc4 == 0) {
    thunk_FUN_02080100();
  }
  else if (DAT_02098fc4 == 1) {
    thunk_FUN_0208024c(1);
    thunk_FUN_0208014c(1);
  }
  DAT_02098fc4 = 2;
  thunk_FUN_02080098(2,&LAB_02000f1c);
  _DAT_04000004 = _DAT_04000004 & 0x7f | 0xc000;
  DAT_020b4ce8 = 0;
  thunk_FUN_02080098(4,FUN_02000f3c);
  thunk_FUN_02080098(1,&LAB_02000fdc);
  _DAT_04000004 = _DAT_04000004 | 0x38;
  _DAT_04000210 = _DAT_04000210 | 7;
  _DAT_04000208 = 1;
  return;
}


// 0x02001118  write_display_status_and_interrupt_master_enable

/* WARNING: Removing unreachable block (ram,0x02080216) */
/* WARNING: Removing unreachable block (ram,0x02080228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02001118(void)

{
  if (DAT_02098fc4 == 0) {
    thunk_FUN_02080100();
  }
  else if (DAT_02098fc4 == 2) {
    thunk_FUN_0208024c(2);
    thunk_FUN_0208014c(2);
  }
  DAT_02098fc4 = 1;
  thunk_FUN_02080098(1,&DAT_02000f18);
  _DAT_04000004 = _DAT_04000004 | 8;
  _DAT_04000210 = _DAT_04000210 | 1;
  _DAT_04000208 = 1;
  return;
}


// 0x020023dc  display_fps_count

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_02006908(uint param_1)

{
  _DAT_06201542 = (short)(((param_1 / 100) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201544 = (short)(((param_1 / 10) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201546 = (short)((param_1 % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201586 = _DAT_06201546 + 10;
  _DAT_06201582 = _DAT_06201542 + 10;
  _DAT_06201584 = _DAT_06201544 + 10;
  return;
}


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


// 0x02006730  adjust_overlay_tile_palette_indices

void FUN_02006730(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = &DAT_020887e8;
  do {
    pcVar3 = pcVar2;
    *pcVar3 = *pcVar3 + -0x40;
    pcVar2 = pcVar3 + 1;
  } while (pcVar3 + 1 !=
           "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03"
          );
  pcVar2 = 
  "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x03\x03\x03\x03\x03\x03\x03\x03\x03\x03"
  ;
  do {
    pcVar1 = pcVar2;
    pcVar2 = pcVar1 + 1;
    *pcVar1 = *pcVar1 + -0x20;
  } while (pcVar2 != pcVar3 + 0x501);
  do {
    pcVar3 = pcVar2 + 1;
    *pcVar2 = *pcVar2 + -0x50;
    pcVar2 = pcVar3;
  } while (pcVar3 != pcVar1 + 0x781);
  return;
}


// 0x02006908  set_fps_overlay_digits

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02006908(uint param_1)

{
  _DAT_06201542 = (short)(((param_1 / 100) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201544 = (short)(((param_1 / 10) % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201546 = (short)((param_1 % 10 + 0x6a) * 0x10000 >> 0x10);
  _DAT_06201586 = _DAT_06201546 + 10;
  _DAT_06201582 = _DAT_06201542 + 10;
  _DAT_06201584 = _DAT_06201544 + 10;
  return;
}


// 0x02006d20  write_display_control_and_subscreen_display_control

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02006d20(void)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar7;
  uint uVar8;
  int iVar6;
  
  thunk_FUN_0208031c();
  _DAT_04000000 = 0x10801;
  thunk_FUN_0207fc98(1,9,4,2);
  _DAT_0400000e = 0x42c8;
  _DAT_04000030 = 0x100;
  _DAT_04000036 = 0x100;
  _DAT_04000038 = 0;
  _DAT_0400003c = 0;
  _DAT_04000050 = 200;
  _DAT_04001000 = 0x10100;
  puVar2 = &DAT_0208a1a8;
  puVar3 = (undefined2 *)&DAT_05000000;
  do {
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar4;
  } while (puVar4 != (undefined2 *)&DAT_05000200);
  thunk_FUN_0208033e(&DAT_0208a3a8,&DAT_06008000,16000);
  thunk_FUN_0208033e(&DAT_0208e228,&DAT_06001000,0x300);
  iVar5 = 0;
  do {
    iVar6 = iVar5;
    iVar5 = iVar6 + 1;
    thunk_FUN_0208031c();
  } while (iVar5 != 0x78);
  uVar7 = iVar6 - 0x77;
  uVar8 = uVar7;
  while( true ) {
    do {
      uVar1 = _DAT_04000006 & 0x1ff;
    } while ((_DAT_04000006 & 0x1ff) != 0);
    do {
      if ((uVar8 & 1) == 0) {
        _DAT_04000038 = 0;
      }
      else {
        iVar5 = uVar1 - 0x60;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar5 = (iVar5 / 10) * (iVar5 / 10);
        if ((uVar1 & 1) == 0) {
          _DAT_04000038 = (-iVar5 - uVar7) * 0x80;
        }
        else {
          _DAT_04000038 = (iVar5 + uVar7) * 0x80;
        }
      }
      do {
      } while (uVar1 == (_DAT_04000006 & 0x1ff));
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0xc0);
    _DAT_04000054 = (undefined2)uVar8;
    if (0x1f < uVar8 + 1) break;
    uVar7 = uVar7 + 3;
    uVar8 = uVar8 + 1;
  }
  thunk_FUN_0208031c();
  puVar2 = (undefined2 *)&DAT_05000000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)&DAT_05000200);
  puVar2 = (undefined2 *)&DAT_06008000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x600be80);
  puVar2 = (undefined2 *)&DAT_06001000;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar3;
  } while (puVar3 != (undefined2 *)0x6001300);
  _DAT_04000054 = 0;
  _DAT_04000050 = 0;
  return;
}


// 0x020072a8  helper_for_configure_ds_display_windows

void FUN_020072a8(int param_1)

{
  if (DAT_0208f34c != param_1) {
    if (param_1 != 0) {
      DAT_023dc5b0 = 0x5430;
      DAT_023dc5a8 = FUN_02007aac;
      DAT_023dc5b8 = FUN_02008320;
      DAT_023dc5ac = 0x5032;
      DAT_0208f34c = param_1;
      return;
    }
    DAT_023dc5b0 = 0x1430;
    DAT_023dc5a8 = FUN_02007a2c;
    DAT_023dc5b8 = FUN_02008270;
    DAT_023dc5ac = 0x1032;
  }
  DAT_0208f34c = param_1;
  return;
}


// 0x02007420  clear_and_initialize_renderer_vram

void FUN_02007420(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)&DAT_06000000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x600c000);
  puVar2 = (undefined2 *)&DAT_06020000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)&DAT_06030000);
  puVar2 = (undefined2 *)&DAT_06028000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6038000);
  puVar2 = (undefined2 *)&DAT_06030000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6040000);
  puVar2 = (undefined2 *)&DAT_06400000;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != (undefined2 *)0x6410000);
  return;
}


// 0x020083ec  write_display_control_and_display_palette

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020083ec(int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  short *psVar3;
  
  param_1 = param_1 + DAT_020993a8 + 1;
  _DAT_05000000 = (&DAT_023dcbca)[param_1];
  if ((&DAT_023dceb4)[param_1] != '\0') {
    _DAT_04000000 = _DAT_04000000 & 0xe0ff;
    return;
  }
  _DAT_04000014 =
       (undefined2)(((uint)(ushort)(&DAT_023dd924)[param_1] + DAT_020993a4) * 0x10000 >> 0x10);
  _DAT_0400001c = _DAT_04000014;
  _DAT_04000016 =
       (undefined2)((DAT_020993a8 + (uint)(ushort)(&DAT_023dd564)[param_1]) * 0x10000 >> 0x10);
  _DAT_0400001e = _DAT_04000016;
  if ((&DAT_023dc7b0)[param_1] == '\x01') {
    puVar1 = &DAT_023dc5ac;
  }
  else {
    puVar1 = &DAT_023dc6a4;
  }
  _DAT_04000008 = (undefined2)puVar1[1];
  _DAT_0400000c = (undefined2)*puVar1;
  _DAT_04000010 =
       (undefined2)((DAT_020993a4 + (uint)(ushort)(&DAT_023dd744)[param_1]) * 0x10000 >> 0x10);
  _DAT_04000018 = _DAT_04000010;
  _DAT_04000012 =
       (undefined2)((DAT_020993a8 + (uint)(ushort)(&DAT_023dd384)[param_1]) * 0x10000 >> 0x10);
  _DAT_0400001a = _DAT_04000012;
  _DAT_04000000 = _DAT_04000000 | 0x1f00;
  if ((&DAT_023dc5bc)[param_1] == DAT_023dc5b4) {
    _DAT_04000048 = 0xf;
  }
  else {
    _DAT_04000048 = 0x1f;
  }
  psVar3 = (short *)(&DAT_023ddb0c)[param_1];
  if (psVar3 != (short *)0x0) {
    psVar2 = (short *)&DAT_05000002;
    do {
      psVar3 = psVar3 + 1;
      if (*psVar3 != -0x8000) {
        *psVar2 = *psVar3;
        *psVar3 = -0x8000;
      }
      psVar2 = psVar2 + 1;
    } while (psVar2 != (short *)0x5000080);
    (&DAT_023ddb0c)[param_1] = 0;
    return;
  }
  return;
}


// 0x02008f7c  configure_ds_display_windows

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02008f7c(void)

{
  undefined4 *puVar1;
  undefined2 *puVar3;
  undefined4 *puVar2;
  
  FUN_02006f2c(0);
  FUN_020072a8(0);
  puVar3 = &DAT_020993cc;
  FUN_02007420();
  DAT_04000041 = 0;
  DAT_04000040 = 0xff;
  DAT_04000045 = 0;
  DAT_04000044 = 0xc4;
  _DAT_04000048 = 0x1f;
  _DAT_0400004a = 0x1f;
  do {
    puVar3[1] = 0x2000;
    puVar3[0x801] = 0x2000;
    puVar3[0x1001] = 0x2000;
    puVar3 = puVar3 + 1;
  } while (puVar3 != (undefined2 *)0x209a3ca);
  puVar2 = (undefined4 *)&DAT_023dc5bc;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 0;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_023dc69c);
  DAT_0209b3cc = 0x8000;
  DAT_020993c0 = 0x50;
  DAT_0209a3cc = 0x8000;
  DAT_0209c3d0 = 1;
  DAT_0209c3cc = 1;
  DAT_0209c3ce = 1;
  DAT_0209c3dc = 0;
  DAT_020993cc = 0x8000;
  DAT_0209c3d4 = 0;
  DAT_0209c3d8 = 0;
  puVar2 = (undefined4 *)&DAT_0209c3e0;
  do {
    puVar1 = (undefined4 *)((int)puVar2 + 1);
    *(undefined1 *)puVar2 = 1;
    puVar2 = puVar1;
  } while (puVar1 != &DAT_0209cbe0);
  DAT_023dc5b4 = 1;
  coproc_moveto_Domain_Access_Control(7);
  return 7;
}


// 0x020090a0  read_display_palette

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020090a0(void)

{
  FUN_020802c4(&DAT_023dc730,0x80);
  _DAT_040000d4 = &DAT_023dc730;
  _DAT_040000d8 = &DAT_05000200;
  _DAT_040000dc = 0x80000040;
  return;
}


// 0x02009cf0  write_display_palette

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02009cf0(void)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_r4;
  uint uVar6;
  undefined4 in_lr;
  bool bVar7;
  
  uVar6 = 0;
  do {
    uVar3 = uVar6 & 0xff;
    puVar1 = &DAT_020b4c18 + uVar6;
    uVar6 = uVar6 + 1;
    FUN_02009614(uVar3,*puVar1);
  } while (uVar6 != 0x18);
  uVar3 = 0;
  uVar6 = (uint)DAT_020b4bf7;
  iVar4 = 0;
  do {
    uVar5 = (uint)*(ushort *)((int)&DAT_023dc6b0 + iVar4);
    uVar2 = (ushort)((uVar5 & 0xe0) << 2) | (ushort)((uVar5 & 0xe00) << 3) | 0x8000 |
            (ushort)((uVar5 & 0xe) << 1);
    *(ushort *)((int)&DAT_023dc730 + iVar4) = uVar2;
    if (uVar3 != 0) {
      *(ushort *)(&DAT_05000000 + iVar4) = uVar2;
    }
    bVar7 = uVar6 == uVar3;
    uVar3 = uVar3 + 1;
    *(ushort *)(&DAT_05000200 + iVar4) = uVar2;
    if (bVar7) {
      _DAT_05000200 = uVar2;
    }
    iVar4 = iVar4 + 2;
  } while (uVar3 != 0x40);
  if (DAT_023ddb05 == '\0') {
    FUN_020072a8();
    FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x800,2);
  }
  else {
    FUN_020072a8(1);
    FUN_02007630(&DAT_0209cbec + DAT_023ddea8,0x1000,2);
  }
  FUN_02006f2c(DAT_023dcfa4);
  FUN_02007630(&DAT_0209cbec + DAT_023ddea0,DAT_023dc8a0,0);
  FUN_02007630(&DAT_0209cbec + DAT_023ddea4,DAT_023dc8a0,1);
  DAT_020993bc = 1;
  FUN_02008984(DAT_0b003648,DAT_020993c0,&DAT_020993c0,1,unaff_r4,in_lr);
  DAT_020993bc = 0;
  return;
}


// 0x02009e3c  write_display_palette

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02009e3c(void)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint local_44;
  uint local_2c;
  
  uVar12 = DAT_0b003634;
  uVar13 = DAT_0b003630;
  uVar16 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar16 = 0xffff;
  }
  DAT_020b4c00 = uVar16;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar16 = DAT_0b003634 & 0xfffffe;
    puVar4 = (ushort *)FUN_02003cc8(uVar16);
    uVar7 = DAT_0b003638;
    uVar10 = DAT_020b4c00;
    uVar14 = DAT_020b4bec;
    uVar8 = DAT_0b00363c & 0xf;
    uVar6 = DAT_020b4c00 & 0xffff;
    if (uVar8 == 3) {
      bVar9 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar16 = uVar16 << 0xf;
      if (bVar9 == 200) {
        bVar9 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar10 = (uint)DAT_020b4bf7;
      do {
        uVar8 = (uint)*puVar4;
        uVar7 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar8 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar13;
        if ((uVar8 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar7]) {
          (&DAT_023dc6b0)[uVar7] = (short)(uVar8 & 0xeee);
          if ((uVar7 != 0) && (uVar14 < 0xdf)) {
            (&DAT_023dc8ca)[uVar7 + (uint)(bVar9 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar9] = &DAT_023dc8ca + (uint)(bVar9 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar7] = uVar1;
          if (uVar7 == uVar10) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar6 = uVar6 - 1 & 0xffff;
        puVar4 = puVar4 + 1;
      } while (uVar6 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar8 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar10 = DAT_0b003638 & 0x7f;
        uVar14 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar10;
        if (0x4f < uVar10) break;
        uVar6 = uVar6 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar14) = *puVar4;
        puVar4 = puVar4 + 1;
        DAT_0b003638 = uVar13 + uVar10;
      } while (uVar6 != 0);
      DAT_020b4bfc = uVar6;
      DAT_020b4c00 = uVar6;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar8 != 1) {
      DAT_020b4bfc = uVar6;
      DAT_020b4c00 = uVar6;
      DAT_0b003634 = uVar16;
      return;
    }
    local_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar14 = uVar13 & 0xffff;
      uVar16 = uVar16 << 0xf;
      local_44 = 0;
      puVar5 = puVar4;
      uVar8 = local_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar8);
        uVar2 = *puVar5;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar8) = uVar2;
          local_44 = local_44 + 1;
        }
        uVar6 = uVar6 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        (&DAT_020acbec)[uVar8 >> 1] = uVar2 != uVar1;
        uVar8 = uVar8 + uVar14 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
      uVar15 = uVar8;
      if (uVar8 <= uVar7) {
        uVar15 = uVar8 + 0x10000;
      }
      uVar16 = uVar12 & 0xfe0000 | uVar16 >> 0xf;
      if (local_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar16;
        return;
      }
      if (uVar7 < DAT_023ddeac) {
LAB_0200aa30:
        bVar17 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + DAT_023ddeac <= uVar7) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        bVar17 = iVar11 + DAT_023ddeac < uVar8;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar7 != DAT_023dcea4) || (DAT_023dcdaa < uVar8)) && (bVar17)) {
        if ((local_2c < DAT_023ddea0) || (DAT_023dc8b4 <= local_2c)) {
          if (DAT_023ddea0 < uVar15) {
            if (DAT_023dc8b4 < uVar15) {
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
        if ((local_2c < DAT_023ddea4) || (DAT_023dc8b8 <= local_2c)) {
          if (DAT_023ddea4 < uVar15) {
            if (DAT_023dc8b8 < uVar15) {
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
          if ((DAT_023dc8a0 >> 1 <= uVar10) && (DAT_023dc8a4 = 1, !bVar3)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar16;
            return;
          }
          uVar6 = local_2c - DAT_023ddea0;
          bVar17 = (int)uVar6 < 0;
          puVar5 = puVar4;
          if (bVar17) {
            puVar5 = (ushort *)((int)puVar4 + (DAT_023ddea0 - local_2c & 0xfffffffe));
            uVar6 = local_2c;
          }
          if (bVar17) {
            uVar6 = 0;
          }
          uVar10 = uVar15 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar15 - DAT_023ddea0) {
            uVar10 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar5,uVar6,uVar13,uVar10);
          puVar5 = (ushort *)&DAT_0b003638;
          bVar17 = true;
          local_2c = DAT_0b003638 & 0xfffe;
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
            DAT_0b003634 = uVar16;
            return;
          }
          iVar11 = local_2c - DAT_023ddea4;
          bVar17 = iVar11 < 0;
          if (bVar17) {
            iVar11 = 0;
            puVar5 = (ushort *)((int)puVar4 + (DAT_023ddea4 - local_2c & 0xfffffffe));
          }
          if (!bVar17) {
            puVar5 = puVar4;
          }
          uVar6 = uVar15 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar15 - DAT_023ddea4) {
            uVar6 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar5,iVar11,uVar13,uVar6);
          bVar17 = true;
          local_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= local_2c) && (local_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar4,local_2c - DAT_023ddea8 & 0xffff,uVar13,DAT_020b4c00 & 0xffff);
          local_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar17) {
          uVar13 = DAT_020b4c00 & 0xffff;
          if (local_44 == uVar13) {
            do {
              FUN_020076d0(local_2c,*puVar4);
              local_2c = local_2c + uVar14 & 0xffff;
              uVar13 = uVar13 - 1 & 0xffff;
              puVar4 = puVar4 + 1;
            } while (uVar13 != 0);
            uVar12 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[local_2c >> 1] != '\0') {
                FUN_020076d0(local_2c,*puVar4);
              }
              local_2c = local_2c + uVar14 & 0xffff;
              uVar13 = uVar13 - 1 & 0xffff;
              uVar12 = 0;
              puVar4 = puVar4 + 1;
            } while (uVar13 != 0);
          }
        }
      }
    }
    else {
      uVar13 = uVar13 & 0xffff;
      puVar5 = puVar4;
      uVar14 = uVar6;
      uVar15 = local_2c;
      do {
        uVar1 = *puVar5;
        uVar14 = uVar14 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar15] = (char)(uVar1 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar12 & 0xfe0000;
        (&DAT_0209cbed)[uVar15] = (char)uVar1;
        uVar15 = uVar15 + uVar13 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar14 != 0);
      if (uVar7 < DAT_023ddeac) {
LAB_0200aa20:
        bVar17 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + DAT_023ddeac <= uVar7) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        bVar17 = iVar11 + DAT_023ddeac < uVar15;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar7 != DAT_023dcea4) || (DAT_023dcdaa <= uVar15)) && (bVar17)) {
        if ((local_2c < DAT_023ddea0) || (DAT_023dc8b4 <= local_2c)) {
          bVar17 = false;
          uVar12 = uVar6;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar6) {
            FUN_020075d0(0);
          }
          local_2c = local_2c - DAT_023ddea0;
          puVar5 = puVar4;
          do {
            (*DAT_023dc69c)(0,local_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            local_2c = (local_2c & 0xffff) + uVar13;
            uVar6 = uVar6 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar6 != 0);
          bVar17 = true;
          local_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if ((DAT_023ddea4 <= local_2c) && (local_2c < DAT_023dc8b8)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar12) {
            FUN_020075d0(1);
          }
          local_2c = local_2c - DAT_023ddea4;
          puVar5 = puVar4;
          do {
            (*DAT_023dc69c)(1,local_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            local_2c = (local_2c & 0xffff) + uVar13;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar12 != 0);
          bVar17 = true;
          local_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if ((DAT_023ddea8 <= local_2c) && (local_2c < DAT_023dc8bc)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar6 = 0x400;
          }
          else {
            uVar6 = 0x800;
          }
          if (uVar6 <= uVar12) {
            FUN_020075d0(2);
          }
          local_2c = local_2c - DAT_023ddea8;
          puVar5 = puVar4;
          do {
            (*DAT_023dc5a8)(local_2c & 0xffff,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            local_2c = (local_2c & 0xffff) + uVar13;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar5 = puVar5 + 1;
          } while (uVar12 != 0);
          local_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if (!bVar17) {
          uVar6 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(local_2c,(uint)*puVar4 << 8 | (uint)(*puVar4 >> 8));
            local_2c = local_2c + uVar13 & 0xffff;
            uVar6 = uVar6 - 1 & 0xffff;
            uVar12 = 0;
            puVar4 = puVar4 + 1;
          } while (uVar6 != 0);
        }
      }
    }
    DAT_0b003638 = uVar15 & 0xffff;
    DAT_020b4bfc = uVar12;
    DAT_020b4c00 = uVar12;
    DAT_0b003634 = uVar16;
    break;
  case 2:
    DAT_020b4bf3 = 1;
    break;
  case 3:
    uVar12 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar10 = uVar12 + uVar16;
    uVar6 = DAT_0b003638 & 0xffff;
    uVar14 = DAT_0b003630 & 0xffff;
    do {
      uVar7 = uVar12 ^ 1;
      uVar12 = uVar12 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar6 ^ 1] = (&DAT_0209cbec)[uVar7];
      uVar6 = uVar6 + uVar14 & 0xffff;
    } while (uVar12 != (uVar10 & 0xffff));
    uVar12 = DAT_0b003638;
    if (uVar13 == 1) {
      uVar16 = uVar16 >> 1;
      uVar14 = 2;
    }
    do {
      DAT_0b003638 = uVar6;
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
          iVar11 = 0x200;
        }
        else {
          iVar11 = 0x280;
        }
        if (iVar11 + DAT_023ddeac <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar12 = uVar12 + uVar14;
      uVar6 = DAT_0b003638;
    } while( true );
  }
  return;
}


// 0x0200aaf8  write_display_palette

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


// 0x0200ac7c  write_display_palette

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


// 0x0200b6a8  helper_calls_configure_ds_display_windows

void FUN_0200b6a8(void)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  undefined2 *puVar12;
  
  puVar5 = &DAT_0209cbec;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != &DAT_020acbec);
  puVar4 = (undefined4 *)&DAT_020acbec;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_020b4bec);
  puVar8 = &DAT_023dc6b0;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)&DAT_023dc7b0);
  puVar8 = &DAT_0b00364c;
  do {
    puVar1 = puVar8 + 1;
    *puVar8 = 0;
    puVar8 = puVar1;
  } while (puVar1 != (undefined2 *)0xb0036ec);
  DAT_023ddeac = 0;
  DAT_023ddea0 = 0;
  DAT_023ddea4 = 0;
  DAT_023ddea8 = 0;
  puVar4 = (undefined4 *)&DAT_020b4c18;
  do {
    puVar7 = (undefined4 *)((int)puVar4 + 1);
    *(undefined1 *)puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_020b4c38);
  puVar1 = &DAT_023dc8ca;
  puVar12 = &DAT_023dc94a;
  puVar3 = &DAT_023dcaca;
  puVar8 = &DAT_023dc730;
  do {
    puVar1 = puVar1 + 1;
    puVar12[-0x40] = 0x8000;
    *puVar12 = 0x8000;
    puVar12[0x40] = 0x8000;
    *puVar8 = 0x8000;
    puVar3[-0x40] = 0x8000;
    *puVar3 = 0x8000;
    puVar3[0x40] = 0x8000;
    puVar12 = puVar12 + 1;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
  } while (puVar1 != &DAT_023dc94a);
  puVar4 = &DAT_023ddb0c;
  do {
    puVar7 = puVar4 + 1;
    *puVar4 = 0;
    puVar4 = puVar7;
  } while (puVar7 != &DAT_023dde8c);
  DAT_023dde90 = 0;
  DAT_023dde8c = 0;
  puVar5 = &DAT_023dde95;
  do {
    puVar6 = puVar5 + 1;
    *puVar5 = 0;
    puVar5 = puVar6;
  } while (puVar6 != (undefined1 *)0x23dde9d);
  DAT_0b000084 = 0x200;
  DAT_020b4c14 = 0;
  DAT_0b000098 = 0x10;
  DAT_020b4bf5 = 0;
  DAT_020b4bf4 = 0;
  DAT_020b4bf0 = 0;
  DAT_020b4bf1 = 0;
  DAT_0b003644 = 0;
  DAT_0b00362c = 0;
  DAT_023ddeb4 = 0;
  DAT_0b000074 = &DAT_0209cbec;
  DAT_0b0000a0 = 0;
  DAT_0b000044 = 0;
  DAT_0b000054 = 0;
  DAT_0b000064 = 0;
  DAT_0b000048 = 0;
  DAT_0b000058 = 0;
  DAT_0b000068 = 0;
  DAT_0b00004c = 0;
  DAT_0b00005c = 0;
  DAT_0b00006c = 0;
  DAT_0b000050 = 0;
  DAT_0b000060 = 0;
  DAT_0b000070 = 0;
  DAT_0b000078 = 0;
  DAT_0b00007c = 0;
  DAT_0b000080 = 0;
  DAT_0b000088 = 0;
  DAT_0b00008c = 0;
  DAT_0b000090 = 0;
  DAT_0b000094 = 0;
  DAT_0b00009c = 0;
  DAT_023dde94 = 0;
  DAT_023ddb05 = 0;
  DAT_0b003630 = 2;
  DAT_023ddb06 = 0;
  DAT_020b4bf2 = 0;
  DAT_0b00362f = 0;
  DAT_020b4c05 = 0;
  DAT_020b4c04 = 0;
  DAT_023dcdb0 = 0;
  DAT_023dcfac = 0;
  DAT_023ddeb0 = 0;
  DAT_023ddb04 = 0;
  DAT_020b4bfc = 0;
  DAT_0b003638 = 0;
  DAT_0b003634 = 0;
  DAT_023dcea6 = 0;
  DAT_023dd372._0_1_ = 0;
  DAT_023dcdaa = 0;
  DAT_023dcea4 = 0;
  DAT_020b4bf8 = 0;
  DAT_020b4bf7 = 0;
  DAT_020b4bf6 = 0;
  DAT_020b4c08 = 0;
  DAT_0b00363c = 0;
  DAT_020b4c0a = 0;
  DAT_023dc8ae = 0x140;
  DAT_023dc8b2 = 0x140;
  DAT_023dd370 = 0xf0;
  DAT_023dc8ac = 0xf0;
  DAT_023dc8c8 = 0;
  DAT_023dc8b0 = 0;
  DAT_023dcfa8 = 0;
  DAT_023dceac = 0;
  DAT_023ddb08 = 0;
  DAT_020b4c07 = 0;
  DAT_020b4c00 = 0;
  DAT_020b4c06 = 0;
  DAT_023dceb0 = &DAT_020acbec;
  DAT_023dcdac = &DAT_0209cbec;
  DAT_0b003648 = &DAT_0209cbec;
  DAT_023dc8c4 = 0;
  FUN_02008f7c();
  puVar1 = &DAT_023dd744;
  puVar3 = &DAT_023dd384;
  DAT_023dc8a0 = 0x800;
  DAT_023dc8a8 = 0;
  DAT_023dc8a4 = 0;
  DAT_023dcfa4 = 0;
  puVar8 = &DAT_023dcbca;
  puVar5 = &DAT_023dceb4;
  do {
    *puVar1 = 0;
    puVar12 = puVar1 + 0xf0;
    puVar1 = puVar1 + 1;
    *puVar3 = 0;
    *puVar12 = 0;
    puVar3[0xf0] = 0;
    *puVar5 = 0;
    *puVar8 = 0;
    puVar3 = puVar3 + 1;
    puVar8 = puVar8 + 1;
    puVar5 = puVar5 + 1;
  } while (puVar1 != &DAT_023dd924);
  iVar9 = 0;
  do {
    *(undefined4 *)((int)&DAT_023dd372 + iVar9 + 2) = 0;
    *(undefined4 *)((int)&DAT_023dc8b4 + iVar9) = 0;
    iVar9 = iVar9 + 4;
  } while (iVar9 != 0x10);
  uVar2 = 0;
  cVar11 = '\0';
  DAT_023dcdb4 = 0;
  do {
    cVar11 = cVar11 + '\x01';
    pcVar10 = &DAT_023dcdb4 + uVar2;
    do {
      uVar2 = uVar2 + 1;
      if (0xef < uVar2) {
        return;
      }
      pcVar10 = pcVar10 + 1;
      *pcVar10 = cVar11;
    } while (uVar2 % 7 != 0);
  } while( true );
}


// 0x02080098  write_display_status_and_interrupt_enable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02080098(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    puVar2 = &DAT_010056e4;
    iVar1 = 0;
    do {
      if ((*puVar2 == 0) || (param_1 == *puVar2)) {
        (&DAT_010056e0)[iVar1 * 2] = param_2;
        (&DAT_010056e4)[iVar1 * 2] = param_1;
        if ((int)(param_1 << 0x1f) < 0) {
          _DAT_04000004 = _DAT_04000004 | 8;
        }
        if ((int)(param_1 << 0x1e) < 0) {
          _DAT_04000004 = _DAT_04000004 | 0x10;
        }
        _DAT_04000210 = _DAT_04000210 | param_1;
        return;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (iVar1 != 0x19);
  }
  return;
}


// 0x0208014c  write_display_status_and_interrupt_enable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0208014c(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = &DAT_010056e4;
  iVar2 = 0;
  do {
    if (param_1 == *puVar1) {
      (&DAT_010056e0)[iVar2 * 2] = &DAT_02080095;
      if ((int)(param_1 << 0x1f) < 0) {
        _DAT_04000004 = _DAT_04000004 & 0xfff7;
      }
      if ((int)(param_1 << 0x1e) < 0) {
        _DAT_04000004 = _DAT_04000004 & 0xffef;
      }
      if ((int)(param_1 << 0x1d) < 0) {
        _DAT_04000004 = _DAT_04000004 & 0xffdf;
      }
      _DAT_04000210 = _DAT_04000210 & ~param_1;
      return;
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 != 0x19);
  return;
}


// 0x020801fc  write_display_status_and_interrupt_master_enable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020801fc(uint param_1)

{
  if ((param_1 & 1) != 0) {
    _DAT_04000004 = _DAT_04000004 | 8;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    _DAT_04000004 = _DAT_04000004 | 0x10;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    _DAT_04000004 = _DAT_04000004 | 0x20;
  }
  _DAT_04000210 = _DAT_04000210 | param_1;
  _DAT_04000208 = 1;
  return;
}


// 0x0208024c  write_display_status_and_interrupt_enable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0208024c(uint param_1)

{
  if ((int)(param_1 << 0x1f) < 0) {
    _DAT_04000004 = _DAT_04000004 & 0xfff7;
  }
  if ((int)(param_1 << 0x1e) < 0) {
    _DAT_04000004 = _DAT_04000004 & 0xffef;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    _DAT_04000004 = _DAT_04000004 & 0xffdf;
  }
  _DAT_04000210 = _DAT_04000210 & ~param_1;
  return;
}

