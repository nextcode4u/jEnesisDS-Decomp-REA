// Analysis annotation
// Role — transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators.

// rea decompile_all
// name: FUN_01002cdc
// address: 0x1002cdc
// body: available
// range: 0x1002cdc-0x1002ceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_01002cdc(uint param_1,undefined4 param_2)

{
  undefined4 uStack00000068;
  int in_stack_0000009c;
  
                    /* WARNING: Could not recover jumptable at 0x01002ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uStack00000068 = param_2;
  (**(code **)(in_stack_0000009c + ((param_1 & 0xf000) >> 10)))();
  return;
}

