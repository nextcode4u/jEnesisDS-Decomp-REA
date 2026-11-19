// rea decompile_all
// name: FUN_02001b08
// address: 0x2001b08
// body: available
// range: 0x2001b08-0x2001c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_02001b08(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  char local_11;
  
  local_11 = '\0';
  FUN_02081ff0(param_1,0x100,0);
  FUN_02081788(&local_11,1,1,param_1);
  if ((local_11 == ' ') &&
     (uVar1 = *(ushort *)(param_1 + 0xc) & 0x20, (*(ushort *)(param_1 + 0xc) & 0x20) == 0)) {
    do {
      uVar3 = uVar1;
      FUN_02081788(&local_11,1,1,param_1);
      if (local_11 != ' ') break;
      uVar1 = uVar3 + 1;
    } while ((*(ushort *)(param_1 + 0xc) & 0x20) == 0);
    iVar2 = uVar3 + 0x101;
  }
  else {
    iVar2 = 0x100;
  }
  FUN_02081ff0(param_1,iVar2,0);
  FUN_02081788(&local_11,1,1,param_1);
  cVar4 = local_11 == 'S';
  FUN_02081788(&local_11,1,1,param_1);
  if (local_11 == 'E') {
    cVar4 = cVar4 + '\x01';
  }
  FUN_02081788(&local_11,1,1,param_1);
  if (local_11 == 'G') {
    cVar4 = cVar4 + '\x01';
  }
  FUN_02081788(&local_11,1,1,param_1);
  if (local_11 == 'A') {
    cVar4 = cVar4 + '\x01';
  }
  FUN_02081ff0(param_1,0,0);
  return cVar4 != '\x04';
}

