// Analysis annotation
// Role — newlib strcasecmp
// Basis — library match
// Matches symbol strcasecmp in devkitARM r20 libc.a (lib_a-strcasecmp.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02083638
// address: 0x2083638
// body: available
// range: 0x2083638-0x20836cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_02083638(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)*param_1;
  if (uVar1 == 0) {
    uVar2 = (uint)*param_2;
  }
  else {
    do {
      uVar2 = (uint)*param_2;
      uVar4 = uVar1;
      if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
        uVar4 = uVar1 + 0x20;
      }
      uVar3 = uVar2;
      if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
        uVar3 = uVar2 + 0x20;
      }
      param_2 = param_2 + 1;
      if (uVar4 != uVar3) goto LAB_02083694;
      param_1 = param_1 + 1;
      uVar1 = (uint)*param_1;
    } while (uVar1 != 0);
    uVar2 = (uint)*param_2;
  }
LAB_02083694:
  if (((&DAT_0208ee85)[uVar1] & 1) != 0) {
    uVar1 = uVar1 + 0x20;
  }
  if (((&DAT_0208ee85)[uVar2] & 1) != 0) {
    uVar2 = uVar2 + 0x20;
  }
  return uVar1 - uVar2;
}

