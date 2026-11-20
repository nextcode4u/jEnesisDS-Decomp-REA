// Analysis annotation
// Role — read genesis io register byte
// Basis — reviewed
// Reads Genesis I/O offsets and combines controller pin state with the port direction
// mask.

// rea decompile_all
// name: FUN_020003f4
// address: 0x20003f4
// body: available
// range: 0x20003f4-0x2000403 inclusive
// range: 0x2000470-0x20004c3 inclusive
// range: 0x2003a48-0x2003a4f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_020003f4(uint param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  
  switch(param_1 & 0xfe) {
  case 0:
    return DAT_0b00001c;
  case 2:
    iVar7 = DAT_0b000030;
    break;
  case 4:
    iVar7 = DAT_0b000034;
    break;
  case 6:
    return 0x7f;
  case 8:
    iVar7 = DAT_0b000030;
    goto LAB_02003a48;
  case 10:
    iVar7 = DAT_0b000034;
LAB_02003a48:
    return (uint)*(byte *)(iVar7 + 0x1a);
  default:
    return 0;
  case 0xe:
  case 0x14:
  case 0x1a:
    return 0xff;
  }
  if (*(char *)(iVar7 + 0x1e) != '\0') {
    if (*(char *)(iVar7 + 0x18) != '\0') {
      if (*(int *)(iVar7 + 0xc) == 3) {
        bVar1 = *(byte *)(iVar7 + 0x21);
        bVar2 = *(byte *)(iVar7 + 0x27);
        bVar3 = *(byte *)(iVar7 + 0x2b);
        bVar4 = *(byte *)(iVar7 + 0x22);
        bVar5 = *(byte *)(iVar7 + 0x28);
        bVar6 = *(byte *)(iVar7 + 0x29);
      }
      else {
        bVar1 = *(byte *)(iVar7 + 0x21);
        bVar2 = *(byte *)(iVar7 + 0x25);
        bVar3 = *(byte *)(iVar7 + 0x26);
        bVar4 = *(byte *)(iVar7 + 0x22);
        bVar5 = *(byte *)(iVar7 + 0x23);
        bVar6 = *(byte *)(iVar7 + 0x24);
      }
      DAT_02098ffc = (uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
                     ((uint)bVar1 << 4 | (uint)bVar4 << 5 | (uint)bVar6 << 1 |
                     (uint)bVar2 << 2 | (uint)bVar3 << 3 | (uint)bVar5) &
                     ~(uint)*(byte *)(iVar7 + 0x1a);
      return DAT_02098ffc;
    }
    return (uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
           ((uint)*(byte *)(iVar7 + 0x21) << 4 | (uint)*(byte *)(iVar7 + 0x22) << 5 |
            (uint)*(byte *)(iVar7 + 0x24) << 1 |
           (uint)*(byte *)(iVar7 + 0x25) << 2 | (uint)*(byte *)(iVar7 + 0x26) << 3 |
           (uint)*(byte *)(iVar7 + 0x23)) & ~(uint)*(byte *)(iVar7 + 0x1a);
  }
  if (*(char *)(iVar7 + 0x18) != '\0') {
    if (*(int *)(iVar7 + 0xc) == 3) {
      DAT_02098ffc = ((uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
                     ((uint)*(byte *)(iVar7 + 0x20) << 4 | (uint)*(byte *)(iVar7 + 0x2a) << 5) &
                     ~(uint)*(byte *)(iVar7 + 0x1a)) & 0xf0;
    }
    else if (*(int *)(iVar7 + 0xc) == 4) {
      DAT_02098ffc = ((uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
                     ((uint)*(byte *)(iVar7 + 0x20) << 4 | (uint)*(byte *)(iVar7 + 0x2a) << 5) &
                     ~(uint)*(byte *)(iVar7 + 0x1a)) & 0xf0 | 0xf;
    }
    else {
      DAT_02098ffc = (uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
                     ((uint)*(byte *)(iVar7 + 0x20) << 4 | (uint)*(byte *)(iVar7 + 0x2a) << 5 |
                      (uint)*(byte *)(iVar7 + 0x23) | (uint)*(byte *)(iVar7 + 0x24) << 1) &
                     ~(uint)*(byte *)(iVar7 + 0x1a) & 0xff;
    }
    return DAT_02098ffc;
  }
  return (uint)(*(byte *)(iVar7 + 0x1a) & *(byte *)(iVar7 + 0x19)) |
         ((uint)*(byte *)(iVar7 + 0x20) << 4 | (uint)*(byte *)(iVar7 + 0x2a) << 5 |
          (uint)*(byte *)(iVar7 + 0x23) | (uint)*(byte *)(iVar7 + 0x24) << 1) &
         ~(uint)*(byte *)(iVar7 + 0x1a) & 0xff;
}

