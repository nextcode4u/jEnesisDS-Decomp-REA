// rea decompile_all
// name: arm7_dispatch_03800774
// address: 0x3800774
// body: available
// range: 0x3800774-0x38007fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * arm7_dispatch_03800774(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short unaff_r10;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_0000003c;
  
  if (0x1ff < in_lr) {
    unaff_r10 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    sVar3 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + unaff_r10 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}

