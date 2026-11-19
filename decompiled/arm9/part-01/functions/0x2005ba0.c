// rea decompile_all
// name: FUN_02005ba0
// address: 0x2005ba0
// body: available
// range: 0x2005ba0-0x2005bc7 inclusive
// range: 0x2005bd8-0x2005caf inclusive
// range: 0x2005cc0-0x2005f8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02005ba0(uint param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = DAT_02099068;
  iVar1 = DAT_02099064;
  uVar6 = DAT_02099054;
  do {
  } while ((_DAT_04000180 & 0xf) == 0);
  uVar4 = (undefined1)param_2;
  switch(param_1 & 3) {
  case 0:
    DAT_02099060 = 0;
    DAT_02099064 = param_2;
    return;
  case 1:
    break;
  case 2:
    DAT_02099060 = 1;
    DAT_02099068 = param_2;
    return;
  case 3:
    if (DAT_02099060 == 0) {
      return;
    }
    if (((&DAT_0209927c)[DAT_02099068] != '\0') && ((byte)(&DAT_0209917c)[DAT_02099068] == param_2))
    {
      return;
    }
    (&DAT_0209917c)[DAT_02099068] = uVar4;
    if (0x1fd < uVar6) {
      return;
    }
    DAT_02099054 = uVar6 + 2;
    *(char *)(uVar6 + DAT_023db760) = (char)iVar5;
    *(undefined1 *)(uVar6 + 1 + DAT_023db760) = uVar4;
  default:
    return;
  }
  if (DAT_02099064 == 0x2a) {
    if (0x3ff < DAT_02099048) {
      return;
    }
    DAT_0209904c = param_2 & 0x7f | DAT_0209904c;
    *(undefined1 *)(DAT_02099048 + DAT_023db774) = uVar4;
    DAT_02099048 = DAT_02099048 + 1;
    return;
  }
  if (DAT_02099060 == 0) {
    if (((&DAT_0209927c)[DAT_02099064] != '\0') && ((byte)(&DAT_0209907c)[DAT_02099064] == param_2))
    {
      return;
    }
    (&DAT_0209907c)[DAT_02099064] = uVar4;
    iVar5 = DAT_0b00002c;
    switch(iVar1) {
    case 0x24:
      uVar6 = DAT_023db784 & 3 | param_2 << 2;
      if (DAT_023db784 == uVar6) {
        return;
      }
      break;
    case 0x25:
      uVar6 = DAT_023db784 & 0x3fc | param_2 & 3;
      if (DAT_023db784 == uVar6) {
        return;
      }
      break;
    case 0x26:
      if (DAT_023db790 == param_2) {
        return;
      }
      iVar1 = (uint)(ushort)(&DAT_023dbf98)[param_2] << 5;
      DAT_023db788 = iVar1;
      DAT_023db790 = param_2;
      *(undefined1 *)(DAT_0b00002c + 0x48f) = 0;
      *(char *)(iVar5 + 0x48d) = (char)((uint)iVar1 >> 8);
      *(char *)(iVar5 + 0x48e) = (char)((uint)iVar1 >> 0x10);
      *(char *)(iVar5 + 0x48c) = (char)iVar1;
      iVar1 = DAT_0b00002c;
      *(undefined1 *)(DAT_0b00002c + 0x490) = (undefined1)DAT_023db788;
      *(undefined1 *)(iVar1 + 0x491) = DAT_023db788._1_1_;
      *(undefined1 *)(iVar1 + 0x492) = DAT_023db788._2_1_;
      *(undefined1 *)(iVar1 + 0x493) = DAT_023db788._3_1_;
      return;
    case 0x27:
      DAT_023db778 = param_2;
      if ((param_2 & 0x20) != 0) {
        DAT_023db794 = DAT_023db794 & 0xfffffffd;
        puVar2 = (uint *)(DAT_0b00002c + 0x480);
        uVar6 = *puVar2 & 0xfffffffd;
        *(char *)(DAT_0b00002c + 0x483) = (char)(uVar6 >> 0x18);
        *(byte *)(iVar5 + 0x480) = (byte)*puVar2 & 0xfd;
        *(char *)(iVar5 + 0x481) = (char)(uVar6 >> 8);
        *(char *)(iVar5 + 0x482) = (char)(uVar6 >> 0x10);
      }
      iVar5 = DAT_0b00002c;
      if ((param_2 & 0x10) != 0) {
        DAT_023db794 = DAT_023db794 & 0xfffffffe;
        puVar2 = (uint *)(DAT_0b00002c + 0x480);
        uVar6 = *puVar2 & 0xfffffffe;
        *(char *)(DAT_0b00002c + 0x483) = (char)(uVar6 >> 0x18);
        *(byte *)(iVar5 + 0x480) = (byte)*puVar2 & 0xfe;
        *(char *)(iVar5 + 0x481) = (char)(uVar6 >> 8);
        *(char *)(iVar5 + 0x482) = (char)(uVar6 >> 0x10);
      }
      iVar5 = DAT_0b00002c;
      bVar3 = *(byte *)(DAT_0b00002c + 0x480);
      *(undefined1 *)(DAT_0b00002c + 0x481) = 0;
      *(undefined1 *)(iVar5 + 0x483) = 0;
      *(undefined1 *)(iVar5 + 0x482) = 0;
      *(byte *)(iVar5 + 0x480) = bVar3 & 3;
      iVar5 = DAT_0b00002c;
      uVar6 = *(uint *)(DAT_0b00002c + 0x480);
      uVar7 = uVar6 | param_2 << 8;
      *(char *)(DAT_0b00002c + 0x483) = (char)(uVar7 >> 0x18);
      *(char *)(iVar5 + 0x481) = (char)(uVar7 >> 8);
      *(char *)(iVar5 + 0x482) = (char)(uVar7 >> 0x10);
      *(char *)(iVar5 + 0x480) = (char)uVar6;
    default:
      if (0x1fd < DAT_02099050) {
        return;
      }
      *(char *)(DAT_02099050 + DAT_023db644) = (char)iVar1;
      *(undefined1 *)(DAT_02099050 + 1 + DAT_023db644) = uVar4;
      DAT_02099050 = DAT_02099050 + 2;
      return;
    }
    iVar1 = (uint)(ushort)(&DAT_023db798)[uVar6] << 1;
    DAT_023db77c = iVar1;
    DAT_023db784 = uVar6;
    *(undefined1 *)(DAT_0b00002c + 0x487) = 0;
    *(char *)(iVar5 + 0x485) = (char)((uint)iVar1 >> 8);
    *(char *)(iVar5 + 0x486) = (char)((uint)iVar1 >> 0x10);
    *(char *)(iVar5 + 0x484) = (char)iVar1;
    iVar1 = DAT_0b00002c;
    *(undefined1 *)(DAT_0b00002c + 0x488) = (undefined1)DAT_023db77c;
    *(undefined1 *)(iVar1 + 0x489) = DAT_023db77c._1_1_;
    *(undefined1 *)(iVar1 + 0x48a) = DAT_023db77c._2_1_;
    *(undefined1 *)(iVar1 + 0x48b) = DAT_023db77c._3_1_;
    return;
  }
  return;
}

