// Analysis annotation
// Role — fat fat directory entryexists
// Basis — library match
// Matches symbol _FAT_directory_entryExists in libfat-nds 20070127 (directory.o) after
// masking relocation fields.

// rea decompile_all
// name: FUN_0207efe4
// address: 0x207efe4
// body: available
// range: 0x207efe4-0x207f077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207efe4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_168 [56];
  undefined1 auStack_130 [259];
  undefined1 auStack_2d [17];
  
  uVar1 = thunk_FUN_02083ed0(param_2,0x100);
  if ((uVar1 < 0x100) && (iVar2 = FUN_0207efc4(param_1,auStack_168,param_3), iVar2 != 0)) {
    do {
      uVar3 = thunk_FUN_02083ed0(auStack_130,0x100);
      if ((uVar1 == uVar3) && (iVar2 = thunk_FUN_02083638(auStack_130,param_2), iVar2 == 0)) {
        return 1;
      }
      FUN_0207eca8(auStack_168,auStack_2d);
      uVar3 = thunk_FUN_02083ed0(auStack_2d,0xd);
      if ((uVar1 == uVar3) && (iVar2 = thunk_FUN_02083638(auStack_2d,param_2), iVar2 == 0)) {
        return 1;
      }
      iVar2 = FUN_0207ee00(param_1,auStack_168);
    } while (iVar2 != 0);
  }
  return 0;
}

