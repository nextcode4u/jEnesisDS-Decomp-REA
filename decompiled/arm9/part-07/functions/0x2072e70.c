// rea decompile_all
// name: FUN_02072e70
// address: 0x2072e70
// body: available
// range: 0x2072e70-0x20730df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x02072fb2) */

int * FUN_02072e70(int param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char acStack_220 [8];
  ushort uStack_218;
  byte bStack_216;
  ushort local_215;
  byte local_213;
  ushort local_212;
  byte local_210;
  ushort local_20f;
  ushort local_20d;
  ushort local_20a;
  ushort uStack_200;
  byte bStack_1fe;
  byte bStack_1fd;
  ushort uStack_1fc;
  byte bStack_1fa;
  byte bStack_1f9;
  byte bStack_1f8;
  ushort uStack_1f4;
  byte bStack_1f2;
  byte bStack_1f1;
  char cStack_1ea;
  char cStack_1e9;
  char cStack_1e8;
  char cStack_1ce;
  char cStack_1cd;
  char cStack_1cc;
  char acStack_62 [8];
  ushort local_5a;
  byte local_58 [56];
  
  thunk_FUN_02083058(acStack_220,0,0x200);
  cVar1 = (**(code **)(param_1 + 0x10))(0,1,acStack_220);
  if (cVar1 == '\0') {
    return (int *)0x0;
  }
  if (local_58[0x36] != 'U') {
    return (int *)0x0;
  }
  if (local_58[0x37] != -0x56) {
    return (int *)0x0;
  }
  if ((((cStack_1ea == 'F') && (cStack_1e9 == 'A')) && (cStack_1e8 == 'T')) ||
     (((cStack_1ce == 'F' && (cStack_1cd == 'A')) && (cStack_1cc == 'T')))) {
LAB_02072f20:
    uVar5 = 0;
  }
  else {
    iVar3 = 0x1be;
    do {
      if (acStack_220[iVar3] == -0x80) {
        if (iVar3 == 0x1fe) goto LAB_02072f20;
        goto LAB_02073062;
      }
      iVar3 = iVar3 + 0x10;
    } while (iVar3 != 0x1fe);
    if (acStack_62[4] == '\0') {
      if (local_58[10] == '\0') {
        if (local_58[0x1a] == '\0') {
          if (local_58[0x2a] == '\0') goto LAB_02072f20;
          iVar3 = 0x1ee;
        }
        else {
          iVar3 = 0x1de;
        }
      }
      else {
        iVar3 = 0x1ce;
      }
    }
    else {
      iVar3 = 0x1be;
    }
LAB_02073062:
    uVar5 = (uint)*(ushort *)((int)&uStack_218 + iVar3) |
            (uint)(&bStack_216)[iVar3] << 0x10 | (uint)*(byte *)((int)&local_215 + iVar3) << 0x18;
  }
  cVar1 = (**(code **)(param_1 + 0x10))(uVar5,1,acStack_220);
  if ((cVar1 == '\0') || (piVar2 = (int *)thunk_FUN_02082724(0x44), piVar2 == (int *)0x0)) {
    return (int *)0x0;
  }
  *piVar2 = param_1;
  piVar2[0xc] = (uint)local_20a;
  if (local_20a == 0) {
    piVar2[0xc] = (uint)uStack_1fc | (uint)bStack_1fa << 0x10 | (uint)bStack_1f9 << 0x18;
  }
  piVar2[6] = (uint)local_20d;
  if (local_20d == 0) {
    piVar2[6] = (uint)uStack_200 | (uint)bStack_1fe << 0x10 | (uint)bStack_1fd << 0x18;
  }
  piVar2[8] = 0x200;
  iVar3 = (int)((uint)local_215 * (uint)local_213) >> 9;
  piVar2[9] = iVar3;
  piVar2[10] = iVar3 << 9;
  iVar6 = uVar5 + local_212;
  piVar2[0xb] = iVar6;
  iVar4 = piVar2[0xc];
  iVar3 = iVar6 + (uint)local_210 * iVar4;
  piVar2[4] = iVar3;
  iVar3 = iVar3 + (uint)(local_20f >> 4);
  piVar2[7] = iVar3;
  piVar2[3] = (piVar2[6] - iVar3) * 0x200;
  uVar5 = thunk_FUN_02080380();
  piVar2[0xd] = uVar5;
  piVar2[0xe] = 2;
  if (uVar5 < 0xff5) {
    *(undefined1 *)((int)piVar2 + 9) = 1;
  }
  else {
    if (0xfff4 < uVar5) {
      *(undefined1 *)((int)piVar2 + 9) = 3;
      piVar2[5] = (uint)uStack_1f4 | (uint)bStack_1f2 << 0x10 | (uint)bStack_1f1 << 0x18;
      if (-1 < (int)((uint)bStack_1f8 * 0x1000000)) {
        piVar2[0xb] = (bStack_1f8 & 0xf) * iVar4 + iVar6;
      }
      goto LAB_0207300e;
    }
    *(undefined1 *)((int)piVar2 + 9) = 2;
  }
  piVar2[5] = 0;
LAB_0207300e:
  iVar3 = FUN_0207d0c4(param_2,*piVar2);
  piVar2[1] = iVar3;
  piVar2[0xf] = piVar2[5];
  *(byte *)(piVar2 + 2) = ~(byte)(*(uint *)(param_1 + 4) >> 1) & 1;
  piVar2[0x10] = 0;
  return piVar2;
}

