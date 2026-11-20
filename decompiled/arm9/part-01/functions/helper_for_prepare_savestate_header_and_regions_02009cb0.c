// Analysis annotation
// Role — helper for prepare savestate header and regions
// Basis — call context
// Referenced by prepare savestate header and regions at 0x0200D03C. The filename describes
// that caller relationship.

// rea decompile_all
// name: FUN_02009cb0
// address: 0x2009cb0
// body: available
// range: 0x2009cb0-0x2009cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02009cb0(void)

{
  int iVar1;
  
  iVar1 = DAT_023eb348;
  *(undefined1 **)(DAT_023eb348 + 0xc) = &DAT_020b4c18;
  *(undefined2 **)(iVar1 + 0x14) = &DAT_0b00364c;
  *(undefined1 **)(iVar1 + 0x18) = &DAT_0209cbec;
  *(undefined2 **)(iVar1 + 0x10) = &DAT_023dc6b0;
  return;
}

