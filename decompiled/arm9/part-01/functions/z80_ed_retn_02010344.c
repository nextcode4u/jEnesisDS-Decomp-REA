// Analysis annotation
// Role — z80 ed retn
// Basis — dispatch table
// Z80 table entries include ED 0x45 (retn), ED 0x55 (retn), ED 0x5D (retn), ED 0x65
// (retn), ED 0x6D (retn), ED 0x75 (retn) and 1 more.

// rea decompile_all
// name: z80_dispatch_02010344
// address: 0x2010344
// body: available
// range: 0x2010344-0x201036f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void z80_dispatch_02010344(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *in_r12;
  byte *pbVar2;
  bool bVar3;
  uint in_stack_00000044;
  int in_stack_000000a4;
  
  pbVar2 = in_r12 + 1;
  pbVar1 = (byte *)(param_4 + (uint)*in_r12 + (uint)*pbVar2 * 0x100);
  bVar3 = (in_stack_00000044 & 4) != 0;
  if (!bVar3) {
    in_stack_00000044 = in_stack_00000044 & 0xfffffff7;
  }
  if ((in_stack_000000a4 != 0) && (bVar3)) {
    if (*pbVar1 == 0x76) {
      pbVar1 = pbVar1 + 1;
    }
    if ((in_stack_00000044 & 3) == 2) {
      *pbVar2 = (byte)((uint)((int)pbVar1 - param_4) >> 8);
      *in_r12 = (byte)((int)pbVar1 - param_4);
    }
    else {
      *pbVar2 = (byte)((uint)((int)pbVar1 - param_4) >> 8);
      *in_r12 = (byte)((int)pbVar1 - param_4);
      pbVar1 = (byte *)(param_4 + 0x38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0200e01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + (uint)*pbVar1 * 4))();
  return;
}

