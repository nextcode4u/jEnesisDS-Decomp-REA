// rea decompile_all
// name: FUN_0200276c
// address: 0x200276c
// body: available
// range: 0x200276c-0x20027c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0200da4c) */

void FUN_0200276c(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  thunk_FUN_02006bb0();
  FUN_0200d9ec(3);
  FUN_02083dbc(&DAT_023cb4f0,param_1,0x1d);
  DAT_023cb50c = 0;
  FUN_0200da3c("Loading:",6,1);
  uVar2 = DAT_020b4c54;
  if (DAT_023cb4f0 == '\0') {
    return;
  }
  if (DAT_020b4c50 != 0) {
    iVar5 = DAT_020b4c58 + 0x1c2;
    uVar3 = 0;
    cVar1 = DAT_023cb4f0;
    do {
      *(ushort *)(uVar3 * 2 + iVar5) = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
      uVar4 = uVar3 + 1;
      cVar1 = *(char *)(uVar3 + 0x23cb4f1);
      uVar3 = uVar4;
    } while (uVar4 < 0xff && cVar1 != '\0');
    return;
  }
  return;
}

