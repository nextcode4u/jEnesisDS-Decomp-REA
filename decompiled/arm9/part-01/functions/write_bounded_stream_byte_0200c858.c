// Analysis annotation
// Role — write bounded stream byte
// Basis — reviewed
// Writes one byte and advances the output cursor while the stream has space.

// rea decompile_all
// name: FUN_0200c858
// address: 0x200c858
// body: available
// range: 0x200c858-0x200c87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200c858(undefined1 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  
  if ((uint)param_2[3] < (uint)param_2[2]) {
    puVar1 = (undefined1 *)*param_2;
    param_2[3] = param_2[3] + 1;
    *puVar1 = param_1;
    *param_2 = puVar1 + 1;
  }
  return;
}

