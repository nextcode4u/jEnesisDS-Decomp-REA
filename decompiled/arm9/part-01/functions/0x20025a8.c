// rea decompile_all
// name: FUN_020025a8
// address: 0x20025a8
// body: available
// range: 0x20025a8-0x2002753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_020025a8(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_28 [16];
  
  bVar6 = DAT_0208f347 == '\x01';
  thunk_FUN_0207fb90();
  uVar2 = thunk_FUN_0207fb70();
  thunk_FUN_0207fc70(auStack_28);
  FUN_02082ec0(&DAT_023cb618,auStack_28,0xc);
  if ((DAT_023cb61e == 0) || (DAT_023cb61c == 0)) {
    DAT_02098fec = '\0';
  }
  else if (DAT_02098fec == '\0') {
    iVar4 = (int)DAT_023cb61e;
    iVar3 = (int)DAT_023cb61c;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    uVar5 = iVar4 >> 3 & 0xff;
    uVar2 = iVar3 >> 3 & 0xff;
    DAT_02098fec = 1;
    DAT_0208f344 = (undefined1)(iVar4 >> 3);
    DAT_0208f345 = (undefined1)(iVar3 >> 3);
    DAT_0208f347 = '\x01';
    if (uVar5 < 3) {
      if (uVar2 != 0) {
        if (uVar2 < 5) {
          DAT_0208f347 = 1;
          DAT_02098fec = 1;
          return '\x06';
        }
        if ((5 < uVar2) && (uVar2 < 0xb)) {
          DAT_0208f347 = 1;
          DAT_02098fec = 1;
          return '\b';
        }
      }
    }
    else if (0x14 < uVar5) {
      if (0x13 < uVar2) {
        if (uVar2 < 0x17) {
          DAT_0208f347 = 1;
          DAT_02098fec = 1;
          return '\t';
        }
        if (uVar2 < 0x1a) {
          DAT_0208f347 = 1;
          DAT_02098fec = 1;
          return '\n';
        }
      }
      if (bVar6) {
        DAT_0208f347 = '\x02';
      }
      thunk_FUN_02006bb0(uVar2);
      return DAT_0208f347;
    }
    thunk_FUN_02006bb0(uVar2);
    return '\x01';
  }
  if (((uVar2 & 4) == 0) || ((DAT_02098fd0 & 4) != 0)) {
    cVar1 = '\0';
  }
  else {
    if (bVar6) {
      DAT_0208f347 = '\x02';
    }
    else {
      DAT_0208f347 = '\x06';
    }
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    thunk_FUN_0208031c();
    thunk_FUN_02006bb0();
    cVar1 = DAT_0208f347;
  }
  DAT_02098fd0 = uVar2;
  return cVar1;
}

