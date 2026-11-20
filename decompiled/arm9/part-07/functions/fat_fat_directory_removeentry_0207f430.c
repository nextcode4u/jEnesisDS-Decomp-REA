// Analysis annotation
// Role — fat fat directory removeentry
// Basis — library match
// Matches symbol _FAT_directory_removeEntry in libfat-nds 20070127 (directory.o) after
// masking relocation fields.

// rea decompile_all
// name: FUN_0207f430
// address: 0x207f430
// body: available
// range: 0x207f430-0x207f4ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207f430(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_4c [32];
  uint local_2c;
  int local_28;
  int local_24;
  
  local_2c = *(uint *)(param_2 + 0x20);
  local_28 = *(int *)(param_2 + 0x24);
  local_24 = *(int *)(param_2 + 0x28);
  iVar2 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x30);
  uVar3 = *(uint *)(param_2 + 0x2c);
  while( true ) {
    if (local_2c < 2) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x24) * (local_2c - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_4c,iVar5 + local_28,local_24 << 5,0x20);
    local_4c[0] = 0xe5;
    if (local_2c < 2) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x24) * (local_2c - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d020(*(undefined4 *)(param_1 + 4),local_4c,iVar5 + local_28,local_24 << 5,0x20);
    if ((local_2c == uVar3) && (local_28 == iVar4)) {
      if (iVar2 == local_24) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    iVar5 = FUN_0207ed90(param_1,&local_2c,0);
    if (iVar5 == 0) break;
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

