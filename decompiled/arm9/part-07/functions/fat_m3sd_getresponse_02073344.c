// Analysis annotation
// Role — fat m3sd getresponse
// Basis — library match
// Matches symbol _M3SD_getResponse in libfat-nds 20070127 (io_m3sd.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_02073344
// address: 0x2073344
// body: available
// range: 0x2073344-0x20733f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_02073344(byte *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = 0;
  do {
    iVar1 = FUN_020732f0();
    if (iVar1 != 0xff) break;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x100);
  if (param_1 == (byte *)0x0) {
LAB_020733e4:
    uVar2 = 1;
  }
  else {
    if (iVar1 != 0xff) {
      if (param_2 != 0) {
        iVar5 = 0;
        do {
          param_1[iVar5] = (byte)iVar1;
          iVar1 = FUN_020732f0();
          iVar5 = iVar5 + 1;
        } while (param_2 != iVar5);
      }
      FUN_020732f0();
      FUN_020732f0();
      if ((*param_1 & 0x80) == 0) {
        uVar4 = 0;
        uVar3 = 8;
LAB_020733b6:
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          param_2 = 0;
        }
        else {
          iVar5 = 0;
          pbVar6 = param_1;
          do {
            iVar5 = iVar5 + 1;
            *pbVar6 = *pbVar6 << (uVar4 & 0xff) | (byte)((int)(uint)pbVar6[1] >> (uVar3 & 0xff));
            pbVar6 = pbVar6 + 1;
          } while (iVar5 != param_2);
        }
        param_1[param_2] = param_1[param_2] << (uVar4 & 0xff) | (byte)(iVar1 >> (uVar3 & 0xff));
        goto LAB_020733e4;
      }
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        if (((uint)*param_1 << (uVar4 & 0xff) & 0x80) == 0) {
          uVar3 = 8 - uVar4;
          goto LAB_020733b6;
        }
      } while (uVar4 != 7);
    }
    uVar2 = 0;
  }
  return uVar2;
}

