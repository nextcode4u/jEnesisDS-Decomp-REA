// rea decompile_all
// name: FUN_020037b4
// address: 0x20037b4
// body: available
// range: 0x20037b4-0x200381f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020037b4(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x2b) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = 0x7f;
  *(undefined1 *)((int)param_1 + 0x1b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((int)param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x23) = 1;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  *(undefined1 *)((int)param_1 + 0x26) = 1;
  *(undefined1 *)((int)param_1 + 0x27) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  return;
}

