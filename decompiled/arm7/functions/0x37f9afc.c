// rea decompile_all
// name: FUN_037f9afc
// address: 0x37f9afc
// body: available
// range: 0x37f9afc-0x37f9b57 inclusive
// range: 0x37f9b78-0x37f9d93 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_037f9afc(byte *param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = param_1;
  if (param_2 != 0) {
    do {
      bVar2 = *pbVar4;
      bVar3 = pbVar4[1];
      uVar5 = (uint)bVar3;
      if ((bVar2 & 0xf0) == 0x20) {
        switch(bVar2) {
        case 0x24:
          uVar5 = DAT_03806ebc & 3 | uVar5 << 2;
          if (DAT_03806ebc != uVar5) {
            DAT_03806ec0 = (0x400 - uVar5) * 0x12;
            DAT_03806ec4 = 0;
            DAT_03806ebc = uVar5;
          }
          break;
        case 0x25:
          uVar5 = DAT_03806ebc & 0x3fc | uVar5 & 3;
          if (DAT_03806ebc != uVar5) {
            DAT_03806ec0 = (0x400 - uVar5) * 0x12;
            DAT_03806ec4 = 0;
            DAT_03806ebc = uVar5;
          }
          break;
        case 0x26:
          if (uVar5 != DAT_03806ec8) {
            DAT_03806ecc = (0x100 - uVar5) * 0x120;
            DAT_03806ed0 = 0;
            DAT_03806ec8 = bVar3;
          }
          break;
        case 0x27:
          if ((bVar3 & 0x20) != 0) {
            DAT_03806eb9 = DAT_03806eb9 & 0xfd;
          }
          DAT_03806eba = bVar3;
          if ((bVar3 & 0x10) != 0) {
            DAT_03806eb9 = DAT_03806eb9 & 0xfe;
          }
          break;
        case 0x28:
          uVar5 = uVar5 & 3;
          if (uVar5 != 3) {
            if ((bVar3 & 4) != 0) {
              uVar5 = uVar5 + 3;
            }
            iVar1 = uVar5 * 0xd8;
            if ((bVar3 & 0x10) == 0) {
              if (((&DAT_0380731e)[iVar1] != '\0') &&
                 ((&DAT_0380731e)[iVar1] = bVar3 & 0x10, 1 < (byte)(&DAT_0380731f)[iVar1])) {
                (&DAT_0380731f)[iVar1] = 1;
              }
            }
            else if ((&DAT_0380731e)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_03807314 + iVar1) = 0;
              (&DAT_0380731e)[iVar1] = 1;
              (&DAT_0380731f)[iVar1] = 4;
            }
            if ((bVar3 & 0x20) == 0) {
              if (((&DAT_0380737e)[iVar1] != '\0') &&
                 ((&DAT_0380737e)[iVar1] = bVar3 & 0x20, 1 < (byte)(&DAT_0380737f)[iVar1])) {
                (&DAT_0380737f)[iVar1] = 1;
              }
            }
            else if ((&DAT_0380737e)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_03807374 + iVar1) = 0;
              (&DAT_0380737f)[iVar1] = 4;
              (&DAT_0380737e)[iVar1] = 1;
            }
            if ((bVar3 & 0x40) == 0) {
              if (((&DAT_0380734e)[iVar1] != '\0') &&
                 ((&DAT_0380734e)[iVar1] = bVar3 & 0x40, 1 < (byte)(&DAT_0380734f)[iVar1])) {
                (&DAT_0380734f)[iVar1] = 1;
              }
            }
            else if ((&DAT_0380734e)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_03807344 + iVar1) = 0;
              (&DAT_0380734f)[iVar1] = 4;
              (&DAT_0380734e)[iVar1] = 1;
            }
            if ((bVar3 & 0x80) == 0) {
              if (((&DAT_038073ae)[iVar1] != '\0') &&
                 ((&DAT_038073ae)[iVar1] = bVar3 & 0x80, 1 < (byte)(&DAT_038073af)[iVar1])) {
                (&DAT_038073af)[iVar1] = 1;
              }
            }
            else if ((&DAT_038073ae)[iVar1] == '\0') {
              *(undefined4 *)(&DAT_038073a4 + iVar1) = 0;
              (&DAT_038073af)[iVar1] = 4;
              (&DAT_038073ae)[iVar1] = 1;
            }
          }
          break;
        case 0x2b:
          DAT_03807818 = uVar5 & 0x80;
        }
      }
      else {
        FUN_037f8e1c(bVar2,uVar5);
      }
      pbVar4 = pbVar4 + 2;
    } while ((uint)((int)pbVar4 - (int)param_1) < param_2);
  }
  return;
}

