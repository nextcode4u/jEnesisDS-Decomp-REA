// rea decompile_all
// name: FUN_037f95fc
// address: 0x37f95fc
// body: available
// range: 0x37f95fc-0x37f9ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f95fc(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  DAT_03806e68 = *(undefined4 *)(param_3 + 200);
  DAT_03806e38 = *(short *)(param_3 + 0x18) + *(short *)(param_3 + 0x1a);
  DAT_03806e3a = *(short *)(param_3 + 0x78) + *(short *)(param_3 + 0x7a);
  DAT_03806e78 = DAT_038072fc;
  DAT_03806e6c = DAT_038072f8;
  DAT_03806e80 = (*(byte *)(param_3 + 0xc1) & 0xf) << 0xc;
  DAT_03806e7c = DAT_03807300;
  DAT_03806e70 = DAT_03807304;
  DAT_03806e3c = *(short *)(param_3 + 0x48) + *(short *)(param_3 + 0x4a);
  _DAT_0380b820 = *(undefined4 *)(param_3 + 0xc);
  DAT_03806e3e = *(short *)(param_3 + 0xa8) + *(short *)(param_3 + 0xaa);
  _DAT_0380b824 = *(undefined4 *)(param_3 + 0x6c);
  _DAT_0380b828 = *(undefined4 *)(param_3 + 0x3c);
  _DAT_0380b82c = *(undefined4 *)(param_3 + 0x9c);
  DAT_0380b831 = 0x36;
  DAT_0380b832 = 0x80;
  DAT_0380b835 = 0x26;
  DAT_0380b836 = 0x80;
  DAT_0380b833 = 3;
  DAT_0380b837 = 3;
  DAT_0380b830 = 0xf8;
  DAT_0380b834 = 0xf8;
  _DAT_0380b838 = *(undefined4 *)(param_3 + 0xc4);
  iVar3 = ((uint)*(ushort *)(param_3 + 0x18) + (int)*(short *)(param_3 + 0x1a)) * 0x10;
  DAT_0380b842 = (undefined1)((uint)iVar3 >> 0x10);
  DAT_0380b843 = (undefined1)((uint)iVar3 >> 0x18);
  DAT_0380b841 = (undefined1)((uint)iVar3 >> 8);
  DAT_0380b840 = (undefined1)iVar3;
  iVar3 = ((uint)*(ushort *)(param_3 + 0x78) + (int)*(short *)(param_3 + 0x7a)) * 0x10;
  DAT_0380b846 = (undefined1)((uint)iVar3 >> 0x10);
  DAT_0380b847 = (undefined1)((uint)iVar3 >> 0x18);
  DAT_0380b845 = (undefined1)((uint)iVar3 >> 8);
  DAT_0380b844 = (undefined1)iVar3;
  iVar3 = ((uint)*(ushort *)(param_3 + 0x48) + (int)*(short *)(param_3 + 0x4a)) * 0x10;
  DAT_0380b84a = (undefined1)((uint)iVar3 >> 0x10);
  DAT_0380b84b = (undefined1)((uint)iVar3 >> 0x18);
  DAT_0380b849 = (undefined1)((uint)iVar3 >> 8);
  DAT_0380b848 = (undefined1)iVar3;
  iVar3 = ((uint)*(ushort *)(param_3 + 0xa8) + (int)*(short *)(param_3 + 0xaa)) * 0x10;
  DAT_0380b84e = (undefined1)((uint)iVar3 >> 0x10);
  DAT_0380b84f = (undefined1)((uint)iVar3 >> 0x18);
  DAT_0380b84c = (undefined1)iVar3;
  DAT_0380b84d = (undefined1)((uint)iVar3 >> 8);
  DAT_0380b850 = *(undefined1 *)(param_3 + 0x10);
  DAT_0380b851 = *(undefined1 *)(param_3 + 0x11);
  DAT_0380b852 = *(undefined1 *)(param_3 + 0x12);
  DAT_0380b853 = *(undefined1 *)(param_3 + 0x13);
  DAT_0380b854 = *(undefined1 *)(param_3 + 0x70);
  DAT_0380b855 = *(undefined1 *)(param_3 + 0x71);
  DAT_0380b856 = *(undefined1 *)(param_3 + 0x72);
  DAT_0380b857 = *(undefined1 *)(param_3 + 0x73);
  DAT_0380b858 = *(undefined1 *)(param_3 + 0x40);
  DAT_0380b859 = *(undefined1 *)(param_3 + 0x41);
  DAT_0380b85a = *(undefined1 *)(param_3 + 0x42);
  DAT_0380b85b = *(undefined1 *)(param_3 + 0x43);
  DAT_0380b85c = *(undefined1 *)(param_3 + 0xa0);
  DAT_0380b85d = *(undefined1 *)(param_3 + 0xa1);
  DAT_0380b85e = *(undefined1 *)(param_3 + 0xa2);
  DAT_0380b85f = *(undefined1 *)(param_3 + 0xa3);
  DAT_0380b860 = *(byte *)(param_3 + 0xc0) & 7;
  DAT_0380b861 = 0;
  DAT_0380b862 = 0;
  DAT_0380b863 = 0;
  DAT_0380b864 = *(byte *)(param_3 + 0xc1) & 0xf;
  DAT_0380b865 = 0;
  DAT_0380b866 = 0;
  DAT_0380b867 = 0;
  _DAT_0380b83c = *(undefined4 *)(param_3 + 200);
  DAT_03806e74 = param_3;
  if (*(char *)(param_3 + 0x17) == '\0') {
    cVar2 = *(char *)(param_3 + 0x77);
  }
  else {
    DAT_03806e38 = FUN_037f8a88(param_3,DAT_038072f8);
    cVar2 = *(char *)(DAT_03806e74 + 0x77);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)(DAT_03806e74 + 0x47);
  }
  else {
    DAT_03806e3a = FUN_037f8a88(DAT_03806e74 + 0x60,DAT_03806e6c);
    cVar2 = *(char *)(DAT_03806e74 + 0x47);
  }
  if (cVar2 == '\0') {
    cVar2 = *(char *)(DAT_03806e74 + 0xa7);
  }
  else {
    DAT_03806e3c = FUN_037f8a88(DAT_03806e74 + 0x30,DAT_03806e6c);
    cVar2 = *(char *)(DAT_03806e74 + 0xa7);
  }
  if (cVar2 != '\0') {
    DAT_03806e3e = FUN_037f8a88(DAT_03806e74 + 0x90,DAT_03806e6c);
  }
  if ((DAT_03806e80 & 4) == 0) {
    FUN_03800dd0(&DAT_0380b820,param_1,param_2);
  }
  else if (0 < param_2) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      *(undefined2 *)(iVar1 + param_1) = 0;
    } while (param_2 != iVar3);
  }
  *(undefined4 *)(param_3 + 0xc4) = _DAT_0380b838;
  *(undefined4 *)(param_3 + 0xc) = _DAT_0380b820;
  *(undefined4 *)(param_3 + 0x6c) = _DAT_0380b824;
  *(undefined4 *)(param_3 + 0x3c) = _DAT_0380b828;
  *(undefined4 *)(param_3 + 0x9c) = _DAT_0380b82c;
  *(undefined4 *)(param_3 + 200) = _DAT_0380b83c;
  return;
}

