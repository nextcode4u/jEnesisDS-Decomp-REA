// rea decompile_all
// name: arm7_dispatch_037fe6d0
// address: 0x37fe6d0
// body: available
// range: 0x37fe6d0-0x37fe787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * arm7_dispatch_037fe6d0(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar3 + unaff_r11) * 0x8000 >> 0x10 & 0xffff03ff) *
                    4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r11 = 0;
    iVar3 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar5 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      unaff_r11 = (int)*(short *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}

