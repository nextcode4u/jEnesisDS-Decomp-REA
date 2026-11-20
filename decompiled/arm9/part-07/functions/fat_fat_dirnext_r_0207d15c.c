// Analysis annotation
// Role — fat fat dirnext r
// Basis — library match
// Matches symbol _FAT_dirnext_r in libfat-nds 20070127 (fatdir.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_0207d15c
// address: 0x207d15c
// body: available
// range: 0x207d15c-0x207d1bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207d15c(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_2 + 4);
  if (*(char *)(puVar3 + 0x50) == '\0') {
    uVar2 = 0xffffffff;
    *param_1 = 9;
  }
  else if (*(char *)((int)puVar3 + 0x141) == '\0') {
    uVar2 = 0xffffffff;
    *param_1 = 2;
  }
  else {
    thunk_FUN_02083dbc(param_3,puVar3 + 0xf,0x100);
    if (param_4 != 0) {
      FUN_0207f4f0(*puVar3,puVar3 + 1,param_4);
    }
    uVar1 = FUN_0207ee00(*puVar3,puVar3 + 1);
    *(undefined1 *)((int)puVar3 + 0x141) = uVar1;
    uVar2 = 0;
  }
  return uVar2;
}

