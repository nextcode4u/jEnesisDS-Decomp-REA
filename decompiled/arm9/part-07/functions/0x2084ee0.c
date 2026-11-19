// rea decompile_all
// name: FUN_02084ee0
// address: 0x2084ee0
// body: available
// range: 0x2084ee0-0x2084f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_02084ee0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = &DAT_0208fbc0;
  iVar5 = 0;
  do {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)*piVar4;
      iVar1 = FUN_02083a6c(uVar3);
      iVar2 = FUN_02083c80(uVar3,param_1,iVar1);
      if (iVar2 == 0) {
        if ((*(byte *)(param_1 + iVar1) == 0x3a) ||
           ((*(byte *)(param_1 + iVar1) - 0x30 < 10 && (*(char *)(param_1 + iVar1 + 1) == ':')))) {
          if (iVar5 == -1) {
            return DAT_0208fc00;
          }
          return iVar5;
        }
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
    if (iVar5 == 0x10) {
      return DAT_0208fc00;
    }
  } while( true );
}

