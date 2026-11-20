// Analysis annotation
// Role — z80 alternate decode
// Basis — dispatch table
// Z80 table entries include alternate 0x20 (alternate decode slot 20), alternate 0x21
// (alternate decode slot 21), alternate 0x22 (alternate decode slot 22), alternate 0x23
// (alternate decode slot 23).

// rea decompile_all
// name: z80_dispatch_01002ea8
// address: 0x1002ea8
// body: available
// range: 0x1002ea8-0x1002ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void z80_dispatch_01002ea8(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int in_lr;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 0x10U & 0xfffffffc))
            (*(undefined2 *)(param_4 + (param_1 & 0xffffbfff)),param_2,in_stack_00000094);
  return;
}

