// Analysis annotation
// Role — helper for load genesis rom from stream
// Basis — call context
// Referenced by load genesis rom from stream at 0x02001D40. The filename describes that
// caller relationship.

// rea decompile_all
// name: FUN_02001530
// address: 0x2001530
// body: available
// range: 0x2001530-0x200157b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short FUN_02001530(int param_1,uint param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  if (0x200 < param_2) {
    sVar1 = 0;
    uVar3 = 0x200;
    do {
      if ((uVar3 & 1) == 0) {
        uVar2 = (ushort)*(byte *)(param_1 + uVar3) * 0x100;
      }
      else {
        uVar2 = (ushort)*(byte *)(uVar3 + param_1);
      }
      uVar3 = uVar3 + 1;
      sVar1 = sVar1 + uVar2;
    } while (uVar3 != param_2);
    return sVar1;
  }
  return 0;
}

