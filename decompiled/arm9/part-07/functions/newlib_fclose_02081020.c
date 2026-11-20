// Analysis annotation
// Role — newlib fclose
// Basis — library match
// Matches symbol fclose in devkitARM r20 libc.a (lib_a-fclose.o) after masking relocation
// fields.

// rea decompile_all
// name: FUN_02081020
// address: 0x2081020
// body: available
// range: 0x2080f24-0x208101b inclusive
// range: 0x2081020-0x208102f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02080f50) */

undefined4 FUN_02081020(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_02081248();
    FUN_02081258(&DAT_0208f3a0);
    uVar1 = 0;
    if (*(short *)(param_1 + 0xc) != 0) {
      uVar1 = FUN_02081034(param_1);
      if ((*(code **)(param_1 + 0x30) != (code *)0x0) &&
         (iVar2 = (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x20)), iVar2 < 0)) {
        uVar1 = 0xffffffff;
      }
      if ((*(ushort *)(param_1 + 0xc) & 0x80) != 0) {
        FUN_020818d4(&DAT_0208f3a0,*(undefined4 *)(param_1 + 0x14));
      }
      if (*(int *)(param_1 + 0x34) != 0) {
        if (*(int *)(param_1 + 0x34) != param_1 + 0x44) {
          FUN_020818d4(&DAT_0208f3a0);
        }
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      if (*(int *)(param_1 + 0x48) != 0) {
        FUN_020818d4(&DAT_0208f3a0);
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      *(undefined2 *)(param_1 + 0xc) = 0;
    }
    FUN_0208124c();
  }
  return uVar1;
}

