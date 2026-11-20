// Analysis annotation
// Role — newlib strcmp
// Basis — library match
// Matches symbol strcmp in devkitARM r20 libc.a (lib_a-strcmp.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_020837ec
// address: 0x20837ec
// body: available
// range: 0x20837ec-0x20838bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_020837ec(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  
  if (((((uint)param_1 | (uint)param_2) & 3) == 0) && (uVar2 = *param_1, uVar2 == *param_2)) {
    uVar2 = uVar2 + 0xfefefeff & 0x80808080 & ~uVar2;
    while( true ) {
      if (uVar2 != 0) {
        return 0;
      }
      param_1 = param_1 + 1;
      uVar2 = *param_1;
      param_2 = param_2 + 1;
      if (uVar2 != *param_2) break;
      uVar2 = uVar2 + 0xfefefeff & 0x80808080 & ~uVar2;
    }
  }
  bVar1 = (byte)*param_1;
  while( true ) {
    uVar2 = (uint)bVar1;
    if (uVar2 == 0) {
      return -(uint)(byte)*param_2;
    }
    if ((byte)*param_2 != uVar2) break;
    param_1 = (uint *)((int)param_1 + 1);
    bVar1 = *(byte *)param_1;
    param_2 = (uint *)((int)param_2 + 1);
  }
  return uVar2 - (byte)*param_2;
}

