// Analysis annotation
// Role — write ym2612 channel or operator register
// Basis — reviewed
// Decodes the register bank, channel and operator, then updates pitch, envelope,
// modulation or routing fields.

// rea decompile_all
// name: FUN_037f8e1c
// address: 0x37f8e1c
// body: available
// range: 0x37f8e1c-0x37f90eb inclusive
// range: 0x37f90fc-0x37f91ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 86376d653c61558e4fc8faf5f16c223257ce70d2791186210823024423df301b
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_037f8e1c(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar8 = param_1 & 3;
  if (uVar8 == 3) goto switchD_037f90e4_default;
  if (0xff < (int)param_1) {
    uVar8 = uVar8 + 3;
  }
  uVar11 = (int)param_1 >> 2 & 3;
  uVar4 = param_1 & 0xf0;
  iVar6 = uVar8 * 0xd8;
  puVar9 = &DAT_03807308 + uVar8 * 0x36 + uVar11 * 0xc;
  if (uVar4 == 0x60) {
    param_2 = param_2 & 0x1f;
    if (param_2 != 0) {
      iVar6 = param_2 << 1;
    }
    else {
      iVar6 = 0;
    }
    if (param_2 != 0) {
      iVar6 = iVar6 + 0x20;
    }
    iVar3 = iVar6 + (uint)*(byte *)((int)puVar9 + 0x15);
    puVar9[9] = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[iVar3] * 4) |
                (uint)(byte)(&DAT_03806b28)[iVar3] << 0x18;
    *(char *)((int)puVar9 + 5) = (char)iVar6;
    return 1;
  }
  if (uVar4 < 0x61) {
    if (uVar4 == 0x40) {
      *(short *)(puVar9 + 6) = (short)((param_2 & 0x7f) << 3);
      return 1;
    }
    if (uVar4 == 0x50) {
      if ((param_2 & 0x1f) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (param_2 & 0x1f) * 2 + 0x20;
      }
      uVar11 = 3 - ((int)param_2 >> 6);
      uVar7 = uVar11 & 0xff;
      bVar12 = *(byte *)(puVar9 + 5) != uVar7;
      *(char *)(puVar9 + 5) = (char)uVar11;
      if (bVar12) {
        uVar7 = 0xffffffff;
      }
      *(char *)(puVar9 + 1) = (char)uVar4;
      if (!bVar12) {
        uVar8 = (uint)*(byte *)(puVar9 + 1) + (uint)*(byte *)((int)puVar9 + 0x15);
        if (uVar8 < 0x5e) {
          uVar4 = (uint)(byte)(&DAT_03806b28)[uVar8];
          uVar11 = (uint)(byte)(&DAT_03806ba8)[uVar8];
        }
        else {
          uVar11 = 0x11;
        }
        if (uVar8 < 0x5e) {
          uVar4 = uVar4 << 0x18;
        }
        else {
          uVar4 = 0;
        }
        puVar9[8] = uVar4 | *(uint *)(&DAT_03806c28 + uVar11 * 4);
        return 1;
      }
      (&DAT_03807318)[uVar8 * 0x36] = uVar7;
      return 1;
    }
    if (uVar4 == 0x30) {
      uVar4 = param_2 & 0xf;
      iVar6 = 0x30;
      if (uVar4 != 0) {
        iVar6 = uVar4 << 1;
      }
      if (uVar4 == 0) {
        iVar6 = 1;
      }
      *puVar9 = &DAT_03806ed4 + (param_2 & 0x70) * 8;
      (&DAT_03807318)[uVar8 * 0x36] = 0xffffffff;
      puVar9[2] = iVar6;
      return 1;
    }
    goto switchD_037f90e4_default;
  }
  if (uVar4 == 0x80) {
    iVar6 = (param_2 & 0xf) * 4 + 0x22;
    iVar3 = iVar6 + (uint)*(byte *)((int)puVar9 + 0x15);
    uVar10 = *(undefined4 *)(&DAT_03806c74 + ((int)param_2 >> 4) * 4);
    puVar9[0xb] = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[iVar3] * 4) |
                  (uint)(byte)(&DAT_03806b28)[iVar3] << 0x18;
    puVar9[7] = uVar10;
    *(char *)((int)puVar9 + 7) = (char)iVar6;
    return 1;
  }
  if (uVar4 < 0x81) {
    if (uVar4 == 0x70) {
      param_2 = param_2 & 0x1f;
      if (param_2 != 0) {
        iVar6 = param_2 << 1;
      }
      else {
        iVar6 = 0;
      }
      if (param_2 != 0) {
        iVar6 = iVar6 + 0x20;
      }
      iVar3 = iVar6 + (uint)*(byte *)((int)puVar9 + 0x15);
      puVar9[10] = *(uint *)(&DAT_03806c28 + (uint)(byte)(&DAT_03806ba8)[iVar3] * 4) |
                   (uint)(byte)(&DAT_03806b28)[iVar3] << 0x18;
      *(char *)((int)puVar9 + 6) = (char)iVar6;
      return 1;
    }
    goto switchD_037f90e4_default;
  }
  bVar1 = (byte)param_2;
  if (uVar4 != 0xa0) {
    if (uVar4 == 0xb0) {
      if (uVar11 == 0) {
        uVar8 = (int)param_2 >> 3 & 7;
        cVar5 = (char)uVar8;
        if (uVar8 != 0) {
          cVar5 = cVar5 + '\x06';
        }
        (&DAT_038073c8)[iVar6] = bVar1 & 7;
        (&DAT_038073c9)[iVar6] = cVar5;
        return 1;
      }
      if (uVar11 == 1) {
        iVar6 = (int)(param_2 & 0xc0) >> 6;
        DAT_038072f4 = DAT_038072f4 & ~(3 << uVar8 * 2) | iVar6 << uVar8 * 2;
        if (*(int *)(&DAT_04000400 + uVar8 * 0x10) < 0) {
          uVar4 = *(uint *)(&DAT_03806b18 + iVar6 * 4) | 0xa8000000 |
                  *(int *)(&DAT_03806b08 + iVar6 * 4) << 0x10;
          *(uint *)(&DAT_04000400 + uVar8 * 0x10) = uVar4;
          *(uint *)(&DAT_04000400 + (uVar8 + 6) * 0x10) = uVar4;
          return 1;
        }
        goto LAB_037f90d8;
      }
    }
    goto switchD_037f90e4_default;
  }
  switch(uVar11) {
  case 0:
    param_2 = param_2 + (DAT_03806ebb & 7) * 0x100;
    uVar4 = (&DAT_03807820)[param_2 * 2];
    bVar2 = DAT_03806ebb >> 3;
    bVar1 = (&DAT_03806af8)[param_2 >> 7];
    uVar10 = 1;
    (&DAT_03807318)[uVar8 * 0x36] = 0xffffffff;
    (&DAT_038073d4)[iVar6] = bVar1 | bVar2 << 2;
    (&DAT_038073d8)[uVar8 * 0x36] = uVar4 >> (7 - bVar2 & 0xff);
    break;
  case 1:
    DAT_03806ebb = bVar1 & 0x3f;
    uVar10 = 0;
    break;
  case 2:
    if ((int)param_1 < 0x100) {
      param_2 = param_2 + (DAT_038072e4 & 7) * 0x100;
      uVar4 = (&DAT_03807820)[param_2 * 2];
      bVar1 = DAT_038072e4 >> 3;
      (&DAT_038072e5)[uVar8] = (&DAT_03806af8)[param_2 >> 7] | bVar1 << 2;
      *(uint *)(&DAT_038072e8 + uVar8 * 4) = param_2;
      (&DAT_038072d8)[uVar8] = uVar4 >> (7 - bVar1 & 0xff);
      DAT_038074c8 = 0xffffffff;
      return 1;
    }
LAB_037f90d8:
    uVar10 = 1;
    break;
  case 3:
    if ((int)param_1 < 0x100) {
      DAT_038072e4 = bVar1 & 0x3f;
      return 0;
    }
  default:
switchD_037f90e4_default:
    uVar10 = 0;
  }
  return uVar10;
}

