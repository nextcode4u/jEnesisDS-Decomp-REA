// rea decompile_all
// name: FUN_038025ac
// address: 0x38025ac
// body: available
// range: 0x38025ac-0x3802647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_038025ac(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
    do {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      param_3 = param_3 - 0x10;
      param_1[3] = param_2[3];
      param_2 = param_2 + 4;
      param_1 = param_1 + 4;
    } while (0xf < param_3);
    for (; 3 < param_3; param_3 = param_3 - 4) {
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(uVar1 + (int)param_1) = *(undefined1 *)param_2;
      uVar1 = uVar1 + 1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while (uVar1 != param_3);
  }
  return;
}

