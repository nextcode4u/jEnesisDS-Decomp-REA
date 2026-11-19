// rea decompile_all
// name: FUN_020023ec
// address: 0x20023ec
// body: available
// range: 0x20023ec-0x200240b inclusive
// range: 0x200241c-0x200257f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_020023ec(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  
  param_2 = param_2 + 8;
  switch(param_1[1]) {
  case 0:
    FUN_0200da3c(*param_1,param_2,1);
    pcVar3 = "on   ";
    pcVar4 = "off  ";
    uVar5 = param_1[2] & DAT_023cb610;
    break;
  case 1:
    FUN_0200da3c(*param_1,param_2,1);
    pcVar3 = "HW   ";
    pcVar4 = "SW   ";
    uVar5 = param_1[2] & DAT_023cb610;
    break;
  case 2:
    FUN_0200da3c(*param_1,param_2,1);
    uVar5 = DAT_023cb610 >> (param_1[2] & 0xff) & 3;
    if (uVar5 == 0) {
      pcVar3 = "off  ";
    }
    else if (uVar5 == 1) {
      pcVar3 = "on   ";
    }
    else {
      pcVar3 = "auto ";
    }
    goto code_r0x0200da3c;
  case 3:
    FUN_0200da3c(*param_1,param_2,1);
    uVar5 = DAT_023cb610 >> (param_1[2] & 0xff) & 3;
    if (uVar5 == 0) {
      pcVar3 = "USA";
    }
    else if (uVar5 == 1) {
      pcVar3 = "JAP";
    }
    else {
      pcVar3 = "EUR";
    }
    goto code_r0x0200da3c;
  default:
    return;
  }
  if (uVar5 == 0) {
    pcVar3 = pcVar4;
  }
code_r0x0200da3c:
  uVar2 = DAT_020b4c54;
  if (pcVar3 == (char *)0x0) {
    return;
  }
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_020b4c50 == 0) {
    return;
  }
  iVar6 = DAT_020b4c58 + (param_2 * 0x20 + 0x16) * 2;
  uVar5 = 0;
  do {
    *(ushort *)(uVar5 * 2 + iVar6) = (ushort)uVar2 | (ushort)(byte)(cVar1 - 0x20);
    uVar5 = uVar5 + 1;
    cVar1 = pcVar3[uVar5];
  } while (uVar5 < 0xff && cVar1 != '\0');
  return;
}

