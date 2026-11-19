// rea decompile_all
// name: FUN_0207dfc8
// address: 0x207dfc8
// body: available
// range: 0x207dfc8-0x207e2c3 inclusive
// range: 0x207e2d0-0x207e461 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0207dfc8(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint local_22c;
  undefined1 auStack_228 [516];
  
  if (((param_2 == (uint *)0x0) || (*(char *)((int)param_2 + 0x27) == '\0')) ||
     (*(char *)((int)param_2 + 0x25) == '\0')) {
    *param_1 = 9;
    iVar8 = -1;
  }
  else {
    piVar11 = (int *)param_2[10];
    iVar8 = piVar11[1];
    if (*(char *)((int)param_2 + 0x26) == '\0') {
      uVar2 = *param_2;
      uVar6 = param_2[2];
      if (uVar2 < param_2[2]) {
        thunk_FUN_02083058(auStack_228,0,0x200);
        uVar12 = *param_2 & 0x1ff;
        thunk_FUN_0208047c(*param_2,piVar11[10]);
        uVar6 = extraout_r1 >> 9;
        uVar2 = FUN_0207e558(piVar11,param_2[1]);
        uVar10 = param_2[2] - *param_2;
        uVar4 = uVar10 + uVar12;
        if (uVar4 < 0x200) {
          if (uVar2 < 2) {
            iVar7 = piVar11[4];
          }
          else {
            iVar7 = piVar11[9] * (uVar2 - 2) + piVar11[7];
          }
          FUN_0207d020(iVar8,auStack_228,iVar7 + uVar6,uVar12,uVar10);
          uVar5 = uVar2;
          uVar12 = uVar4;
        }
        else {
          if (uVar12 != 0) {
            if (uVar2 < 2) {
              iVar7 = piVar11[4];
            }
            else {
              iVar7 = piVar11[9] * (uVar2 - 2) + piVar11[7];
            }
            FUN_0207d020(iVar8,auStack_228,iVar7 + uVar6,uVar12,0x200 - uVar12);
            uVar10 = uVar4 - 0x200;
            uVar12 = 0;
            uVar6 = uVar6 + 1;
          }
          for (; 0x1ff < uVar10; uVar10 = uVar10 - 0x200) {
            if (uVar6 < (uint)piVar11[9]) {
              uVar4 = uVar6 + 1;
            }
            else {
              uVar5 = FUN_0207e470(piVar11,uVar2);
              if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
                 (uVar5 = FUN_0207e71c(piVar11,uVar2), uVar5 == 0)) {
                *param_1 = 0x1c;
                return 0;
              }
              uVar6 = 0;
              uVar4 = 1;
              uVar2 = uVar5;
            }
            if (uVar2 < 2) {
              iVar7 = piVar11[4];
            }
            else {
              iVar7 = piVar11[9] * (uVar2 - 2) + piVar11[7];
            }
            (**(code **)(*piVar11 + 0x14))(iVar7 + uVar6,1,auStack_228);
            uVar6 = uVar4;
          }
          uVar5 = uVar2;
          if ((uint)piVar11[9] <= uVar6) {
            uVar5 = FUN_0207e470(piVar11,uVar2);
            if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
               (uVar5 = FUN_0207e71c(piVar11,uVar2), uVar5 == 0)) {
              *param_1 = 0x1c;
              return 0;
            }
            uVar6 = 0;
          }
          if (uVar10 != 0) {
            if (uVar5 < 2) {
              iVar7 = piVar11[4];
            }
            else {
              iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
            }
            FUN_0207d020(iVar8,auStack_228,iVar7 + uVar6,0,uVar10);
            uVar12 = uVar10;
          }
        }
        param_2[5] = uVar12;
        uVar2 = param_2[2];
        param_2[3] = uVar5;
        param_2[4] = uVar6;
        *param_2 = uVar2;
        uVar6 = uVar2;
      }
      local_22c = param_2[5];
      uVar12 = param_2[3];
      uVar4 = param_2[4];
      if (uVar2 < param_4 + uVar6) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      local_22c = param_2[8];
      uVar12 = param_2[6];
      uVar4 = param_2[7];
      bVar1 = true;
    }
    if (uVar4 < (uint)piVar11[9]) {
      uVar6 = 1;
    }
    else {
      uVar2 = FUN_0207e470(piVar11,uVar12);
      if (((uVar2 == 0xfffffff) || (uVar2 == 0)) &&
         (uVar2 = FUN_0207e71c(piVar11,uVar12), uVar2 == 0)) {
        *param_1 = 0x1c;
        uVar4 = 0;
        uVar6 = uVar4;
      }
      else {
        uVar6 = 1;
        uVar4 = 0;
        uVar12 = uVar2;
      }
    }
    uVar2 = 0x200 - local_22c;
    if (param_4 < 0x200 - local_22c) {
      uVar2 = param_4;
    }
    uVar10 = param_4;
    if (((int)uVar2 < 0x200) && (uVar6 != 0)) {
      if (uVar12 < 2) {
        iVar7 = piVar11[4];
      }
      else {
        iVar7 = piVar11[9] * (uVar12 - 2) + piVar11[7];
      }
      FUN_0207d020(iVar8,param_3,iVar7 + uVar4,local_22c,uVar2);
      local_22c = local_22c + uVar2;
      param_3 = param_3 + uVar2;
      uVar10 = param_4 - uVar2;
      if (0x1ff < (int)local_22c) {
        uVar4 = uVar4 + 1;
        local_22c = 0;
      }
    }
    uVar2 = piVar11[9];
    uVar5 = uVar2 - uVar4;
    if (uVar10 <= uVar5 * 0x200) {
      uVar5 = uVar10 >> 9;
    }
    if ((0 < (int)uVar5) && (uVar6 != 0)) {
      if (uVar12 < 2) {
        iVar7 = piVar11[4];
      }
      else {
        iVar7 = uVar2 * (uVar12 - 2) + piVar11[7];
      }
      (**(code **)(*piVar11 + 0x14))(iVar7 + uVar4,uVar5,param_3);
      uVar2 = piVar11[9];
      param_3 = param_3 + uVar5 * 0x200;
      uVar10 = uVar10 + uVar5 * -0x200;
      uVar4 = uVar4 + uVar5;
    }
    if (((uVar4 < uVar2) || (uVar6 == 0)) || (uVar10 == 0)) {
      uVar2 = piVar11[10];
    }
    else {
      uVar5 = FUN_0207e470(piVar11,uVar12);
      if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
         (uVar5 = FUN_0207e71c(piVar11,uVar12), uVar5 == 0)) {
        *param_1 = 0x1c;
        uVar6 = 0;
        uVar2 = piVar11[10];
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar2 = piVar11[10];
        uVar12 = uVar5;
      }
    }
    uVar5 = uVar12;
    if (uVar2 <= uVar10) {
      do {
        uVar5 = uVar12;
        if (uVar6 == 0) break;
        if (uVar12 < 2) {
          iVar7 = piVar11[4];
          iVar3 = piVar11[9];
        }
        else {
          iVar3 = piVar11[9];
          iVar7 = (uVar12 - 2) * iVar3 + piVar11[7];
        }
        (**(code **)(*piVar11 + 0x14))(iVar7,iVar3,param_3);
        uVar2 = piVar11[10];
        uVar10 = uVar10 - uVar2;
        if (uVar10 == 0) {
          uVar4 = piVar11[9];
          uVar9 = uVar2;
        }
        else {
          uVar5 = FUN_0207e470(piVar11,uVar12);
          if (((uVar5 == 0xfffffff) || (uVar5 == 0)) &&
             (uVar5 = FUN_0207e71c(piVar11,uVar12), uVar5 == 0)) {
            *param_1 = 0x1c;
            uVar6 = 0;
            uVar9 = piVar11[10];
            uVar5 = uVar12;
          }
          else {
            uVar9 = piVar11[10];
          }
        }
        param_3 = param_3 + uVar2;
        uVar12 = uVar5;
      } while (uVar9 <= uVar10);
    }
    uVar2 = uVar10 >> 9;
    if ((uVar2 != 0) && (uVar6 != 0)) {
      if (uVar5 < 2) {
        iVar7 = piVar11[4];
      }
      else {
        iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
      }
      (**(code **)(*piVar11 + 0x14))(iVar7,uVar2,param_3);
      param_3 = param_3 + uVar2 * 0x200;
      uVar10 = uVar10 + uVar2 * -0x200;
      uVar4 = uVar4 + uVar2;
    }
    if ((uVar10 != 0) && (uVar6 != 0)) {
      if (bVar1) {
        if (uVar5 < 2) {
          iVar7 = piVar11[4];
        }
        else {
          iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
        }
        FUN_0207cfbc(iVar8,param_3,iVar7 + uVar4,0,uVar10);
      }
      else {
        if (uVar5 < 2) {
          iVar7 = piVar11[4];
        }
        else {
          iVar7 = piVar11[9] * (uVar5 - 2) + piVar11[7];
        }
        FUN_0207d020(iVar8,param_3,iVar7 + uVar4,0,uVar10);
      }
      local_22c = local_22c + uVar10;
      uVar10 = 0;
    }
    iVar8 = param_4 - uVar10;
    if (*(char *)((int)param_2 + 0x26) == '\0') {
      param_2[5] = local_22c;
      param_2[3] = uVar5;
      param_2[4] = uVar4;
      uVar6 = param_2[2] + iVar8;
      param_2[2] = uVar6;
      if (*param_2 < uVar6) {
        *param_2 = uVar6;
      }
    }
    else {
      param_2[7] = uVar4;
      param_2[8] = local_22c;
      param_2[6] = uVar5;
      *param_2 = *param_2 + iVar8;
    }
  }
  return iVar8;
}

