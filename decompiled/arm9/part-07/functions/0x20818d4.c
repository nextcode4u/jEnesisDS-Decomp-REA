// rea decompile_all
// name: FUN_020818d4
// address: 0x20818d4
// body: available
// range: 0x20818d4-0x2081b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020818d4(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  
  if (param_2 == 0) {
    return;
  }
  FUN_020830f0();
  iVar11 = param_2 + -8;
  uVar2 = *(uint *)(param_2 + -4);
  uVar4 = uVar2 & 0xfffffffe;
  iVar9 = iVar11 + uVar4;
  uVar8 = *(uint *)(iVar9 + 4) & 0xfffffffc;
  if (iVar9 == DAT_0208f7b8) {
    uVar4 = uVar4 + uVar8;
    if ((uVar2 & 1) == 0) {
      iVar9 = *(int *)(param_2 + -8);
      iVar11 = iVar11 - iVar9;
      iVar6 = *(int *)(iVar11 + 0xc);
      iVar7 = *(int *)(iVar11 + 8);
      *(int *)(iVar6 + 8) = iVar7;
      *(int *)(iVar7 + 0xc) = iVar6;
      uVar4 = uVar4 + iVar9;
    }
    DAT_0208f7b8 = iVar11;
    *(uint *)(iVar11 + 4) = uVar4 | 1;
    if (0x1ffff < uVar4) {
      FUN_020817cc(param_1,DAT_020b4ca8);
    }
    goto LAB_0208194c;
  }
  *(uint *)(iVar9 + 4) = uVar8;
  if ((uVar2 & 1) == 0) {
    iVar6 = *(int *)(param_2 + -8);
    iVar11 = iVar11 - iVar6;
    puVar5 = *(undefined4 **)(iVar11 + 8);
    if (puVar5 != &DAT_0208f7b8) {
      iVar7 = *(int *)(iVar11 + 0xc);
      *(undefined4 **)(iVar7 + 8) = puVar5;
      puVar5[3] = iVar7;
    }
    uVar4 = uVar4 + iVar6;
    bVar1 = puVar5 == &DAT_0208f7b8;
    if ((*(uint *)(iVar9 + uVar8 + 4) & 1) != 0) goto LAB_02081938;
LAB_02081960:
    uVar4 = uVar4 + uVar8;
    if (bVar1) {
      puVar5 = *(undefined4 **)(iVar9 + 8);
    }
    else {
      puVar5 = *(undefined4 **)(iVar9 + 8);
      if (puVar5 == &DAT_0208f7b8) {
        DAT_0208f7c0 = iVar11;
        DAT_0208f7c4 = iVar11;
        *(uint *)(uVar4 + iVar11) = uVar4;
        *(uint *)(iVar11 + 4) = uVar4 | 1;
        *(int **)(iVar11 + 8) = &DAT_0208f7b8;
        *(int **)(iVar11 + 0xc) = &DAT_0208f7b8;
        goto LAB_0208194c;
      }
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    *(undefined4 **)(iVar9 + 8) = puVar5;
    puVar5[3] = iVar9;
    *(uint *)(iVar11 + 4) = uVar4 | 1;
    *(uint *)(uVar4 + iVar11) = uVar4;
    if (bVar1) goto LAB_0208194c;
  }
  else {
    bVar1 = false;
    if ((*(uint *)(iVar9 + uVar8 + 4) & 1) == 0) goto LAB_02081960;
LAB_02081938:
    *(uint *)(iVar11 + 4) = uVar4 | 1;
    *(uint *)(uVar4 + iVar11) = uVar4;
    if (bVar1) goto LAB_0208194c;
  }
  if (uVar4 < 0x200) {
    DAT_0208f7b4 = DAT_0208f7b4 | 1 << (uVar4 >> 5 & 0xff);
    uVar4 = uVar4 & 0xfffffff8;
    iVar9 = *(int *)((int)&DAT_0208f7b8 + uVar4);
    *(undefined **)(iVar11 + 0xc) = &DAT_0208f7b0 + uVar4;
    *(int *)(iVar11 + 8) = iVar9;
    *(int *)(iVar9 + 0xc) = iVar11;
    *(int *)((int)&DAT_0208f7b8 + uVar4) = iVar11;
  }
  else {
    uVar2 = uVar4 >> 9;
    if (uVar2 == 0) {
      uVar2 = uVar4 >> 3;
      iVar9 = uVar2 << 3;
    }
    else if (uVar2 < 5) {
      uVar2 = (uVar4 >> 6) + 0x38;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x15) {
      uVar2 = uVar2 + 0x5b;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x55) {
      uVar2 = (uVar4 >> 0xc) + 0x6e;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x155) {
      uVar2 = (uVar4 >> 0xf) + 0x77;
      iVar9 = uVar2 * 8;
    }
    else if (uVar2 < 0x555) {
      uVar2 = (uVar4 >> 0x12) + 0x7c;
      iVar9 = uVar2 * 8;
    }
    else {
      uVar2 = 0x7e;
      iVar9 = 0x3f0;
    }
    puVar10 = &DAT_0208f7b0 + iVar9;
    puVar3 = *(undefined **)((int)&DAT_0208f7b8 + iVar9);
    if (puVar10 == puVar3) {
      DAT_0208f7b4 = DAT_0208f7b4 | 1 << ((int)uVar2 >> 2 & 0xffU);
    }
    else {
      do {
        if ((*(uint *)(puVar3 + 4) & 0xfffffffc) <= uVar4) break;
        puVar3 = *(undefined **)(puVar3 + 8);
      } while (puVar10 != puVar3);
      puVar10 = *(undefined **)(puVar3 + 0xc);
    }
    *(undefined **)(iVar11 + 0xc) = puVar10;
    *(undefined **)(iVar11 + 8) = puVar3;
    *(int *)(puVar3 + 0xc) = iVar11;
    *(int *)(puVar10 + 8) = iVar11;
  }
LAB_0208194c:
  FUN_020830f4(param_1);
  return;
}

