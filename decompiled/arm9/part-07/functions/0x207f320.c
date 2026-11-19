// rea decompile_all
// name: FUN_0207f320
// address: 0x207f320
// body: available
// range: 0x207f320-0x207f425 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0207f320(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  byte local_54 [32];
  uint local_34;
  int local_30;
  int local_2c;
  
  local_34 = *(uint *)(param_2 + 0x20);
  local_30 = *(int *)(param_2 + 0x24);
  local_2c = *(int *)(param_2 + 0x28);
  iVar3 = *(int *)(param_2 + 0x30);
  iVar1 = *(int *)(param_2 + 0x34);
  uVar5 = *(uint *)(param_2 + 0x2c);
  thunk_FUN_02083058(param_2 + 0x38,0,0x100);
  while( true ) {
    if (local_34 < 2) {
      iVar6 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_54,iVar6 + local_30,local_2c << 5,0x20);
    if (((local_34 == uVar5) && (local_30 == iVar3)) && (local_2c == iVar1)) {
      thunk_FUN_02082ec0(param_2,local_54,0x20);
      bVar7 = true;
    }
    else {
      pbVar2 = (byte *)(param_2 + (local_54[0] & 0xffffffbf) * 0xd + 0x2b);
      piVar4 = &DAT_0208ee48;
      do {
        iVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        *pbVar2 = local_54[iVar6];
        pbVar2 = pbVar2 + 1;
      } while (piVar4 != (int *)&DAT_0208ee7c);
      bVar7 = false;
    }
    iVar6 = FUN_0207ed90(param_1,&local_34,0);
    if (iVar6 == 0) break;
    if (bVar7) {
      if (((local_34 == uVar5) && (local_30 == iVar3)) && (local_2c == iVar1)) {
        iVar1 = FUN_0207eca8(param_2,param_2 + 0x38);
        bVar7 = iVar1 != 0;
      }
      else {
        bVar7 = true;
      }
      return bVar7;
    }
  }
  return false;
}

