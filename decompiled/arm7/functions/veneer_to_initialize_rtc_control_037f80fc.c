// Analysis annotation
// Role — veneer to initialize rtc control
// Basis — control flow
// Ghidra identifies a thunk to 0x03801200, annotated as initialize rtc control.

// rea decompile_all
// name: thunk_FUN_03801200
// address: 0x37f80fc
// body: available
// range: 0x37f80fc-0x37f8103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 thunk_FUN_03801200(void)

{
  undefined4 in_lr;
  undefined1 uStack_13;
  byte bStack_12;
  byte abStack_11 [5];
  
  uStack_13 = 0x61;
  FUN_038010c8(&uStack_13,1,abStack_11,1);
  if ((abStack_11[0] & 0xc0) != 0) {
    uStack_13 = 0x60;
    bStack_12 = abStack_11[0] | 1;
    FUN_038010c8(&uStack_13,2,0,0);
  }
  return in_lr;
}

