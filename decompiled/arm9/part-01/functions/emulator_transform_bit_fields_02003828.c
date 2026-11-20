// Analysis annotation
// Role — emulator transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the emulator region.

// rea decompile_all
// name: FUN_02003828
// address: 0x2003828
// body: available
// range: 0x2003828-0x2003a43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_02003828(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  if (*(char *)(param_1 + 0x1e) != '\0') {
    if (*(char *)(param_1 + 0x18) != '\0') {
      if (*(int *)(param_1 + 0xc) == 3) {
        bVar1 = *(byte *)(param_1 + 0x21);
        bVar2 = *(byte *)(param_1 + 0x27);
        bVar3 = *(byte *)(param_1 + 0x2b);
        bVar4 = *(byte *)(param_1 + 0x22);
        bVar5 = *(byte *)(param_1 + 0x28);
        bVar6 = *(byte *)(param_1 + 0x29);
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x21);
        bVar2 = *(byte *)(param_1 + 0x25);
        bVar3 = *(byte *)(param_1 + 0x26);
        bVar4 = *(byte *)(param_1 + 0x22);
        bVar5 = *(byte *)(param_1 + 0x23);
        bVar6 = *(byte *)(param_1 + 0x24);
      }
      DAT_02098ffc = (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)bVar1 << 4 | (uint)bVar4 << 5 | (uint)bVar6 << 1 |
                     (uint)bVar2 << 2 | (uint)bVar3 << 3 | (uint)bVar5) &
                     ~(uint)*(byte *)(param_1 + 0x1a);
      return DAT_02098ffc;
    }
    return (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
           ((uint)*(byte *)(param_1 + 0x21) << 4 | (uint)*(byte *)(param_1 + 0x22) << 5 |
            (uint)*(byte *)(param_1 + 0x24) << 1 |
           (uint)*(byte *)(param_1 + 0x25) << 2 | (uint)*(byte *)(param_1 + 0x26) << 3 |
           (uint)*(byte *)(param_1 + 0x23)) & ~(uint)*(byte *)(param_1 + 0x1a);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (*(int *)(param_1 + 0xc) == 3) {
      DAT_02098ffc = ((uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5) &
                     ~(uint)*(byte *)(param_1 + 0x1a)) & 0xf0;
    }
    else if (*(int *)(param_1 + 0xc) == 4) {
      DAT_02098ffc = ((uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5) &
                     ~(uint)*(byte *)(param_1 + 0x1a)) & 0xf0 | 0xf;
    }
    else {
      DAT_02098ffc = (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5 |
                      (uint)*(byte *)(param_1 + 0x23) | (uint)*(byte *)(param_1 + 0x24) << 1) &
                     ~(uint)*(byte *)(param_1 + 0x1a) & 0xff;
    }
    return DAT_02098ffc;
  }
  return (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
         ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5 |
          (uint)*(byte *)(param_1 + 0x23) | (uint)*(byte *)(param_1 + 0x24) << 1) &
         ~(uint)*(byte *)(param_1 + 0x1a) & 0xff;
}

