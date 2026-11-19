// rea decompile_all
// name: FUN_0380108c
// address: 0x380108c
// body: available
// range: 0x380108c-0x38010c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0380108c(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  int local_20;
  undefined1 local_1c [4];
  
  if (param_2 != 0) {
    iVar1 = 0;
    do {
      FUN_038017a2(*(undefined1 *)(iVar1 + param_1),10,&local_20,local_1c);
      *(byte *)(iVar1 + param_1) = (byte)(local_20 << 4) | local_1c[0];
      iVar1 = iVar1 + 1;
    } while (param_2 != iVar1);
  }
  return in_lr;
}

