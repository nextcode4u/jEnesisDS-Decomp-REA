// Analysis annotation
// Role — graphics transform bit fields
// Basis — pseudocode clue
// The pseudocode transforms values with masks, shifts, or bitwise operators. Location
// suggests the graphics region.

// rea decompile_all
// name: FUN_0200c280
// address: 0x200c280
// body: available
// range: 0x200c280-0x200c467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200c280(uint param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = DAT_0b00362f == '\0';
  (&DAT_023dcbca)[param_1] = (&DAT_023dc730)[DAT_020b4bf7];
  if (bVar4) {
    (&DAT_023dceb4)[param_1] = 1;
    return;
  }
  bVar4 = DAT_023dde94 == '\0';
  (&DAT_023dceb4)[param_1] = 0;
  cVar1 = DAT_023dcfac;
  if (bVar4) {
    if (DAT_020b4c10 <= param_1) {
LAB_0200c3a8:
      if (DAT_023dcfa8 == 0) {
        uVar3 = (uint)DAT_023dcea4;
        if (DAT_023dcdb0 == '\x02') {
          uVar3 = uVar3 + (param_1 & 0xfffffff8) * 4;
        }
        else if (DAT_023dcdb0 == '\x03') {
          uVar3 = uVar3 + param_1 * 4;
        }
        else if (DAT_023dcdb0 == '\x01') {
          uVar3 = uVar3 + (param_1 & 7) * 4;
        }
        bVar4 = DAT_023dcfac == '\0';
        (&DAT_023dd744)[param_1] = -(*(ushort *)(&DAT_0209cbec + (uVar3 & 0xfffffffe)) & 0x3fff);
        if ((bVar4) || (uVar2 = 0, cVar1 == '\x01')) {
          uVar2 = DAT_0b00364c;
        }
        (&DAT_023dc7b0)[param_1] = 0;
        (&DAT_023dd384)[param_1] = uVar2;
        goto LAB_0200c31c;
      }
    }
  }
  else if (param_1 < DAT_020b4c10) goto LAB_0200c3a8;
  (&DAT_023dc7b0)[param_1] = 1;
  (&DAT_023dd744)[param_1] = 0;
  (&DAT_023dd384)[param_1] = 0;
LAB_0200c31c:
  cVar1 = DAT_023dcfac;
  uVar3 = DAT_023dcea4 + 2;
  if (DAT_023dcdb0 == '\x02') {
    uVar3 = uVar3 + (param_1 & 0xfffffff8) * 4;
  }
  else if (DAT_023dcdb0 == '\x03') {
    uVar3 = uVar3 + param_1 * 4;
  }
  else if (DAT_023dcdb0 == '\x01') {
    uVar3 = uVar3 + (param_1 & 7) * 4;
  }
  bVar4 = DAT_023dcfac != '\0';
  (&DAT_023dd924)[param_1] = -(*(ushort *)(&DAT_0209cbec + (uVar3 & 0xfffffffe)) & 0x3fff);
  if ((bVar4) && (cVar1 != '\x01')) {
    (&DAT_023dd564)[param_1] = 0;
    return;
  }
  (&DAT_023dd564)[param_1] = DAT_0b00364e;
  return;
}

