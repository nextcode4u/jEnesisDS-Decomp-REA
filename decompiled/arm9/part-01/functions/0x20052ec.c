// rea decompile_all
// name: FUN_020052ec
// address: 0x20052ec
// body: available
// range: 0x20052ec-0x200535b inclusive
// range: 0x200538c-0x20054bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_020052ec(ushort *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  if (DAT_0b000008 < 0x5a) {
    return 0;
  }
  uVar5 = param_1[-1];
  if (uVar5 >> 0xc != 6) {
    return 0;
  }
  if (uVar5 != 0x60fe) {
    uVar4 = (int)(char)uVar5 & 0xfffffffe;
    if (!CARRY4((uint)param_1,uVar4)) {
switchD_02005354_caseD_5:
      uVar5 = uVar5 & 0xfff | 0xf000;
      iVar3 = 0;
      goto LAB_020053c0;
    }
    uVar1 = *(ushort *)((int)param_1 + uVar4);
    puVar2 = (ushort *)((int)param_1 + uVar4);
    while (puVar7 = puVar2 + 1, param_1 != puVar7) {
      switch(uVar1 >> 0xc) {
      case 0:
        if ((uVar1 & 0xf1c0) != 0x100) {
          if ((uVar1 & 0xffc0) != 0x800) {
            if ((((uVar1 & 0xff00) == 0xc00) || ((uVar1 & 0xff00) == 0x200)) &&
               ((uVar1 & 0xc0) != 0xc0)) {
              puVar7 = puVar2 + 2;
              if ((uVar1 & 0xc0) == 0x80) {
                puVar7 = puVar2 + 3;
              }
              break;
            }
            if ((uVar1 & 0xffc0) != 0x880) goto switchD_02005354_caseD_5;
          }
          puVar7 = puVar2 + 2;
        }
        break;
      case 1:
      case 2:
      case 3:
        if ((uVar1 & 0x180) != 0) goto switchD_02005354_caseD_5;
        break;
      case 4:
        if (uVar1 == 0x4e71) goto LAB_02005468;
        if (((uVar1 & 0xff00) == 0x4a00) && ((uVar1 & 0xc0) != 0xc0)) break;
      default:
        goto switchD_02005354_caseD_5;
      case 0xb:
        if ((uVar1 & 0xf100) != 0xb000) goto switchD_02005354_caseD_5;
      }
      if ((uVar1 & 0x38) == 0x20 || (uVar1 & 0x38) == 0x18) goto switchD_02005354_caseD_5;
      uVar6 = uVar1 >> 3 & 7;
      if (uVar6 < 5) {
        iVar3 = 0;
      }
      else {
        iVar3 = 2;
      }
      if (uVar6 == 7 && (uVar1 & 7) == 1) {
        if (iVar3 == 0) {
          iVar3 = 2;
        }
        else {
          iVar3 = 4;
        }
      }
      puVar7 = (ushort *)(iVar3 + (int)puVar7);
LAB_02005468:
      if (param_1 <= puVar7) goto switchD_02005354_caseD_5;
      uVar1 = *puVar7;
      puVar2 = puVar7;
    }
  }
  uVar5 = uVar5 & 0xfff | 0xa000;
  iVar3 = 1;
LAB_020053c0:
  param_1[-1] = uVar5;
  DAT_0209903c = DAT_0209903c + iVar3;
  return iVar3;
}

