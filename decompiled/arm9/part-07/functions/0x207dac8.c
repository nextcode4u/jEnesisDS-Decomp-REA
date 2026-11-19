// rea decompile_all
// name: FUN_0207dac8
// address: 0x207dac8
// body: available
// range: 0x207dac8-0x207dd79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_0207dac8(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  undefined1 auStack_160 [11];
  byte local_155;
  undefined1 local_153;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f;
  ushort local_144;
  byte local_142;
  byte local_141;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint local_134;
  uint uStack_130;
  uint uStack_12c;
  undefined1 auStack_128 [260];
  
  uVar2 = FUN_02072d38(param_3);
  if (uVar2 == 0) {
    *param_1 = 0x13;
    return (uint *)0xffffffff;
  }
  iVar3 = thunk_FUN_020836d4(param_3,0x3a);
  if (iVar3 != 0) {
    param_3 = iVar3 + 1;
    iVar3 = thunk_FUN_020836d4(param_3,0x3a);
    if (iVar3 != 0) {
      *param_1 = 0x16;
      return (uint *)0xffffffff;
    }
  }
  uVar6 = param_4 & 3;
  if (uVar6 == 0) {
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)((int)param_2 + 0x25) = 0;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  else if (uVar6 == 1) {
    *(undefined1 *)(param_2 + 9) = 0;
    *(undefined1 *)((int)param_2 + 0x25) = 1;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  else {
    if (uVar6 != 2) {
      *param_1 = 0xd;
      return (uint *)0xffffffff;
    }
    *(undefined1 *)(param_2 + 9) = 1;
    *(undefined1 *)((int)param_2 + 0x25) = 1;
    *(undefined1 *)((int)param_2 + 0x26) = 0;
  }
  if ((*(char *)((int)param_2 + 0x25) != '\0') && (*(char *)(uVar2 + 8) != '\0')) {
    *param_1 = 0x1e;
    return (uint *)0xffffffff;
  }
  iVar3 = FUN_0207f07c(uVar2,auStack_160,param_3,0);
  if ((param_4 & 0xa00) == 0xa00) {
    if (iVar3 != 0) {
      *param_1 = 0x11;
      return (uint *)0xffffffff;
    }
LAB_0207dc46:
    if (-1 < (int)(param_4 << 0x16)) {
      *param_1 = 2;
      return (uint *)0xffffffff;
    }
    if (*(char *)(uVar2 + 8) != '\0') {
      *param_1 = 0x1e;
      return (uint *)0xffffffff;
    }
    iVar3 = thunk_FUN_02083f68(param_3,0x2f);
    if (iVar3 == 0) {
      uVar5 = *(undefined4 *)(uVar2 + 0x3c);
    }
    else {
      iVar4 = FUN_0207f07c(uVar2,auStack_160,param_3,iVar3);
      if ((iVar4 == 0) || (-1 < (int)((uint)local_155 << 0x1b))) {
        *param_1 = 0x14;
        return (uint *)0xffffffff;
      }
      uVar5 = FUN_0207ed1c(auStack_160);
      param_3 = iVar3 + 1;
    }
    thunk_FUN_02083dbc(auStack_128,param_3,0xff);
    thunk_FUN_02083058(auStack_160,0,0x20);
    local_153 = 0;
    uVar1 = FUN_0207e808();
    local_152 = (undefined1)uVar1;
    local_151 = (undefined1)((ushort)uVar1 >> 8);
    uVar1 = FUN_0207e854();
    local_150 = (undefined1)uVar1;
    local_14f = (undefined1)((ushort)uVar1 >> 8);
    iVar3 = FUN_0207f5bc(uVar2,auStack_160,uVar5);
    if (iVar3 == 0) {
      *param_1 = 0x1c;
      return (uint *)0xffffffff;
    }
  }
  else {
    if (iVar3 == 0) goto LAB_0207dc46;
    if ((int)((uint)local_155 << 0x1b) < 0) {
      *param_1 = 0x15;
      return (uint *)0xffffffff;
    }
  }
  *param_2 = (uint)local_144 | (uint)local_142 << 0x10 | (uint)local_141 << 0x18;
  if ((*(char *)((int)param_2 + 0x25) != '\0') && ((int)((uint)local_155 << 0x1f) < 0)) {
    *param_1 = 0x1e;
    return (uint *)0xffffffff;
  }
  param_2[10] = uVar2;
  uVar6 = FUN_0207ed1c(auStack_160);
  param_2[1] = uVar6;
  if (((int)(param_4 << 0x15) < 0) && (*(char *)((int)param_2 + 0x25) != '\0')) {
    if (uVar6 != 0) {
      FUN_0207e6cc(uVar2,uVar6);
      param_2[1] = 0;
      *param_2 = 0;
      goto LAB_0207dba0;
    }
  }
  else {
LAB_0207dba0:
    if (param_2[1] != 0) goto LAB_0207dbb0;
  }
  uVar6 = FUN_0207e71c(uVar2,0);
  param_2[1] = uVar6;
LAB_0207dbb0:
  param_2[0xb] = local_140;
  param_2[0xc] = uStack_13c;
  param_2[0xd] = uStack_138;
  param_2[0xe] = local_134;
  param_2[0xf] = uStack_130;
  param_2[0x10] = uStack_12c;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = param_2[1];
  uVar6 = FUN_0207e558(uVar2,param_2[1],param_2 + 0x11);
  uVar7 = *param_2;
  param_2[6] = uVar6;
  thunk_FUN_0208047c(uVar7,*(undefined4 *)(uVar2 + 0x28));
  param_2[7] = extraout_r1 >> 9;
  param_2[8] = uVar7 & 0x1ff;
  if ((uVar7 != 0) && (thunk_FUN_0208047c(uVar7,*(undefined4 *)(uVar2 + 0x28)), extraout_r1_00 == 0)
     ) {
    uVar6 = *(uint *)(uVar2 + 0x24);
    param_2[8] = 0;
    param_2[7] = uVar6;
  }
  if ((int)(param_4 << 0x1c) < 0) {
    *(undefined1 *)((int)param_2 + 0x26) = 1;
  }
  *(undefined1 *)((int)param_2 + 0x27) = 1;
  *(int *)(uVar2 + 0x40) = *(int *)(uVar2 + 0x40) + 1;
  return param_2;
}

