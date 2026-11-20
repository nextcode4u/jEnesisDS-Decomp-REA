// Analysis annotation
// Role — emulator transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the emulator region.

// rea decompile_all
// name: FUN_02004dcc
// address: 0x2004dcc
// body: available
// range: 0x2004dcc-0x2004ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02004dcc(int param_1)

{
  undefined3 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined3 *)(param_1 + 0x400);
  uVar2 = (undefined1)((uint3)uVar1 >> 8);
  uVar3 = (undefined1)((uint3)uVar1 >> 0x10);
  *(undefined1 *)(param_1 + 0x409) = 0;
  *(undefined1 *)(param_1 + 0x40a) = 0;
  *(undefined1 *)(param_1 + 0x40b) = 0;
  *(char *)(param_1 + 0x424) = (char)uVar1;
  *(undefined1 *)(param_1 + 0x425) = uVar2;
  *(undefined1 *)(param_1 + 0x426) = uVar3;
  *(undefined1 *)(param_1 + 0x427) = *(undefined1 *)(param_1 + 0x403);
  *(undefined1 *)(param_1 + 0x438) = 0;
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined1 *)(param_1 + 0x43a) = 0;
  *(undefined1 *)(param_1 + 0x43b) = 0;
  *(undefined1 *)(param_1 + 0x43c) = 0;
  *(undefined1 *)(param_1 + 0x43d) = 0;
  *(undefined1 *)(param_1 + 0x43e) = 0;
  *(undefined1 *)(param_1 + 0x43f) = 0;
  *(undefined1 *)(param_1 + 0x444) = 0;
  *(undefined1 *)(param_1 + 0x445) = 0;
  *(undefined1 *)(param_1 + 0x446) = 0;
  *(undefined1 *)(param_1 + 0x447) = 0;
  *(undefined1 *)(param_1 + 0x408) = *(undefined1 *)(param_1 + 0x408);
  *(undefined1 *)(param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x4a5) = 0;
  *(undefined1 *)(param_1 + 0x4a6) = 0;
  *(undefined1 *)(param_1 + 0x4a7) = 0;
  *(char *)(param_1 + 0x420) = (char)uVar1;
  *(undefined1 *)(param_1 + 0x421) = uVar2;
  *(undefined1 *)(param_1 + 0x422) = uVar3;
  *(undefined1 *)(param_1 + 0x423) = *(undefined1 *)(param_1 + 0x403);
  *(undefined1 *)(param_1 + 0x474) = 0;
  *(undefined1 *)(param_1 + 0x483) = 0;
  *(undefined1 *)(param_1 + 0x475) = 0;
  *(undefined1 *)(param_1 + 0x476) = 0;
  *(undefined1 *)(param_1 + 0x477) = 0;
  *(undefined1 *)(param_1 + 0x484) = 0;
  *(undefined1 *)(param_1 + 0x485) = 0;
  *(undefined1 *)(param_1 + 0x486) = 0;
  *(undefined1 *)(param_1 + 0x487) = 0;
  *(undefined1 *)(param_1 + 0x488) = 0;
  *(undefined1 *)(param_1 + 0x489) = 0;
  *(undefined1 *)(param_1 + 0x48a) = 0;
  *(undefined1 *)(param_1 + 0x48b) = 0;
  *(undefined1 *)(param_1 + 0x48c) = 0;
  *(undefined1 *)(param_1 + 0x48d) = 0;
  *(undefined1 *)(param_1 + 0x48e) = 0;
  *(undefined1 *)(param_1 + 0x48f) = 0;
  *(undefined1 *)(param_1 + 0x490) = 0;
  *(undefined1 *)(param_1 + 0x491) = 0;
  *(undefined1 *)(param_1 + 0x492) = 0;
  *(undefined1 *)(param_1 + 0x493) = 0;
  *(undefined1 *)(param_1 + 0x47c) = 0;
  *(undefined1 *)(param_1 + 0x47d) = 0;
  *(undefined1 *)(param_1 + 0x47e) = 0;
  *(undefined1 *)(param_1 + 0x47f) = 0;
  *(undefined1 *)(param_1 + 0x480) = 0;
  *(undefined1 *)(param_1 + 0x481) = 0;
  *(undefined1 *)(param_1 + 0x482) = 0;
  return;
}

