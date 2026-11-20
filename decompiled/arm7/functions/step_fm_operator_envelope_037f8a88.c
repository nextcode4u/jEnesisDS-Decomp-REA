// Analysis annotation
// Role — step fm operator envelope
// Basis — reviewed
// Updates the FM operator envelope and selects its current level.

// rea decompile_all
// name: FUN_037f8a88
// address: 0x37f8a88
// body: available
// range: 0x37f8a88-0x37f8ac3 inclusive
// range: 0x37f8ad4-0x37f8e1b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_037f8a88(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*(short *)(param_1 + 0x1a);
joined_r0x037f8a9c:
  if (param_3 <= param_2) goto LAB_037f8b94;
  param_2 = param_2 + 1;
  switch(*(undefined1 *)(param_1 + 0x17)) {
  case 1:
    uVar1 = *(uint *)(param_1 + 0x2c) >> 0x18;
    uVar2 = (1 << uVar1) - 1;
    for (; uVar4 = param_2 & uVar2, param_2 < param_3 && uVar4 != 0; param_2 = param_2 + 1) {
    }
    if (uVar4 == 0) {
      if (param_2 < param_3 && (int)uVar6 < 0x3ff) {
        uVar4 = 0;
        do {
          if (uVar4 == 0) {
            uVar6 = uVar6 + ((1 << (*(uint *)(param_1 + 0x2c) >> (param_2 >> uVar1 & 7) * 3 & 7)) >>
                            1);
          }
          param_2 = param_2 + 1;
          uVar4 = param_2 & uVar2;
        } while (param_2 < param_3 && (int)uVar6 < 0x3ff);
      }
      if ((int)uVar6 < 0x3ff) {
LAB_037f8b94:
        uVar3 = (undefined2)uVar6;
      }
      else {
        uVar6 = 0x3ff;
        uVar3 = 0x3ff;
        *(undefined1 *)(param_1 + 0x17) = 0;
      }
LAB_037f8ba0:
      *(undefined2 *)(param_1 + 0x1a) = uVar3;
      return *(ushort *)(param_1 + 0x18) + uVar6;
    }
    break;
  case 2:
    uVar1 = *(uint *)(param_1 + 0x28) >> 0x18;
    uVar2 = (1 << uVar1) - 1;
    for (; uVar4 = param_2 & uVar2, param_2 < param_3 && uVar4 != 0; param_2 = param_2 + 1) {
    }
    if (uVar4 == 0) {
      if ((int)uVar6 < 0x3ff && param_2 < param_3) {
        uVar4 = 0;
        do {
          if (uVar4 == 0) {
            uVar6 = uVar6 + ((1 << (*(uint *)(param_1 + 0x28) >> (param_2 >> uVar1 & 7) * 3 & 7)) >>
                            1);
          }
          param_2 = param_2 + 1;
          uVar4 = param_2 & uVar2;
        } while ((int)uVar6 < 0x3ff && param_2 < param_3);
      }
      if (0x3fe < (int)uVar6) {
        uVar6 = 0x3ff;
        uVar3 = 0x3ff;
        goto LAB_037f8ba0;
      }
    }
    break;
  case 3:
    uVar1 = *(uint *)(param_1 + 0x24) >> 0x18;
    uVar2 = (1 << uVar1) - 1;
    for (; uVar4 = param_2 & uVar2, param_2 < param_3 && uVar4 != 0; param_2 = param_2 + 1) {
    }
    if (uVar4 == 0) {
      iVar5 = *(int *)(param_1 + 0x1c);
      if (param_2 < param_3 && (int)uVar6 < iVar5) {
        uVar4 = 0;
        do {
          if (uVar4 == 0) {
            uVar6 = uVar6 + ((1 << (*(uint *)(param_1 + 0x24) >> (param_2 >> uVar1 & 7) * 3 & 7)) >>
                            1);
          }
          param_2 = param_2 + 1;
          uVar4 = param_2 & uVar2;
        } while (param_2 < param_3 && (int)uVar6 < iVar5);
      }
      if (iVar5 <= (int)uVar6) {
        *(undefined1 *)(param_1 + 0x17) = 2;
      }
    }
    break;
  case 4:
    uVar1 = *(uint *)(param_1 + 0x20) >> 0x18;
    uVar2 = (1 << uVar1) - 1;
    for (; uVar4 = param_2 & uVar2, param_2 < param_3 && uVar4 != 0; param_2 = param_2 + 1) {
    }
    if (uVar4 != 0) break;
    if (param_2 < param_3 && 0 < (int)uVar6) {
      uVar4 = 0;
      do {
        if (uVar4 == 0) {
          uVar6 = uVar6 + ((int)(((1 << (*(uint *)(param_1 + 0x20) >> (param_2 >> uVar1 & 7) * 3 & 7
                                        )) >> 1) * ~uVar6) >> 4);
        }
        param_2 = param_2 + 1;
        uVar4 = param_2 & uVar2;
      } while (param_2 < param_3 && 0 < (int)uVar6);
    }
    if ((int)uVar6 < 1) {
      uVar6 = 0;
      *(undefined1 *)(param_1 + 0x17) = 3;
    }
    goto joined_r0x037f8a9c;
  }
  goto joined_r0x037f8a9c;
}

