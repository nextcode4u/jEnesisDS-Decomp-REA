// rea decompile_all
// name: arm7_dispatch_037feb2c
// address: 0x37feb2c
// body: available
// range: 0x37feb2c-0x37febcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * arm7_dispatch_037feb2c(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000030;
  int in_stack_00000034;
  
  do {
    iVar4 = 0;
    if ((in_lr & 0xf) != 0) {
      iVar4 = (int)((unaff_r10 + ((int)unaff_r10 >> 0x10)) * 0x10000) >>
              (0x10 - (in_lr & 0xf) & 0xff);
    }
    uVar3 = 0;
    iVar4 = in_stack_00000020 +
            *(int *)(unaff_r9 + ((unaff_r4 & 0xffff7fff) + iVar4 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar3 = (uint)*(ushort *)(unaff_r8 + iVar4);
    }
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}

