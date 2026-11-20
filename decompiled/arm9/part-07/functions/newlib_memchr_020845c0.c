// Analysis annotation
// Role — newlib memchr
// Basis — library match
// Matches symbol memchr in devkitARM r20 libc.a (lib_a-memchr.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_020845c0
// address: 0x20845c0
// body: available
// range: 0x20845c0-0x20846bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_020845c0(uint *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  param_2 = param_2 & 0xff;
  if ((3 < param_3) && (((uint)param_1 & 3) == 0)) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      uVar3 = param_2 + uVar3 * 0x100;
    } while (iVar2 != 4);
    do {
      param_3 = param_3 - 4;
      if (((*param_1 ^ uVar3) + 0xfefefeff & 0x80808080 & ~(*param_1 ^ uVar3)) != 0) {
        if (param_2 == (byte)*param_1) {
          return param_1;
        }
        if (param_2 == *(byte *)((int)param_1 + 1)) {
          return (uint *)((int)param_1 + 1);
        }
        if (param_2 == *(byte *)((int)param_1 + 2)) {
          return (uint *)((int)param_1 + 2);
        }
        if (param_2 == *(byte *)((int)param_1 + 3)) {
          return (uint *)((int)param_1 + 3);
        }
      }
      param_1 = param_1 + 1;
    } while (3 < param_3);
  }
  if (param_3 == 0) {
LAB_02084610:
    param_1 = (uint *)0x0;
  }
  else {
    bVar1 = (byte)*param_1;
    while (param_2 != bVar1) {
      bVar4 = param_3 == 1;
      param_3 = param_3 - 1;
      if (bVar4) goto LAB_02084610;
      param_1 = (uint *)((int)param_1 + 1);
      bVar1 = *(byte *)param_1;
    }
  }
  return param_1;
}

