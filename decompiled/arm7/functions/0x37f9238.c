// rea decompile_all
// name: FUN_037f9238
// address: 0x37f9238
// body: available
// range: 0x37f9238-0x37f938f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_037f9238(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar4;
  
  puVar7 = &DAT_03807308;
  DAT_038072fc = 0;
  DAT_038072f8 = 0;
  DAT_03807304 = 0;
  DAT_03806eb9 = 0;
  DAT_03806eba = 0;
  DAT_03806ebc = 0;
  DAT_03806ec0 = 0;
  DAT_03806ec8 = 0;
  DAT_03806ecc = 0;
  puVar1 = &DAT_03807768;
  do {
    puVar1[-0xe4] = 0;
    iVar3 = 0;
    puVar5 = puVar7;
    do {
      iVar4 = iVar3;
      iVar3 = iVar4 + 1;
      *(undefined1 *)((int)puVar5 + 0x17) = 0;
      *(undefined2 *)((int)puVar5 + 0x1a) = 0x3ff;
      puVar5 = puVar5 + 0xc;
    } while (iVar3 != 4);
    puVar7 = puVar7 + 0x36;
    puVar1 = puVar1 + 0x36;
  } while (puVar7 != &DAT_03807818);
  FUN_037f8e1c(0xb6,iVar4 + 0xbd);
  FUN_037f8e1c(0x1b6,0xc0);
  FUN_037f8e1c(0xb5,0xc0);
  FUN_037f8e1c(0x1b5,0xc0);
  FUN_037f8e1c(0xb4,0xc0);
  FUN_037f8e1c(0x1b4,0xc0);
  uVar6 = 0xb2;
  do {
    FUN_037f8e1c(uVar6,0);
    uVar2 = uVar6 | 0x100;
    uVar6 = uVar6 - 1;
    FUN_037f8e1c(uVar2,0);
  } while (uVar6 != 0x2f);
  FUN_037f8e1c(0x26,0);
  FUN_037f8e1c(0x25,0);
  FUN_037f8e1c(0x24,0);
  FUN_037f8e1c(0x23,0);
  FUN_037f8e1c(0x22,0);
  FUN_037f8e1c(0x21,0);
  FUN_037f8e1c(0x20,0);
  DAT_03807818 = 0;
  return;
}

