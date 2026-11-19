// rea decompile_all
// name: FUN_0207383c
// address: 0x207383c
// body: available
// range: 0x207383c-0x2073999 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x020738e6) */
/* WARNING: Removing unreachable block (ram,0x0207394c) */
/* WARNING: Removing unreachable block (ram,0x02073906) */
/* WARNING: Removing unreachable block (ram,0x0207390e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0207383c(int param_1,undefined1 *param_2,uint param_3,byte param_4,undefined4 param_5)

{
  undefined1 uVar1;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined1 uVar2;
  
  DAT_040001a1 = 0x80;
  uVar6 = param_3 & 3;
  if (uVar6 < 2) {
    DAT_040001a8 = (byte)(param_3 << 1) | (byte)(param_1 << 2) | 0xf1;
  }
  else {
    if (uVar6 == 2) {
      cVar5 = '\x1e';
    }
    else {
      cVar5 = '\x0e';
    }
    DAT_040001a8 = (byte)(param_1 << 2) | -cVar5;
  }
  DAT_040001a9 = (byte)param_3 & 0x40 | (byte)(((param_3 & 0x1f) >> 2) << 3);
  DAT_040001aa = param_4 | 0x40;
  DAT_040001ab = (undefined1)((uint)param_5 >> 0x18);
  DAT_040001ac = (undefined1)((uint)param_5 >> 0x10);
  DAT_040001ad = (undefined1)((uint)param_5 >> 8);
  DAT_040001ae = (undefined1)param_5;
  DAT_040001af = 0;
  if (uVar6 < 2) {
    _DAT_040001a4 = DAT_020b4c74 | 0x1000000;
    _DAT_04000214 = 0x100000;
    iVar4 = 0;
    do {
      uVar3 = _DAT_04100010;
      if ((int)(_DAT_040001a4 << 8) < 0) {
        if (param_2 != (undefined1 *)0x0) {
          uVar1 = (undefined1)_DAT_04100010;
          uVar2 = (undefined1)((uint)_DAT_04100010 >> 8);
          if (iVar4 == 4) {
            param_2[1] = uVar2;
            param_2[2] = (char)((uint)uVar3 >> 0x10);
            *param_2 = uVar1;
            param_2[3] = (char)((uint)uVar3 >> 0x18);
          }
          else if (iVar4 == 5) {
            param_2[4] = uVar1;
            param_2[5] = uVar2;
          }
        }
        iVar4 = iVar4 + 1;
      }
    } while ((int)_DAT_040001a4 < 0);
  }
  else {
    _DAT_040001a4 = DAT_020b4c74;
    do {
    } while ((int)DAT_020b4c74 < 0);
    _DAT_04000214 = 0x100000;
  }
  return 1;
}

