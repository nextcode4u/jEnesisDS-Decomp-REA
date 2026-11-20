// Analysis annotation
// Role — emulator iterate and store values
// Basis — pseudocode clue
// The pseudocode shows an iteration that stores values through a pointer. Location
// suggests the emulator region.

// rea decompile_all
// name: FUN_020042f0
// address: 0x20042f0
// body: available
// range: 0x20042f0-0x2004357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020042f0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    uVar1 = FUN_02003f30(iVar2);
    *(undefined4 *)((int)&DAT_0b00061c + iVar3) = uVar1;
    uVar1 = FUN_0200402c(iVar2);
    *(undefined4 *)((int)&DAT_0b000a1c + iVar3) = uVar1;
    uVar1 = FUN_0200416c(iVar2);
    *(undefined4 *)((int)&DAT_0b000e1c + iVar3) = uVar1;
    uVar1 = FUN_02004230(iVar2);
    iVar2 = iVar2 + 1;
    *(undefined4 *)((int)&DAT_0b00121c + iVar3) = uVar1;
    iVar3 = iVar3 + 4;
  } while (iVar2 != 0x100);
  return;
}

