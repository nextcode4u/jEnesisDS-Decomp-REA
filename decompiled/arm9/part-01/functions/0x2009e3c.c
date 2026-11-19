// rea decompile_all
// name: FUN_02009e3c
// address: 0x2009e3c
// body: available
// range: 0x2009e3c-0x2009e77 inclusive
// range: 0x2009e88-0x200aa67 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


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

