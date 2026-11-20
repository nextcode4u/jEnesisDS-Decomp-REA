// Analysis annotation
// Role — fat fat read r
// Basis — library match
// Matches symbol _FAT_read_r in libfat-nds 20070127 (fatfile.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_0207dd80
// address: 0x207dd80
// body: available
// range: 0x207dd80-0x207dfbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0207dd80(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint local_30;
  uint local_2c;
  
  if (((param_2 == (uint *)0x0) || (*(char *)((int)param_2 + 0x27) == '\0')) ||
     ((char)param_2[9] == '\0')) {
    *param_1 = 9;
    return 0;
  }
  if (*param_2 <= param_2[2]) {
    return 0;
  }
  local_2c = param_4;
  if (*param_2 < param_2[2] + param_4) {
    *param_1 = 0x8b;
    local_2c = *param_2 - param_2[2];
  }
  uVar8 = param_2[4];
  uVar5 = param_2[3];
  piVar9 = (int *)param_2[10];
  local_30 = param_2[5];
  iVar6 = piVar9[1];
  uVar3 = 0x200 - local_30;
  if (local_2c < 0x200 - local_30) {
    uVar3 = local_2c;
  }
  uVar10 = local_2c;
  if ((int)uVar3 < 0x200) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = piVar9[9] * (uVar5 - 2) + piVar9[7];
    }
    FUN_0207d06c(iVar6,param_3,iVar2 + uVar8,local_30,uVar3);
    local_30 = local_30 + uVar3;
    param_3 = param_3 + uVar3;
    uVar10 = local_2c - uVar3;
    if (0x1ff < (int)local_30) {
      uVar8 = uVar8 + 1;
      local_30 = 0;
    }
  }
  uVar3 = piVar9[9];
  uVar7 = uVar3 - uVar8;
  if (uVar10 <= uVar7 * 0x200) {
    uVar7 = uVar10 >> 9;
  }
  if (0 < (int)uVar7) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = uVar3 * (uVar5 - 2) + piVar9[7];
    }
    (**(code **)(*piVar9 + 0x10))(iVar2 + uVar8,uVar7,param_3);
    uVar3 = piVar9[9];
    param_3 = param_3 + uVar7 * 0x200;
    uVar10 = uVar10 + uVar7 * -0x200;
    uVar8 = uVar8 + uVar7;
  }
  if (uVar3 <= uVar8) {
    uVar3 = FUN_0207e470(piVar9,uVar5);
    if ((uVar10 != 0) || (uVar3 != 0xfffffff)) {
      if (uVar3 == 0) {
        *param_1 = 5;
        bVar1 = false;
      }
      else {
        uVar8 = 0;
        bVar1 = true;
        uVar5 = uVar3;
      }
      goto LAB_0207de44;
    }
    uVar8 = piVar9[9];
  }
  bVar1 = true;
LAB_0207de44:
  while (((uint)piVar9[10] <= uVar10 && (bVar1))) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
      iVar4 = piVar9[9];
    }
    else {
      iVar4 = piVar9[9];
      iVar2 = (uVar5 - 2) * iVar4 + piVar9[7];
    }
    (**(code **)(*piVar9 + 0x10))(iVar2,iVar4,param_3);
    iVar2 = piVar9[10];
    uVar10 = uVar10 - iVar2;
    uVar3 = FUN_0207e470(piVar9,uVar5);
    if ((uVar10 == 0) && (uVar3 == 0xfffffff)) {
      uVar8 = piVar9[9];
      param_3 = param_3 + iVar2;
    }
    else if (uVar3 == 0) {
      *param_1 = 5;
      param_3 = param_3 + iVar2;
      bVar1 = false;
    }
    else {
      uVar8 = 0;
      param_3 = param_3 + iVar2;
      uVar5 = uVar3;
    }
  }
  uVar3 = uVar10 >> 9;
  if ((uVar3 != 0) && (bVar1)) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = piVar9[9] * (uVar5 - 2) + piVar9[7];
    }
    (**(code **)(*piVar9 + 0x10))(iVar2,uVar3,param_3);
    param_3 = param_3 + uVar3 * 0x200;
    uVar10 = uVar10 + uVar3 * -0x200;
    uVar8 = uVar8 + uVar3;
  }
  if ((uVar10 != 0) && (bVar1)) {
    if (uVar5 < 2) {
      iVar2 = piVar9[4];
    }
    else {
      iVar2 = piVar9[9] * (uVar5 - 2) + piVar9[7];
    }
    FUN_0207d06c(iVar6,param_3,iVar2 + uVar8,0,uVar10);
    local_30 = local_30 + uVar10;
    uVar10 = 0;
  }
  param_2[3] = uVar5;
  param_2[4] = uVar8;
  param_2[5] = local_30;
  param_2[2] = param_2[2] + (local_2c - uVar10);
  return local_2c - uVar10;
}

