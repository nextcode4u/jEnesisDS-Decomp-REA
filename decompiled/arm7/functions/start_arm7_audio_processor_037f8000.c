// Analysis annotation
// Role — start arm7 audio processor
// Basis — reviewed
// Disables interrupts, initializes memory and the C runtime, then enters the ARM7 audio
// task.

// rea decompile_all
// name: arm7_entry
// address: 0x37f8000
// body: available
// range: 0x37f8000-0x37f805b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void arm7_entry(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_04000208 = 0x4000000;
  FUN_037f805c(&DAT_03806d94,0x5138);
  thunk_FUN_03801b40();
  thunk_FUN_03801b40(0,0,param_3,arm7_main);
  (*(code *)&LAB_08000000)();
  return;
}

