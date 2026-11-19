// rea decompile_all
// name: FUN_0208470c
// address: 0x208470c
// body: available
// range: 0x208470c-0x2084d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0208470c(undefined4 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)FUN_0208274c(param_1,param_3);
    return piVar2;
  }
  FUN_020830f0();
  uVar3 = param_3 + 0xb;
  if (uVar3 < 0x17) {
    uVar8 = 0x10;
    uVar3 = 0;
  }
  else {
    uVar8 = uVar3 & 0xfffffff8;
    uVar3 = uVar3 >> 0x1f;
  }
  if (uVar8 < param_3) {
    uVar3 = 1;
  }
  piVar2 = param_2 + -2;
  if (uVar3 != 0) {
    *param_1 = 0xc;
    return (int *)0x0;
  }
  uVar3 = param_2[-1] & 0xfffffffc;
  if ((int)uVar3 < (int)uVar8) {
    iVar1 = (int)piVar2 + uVar3;
    if (iVar1 == DAT_0208f7b8) {
      uVar9 = *(uint *)(iVar1 + 4) & 0xfffffffc;
      if ((int)(uVar8 + 0x10) <= (int)(uVar3 + uVar9)) {
        DAT_0208f7b8 = (int)piVar2 + uVar8;
        *(uint *)(DAT_0208f7b8 + 4) = (uVar3 + uVar9) - uVar8 | 1;
        param_2[-1] = uVar8 | param_2[-1] & 1U;
        FUN_020830f4(param_1);
        return param_2;
      }
    }
    else if ((*(uint *)((*(uint *)(iVar1 + 4) & 0xfffffffe) + iVar1 + 4) & 1) == 0) {
      uVar9 = *(uint *)(iVar1 + 4) & 0xfffffffc;
      if ((int)uVar8 <= (int)(uVar3 + uVar9)) {
        iVar5 = *(int *)(iVar1 + 8);
        iVar1 = *(int *)(iVar1 + 0xc);
        *(int *)(iVar1 + 8) = iVar5;
        *(int *)(iVar5 + 0xc) = iVar1;
        uVar3 = uVar3 + uVar9;
        goto LAB_020848a4;
      }
    }
    else {
      uVar9 = 0;
      iVar1 = 0;
    }
    if ((param_2[-1] & 1U) == 0) {
      piVar6 = (int *)((int)piVar2 - *piVar2);
      uVar4 = piVar6[1] & 0xfffffffc;
      if (iVar1 != 0) {
        if (iVar1 == DAT_0208f7b8) {
          iVar1 = uVar9 + uVar3 + uVar4;
          if ((int)(uVar8 + 0x10) <= iVar1) {
            uVar3 = uVar3 - 4;
            iVar5 = piVar6[3];
            iVar7 = piVar6[2];
            *(int *)(iVar5 + 8) = iVar7;
            *(int *)(iVar7 + 0xc) = iVar5;
            piVar2 = piVar6 + 2;
            if (uVar3 < 0x25) {
              piVar10 = param_2;
              piVar11 = piVar2;
              if (0x13 < uVar3) {
                piVar6[2] = *param_2;
                piVar6[3] = param_2[1];
                piVar11 = piVar6 + 4;
                piVar10 = param_2 + 2;
                if (0x1b < uVar3) {
                  piVar6[4] = param_2[2];
                  piVar6[5] = param_2[3];
                  piVar11 = piVar6 + 6;
                  piVar10 = param_2 + 4;
                  if (uVar3 == 0x24) {
                    piVar6[6] = param_2[4];
                    piVar11 = piVar6 + 8;
                    piVar10 = param_2 + 6;
                    piVar6[7] = param_2[5];
                  }
                }
              }
              *piVar11 = *piVar10;
              piVar11[1] = piVar10[1];
              piVar11[2] = piVar10[2];
            }
            else {
              FUN_02082f5c(piVar2,param_2,uVar3);
            }
            DAT_0208f7b8 = (int)piVar6 + uVar8;
            *(uint *)(DAT_0208f7b8 + 4) = iVar1 - uVar8 | 1;
            piVar6[1] = uVar8 | piVar6[1] & 1U;
            FUN_020830f4(param_1);
            return piVar2;
          }
        }
        else {
          uVar9 = uVar9 + uVar3 + uVar4;
          if ((int)uVar8 <= (int)uVar9) {
            iVar5 = *(int *)(iVar1 + 8);
            iVar1 = *(int *)(iVar1 + 0xc);
            *(int *)(iVar1 + 8) = iVar5;
            *(int *)(iVar5 + 0xc) = iVar1;
            uVar4 = uVar3 - 4;
            iVar1 = piVar6[3];
            iVar5 = piVar6[2];
            *(int *)(iVar1 + 8) = iVar5;
            *(int *)(iVar5 + 0xc) = iVar1;
            piVar2 = piVar6 + 2;
            uVar3 = uVar9;
            if (uVar4 < 0x25) {
              piVar10 = param_2;
              piVar11 = piVar2;
              if (0x13 < uVar4) {
                piVar6[2] = *param_2;
                piVar6[3] = param_2[1];
                piVar11 = piVar6 + 4;
                piVar10 = param_2 + 2;
                if (0x1b < uVar4) {
                  piVar6[4] = param_2[2];
                  piVar6[5] = param_2[3];
                  piVar11 = piVar6 + 6;
                  piVar10 = param_2 + 4;
                  if (uVar4 == 0x24) {
                    piVar6[6] = param_2[4];
                    piVar11 = piVar6 + 8;
                    piVar10 = param_2 + 6;
                    piVar6[7] = param_2[5];
                  }
                }
              }
              *piVar11 = *piVar10;
              piVar11[1] = piVar10[1];
              piVar11[2] = piVar10[2];
              param_2 = piVar2;
              piVar2 = piVar6;
            }
            else {
              FUN_02082f5c(piVar2,param_2,uVar4);
              param_2 = piVar2;
              piVar2 = piVar6;
            }
            goto LAB_020848a4;
          }
        }
      }
      uVar4 = uVar3 + uVar4;
      if ((int)uVar8 <= (int)uVar4) {
        uVar9 = uVar3 - 4;
        iVar1 = piVar6[3];
        iVar5 = piVar6[2];
        *(int *)(iVar1 + 8) = iVar5;
        *(int *)(iVar5 + 0xc) = iVar1;
        piVar2 = piVar6 + 2;
        uVar3 = uVar4;
        if (uVar9 < 0x25) {
          piVar10 = param_2;
          piVar11 = piVar2;
          if (0x13 < uVar9) {
            piVar6[2] = *param_2;
            piVar6[3] = param_2[1];
            piVar11 = piVar6 + 4;
            piVar10 = param_2 + 2;
            if (0x1b < uVar9) {
              piVar6[4] = param_2[2];
              piVar6[5] = param_2[3];
              piVar11 = piVar6 + 6;
              piVar10 = param_2 + 4;
              if (uVar9 == 0x24) {
                piVar6[6] = param_2[4];
                piVar11 = piVar6 + 8;
                piVar10 = param_2 + 6;
                piVar6[7] = param_2[5];
              }
            }
          }
          *piVar11 = *piVar10;
          piVar11[1] = piVar10[1];
          piVar11[2] = piVar10[2];
          param_2 = piVar2;
          piVar2 = piVar6;
        }
        else {
          FUN_02082f5c(piVar2,param_2,uVar9);
          param_2 = piVar2;
          piVar2 = piVar6;
        }
        goto LAB_020848a4;
      }
    }
    piVar6 = (int *)FUN_0208274c(param_1,param_3);
    if (piVar6 != (int *)0x0) {
      if (piVar6 + -2 == (int *)((int)piVar2 + (param_2[-1] & 0xfffffffeU))) {
        uVar3 = uVar3 + (piVar6[-1] & 0xfffffffcU);
        goto LAB_020848a4;
      }
      uVar3 = uVar3 - 4;
      if (uVar3 < 0x25) {
        piVar2 = param_2;
        piVar10 = piVar6;
        if (0x13 < uVar3) {
          *piVar6 = *param_2;
          piVar6[1] = param_2[1];
          piVar10 = piVar6 + 2;
          piVar2 = param_2 + 2;
          if (0x1b < uVar3) {
            piVar6[2] = param_2[2];
            piVar6[3] = param_2[3];
            piVar2 = param_2 + 4;
            piVar10 = piVar6 + 4;
            if (uVar3 == 0x24) {
              piVar6[4] = param_2[4];
              piVar2 = param_2 + 6;
              piVar6[5] = param_2[5];
              piVar10 = piVar6 + 6;
            }
          }
        }
        *piVar10 = *piVar2;
        piVar10[1] = piVar2[1];
        piVar10[2] = piVar2[2];
      }
      else {
        FUN_02082f5c(piVar6,param_2,uVar3);
      }
      FUN_020818d4(param_1,param_2);
    }
    FUN_020830f4(param_1);
  }
  else {
LAB_020848a4:
    uVar9 = uVar3 - uVar8;
    if (uVar9 < 0x10) {
      piVar2[1] = uVar3 | piVar2[1] & 1U;
      *(uint *)((int)piVar2 + uVar3 + 4) = *(uint *)((int)piVar2 + uVar3 + 4) | 1;
    }
    else {
      piVar2[1] = uVar8 | piVar2[1] & 1U;
      *(uint *)((int)piVar2 + uVar8 + 4) = uVar9 | 1;
      *(uint *)((int)piVar2 + uVar9 + uVar8 + 4) = *(uint *)((int)piVar2 + uVar9 + uVar8 + 4) | 1;
      FUN_020818d4(param_1,(int)piVar2 + uVar8 + 8);
    }
    FUN_020830f4(param_1);
    piVar6 = param_2;
  }
  return piVar6;
}

