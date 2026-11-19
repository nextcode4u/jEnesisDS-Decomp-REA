// rea decompile_all
// name: FUN_02002990
// address: 0x2002990
// body: available
// range: 0x2002990-0x2002b07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_02002990(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_35 [29];
  
  DAT_02098fdc = 0;
  if (DAT_02098ff0 != (int *)0x0) {
    piVar3 = DAT_02098ff0;
    if (param_1 * 0x10 != 0) {
      iVar2 = 1;
      do {
        piVar3 = (int *)*piVar3;
        if (piVar3 == (int *)0x0) {
          DAT_02098fdc = 0;
          return;
        }
        bVar5 = param_1 * 0x10 != iVar2;
        iVar2 = iVar2 + 1;
      } while (bVar5);
    }
    FUN_0200d9ec(3);
    iVar2 = 4;
    do {
      if (piVar3[2] == 2) {
        FUN_02083a04(auStack_35,&DAT_0208f150,0x1d);
        FUN_02083bb4(auStack_35,piVar3 + 3,0x1b);
        FUN_0208395c(auStack_35,&DAT_0208f154,0x1d);
      }
      else {
        FUN_02083a04(auStack_35,piVar3 + 3,0x1d);
      }
      iVar4 = iVar2 + 1;
      FUN_0200dae0(auStack_35,iVar2);
      piVar3 = (int *)*piVar3;
      DAT_02098fdc = DAT_02098fdc + 1;
    } while ((piVar3 != (int *)0x0) && (iVar2 = iVar4, iVar4 != 0x14));
    if (DAT_02098fcc != 0) {
      FUN_02006b90(DAT_0208f344);
      uVar1 = DAT_02098fdc + 3U & 0xff;
      DAT_02098fe4 = uVar1 - 4;
      DAT_0208f344 = (undefined1)(DAT_02098fdc + 3U);
      FUN_02006784(uVar1);
      DAT_02098fcc = 0;
    }
    FUN_0200db8c(param_1 + 1,0x15,0x1a);
    FUN_0200da3c(&DAT_0208f2fc,0x15,0x1c);
    FUN_0200db8c(DAT_02098fd8,0x15,0x1e);
  }
  return;
}

