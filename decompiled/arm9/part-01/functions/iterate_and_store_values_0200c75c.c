// Analysis annotation
// Role — iterate and store values
// Basis — pseudocode clue
// The pseudocode shows an iteration that stores values through a pointer.

// rea decompile_all
// name: FUN_0200c75c
// address: 0x200c75c
// body: available
// range: 0x200c75c-0x200c81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200c75c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((&DAT_023e2eec)[param_1] == 0x1000) {
    return;
  }
  iVar4 = *(int *)(&DAT_023e6ef0 + param_1 * 4);
  if (iVar4 == 0x1000) {
    iVar4 = *(int *)(&DAT_023deee4 + param_1 * 4);
  }
  else {
    iVar1 = *(int *)(&DAT_023deee4 + param_1 * 4);
    if (iVar1 != 0x1000) {
      iVar4 = iVar1;
      if (*(int *)(&DAT_023e6ef0 + iVar1 * 4) != 0x1000) {
        do {
          iVar4 = *(int *)(&DAT_023e6ef0 + iVar4 * 4);
        } while (*(int *)(&DAT_023e6ef0 + iVar4 * 4) != 0x1000);
        iVar3 = *(int *)(&DAT_023deee4 + iVar4 * 4);
        *(int *)(&DAT_023deee4 + iVar4 * 4) = iVar1;
        iVar2 = (&DAT_023e2eec)[iVar4];
        iVar1 = *(int *)(&DAT_023deee4 + param_1 * 4);
        (&DAT_023e2eec)[iVar3] = iVar2;
        *(int *)(&DAT_023e6ef0 + iVar2 * 4) = iVar3;
        (&DAT_023e2eec)[iVar1] = iVar4;
      }
      *(undefined4 *)(&DAT_023e6ef0 + iVar4 * 4) = *(undefined4 *)(&DAT_023e6ef0 + param_1 * 4);
      (&DAT_023e2eec)[*(int *)(&DAT_023e6ef0 + param_1 * 4)] = iVar4;
    }
  }
  (&DAT_023e2eec)[iVar4] = (&DAT_023e2eec)[param_1];
  iVar1 = (&DAT_023e2eec)[param_1];
  if (param_1 == *(int *)(&DAT_023e6ef0 + iVar1 * 4)) {
    *(int *)(&DAT_023e6ef0 + iVar1 * 4) = iVar4;
  }
  else {
    *(int *)(&DAT_023deee4 + iVar1 * 4) = iVar4;
  }
  (&DAT_023e2eec)[param_1] = 0x1000;
  return;
}

