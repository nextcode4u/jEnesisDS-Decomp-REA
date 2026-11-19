// rea decompile_all
// name: FUN_02081ff0
// address: 0x2081ff0
// body: available
// range: 0x2081ff0-0x2082017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02081bb4) */

undefined4 FUN_02081ff0(int *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *pcVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uStack_74;
  undefined1 auStack_6c [8];
  uint uStack_64;
  int iStack_54;
  
  FUN_02081258();
  if ((*(ushort *)(param_1 + 3) & 0x108) == 0x108) {
    FUN_02081034(param_1);
  }
  pcVar6 = (code *)param_1[0xb];
  if (pcVar6 == (code *)0x0) {
    DAT_0208f3a0 = 0x1d;
    return 0xffffffff;
  }
  if (param_3 == 1) {
    FUN_02081034(param_1);
    uVar7 = *(ushort *)(param_1 + 3);
    if ((uVar7 & 0x1000) == 0) {
      iVar3 = (*pcVar6)(param_1[8],uVar7 & 0x1000,1);
      if (iVar3 == -1) {
        return 0xffffffff;
      }
      uVar7 = *(ushort *)(param_1 + 3);
    }
    else {
      iVar3 = param_1[0x15];
    }
    if ((uVar7 & 4) == 0) {
      if (((uVar7 & 8) == 0) || (*param_1 == 0)) goto LAB_02081e38;
      iVar9 = param_1[5];
      iVar3 = iVar3 + (*param_1 - iVar9);
    }
    else {
      iVar3 = iVar3 - param_1[1];
      if (param_1[0xd] == 0) {
LAB_02081e38:
        iVar9 = param_1[5];
      }
      else {
        iVar9 = param_1[5];
        iVar3 = iVar3 - param_1[0x10];
      }
    }
    param_3 = 0;
    uStack_74 = param_2 + iVar3;
    bVar1 = true;
  }
  else {
    if ((param_3 != 2) && (param_3 != 0)) {
      DAT_0208f3a0 = 0x16;
      return 0xffffffff;
    }
    iVar3 = 0;
    iVar9 = param_1[5];
    bVar1 = false;
    uStack_74 = param_2;
  }
  if (iVar9 == 0) {
    FUN_020823f8(param_1);
  }
  uVar7 = *(ushort *)(param_1 + 3);
  if ((uVar7 & 0x81a) != 0) goto LAB_02081c58;
  if ((uVar7 & 0x400) == 0) {
    if ((pcVar6 == (code *)&LAB_02083538) && (-1 < param_1[4])) {
      iVar9 = FUN_0208201c(&DAT_0208f3a0,param_1[4],auStack_6c);
      if ((iVar9 == 0) && ((uStack_64 & 0xf000) == 0x8000)) {
        param_1[0x14] = 0x400;
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x400;
        goto LAB_02081cb4;
      }
      uVar7 = *(ushort *)(param_1 + 3);
    }
    *(ushort *)(param_1 + 3) = uVar7 | 0x800;
    goto LAB_02081c58;
  }
LAB_02081cb4:
  uVar4 = uStack_74;
  if (param_3 != 0) {
    iVar9 = FUN_0208201c(&DAT_0208f3a0,param_1[4],auStack_6c);
    if (iVar9 != 0) goto LAB_02081c58;
    uVar4 = uStack_74 + iStack_54;
  }
  if (bVar1) {
    piVar5 = (int *)param_1[0xd];
    if (piVar5 != (int *)0x0) {
      uVar8 = (uint)*(ushort *)(param_1 + 3);
      iVar9 = param_1[1];
      iVar2 = param_1[0x10];
      goto LAB_02081cf4;
    }
    uVar8 = (uint)*(ushort *)(param_1 + 3);
    iVar9 = param_1[1];
LAB_02081f24:
    iVar10 = param_1[5];
    iVar2 = (*param_1 - iVar10) + iVar9;
    iVar3 = iVar3 - (*param_1 - iVar10);
  }
  else {
    uVar7 = *(ushort *)(param_1 + 3);
    uVar8 = (uint)uVar7;
    if ((uVar7 & 0x1000) == 0) {
      uVar11 = (*pcVar6)(param_1[8],uVar8 & 0x1000,1);
      if ((int)uVar11 == -1) goto LAB_02081c58;
      uVar8 = (uint)*(ushort *)(param_1 + 3);
    }
    else {
      uVar11 = (ulonglong)CONCAT24(uVar7,param_1[0x15]) & 0x1000ffffffff;
    }
    iVar2 = (int)(uVar11 >> 0x20);
    piVar5 = (int *)param_1[0xd];
    iVar9 = param_1[1];
    if (piVar5 != (int *)0x0) {
      iVar2 = param_1[0x10];
    }
    iVar3 = (int)uVar11 - iVar9;
    if (piVar5 == (int *)0x0) goto LAB_02081f24;
    iVar3 = iVar3 - iVar2;
LAB_02081cf4:
    iVar10 = param_1[5];
    iVar2 = (param_1[0xf] - iVar10) + iVar2;
    iVar3 = (iVar3 + iVar9) - (param_1[0xf] - iVar10);
  }
  uVar7 = (ushort)uVar8;
  if ((int)uVar4 < iVar3) {
    uVar8 = 0;
  }
  else {
    uVar8 = (uVar8 >> 0xd ^ 1) & 1;
  }
  if ((uVar8 != 0) && (uVar4 < (uint)(iVar2 + iVar3))) {
    *param_1 = iVar10 + (uVar4 - iVar3);
    param_1[1] = iVar2 - (uVar4 - iVar3);
    if (piVar5 != (int *)0x0) {
      if (piVar5 != param_1 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0,piVar5);
        uVar7 = *(ushort *)(param_1 + 3);
      }
      param_1[0xd] = 0;
    }
    *(ushort *)(param_1 + 3) = uVar7 & 0xffdf;
    return 0;
  }
  iVar9 = param_1[0x14];
  iVar3 = (*pcVar6)(param_1[8],uVar4 & -iVar9,0);
  if (iVar3 != -1) {
    *param_1 = param_1[5];
    param_1[1] = 0;
    if ((int *)param_1[0xd] != (int *)0x0) {
      if ((int *)param_1[0xd] != param_1 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0);
      }
      param_1[0xd] = 0;
    }
    uVar4 = uVar4 - (uVar4 & -iVar9);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xffdf;
    if (uVar4 == 0) {
      return 0;
    }
    iVar3 = FUN_02083320(&DAT_0208f3a0,param_1);
    if ((iVar3 == 0) && (uVar4 <= (uint)param_1[1])) {
      *param_1 = *param_1 + uVar4;
      param_1[1] = param_1[1] - uVar4;
      return 0;
    }
  }
LAB_02081c58:
  iVar3 = FUN_02081034(param_1);
  if ((iVar3 == 0) && (iVar3 = (*pcVar6)(param_1[8],uStack_74,param_3), iVar3 != -1)) {
    if ((int *)param_1[0xd] != (int *)0x0) {
      if ((int *)param_1[0xd] != param_1 + 0x11) {
        FUN_020818d4(&DAT_0208f3a0);
      }
      param_1[0xd] = 0;
    }
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xf7df;
    *param_1 = param_1[5];
    param_1[1] = 0;
    return 0;
  }
  return 0xffffffff;
}

