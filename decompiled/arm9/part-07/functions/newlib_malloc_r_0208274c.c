// Analysis annotation
// Role — newlib malloc r
// Basis — library match
// Matches symbol _malloc_r in devkitARM r20 libc.a (lib_a-mallocr.o) after masking
// relocation fields.

// rea decompile_all
// name: FUN_0208274c
// address: 0x208274c
// body: available
// range: 0x208274c-0x2082ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

int * FUN_0208274c(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  
  uVar8 = param_2 + 0xb;
  if (uVar8 < 0x17) {
    uVar14 = 0x10;
    uVar8 = 0;
  }
  else {
    uVar14 = uVar8 & 0xfffffff8;
    uVar8 = uVar8 >> 0x1f;
  }
  if (uVar14 < param_2) {
    uVar8 = 1;
  }
  if (uVar8 != 0) {
    *param_1 = 0xc;
    return (int *)0x0;
  }
  FUN_020830f0(param_1);
  puVar15 = DAT_0208f7c0;
  if (uVar14 < 0x1f8) {
    uVar8 = uVar14 >> 3;
    puVar12 = (undefined *)(&DAT_0208f7bc)[uVar8 * 2];
    if ((&DAT_0208f7b0 + uVar8 * 8 != puVar12) ||
       (puVar11 = puVar12 + 8, puVar12 = *(undefined **)(puVar12 + 0x14), puVar11 != puVar12)) {
      uVar14 = *(uint *)(puVar12 + 4);
      uVar8 = *(uint *)(puVar12 + (uVar14 & 0xfffffffc) + 4);
      iVar1 = *(int *)(puVar12 + 0xc);
      iVar4 = *(int *)(puVar12 + 8);
      *(int *)(iVar1 + 8) = iVar4;
      *(int *)(iVar4 + 0xc) = iVar1;
      *(uint *)(puVar12 + (uVar14 & 0xfffffffc) + 4) = uVar8 | 1;
      FUN_020830f4(param_1);
      return (int *)(puVar12 + 8);
    }
    uVar8 = uVar8 + 2;
  }
  else {
    uVar8 = uVar14 >> 9;
    if (uVar8 == 0) {
      uVar8 = uVar14 >> 3;
      iVar1 = uVar8 << 3;
    }
    else if (uVar8 < 5) {
      uVar8 = (uVar14 >> 6) + 0x38;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x15) {
      uVar8 = uVar8 + 0x5b;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x55) {
      uVar8 = (uVar14 >> 0xc) + 0x6e;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x155) {
      uVar8 = (uVar14 >> 0xf) + 0x77;
      iVar1 = uVar8 * 8;
    }
    else if (uVar8 < 0x555) {
      uVar8 = (uVar14 >> 0x12) + 0x7c;
      iVar1 = uVar8 * 8;
    }
    else {
      uVar8 = 0x7e;
      iVar1 = 0x3f0;
    }
    for (puVar12 = *(undefined **)((int)&DAT_0208f7bc + iVar1); &DAT_0208f7b0 + iVar1 != puVar12;
        puVar12 = *(undefined **)(puVar12 + 0xc)) {
      uVar2 = *(uint *)(puVar12 + 4) & 0xfffffffc;
      if (0xf < (int)(uVar2 - uVar14)) {
        uVar8 = uVar8 - 1;
        break;
      }
      if (-1 < (int)(uVar2 - uVar14)) {
        iVar1 = *(int *)(puVar12 + 0xc);
        iVar4 = *(int *)(puVar12 + 8);
        *(uint *)(puVar12 + uVar2 + 4) = *(uint *)(puVar12 + uVar2 + 4) | 1;
        *(int *)(iVar1 + 8) = iVar4;
        *(int *)(iVar4 + 0xc) = iVar1;
        FUN_020830f4(param_1);
        return (int *)(puVar12 + 8);
      }
    }
    uVar8 = uVar8 + 1;
  }
  uVar2 = DAT_0208f7b4;
  if ((undefined **)DAT_0208f7c0 != &DAT_0208f7b8) {
    uVar9 = DAT_0208f7c0[1];
    uVar7 = uVar9 & 0xfffffffc;
    uVar2 = uVar7 - uVar14;
    if (0xf < (int)uVar2) {
      iVar1 = (int)DAT_0208f7c0 + uVar14;
      *(uint *)(iVar1 + uVar2) = uVar2;
      DAT_0208f7c0[1] = uVar14 | 1;
      DAT_0208f7c0 = (undefined4 *)iVar1;
      DAT_0208f7c4 = (undefined4 *)iVar1;
      *(uint *)(iVar1 + 4) = uVar2 | 1;
      *(undefined ***)(iVar1 + 8) = &DAT_0208f7b8;
      *(undefined ***)(iVar1 + 0xc) = &DAT_0208f7b8;
      FUN_020830f4(param_1);
      return puVar15 + 2;
    }
    DAT_0208f7c4 = &DAT_0208f7b8;
    DAT_0208f7c0 = &DAT_0208f7b8;
    if (-1 < (int)uVar2) {
      *(uint *)((int)puVar15 + uVar7 + 4) = *(uint *)((int)puVar15 + uVar7 + 4) | 1;
      FUN_020830f4(param_1);
      return puVar15 + 2;
    }
    if (uVar7 < 0x200) {
      uVar2 = DAT_0208f7b4 | 1 << (uVar9 >> 5 & 0xff);
      uVar9 = uVar9 & 0xfffffff8;
      iVar1 = *(int *)((int)&DAT_0208f7b8 + uVar9);
      puVar15[3] = &DAT_0208f7b0 + uVar9;
      puVar15[2] = iVar1;
      DAT_0208f7b4 = uVar2;
      *(undefined4 **)(iVar1 + 0xc) = puVar15;
      *(undefined4 **)((int)&DAT_0208f7b8 + uVar9) = puVar15;
    }
    else {
      uVar2 = uVar9 >> 9;
      if (uVar2 == 0) {
        uVar9 = uVar9 >> 3;
        iVar1 = uVar9 << 3;
      }
      else if (uVar2 < 5) {
        uVar9 = (uVar9 >> 6) + 0x38;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x15) {
        uVar9 = uVar2 + 0x5b;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x55) {
        uVar9 = (uVar9 >> 0xc) + 0x6e;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x155) {
        uVar9 = (uVar9 >> 0xf) + 0x77;
        iVar1 = uVar9 * 8;
      }
      else if (uVar2 < 0x555) {
        uVar9 = (uVar9 >> 0x12) + 0x7c;
        iVar1 = uVar9 * 8;
      }
      else {
        uVar9 = 0x7e;
        iVar1 = 0x3f0;
      }
      puVar11 = &DAT_0208f7b0 + iVar1;
      puVar12 = *(undefined **)((int)&DAT_0208f7b8 + iVar1);
      if (puVar11 == puVar12) {
        DAT_0208f7b4 = DAT_0208f7b4 | 1 << (uVar9 >> 2 & 0xff);
      }
      else {
        do {
          if ((*(uint *)(puVar12 + 4) & 0xfffffffc) <= uVar7) break;
          puVar12 = *(undefined **)(puVar12 + 8);
        } while (puVar11 != puVar12);
        puVar11 = *(undefined **)(puVar12 + 0xc);
      }
      puVar15[3] = puVar11;
      puVar15[2] = puVar12;
      *(undefined4 **)(puVar12 + 0xc) = puVar15;
      *(undefined4 **)(puVar11 + 8) = puVar15;
      uVar2 = DAT_0208f7b4;
    }
  }
  puVar12 = DAT_0208f7b8;
  uVar9 = uVar8 + 3;
  if (-1 < (int)uVar8) {
    uVar9 = uVar8;
  }
  uVar9 = 1 << ((int)uVar9 >> 2 & 0xffU);
  if (uVar9 <= uVar2) {
    if ((uVar9 & uVar2) == 0) {
      uVar8 = uVar8 & 0xfffffffc;
      do {
        uVar9 = uVar9 << 1;
        uVar8 = uVar8 + 4;
      } while ((uVar2 & uVar9) == 0);
    }
    do {
      puVar15 = (undefined4 *)(&DAT_0208f7b0 + uVar8 * 8);
      puVar5 = puVar15;
      uVar7 = uVar8;
      while( true ) {
        for (puVar13 = (undefined4 *)puVar5[3]; puVar5 != puVar13;
            puVar13 = (undefined4 *)puVar13[3]) {
          uVar10 = puVar13[1] & 0xfffffffc;
          uVar16 = uVar10 - uVar14;
          if (0xf < (int)uVar16) {
            puVar12 = (undefined *)((int)puVar13 + uVar14);
            iVar1 = puVar13[3];
            puVar13[1] = uVar14 | 1;
            iVar4 = puVar13[2];
            *(int *)(iVar1 + 8) = iVar4;
            *(int *)(iVar4 + 0xc) = iVar1;
            DAT_0208f7c0 = (undefined4 *)puVar12;
            DAT_0208f7c4 = (undefined4 *)puVar12;
            *(uint *)(puVar12 + uVar16) = uVar16;
            *(uint *)(puVar12 + 4) = uVar16 | 1;
            *(undefined ***)(puVar12 + 8) = &DAT_0208f7b8;
            *(undefined ***)(puVar12 + 0xc) = &DAT_0208f7b8;
            FUN_020830f4(param_1);
            return puVar13 + 2;
          }
          if (-1 < (int)uVar16) {
            uVar8 = *(uint *)((int)puVar13 + uVar10 + 4);
            iVar1 = puVar13[3];
            iVar4 = puVar13[2];
            *(int *)(iVar1 + 8) = iVar4;
            *(int *)(iVar4 + 0xc) = iVar1;
            *(uint *)((int)puVar13 + uVar10 + 4) = uVar8 | 1;
            FUN_020830f4(param_1);
            return puVar13 + 2;
          }
        }
        uVar7 = uVar7 + 1;
        if ((uVar7 & 3) == 0) break;
        puVar5 = puVar5 + 2;
      }
      do {
        uVar10 = uVar8 & 3;
        puVar5 = puVar15 + -2;
        uVar8 = uVar8 - 1;
        if (uVar10 == 0) {
          uVar2 = uVar2 & ~uVar9;
          DAT_0208f7b4 = uVar2;
          break;
        }
        puVar13 = (undefined4 *)*puVar15;
        puVar15 = puVar5;
      } while (puVar13 == puVar5);
      uVar9 = uVar9 * 2;
      if ((uVar2 < uVar9) || (uVar8 = uVar7, uVar9 == 0)) break;
      for (; (uVar9 & uVar2) == 0; uVar9 = uVar9 << 1) {
        uVar8 = uVar8 + 4;
      }
    } while( true );
  }
  uVar2 = *(uint *)(DAT_0208f7b8 + 4) & 0xfffffffc;
  uVar8 = uVar2 - uVar14;
  puVar11 = DAT_0208f7b8;
  if (uVar14 <= uVar2 && 0xf < (int)uVar8) goto LAB_02082bdc;
  uVar8 = uVar14 + DAT_020b4ca8 + 0x10;
  if (DAT_0208fbbc != (undefined *)0xffffffff) {
    uVar8 = uVar8 + 0xfff & 0xfffff000;
  }
  puVar3 = (undefined *)FUN_020834c8(param_1,uVar8);
  puVar11 = DAT_0208f7b8;
  if (puVar3 != (undefined *)0xffffffff) {
    puVar6 = puVar12 + uVar2;
    if (puVar3 < puVar6) {
      if (puVar12 != &DAT_0208f7b0) goto LAB_02082ba4;
LAB_02082cbc:
      DAT_020b4cb4 = DAT_020b4cb4 + uVar8;
      puVar11 = puVar3;
      if (DAT_0208fbbc != (undefined *)0xffffffff) {
        DAT_020b4cb4 = puVar3 + ((int)DAT_020b4cb4 - (int)puVar6);
        puVar11 = DAT_0208fbbc;
      }
      DAT_0208fbbc = puVar11;
      if (((uint)puVar3 & 7) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = 8 - ((uint)puVar3 & 7);
        puVar3 = puVar3 + iVar1;
      }
      iVar1 = iVar1 + (0x1000 - ((uint)(puVar3 + uVar8) & 0xfff));
      iVar4 = FUN_020834c8(param_1,iVar1);
      if (iVar4 == -1) {
        iVar1 = 0;
        uVar8 = 1;
      }
      else {
        uVar8 = (iVar4 - (int)puVar3) + iVar1 | 1;
      }
      DAT_020b4cb4 = DAT_020b4cb4 + iVar1;
      *(uint *)(puVar3 + 4) = uVar8;
      puVar11 = puVar3;
      DAT_0208f7b8 = puVar3;
      if (puVar12 != &DAT_0208f7b0) {
        if (uVar2 < 0x10) {
          *(undefined4 *)(puVar3 + 4) = 1;
          goto LAB_02082ba4;
        }
        uVar8 = uVar2 - 0xc & 0xfffffff8;
        *(undefined4 *)(puVar12 + uVar8 + 8) = 5;
        *(undefined4 *)(puVar12 + uVar8 + 4) = 5;
        *(uint *)(puVar12 + 4) = uVar8 | *(uint *)(puVar12 + 4) & 1;
        if (0xf < uVar8) {
          FUN_020818d4(param_1,puVar12 + 8);
          puVar11 = DAT_0208f7b8;
        }
      }
    }
    else {
      if ((puVar6 != puVar3) || (((uint)puVar3 & 0xfff) != 0)) goto LAB_02082cbc;
      DAT_020b4cb4 = DAT_020b4cb4 + uVar8;
      *(uint *)(DAT_0208f7b8 + 4) = uVar8 + uVar2 | 1;
    }
    if (DAT_020b4cac < DAT_020b4cb4) {
      DAT_020b4cac = DAT_020b4cb4;
    }
    if (DAT_020b4cb0 < DAT_020b4cb4) {
      DAT_020b4cb0 = DAT_020b4cb4;
    }
  }
LAB_02082ba4:
  uVar8 = (*(uint *)(puVar11 + 4) & 0xfffffffc) - uVar14;
  if ((*(uint *)(puVar11 + 4) & 0xfffffffc) < uVar14 || (int)uVar8 < 0x10) {
    FUN_020830f4(param_1);
    return (int *)0x0;
  }
LAB_02082bdc:
  DAT_0208f7b8 = puVar11 + uVar14;
  *(uint *)(puVar11 + 4) = uVar14 | 1;
  *(uint *)(DAT_0208f7b8 + 4) = uVar8 | 1;
  FUN_020830f4(param_1);
  return (int *)(puVar11 + 8);
}

