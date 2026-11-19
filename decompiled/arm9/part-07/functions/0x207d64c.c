// rea decompile_all
// name: FUN_0207d64c
// address: 0x207d64c
// body: available
// range: 0x207d64c-0x207d845 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207d64c(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_180 [11];
  byte local_175;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  undefined1 local_170;
  undefined1 local_16f;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 auStack_148 [256];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = FUN_02072d38(param_2);
  if (iVar3 == 0) {
    *param_1 = 0x13;
    return 0xffffffff;
  }
  iVar4 = thunk_FUN_020836d4(param_2,0x3a);
  if (iVar4 != 0) {
    param_2 = iVar4 + 1;
    iVar4 = thunk_FUN_020836d4(param_2,0x3a);
    if (iVar4 != 0) {
      *param_1 = 0x16;
      return 0xffffffff;
    }
  }
  iVar4 = FUN_0207f07c(iVar3,auStack_180,param_2,0);
  if (iVar4 == 0) {
    if (*(char *)(iVar3 + 8) != '\0') {
      *param_1 = 0x1e;
      return 0xffffffff;
    }
    iVar4 = thunk_FUN_02083f68(param_2,0x2f);
    if (iVar4 == 0) {
      uVar7 = *(undefined4 *)(iVar3 + 0x3c);
    }
    else {
      iVar5 = FUN_0207f07c(iVar3,auStack_180,param_2,iVar4);
      if ((iVar5 == 0) || (-1 < (int)((uint)local_175 << 0x1b))) {
        *param_1 = 0x14;
        return 0xffffffff;
      }
      uVar7 = FUN_0207ed1c(auStack_180);
      param_2 = iVar4 + 1;
    }
    thunk_FUN_02083dbc(auStack_148,param_2,0xff);
    thunk_FUN_02083058(auStack_180,0,0x20);
    local_173 = 0;
    uVar2 = FUN_0207e808();
    local_172 = (undefined1)uVar2;
    local_171 = (undefined1)((ushort)uVar2 >> 8);
    uVar2 = FUN_0207e854();
    local_170 = (undefined1)uVar2;
    local_16f = (undefined1)((ushort)uVar2 >> 8);
    local_175 = 0x10;
    uVar6 = FUN_0207e7a0(iVar3,0);
    if (uVar6 != 0) {
      uVar1 = (undefined1)(uVar6 >> 8);
      local_16c = (undefined1)(uVar6 >> 0x10);
      local_16b = (undefined1)(uVar6 >> 0x18);
      local_166 = (char)uVar6;
      local_165 = uVar1;
      iVar4 = FUN_0207f5bc(iVar3,auStack_180,uVar7);
      if (iVar4 != 0) {
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_3c = 0;
        local_38 = 0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        thunk_FUN_02083058(&local_48,0x20,0xb);
        local_48 = CONCAT31(local_48._1_3_,0x2e);
        local_40 = CONCAT13(0x10,(undefined3)local_40);
        local_30._0_3_ = CONCAT12((char)uVar6,(undefined2)local_30);
        local_30 = CONCAT13(uVar1,(undefined3)local_30);
        local_34._0_2_ = (undefined2)(uVar6 >> 0x10);
        if (uVar6 < 2) {
          iVar4 = *(int *)(iVar3 + 0x10);
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x24) * (uVar6 - 2) + *(int *)(iVar3 + 0x1c);
        }
        FUN_0207cfbc(*(undefined4 *)(iVar3 + 4),&local_48,iVar4,0,0x20);
        local_48._0_2_ = CONCAT11(0x2e,(undefined1)local_48);
        local_30._0_3_ = CONCAT12((char)uVar7,(undefined2)local_30);
        local_30 = CONCAT13((char)((uint)uVar7 >> 8),(undefined3)local_30);
        local_34._0_2_ = (undefined2)((uint)uVar7 >> 0x10);
        if (uVar6 < 2) {
          iVar4 = *(int *)(iVar3 + 0x10);
        }
        else {
          iVar4 = *(int *)(iVar3 + 0x24) * (uVar6 - 2) + *(int *)(iVar3 + 0x1c);
        }
        FUN_0207d020(*(undefined4 *)(iVar3 + 4),&local_48,iVar4,0x20,0x20);
        iVar3 = FUN_0207cf44(*(undefined4 *)(iVar3 + 4));
        if (iVar3 == 0) {
          *param_1 = 5;
          return 0xffffffff;
        }
        return 0;
      }
    }
    *param_1 = 0x1c;
    return 0xffffffff;
  }
  *param_1 = 0x11;
  return 0xffffffff;
}

