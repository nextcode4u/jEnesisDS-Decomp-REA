// Analysis annotation
// Role — newlib sfp
// Basis — library match
// Matches symbol __sfp in devkitARM r20 libc.a (lib_a-findfp.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_020813c0
// address: 0x20813c0
// body: available
// range: 0x20813c0-0x20814a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_020813c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  FUN_02081258(&DAT_0208f3a0);
  puVar1 = &DAT_0208f680;
  do {
    do {
      puVar3 = puVar1;
      iVar2 = puVar3[1];
      puVar1 = (undefined4 *)puVar3[2];
      if (-1 < iVar2 + -1) {
        do {
          if (*(short *)(puVar1 + 3) == 0) {
            puVar1[0x13] = 0;
            *puVar1 = 0;
            puVar1[2] = 0;
            puVar1[1] = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[0xd] = 0;
            puVar1[0xe] = 0;
            puVar1[0x12] = 0;
            puVar1[4] = 0xffffffff;
            *(undefined2 *)(puVar1 + 3) = 1;
            return puVar1;
          }
          bVar4 = iVar2 != 1;
          puVar1 = puVar1 + 0x18;
          iVar2 = iVar2 + -1;
        } while (bVar4);
      }
      puVar1 = (undefined4 *)*puVar3;
    } while ((undefined4 *)*puVar3 != (undefined4 *)0x0);
    puVar1 = (undefined4 *)FUN_02081370(param_1,4);
    *puVar3 = puVar1;
  } while (puVar1 != (undefined4 *)0x0);
  *param_1 = 0xc;
  return (undefined4 *)0x0;
}

