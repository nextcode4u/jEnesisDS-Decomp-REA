// Analysis annotation
// Role — fat fat cache constructor
// Basis — library match
// Matches symbol _FAT_cache_constructor in libfat-nds 20070127 (cache.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0207d0c4
// address: 0x207d0c4
// body: available
// range: 0x207d0c4-0x207d13d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0207d0c4(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 < 2) {
    param_1 = 2;
  }
  puVar1 = (undefined4 *)thunk_FUN_02082724(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_1;
    puVar2 = (undefined4 *)thunk_FUN_02082724(param_1 * 0xc);
    if (puVar2 == (undefined4 *)0x0) {
      thunk_FUN_020826fc(puVar1);
      return (undefined4 *)0x0;
    }
    if (param_1 != 0) {
      uVar5 = 0;
      puVar3 = puVar2;
      do {
        uVar5 = uVar5 + 1;
        *puVar3 = 0xffffffff;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        puVar3 = puVar3 + 3;
      } while (param_1 != uVar5);
    }
    puVar1[2] = puVar2;
    iVar4 = thunk_FUN_02082724(param_1 << 9);
    puVar1[3] = iVar4;
    if (iVar4 != 0) {
      return puVar1;
    }
    thunk_FUN_020826fc(puVar1[2]);
    thunk_FUN_020826fc(puVar1);
  }
  return (undefined4 *)0x0;
}

