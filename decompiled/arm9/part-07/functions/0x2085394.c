// rea decompile_all
// name: FUN_02085394
// address: 0x2085394
// body: available
// range: 0x2085394-0x2085533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02085394(undefined4 *param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 *puVar6;
  
  iVar2 = FUN_02083ed0(param_2,param_4);
  if (param_4 <= iVar2) {
LAB_02085504:
    *param_1 = 0x5b;
    return 0xffffffff;
  }
  puVar6 = (undefined1 *)(param_2 + iVar2);
  cVar1 = puVar6[-1];
  if (cVar1 != '/') {
    *(undefined1 *)(param_2 + iVar2) = 0x2f;
  }
  cVar5 = *param_3;
  if (cVar1 != '/') {
    puVar6 = puVar6 + 1;
  }
  if (cVar5 == '/') {
    iVar3 = FUN_020836d4(param_2,0x2f);
    puVar6 = (undefined1 *)(iVar3 + 1);
    goto LAB_02085460;
  }
  do {
    iVar3 = FUN_020836d4(param_3,0x2f);
    if (iVar3 == 0) {
      iVar3 = FUN_020836d4(param_3,0);
    }
    else {
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 - (int)param_3;
    if (iVar3 == 0) {
      if (puVar6[-1] == '/') {
        return 0;
      }
      *puVar6 = 0x2f;
      return 0;
    }
    if (cVar5 == '.') {
      if (param_3[1] != '\0' && param_3[1] != '/') {
        iVar4 = FUN_02083c80(param_3,&DAT_0208efe0,2);
        goto joined_r0x02085494;
      }
    }
    else {
      iVar4 = FUN_02083c80(param_3,&DAT_0208efe0,2);
joined_r0x02085494:
      if ((iVar4 == 0) && (param_3[2] == '\0' || param_3[2] == '/')) {
        if (puVar6[-1] == '/') {
          puVar6[-1] = 0;
        }
        iVar2 = FUN_02083f68(param_2,0x2f);
        if (iVar2 == 0) {
          *param_1 = 2;
          return 0xffffffff;
        }
        puVar6 = (undefined1 *)(iVar2 + 1);
        iVar2 = iVar2 - param_2;
      }
      else {
        iVar2 = iVar2 + iVar3;
        if (param_4 <= iVar2) goto LAB_02085504;
        FUN_02083dbc(puVar6,param_3,iVar3);
        puVar6 = puVar6 + iVar3;
      }
    }
    *puVar6 = 0;
    param_3 = param_3 + iVar3;
    cVar5 = *param_3;
LAB_02085460:
    while (cVar5 == '/') {
      param_3 = param_3 + 1;
      cVar5 = *param_3;
    }
  } while( true );
}

