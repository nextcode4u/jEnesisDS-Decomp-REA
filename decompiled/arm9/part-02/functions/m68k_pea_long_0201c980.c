// Analysis annotation
// Role — m68k pea long
// Basis — dispatch table
// Reached by 1 M68000 opcode-table slot. Decoded forms include pea long (1). Example
// opcode words are 0x487A.

// rea decompile_all
// name: m68k_dispatch_0201c980
// address: 0x201c980
// body: available
// range: 0x201c980-0x201c9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_0201c980(void)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  
  iVar1 = ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
          (int)*unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  puVar2 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  *puVar2 = (short)((uint)iVar1 >> 0x10);
  puVar2[1] = (short)iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}

