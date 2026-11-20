// Analysis annotation
// Role — ym2612 render algorithm 6 mask 02
// Basis — dispatch table
// YM2612 sample-loop selector algorithm 6, mask 0x2. The mask comes from four operator
// level comparisons against 0x3400.

// rea decompile_all
// name: arm7_dispatch_037ffd40
// address: 0x37ffd40
// body: available
// range: 0x37ffd40-0x37ffdab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * arm7_dispatch_037ffd40(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000034;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar4 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}

