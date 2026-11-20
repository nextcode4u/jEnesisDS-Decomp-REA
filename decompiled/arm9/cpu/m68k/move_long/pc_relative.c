/* ARM9 pc relative — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x0201aaf0  m68k_move_long

void m68k_dispatch_0201aaf0(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201ab2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201abc0  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201abc0(void)

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
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int unaff_r6;
  uint uVar17;
  uint uVar18;
  int unaff_r8;
  uint uVar19;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar8 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar9 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar1 = (ushort)uVar8;
  if (0xdfffff < (uVar9 & 0xf00000)) {
    puVar5 = (undefined2 *)(unaff_r8 + (uVar9 & 0xffff));
    *puVar5 = (short)(uVar8 >> 0x10);
    puVar5[1] = uVar1;
    return;
  }
  if ((uVar9 & 0xf00000) < 0xc00000) {
    uVar9 = uVar9 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar9 >> 0x10])(uVar9,uVar8 >> 0x10);
    (*(code *)(&DAT_0b00121c)[uVar9 >> 0x10])(uVar9 + 2,uVar8 & 0xffff);
    return;
  }
  bVar13 = (byte)uVar8;
  if ((uVar9 & 0x1c) == 0) {
    FUN_0200ac7c(uVar8 >> 0x10);
    uVar9 = uVar8 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar17 = DAT_0b003630;
    uVar12 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar9 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar20 = (DAT_0b003638 & 1) == 0;
      uVar9 = DAT_0b003638 & 0xffff;
      if (bVar20) {
        puVar15 = &DAT_0209cbec + uVar9;
      }
      else {
        puVar15 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar18 = DAT_0b003630 & 0xffff;
      if (!bVar20) {
        (&DAT_0209cbec)[(int)puVar15] = bVar13;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
        puVar15[1] = bVar13;
      }
      if (!bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
      }
      uVar10 = uVar9 + uVar18 & 0xffff;
      uVar14 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar14 = uVar14 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar10] = bVar13;
          uVar10 = uVar10 + uVar18 & 0xffff;
        } while (uVar14 != 0);
        uVar9 = DAT_0b003638;
        if (uVar12 == 0xffff && (uVar8 & 0xff) == 0) {
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
        uVar12 = uVar12 >> 1;
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
            iVar16 = 0x200;
          }
          else {
            iVar16 = 0x280;
          }
          if (iVar16 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar9 = uVar9 + uVar18 & 0xfffe;
      } while( true );
    }
    uVar12 = DAT_0b00363c & 0xf;
    if (uVar12 == 3) {
      uVar9 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar9] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar8 & 0xe) << 1);
      if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar13 == 200) {
          bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
      }
      uVar8 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar9] = uVar1;
      DAT_0208f354 = 1;
      if (uVar9 == uVar8) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar12 == 5) {
      uVar8 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar8) {
        DAT_0b003638 = uVar8;
        return;
      }
      uVar9 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar8;
      *(ushort *)((int)&DAT_0b00364c + uVar9) = uVar1;
    }
    else if (uVar12 == 1) {
      uVar12 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar12) == uVar9) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar12) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar12] = uVar3;
        (&DAT_0209cbed)[uVar12] = bVar13;
        uVar9 = (uVar8 & 0xffff) >> 8 | (uVar8 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar12) {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (uVar12 < iVar16 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
        bVar20 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,uVar9);
      }
      if (!bVar20) {
        FUN_020076d0(uVar12,uVar9);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar12 = uVar8 >> 2 & 0x3c | uVar8 >> 0x1e;
    uVar9 = (uVar8 & 3) << 0xe | (uVar8 & 0x3fffffff) >> 0x10;
    if ((uVar8 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar9;
    DAT_0b00363c = uVar12;
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
      uVar12 = uVar8 & 0xff;
      uVar9 = (uVar8 & 0xffff) >> 8 & 0x1f;
      if ((uVar8 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar8 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar8 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar16 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar16 = 0;
      }
      if (uVar9 < 0xc) {
        iVar16 = 0;
      }
      (&DAT_020b4c18)[uVar9] = bVar13;
      if (iVar16 == 0) {
        switch(uVar9) {
        case 0:
          DAT_0b003644 = (byte)(uVar12 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar12 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar13 & 4;
          DAT_0b00362f = (byte)(uVar12 >> 6) & 1;
          uVar8 = uVar12 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar12 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar12 >> 4) & 1;
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
            iVar16 = 0x800;
          }
          else {
            iVar16 = 0x1000;
          }
          DAT_023dc8bc = iVar16 + DAT_023ddea8;
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
          iVar16 = (uVar8 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar16;
          DAT_023ddeac = iVar16;
          return;
        case 7:
          DAT_0b003640 = uVar8 & 0x3f;
          DAT_020b4bf7 = (char)(uVar8 & 0x3f);
          return;
        case 10:
          DAT_020b4bf8 = (short)uVar12;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar12 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar12 >> 2) & 1;
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
          uVar9 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar8 & 0x81) != 0;
          if ((uVar9 != (uVar12 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar9)) {
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
          DAT_0b003630 = uVar12;
          return;
        case 0x10:
          uVar12 = uVar12 >> 4 & 3;
          uVar8 = uVar8 & 3;
          uVar9 = uVar12 | uVar8 << 4;
          if (uVar9 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar9;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar12 + uVar8 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar8];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar8;
          DAT_023dd372._0_1_ = (char)uVar12;
          return;
        case 0x11:
          uVar9 = (uVar8 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar12 >> 7);
          DAT_023ddb04 = (char)uVar9;
          if (uVar12 >> 7 == 0) {
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
          DAT_023dde94 = (char)(uVar12 >> 7);
          DAT_020b4c10 = (uVar8 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar8 & 0x1f);
          return;
        case 0x13:
          DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar12;
          return;
        case 0x14:
          DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar12 << 8;
          return;
        case 0x15:
          DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar12 << 1;
          return;
        case 0x16:
          DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar12 << 9;
          return;
        case 0x17:
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar8 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar12 >> 6);
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
  uVar12 = DAT_0b003634;
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
    uVar14 = DAT_020b4c00;
    uVar18 = DAT_020b4bec;
    uVar11 = DAT_0b00363c & 0xf;
    uVar17 = DAT_020b4c00 & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar9 = uVar9 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar14 = (uint)DAT_020b4bf7;
      do {
        uVar11 = (uint)*puVar6;
        uVar10 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar8;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar10]) {
          (&DAT_023dc6b0)[uVar10] = (short)(uVar11 & 0xeee);
          if ((uVar10 != 0) && (uVar18 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar10] = uVar1;
          if (uVar10 == uVar14) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar17 = uVar17 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar14 = DAT_0b003638 & 0x7f;
        uVar18 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar14;
        if (0x4f < uVar14) break;
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar18) = *puVar6;
        puVar6 = puVar6 + 1;
        DAT_0b003638 = uVar8 + uVar14;
      } while (uVar17 != 0);
      DAT_020b4bfc = uVar17;
      DAT_020b4c00 = uVar17;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
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
      uVar11 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar11);
        uVar2 = *puVar7;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar11) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar2 != uVar1;
        uVar11 = uVar11 + uVar18 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar17 != 0);
      uVar19 = uVar11;
      if (uVar11 <= uVar10) {
        uVar19 = uVar11 + 0x10000;
      }
      uVar9 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
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
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + DAT_023ddeac <= uVar10) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar20)) {
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
          uVar14 = uVar19 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea0) {
            uVar14 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar7,uVar17,uVar8,uVar14);
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
          iVar16 = uStack_2c - DAT_023ddea4;
          bVar20 = iVar16 < 0;
          if (bVar20) {
            iVar16 = 0;
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar7 = puVar6;
          }
          uVar17 = uVar19 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea4) {
            uVar17 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar7,iVar16,uVar8,uVar17);
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
            uVar12 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar6);
              }
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar12 = 0;
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
        uVar1 = *puVar7;
        uVar18 = uVar18 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar19] = (char)(uVar1 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar12 & 0xfe0000;
        (&DAT_0209cbed)[uVar19] = (char)uVar1;
        uVar19 = uVar19 + uVar8 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      if (uVar10 < DAT_023ddeac) {
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
        if (iVar16 + DAT_023ddeac <= uVar10) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar12 = uVar17;
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
          uVar12 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar12) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar12) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar7 = puVar6;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if (!bVar20) {
          uVar17 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar8 & 0xffff;
            uVar17 = uVar17 - 1 & 0xffff;
            uVar12 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    DAT_0b003638 = uVar19 & 0xffff;
    DAT_020b4bfc = uVar12;
    DAT_020b4c00 = uVar12;
    DAT_0b003634 = uVar9;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar12 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar14 = uVar12 + uVar9;
    uVar17 = DAT_0b003630 & 0xffff;
    uVar18 = DAT_0b003638;
    do {
      uVar10 = uVar12 ^ 1;
      uVar12 = uVar12 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar18 ^ 1] = (&DAT_0209cbec)[uVar10];
      uVar18 = uVar18 + uVar17 & 0xffff;
    } while (uVar12 != (uVar14 & 0xffff));
    uVar12 = DAT_0b003638;
    if (uVar8 == 1) {
      uVar9 = uVar9 >> 1;
      uVar17 = 2;
    }
    do {
      DAT_0b003638 = uVar18;
      uVar12 = uVar12 & 0xfffe;
      if (uVar12 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar12 < DAT_023dcea4) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
            bVar20 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar20 = true;
          }
          if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar20 = true;
          }
          if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar12));
          }
          if (!bVar20) {
            FUN_020076d0(uVar12,*(undefined2 *)(&DAT_0209cbec + uVar12));
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
        if (iVar16 + DAT_023ddeac <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar9 = uVar9 - 1 & 0xffff;
      if (uVar9 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar12 = uVar12 + uVar17;
      uVar18 = DAT_0b003638;
    } while( true );
  }
  return;
}


// 0x0201acb4  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201acb4(void)

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
  uint uVar12;
  uint *puVar13;
  byte bVar14;
  uint uVar15;
  undefined1 *puVar16;
  int iVar17;
  int unaff_r6;
  uint uVar18;
  uint uVar19;
  int unaff_r8;
  uint uVar20;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar21;
  uint uStack_44;
  uint uStack_2c;
  
  uVar8 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  puVar13 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar9 = *puVar13;
  *puVar13 = uVar9 + 4;
  uVar1 = (ushort)uVar8;
  if (0xdfffff < (uVar9 & 0xf00000)) {
    puVar5 = (undefined2 *)(unaff_r8 + (uVar9 & 0xffff));
    *puVar5 = (short)(uVar8 >> 0x10);
    puVar5[1] = uVar1;
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
    uVar18 = DAT_0b003630;
    uVar12 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar9 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar21 = (DAT_0b003638 & 1) == 0;
      uVar9 = DAT_0b003638 & 0xffff;
      if (bVar21) {
        puVar16 = &DAT_0209cbec + uVar9;
      }
      else {
        puVar16 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar19 = DAT_0b003630 & 0xffff;
      if (!bVar21) {
        (&DAT_0209cbec)[(int)puVar16] = bVar14;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar21) {
        (&DAT_0209cbec)[uVar9] = uVar3;
        puVar16[1] = bVar14;
      }
      if (!bVar21) {
        (&DAT_0209cbec)[uVar9] = uVar3;
      }
      uVar10 = uVar9 + uVar19 & 0xffff;
      uVar15 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar15 = uVar15 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar10] = bVar14;
          uVar10 = uVar10 + uVar19 & 0xffff;
        } while (uVar15 != 0);
        uVar9 = DAT_0b003638;
        if (uVar12 == 0xffff && (uVar8 & 0xff) == 0) {
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
      if (uVar18 == 1) {
        uVar12 = uVar12 >> 1;
        uVar19 = 2;
      }
      do {
        if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
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
            iVar17 = 0x200;
          }
          else {
            iVar17 = 0x280;
          }
          if (iVar17 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar9 = uVar9 + uVar19 & 0xfffe;
      } while( true );
    }
    uVar12 = DAT_0b00363c & 0xf;
    if (uVar12 == 3) {
      uVar9 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar9] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar8 & 0xe) << 1);
      if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar14 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar14 == 200) {
          bVar14 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar14 >> 5) * 0x40] = uVar1;
      }
      uVar8 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar9] = uVar1;
      DAT_0208f354 = 1;
      if (uVar9 == uVar8) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar12 == 5) {
      uVar8 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar8) {
        DAT_0b003638 = uVar8;
        return;
      }
      uVar9 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar8;
      *(ushort *)((int)&DAT_0b00364c + uVar9) = uVar1;
    }
    else if (uVar12 == 1) {
      uVar12 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar12) == uVar9) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar12) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar12] = uVar3;
        (&DAT_0209cbed)[uVar12] = bVar14;
        uVar9 = (uVar8 & 0xffff) >> 8 | (uVar8 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar12) {
        if (DAT_023ddb05 == '\0') {
          iVar17 = 0x200;
        }
        else {
          iVar17 = 0x280;
        }
        if (uVar12 < iVar17 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
        bVar21 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,uVar9);
        bVar21 = true;
      }
      if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,uVar9);
        bVar21 = true;
      }
      if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,uVar9);
      }
      if (!bVar21) {
        FUN_020076d0(uVar12,uVar9);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar12 = uVar8 >> 2 & 0x3c | uVar8 >> 0x1e;
    uVar9 = (uVar8 & 3) << 0xe | (uVar8 & 0x3fffffff) >> 0x10;
    if ((uVar8 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar9;
    DAT_0b00363c = uVar12;
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
      uVar12 = uVar8 & 0xff;
      uVar9 = (uVar8 & 0xffff) >> 8 & 0x1f;
      if ((uVar8 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar8 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar8 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar17 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar17 = 0;
      }
      if (uVar9 < 0xc) {
        iVar17 = 0;
      }
      (&DAT_020b4c18)[uVar9] = bVar14;
      if (iVar17 == 0) {
        switch(uVar9) {
        case 0:
          DAT_0b003644 = (byte)(uVar12 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar12 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar14 & 4;
          DAT_0b00362f = (byte)(uVar12 >> 6) & 1;
          uVar8 = uVar12 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar12 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar12 >> 4) & 1;
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
            iVar17 = 0x800;
          }
          else {
            iVar17 = 0x1000;
          }
          DAT_023dc8bc = iVar17 + DAT_023ddea8;
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
          iVar17 = (uVar8 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar17;
          DAT_023ddeac = iVar17;
          return;
        case 7:
          DAT_0b003640 = uVar8 & 0x3f;
          DAT_020b4bf7 = (char)(uVar8 & 0x3f);
          return;
        case 10:
          DAT_020b4bf8 = (short)uVar12;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar12 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar12 >> 2) & 1;
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
          if ((uVar9 != (uVar12 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar9)) {
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
          DAT_0b003630 = uVar12;
          return;
        case 0x10:
          uVar12 = uVar12 >> 4 & 3;
          uVar8 = uVar8 & 3;
          uVar9 = uVar12 | uVar8 << 4;
          if (uVar9 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar9;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar12 + uVar8 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar8];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar8;
          DAT_023dd372._0_1_ = (char)uVar12;
          return;
        case 0x11:
          uVar9 = (uVar8 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar12 >> 7);
          DAT_023ddb04 = (char)uVar9;
          if (uVar12 >> 7 == 0) {
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
          DAT_023dde94 = (char)(uVar12 >> 7);
          DAT_020b4c10 = (uVar8 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar8 & 0x1f);
          return;
        case 0x13:
          DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar12;
          return;
        case 0x14:
          DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar12 << 8;
          return;
        case 0x15:
          DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar12 << 1;
          return;
        case 0x16:
          DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar12 << 9;
          return;
        case 0x17:
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar8 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar12 >> 6);
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
  uVar12 = DAT_0b003634;
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
    uVar19 = DAT_020b4bec;
    uVar11 = DAT_0b00363c & 0xf;
    uVar18 = DAT_020b4c00 & 0xffff;
    if (uVar11 == 3) {
      bVar14 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar9 = uVar9 << 0xf;
      if (bVar14 == 200) {
        bVar14 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar15 = (uint)DAT_020b4bf7;
      do {
        uVar11 = (uint)*puVar6;
        uVar10 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar8;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar10]) {
          (&DAT_023dc6b0)[uVar10] = (short)(uVar11 & 0xeee);
          if ((uVar10 != 0) && (uVar19 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar14 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar10] = uVar1;
          if (uVar10 == uVar15) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar18 = uVar18 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar18 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar15 = DAT_0b003638 & 0x7f;
        uVar19 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar15;
        if (0x4f < uVar15) break;
        uVar18 = uVar18 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar19) = *puVar6;
        puVar6 = puVar6 + 1;
        DAT_0b003638 = uVar8 + uVar15;
      } while (uVar18 != 0);
      DAT_020b4bfc = uVar18;
      DAT_020b4c00 = uVar18;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
      DAT_020b4bfc = uVar18;
      DAT_020b4c00 = uVar18;
      DAT_0b003634 = uVar9;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar19 = uVar8 & 0xffff;
      uVar9 = uVar9 << 0xf;
      uStack_44 = 0;
      puVar7 = puVar6;
      uVar11 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar11);
        uVar2 = *puVar7;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar11) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar18 = uVar18 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar2 != uVar1;
        uVar11 = uVar11 + uVar19 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      uVar20 = uVar11;
      if (uVar11 <= uVar10) {
        uVar20 = uVar11 + 0x10000;
      }
      uVar9 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      if (uStack_44 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        DAT_0b003634 = uVar9;
        return;
      }
      if (uVar10 < DAT_023ddeac) {
LAB_0200aa30:
        bVar21 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar17 = 0x200;
        }
        else {
          iVar17 = 0x280;
        }
        if (iVar17 + DAT_023ddeac <= uVar10) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar17 = 0x200;
        }
        else {
          iVar17 = 0x280;
        }
        bVar21 = iVar17 + DAT_023ddeac < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar21)) {
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
        if (bVar21) {
          if ((DAT_023dc8a0 >> 1 <= uVar15) && (DAT_023dc8a4 = 1, !bVar4)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar9;
            return;
          }
          uVar18 = uStack_2c - DAT_023ddea0;
          bVar21 = (int)uVar18 < 0;
          puVar7 = puVar6;
          if (bVar21) {
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar18 = uStack_2c;
          }
          if (bVar21) {
            uVar18 = 0;
          }
          uVar15 = uVar20 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar20 - DAT_023ddea0) {
            uVar15 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar7,uVar18,uVar8,uVar15);
          puVar7 = (ushort *)&DAT_0b003638;
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        else {
          puVar7 = (ushort *)0x0;
          bVar21 = false;
        }
        if (bVar4) {
          if (DAT_023dc8a0 >> 1 <= DAT_020b4c00) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a8 = 1;
            DAT_0b003634 = uVar9;
            return;
          }
          iVar17 = uStack_2c - DAT_023ddea4;
          bVar21 = iVar17 < 0;
          if (bVar21) {
            iVar17 = 0;
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar21) {
            puVar7 = puVar6;
          }
          uVar18 = uVar20 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar20 - DAT_023ddea4) {
            uVar18 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar7,iVar17,uVar8,uVar18);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar6,uStack_2c - DAT_023ddea8 & 0xffff,uVar8,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar21) {
          uVar8 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar8) {
            do {
              FUN_020076d0(uStack_2c,*puVar6);
              uStack_2c = uStack_2c + uVar19 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
            uVar12 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar6);
              }
              uStack_2c = uStack_2c + uVar19 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar12 = 0;
              puVar6 = puVar6 + 1;
            } while (uVar8 != 0);
          }
        }
      }
    }
    else {
      uVar8 = uVar8 & 0xffff;
      puVar7 = puVar6;
      uVar19 = uVar18;
      uVar20 = uStack_2c;
      do {
        uVar1 = *puVar7;
        uVar19 = uVar19 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar20] = (char)(uVar1 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar12 & 0xfe0000;
        (&DAT_0209cbed)[uVar20] = (char)uVar1;
        uVar20 = uVar20 + uVar8 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar19 != 0);
      if (uVar10 < DAT_023ddeac) {
LAB_0200aa20:
        bVar21 = true;
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar17 = 0x200;
        }
        else {
          iVar17 = 0x280;
        }
        if (iVar17 + DAT_023ddeac <= uVar10) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar17 = 0x200;
        }
        else {
          iVar17 = 0x280;
        }
        bVar21 = iVar17 + DAT_023ddeac < uVar20;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar20)) && (bVar21)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar21 = false;
          uVar12 = uVar18;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar18) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar18 != 0);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar12) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar18 = 0x400;
          }
          else {
            uVar18 = 0x800;
          }
          if (uVar18 <= uVar12) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar7 = puVar6;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if (!bVar21) {
          uVar18 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar8 & 0xffff;
            uVar18 = uVar18 - 1 & 0xffff;
            uVar12 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar18 != 0);
        }
      }
    }
    DAT_0b003638 = uVar20 & 0xffff;
    DAT_020b4bfc = uVar12;
    DAT_020b4c00 = uVar12;
    DAT_0b003634 = uVar9;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar12 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar15 = uVar12 + uVar9;
    uVar18 = DAT_0b003630 & 0xffff;
    uVar19 = DAT_0b003638;
    do {
      uVar10 = uVar12 ^ 1;
      uVar12 = uVar12 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar19 ^ 1] = (&DAT_0209cbec)[uVar10];
      uVar19 = uVar19 + uVar18 & 0xffff;
    } while (uVar12 != (uVar15 & 0xffff));
    uVar12 = DAT_0b003638;
    if (uVar8 == 1) {
      uVar9 = uVar9 >> 1;
      uVar18 = 2;
    }
    do {
      DAT_0b003638 = uVar19;
      uVar12 = uVar12 & 0xfffe;
      if (uVar12 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar12 < DAT_023dcea4) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
            bVar21 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar21 = true;
          }
          if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar21 = true;
          }
          if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar12));
          }
          if (!bVar21) {
            FUN_020076d0(uVar12,*(undefined2 *)(&DAT_0209cbec + uVar12));
          }
        }
      }
      else {
        if (DAT_023ddb05 == '\0') {
          iVar17 = 0x200;
        }
        else {
          iVar17 = 0x280;
        }
        if (iVar17 + DAT_023ddeac <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar9 = uVar9 - 1 & 0xffff;
      if (uVar9 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar12 = uVar12 + uVar18;
      uVar19 = DAT_0b003638;
    } while( true );
  }
  return;
}


// 0x0201adb4  m68k_move_long

void m68k_dispatch_0201adb4(void)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int unaff_r6;
  int unaff_r8;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar2 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  puVar4 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar3 = *puVar4 - 4;
  *puVar4 = uVar3;
  if (0xdfffff < (uVar3 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    *puVar1 = (short)(uVar2 >> 0x10);
    puVar1[1] = (short)uVar2;
    return;
  }
  uVar3 = uVar3 & 0xffffff;
  (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3 + 2,uVar2 & 0xffff);
  (*(code *)(&DAT_0b00121c)[uVar3 >> 0x10])(uVar3,uVar2 >> 0x10);
  return;
}


// 0x0201aea4  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201aea4(void)

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
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int unaff_r6;
  uint uVar17;
  uint uVar18;
  int unaff_r8;
  uint uVar19;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar8 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar9 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)unaff_r10[1];
  uVar1 = (ushort)uVar8;
  if (0xdfffff < (uVar9 & 0xf00000)) {
    puVar5 = (undefined2 *)(unaff_r8 + (uVar9 & 0xffff));
    *puVar5 = (short)(uVar8 >> 0x10);
    puVar5[1] = uVar1;
    return;
  }
  if ((uVar9 & 0xf00000) < 0xc00000) {
    uVar9 = uVar9 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar9 >> 0x10])(uVar9,uVar8 >> 0x10);
    (*(code *)(&DAT_0b00121c)[uVar9 >> 0x10])(uVar9 + 2,uVar8 & 0xffff);
    return;
  }
  bVar13 = (byte)uVar8;
  if ((uVar9 & 0x1c) == 0) {
    FUN_0200ac7c(uVar8 >> 0x10);
    uVar9 = uVar8 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar17 = DAT_0b003630;
    uVar12 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar9 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar20 = (DAT_0b003638 & 1) == 0;
      uVar9 = DAT_0b003638 & 0xffff;
      if (bVar20) {
        puVar15 = &DAT_0209cbec + uVar9;
      }
      else {
        puVar15 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar18 = DAT_0b003630 & 0xffff;
      if (!bVar20) {
        (&DAT_0209cbec)[(int)puVar15] = bVar13;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
        puVar15[1] = bVar13;
      }
      if (!bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
      }
      uVar10 = uVar9 + uVar18 & 0xffff;
      uVar14 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar14 = uVar14 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar10] = bVar13;
          uVar10 = uVar10 + uVar18 & 0xffff;
        } while (uVar14 != 0);
        uVar9 = DAT_0b003638;
        if (uVar12 == 0xffff && (uVar8 & 0xff) == 0) {
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
        uVar12 = uVar12 >> 1;
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
            iVar16 = 0x200;
          }
          else {
            iVar16 = 0x280;
          }
          if (iVar16 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar9 = uVar9 + uVar18 & 0xfffe;
      } while( true );
    }
    uVar12 = DAT_0b00363c & 0xf;
    if (uVar12 == 3) {
      uVar9 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar9] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar8 & 0xe) << 1);
      if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar13 == 200) {
          bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
      }
      uVar8 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar9] = uVar1;
      DAT_0208f354 = 1;
      if (uVar9 == uVar8) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar12 == 5) {
      uVar8 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar8) {
        DAT_0b003638 = uVar8;
        return;
      }
      uVar9 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar8;
      *(ushort *)((int)&DAT_0b00364c + uVar9) = uVar1;
    }
    else if (uVar12 == 1) {
      uVar12 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar12) == uVar9) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar12) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar12] = uVar3;
        (&DAT_0209cbed)[uVar12] = bVar13;
        uVar9 = (uVar8 & 0xffff) >> 8 | (uVar8 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar12) {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (uVar12 < iVar16 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
        bVar20 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,uVar9);
      }
      if (!bVar20) {
        FUN_020076d0(uVar12,uVar9);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar12 = uVar8 >> 2 & 0x3c | uVar8 >> 0x1e;
    uVar9 = (uVar8 & 3) << 0xe | (uVar8 & 0x3fffffff) >> 0x10;
    if ((uVar8 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar9;
    DAT_0b00363c = uVar12;
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
      uVar12 = uVar8 & 0xff;
      uVar9 = (uVar8 & 0xffff) >> 8 & 0x1f;
      if ((uVar8 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar8 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar8 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar16 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar16 = 0;
      }
      if (uVar9 < 0xc) {
        iVar16 = 0;
      }
      (&DAT_020b4c18)[uVar9] = bVar13;
      if (iVar16 == 0) {
        switch(uVar9) {
        case 0:
          DAT_0b003644 = (byte)(uVar12 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar12 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar13 & 4;
          DAT_0b00362f = (byte)(uVar12 >> 6) & 1;
          uVar8 = uVar12 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar12 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar12 >> 4) & 1;
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
            iVar16 = 0x800;
          }
          else {
            iVar16 = 0x1000;
          }
          DAT_023dc8bc = iVar16 + DAT_023ddea8;
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
          iVar16 = (uVar8 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar16;
          DAT_023ddeac = iVar16;
          return;
        case 7:
          DAT_0b003640 = uVar8 & 0x3f;
          DAT_020b4bf7 = (char)(uVar8 & 0x3f);
          return;
        case 10:
          DAT_020b4bf8 = (short)uVar12;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar12 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar12 >> 2) & 1;
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
          uVar9 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar8 & 0x81) != 0;
          if ((uVar9 != (uVar12 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar9)) {
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
          DAT_0b003630 = uVar12;
          return;
        case 0x10:
          uVar12 = uVar12 >> 4 & 3;
          uVar8 = uVar8 & 3;
          uVar9 = uVar12 | uVar8 << 4;
          if (uVar9 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar9;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar12 + uVar8 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar8];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar8;
          DAT_023dd372._0_1_ = (char)uVar12;
          return;
        case 0x11:
          uVar9 = (uVar8 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar12 >> 7);
          DAT_023ddb04 = (char)uVar9;
          if (uVar12 >> 7 == 0) {
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
          DAT_023dde94 = (char)(uVar12 >> 7);
          DAT_020b4c10 = (uVar8 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar8 & 0x1f);
          return;
        case 0x13:
          DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar12;
          return;
        case 0x14:
          DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar12 << 8;
          return;
        case 0x15:
          DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar12 << 1;
          return;
        case 0x16:
          DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar12 << 9;
          return;
        case 0x17:
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar8 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar12 >> 6);
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
  uVar12 = DAT_0b003634;
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
    uVar14 = DAT_020b4c00;
    uVar18 = DAT_020b4bec;
    uVar11 = DAT_0b00363c & 0xf;
    uVar17 = DAT_020b4c00 & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar9 = uVar9 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar14 = (uint)DAT_020b4bf7;
      do {
        uVar11 = (uint)*puVar6;
        uVar10 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar8;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar10]) {
          (&DAT_023dc6b0)[uVar10] = (short)(uVar11 & 0xeee);
          if ((uVar10 != 0) && (uVar18 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar10] = uVar1;
          if (uVar10 == uVar14) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar17 = uVar17 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar14 = DAT_0b003638 & 0x7f;
        uVar18 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar14;
        if (0x4f < uVar14) break;
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar18) = *puVar6;
        puVar6 = puVar6 + 1;
        DAT_0b003638 = uVar8 + uVar14;
      } while (uVar17 != 0);
      DAT_020b4bfc = uVar17;
      DAT_020b4c00 = uVar17;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
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
      uVar11 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar11);
        uVar2 = *puVar7;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar11) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar2 != uVar1;
        uVar11 = uVar11 + uVar18 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar17 != 0);
      uVar19 = uVar11;
      if (uVar11 <= uVar10) {
        uVar19 = uVar11 + 0x10000;
      }
      uVar9 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
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
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + DAT_023ddeac <= uVar10) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar20)) {
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
          uVar14 = uVar19 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea0) {
            uVar14 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar7,uVar17,uVar8,uVar14);
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
          iVar16 = uStack_2c - DAT_023ddea4;
          bVar20 = iVar16 < 0;
          if (bVar20) {
            iVar16 = 0;
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar7 = puVar6;
          }
          uVar17 = uVar19 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea4) {
            uVar17 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar7,iVar16,uVar8,uVar17);
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
            uVar12 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar6);
              }
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar12 = 0;
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
        uVar1 = *puVar7;
        uVar18 = uVar18 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar19] = (char)(uVar1 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar12 & 0xfe0000;
        (&DAT_0209cbed)[uVar19] = (char)uVar1;
        uVar19 = uVar19 + uVar8 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      if (uVar10 < DAT_023ddeac) {
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
        if (iVar16 + DAT_023ddeac <= uVar10) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar12 = uVar17;
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
          uVar12 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar12) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar12) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar7 = puVar6;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if (!bVar20) {
          uVar17 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar8 & 0xffff;
            uVar17 = uVar17 - 1 & 0xffff;
            uVar12 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    DAT_0b003638 = uVar19 & 0xffff;
    DAT_020b4bfc = uVar12;
    DAT_020b4c00 = uVar12;
    DAT_0b003634 = uVar9;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar12 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar14 = uVar12 + uVar9;
    uVar17 = DAT_0b003630 & 0xffff;
    uVar18 = DAT_0b003638;
    do {
      uVar10 = uVar12 ^ 1;
      uVar12 = uVar12 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar18 ^ 1] = (&DAT_0209cbec)[uVar10];
      uVar18 = uVar18 + uVar17 & 0xffff;
    } while (uVar12 != (uVar14 & 0xffff));
    uVar12 = DAT_0b003638;
    if (uVar8 == 1) {
      uVar9 = uVar9 >> 1;
      uVar17 = 2;
    }
    do {
      DAT_0b003638 = uVar18;
      uVar12 = uVar12 & 0xfffe;
      if (uVar12 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar12 < DAT_023dcea4) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
            bVar20 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar20 = true;
          }
          if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar20 = true;
          }
          if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar12));
          }
          if (!bVar20) {
            FUN_020076d0(uVar12,*(undefined2 *)(&DAT_0209cbec + uVar12));
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
        if (iVar16 + DAT_023ddeac <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar9 = uVar9 - 1 & 0xffff;
      if (uVar9 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar12 = uVar12 + uVar17;
      uVar18 = DAT_0b003638;
    } while( true );
  }
  return;
}


// 0x0201afd8  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201afd8(void)

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
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int unaff_r6;
  uint uVar17;
  uint uVar18;
  int unaff_r8;
  uint uVar19;
  short *unaff_r10;
  uint unaff_r11;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar8 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar2 = unaff_r10[1];
  iVar16 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar16 = unaff_r6;
  }
  uVar9 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar16 = (int)*(short *)(iVar16 + uVar9);
  }
  else {
    iVar16 = *(int *)(iVar16 + uVar9);
  }
  uVar9 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar2 + iVar16;
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
  bVar13 = (byte)uVar8;
  if ((uVar9 & 0x1c) == 0) {
    FUN_0200ac7c(uVar8 >> 0x10);
    uVar9 = uVar8 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar17 = DAT_0b003630;
    uVar12 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar9 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar20 = (DAT_0b003638 & 1) == 0;
      uVar9 = DAT_0b003638 & 0xffff;
      if (bVar20) {
        puVar15 = &DAT_0209cbec + uVar9;
      }
      else {
        puVar15 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar18 = DAT_0b003630 & 0xffff;
      if (!bVar20) {
        (&DAT_0209cbec)[(int)puVar15] = bVar13;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
        puVar15[1] = bVar13;
      }
      if (!bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
      }
      uVar10 = uVar9 + uVar18 & 0xffff;
      uVar14 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar14 = uVar14 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar10] = bVar13;
          uVar10 = uVar10 + uVar18 & 0xffff;
        } while (uVar14 != 0);
        uVar9 = DAT_0b003638;
        if (uVar12 == 0xffff && (uVar8 & 0xff) == 0) {
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
        uVar12 = uVar12 >> 1;
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
            iVar16 = 0x200;
          }
          else {
            iVar16 = 0x280;
          }
          if (iVar16 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar9 = uVar9 + uVar18 & 0xfffe;
      } while( true );
    }
    uVar12 = DAT_0b00363c & 0xf;
    if (uVar12 == 3) {
      uVar9 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar9] = uVar2 & 0xeee;
      uVar2 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar8 & 0xe) << 1);
      if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar13 == 200) {
          bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar13 >> 5) * 0x40] = uVar2;
      }
      uVar8 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar9] = uVar2;
      DAT_0208f354 = 1;
      if (uVar9 == uVar8) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar12 == 5) {
      uVar8 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar8) {
        DAT_0b003638 = uVar8;
        return;
      }
      uVar9 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar8;
      *(ushort *)((int)&DAT_0b00364c + uVar9) = uVar2;
    }
    else if (uVar12 == 1) {
      uVar12 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar12) == uVar9) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar12) = uVar2;
      }
      else {
        (&DAT_0209cbec)[uVar12] = uVar3;
        (&DAT_0209cbed)[uVar12] = bVar13;
        uVar9 = (uVar8 & 0xffff) >> 8 | (uVar8 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar12) {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (uVar12 < iVar16 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
        bVar20 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,uVar9);
      }
      if (!bVar20) {
        FUN_020076d0(uVar12,uVar9);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar12 = uVar8 >> 2 & 0x3c | uVar8 >> 0x1e;
    uVar9 = (uVar8 & 3) << 0xe | (uVar8 & 0x3fffffff) >> 0x10;
    if ((uVar8 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar9;
    DAT_0b00363c = uVar12;
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
      uVar12 = uVar8 & 0xff;
      uVar9 = (uVar8 & 0xffff) >> 8 & 0x1f;
      if ((uVar8 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar8 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar8 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar16 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar16 = 0;
      }
      if (uVar9 < 0xc) {
        iVar16 = 0;
      }
      (&DAT_020b4c18)[uVar9] = bVar13;
      if (iVar16 == 0) {
        switch(uVar9) {
        case 0:
          DAT_0b003644 = (byte)(uVar12 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar12 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar13 & 4;
          DAT_0b00362f = (byte)(uVar12 >> 6) & 1;
          uVar8 = uVar12 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar12 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar12 >> 4) & 1;
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
            iVar16 = 0x800;
          }
          else {
            iVar16 = 0x1000;
          }
          DAT_023dc8bc = iVar16 + DAT_023ddea8;
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
          iVar16 = (uVar8 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar16;
          DAT_023ddeac = iVar16;
          return;
        case 7:
          DAT_0b003640 = uVar8 & 0x3f;
          DAT_020b4bf7 = (char)(uVar8 & 0x3f);
          return;
        case 10:
          DAT_020b4bf8 = (short)uVar12;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar12 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar12 >> 2) & 1;
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
          uVar9 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar8 & 0x81) != 0;
          if ((uVar9 != (uVar12 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar9)) {
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
          DAT_0b003630 = uVar12;
          return;
        case 0x10:
          uVar12 = uVar12 >> 4 & 3;
          uVar8 = uVar8 & 3;
          uVar9 = uVar12 | uVar8 << 4;
          if (uVar9 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar9;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar12 + uVar8 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar8];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar8;
          DAT_023dd372._0_1_ = (char)uVar12;
          return;
        case 0x11:
          uVar9 = (uVar8 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar12 >> 7);
          DAT_023ddb04 = (char)uVar9;
          if (uVar12 >> 7 == 0) {
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
          DAT_023dde94 = (char)(uVar12 >> 7);
          DAT_020b4c10 = (uVar8 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar8 & 0x1f);
          return;
        case 0x13:
          DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar12;
          return;
        case 0x14:
          DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar12 << 8;
          return;
        case 0x15:
          DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar12 << 1;
          return;
        case 0x16:
          DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar12 << 9;
          return;
        case 0x17:
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar8 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar12 >> 6);
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
  uVar12 = DAT_0b003634;
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
    uVar14 = DAT_020b4c00;
    uVar18 = DAT_020b4bec;
    uVar11 = DAT_0b00363c & 0xf;
    uVar17 = DAT_020b4c00 & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar9 = uVar9 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar14 = (uint)DAT_020b4bf7;
      do {
        uVar11 = (uint)*puVar6;
        uVar10 = (DAT_0b003638 & 0x7e) >> 1;
        uVar2 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar8;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar10]) {
          (&DAT_023dc6b0)[uVar10] = (short)(uVar11 & 0xeee);
          if ((uVar10 != 0) && (uVar18 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar13 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar10] = uVar2;
          if (uVar10 == uVar14) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar17 = uVar17 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar14 = DAT_0b003638 & 0x7f;
        uVar18 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar14;
        if (0x4f < uVar14) break;
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar18) = *puVar6;
        puVar6 = puVar6 + 1;
        DAT_0b003638 = uVar8 + uVar14;
      } while (uVar17 != 0);
      DAT_020b4bfc = uVar17;
      DAT_020b4c00 = uVar17;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
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
      uVar11 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&DAT_0209cbec + uVar11);
        uVar1 = *puVar7;
        if (uVar1 != uVar2) {
          *(ushort *)(&DAT_0209cbec + uVar11) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar1 != uVar2;
        uVar11 = uVar11 + uVar18 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar17 != 0);
      uVar19 = uVar11;
      if (uVar11 <= uVar10) {
        uVar19 = uVar11 + 0x10000;
      }
      uVar9 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
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
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + DAT_023ddeac <= uVar10) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar20)) {
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
          uVar14 = uVar19 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea0) {
            uVar14 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar7,uVar17,uVar8,uVar14);
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
          iVar16 = uStack_2c - DAT_023ddea4;
          bVar20 = iVar16 < 0;
          if (bVar20) {
            iVar16 = 0;
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar7 = puVar6;
          }
          uVar17 = uVar19 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea4) {
            uVar17 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar7,iVar16,uVar8,uVar17);
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
            uVar12 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar6);
              }
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar12 = 0;
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
        uVar9 = uVar9 + 2 & 0x1ffff | uVar12 & 0xfe0000;
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
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + DAT_023ddeac <= uVar10) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar12 = uVar17;
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
          uVar12 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar12) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar12) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar7 = puVar6;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if (!bVar20) {
          uVar17 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar8 & 0xffff;
            uVar17 = uVar17 - 1 & 0xffff;
            uVar12 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    DAT_0b003638 = uVar19 & 0xffff;
    DAT_020b4bfc = uVar12;
    DAT_020b4c00 = uVar12;
    DAT_0b003634 = uVar9;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar12 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar14 = uVar12 + uVar9;
    uVar17 = DAT_0b003630 & 0xffff;
    uVar18 = DAT_0b003638;
    do {
      uVar10 = uVar12 ^ 1;
      uVar12 = uVar12 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar18 ^ 1] = (&DAT_0209cbec)[uVar10];
      uVar18 = uVar18 + uVar17 & 0xffff;
    } while (uVar12 != (uVar14 & 0xffff));
    uVar12 = DAT_0b003638;
    if (uVar8 == 1) {
      uVar9 = uVar9 >> 1;
      uVar17 = 2;
    }
    do {
      DAT_0b003638 = uVar18;
      uVar12 = uVar12 & 0xfffe;
      if (uVar12 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar12 < DAT_023dcea4) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
            bVar20 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar20 = true;
          }
          if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar20 = true;
          }
          if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar12));
          }
          if (!bVar20) {
            FUN_020076d0(uVar12,*(undefined2 *)(&DAT_0209cbec + uVar12));
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
        if (iVar16 + DAT_023ddeac <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar9 = uVar9 - 1 & 0xffff;
      if (uVar9 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar12 = uVar12 + uVar17;
      uVar18 = DAT_0b003638;
    } while( true );
  }
  return;
}


// 0x0201b0c8  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201b0c8(void)

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
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  int unaff_r6;
  uint uVar17;
  uint uVar18;
  int unaff_r8;
  uint uVar19;
  short *unaff_r10;
  bool bVar20;
  uint uStack_44;
  uint uStack_2c;
  
  uVar8 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar9 = (uint)unaff_r10[1];
  uVar1 = (ushort)uVar8;
  if (0xdfffff < (uVar9 & 0xf00000)) {
    puVar5 = (undefined2 *)(unaff_r8 + (uint)(ushort)unaff_r10[1]);
    *puVar5 = (short)(uVar8 >> 0x10);
    puVar5[1] = uVar1;
    return;
  }
  if ((uVar9 & 0xf00000) < 0xc00000) {
    uVar9 = uVar9 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar9 >> 0x10])(uVar9,uVar8 >> 0x10);
    (*(code *)(&DAT_0b00121c)[uVar9 >> 0x10])(uVar9 + 2,uVar8 & 0xffff);
    return;
  }
  bVar13 = (byte)uVar8;
  if ((uVar9 & 0x1c) == 0) {
    FUN_0200ac7c(uVar8 >> 0x10);
    uVar9 = uVar8 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar17 = DAT_0b003630;
    uVar12 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar9 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar20 = (DAT_0b003638 & 1) == 0;
      uVar9 = DAT_0b003638 & 0xffff;
      if (bVar20) {
        puVar15 = &DAT_0209cbec + uVar9;
      }
      else {
        puVar15 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar18 = DAT_0b003630 & 0xffff;
      if (!bVar20) {
        (&DAT_0209cbec)[(int)puVar15] = bVar13;
      }
      uVar12 = uVar12 & 0xffff;
      if (bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
        puVar15[1] = bVar13;
      }
      if (!bVar20) {
        (&DAT_0209cbec)[uVar9] = uVar3;
      }
      uVar10 = uVar9 + uVar18 & 0xffff;
      uVar14 = uVar12;
      if (uVar12 != 0) {
        do {
          uVar14 = uVar14 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar10] = bVar13;
          uVar10 = uVar10 + uVar18 & 0xffff;
        } while (uVar14 != 0);
        uVar9 = DAT_0b003638;
        if (uVar12 == 0xffff && (uVar8 & 0xff) == 0) {
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
        uVar12 = uVar12 >> 1;
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
            iVar16 = 0x200;
          }
          else {
            iVar16 = 0x280;
          }
          if (iVar16 + DAT_023ddeac <= uVar9) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar12 = uVar12 - 1 & 0xffff;
        if (uVar12 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar9 = uVar9 + uVar18 & 0xfffe;
      } while( true );
    }
    uVar12 = DAT_0b00363c & 0xf;
    if (uVar12 == 3) {
      uVar9 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar9] = uVar1 & 0xeee;
      uVar1 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar8 & 0xe) << 1);
      if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar13 == 200) {
          bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
      }
      uVar8 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar9] = uVar1;
      DAT_0208f354 = 1;
      if (uVar9 == uVar8) {
        _DAT_05000200 = uVar1;
      }
    }
    else if (uVar12 == 5) {
      uVar8 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar8) {
        DAT_0b003638 = uVar8;
        return;
      }
      uVar9 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar8;
      *(ushort *)((int)&DAT_0b00364c + uVar9) = uVar1;
    }
    else if (uVar12 == 1) {
      uVar12 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar12) == uVar9) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar12) = uVar1;
      }
      else {
        (&DAT_0209cbec)[uVar12] = uVar3;
        (&DAT_0209cbed)[uVar12] = bVar13;
        uVar9 = (uVar8 & 0xffff) >> 8 | (uVar8 & 0xff) << 8;
      }
      if (DAT_023ddeac <= uVar12) {
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (uVar12 < iVar16 + DAT_023ddeac) {
          DAT_020b4c15 = 1;
          goto LAB_0200ae88;
        }
      }
      if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
        bVar20 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,uVar9);
        bVar20 = true;
      }
      if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,uVar9);
      }
      if (!bVar20) {
        FUN_020076d0(uVar12,uVar9);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar12 = uVar8 >> 2 & 0x3c | uVar8 >> 0x1e;
    uVar9 = (uVar8 & 3) << 0xe | (uVar8 & 0x3fffffff) >> 0x10;
    if ((uVar8 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar9;
    DAT_0b00363c = uVar12;
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
      uVar12 = uVar8 & 0xff;
      uVar9 = (uVar8 & 0xffff) >> 8 & 0x1f;
      if ((uVar8 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar8 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar8 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar16 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar16 = 0;
      }
      if (uVar9 < 0xc) {
        iVar16 = 0;
      }
      (&DAT_020b4c18)[uVar9] = bVar13;
      if (iVar16 == 0) {
        switch(uVar9) {
        case 0:
          DAT_0b003644 = (byte)(uVar12 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar12 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar13 & 4;
          DAT_0b00362f = (byte)(uVar12 >> 6) & 1;
          uVar8 = uVar12 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar12 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar12 >> 4) & 1;
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
            iVar16 = 0x800;
          }
          else {
            iVar16 = 0x1000;
          }
          DAT_023dc8bc = iVar16 + DAT_023ddea8;
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
          iVar16 = (uVar8 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar16;
          DAT_023ddeac = iVar16;
          return;
        case 7:
          DAT_0b003640 = uVar8 & 0x3f;
          DAT_020b4bf7 = (char)(uVar8 & 0x3f);
          return;
        case 10:
          DAT_020b4bf8 = (short)uVar12;
          return;
        case 0xb:
          DAT_020b4bf0 = (byte)(uVar12 >> 3) & 1;
          DAT_023dcfac = (byte)(uVar12 >> 2) & 1;
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
          uVar9 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar8 & 0x81) != 0;
          if ((uVar9 != (uVar12 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar9)) {
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
          DAT_0b003630 = uVar12;
          return;
        case 0x10:
          uVar12 = uVar12 >> 4 & 3;
          uVar8 = uVar8 & 3;
          uVar9 = uVar12 | uVar8 << 4;
          if (uVar9 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar9;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar12 + uVar8 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar8];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar8;
          DAT_023dd372._0_1_ = (char)uVar12;
          return;
        case 0x11:
          uVar9 = (uVar8 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar12 >> 7);
          DAT_023ddb04 = (char)uVar9;
          if (uVar12 >> 7 == 0) {
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
          DAT_023dde94 = (char)(uVar12 >> 7);
          DAT_020b4c10 = (uVar8 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar8 & 0x1f);
          return;
        case 0x13:
          DAT_020b4bfc = DAT_020b4bfc & 0xff00 | uVar12;
          return;
        case 0x14:
          DAT_020b4bfc = DAT_020b4bfc & 0xff | uVar12 << 8;
          return;
        case 0x15:
          DAT_0b003634 = DAT_0b003634 & 0xfffe00 | uVar12 << 1;
          return;
        case 0x16:
          DAT_0b003634 = DAT_0b003634 & 0xfe01ff | uVar12 << 9;
          return;
        case 0x17:
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar8 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar12 >> 6);
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
  uVar12 = DAT_0b003634;
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
    uVar14 = DAT_020b4c00;
    uVar18 = DAT_020b4bec;
    uVar11 = DAT_0b00363c & 0xf;
    uVar17 = DAT_020b4c00 & 0xffff;
    if (uVar11 == 3) {
      bVar13 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar9 = uVar9 << 0xf;
      if (bVar13 == 200) {
        bVar13 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar14 = (uint)DAT_020b4bf7;
      do {
        uVar11 = (uint)*puVar6;
        uVar10 = (DAT_0b003638 & 0x7e) >> 1;
        uVar1 = (ushort)((uVar11 & 0xe0) << 2) | (ushort)((uVar11 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar11 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar8;
        if ((uVar11 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar10]) {
          (&DAT_023dc6b0)[uVar10] = (short)(uVar11 & 0xeee);
          if ((uVar10 != 0) && (uVar18 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar13 >> 5) * 0x40] = uVar1;
            (&DAT_023ddb0c)[bVar13] = &DAT_023dc8ca + (uint)(bVar13 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar10] = uVar1;
          if (uVar10 == uVar14) {
            _DAT_05000200 = uVar1;
          }
        }
        uVar17 = uVar17 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar17 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar14 = DAT_0b003638 & 0x7f;
        uVar18 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar14;
        if (0x4f < uVar14) break;
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar18) = *puVar6;
        puVar6 = puVar6 + 1;
        DAT_0b003638 = uVar8 + uVar14;
      } while (uVar17 != 0);
      DAT_020b4bfc = uVar17;
      DAT_020b4c00 = uVar17;
      DAT_0b003634 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar11 != 1) {
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
      uVar11 = uStack_2c;
      do {
        uVar1 = *(ushort *)(&DAT_0209cbec + uVar11);
        uVar2 = *puVar7;
        if (uVar2 != uVar1) {
          *(ushort *)(&DAT_0209cbec + uVar11) = uVar2;
          uStack_44 = uStack_44 + 1;
        }
        uVar17 = uVar17 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar11 >> 1] = uVar2 != uVar1;
        uVar11 = uVar11 + uVar18 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar17 != 0);
      uVar19 = uVar11;
      if (uVar11 <= uVar10) {
        uVar19 = uVar11 + 0x10000;
      }
      uVar9 = uVar12 & 0xfe0000 | uVar9 >> 0xf;
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
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        if (iVar16 + DAT_023ddeac <= uVar10) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar11;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar11)) && (bVar20)) {
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
          uVar14 = uVar19 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea0) {
            uVar14 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar7,uVar17,uVar8,uVar14);
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
          iVar16 = uStack_2c - DAT_023ddea4;
          bVar20 = iVar16 < 0;
          if (bVar20) {
            iVar16 = 0;
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar20) {
            puVar7 = puVar6;
          }
          uVar17 = uVar19 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar19 - DAT_023ddea4) {
            uVar17 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar7,iVar16,uVar8,uVar17);
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
            uVar12 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar6);
              }
              uStack_2c = uStack_2c + uVar18 & 0xffff;
              uVar8 = uVar8 - 1 & 0xffff;
              uVar12 = 0;
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
        uVar1 = *puVar7;
        uVar18 = uVar18 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar19] = (char)(uVar1 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar12 & 0xfe0000;
        (&DAT_0209cbed)[uVar19] = (char)uVar1;
        uVar19 = uVar19 + uVar8 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      if (uVar10 < DAT_023ddeac) {
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
        if (iVar16 + DAT_023ddeac <= uVar10) goto LAB_0200aa20;
        if (DAT_023ddb05 == '\0') {
          iVar16 = 0x200;
        }
        else {
          iVar16 = 0x280;
        }
        bVar20 = iVar16 + DAT_023ddeac < uVar19;
        DAT_020b4c15 = 1;
      }
      uVar12 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar19)) && (bVar20)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar20 = false;
          uVar12 = uVar17;
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
          uVar12 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar12) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          bVar20 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar12 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar17 = 0x400;
          }
          else {
            uVar17 = 0x800;
          }
          if (uVar17 <= uVar12) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar7 = puVar6;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar12 = uVar12 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar12 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar12 = 0;
        }
        if (!bVar20) {
          uVar17 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar8 & 0xffff;
            uVar17 = uVar17 - 1 & 0xffff;
            uVar12 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    DAT_0b003638 = uVar19 & 0xffff;
    DAT_020b4bfc = uVar12;
    DAT_020b4c00 = uVar12;
    DAT_0b003634 = uVar9;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar12 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar14 = uVar12 + uVar9;
    uVar17 = DAT_0b003630 & 0xffff;
    uVar18 = DAT_0b003638;
    do {
      uVar10 = uVar12 ^ 1;
      uVar12 = uVar12 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar18 ^ 1] = (&DAT_0209cbec)[uVar10];
      uVar18 = uVar18 + uVar17 & 0xffff;
    } while (uVar12 != (uVar14 & 0xffff));
    uVar12 = DAT_0b003638;
    if (uVar8 == 1) {
      uVar9 = uVar9 >> 1;
      uVar17 = 2;
    }
    do {
      DAT_0b003638 = uVar18;
      uVar12 = uVar12 & 0xfffe;
      if (uVar12 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar12 < DAT_023dcea4) || (DAT_023dcdaa <= uVar12)) {
          if ((uVar12 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar12)) {
            bVar20 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar12 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar20 = true;
          }
          if ((DAT_023ddea4 <= uVar12) && (uVar12 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar12 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar12));
            bVar20 = true;
          }
          if ((DAT_023ddea8 <= uVar12) && (uVar12 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar12 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar12));
          }
          if (!bVar20) {
            FUN_020076d0(uVar12,*(undefined2 *)(&DAT_0209cbec + uVar12));
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
        if (iVar16 + DAT_023ddeac <= uVar12) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar9 = uVar9 - 1 & 0xffff;
      if (uVar9 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar12 = uVar12 + uVar17;
      uVar18 = DAT_0b003638;
    } while( true );
  }
  return;
}


// 0x0201b194  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201b194(void)

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
  int unaff_r6;
  uint uVar16;
  uint uVar17;
  int unaff_r8;
  uint uVar18;
  short *unaff_r10;
  bool bVar19;
  uint uStack_44;
  uint uStack_2c;
  
  uVar7 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  uVar2 = unaff_r10[2];
  uVar15 = ((ushort)unaff_r10[1] & 0xf0) * 0x10000;
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
  bVar11 = (byte)uVar7;
  if ((uVar2 & 0x1c) == 0) {
    FUN_0200ac7c(uVar7 >> 0x10);
    uVar15 = uVar7 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar16 = DAT_0b003630;
    uVar10 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar15 >> 8);
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
      uVar8 = uVar15 + uVar17 & 0xffff;
      uVar12 = uVar10;
      if (uVar10 != 0) {
        do {
          uVar12 = uVar12 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar8] = bVar11;
          uVar8 = uVar8 + uVar17 & 0xffff;
        } while (uVar12 != 0);
        uVar15 = DAT_0b003638;
        if (uVar10 == 0xffff && (uVar7 & 0xff) == 0) {
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
      uVar15 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar15] = uVar1 & 0xeee;
      uVar2 = (ushort)((uVar7 & 0xe0) << 2) | (ushort)((uVar7 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar7 & 0xe) << 1);
      if ((uVar15 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar11 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar11 == 200) {
          bVar11 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar11] = &DAT_023dc8ca + (uint)(bVar11 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar15 + (uint)(bVar11 >> 5) * 0x40] = uVar2;
      }
      uVar7 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar15] = uVar2;
      DAT_0208f354 = 1;
      if (uVar15 == uVar7) {
        _DAT_05000200 = uVar2;
      }
    }
    else if (uVar10 == 5) {
      uVar15 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar15) {
        DAT_0b003638 = uVar15;
        return;
      }
      uVar7 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar15;
      *(ushort *)((int)&DAT_0b00364c + uVar7) = uVar1;
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
        uVar15 = (uVar7 & 0xffff) >> 8 | (uVar7 & 0xff) << 8;
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
    uVar10 = uVar7 >> 2 & 0x3c | uVar7 >> 0x1e;
    uVar15 = (uVar7 & 3) << 0xe | (uVar7 & 0x3fffffff) >> 0x10;
    if ((uVar7 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar15;
    DAT_0b00363c = uVar10;
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
      uVar10 = uVar7 & 0xff;
      uVar15 = (uVar7 & 0xffff) >> 8 & 0x1f;
      if ((uVar7 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar7 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar7 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar14 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar14 = 0;
      }
      if (uVar15 < 0xc) {
        iVar14 = 0;
      }
      (&DAT_020b4c18)[uVar15] = bVar11;
      if (iVar14 == 0) {
        switch(uVar15) {
        case 0:
          DAT_0b003644 = (byte)(uVar10 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar10 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar11 & 4;
          DAT_0b00362f = (byte)(uVar10 >> 6) & 1;
          uVar15 = uVar10 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar10 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar10 >> 4) & 1;
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
            iVar14 = 0x800;
          }
          else {
            iVar14 = 0x1000;
          }
          DAT_023dc8bc = iVar14 + DAT_023ddea8;
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
          iVar14 = (uVar7 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar14;
          DAT_023ddeac = iVar14;
          return;
        case 7:
          DAT_0b003640 = uVar7 & 0x3f;
          DAT_020b4bf7 = (char)(uVar7 & 0x3f);
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
          uVar15 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar7 & 0x81) != 0;
          if ((uVar15 != (uVar10 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar15)) {
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
          DAT_0b003630 = uVar10;
          return;
        case 0x10:
          uVar10 = uVar10 >> 4 & 3;
          uVar7 = uVar7 & 3;
          uVar15 = uVar10 | uVar7 << 4;
          if (uVar15 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar15;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar10 + uVar7 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar7];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar7;
          DAT_023dd372._0_1_ = (char)uVar10;
          return;
        case 0x11:
          uVar15 = (uVar7 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar10 >> 7);
          DAT_023ddb04 = (char)uVar15;
          if (uVar10 >> 7 == 0) {
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
          DAT_023dde94 = (char)(uVar10 >> 7);
          DAT_020b4c10 = (uVar7 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar7 & 0x1f);
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
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar7 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar10 >> 6);
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
  uVar10 = DAT_0b003634;
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
    uVar12 = DAT_020b4c00;
    uVar17 = DAT_020b4bec;
    uVar9 = DAT_0b00363c & 0xf;
    uVar16 = DAT_020b4c00 & 0xffff;
    if (uVar9 == 3) {
      bVar11 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar7 = uVar7 << 0xf;
      if (bVar11 == 200) {
        bVar11 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar12 = (uint)DAT_020b4bf7;
      do {
        uVar9 = (uint)*puVar5;
        uVar8 = (DAT_0b003638 & 0x7e) >> 1;
        uVar2 = (ushort)((uVar9 & 0xe0) << 2) | (ushort)((uVar9 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar9 & 0xe) << 1);
        uVar7 = uVar7 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar15;
        if ((uVar9 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar8]) {
          (&DAT_023dc6b0)[uVar8] = (short)(uVar9 & 0xeee);
          if ((uVar8 != 0) && (uVar17 < 0xdf)) {
            (&DAT_023dc8ca)[uVar8 + (uint)(bVar11 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar11] = &DAT_023dc8ca + (uint)(bVar11 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar8] = uVar2;
          if (uVar8 == uVar12) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar16 = uVar16 - 1 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (uVar16 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar10 & 0xfe0000 | uVar7 >> 0xf;
      return;
    }
    if (uVar9 == 5) {
      uVar7 = uVar7 << 0xf;
      do {
        uVar12 = DAT_0b003638 & 0x7f;
        uVar17 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar12;
        if (0x4f < uVar12) break;
        uVar16 = uVar16 - 1 & 0xffff;
        uVar7 = uVar7 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar17) = *puVar5;
        puVar5 = puVar5 + 1;
        DAT_0b003638 = uVar15 + uVar12;
      } while (uVar16 != 0);
      DAT_020b4bfc = uVar16;
      DAT_020b4c00 = uVar16;
      DAT_0b003634 = uVar10 & 0xfe0000 | uVar7 >> 0xf;
      return;
    }
    if (uVar9 != 1) {
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
      uVar9 = uStack_2c;
      do {
        uVar2 = *(ushort *)(&DAT_0209cbec + uVar9);
        uVar1 = *puVar6;
        if (uVar1 != uVar2) {
          *(ushort *)(&DAT_0209cbec + uVar9) = uVar1;
          uStack_44 = uStack_44 + 1;
        }
        uVar16 = uVar16 - 1 & 0xffff;
        uVar7 = uVar7 + 0x8000;
        (&DAT_020acbec)[uVar9 >> 1] = uVar1 != uVar2;
        uVar9 = uVar9 + uVar17 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar16 != 0);
      uVar18 = uVar9;
      if (uVar9 <= uVar8) {
        uVar18 = uVar9 + 0x10000;
      }
      uVar7 = uVar10 & 0xfe0000 | uVar7 >> 0xf;
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
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (iVar14 + DAT_023ddeac <= uVar8) goto LAB_0200aa30;
        if (DAT_023ddb05 == '\0') {
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        bVar19 = iVar14 + DAT_023ddeac < uVar9;
        DAT_020b4c15 = 1;
      }
      uVar10 = 0;
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
          if ((DAT_023dc8a0 >> 1 <= uVar12) && (DAT_023dc8a4 = 1, !bVar4)) {
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
          uVar12 = uVar18 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea0) {
            uVar12 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar6,uVar16,uVar15,uVar12);
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
          iVar14 = uStack_2c - DAT_023ddea4;
          bVar19 = iVar14 < 0;
          if (bVar19) {
            iVar14 = 0;
            puVar6 = (ushort *)((int)puVar5 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar19) {
            puVar6 = puVar5;
          }
          uVar16 = uVar18 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar18 - DAT_023ddea4) {
            uVar16 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar6,iVar14,uVar15,uVar16);
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
            uVar10 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar5);
              }
              uStack_2c = uStack_2c + uVar17 & 0xffff;
              uVar15 = uVar15 - 1 & 0xffff;
              uVar10 = 0;
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
        uVar7 = uVar7 + 2 & 0x1ffff | uVar10 & 0xfe0000;
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
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (iVar14 + DAT_023ddeac <= uVar8) goto LAB_0200aa20;
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
      if (((uVar8 != DAT_023dcea4) || (DAT_023dcdaa <= uVar18)) && (bVar19)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar19 = false;
          uVar10 = uVar16;
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
            uStack_2c = (uStack_2c & 0xffff) + uVar15;
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
            uVar16 = 0x400;
          }
          else {
            uVar16 = 0x800;
          }
          if (uVar16 <= uVar10) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar6 = puVar5;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar15;
            uVar10 = uVar10 - 1 & 0xffff;
            puVar6 = puVar6 + 1;
          } while (uVar10 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar10 = 0;
        }
        if (!bVar19) {
          uVar16 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar5 << 8 | (uint)(*puVar5 >> 8));
            uStack_2c = uStack_2c + uVar15 & 0xffff;
            uVar16 = uVar16 - 1 & 0xffff;
            uVar10 = 0;
            puVar5 = puVar5 + 1;
          } while (uVar16 != 0);
        }
      }
    }
    DAT_0b003638 = uVar18 & 0xffff;
    DAT_020b4bfc = uVar10;
    DAT_020b4c00 = uVar10;
    DAT_0b003634 = uVar7;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar10 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar12 = uVar10 + uVar7;
    uVar16 = DAT_0b003630 & 0xffff;
    uVar17 = DAT_0b003638;
    do {
      uVar8 = uVar10 ^ 1;
      uVar10 = uVar10 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar17 ^ 1] = (&DAT_0209cbec)[uVar8];
      uVar17 = uVar17 + uVar16 & 0xffff;
    } while (uVar10 != (uVar12 & 0xffff));
    uVar10 = DAT_0b003638;
    if (uVar15 == 1) {
      uVar7 = uVar7 >> 1;
      uVar16 = 2;
    }
    do {
      DAT_0b003638 = uVar17;
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
          iVar14 = 0x200;
        }
        else {
          iVar14 = 0x280;
        }
        if (iVar14 + DAT_023ddeac <= uVar10) goto LAB_0200a3f0;
        DAT_020b4c15 = 1;
      }
      uVar7 = uVar7 - 1 & 0xffff;
      if (uVar7 == 0) {
        DAT_020b4bfc = 0;
        DAT_020b4c00 = 0;
        return;
      }
      uVar10 = uVar10 + uVar16;
      uVar17 = DAT_0b003638;
    } while( true );
  }
  return;
}


// 0x0201b2b4  m68k_move_long

void m68k_dispatch_0201b2b4(void)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar1);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar1);
  }
  uVar3 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar4);
  *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0201b318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201b3fc  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201b3fc(void)

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
  iVar11 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar11 = unaff_r6 + 0x20;
  }
  uVar8 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar11 = (int)*(short *)(iVar11 + uVar8);
  }
  else {
    iVar11 = *(int *)(iVar11 + uVar8);
  }
  uVar8 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar11);
  uVar9 = *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
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


// 0x0201b568  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201b568(void)

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
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  undefined1 *puVar17;
  int unaff_r6;
  uint uVar18;
  uint uVar19;
  int unaff_r8;
  uint uVar20;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar21;
  uint uStack_44;
  uint uStack_2c;
  
  uVar2 = *unaff_r10;
  iVar11 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar11 = unaff_r6 + 0x20;
  }
  uVar8 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar11 = (int)*(short *)(iVar11 + uVar8);
  }
  else {
    iVar11 = *(int *)(iVar11 + uVar8);
  }
  uVar8 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar11);
  puVar14 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar9 = *puVar14;
  *puVar14 = uVar9 + 4;
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
  bVar15 = (byte)uVar8;
  if ((uVar9 & 0x1c) == 0) {
    FUN_0200ac7c(uVar8 >> 0x10);
    uVar9 = uVar8 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar18 = DAT_0b003630;
    uVar13 = DAT_020b4c00;
    uVar3 = (undefined1)(uVar9 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar21 = (DAT_0b003638 & 1) == 0;
      uVar9 = DAT_0b003638 & 0xffff;
      if (bVar21) {
        puVar17 = &DAT_0209cbec + uVar9;
      }
      else {
        puVar17 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar19 = DAT_0b003630 & 0xffff;
      if (!bVar21) {
        (&DAT_0209cbec)[(int)puVar17] = bVar15;
      }
      uVar13 = uVar13 & 0xffff;
      if (bVar21) {
        (&DAT_0209cbec)[uVar9] = uVar3;
        puVar17[1] = bVar15;
      }
      if (!bVar21) {
        (&DAT_0209cbec)[uVar9] = uVar3;
      }
      uVar10 = uVar9 + uVar19 & 0xffff;
      uVar16 = uVar13;
      if (uVar13 != 0) {
        do {
          uVar16 = uVar16 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar10] = bVar15;
          uVar10 = uVar10 + uVar19 & 0xffff;
        } while (uVar16 != 0);
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
      if (uVar18 == 1) {
        uVar13 = uVar13 >> 1;
        uVar19 = 2;
      }
      do {
        if (uVar9 < DAT_023ddeac) {
LAB_0200adc4:
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
        uVar9 = uVar9 + uVar19 & 0xfffe;
      } while( true );
    }
    uVar13 = DAT_0b00363c & 0xf;
    if (uVar13 == 3) {
      uVar9 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar9] = uVar2 & 0xeee;
      uVar2 = (ushort)((uVar8 & 0xe0) << 2) | (ushort)((uVar8 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar8 & 0xe) << 1);
      if ((uVar9 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar15 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar15 == 200) {
          bVar15 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar9 + (uint)(bVar15 >> 5) * 0x40] = uVar2;
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
        (&DAT_0209cbed)[uVar13] = bVar15;
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
        bVar21 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar13 - DAT_023ddea0,uVar9);
        bVar21 = true;
      }
      if ((DAT_023ddea4 <= uVar13) && (uVar13 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar13 - DAT_023ddea4,uVar9);
        bVar21 = true;
      }
      if ((DAT_023ddea8 <= uVar13) && (uVar13 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar13 - DAT_023ddea8,uVar9);
      }
      if (!bVar21) {
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
      (&DAT_020b4c18)[uVar9] = bVar15;
      if (iVar11 == 0) {
        switch(uVar9) {
        case 0:
          DAT_0b003644 = (byte)(uVar13 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar13 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar15 & 4;
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
    uVar16 = DAT_020b4c00;
    uVar19 = DAT_020b4bec;
    uVar12 = DAT_0b00363c & 0xf;
    uVar18 = DAT_020b4c00 & 0xffff;
    if (uVar12 == 3) {
      bVar15 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar9 = uVar9 << 0xf;
      if (bVar15 == 200) {
        bVar15 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar16 = (uint)DAT_020b4bf7;
      do {
        uVar12 = (uint)*puVar6;
        uVar10 = (DAT_0b003638 & 0x7e) >> 1;
        uVar2 = (ushort)((uVar12 & 0xe0) << 2) | (ushort)((uVar12 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar12 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar8;
        if ((uVar12 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar10]) {
          (&DAT_023dc6b0)[uVar10] = (short)(uVar12 & 0xeee);
          if ((uVar10 != 0) && (uVar19 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar15 >> 5) * 0x40] = uVar2;
            (&DAT_023ddb0c)[bVar15] = &DAT_023dc8ca + (uint)(bVar15 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar10] = uVar2;
          if (uVar10 == uVar16) {
            _DAT_05000200 = uVar2;
          }
        }
        uVar18 = uVar18 - 1 & 0xffff;
        puVar6 = puVar6 + 1;
      } while (uVar18 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar12 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar16 = DAT_0b003638 & 0x7f;
        uVar19 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar16;
        if (0x4f < uVar16) break;
        uVar18 = uVar18 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar19) = *puVar6;
        puVar6 = puVar6 + 1;
        DAT_0b003638 = uVar8 + uVar16;
      } while (uVar18 != 0);
      DAT_020b4bfc = uVar18;
      DAT_020b4c00 = uVar18;
      DAT_0b003634 = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar12 != 1) {
      DAT_020b4bfc = uVar18;
      DAT_020b4c00 = uVar18;
      DAT_0b003634 = uVar9;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar19 = uVar8 & 0xffff;
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
        uVar18 = uVar18 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar12 >> 1] = uVar1 != uVar2;
        uVar12 = uVar12 + uVar19 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      uVar20 = uVar12;
      if (uVar12 <= uVar10) {
        uVar20 = uVar12 + 0x10000;
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
        bVar21 = true;
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
        bVar21 = iVar11 + DAT_023ddeac < uVar12;
        DAT_020b4c15 = 1;
      }
      uVar13 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar12)) && (bVar21)) {
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
        if (bVar21) {
          if ((DAT_023dc8a0 >> 1 <= uVar16) && (DAT_023dc8a4 = 1, !bVar4)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar9;
            return;
          }
          uVar18 = uStack_2c - DAT_023ddea0;
          bVar21 = (int)uVar18 < 0;
          puVar7 = puVar6;
          if (bVar21) {
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar18 = uStack_2c;
          }
          if (bVar21) {
            uVar18 = 0;
          }
          uVar16 = uVar20 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar20 - DAT_023ddea0) {
            uVar16 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar7,uVar18,uVar8,uVar16);
          puVar7 = (ushort *)&DAT_0b003638;
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        else {
          puVar7 = (ushort *)0x0;
          bVar21 = false;
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
          bVar21 = iVar11 < 0;
          if (bVar21) {
            iVar11 = 0;
            puVar7 = (ushort *)((int)puVar6 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar21) {
            puVar7 = puVar6;
          }
          uVar18 = uVar20 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar20 - DAT_023ddea4) {
            uVar18 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar7,iVar11,uVar8,uVar18);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar6,uStack_2c - DAT_023ddea8 & 0xffff,uVar8,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar21) {
          uVar8 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar8) {
            do {
              FUN_020076d0(uStack_2c,*puVar6);
              uStack_2c = uStack_2c + uVar19 & 0xffff;
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
              uStack_2c = uStack_2c + uVar19 & 0xffff;
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
      uVar19 = uVar18;
      uVar20 = uStack_2c;
      do {
        uVar2 = *puVar7;
        uVar19 = uVar19 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar20] = (char)(uVar2 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar13 & 0xfe0000;
        (&DAT_0209cbed)[uVar20] = (char)uVar2;
        uVar20 = uVar20 + uVar8 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar19 != 0);
      if (uVar10 < DAT_023ddeac) {
LAB_0200aa20:
        bVar21 = true;
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
        bVar21 = iVar11 + DAT_023ddeac < uVar20;
        DAT_020b4c15 = 1;
      }
      uVar13 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar20)) && (bVar21)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar21 = false;
          uVar13 = uVar18;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar18) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar7 = puVar6;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar8;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar7 = puVar7 + 1;
          } while (uVar18 != 0);
          bVar21 = true;
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
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar13 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar13 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar18 = 0x400;
          }
          else {
            uVar18 = 0x800;
          }
          if (uVar18 <= uVar13) {
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
        if (!bVar21) {
          uVar18 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar6 << 8 | (uint)(*puVar6 >> 8));
            uStack_2c = uStack_2c + uVar8 & 0xffff;
            uVar18 = uVar18 - 1 & 0xffff;
            uVar13 = 0;
            puVar6 = puVar6 + 1;
          } while (uVar18 != 0);
        }
      }
    }
    DAT_0b003638 = uVar20 & 0xffff;
    DAT_020b4bfc = uVar13;
    DAT_020b4c00 = uVar13;
    DAT_0b003634 = uVar9;
    break;
  case 2:
    DAT_020b4bf3 = '\x01';
    break;
  case 3:
    uVar13 = (DAT_0b003634 & 0x1ffff) >> 1;
    uVar16 = uVar13 + uVar9;
    uVar18 = DAT_0b003630 & 0xffff;
    uVar19 = DAT_0b003638;
    do {
      uVar10 = uVar13 ^ 1;
      uVar13 = uVar13 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar19 ^ 1] = (&DAT_0209cbec)[uVar10];
      uVar19 = uVar19 + uVar18 & 0xffff;
    } while (uVar13 != (uVar16 & 0xffff));
    uVar13 = DAT_0b003638;
    if (uVar8 == 1) {
      uVar9 = uVar9 >> 1;
      uVar18 = 2;
    }
    do {
      DAT_0b003638 = uVar19;
      uVar13 = uVar13 & 0xfffe;
      if (uVar13 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar13 < DAT_023dcea4) || (DAT_023dcdaa <= uVar13)) {
          if ((uVar13 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar13)) {
            bVar21 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar13 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar13));
            bVar21 = true;
          }
          if ((DAT_023ddea4 <= uVar13) && (uVar13 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar13 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar13));
            bVar21 = true;
          }
          if ((DAT_023ddea8 <= uVar13) && (uVar13 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar13 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar13));
          }
          if (!bVar21) {
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
      uVar13 = uVar13 + uVar18;
      uVar19 = DAT_0b003638;
    } while( true );
  }
  return;
}


// 0x0201b6e0  m68k_move_long

void m68k_dispatch_0201b6e0(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int unaff_r6;
  int unaff_r8;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar5 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar5 = unaff_r6 + 0x20;
  }
  uVar3 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar5 = (int)*(short *)(iVar5 + uVar3);
  }
  else {
    iVar5 = *(int *)(iVar5 + uVar3);
  }
  uVar3 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar1 + iVar5);
  puVar6 = (uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7));
  uVar4 = *puVar6 - 4;
  *puVar6 = uVar4;
  if ((uVar4 & 0xf00000) < 0xe00000) {
    uVar4 = uVar4 & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar4 >> 0x10])(uVar4 + 2,uVar3 & 0xffff);
    (*(code *)(&DAT_0b00121c)[uVar4 >> 0x10])(uVar4,uVar3 >> 0x10);
    return;
  }
  puVar2 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
  *puVar2 = (short)(uVar3 >> 0x10);
  puVar2[1] = (short)uVar3;
  return;
}


// 0x0201b848  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201b848(void)

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
  iVar11 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar11 = unaff_r6 + 0x20;
  }
  uVar8 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar11 = (int)*(short *)(iVar11 + uVar8);
  }
  else {
    iVar11 = *(int *)(iVar11 + uVar8);
  }
  uVar8 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar11);
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


// 0x0201b9f4  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201b9f4(void)

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
  iVar11 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar11 = unaff_r6 + 0x20;
  }
  uVar8 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar11 = (int)*(short *)(iVar11 + uVar8);
  }
  else {
    iVar11 = *(int *)(iVar11 + uVar8);
  }
  uVar8 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar11);
  uVar2 = unaff_r10[1];
  iVar11 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar11 = unaff_r6;
  }
  uVar9 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar11 = (int)*(short *)(iVar11 + uVar9);
  }
  else {
    iVar11 = *(int *)(iVar11 + uVar9);
  }
  uVar9 = *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) + (int)(char)uVar2 + iVar11;
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


// 0x0201bb5c  m68k_move_long

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


// 0x0201bca0  m68k_move_long

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void m68k_dispatch_0201bca0(void)

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
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint uVar17;
  int unaff_r6;
  uint uVar18;
  uint uVar19;
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
  uVar17 = (uVar4 & 0x7000) >> 10;
  if ((uVar4 & 0x800) == 0) {
    iVar11 = (int)*(short *)(unaff_r6 + uVar17);
  }
  else {
    iVar11 = *(int *)(unaff_r6 + uVar17);
  }
  uVar9 = FUN_010040fc(((int)unaff_r10 - *piVar1 | *puVar2) + (int)(char)uVar4 + iVar11);
  uVar4 = unaff_r10[2];
  uVar17 = (unaff_r10[1] & 0xf0) * 0x10000;
  uVar3 = (ushort)uVar9;
  if (0xdfffff < uVar17) {
    *(undefined2 *)(unaff_r8 + (uint)uVar4) = (short)(uVar9 >> 0x10);
    ((undefined2 *)(unaff_r8 + (uint)uVar4))[1] = uVar3;
    return;
  }
  if (uVar17 < 0xc00000) {
    uVar17 = CONCAT22(unaff_r10[1],uVar4) & 0xffffff;
    (*(code *)(&DAT_0b00121c)[uVar17 >> 0x10])(uVar17,uVar9 >> 0x10);
    (*(code *)(&DAT_0b00121c)[uVar17 >> 0x10])(uVar17 + 2,uVar9 & 0xffff);
    return;
  }
  bVar14 = (byte)uVar9;
  if ((uVar4 & 0x1c) == 0) {
    FUN_0200ac7c(uVar9 >> 0x10);
    uVar17 = uVar9 & 0xffff;
    if (((DAT_020b4bf5 != '\0') && (DAT_020b4bf5 = '\0', DAT_020b4bf2 != '\0')) &&
       ((DAT_0b00363c & 0x20) != 0)) {
      FUN_02009e3c();
    }
    uVar18 = DAT_0b003630;
    uVar13 = DAT_020b4c00;
    uVar5 = (undefined1)(uVar17 >> 8);
    if (DAT_020b4bf3 != '\0') {
      bVar21 = (DAT_0b003638 & 1) == 0;
      uVar17 = DAT_0b003638 & 0xffff;
      if (bVar21) {
        puVar16 = &DAT_0209cbec + uVar17;
      }
      else {
        puVar16 = (undefined1 *)(DAT_0b003638 & 0xfffe);
      }
      uVar19 = DAT_0b003630 & 0xffff;
      if (!bVar21) {
        (&DAT_0209cbec)[(int)puVar16] = bVar14;
      }
      uVar13 = uVar13 & 0xffff;
      if (bVar21) {
        (&DAT_0209cbec)[uVar17] = uVar5;
        puVar16[1] = bVar14;
      }
      if (!bVar21) {
        (&DAT_0209cbec)[uVar17] = uVar5;
      }
      uVar10 = uVar17 + uVar19 & 0xffff;
      uVar15 = uVar13;
      if (uVar13 != 0) {
        do {
          uVar15 = uVar15 - 1 & 0xffff;
          (&DAT_0209cbec)[uVar10] = bVar14;
          uVar10 = uVar10 + uVar19 & 0xffff;
        } while (uVar15 != 0);
        uVar17 = DAT_0b003638;
        if (uVar13 == 0xffff && (uVar9 & 0xff) == 0) {
          DAT_0b003638 = uVar10;
          FUN_02007420();
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
      }
      DAT_0b003638 = uVar10;
      uVar17 = uVar17 & 0xfffe;
      if (uVar18 == 1) {
        uVar13 = uVar13 >> 1;
        uVar19 = 2;
      }
      do {
        if (uVar17 < DAT_023ddeac) {
LAB_0200adc4:
          if ((uVar17 < DAT_023dcea4) || (DAT_023dcdaa <= uVar17)) {
            if ((uVar17 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar17)) {
              bVar21 = false;
            }
            else {
              (*DAT_023dc69c)(0,uVar17 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar17));
              bVar21 = true;
            }
            if ((DAT_023ddea4 <= uVar17) && (uVar17 < DAT_023dc8b8)) {
              (*DAT_023dc69c)(1,uVar17 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar17));
              bVar21 = true;
            }
            if ((DAT_023ddea8 <= uVar17) && (uVar17 < DAT_023dc8bc)) {
              (*DAT_023dc5a8)(uVar17 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar17));
            }
            if (!bVar21) {
              FUN_020076d0(uVar17,*(undefined2 *)(&DAT_0209cbec + uVar17));
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
          if (iVar11 + DAT_023ddeac <= uVar17) goto LAB_0200adc4;
          DAT_020b4c15 = 1;
        }
        uVar13 = uVar13 - 1 & 0xffff;
        if (uVar13 == 0) {
          DAT_020b4bf3 = 0;
          DAT_020b4bfc = 0;
          DAT_020b4c00 = 0;
          return;
        }
        uVar17 = uVar17 + uVar19 & 0xfffe;
      } while( true );
    }
    uVar13 = DAT_0b00363c & 0xf;
    if (uVar13 == 3) {
      uVar17 = (DAT_0b003638 & 0x7e) >> 1;
      (&DAT_023dc6b0)[uVar17] = uVar3 & 0xeee;
      uVar4 = (ushort)((uVar9 & 0xe0) << 2) | (ushort)((uVar9 & 0xe00) << 3) | 0x8000 |
              (ushort)((uVar9 & 0xe) << 1);
      if ((uVar17 != 0) && (DAT_020b4bec < 0xdf)) {
        bVar14 = (&DAT_0208ebb0)[DAT_020b4bec];
        if (bVar14 == 200) {
          bVar14 = (&DAT_0208ebaf)[DAT_020b4bec];
        }
        (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
        (&DAT_023dc8ca)[uVar17 + (uint)(bVar14 >> 5) * 0x40] = uVar4;
      }
      uVar9 = (uint)DAT_020b4bf7;
      (&DAT_023dc730)[uVar17] = uVar4;
      DAT_0208f354 = 1;
      if (uVar17 == uVar9) {
        _DAT_05000200 = uVar4;
      }
    }
    else if (uVar13 == 5) {
      uVar17 = DAT_0b003638 & 0x7f;
      if (0x4f < uVar17) {
        DAT_0b003638 = uVar17;
        return;
      }
      uVar9 = DAT_0b003638 & 0x7e;
      DAT_0b003638 = uVar17;
      *(ushort *)((int)&DAT_0b00364c + uVar9) = uVar3;
    }
    else if (uVar13 == 1) {
      uVar13 = DAT_0b003638 & 0xfffe;
      if ((DAT_0b003638 & 1) == 0) {
        if (*(ushort *)(&DAT_0209cbec + uVar13) == uVar17) goto LAB_0200ae88;
        *(ushort *)(&DAT_0209cbec + uVar13) = uVar3;
      }
      else {
        (&DAT_0209cbec)[uVar13] = uVar5;
        (&DAT_0209cbed)[uVar13] = bVar14;
        uVar17 = (uVar9 & 0xffff) >> 8 | (uVar9 & 0xff) << 8;
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
        bVar21 = false;
      }
      else {
        (*DAT_023dc69c)(0,uVar13 - DAT_023ddea0,uVar17);
        bVar21 = true;
      }
      if ((DAT_023ddea4 <= uVar13) && (uVar13 < DAT_023dc8b8)) {
        (*DAT_023dc69c)(1,uVar13 - DAT_023ddea4,uVar17);
        bVar21 = true;
      }
      if ((DAT_023ddea8 <= uVar13) && (uVar13 < DAT_023dc8bc)) {
        (*DAT_023dc5a8)(uVar13 - DAT_023ddea8,uVar17);
      }
      if (!bVar21) {
        FUN_020076d0(uVar13,uVar17);
      }
    }
LAB_0200ae88:
    DAT_0b003638 = DAT_0b003638 + DAT_0b003630;
    return;
  }
  if (DAT_020b4bf5 == '\0') {
    uVar13 = uVar9 >> 2 & 0x3c | uVar9 >> 0x1e;
    uVar17 = (uVar9 & 3) << 0xe | (uVar9 & 0x3fffffff) >> 0x10;
    if ((uVar9 & 0xc0000000) == 0x80000000) goto LAB_0200ac58;
    DAT_0b003638 = uVar17;
    DAT_0b00363c = uVar13;
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar9 >> 2 & 0x20) == 0) {
      return;
    }
  }
  else {
LAB_0200ac58:
    FUN_0200aaf8(uVar9 >> 0x10);
    uVar17 = (uVar9 & 0xffff) >> 2;
    if (DAT_020b4bf5 == '\0') {
      uVar13 = uVar9 & 0xff;
      uVar17 = (uVar9 & 0xffff) >> 8 & 0x1f;
      if ((uVar9 & 0xc000) != 0x8000) {
        DAT_020b4bf5 = 1;
        DAT_0b00363c = DAT_0b00363c & 0x3c | (uVar9 & 0xffff) >> 0xe;
        DAT_0b003638 = DAT_0b003638 & 0xc000 | uVar9 & 0x3fff;
        return;
      }
      DAT_0b00363c = 0;
      iVar11 = 1 - (uint)DAT_020b4c06;
      if (1 < DAT_020b4c06) {
        iVar11 = 0;
      }
      if (uVar17 < 0xc) {
        iVar11 = 0;
      }
      (&DAT_020b4c18)[uVar17] = bVar14;
      if (iVar11 == 0) {
        switch(uVar17) {
        case 0:
          DAT_0b003644 = (byte)(uVar13 >> 4) & 1;
          DAT_020b4bf1 = ((byte)(uVar13 >> 1) ^ 1) & 1;
          return;
        case 1:
          DAT_020b4c06 = bVar14 & 4;
          DAT_0b00362f = (byte)(uVar13 >> 6) & 1;
          uVar17 = uVar13 >> 3 & 1;
          DAT_0b00362c = (byte)(uVar13 >> 5) & 1;
          DAT_020b4bf2 = (byte)(uVar13 >> 4) & 1;
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
            iVar11 = 0x800;
          }
          else {
            iVar11 = 0x1000;
          }
          DAT_023dc8bc = iVar11 + DAT_023ddea8;
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
          iVar11 = (uVar9 & 0x7f) * 0x200;
          DAT_0209cbe0 = DAT_023ddeac;
          DAT_023dcdac = &DAT_0209cbec + iVar11;
          DAT_023ddeac = iVar11;
          return;
        case 7:
          DAT_0b003640 = uVar9 & 0x3f;
          DAT_020b4bf7 = (char)(uVar9 & 0x3f);
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
          uVar17 = (uint)DAT_020b4bf4;
          DAT_023ddb05 = (uVar9 & 0x81) != 0;
          if ((uVar17 != (uVar13 >> 3 & 1)) && (DAT_020b4bf4 = 1 - DAT_020b4bf4, 1 < uVar17)) {
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
          DAT_0b003630 = uVar13;
          return;
        case 0x10:
          uVar13 = uVar13 >> 4 & 3;
          uVar9 = uVar9 & 3;
          uVar17 = uVar13 | uVar9 << 4;
          if (uVar17 != (DAT_023dcfa4 & 0xff)) {
            DAT_0208f358 = 1;
          }
          DAT_023dcfa4 = uVar17;
          DAT_023dc8a0 = *(uint *)(&DAT_0208e59c + (uVar13 + uVar9 * 4) * 4);
          DAT_023dc8b8 = DAT_023dc8a0 + DAT_023ddea4;
          DAT_023ddb08 = (ushort)(byte)(&DAT_0208e5dc)[uVar9];
          DAT_023dc8b4 = DAT_023dc8a0 + DAT_023ddea0;
          DAT_023dcea6 = (char)uVar9;
          DAT_023dd372._0_1_ = (char)uVar13;
          return;
        case 0x11:
          uVar17 = (uVar9 & 0x1f) * 2;
          DAT_023ddeb4 = (char)(uVar13 >> 7);
          DAT_023ddb04 = (char)uVar17;
          if (uVar13 >> 7 == 0) {
            DAT_023dcfa8 = (uint)(DAT_023dceac <= uVar17);
          }
          else {
            DAT_023dcfa8 = (uVar9 & 0x1f) * -2 + 1;
            if (1 < uVar17) {
              DAT_023dcfa8 = 0;
            }
          }
          return;
        case 0x12:
          DAT_023dde94 = (char)(uVar13 >> 7);
          DAT_020b4c10 = (uVar9 & 0x1f) << 3;
          DAT_023ddeb0 = (char)(uVar9 & 0x1f);
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
          DAT_0b003634 = DAT_0b003634 & 0x1ffff | (uVar9 & 0x7f) << 0x11;
          DAT_020b4c05 = (byte)(uVar13 >> 6);
        }
        return;
      }
      return;
    }
    DAT_0b00363c = DAT_0b00363c & 3 | uVar17 & 0x3c;
    DAT_0b003638 = DAT_0b003638 & 0x3fff | (uVar9 & 3) << 0xe;
    DAT_020b4bf5 = '\0';
    if (DAT_020b4bf2 == '\0') {
      return;
    }
    if ((uVar17 & 0x20) == 0) {
      return;
    }
  }
  uVar13 = DAT_0b003634;
  uVar17 = DAT_0b003630;
  uVar9 = DAT_020b4bfc & 0xffff;
  if ((DAT_020b4bfc & 0xffff) == 0) {
    uVar9 = 0xffff;
  }
  DAT_020b4c00 = uVar9;
  switch(DAT_020b4c05 & 0xf) {
  case 0:
  case 1:
    uVar9 = DAT_0b003634 & 0xfffffe;
    puVar7 = (ushort *)FUN_02003cc8(uVar9);
    uVar10 = DAT_0b003638;
    uVar15 = DAT_020b4c00;
    uVar19 = DAT_020b4bec;
    uVar12 = DAT_0b00363c & 0xf;
    uVar18 = DAT_020b4c00 & 0xffff;
    if (uVar12 == 3) {
      bVar14 = (&DAT_0208ebb0)[DAT_020b4bec];
      uVar9 = uVar9 << 0xf;
      if (bVar14 == 200) {
        bVar14 = (&DAT_0208ebaf)[DAT_020b4bec];
      }
      uVar15 = (uint)DAT_020b4bf7;
      do {
        uVar12 = (uint)*puVar7;
        uVar10 = (DAT_0b003638 & 0x7e) >> 1;
        uVar4 = (ushort)((uVar12 & 0xe0) << 2) | (ushort)((uVar12 & 0xe00) << 3) | 0x8000 |
                (ushort)((uVar12 & 0xe) << 1);
        uVar9 = uVar9 + 0x8000;
        DAT_0b003638 = DAT_0b003638 + uVar17;
        if ((uVar12 & 0xeee) != (uint)(ushort)(&DAT_023dc6b0)[uVar10]) {
          (&DAT_023dc6b0)[uVar10] = (short)(uVar12 & 0xeee);
          if ((uVar10 != 0) && (uVar19 < 0xdf)) {
            (&DAT_023dc8ca)[uVar10 + (uint)(bVar14 >> 5) * 0x40] = uVar4;
            (&DAT_023ddb0c)[bVar14] = &DAT_023dc8ca + (uint)(bVar14 >> 5) * 0x40;
          }
          DAT_0208f354 = 1;
          (&DAT_023dc730)[uVar10] = uVar4;
          if (uVar10 == uVar15) {
            _DAT_05000200 = uVar4;
          }
        }
        uVar18 = uVar18 - 1 & 0xffff;
        puVar7 = puVar7 + 1;
      } while (uVar18 != 0);
      DAT_020b4bfc = 0;
      DAT_020b4c00 = 0;
      DAT_0b003634 = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar12 == 5) {
      uVar9 = uVar9 << 0xf;
      do {
        uVar15 = DAT_0b003638 & 0x7f;
        uVar19 = DAT_0b003638 & 0x7e;
        DAT_0b003638 = uVar15;
        if (0x4f < uVar15) break;
        uVar18 = uVar18 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        *(ushort *)((int)&DAT_0b00364c + uVar19) = *puVar7;
        puVar7 = puVar7 + 1;
        DAT_0b003638 = uVar17 + uVar15;
      } while (uVar18 != 0);
      DAT_020b4bfc = uVar18;
      DAT_020b4c00 = uVar18;
      DAT_0b003634 = uVar13 & 0xfe0000 | uVar9 >> 0xf;
      return;
    }
    if (uVar12 != 1) {
      DAT_020b4bfc = uVar18;
      DAT_020b4c00 = uVar18;
      DAT_0b003634 = uVar9;
      return;
    }
    uStack_2c = DAT_0b003638 & 0xfffe;
    if ((DAT_0b003638 & 1) == 0) {
      uVar19 = uVar17 & 0xffff;
      uVar9 = uVar9 << 0xf;
      uStack_44 = 0;
      puVar8 = puVar7;
      uVar12 = uStack_2c;
      do {
        uVar4 = *(ushort *)(&DAT_0209cbec + uVar12);
        uVar3 = *puVar8;
        if (uVar3 != uVar4) {
          *(ushort *)(&DAT_0209cbec + uVar12) = uVar3;
          uStack_44 = uStack_44 + 1;
        }
        uVar18 = uVar18 - 1 & 0xffff;
        uVar9 = uVar9 + 0x8000;
        (&DAT_020acbec)[uVar12 >> 1] = uVar3 != uVar4;
        uVar12 = uVar12 + uVar19 & 0xffff;
        puVar8 = puVar8 + 1;
      } while (uVar18 != 0);
      uVar20 = uVar12;
      if (uVar12 <= uVar10) {
        uVar20 = uVar12 + 0x10000;
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
        bVar21 = true;
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
        bVar21 = iVar11 + DAT_023ddeac < uVar12;
        DAT_020b4c15 = 1;
      }
      uVar13 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa < uVar12)) && (bVar21)) {
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
          if ((DAT_023dc8a0 >> 1 <= uVar15) && (DAT_023dc8a4 = 1, !bVar6)) {
            DAT_020b4bfc = 0;
            DAT_020b4c00 = 0;
            DAT_023dc8a4 = 1;
            DAT_0b003634 = uVar9;
            return;
          }
          uVar18 = uStack_2c - DAT_023ddea0;
          bVar21 = (int)uVar18 < 0;
          puVar8 = puVar7;
          if (bVar21) {
            puVar8 = (ushort *)((int)puVar7 + (DAT_023ddea0 - uStack_2c & 0xfffffffe));
            uVar18 = uStack_2c;
          }
          if (bVar21) {
            uVar18 = 0;
          }
          uVar15 = uVar20 - DAT_023ddea0;
          if (DAT_023dc8a0 < uVar20 - DAT_023ddea0) {
            uVar15 = DAT_023dc8a0;
          }
          (*DAT_023dc6ac)(puVar8,uVar18,uVar17,uVar15);
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
            DAT_0b003634 = uVar9;
            return;
          }
          iVar11 = uStack_2c - DAT_023ddea4;
          bVar21 = iVar11 < 0;
          if (bVar21) {
            iVar11 = 0;
            puVar8 = (ushort *)((int)puVar7 + (DAT_023ddea4 - uStack_2c & 0xfffffffe));
          }
          if (!bVar21) {
            puVar8 = puVar7;
          }
          uVar18 = uVar20 - DAT_023ddea4;
          if (DAT_023dc8a0 < uVar20 - DAT_023ddea4) {
            uVar18 = DAT_023dc8a0;
          }
          (*DAT_023dc6a0)(puVar8,iVar11,uVar17,uVar18);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          (*DAT_023dc5b8)(puVar7,uStack_2c - DAT_023ddea8 & 0xffff,uVar17,DAT_020b4c00 & 0xffff);
          uStack_2c = DAT_0b003638 & 0xfffe;
        }
        if (!bVar21) {
          uVar17 = DAT_020b4c00 & 0xffff;
          if (uStack_44 == uVar17) {
            do {
              FUN_020076d0(uStack_2c,*puVar7);
              uStack_2c = uStack_2c + uVar19 & 0xffff;
              uVar17 = uVar17 - 1 & 0xffff;
              puVar7 = puVar7 + 1;
            } while (uVar17 != 0);
            uVar13 = 0;
          }
          else {
            do {
              if ((&DAT_020acbec)[uStack_2c >> 1] != '\0') {
                FUN_020076d0(uStack_2c,*puVar7);
              }
              uStack_2c = uStack_2c + uVar19 & 0xffff;
              uVar17 = uVar17 - 1 & 0xffff;
              uVar13 = 0;
              puVar7 = puVar7 + 1;
            } while (uVar17 != 0);
          }
        }
      }
    }
    else {
      uVar17 = uVar17 & 0xffff;
      puVar8 = puVar7;
      uVar19 = uVar18;
      uVar20 = uStack_2c;
      do {
        uVar4 = *puVar8;
        uVar19 = uVar19 - 1 & 0xffff;
        (&DAT_0209cbec)[uVar20] = (char)(uVar4 >> 8);
        uVar9 = uVar9 + 2 & 0x1ffff | uVar13 & 0xfe0000;
        (&DAT_0209cbed)[uVar20] = (char)uVar4;
        uVar20 = uVar20 + uVar17 & 0xffff;
        puVar8 = puVar8 + 1;
      } while (uVar19 != 0);
      if (uVar10 < DAT_023ddeac) {
LAB_0200aa20:
        bVar21 = true;
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
        bVar21 = iVar11 + DAT_023ddeac < uVar20;
        DAT_020b4c15 = 1;
      }
      uVar13 = 0;
      if (((uVar10 != DAT_023dcea4) || (DAT_023dcdaa <= uVar20)) && (bVar21)) {
        if ((uStack_2c < DAT_023ddea0) || (DAT_023dc8b4 <= uStack_2c)) {
          bVar21 = false;
          uVar13 = uVar18;
        }
        else {
          if (DAT_023dc8a0 >> 1 <= uVar18) {
            FUN_020075d0(0);
          }
          uStack_2c = uStack_2c - DAT_023ddea0;
          puVar8 = puVar7;
          do {
            (*DAT_023dc69c)(0,uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar17;
            uVar18 = uVar18 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar18 != 0);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar13 = 0;
        }
        if ((DAT_023ddea4 <= uStack_2c) && (uStack_2c < DAT_023dc8b8)) {
          uVar13 = DAT_020b4c00 & 0xffff;
          if (DAT_023dc8a0 >> 1 <= uVar13) {
            FUN_020075d0(1);
          }
          uStack_2c = uStack_2c - DAT_023ddea4;
          puVar8 = puVar7;
          do {
            (*DAT_023dc69c)(1,uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar17;
            uVar13 = uVar13 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar13 != 0);
          bVar21 = true;
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar13 = 0;
        }
        if ((DAT_023ddea8 <= uStack_2c) && (uStack_2c < DAT_023dc8bc)) {
          uVar13 = DAT_020b4c00 & 0xffff;
          if (DAT_023ddb05 == '\0') {
            uVar18 = 0x400;
          }
          else {
            uVar18 = 0x800;
          }
          if (uVar18 <= uVar13) {
            FUN_020075d0(2);
          }
          uStack_2c = uStack_2c - DAT_023ddea8;
          puVar8 = puVar7;
          do {
            (*DAT_023dc5a8)(uStack_2c & 0xffff,(uint)*puVar8 << 8 | (uint)(*puVar8 >> 8));
            uStack_2c = (uStack_2c & 0xffff) + uVar17;
            uVar13 = uVar13 - 1 & 0xffff;
            puVar8 = puVar8 + 1;
          } while (uVar13 != 0);
          uStack_2c = DAT_0b003638 & 0xfffe;
          uVar13 = 0;
        }
        if (!bVar21) {
          uVar18 = DAT_020b4c00 & 0xffff;
          do {
            FUN_020076d0(uStack_2c,(uint)*puVar7 << 8 | (uint)(*puVar7 >> 8));
            uStack_2c = uStack_2c + uVar17 & 0xffff;
            uVar18 = uVar18 - 1 & 0xffff;
            uVar13 = 0;
            puVar7 = puVar7 + 1;
          } while (uVar18 != 0);
        }
      }
    }
    DAT_0b003638 = uVar20 & 0xffff;
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
    uVar18 = DAT_0b003630 & 0xffff;
    uVar19 = DAT_0b003638;
    do {
      uVar10 = uVar13 ^ 1;
      uVar13 = uVar13 + 1 & 0xffff;
      (&DAT_0209cbec)[uVar19 ^ 1] = (&DAT_0209cbec)[uVar10];
      uVar19 = uVar19 + uVar18 & 0xffff;
    } while (uVar13 != (uVar15 & 0xffff));
    uVar13 = DAT_0b003638;
    if (uVar17 == 1) {
      uVar9 = uVar9 >> 1;
      uVar18 = 2;
    }
    do {
      DAT_0b003638 = uVar19;
      uVar13 = uVar13 & 0xfffe;
      if (uVar13 < DAT_023ddeac) {
LAB_0200a3f0:
        if ((uVar13 < DAT_023dcea4) || (DAT_023dcdaa <= uVar13)) {
          if ((uVar13 < DAT_023ddea0) || (DAT_023dc8b4 <= uVar13)) {
            bVar21 = false;
          }
          else {
            (*DAT_023dc69c)(0,uVar13 - DAT_023ddea0,*(undefined2 *)(&DAT_0209cbec + uVar13));
            bVar21 = true;
          }
          if ((DAT_023ddea4 <= uVar13) && (uVar13 < DAT_023dc8b8)) {
            (*DAT_023dc69c)(1,uVar13 - DAT_023ddea4,*(undefined2 *)(&DAT_0209cbec + uVar13));
            bVar21 = true;
          }
          if ((DAT_023ddea8 <= uVar13) && (uVar13 < DAT_023dc8bc)) {
            (*DAT_023dc5a8)(uVar13 - DAT_023ddea8,*(undefined2 *)(&DAT_0209cbec + uVar13));
          }
          if (!bVar21) {
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
      uVar13 = uVar13 + uVar18;
      uVar19 = DAT_0b003638;
    } while( true );
  }
  return;
}

