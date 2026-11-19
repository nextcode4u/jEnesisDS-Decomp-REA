// rea decompile_all
// name: FUN_0200d9ec
// address: 0x200d9ec
// body: available
// range: 0x200d9ec-0x200da33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200d9ec(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar1 = (0x18 - param_1) * 0x20;
  iVar3 = DAT_020b4c58 + param_1 * 0x40;
  if (iVar1 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    iVar2 = iVar4 * 2;
    iVar4 = iVar4 + 1;
    *(undefined2 *)(iVar2 + iVar3) = 0;
  } while (iVar4 != iVar1);
  return;
}

