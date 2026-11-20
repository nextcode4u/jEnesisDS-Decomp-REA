// Analysis annotation
// Role — fat fat directory getrootentry
// Basis — library match
// Matches symbol _FAT_directory_getRootEntry in libfat-nds 20070127 (directory.o) after
// masking relocation fields.

// rea decompile_all
// name: FUN_0207ed34
// address: 0x207ed34
// body: available
// range: 0x207ed34-0x207ed8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207ed34(int param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  thunk_FUN_02083058(param_2 + 0x38,0,0x100,param_2 + 0x2c);
  param_2[0x38] = 0x2e;
  thunk_FUN_02083058(param_2,0,0x20);
  thunk_FUN_02083058(param_2,0x20,0xb);
  *param_2 = 0x2e;
  param_2[0xb] = 0x10;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  param_2[0x1a] = (char)uVar2;
  param_2[0x1b] = (char)((uint)uVar2 >> 8);
  uVar1 = *(undefined2 *)(param_1 + 0x16);
  param_2[0x14] = (char)uVar1;
  param_2[0x15] = (char)((ushort)uVar1 >> 8);
  return 1;
}

