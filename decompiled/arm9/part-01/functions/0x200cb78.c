// rea decompile_all
// name: FUN_0200cb78
// address: 0x200cb78
// body: available
// range: 0x200cb78-0x200cca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200cb78(void)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar5;
  
  puVar5 = &DAT_023ddec0;
  do {
    puVar4 = puVar5 + 1;
    *puVar5 = 0x20;
    puVar5 = puVar4;
  } while (puVar4 != &DAT_023deeae);
  uVar7 = 0xfee;
  uVar8 = 0;
  do {
    uVar8 = uVar8 >> 1;
    if ((uVar8 & 0x100) == 0) goto LAB_0200cc00;
    while ((uVar8 & 1) != 0) {
      while( true ) {
        uVar2 = FUN_0200c82c(DAT_023ddebc);
        if (uVar2 == 0xffffffff) {
          return;
        }
        FUN_0200c858(uVar2 & 0xff,DAT_023eb2f8);
        uVar8 = uVar8 >> 1;
        (&DAT_023ddec0)[uVar7] = (char)uVar2;
        uVar7 = uVar7 + 1 & 0xfff;
        if ((uVar8 & 0x100) != 0) break;
LAB_0200cc00:
        uVar2 = FUN_0200c82c(DAT_023ddebc);
        if (uVar2 == 0xffffffff) {
          return;
        }
        uVar8 = uVar2 | 0xff00;
        if ((uVar2 & 1) == 0) goto LAB_0200cc20;
      }
    }
LAB_0200cc20:
    iVar6 = 0;
    uVar2 = FUN_0200c82c(DAT_023ddebc);
    if ((uVar2 == 0xffffffff) || (uVar3 = FUN_0200c82c(DAT_023ddebc), uVar3 == 0xffffffff)) {
      return;
    }
    do {
      uVar1 = (&DAT_023ddec0)[(uVar2 | (uVar3 & 0xf0) << 4) + iVar6 & 0xfff];
      FUN_0200c858(uVar1,DAT_023eb2f8);
      iVar6 = iVar6 + 1;
      (&DAT_023ddec0)[uVar7] = uVar1;
      uVar7 = uVar7 + 1 & 0xfff;
    } while (iVar6 <= (int)((uVar3 & 0xf) + 2));
  } while( true );
}

