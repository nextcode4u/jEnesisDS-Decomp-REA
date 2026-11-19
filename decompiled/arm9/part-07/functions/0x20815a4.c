// rea decompile_all
// name: FUN_020815a4
// address: 0x20815a4
// body: available
// range: 0x20815a4-0x2081783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_020815a4(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int local_34;
  
  uVar2 = param_3 * param_4;
  if (uVar2 == 0) {
    local_34 = 0;
  }
  else {
    if ((param_1 != 0) && (*(int *)(param_1 + 0x38) == 0)) {
      FUN_02081258();
    }
    uVar8 = param_5[1];
    if ((int)uVar8 < 0) {
      uVar8 = 0;
      param_5[1] = 0;
    }
    uVar4 = uVar2;
    local_34 = param_4;
    if ((*(ushort *)(param_5 + 3) & 2) == 0) {
      while (uVar8 < uVar4) {
        FUN_02082ec0(param_2,*param_5,uVar8);
        *param_5 = *param_5 + uVar8;
        iVar9 = FUN_02083320(param_1,param_5);
        param_2 = param_2 + uVar8;
        uVar4 = uVar4 - uVar8;
        if (iVar9 != 0) {
          iVar9 = FUN_02080380(uVar2 - uVar4,param_3);
          return iVar9;
        }
        uVar8 = param_5[1];
      }
      FUN_02082ec0(param_2,*param_5,uVar4);
      *param_5 = *param_5 + uVar4;
      param_5[1] = param_5[1] - uVar4;
    }
    else {
      if (uVar8 <= uVar2) {
        uVar4 = uVar8;
      }
      FUN_02082ec0(param_2,*param_5,uVar4);
      *param_5 = *param_5 + uVar4;
      param_5[1] = param_5[1] - uVar4;
      iVar9 = uVar2 - uVar4;
      if ((int *)param_5[0xd] != (int *)0x0 && uVar2 != uVar4) {
        if ((int *)param_5[0xd] != param_5 + 0x11) {
          FUN_020818d4(&DAT_0208f3a0);
        }
        param_5[0xd] = 0;
      }
      if (uVar2 - uVar4 != 0) {
        param_2 = param_2 + uVar4;
        do {
          iVar6 = param_5[5];
          iVar7 = *param_5;
          iVar5 = param_5[6];
          param_5[5] = param_2;
          *param_5 = param_2;
          param_5[6] = iVar9;
          iVar1 = FUN_02083320(param_1,param_5);
          iVar3 = param_5[1];
          param_5[5] = iVar6;
          param_5[6] = iVar5;
          *param_5 = iVar7;
          param_5[1] = 0;
          param_2 = param_2 + iVar3;
          iVar9 = iVar9 - iVar3;
          if (iVar1 != 0) {
            iVar9 = FUN_02080380(uVar2 - iVar9,param_3);
            return iVar9;
          }
        } while (iVar9 != 0);
      }
    }
  }
  return local_34;
}

