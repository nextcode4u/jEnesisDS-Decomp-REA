// Analysis annotation
// Role — fat fat cache getsector
// Basis — library match
// Matches symbol _FAT_cache_getSector in libfat-nds 20070127 (cache.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0207ce80
// address: 0x207ce80
// body: available
// range: 0x207ce80-0x207cf43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0207ce80(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = (int *)param_1[2];
  if (param_1[1] == 0) {
    iVar5 = 0;
    iVar2 = 0;
    iVar9 = iVar5;
LAB_0207ceec:
    piVar8 = (int *)((int)piVar8 + iVar5);
    if ((*piVar8 != -1) && ((char)piVar8[2] == '\x01')) {
      cVar1 = (**(code **)(*param_1 + 0x14))(*piVar8,1,iVar2 + param_1[3]);
      if (cVar1 == '\0') {
        return -1;
      }
      *(undefined1 *)(piVar8 + 2) = 0;
    }
    cVar1 = (**(code **)(*param_1 + 0x10))(param_2,1,iVar2 + param_1[3]);
    if (cVar1 == '\0') {
      return -1;
    }
    *piVar8 = param_2;
    piVar8[1] = piVar8[1] + 1;
    return iVar9;
  }
  iVar5 = *piVar8;
  piVar4 = piVar8;
  if (param_2 == iVar5) {
    iVar2 = 0;
  }
  else {
    iVar9 = 0;
    uVar7 = 0xffffffff;
    iVar2 = 0;
    iVar3 = 0xc;
    do {
      if (iVar5 == -1) {
        uVar6 = piVar4[1];
LAB_0207ceb2:
        uVar7 = uVar6;
        iVar9 = iVar2;
      }
      else {
        uVar6 = piVar4[1];
        if (uVar6 < uVar7) goto LAB_0207ceb2;
      }
      iVar2 = iVar2 + 1;
      if (param_1[1] == iVar2) {
        iVar5 = iVar9 * 0xc;
        iVar2 = iVar9 << 9;
        goto LAB_0207ceec;
      }
      piVar4 = (int *)((int)piVar8 + iVar3);
      iVar5 = *piVar4;
      iVar3 = iVar3 + 0xc;
    } while (param_2 != iVar5);
  }
  piVar4[1] = piVar4[1] + 1;
  return iVar2;
}

