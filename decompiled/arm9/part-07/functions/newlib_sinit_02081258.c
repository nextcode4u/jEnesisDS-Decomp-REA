// Analysis annotation
// Role — newlib sinit
// Basis — library match
// Matches symbol __sinit in devkitARM r20 libc.a (lib_a-findfp.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_02081258
// address: 0x2081258
// body: available
// range: 0x2081258-0x20812d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02081258(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    return;
  }
  *(code **)(param_1 + 0x3c) = FUN_02081340;
  *(undefined4 *)(param_1 + 0x2e4) = 3;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(int *)(param_1 + 0x2e8) = param_1 + 0x2ec;
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_020811ec(*(undefined4 *)(param_1 + 4),4,0,param_1);
  FUN_020811ec(*(undefined4 *)(param_1 + 8),9,1,param_1);
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  puVar1[0xc] = &LAB_02083510;
  puVar1[4] = 2;
  puVar1[9] = &LAB_020835f0;
  *(undefined2 *)(puVar1 + 3) = 10;
  puVar1[7] = 0;
  puVar1[10] = FUN_02083584;
  puVar1[0xb] = &LAB_02083538;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = puVar1;
  return;
}

