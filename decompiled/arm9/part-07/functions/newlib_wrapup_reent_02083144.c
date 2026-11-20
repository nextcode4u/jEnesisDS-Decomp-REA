// Analysis annotation
// Role — newlib wrapup reent
// Basis — library match
// Matches symbol _wrapup_reent in devkitARM r20 libc.a (lib_a-reent.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02083144
// address: 0x2083144
// body: available
// range: 0x2083144-0x20831bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02083144(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &DAT_0208f3a0;
  }
  for (piVar4 = (int *)param_1[0x52]; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    iVar3 = piVar4[1];
    if (-1 < iVar3 + -1) {
      puVar2 = piVar4 + iVar3 + 2;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + -1;
        (*(code *)*puVar2)();
      } while (iVar1 != iVar3);
    }
  }
  if ((code *)param_1[0xf] != (code *)0x0) {
    (*(code *)param_1[0xf])(param_1);
  }
  return;
}

