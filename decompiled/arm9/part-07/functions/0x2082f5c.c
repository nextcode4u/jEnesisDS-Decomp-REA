// rea decompile_all
// name: FUN_02082f5c
// address: 0x2082f5c
// body: available
// range: 0x2082f5c-0x2083057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_02082f5c(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  
  if ((param_2 < param_1) && (puVar3 = (undefined4 *)((int)param_2 + param_3), param_1 < puVar3)) {
    if (param_3 != 0) {
      puVar1 = (undefined1 *)((int)param_1 + param_3);
      puVar4 = puVar1 + -param_3;
      do {
        puVar3 = (undefined4 *)((int)puVar3 + -1);
        puVar1 = puVar1 + -1;
        *puVar1 = *(undefined1 *)puVar3;
      } while (puVar4 != puVar1);
    }
  }
  else {
    puVar3 = param_1;
    if ((0xf < param_3) && ((((uint)param_2 | (uint)param_1) & 3) == 0)) {
      do {
        *puVar3 = *param_2;
        puVar3[1] = param_2[1];
        puVar3[2] = param_2[2];
        param_3 = param_3 - 0x10;
        puVar3[3] = param_2[3];
        param_2 = param_2 + 4;
        puVar3 = puVar3 + 4;
      } while (0xf < param_3);
      for (; 3 < param_3; param_3 = param_3 - 4) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        *(undefined1 *)(uVar2 + (int)puVar3) = *(undefined1 *)param_2;
        uVar2 = uVar2 + 1;
        param_2 = (undefined4 *)((int)param_2 + 1);
      } while (uVar2 != param_3);
    }
  }
  return param_1;
}

