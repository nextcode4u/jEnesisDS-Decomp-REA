// rea decompile_all
// name: FUN_0200d82c
// address: 0x200d82c
// body: available
// range: 0x200d82c-0x200d8ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200d82c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0200d0b8(1);
  iVar2 = FUN_02081588(uVar1,&DAT_0208f074);
  if (iVar2 != 0) {
    *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x20;
    FUN_02081020();
  }
  FUN_020826fc(uVar1);
  uVar1 = FUN_0200d0b8(2);
  iVar2 = FUN_02081588(uVar1,&DAT_0208f074);
  if (iVar2 != 0) {
    *(uint *)(DAT_02098fc8 + 600) = *(uint *)(DAT_02098fc8 + 600) | 0x40;
    FUN_02081020();
  }
  FUN_020818d4(&DAT_0208f3a0,uVar1);
  return;
}

