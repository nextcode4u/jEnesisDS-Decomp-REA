// rea decompile_all
// name: FUN_0200c610
// address: 0x200c610
// body: available
// range: 0x200c610-0x200c743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0200c610(int param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (byte)(&DAT_023ddec0)[param_1] + 0x1001;
  *(undefined4 *)(&DAT_023e6ef0 + param_1 * 4) = 0x1000;
  DAT_023eb310 = 0;
  *(undefined4 *)(&DAT_023deee4 + param_1 * 4) = 0x1000;
LAB_0200c658:
  iVar6 = *(int *)(&DAT_023e6ef0 + iVar2 * 4);
  if (*(int *)(&DAT_023e6ef0 + iVar2 * 4) == 0x1000) {
    *(int *)(&DAT_023e6ef0 + iVar2 * 4) = param_1;
    (&DAT_023e2eec)[param_1] = iVar2;
    return;
  }
  do {
    iVar2 = iVar6;
    puVar3 = &DAT_023ddec0 + iVar2;
    iVar6 = 1;
    do {
      pbVar1 = puVar3 + 1;
      iVar5 = iVar6 + param_1;
      puVar3 = puVar3 + 1;
      if ((uint)(byte)(&DAT_023ddec0)[iVar5] != (uint)*pbVar1) break;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x12);
    if (DAT_023eb310 < iVar6) {
      DAT_023eb30c = iVar2;
      DAT_023eb310 = iVar6;
      if (0x11 < iVar6) {
        uVar4 = *(undefined4 *)(&DAT_023deee4 + iVar2 * 4);
        *(undefined4 *)(&DAT_023e6ef0 + param_1 * 4) = *(undefined4 *)(&DAT_023e6ef0 + iVar2 * 4);
        *(undefined4 *)(&DAT_023deee4 + param_1 * 4) = uVar4;
        iVar5 = *(int *)(&DAT_023e6ef0 + iVar2 * 4);
        iVar6 = *(int *)(&DAT_023deee4 + iVar2 * 4);
        (&DAT_023e2eec)[param_1] = (&DAT_023e2eec)[iVar2];
        (&DAT_023e2eec)[iVar6] = param_1;
        (&DAT_023e2eec)[iVar5] = param_1;
        iVar6 = (&DAT_023e2eec)[iVar2];
        if (iVar2 == *(int *)(&DAT_023e6ef0 + iVar6 * 4)) {
          *(int *)(&DAT_023e6ef0 + iVar6 * 4) = param_1;
        }
        else {
          *(int *)(&DAT_023deee4 + iVar6 * 4) = param_1;
        }
        (&DAT_023e2eec)[iVar2] = 0x1000;
        return;
      }
    }
    if (-1 < (int)((uint)(byte)(&DAT_023ddec0)[iVar5] - (uint)*pbVar1)) goto LAB_0200c658;
    iVar6 = *(int *)(&DAT_023deee4 + iVar2 * 4);
    if (*(int *)(&DAT_023deee4 + iVar2 * 4) == 0x1000) {
      *(int *)(&DAT_023deee4 + iVar2 * 4) = param_1;
      (&DAT_023e2eec)[param_1] = iVar2;
      return;
    }
  } while( true );
}

