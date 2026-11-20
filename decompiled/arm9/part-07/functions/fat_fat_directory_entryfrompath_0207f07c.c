// Analysis annotation
// Role — fat fat directory entryfrompath
// Basis — library match
// Matches symbol _FAT_directory_entryFromPath in libfat-nds 20070127 (directory.o) after
// masking relocation fields.

// rea decompile_all
// name: FUN_0207f07c
// address: 0x207f07c
// body: available
// range: 0x207f07c-0x207f201 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207f07c(int param_1,int param_2,char *param_3,char *param_4)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *local_3c;
  undefined1 auStack_35 [17];
  
  local_3c = param_4;
  if (param_4 == (char *)0x0) {
    local_3c = (char *)thunk_FUN_020836d4(param_3,0);
  }
  if (*param_3 == '/') {
    iVar6 = *(int *)(param_1 + 0x14);
    do {
      param_3 = param_3 + 1;
    } while (*param_3 == '/');
    if (local_3c <= param_3) {
      FUN_0207ed34(param_1,param_2);
      bVar1 = true;
      goto LAB_0207f0a6;
    }
    bVar1 = false;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x3c);
    bVar1 = false;
LAB_0207f0a6:
    if (iVar6 != *(int *)(param_1 + 0x14)) goto LAB_0207f0ae;
  }
  iVar4 = thunk_FUN_02083afc(&DAT_0208f224,param_3,2);
  if (iVar4 == 0) {
    FUN_0207ed34(param_1,param_2);
    return 1;
  }
LAB_0207f0ae:
  if (!bVar1) {
    do {
      do {
        pcVar2 = (char *)thunk_FUN_020836d4(param_3,0x2f);
        if (pcVar2 == (char *)0x0) {
          uVar5 = thunk_FUN_02083a6c(param_3);
        }
        else {
          uVar5 = (int)pcVar2 - (int)param_3;
        }
        if ((0x100 < uVar5) || (iVar6 = FUN_0207efc4(param_1,param_2,iVar6), iVar6 == 0)) {
          return 0;
        }
        do {
          uVar3 = thunk_FUN_02083ed0(param_2 + 0x38,0x100);
          if (uVar5 == uVar3) {
            bVar1 = false;
            iVar4 = thunk_FUN_02083afc(param_2 + 0x38,param_3,uVar5);
            if (iVar4 == 0) {
              bVar1 = true;
            }
          }
          else {
            bVar1 = false;
          }
          FUN_0207eca8(param_2,auStack_35);
          uVar3 = thunk_FUN_02083ed0(auStack_35,0xd);
          if ((uVar5 == uVar3) && (iVar4 = thunk_FUN_02083afc(auStack_35,param_3,uVar5), iVar4 == 0)
             ) {
            bVar1 = true;
LAB_0207f106:
            if ((-1 < (int)((uint)*(byte *)(param_2 + 0xb) << 0x1b)) && (pcVar2 != (char *)0x0)) {
              bVar1 = false;
              goto LAB_0207f116;
            }
          }
          else {
            if (bVar1) goto LAB_0207f106;
LAB_0207f116:
            iVar6 = FUN_0207ee00(param_1,param_2);
          }
          if (iVar6 == 0) {
            return 0;
          }
        } while (!bVar1);
        if (pcVar2 == (char *)0x0) {
          return 1;
        }
        if (local_3c <= pcVar2) {
          return 1;
        }
        if (-1 < (int)((uint)*(byte *)(param_2 + 0xb) << 0x1b)) {
          return 1;
        }
        iVar6 = FUN_0207ed1c(param_2);
        param_3 = pcVar2;
      } while (*pcVar2 != '/');
      do {
        pcVar2 = pcVar2 + 1;
      } while (*pcVar2 == '/');
      param_3 = pcVar2;
    } while (pcVar2 < local_3c);
  }
  return 1;
}

