// Analysis annotation
// Role — flush cartridge save ram
// Basis — reviewed
// Opens the save file, writes the configured SRAM range and clears its dirty flag.

// rea decompile_all
// name: FUN_0200163c
// address: 0x200163c
// body: available
// range: 0x200163c-0x20016c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200163c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  bool bVar5;
  
  uVar3 = *(undefined4 *)(DAT_02098fc8 + 0x248);
  bVar5 = *(char *)(DAT_02098fc8 + 0x264) != '\0';
  puVar2 = (undefined *)0x0;
  if (bVar5) {
    param_3 = *(int *)(DAT_02098fc8 + 0x24c);
    puVar2 = &DAT_020b4cec;
  }
  puVar4 = &DAT_023bb4f0;
  if (bVar5) {
    puVar4 = puVar2 + param_3;
  }
  iVar1 = FUN_02081588(DAT_02098fc8 + 0x100,&DAT_0208f070);
  if (iVar1 != 0) {
    FUN_0200157c(puVar4,uVar3);
    FUN_020822e0(puVar4,1,uVar3,iVar1);
    FUN_0200157c(puVar4,uVar3);
    FUN_02081020(iVar1);
  }
  *(undefined1 *)(DAT_02098fc8 + 0x263) = 0;
  return;
}

