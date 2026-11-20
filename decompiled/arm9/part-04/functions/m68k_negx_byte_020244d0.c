// Analysis annotation
// Role — m68k negx byte
// Basis — dispatch table
// Reached by 1 M68000 opcode-table slot. Decoded forms include negx byte (1). Example
// opcode words are 0x4039.

// rea decompile_all
// name: m68k_dispatch_020244d0
// address: 0x20244d0
// body: available
// range: 0x20244d0-0x202451b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void m68k_dispatch_020244d0(void)

{
  int iVar1;
  byte *pbVar2;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  
  pbVar2 = (byte *)((uint)*(ushort *)(unaff_r10 + 2) + unaff_r8 ^ 1);
  iVar1 = (uint)*pbVar2 * 0x1000000;
  if ((unaff_r7 & 0x10) != 0) {
    iVar1 = iVar1 + 1;
  }
  *pbVar2 = (byte)((uint)-iVar1 >> 0x18);
                    /* WARNING: Could not recover jumptable at 0x02024518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*(ushort *)(unaff_r10 + 4) * 4))();
  return;
}

