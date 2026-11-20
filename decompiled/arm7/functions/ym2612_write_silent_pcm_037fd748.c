// Analysis annotation
// Role — ym2612 write silent pcm
// Basis — dispatch table
// YM2612 sample-loop selector algorithm 2, mask 0x0. The mask comes from four operator
// level comparisons against 0x3400. The loop fills the PCM destination with zero.

// rea decompile_all
// name: arm7_dispatch_037fd748
// address: 0x37fd748
// body: available
// range: 0x37fd748-0x37fd78b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * arm7_dispatch_037fd748(void)

{
  bool bVar1;
  undefined2 *in_r12;
  int in_lr;
  int iVar2;
  
  do {
    *in_r12 = 0;
    iVar2 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar2;
  } while (iVar2 != 0 && bVar1);
  return &stack0x00000020;
}

