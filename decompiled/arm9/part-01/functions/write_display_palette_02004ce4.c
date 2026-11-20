// Analysis annotation
// Role — write display palette
// Basis — pseudocode clue
// Pseudocode writes 0x05000200 (display palette).

// rea decompile_all
// name: FUN_02004ce4
// address: 0x2004ce4
// body: available
// range: 0x2004ce4-0x2004d13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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

