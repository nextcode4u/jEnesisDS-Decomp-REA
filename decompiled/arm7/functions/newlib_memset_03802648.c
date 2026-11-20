// Analysis annotation
// Role — newlib memset
// Basis — library match
// Matches symbol memset in devkitARM r20 libc.a (lib_a-memset.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_03802648
// address: 0x3802648
// body: available
// range: 0x3802648-0x38026df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03802648(undefined4 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_3 < 4) || (((uint)param_1 & 3) != 0)) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar2 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
    if (param_3 < 0x10) goto LAB_038026c0;
    do {
      param_3 = param_3 - 0x10;
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
LAB_038026c0:
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
    if (param_3 == 0) {
      return;
    }
  }
  uVar1 = 0;
  do {
    *(undefined1 *)(uVar1 + (int)param_1) = param_2;
    uVar1 = uVar1 + 1;
  } while (uVar1 != param_3);
  return;
}

