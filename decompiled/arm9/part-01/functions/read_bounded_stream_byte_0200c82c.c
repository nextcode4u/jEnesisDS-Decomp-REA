// Analysis annotation
// Role — read bounded stream byte
// Basis — reviewed
// Reads and advances the input byte cursor while below its limit. Returns 0xFFFFFFFF at
// the bound.

// rea decompile_all
// name: FUN_0200c82c
// address: 0x200c82c
// body: available
// range: 0x200c82c-0x200c857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0200c82c(undefined4 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = (byte *)param_1[3];
  pbVar1 = pbVar3 + 1;
  bVar4 = pbVar3 < (byte *)param_1[2];
  if (bVar4) {
    pbVar3 = (byte *)*param_1;
    param_1[3] = pbVar1;
  }
  uVar2 = 0xffffffff;
  if (bVar4) {
    uVar2 = (uint)*pbVar3;
    *param_1 = pbVar3 + 1;
  }
  return uVar2;
}

