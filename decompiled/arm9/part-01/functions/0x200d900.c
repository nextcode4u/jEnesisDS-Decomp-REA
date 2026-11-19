// rea decompile_all
// name: FUN_0200d900
// address: 0x200d900
// body: available
// range: 0x200d900-0x200d99f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0200d8d0) */

void FUN_0200d900(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = (uint)(param_3 == 0 || param_1 == 0);
  if (param_3 != 0 && param_1 != 0) {
    DAT_020b4c54 = (param_5 & 0xf) << 0xc;
    uVar6 = uVar2;
    DAT_020b4c58 = param_3;
    if (param_4 * 0x20 != 0) {
      do {
        uVar5 = (uint)*(ushort *)(uVar2 + param_1);
        if ((*(ushort *)(uVar2 + param_1) & 0xff00) != 0) {
          uVar5 = (param_5 & 0xf) << 0xc | uVar5;
        }
        uVar3 = (ushort)uVar5;
        uVar6 = uVar6 + 1;
        if ((uVar5 & 0xff) != 0) {
          uVar3 = uVar3 | (ushort)(param_5 << 4);
        }
        *(ushort *)(uVar2 + param_2) = uVar3;
        uVar2 = uVar2 + 2;
      } while (param_4 * 0x20 != uVar6);
    }
    iVar1 = DAT_020b4c58;
    DAT_020b4c50 = 1;
    iVar4 = 0;
    do {
      *(undefined2 *)(iVar4 + iVar1) = 0;
      iVar4 = iVar4 + 2;
    } while (iVar4 != 0x600);
    return;
  }
  return;
}

