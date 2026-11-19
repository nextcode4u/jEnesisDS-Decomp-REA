// rea decompile_all
// name: FUN_02005164
// address: 0x2005164
// body: available
// range: 0x2005164-0x2005267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02005164(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)(**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x44));
  DAT_02099044 = piVar1;
  *(char *)(param_1 + 0x54) = (char)*piVar1;
  *(undefined1 *)(param_1 + 0x55) = *(undefined1 *)((int)piVar1 + 1);
  *(undefined1 *)(param_1 + 0x56) = *(undefined1 *)((int)piVar1 + 2);
  *(undefined1 *)(param_1 + 0x57) = *(undefined1 *)((int)piVar1 + 3);
  uVar2 = CONCAT13(*(undefined1 *)(param_1 + 0x47),
                   CONCAT12(*(undefined1 *)(param_1 + 0x46),
                            CONCAT11(*(undefined1 *)(param_1 + 0x45),*(undefined1 *)(param_1 + 0x44)
                                    )));
  uVar4 = uVar2 & ~piVar1[1];
  *(char *)(param_1 + 0x9e) = (char)(uVar4 >> 0x10);
  *(char *)(param_1 + 0x9c) = (char)uVar4;
  *(char *)(param_1 + 0x9d) = (char)(uVar4 >> 8);
  *(char *)(param_1 + 0x9f) = (char)(uVar4 >> 0x18);
  uVar2 = uVar2 & piVar1[1];
  *(char *)(param_1 + 0x46) = (char)(uVar2 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)uVar2;
  *(char *)(param_1 + 0x45) = (char)(uVar2 >> 8);
  *(char *)(param_1 + 0x47) = (char)(uVar2 >> 0x18);
  iVar3 = uVar2 + *piVar1;
  *(char *)(param_1 + 0x47) = (char)((uint)iVar3 >> 0x18);
  *(char *)(param_1 + 0x45) = (char)((uint)iVar3 >> 8);
  *(char *)(param_1 + 0x46) = (char)((uint)iVar3 >> 0x10);
  *(char *)(param_1 + 0x44) = (char)iVar3;
  return;
}

