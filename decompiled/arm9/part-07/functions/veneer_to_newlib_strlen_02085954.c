// Analysis annotation
// Role — veneer to newlib strlen
// Basis — control flow
// Ghidra identifies a thunk to 0x02083A6C, annotated as newlib strlen.

// rea decompile_all
// name: thunk_FUN_02083a6c
// address: 0x2085954
// body: available
// range: 0x2085954-0x2085957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int thunk_FUN_02083a6c(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar3 = *param_1 + 0xfefefeff & 0x80808080 & ~*param_1;
    while (uVar3 == 0) {
      puVar2 = puVar2 + 1;
      uVar3 = *puVar2 + 0xfefefeff & 0x80808080 & ~*puVar2;
    }
  }
  cVar1 = (char)*puVar2;
  while (cVar1 != '\0') {
    puVar2 = (uint *)((int)puVar2 + 1);
    cVar1 = *(char *)puVar2;
  }
  return (int)puVar2 - (int)param_1;
}

