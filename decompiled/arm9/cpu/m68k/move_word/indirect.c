/* ARM9 indirect — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x0201785c  m68k_move_word

void m68k_dispatch_0201785c(void)

{
  undefined2 uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(undefined2 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02017894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02017908  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_02017908(void)

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
  int unaff_r6;
  int unaff_r8;
  uint uVar18;
  uint unaff_r11;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar17 = DAT_0b003634;
  uVar11 = DAT_0b003630;
  uVar16 = uVar7 & 0xffff;
  uVar8 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar1 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar8 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar12 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar17 = DAT_0b003630;
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
      uVar8 = DAT_0b003630 & 0xffff;
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
      uVar9 = uVar16 + uVar8 & 0xffff;
      uVar13 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar13 = uVar13 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar9] = bVar12;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar13 != 0);
        uVar16 = DAT_0b003638;
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
      uVar16 = uVar16 & 0xfffe;
      if (uVar17 == 1) {
        uVar11 = uVar11 >> 1;
        uVar8 = 2;
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
        uVar16 = uVar16 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar11 = DAT_0b00363c & 0xf;
    if (uVar11 == 3) {
      uVar11 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar11] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar11 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar12 == 200) {
          bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar11 + (uint)(bVar12 >> 5) * 0x40] = uVar1;
      }
      uVar16 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar11] = uVar1;
      DAT_0208f354 = 1;
      if (uVar11 == uVar16) {
        _DAT_05000200 = uVar1;
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
  uVar7 = DAT_0b003638 & 0x3fff | (uVar7 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar7;
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
    uVar9 = DAT_0b003638;
    uVar13 = DAT_020b4c00;
    uVar8 = DAT_020b4bec;
    uVar10 = DAT_0b00363c & 0xf;
    uVar7 = DAT_020b4c00 & 0xffff;
    if (uVar10 == 3) {
      bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar16 = uVar16 << 0xf;
      if (bVar12 == 200) {
        bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar13 = (uint)DAT_020b4bf7;
      do {
        uVar10 = (uint)*puVar5;
        uVar9 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar10 & 0xe0) << 2) | (ushort)((uVar10 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar10 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar11;
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
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar13 = DAT_0b003638 & 0x7f;
        uVar8 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar13;
        if (0x4f < uVar13) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar11 + uVar13;
      } while (uVar7 != 0);
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 != 1) {
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar16;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar8 = uVar11 & 0xffff;
      uVar16 = uVar16 << 0xf;
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
        uVar16 = uVar16 + 0x8000;
        (&DAT_020acbec)[uVar10 >> 1] = uVar2 != uVar1;
        uVar10 = uVar10 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar18 = uVar10;
      if (uVar10 <= uVar9) {
        uVar18 = uVar10 + 0x10000;
      }
      uVar16 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar16;
        return;
      }
      if (uVar9 < DAT_023ddeac) {
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
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + DAT_023ddeac < uVar10;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa < uVar10)) && (bVar19)) {
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
          uVar7 = uStack_2c - DAT_023ddea0;
          bVar19 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar19) {
            uVar7 = 0;
          }
          uVar13 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar13 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar7,uVar11,uVar13);
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
          uVar7 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar7 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar15,uVar11,uVar7);
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
              uStack_2c = uStack_2c + uVar8 & 0xffff;
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
              uStack_2c = uStack_2c + uVar8 & 0xffff;
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
      uVar8 = uVar7;
      uVar18 = uStack_2c;
      do {
        uVar1 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar18] = (char)(uVar1 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&DAT_0209cbed)[uVar18] = (char)uVar1;
        uVar18 = uVar18 + uVar11 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < DAT_023ddeac) {
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
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa20;
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
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar7;
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
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar17) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar17) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar7 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar11 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
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
    uVar8 = DAT_0b003630 & 0xffff;
    do {
      uVar9 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar9];
      DAT_0b003638 = DAT_0b003638 + uVar8 & 0xffff;
    } while (uVar17 != (uVar13 & 0xffff));
    if (uVar11 == 1) {
      uVar16 = uVar16 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar7 < DAT_023dcea4) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar7)) {
            bVar19 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar7 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar19 = true;
          }
          if ((DAT_023ddea4 <= uVar7) && (uVar7 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar7 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar19 = true;
          }
          if ((DAT_023ddea8 <= uVar7) && (uVar7 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar7 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar7));
          }
          if (!bVar19) {
            FUN_020076d0(uVar7,*(undefined2 *)(&DAT_0209cbec + uVar7));
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
        if (iVar15 + DAT_023ddeac <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}


// 0x020179cc  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_020179cc(void)

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
  uint unaff_r11;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar17 = uVar7 & 0xffff;
  puVar12 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar8 = *puVar12;
  *puVar12 = uVar8 + 2;
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


// 0x02017aa8  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_02017aa8(void)

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
  uint unaff_r11;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
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


// 0x02017b78  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_02017b78(void)

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
  int unaff_r6;
  int unaff_r8;
  uint uVar18;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar17 = DAT_0b003634;
  uVar11 = DAT_0b003630;
  uVar16 = uVar7 & 0xffff;
  uVar8 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)*unaff_r10;
  uVar1 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar8 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar12 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar17 = DAT_0b003630;
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
      uVar8 = DAT_0b003630 & 0xffff;
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
      uVar9 = uVar16 + uVar8 & 0xffff;
      uVar13 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar13 = uVar13 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar9] = bVar12;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar13 != 0);
        uVar16 = DAT_0b003638;
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
      uVar16 = uVar16 & 0xfffe;
      if (uVar17 == 1) {
        uVar11 = uVar11 >> 1;
        uVar8 = 2;
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
        uVar16 = uVar16 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar11 = DAT_0b00363c & 0xf;
    if (uVar11 == 3) {
      uVar11 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar11] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar11 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar12 == 200) {
          bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar11 + (uint)(bVar12 >> 5) * 0x40] = uVar1;
      }
      uVar16 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar11] = uVar1;
      DAT_0208f354 = 1;
      if (uVar11 == uVar16) {
        _DAT_05000200 = uVar1;
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
  uVar7 = DAT_0b003638 & 0x3fff | (uVar7 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar7;
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
    uVar9 = DAT_0b003638;
    uVar13 = DAT_020b4c00;
    uVar8 = DAT_020b4bec;
    uVar10 = DAT_0b00363c & 0xf;
    uVar7 = DAT_020b4c00 & 0xffff;
    if (uVar10 == 3) {
      bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar16 = uVar16 << 0xf;
      if (bVar12 == 200) {
        bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar13 = (uint)DAT_020b4bf7;
      do {
        uVar10 = (uint)*puVar5;
        uVar9 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar10 & 0xe0) << 2) | (ushort)((uVar10 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar10 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar11;
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
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar13 = DAT_0b003638 & 0x7f;
        uVar8 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar13;
        if (0x4f < uVar13) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar11 + uVar13;
      } while (uVar7 != 0);
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 != 1) {
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar16;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar8 = uVar11 & 0xffff;
      uVar16 = uVar16 << 0xf;
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
        uVar16 = uVar16 + 0x8000;
        (&DAT_020acbec)[uVar10 >> 1] = uVar2 != uVar1;
        uVar10 = uVar10 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar18 = uVar10;
      if (uVar10 <= uVar9) {
        uVar18 = uVar10 + 0x10000;
      }
      uVar16 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar16;
        return;
      }
      if (uVar9 < DAT_023ddeac) {
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
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + DAT_023ddeac < uVar10;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa < uVar10)) && (bVar19)) {
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
          uVar7 = uStack_2c - DAT_023ddea0;
          bVar19 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar19) {
            uVar7 = 0;
          }
          uVar13 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar13 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar7,uVar11,uVar13);
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
          uVar7 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar7 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar15,uVar11,uVar7);
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
              uStack_2c = uStack_2c + uVar8 & 0xffff;
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
              uStack_2c = uStack_2c + uVar8 & 0xffff;
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
      uVar8 = uVar7;
      uVar18 = uStack_2c;
      do {
        uVar1 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar18] = (char)(uVar1 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&DAT_0209cbed)[uVar18] = (char)uVar1;
        uVar18 = uVar18 + uVar11 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < DAT_023ddeac) {
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
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa20;
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
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar7;
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
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar17) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar17) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar7 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar11 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
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
    uVar8 = DAT_0b003630 & 0xffff;
    do {
      uVar9 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar9];
      DAT_0b003638 = DAT_0b003638 + uVar8 & 0xffff;
    } while (uVar17 != (uVar13 & 0xffff));
    if (uVar11 == 1) {
      uVar16 = uVar16 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar7 < DAT_023dcea4) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar7)) {
            bVar19 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar7 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar19 = true;
          }
          if ((DAT_023ddea4 <= uVar7) && (uVar7 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar7 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar19 = true;
          }
          if ((DAT_023ddea8 <= uVar7) && (uVar7 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar7 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar7));
          }
          if (!bVar19) {
            FUN_020076d0(uVar7,*(undefined2 *)(&DAT_0209cbec + uVar7));
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
        if (iVar15 + DAT_023ddeac <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}


// 0x02017c64  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_02017c64(void)

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
  int unaff_r6;
  int unaff_r8;
  uint uVar18;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar17 = DAT_0b003634;
  uVar11 = DAT_0b003630;
  uVar16 = uVar7 & 0xffff;
  uVar2 = *unaff_r10;
  iVar15 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar15 = unaff_r6;
  }
  uVar8 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar15 = (int)*(short *)(iVar15 + uVar8);
  }
  else {
    iVar15 = *(int *)(iVar15 + uVar8);
  }
  uVar8 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar2 + iVar15;
  uVar2 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar8 & 0xffff)) = uVar2;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar12 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar17 = DAT_0b003630;
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
      uVar8 = DAT_0b003630 & 0xffff;
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
      uVar9 = uVar16 + uVar8 & 0xffff;
      uVar13 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar13 = uVar13 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar9] = bVar12;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar13 != 0);
        uVar16 = DAT_0b003638;
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
      uVar16 = uVar16 & 0xfffe;
      if (uVar17 == 1) {
        uVar11 = uVar11 >> 1;
        uVar8 = 2;
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
        uVar16 = uVar16 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar11 = DAT_0b00363c & 0xf;
    if (uVar11 == 3) {
      uVar11 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar11] = uVar2 & 0xeee;
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
      *(ushort *)((int)&DAT_0b00364c + uVar16) = uVar2;
    }
    else if (uVar11 == 1) {
      uVar11 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar11) == uVar16) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar11) = uVar2;
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
  uVar7 = DAT_0b003638 & 0x3fff | (uVar7 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar7;
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
    uVar9 = DAT_0b003638;
    uVar13 = DAT_020b4c00;
    uVar8 = DAT_020b4bec;
    uVar10 = DAT_0b00363c & 0xf;
    uVar7 = DAT_020b4c00 & 0xffff;
    if (uVar10 == 3) {
      bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar16 = uVar16 << 0xf;
      if (bVar12 == 200) {
        bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar13 = (uint)DAT_020b4bf7;
      do {
        uVar10 = (uint)*puVar5;
        uVar9 = (DAT_0b003638 & 0x7e) >> 1;
        uVar2 = (ushort)((uVar10 & 0xe0) << 2) | (ushort)((uVar10 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar10 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar11;
        if ((uVar10 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar9]) {
          (&DAT_023dc6b0)[uVar9] = (short)(uVar10 & 0xeee);
          if ((uVar9 != 0) && (uVar8 < 0xdf)) {
            (&DAT_023dc8ca)[uVar9 + (uint)(bVar12 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar9] = uVar2;
          if (uVar9 == uVar13) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar13 = DAT_0b003638 & 0x7f;
        uVar8 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar13;
        if (0x4f < uVar13) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar11 + uVar13;
      } while (uVar7 != 0);
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 != 1) {
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar16;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar8 = uVar11 & 0xffff;
      uVar16 = uVar16 << 0xf;
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
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        (&DAT_020acbec)[uVar10 >> 1] = uVar1 != uVar2;
        uVar10 = uVar10 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar18 = uVar10;
      if (uVar10 <= uVar9) {
        uVar18 = uVar10 + 0x10000;
      }
      uVar16 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar16;
        return;
      }
      if (uVar9 < DAT_023ddeac) {
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
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + DAT_023ddeac < uVar10;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa < uVar10)) && (bVar19)) {
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
          uVar7 = uStack_2c - DAT_023ddea0;
          bVar19 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar19) {
            uVar7 = 0;
          }
          uVar13 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar13 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar7,uVar11,uVar13);
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
          uVar7 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar7 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar15,uVar11,uVar7);
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
              uStack_2c = uStack_2c + uVar8 & 0xffff;
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
              uStack_2c = uStack_2c + uVar8 & 0xffff;
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
      uVar8 = uVar7;
      uVar18 = uStack_2c;
      do {
        uVar2 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar18] = (char)(uVar2 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&DAT_0209cbed)[uVar18] = (char)uVar2;
        uVar18 = uVar18 + uVar11 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < DAT_023ddeac) {
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
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa20;
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
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar7;
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
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar17) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar17) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar7 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar11 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
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
    uVar8 = DAT_0b003630 & 0xffff;
    do {
      uVar9 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar9];
      DAT_0b003638 = DAT_0b003638 + uVar8 & 0xffff;
    } while (uVar17 != (uVar13 & 0xffff));
    if (uVar11 == 1) {
      uVar16 = uVar16 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar7 < DAT_023dcea4) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar7)) {
            bVar19 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar7 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar19 = true;
          }
          if ((DAT_023ddea4 <= uVar7) && (uVar7 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar7 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar19 = true;
          }
          if ((DAT_023ddea8 <= uVar7) && (uVar7 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar7 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar7));
          }
          if (!bVar19) {
            FUN_020076d0(uVar7,*(undefined2 *)(&DAT_0209cbec + uVar7));
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
        if (iVar15 + DAT_023ddeac <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}


// 0x02017d64  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_02017d64(void)

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
  int unaff_r6;
  int unaff_r8;
  uint uVar18;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar17 = DAT_0b003634;
  uVar11 = DAT_0b003630;
  uVar16 = uVar7 & 0xffff;
  uVar8 = (uint)(short)*unaff_r10;
  uVar1 = (ushort)uVar7;
  if (0xdfffff < (uVar8 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uint)*unaff_r10) = uVar1;
    return;
  }
  if ((uVar8 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar8 & 0xffffff) >> 0x10])(uVar8 & 0xffffff);
    return;
  }
  bVar12 = (byte)uVar7;
  if ((uVar8 & 0x1c) == 0) {
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar17 = DAT_0b003630;
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
      uVar8 = DAT_0b003630 & 0xffff;
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
      uVar9 = uVar16 + uVar8 & 0xffff;
      uVar13 = uVar11;
      if (uVar11 != 0) {
        do {
          uVar13 = uVar13 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar9] = bVar12;
          uVar9 = uVar9 + uVar8 & 0xffff;
        } while (uVar13 != 0);
        uVar16 = DAT_0b003638;
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
      uVar16 = uVar16 & 0xfffe;
      if (uVar17 == 1) {
        uVar11 = uVar11 >> 1;
        uVar8 = 2;
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
        uVar16 = uVar16 + uVar8 & 0xfffe;
      } while( true );
    }
    uVar11 = DAT_0b00363c & 0xf;
    if (uVar11 == 3) {
      uVar11 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar11] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar11 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar12 == 200) {
          bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar12] = &DAT_023dc8ca + (uint)(bVar12 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar11 + (uint)(bVar12 >> 5) * 0x40] = uVar1;
      }
      uVar16 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar11] = uVar1;
      DAT_0208f354 = 1;
      if (uVar11 == uVar16) {
        _DAT_05000200 = uVar1;
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
  uVar7 = DAT_0b003638 & 0x3fff | (uVar7 & 3) << 0xe;
  DAT_020b4bf5 = 0;
  DAT_0b003638 = uVar7;
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
    uVar9 = DAT_0b003638;
    uVar13 = DAT_020b4c00;
    uVar8 = DAT_020b4bec;
    uVar10 = DAT_0b00363c & 0xf;
    uVar7 = DAT_020b4c00 & 0xffff;
    if (uVar10 == 3) {
      bVar12 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar16 = uVar16 << 0xf;
      if (bVar12 == 200) {
        bVar12 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar13 = (uint)DAT_020b4bf7;
      do {
        uVar10 = (uint)*puVar5;
        uVar9 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar10 & 0xe0) << 2) | (ushort)((uVar10 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar10 & 0xe) << 1);
        uVar16 = uVar16 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar11;
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
        uVar7 = uVar7 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar7 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 == 5) {
      uVar16 = uVar16 << 0xf;
      do {
        uVar13 = DAT_0b003638 & 0x7f;
        uVar8 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar13;
        if (0x4f < uVar13) break;
        uVar7 = uVar7 - 1 & 0xffff;
        uVar16 = uVar16 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar8) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar11 + uVar13;
      } while (uVar7 != 0);
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      return;
    }
    if (uVar10 != 1) {
      DAT_020b4bfc = uVar7;
      DAT_020b4c00 = uVar7;
      DAT_0b003634 = uVar16;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar8 = uVar11 & 0xffff;
      uVar16 = uVar16 << 0xf;
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
        uVar16 = uVar16 + 0x8000;
        (&DAT_020acbec)[uVar10 >> 1] = uVar2 != uVar1;
        uVar10 = uVar10 + uVar8 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar7 != 0);
      uVar18 = uVar10;
      if (uVar10 <= uVar9) {
        uVar18 = uVar10 + 0x10000;
      }
      uVar16 = uVar17 & 0xfe0000 | uVar16 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar16;
        return;
      }
      if (uVar9 < DAT_023ddeac) {
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
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar15 = 0x200;
        }
        else {
          iVar15 = 0x280;
        }
        bVar19 = iVar15 + DAT_023ddeac < uVar10;
        DAT_020b4c15 = 1;
      }
      uVar17 = 0;
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa < uVar10)) && (bVar19)) {
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
          uVar7 = uStack_2c - DAT_023ddea0;
          bVar19 = (int)uVar7 < 0;
          puVar6 = puVar5;
          if (bVar19) {
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar7 = uStack_2c;
          }
          if (bVar19) {
            uVar7 = 0;
          }
          uVar13 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar13 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar7,uVar11,uVar13);
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
          uVar7 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar7 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar15,uVar11,uVar7);
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
              uStack_2c = uStack_2c + uVar8 & 0xffff;
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
              uStack_2c = uStack_2c + uVar8 & 0xffff;
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
      uVar8 = uVar7;
      uVar18 = uStack_2c;
      do {
        uVar1 = *puVar6;
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar18] = (char)(uVar1 >> 8);
        uVar16 = uVar16 + 2 & 0x1ffff | uVar17 & 0xfe0000;
        (&DAT_0209cbed)[uVar18] = (char)uVar1;
        uVar18 = uVar18 + uVar11 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar8 != 0);
      if (uVar9 < DAT_023ddeac) {
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
        if (iVar15 + DAT_023ddeac <= uVar9) goto LAB_0200aa20;
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
      if (((uVar9 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar17 = uVar7;
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
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar17) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar6 = puVar5;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          bVar19 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar7 = 0x400;
          }
          else {
            uVar7 = 0x800;
          }
          if (uVar7 <= uVar17) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar11;
            uVar17 = uVar17 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar17 = 0;
        }
        if (!bVar19) {
          uVar7 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar11 & 0xffff;
            uVar7 = uVar7 - 1 & 0xffff;
            uVar17 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar7 != 0);
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
    uVar8 = DAT_0b003630 & 0xffff;
    do {
      uVar9 = uVar17 ^ 1;
      uVar17 = uVar17 + 1 & 0xffff;
      (&DAT_0209cbec)[DAT_0b003638 ^ 1] = (&DAT_0209cbec)[uVar9];
      DAT_0b003638 = DAT_0b003638 + uVar8 & 0xffff;
    } while (uVar17 != (uVar13 & 0xffff));
    if (uVar11 == 1) {
      uVar16 = uVar16 >> 1;
      uVar8 = 2;
    }
    do {
      uVar7 = uVar7 & 0xfffe;
      if (uVar7 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar7 < DAT_023dcea4) || (DAT_023dcdaa <= uVar7)) {
          if ((uVar7 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar7)) {
            bVar19 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar7 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar19 = true;
          }
          if ((DAT_023ddea4 <= uVar7) && (uVar7 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar7 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar7));
            bVar19 = true;
          }
          if ((DAT_023ddea8 <= uVar7) && (uVar7 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar7 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar7));
          }
          if (!bVar19) {
            FUN_020076d0(uVar7,*(undefined2 *)(&DAT_0209cbec + uVar7));
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
        if (iVar15 + DAT_023ddeac <= uVar7) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar16 = uVar16 - 1 & 0xffff;
      if (uVar16 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar7 = uVar7 + uVar8;
    } while( true );
  }
  return;
}


// 0x02017e04  m68k_move_word

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_02017e04(void)

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
  int unaff_r6;
  uint uVar17;
  int unaff_r8;
  uint uVar18;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  uVar17 = DAT_0b003634;
  uVar11 = DAT_0b003630;
  uVar16 = uVar7 & 0xffff;
  uVar2 = unaff_r10[1];
  uVar10 = (*unaff_r10 & 0xf0) * 0x10000;
  uVar1 = (ushort)uVar7;
  if (0xdfffff < uVar10) {
    *(ushort *)(unaff_r8 + (uint)uVar2) = uVar1;
    return;
  }
  if (uVar10 < 0xc00000) {
    uVar11 = CONCAT22(*unaff_r10,uVar2) & 0xffffff;
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


// 0x0202daa0  m68k_move_word

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_0202daa0(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  uint unaff_r7;
  uint uVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar9;
  
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) == 0) {
    iVar8 = unaff_r7 - 0x220000;
    uVar3 = *(uint *)(unaff_r6 + 0x50);
    iVar9 = *(int *)(unaff_r6 + 0x54);
    if ((uVar3 & 0x2000) == 0) {
      iVar5 = *(int *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
    }
    else {
      iVar5 = *(int *)(unaff_r6 + 0x3c);
    }
    *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xff00 | 0x2000;
    puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
    *puVar6 = (ushort)uVar3 | (ushort)iVar8 & 0x1f;
    uVar3 = (int)unaff_r10 - iVar9 | *(uint *)(unaff_r6 + 0x9c);
    puVar6[1] = (ushort)(uVar3 >> 0x10);
    puVar6[2] = (ushort)uVar3;
    iVar9 = *(int *)(unaff_r6 + 0x60);
    uVar1 = *(ushort *)(iVar9 + 0x20);
    uVar2 = *(undefined2 *)(iVar9 + 0x22);
    if ((uVar1 & 0xc0) == 0) {
      uVar3 = 0xffc00000;
      unaff_r8 = iVar9;
    }
    else {
      uVar3 = 0xffff0000;
    }
    *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar3;
    *(int *)(unaff_r6 + 0x54) = unaff_r8;
    unaff_r10 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar3));
    if (0 < iVar8 >> 0x10) {
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar8 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar8;
    }
  }
  else {
    uVar3 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
    uVar7 = unaff_r7 & 0xffffffe0 | uVar3 & 0x1f;
    *(uint *)(unaff_r6 + 0x50) = uVar3 & 0xa700;
    if ((uVar3 & 0x2000) == 0) {
      uVar4 = *(undefined4 *)(unaff_r6 + 0x48);
      *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
      *(undefined4 *)(unaff_r6 + 0x3c) = uVar4;
    }
    iVar8 = uVar7 - 0x100000;
    if (iVar8 != 0 && 0xfffff < (int)uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar8 = (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
      return iVar8;
    }
  }
  *(int *)(unaff_r6 + 0x4c) = iVar8;
  *(ushort **)(unaff_r6 + 0x44) = unaff_r10;
  return iVar8 >> 0x10;
}


// 0x0202df28  m68k_move_word

/* WARNING: Removing unreachable block (ram,0x02009e3c) */
/* WARNING: Removing unreachable block (ram,0x02009e58) */
/* WARNING: Removing unreachable block (ram,0x02009e5c) */
/* WARNING: Removing unreachable block (ram,0x02009e74) */
/* WARNING: Removing unreachable block (ram,0x02009e70) */
/* WARNING: Removing unreachable block (ram,0x0200a30c) */
/* WARNING: Removing unreachable block (ram,0x0200a360) */
/* WARNING: Removing unreachable block (ram,0x0200a390) */
/* WARNING: Removing unreachable block (ram,0x0200a3a8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ac) */
/* WARNING: Removing unreachable block (ram,0x0200a3b0) */
/* WARNING: Removing unreachable block (ram,0x0200a3b4) */
/* WARNING: Removing unreachable block (ram,0x0200a3c4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d0) */
/* WARNING: Removing unreachable block (ram,0x0200a3d4) */
/* WARNING: Removing unreachable block (ram,0x0200a3d8) */
/* WARNING: Removing unreachable block (ram,0x0200a3e0) */
/* WARNING: Removing unreachable block (ram,0x0200a3e4) */
/* WARNING: Removing unreachable block (ram,0x0200a3e8) */
/* WARNING: Removing unreachable block (ram,0x0200a3ec) */
/* WARNING: Removing unreachable block (ram,0x0200a3f0) */
/* WARNING: Removing unreachable block (ram,0x0200a400) */
/* WARNING: Removing unreachable block (ram,0x0200a410) */
/* WARNING: Removing unreachable block (ram,0x0200a420) */
/* WARNING: Removing unreachable block (ram,0x0200a42c) */
/* WARNING: Removing unreachable block (ram,0x0200a4c4) */
/* WARNING: Removing unreachable block (ram,0x0200a430) */
/* WARNING: Removing unreachable block (ram,0x0200a440) */
/* WARNING: Removing unreachable block (ram,0x0200a640) */
/* WARNING: Removing unreachable block (ram,0x0200a44c) */
/* WARNING: Removing unreachable block (ram,0x0200a45c) */
/* WARNING: Removing unreachable block (ram,0x0200a628) */
/* WARNING: Removing unreachable block (ram,0x0200a468) */
/* WARNING: Removing unreachable block (ram,0x0200a490) */
/* WARNING: Removing unreachable block (ram,0x0200a470) */
/* WARNING: Removing unreachable block (ram,0x0200a4ac) */
/* WARNING: Removing unreachable block (ram,0x0200a480) */
/* WARNING: Removing unreachable block (ram,0x0200a2fc) */
/* WARNING: Removing unreachable block (ram,0x02009f04) */
/* WARNING: Removing unreachable block (ram,0x0200a4e0) */
/* WARNING: Removing unreachable block (ram,0x0200a4fc) */
/* WARNING: Removing unreachable block (ram,0x0200a500) */
/* WARNING: Removing unreachable block (ram,0x0200a504) */
/* WARNING: Removing unreachable block (ram,0x0200a53c) */
/* WARNING: Removing unreachable block (ram,0x0200a58c) */
/* WARNING: Removing unreachable block (ram,0x0200a5a4) */
/* WARNING: Removing unreachable block (ram,0x0200a5c0) */
/* WARNING: Removing unreachable block (ram,0x0200a5d8) */
/* WARNING: Removing unreachable block (ram,0x0200a5e8) */
/* WARNING: Removing unreachable block (ram,0x0200a5ec) */
/* WARNING: Removing unreachable block (ram,0x0200a5f0) */
/* WARNING: Removing unreachable block (ram,0x0200a5f4) */
/* WARNING: Removing unreachable block (ram,0x0200a5f8) */
/* WARNING: Removing unreachable block (ram,0x0200a608) */
/* WARNING: Removing unreachable block (ram,0x02009f50) */
/* WARNING: Removing unreachable block (ram,0x02009e88) */
/* WARNING: Removing unreachable block (ram,0x02009e98) */
/* WARNING: Removing unreachable block (ram,0x02009eb0) */
/* WARNING: Removing unreachable block (ram,0x02009ed0) */
/* WARNING: Removing unreachable block (ram,0x02009f58) */
/* WARNING: Removing unreachable block (ram,0x02009f60) */
/* WARNING: Removing unreachable block (ram,0x0200a65c) */
/* WARNING: Removing unreachable block (ram,0x0200a688) */
/* WARNING: Removing unreachable block (ram,0x0200a698) */
/* WARNING: Removing unreachable block (ram,0x0200a69c) */
/* WARNING: Removing unreachable block (ram,0x0200a6a0) */
/* WARNING: Removing unreachable block (ram,0x0200a6a4) */
/* WARNING: Removing unreachable block (ram,0x0200a6a8) */
/* WARNING: Removing unreachable block (ram,0x0200a6b8) */
/* WARNING: Removing unreachable block (ram,0x0200a6bc) */
/* WARNING: Removing unreachable block (ram,0x0200a6dc) */
/* WARNING: Removing unreachable block (ram,0x0200a6e8) */
/* WARNING: Removing unreachable block (ram,0x0200a6ec) */
/* WARNING: Removing unreachable block (ram,0x0200a6f0) */
/* WARNING: Removing unreachable block (ram,0x0200a6fc) */
/* WARNING: Removing unreachable block (ram,0x0200a70c) */
/* WARNING: Removing unreachable block (ram,0x0200a718) */
/* WARNING: Removing unreachable block (ram,0x0200a71c) */
/* WARNING: Removing unreachable block (ram,0x0200a720) */
/* WARNING: Removing unreachable block (ram,0x0200aa30) */
/* WARNING: Removing unreachable block (ram,0x0200a72c) */
/* WARNING: Removing unreachable block (ram,0x0200a730) */
/* WARNING: Removing unreachable block (ram,0x0200a734) */
/* WARNING: Removing unreachable block (ram,0x0200a738) */
/* WARNING: Removing unreachable block (ram,0x0200a740) */
/* WARNING: Removing unreachable block (ram,0x0200a744) */
/* WARNING: Removing unreachable block (ram,0x0200a748) */
/* WARNING: Removing unreachable block (ram,0x0200a754) */
/* WARNING: Removing unreachable block (ram,0x0200aa54) */
/* WARNING: Removing unreachable block (ram,0x0200aa64) */
/* WARNING: Removing unreachable block (ram,0x0200a764) */
/* WARNING: Removing unreachable block (ram,0x0200a76c) */
/* WARNING: Removing unreachable block (ram,0x0200a780) */
/* WARNING: Removing unreachable block (ram,0x0200a78c) */
/* WARNING: Removing unreachable block (ram,0x0200a790) */
/* WARNING: Removing unreachable block (ram,0x0200a794) */
/* WARNING: Removing unreachable block (ram,0x0200a798) */
/* WARNING: Removing unreachable block (ram,0x0200a79c) */
/* WARNING: Removing unreachable block (ram,0x0200a7a0) */
/* WARNING: Removing unreachable block (ram,0x0200a7ac) */
/* WARNING: Removing unreachable block (ram,0x0200a7b0) */
/* WARNING: Removing unreachable block (ram,0x0200a7b4) */
/* WARNING: Removing unreachable block (ram,0x0200a7c8) */
/* WARNING: Removing unreachable block (ram,0x0200a7d8) */
/* WARNING: Removing unreachable block (ram,0x0200a7dc) */
/* WARNING: Removing unreachable block (ram,0x0200a7e0) */
/* WARNING: Removing unreachable block (ram,0x0200a7e4) */
/* WARNING: Removing unreachable block (ram,0x0200a7e8) */
/* WARNING: Removing unreachable block (ram,0x0200a7ec) */
/* WARNING: Removing unreachable block (ram,0x0200a7f8) */
/* WARNING: Removing unreachable block (ram,0x0200a7fc) */
/* WARNING: Removing unreachable block (ram,0x0200a800) */
/* WARNING: Removing unreachable block (ram,0x0200a804) */
/* WARNING: Removing unreachable block (ram,0x0200a808) */
/* WARNING: Removing unreachable block (ram,0x0200a80c) */
/* WARNING: Removing unreachable block (ram,0x0200a81c) */
/* WARNING: Removing unreachable block (ram,0x0200aa28) */
/* WARNING: Removing unreachable block (ram,0x0200a830) */
/* WARNING: Removing unreachable block (ram,0x0200a83c) */
/* WARNING: Removing unreachable block (ram,0x0200a840) */
/* WARNING: Removing unreachable block (ram,0x0200a844) */
/* WARNING: Removing unreachable block (ram,0x0200a848) */
/* WARNING: Removing unreachable block (ram,0x0200a84c) */
/* WARNING: Removing unreachable block (ram,0x0200a850) */
/* WARNING: Removing unreachable block (ram,0x0200a854) */
/* WARNING: Removing unreachable block (ram,0x0200a858) */
/* WARNING: Removing unreachable block (ram,0x0200a860) */
/* WARNING: Removing unreachable block (ram,0x0200a864) */
/* WARNING: Removing unreachable block (ram,0x0200a884) */
/* WARNING: Removing unreachable block (ram,0x0200a88c) */
/* WARNING: Removing unreachable block (ram,0x0200a8a0) */
/* WARNING: Removing unreachable block (ram,0x0200a8a4) */
/* WARNING: Removing unreachable block (ram,0x0200a8a8) */
/* WARNING: Removing unreachable block (ram,0x0200a8ac) */
/* WARNING: Removing unreachable block (ram,0x0200a8b0) */
/* WARNING: Removing unreachable block (ram,0x0200a8b4) */
/* WARNING: Removing unreachable block (ram,0x0200a8c8) */
/* WARNING: Removing unreachable block (ram,0x0200a8cc) */
/* WARNING: Removing unreachable block (ram,0x0200a8d0) */
/* WARNING: Removing unreachable block (ram,0x0200a8d4) */
/* WARNING: Removing unreachable block (ram,0x0200a8d8) */
/* WARNING: Removing unreachable block (ram,0x0200a8dc) */
/* WARNING: Removing unreachable block (ram,0x0200a8e0) */
/* WARNING: Removing unreachable block (ram,0x0200a8e4) */
/* WARNING: Removing unreachable block (ram,0x0200a8ec) */
/* WARNING: Removing unreachable block (ram,0x0200a8f0) */
/* WARNING: Removing unreachable block (ram,0x0200a910) */
/* WARNING: Removing unreachable block (ram,0x0200a924) */
/* WARNING: Removing unreachable block (ram,0x0200a934) */
/* WARNING: Removing unreachable block (ram,0x0200a978) */
/* WARNING: Removing unreachable block (ram,0x0200a980) */
/* WARNING: Removing unreachable block (ram,0x0200a9c8) */
/* WARNING: Removing unreachable block (ram,0x0200a9e0) */
/* WARNING: Removing unreachable block (ram,0x0200a9a0) */
/* WARNING: Removing unreachable block (ram,0x0200a99c) */
/* WARNING: Removing unreachable block (ram,0x0200a9e8) */
/* WARNING: Removing unreachable block (ram,0x0200aa1c) */
/* WARNING: Removing unreachable block (ram,0x02009f7c) */
/* WARNING: Removing unreachable block (ram,0x02009fa0) */
/* WARNING: Removing unreachable block (ram,0x02009fe4) */
/* WARNING: Removing unreachable block (ram,0x02009ff8) */
/* WARNING: Removing unreachable block (ram,0x0200a004) */
/* WARNING: Removing unreachable block (ram,0x0200a008) */
/* WARNING: Removing unreachable block (ram,0x0200a00c) */
/* WARNING: Removing unreachable block (ram,0x0200aa20) */
/* WARNING: Removing unreachable block (ram,0x0200a018) */
/* WARNING: Removing unreachable block (ram,0x0200a01c) */
/* WARNING: Removing unreachable block (ram,0x0200a020) */
/* WARNING: Removing unreachable block (ram,0x0200a024) */
/* WARNING: Removing unreachable block (ram,0x0200a02c) */
/* WARNING: Removing unreachable block (ram,0x0200a030) */
/* WARNING: Removing unreachable block (ram,0x0200a034) */
/* WARNING: Removing unreachable block (ram,0x0200a040) */
/* WARNING: Removing unreachable block (ram,0x0200aa40) */
/* WARNING: Removing unreachable block (ram,0x0200aa50) */
/* WARNING: Removing unreachable block (ram,0x0200a050) */
/* WARNING: Removing unreachable block (ram,0x0200a058) */
/* WARNING: Removing unreachable block (ram,0x0200a06c) */
/* WARNING: Removing unreachable block (ram,0x0200aa38) */
/* WARNING: Removing unreachable block (ram,0x0200a07c) */
/* WARNING: Removing unreachable block (ram,0x0200a08c) */
/* WARNING: Removing unreachable block (ram,0x0200a09c) */
/* WARNING: Removing unreachable block (ram,0x0200a0b4) */
/* WARNING: Removing unreachable block (ram,0x0200a0f0) */
/* WARNING: Removing unreachable block (ram,0x0200a108) */
/* WARNING: Removing unreachable block (ram,0x0200a11c) */
/* WARNING: Removing unreachable block (ram,0x0200a12c) */
/* WARNING: Removing unreachable block (ram,0x0200a14c) */
/* WARNING: Removing unreachable block (ram,0x0200a15c) */
/* WARNING: Removing unreachable block (ram,0x0200a174) */
/* WARNING: Removing unreachable block (ram,0x0200a1b0) */
/* WARNING: Removing unreachable block (ram,0x0200a1c8) */
/* WARNING: Removing unreachable block (ram,0x0200a1dc) */
/* WARNING: Removing unreachable block (ram,0x0200a1ec) */
/* WARNING: Removing unreachable block (ram,0x0200a208) */
/* WARNING: Removing unreachable block (ram,0x0200a20c) */
/* WARNING: Removing unreachable block (ram,0x0200a210) */
/* WARNING: Removing unreachable block (ram,0x0200a218) */
/* WARNING: Removing unreachable block (ram,0x0200a220) */
/* WARNING: Removing unreachable block (ram,0x0200a240) */
/* WARNING: Removing unreachable block (ram,0x0200a278) */
/* WARNING: Removing unreachable block (ram,0x0200a28c) */
/* WARNING: Removing unreachable block (ram,0x0200a290) */
/* WARNING: Removing unreachable block (ram,0x0200a294) */
/* WARNING: Removing unreachable block (ram,0x0200a298) */
/* WARNING: Removing unreachable block (ram,0x0200a2a8) */
/* WARNING: Removing unreachable block (ram,0x0200a2e4) */
/* WARNING: Removing unreachable block (ram,0x02009ee0) */
/* WARNING: Removing unreachable block (ram,0x02009ee4) */
/* WARNING: Removing unreachable block (ram,0x02009efc) */
/* WARNING: Recovered jumptable eliminated as dead code */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0202df28(void)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 *puVar11;
  int iVar12;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  uint unaff_r11;
  bool bVar13;
  
  uVar7 = *(uint *)(unaff_r6 + 0x50);
  uVar4 = unaff_r7 & 0x1f;
  uVar8 = uVar7 & 0xa700;
  uVar9 = uVar8 | uVar4;
  uVar5 = *(uint *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar1 = (ushort)uVar9;
  if (0xdfffff < (uVar5 & 0xf00000)) {
    *(ushort *)(unaff_r8 + (uVar5 & 0xffff)) = uVar1;
    return;
  }
  if ((uVar5 & 0xf00000) < 0xc00000) {
    (*(code *)(&DAT_0b00121c)[(uVar5 & 0xffffff) >> 0x10])(uVar5 & 0xffffff);
    return;
  }
  bVar10 = (byte)uVar4;
  if ((uVar5 & 0x1c) != 0) {
    if (DAT_020b4bf5 != '\0') {
      DAT_020b4bf5 = 0;
      DAT_0b003638 = DAT_0b003638 & 0x3fff | (unaff_r7 & 3) << 0xe;
      DAT_0b00363c = DAT_0b00363c & 3 | (unaff_r7 & 0x10) >> 2;
      if (DAT_020b4bf2 == '\0') {
        return;
      }
      return;
    }
    uVar9 = uVar8 >> 8 & 0x1f;
    if ((uVar7 & 0x8000) == 0x8000) {
      DAT_0b00363c = 0;
      iVar12 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar12 = 0;
      }
      if (uVar9 < 0xc) {
        iVar12 = 0;
      }
      (&DAT_020b4c18)[uVar9] = bVar10;
      if (iVar12 != 0) {
        return;
      }
      switch(uVar9) {
      case 0:
        DAT_0b003644 = (char)(uVar4 >> 4);
        DAT_020b4bf1 = ((byte)(uVar4 >> 1) ^ 1) & 1;
        return;
      case 1:
        DAT_020b4c06 = bVar10 & 4;
        DAT_0b00362f = 0;
        uVar9 = uVar4 >> 3 & 1;
        DAT_0b00362c = 0;
        DAT_020b4bf2 = (char)(uVar4 >> 4);
        DAT_023ddb06 = (char)uVar9;
        if (uVar9 == 0) {
          DAT_023dd370 = 0xe0;
          DAT_0b000004 = 0xe0;
        }
        else {
          DAT_023dd370 = 0xf0;
          DAT_0b000004 = 0xf0;
        }
        break;
      case 2:
        DAT_023ddea0 = (unaff_r7 & 0x18) * 0x400;
        DAT_023dde8c = &DAT_020acbec + (unaff_r7 & 0x18) * 0x200;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea0 != ram0x023dd374)) {
          DAT_023dc8a4 = 1;
        }
        ram0x023dd374 = DAT_023ddea0;
        DAT_023dc8b4 = DAT_023ddea0 + DAT_023dc8a0;
        return;
      case 3:
        DAT_023ddea8 = (unaff_r7 & 0x1e) * 0x400;
        if (DAT_023ddb05 == '\0') {
          iVar12 = 0x800;
        }
        else {
          iVar12 = 0x1000;
        }
        DAT_023dc8bc = iVar12 + DAT_023ddea8;
        return;
      case 4:
        DAT_023ddea4 = (unaff_r7 & 7) * 0x2000;
        DAT_023dde90 = &DAT_020acbec + (unaff_r7 & 7) * 0x1000;
        if (((DAT_023cb610 & 8) != 0) && (DAT_023ddea4 != DAT_023dd378)) {
          DAT_023dc8a8 = 1;
        }
        DAT_023dd378 = DAT_023ddea4;
        DAT_023dc8b8 = DAT_023ddea4 + DAT_023dc8a0;
        return;
      case 5:
        DAT_0209cbe0 = DAT_023ddeac;
        DAT_023dcdac = &DAT_0209cbec + uVar4 * 0x200;
        DAT_023ddeac = uVar4 * 0x200;
        return;
      default:
        return;
      case 7:
        DAT_0b003640 = uVar4;
        DAT_020b4bf7 = bVar10;
        return;
      }
      return;
    }
    DAT_020b4bf5 = 1;
    DAT_0b00363c = DAT_0b00363c & 0x3c | uVar8 >> 0xe;
    DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar7 & 0x2700 | uVar4;
    return;
  }
  if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
     ((DAT_0b00363c & 0x20) != 0)) {
    FUN_02009e3c();
  }
  uVar3 = DAT_0b003630;
  uVar5 = DAT_020b4c00;
  uVar2 = (undefined1)(uVar8 >> 8);
  if (DAT_020b4bf3 != '\0') {
    bVar13 = (DAT_0b003638 & 1) == 0;
    uVar9 = DAT_0b003638 & 0xffff;
    if (bVar13) {
      puVar11 = &DAT_0209cbec + uVar9;
    }
    else {
      puVar11 = (undefined1 *)(DAT_0b003638 & 0xfffe);
    }
    uVar7 = DAT_0b003630 & 0xffff;
    if (!bVar13) {
      (&DAT_0209cbec)[(int)puVar11] = bVar10;
    }
    uVar5 = uVar5 & 0xffff;
    if (bVar13) {
      (&DAT_0209cbec)[uVar9] = uVar2;
      puVar11[1] = bVar10;
    }
    if (!bVar13) {
      (&DAT_0209cbec)[uVar9] = uVar2;
    }
    uVar6 = uVar9 + uVar7 & 0xffff;
    uVar8 = uVar5;
    if (uVar5 != 0) {
      do {
        uVar8 = uVar8 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar6] = bVar10;
        uVar6 = uVar6 + uVar7 & 0xffff;
      } while (uVar8 != 0);
      uVar9 = DAT_0b003638;
      if (uVar5 == 0xffff && uVar4 == 0) {
        DAT_0b003638 = uVar6;
        FUN_02007420();
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
    }
    DAT_0b003638 = uVar6;
    uVar9 = uVar9 & 0xfffe;
    if (uVar3 == 1) {
      uVar5 = uVar5 >> 1;
      uVar7 = 2;
    }
    do {
      if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
        if ((uVar9 < DAT_023dcea4) || (DAT_023dcdaa <= uVar9)) {
          if ((uVar9 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar9)) {
            bVar13 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar9 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar13 = true;
          }
          if ((DAT_023ddea4 <= uVar9) && (uVar9 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar9 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar9));
            bVar13 = true;
          }
          if ((DAT_023ddea8 <= uVar9) && (uVar9 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar9 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar9));
          }
          if (!bVar13) {
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
        if (iVar12 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
        DAT_020b4c15 = 1;
      }
      uVar5 = uVar5 - 1 & 0xffff;
      if (uVar5 == 0) {
        DAT_020b4bf3 = 0;
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar9 = uVar9 + uVar7 & 0xfffe;
    } while( true );
  }
  uVar5 = DAT_0b00363c & 0xf;
  if (uVar5 == 3) {
    uVar9 = (DAT_0b003638 & 0x7e) >> 1;
    (&DAT_023dc6b0)[uVar9] = uVar1 & 0xeee;
    uVar1 = (ushort)((uVar7 & 0x600) << 3) | 0x8000 | (ushort)((unaff_r7 & 0xe) << 1);
    if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
      bVar10 = (&DAT_0208ebb0)[DAT_020b4bec];
      if (bVar10 == 200) {
        bVar10 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      (&DAT_023ddb0c)[bVar10] = &DAT_023dc8ca + (uint)(bVar10 >> 5) * 0x40;
      (&DAT_023dc8ca)[uVar9 + (uint)(bVar10 >> 5) * 0x40] = uVar1;
    }
    uVar4 = (uint)DAT_020b4bf7;
    (&DAT_023dc730)[uVar9] = uVar1;
    DAT_0208f354 = 1;
    if (uVar9 == uVar4) {
      _DAT_05000200 = uVar1;
    }
  }
  else if (uVar5 == 5) {
    uVar9 = DAT_0b003638 & 0x7f;
    if (0x4f < uVar9) {
      DAT_0b003638 = uVar9;
      return;
    }
    uVar4 = DAT_0b003638 & 0x7e;
    DAT_0b003638 = uVar9;
    *(ushort *)((int)&DAT_0b00364c + uVar4) = uVar1;
  }
  else if (uVar5 == 1) {
    uVar5 = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      if (*(ushort *)(&DAT_0209cbec + uVar5) == uVar9) goto LAB_0200ae88;
      *(ushort *)(&DAT_0209cbec + uVar5) = uVar1;
    }
    else {
      (&DAT_0209cbec)[uVar5] = uVar2;
      (&DAT_0209cbed)[uVar5] = bVar10;
      uVar9 = uVar8 >> 8 | uVar4 << 8;
    }
    if (DAT_023ddeac <= uVar5) {
      if (DAT_023ddb05 == '\0') {
        iVar12 = 0x200;
      }
      else {
        iVar12 = 0x280;
      }
      if (uVar5 < iVar12 + DAT_023ddeac) {
        DAT_020b4c15 = 1;
        goto LAB_0200ae88;
      }
    }
    if ((uVar5 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar5)) {
      bVar13 = false;
    }
    else {
      (*DAT_023dc69c)(0,uVar5 - DAT_023ddea0,uVar9);
      bVar13 = true;
    }
    if ((DAT_023ddea4 <= uVar5) && (uVar5 < DAT_023dc8b8)) {
      (*DAT_023dc69c)(1,uVar5 - DAT_023ddea4,uVar9);
      bVar13 = true;
    }
    if ((DAT_023ddea8 <= uVar5) && (uVar5 < DAT_023dc8bc)) {
      (*DAT_023dc5a8)(uVar5 - DAT_023ddea8,uVar9);
    }
    if (!bVar13) {
      FUN_020076d0(uVar5,uVar9);
    }
  }
LAB_0200ae88:
  DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
  return;
}


// 0x0202e0a8  m68k_move_word

void m68k_dispatch_0202e0a8(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
                    /* WARNING: Could not recover jumptable at 0x0202e0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))(uVar1 & 0x1f);
  return;
}

