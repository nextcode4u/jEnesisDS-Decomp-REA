// Analysis annotation
// Role — fat fat fat nextcluster
// Basis — library match
// Matches symbol _FAT_fat_nextCluster in libfat-nds 20070127 (file_allocation_table.o)
// after masking relocation fields.

// rea decompile_all
// name: FUN_0207e470
// address: 0x207e470
// body: available
// range: 0x207e470-0x207e53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0207e470(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_1c;
  
  cVar1 = *(char *)(param_1 + 9);
  local_1c = 0;
  if (cVar1 == '\x01') {
    iVar3 = (param_2 * 3 >> 10) + *(int *)(param_1 + 0x2c);
    uVar2 = param_2 * 3 >> 1 & 0x1ff;
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),&local_1c,iVar3,uVar2,1);
    uVar2 = uVar2 + 1;
    if (0x1ff < uVar2) {
      iVar3 = iVar3 + 1;
      uVar2 = 0;
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),(int)&local_1c + 1,iVar3,uVar2,1);
  }
  else if (cVar1 != '\0') {
    if (cVar1 == '\x02') {
      FUN_0207d06c(*(undefined4 *)(param_1 + 4),&local_1c,
                   ((param_2 & 0x7fffffff) >> 8) + *(int *)(param_1 + 0x2c),(param_2 & 0xff) << 1,2)
      ;
    }
    else if (cVar1 == '\x03') {
      FUN_0207d06c(*(undefined4 *)(param_1 + 4),&local_1c,
                   ((param_2 & 0x3fffffff) >> 7) + *(int *)(param_1 + 0x2c),(param_2 & 0x7f) << 2,4)
      ;
    }
  }
  return;
}

