// rea decompile_all
// name: FUN_020817cc
// address: 0x20817cc
// body: available
// range: 0x20817cc-0x20818c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_020817cc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_020830f0();
  uVar3 = *(uint *)(DAT_0208f7b8 + 4) & 0xfffffffc;
  iVar2 = ((uVar3 - param_2) + 0xfef >> 0xc) - 1;
  if (0xfff < iVar2 * 0x1000) {
    iVar1 = FUN_020834c8(param_1,0);
    if (iVar1 == uVar3 + DAT_0208f7b8) {
      iVar1 = FUN_020834c8(param_1,iVar2 * -0x1000);
      if (iVar1 != -1) {
        *(uint *)(DAT_0208f7b8 + 4) = uVar3 + iVar2 * -0x1000 | 1;
        DAT_020b4cb4 = DAT_020b4cb4 + iVar2 * -0x1000;
        FUN_020830f4(param_1);
        return 1;
      }
      iVar2 = FUN_020834c8(param_1,0);
      if (0xf < iVar2 - DAT_0208f7b8) {
        DAT_020b4cb4 = iVar2 - DAT_0208fbbc;
        *(uint *)(DAT_0208f7b8 + 4) = iVar2 - DAT_0208f7b8 | 1;
      }
    }
  }
  FUN_020830f4(param_1);
  return 0;
}

