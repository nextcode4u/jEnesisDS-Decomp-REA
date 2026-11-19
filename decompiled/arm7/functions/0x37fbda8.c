// rea decompile_all
// name: FUN_037fbda8
// address: 0x37fbda8
// body: available
// range: 0x37fbda8-0x37fbeaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_037fbda8(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  
  if ((DAT_0380b8a0 == 0) || (iVar2 = FUN_037f93d8(), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (0xfff < param_1) {
    param_1 = 0x1000;
  }
  FUN_037fbc10(param_1);
  iVar2 = param_1 * 2;
  if (DAT_0380bdd4 < DAT_0380bdd0 + param_1) {
    iVar2 = (int)DAT_0380bdd4 - (int)DAT_0380bdd0 >> 1;
    if (bVar1) {
      FUN_037fbc68(DAT_0380bdd0,iVar2);
      param_1 = param_1 - iVar2;
      DAT_0380bdd0 = DAT_0380bdcc;
      iVar2 = param_1 * 2;
    }
    else {
      iVar3 = iVar2;
      if (0 < iVar2) {
        do {
          iVar3 = iVar3 + -1;
          *DAT_0380bdd0 = 0;
          DAT_0380bdd0 = DAT_0380bdd0 + 1;
        } while (iVar3 != 0);
      }
      param_1 = param_1 - iVar2;
      DAT_0380bdd0 = DAT_0380bdcc;
      iVar2 = param_1 * 2;
    }
  }
  if (bVar1) {
    FUN_037fbc68(DAT_0380bdd0,param_1);
  }
  else {
    puVar4 = DAT_0380bdd0;
    if (0 < param_1) {
      do {
        param_1 = param_1 + -1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (param_1 != 0);
    }
  }
  DAT_0380bdd0 = (undefined2 *)((int)DAT_0380bdd0 + iVar2);
  return;
}

