// rea decompile_all
// name: FUN_020063e8
// address: 0x20063e8
// body: available
// range: 0x20063e8-0x2006483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_020063e8(void)

{
  undefined1 *puVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  
  thunk_FUN_020801fc(1);
  FUN_020062c4();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_02006308(1);
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  thunk_FUN_0208024c(1);
  uVar3 = 0;
  do {
    FUN_02005ba0(0,uVar3 & 0xff);
    FUN_02005ba0(1,(&DAT_0209907c)[uVar3]);
    FUN_02005ba0(2,uVar3 & 0xff);
    puVar1 = &DAT_0209917c + uVar3;
    uVar3 = uVar3 + 1;
    FUN_02005ba0(3,*puVar1);
  } while (uVar3 != 0x100);
  thunk_FUN_020801fc(1);
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  bVar4 = (_DAT_04000184 & 2) != 0;
  uVar2 = _DAT_04000184;
  if (bVar4) {
    uVar2 = 0x8408;
  }
  if (!bVar4) {
    _DAT_04000188 = &DAT_05000000;
    uVar2 = _DAT_04000184;
  }
  _DAT_04000184 = uVar2;
  return !bVar4;
}

