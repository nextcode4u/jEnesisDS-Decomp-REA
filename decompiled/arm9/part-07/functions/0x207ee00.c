// rea decompile_all
// name: FUN_0207ee00
// address: 0x207ee00
// body: available
// range: 0x207ee00-0x207efbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0207ee00(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint local_64;
  byte local_60 [11];
  byte local_55;
  byte local_53;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  int local_30;
  int local_2c;
  undefined1 auStack_28 [4];
  
  uVar5 = *(uint *)(param_2 + 0x2c);
  iStack_3c = *(int *)(param_2 + 0x30);
  iStack_38 = *(int *)(param_2 + 0x34);
  if (uVar5 == 0) {
    uVar5 = *(uint *)(param_1 + 0x14);
  }
  puVar6 = (undefined1 *)(param_2 + 0x38);
  local_64 = 0;
  bVar1 = false;
  local_40 = uVar5;
  local_34 = uVar5;
  local_30 = iStack_3c;
  local_2c = iStack_38;
  do {
    iVar3 = FUN_0207ed90(param_1,&local_34,0);
    if (local_34 < 2) {
      iVar11 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar11 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_60,iVar11 + local_30,local_2c << 5,0x20);
    uVar2 = local_34;
    if (local_55 == 0xf) {
      if ((int)((uint)local_60[0] * 0x1000000) < 0) {
        bVar1 = false;
LAB_0207ef50:
        if (local_53 == local_64) {
          local_64 = (uint)local_53;
          if (bVar1) goto LAB_0207ef1e;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        if ((local_60[0] & 0x40) == 0) goto LAB_0207ef50;
        local_40 = local_34;
        iStack_3c = local_30;
        iStack_38 = local_2c;
        puVar6[(local_60[0] & 0xffffffbf) * 0xd] = 0;
        bVar1 = true;
        uVar5 = local_34;
LAB_0207ef1e:
        local_64 = (uint)local_53;
        piVar7 = &DAT_0208ee48;
        pbVar9 = puVar6 + (local_60[0] & 0xffffffbf) * 0xd + -0xd;
        do {
          iVar11 = *piVar7;
          piVar7 = piVar7 + 1;
          *pbVar9 = local_60[iVar11];
          pbVar9 = pbVar9 + 1;
        } while (piVar7 != (int *)&DAT_0208ee7c);
      }
    }
    else if (-1 < (int)((uint)local_55 << 0x1c)) {
      uVar10 = (uint)local_60[0];
      if (uVar10 == 0) goto LAB_0207eed6;
      if ((uVar10 != 0xe5) && (0x20 < uVar10)) {
        if (!bVar1) goto LAB_0207ef80;
        iVar11 = 1;
        do {
          if ((uVar10 & 1) == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = 0x80;
          }
          pbVar9 = local_60 + iVar11;
          iVar11 = iVar11 + 1;
          uVar10 = iVar8 + (uVar10 >> 1) + (uint)*pbVar9 & 0xff;
        } while (iVar11 != 0xb);
        local_40 = uVar5;
        if (uVar10 != local_64) {
          *puVar6 = 0;
LAB_0207ef80:
          local_40 = local_34;
          iStack_3c = local_30;
          iStack_38 = local_2c;
          FUN_0207eca8(local_60,puVar6,&local_34,auStack_28);
          local_40 = uVar2;
        }
        if (iVar3 == 0) {
LAB_0207eed6:
          uVar4 = 0;
        }
        else {
          *(uint *)(param_2 + 0x20) = local_40;
          *(int *)(param_2 + 0x24) = iStack_3c;
          *(int *)(param_2 + 0x28) = iStack_38;
          *(uint *)(param_2 + 0x2c) = local_34;
          *(int *)(param_2 + 0x30) = local_30;
          *(int *)(param_2 + 0x34) = local_2c;
          thunk_FUN_02082ec0(param_2,local_60,0x20,auStack_28);
          uVar4 = 1;
        }
        return uVar4;
      }
    }
    if (iVar3 == 0) goto LAB_0207eed6;
  } while( true );
}

