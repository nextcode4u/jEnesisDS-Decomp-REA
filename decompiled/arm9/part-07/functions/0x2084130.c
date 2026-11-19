// rea decompile_all
// name: FUN_02084130
// address: 0x2084130
// body: available
// range: 0x2084130-0x208456f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02084130(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  if (param_3[2] != 0) {
    uVar2 = (ushort)param_2[3];
    if (((uVar2 & 8) == 0) || (param_2[5] == 0)) {
      iVar7 = FUN_02084d28(param_2);
      if (iVar7 != 0) {
        *(ushort *)(param_2 + 3) = (ushort)param_2[3] | 0x40;
        *param_1 = 9;
        return 0xffffffff;
      }
      uVar2 = (ushort)param_2[3];
    }
    uVar4 = (uint)uVar2;
    bVar14 = (uVar2 & 2) != 0;
    if (bVar14) {
      param_1 = (undefined4 *)0x0;
    }
    puVar12 = (uint *)*param_3;
    puVar10 = param_1;
    if (bVar14) {
      do {
        while (param_1 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)*puVar12;
          puVar1 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          param_1 = (undefined4 *)*puVar1;
        }
        iVar7 = (*(code *)param_2[10])(param_2[8],puVar10);
        param_1 = (undefined4 *)((int)param_1 - iVar7);
        if (iVar7 < 1) {
LAB_020844a8:
          *(ushort *)(param_2 + 3) = (ushort)param_2[3] | 0x40;
          return 0xffffffff;
        }
        iVar6 = param_3[2];
        param_3[2] = iVar6 - iVar7;
        puVar10 = (undefined4 *)((int)puVar10 + iVar7);
      } while (iVar6 - iVar7 != 0);
    }
    else {
      uVar5 = uVar4 & 1;
      uVar11 = uVar5;
      if ((uVar2 & 1) != 0) {
        uVar11 = 0;
        uVar5 = uVar11;
        uVar4 = uVar11;
        do {
          while (bVar14 = false, uVar11 == 0) {
            uVar5 = *puVar12;
            puVar1 = puVar12 + 1;
            puVar12 = puVar12 + 2;
            uVar11 = *puVar1;
          }
          do {
            if (!bVar14) {
              iVar7 = FUN_020845c0(uVar5,10,uVar11);
              uVar4 = uVar11;
              if (iVar7 != 0) {
                uVar4 = iVar7 - uVar5;
              }
              bVar14 = true;
              uVar4 = uVar4 + 1;
            }
            uVar13 = param_2[6];
            uVar3 = *param_2;
            uVar9 = uVar11;
            if (uVar4 <= uVar11) {
              uVar9 = uVar4;
            }
            uVar8 = uVar13 + param_2[2];
            if ((int)uVar8 < (int)uVar9 && param_2[5] < uVar3) {
              FUN_02082f5c(uVar3,uVar5,uVar8);
              *param_2 = *param_2 + uVar8;
              iVar7 = FUN_02081034(param_2);
              if (iVar7 != 0) goto LAB_020844a8;
            }
            else if ((int)uVar9 < (int)uVar13) {
              FUN_02082f5c(uVar3,uVar5,uVar9);
              param_2[2] = param_2[2] - uVar9;
              *param_2 = *param_2 + uVar9;
              uVar8 = uVar9;
            }
            else {
              uVar8 = (*(code *)param_2[10])(param_2[8],uVar5,uVar13);
              if ((int)uVar8 < 1) goto LAB_020844a8;
            }
            uVar4 = uVar4 - uVar8;
            if (uVar4 == 0) {
              iVar7 = FUN_02081034(param_2);
              if (iVar7 != 0) goto LAB_020844a8;
              bVar14 = false;
            }
            iVar7 = param_3[2];
            param_3[2] = iVar7 - uVar8;
            if (iVar7 - uVar8 == 0) {
              return 0;
            }
            uVar11 = uVar11 - uVar8;
            uVar5 = uVar5 + uVar8;
          } while (uVar11 != 0);
          uVar5 = *puVar12;
          uVar11 = puVar12[1];
          puVar12 = puVar12 + 2;
        } while( true );
      }
      while( true ) {
        while (uVar5 == 0) {
          uVar11 = *puVar12;
          puVar1 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          uVar5 = *puVar1;
        }
        uVar9 = param_2[2];
        if ((uVar4 & 0x200) == 0) {
          uVar4 = *param_2;
          bVar15 = param_2[5] <= uVar4;
          bVar14 = uVar4 == param_2[5];
          if (bVar15 && !bVar14) {
            bVar15 = uVar9 <= uVar5;
            bVar14 = uVar5 == uVar9;
          }
          if (bVar15 && !bVar14) {
            FUN_02082f5c(uVar4,uVar11,uVar9);
            *param_2 = *param_2 + uVar9;
            iVar7 = FUN_02081034(param_2);
            if (iVar7 != 0) goto LAB_020844a8;
          }
          else if (uVar5 < param_2[6]) {
            FUN_02082f5c(uVar4,uVar11,uVar5);
            param_2[2] = param_2[2] - uVar5;
            *param_2 = *param_2 + uVar5;
            uVar9 = uVar5;
          }
          else {
            uVar9 = (*(code *)param_2[10])(param_2[8],uVar11);
            if ((int)uVar9 < 1) goto LAB_020844a8;
          }
        }
        else {
          uVar3 = uVar5;
          if ((uVar9 <= uVar5) && (uVar3 = uVar9, (uVar4 & 0x80) != 0)) {
            iVar7 = *param_2 - param_2[5];
            uVar4 = (int)(param_2[6] * 3) / 2;
            uVar9 = uVar5 + iVar7 + 1;
            if (uVar4 < uVar9) {
              uVar4 = uVar9;
            }
            uVar9 = FUN_0208470c(&DAT_0208f3a0,param_2[5],uVar4);
            if (uVar9 == 0) {
              FUN_020818d4(&DAT_0208f3a0,param_2[5]);
              goto LAB_020844a8;
            }
            *param_2 = uVar9 + iVar7;
            param_2[2] = uVar4 - iVar7;
            param_2[5] = uVar9;
            param_2[6] = uVar4;
            uVar3 = uVar5;
          }
          FUN_02082f5c(*param_2,uVar11,uVar3);
          param_2[2] = param_2[2] - uVar3;
          *param_2 = *param_2 + uVar3;
          uVar9 = uVar5;
        }
        iVar7 = param_3[2];
        param_3[2] = iVar7 - uVar9;
        if (iVar7 - uVar9 == 0) break;
        uVar5 = uVar5 - uVar9;
        uVar4 = (uint)(ushort)param_2[3];
        uVar11 = uVar11 + uVar9;
      }
    }
  }
  return 0;
}

