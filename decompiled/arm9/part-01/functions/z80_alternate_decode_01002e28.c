// Analysis annotation
// Role — z80 alternate decode
// Basis — dispatch table
// Z80 table entries include alternate 0x16 (alternate decode slot 16).

// rea decompile_all
// name: z80_dispatch_01002e28
// address: 0x1002e28
// body: available
// range: 0x1002e28-0x1002e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void z80_dispatch_01002e28(void)

{
  int in_lr;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 4U & 0xfffffffc))(0xff,in_stack_00000068,in_stack_00000094);
  return;
}

