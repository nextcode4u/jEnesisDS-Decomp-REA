// Analysis annotation
// Role — fat fat directory addentry
// Basis — library match
// Matches symbol _FAT_directory_addEntry in libfat-nds 20070127 (directory.o) after
// masking relocation fields.

// rea decompile_all
// name: FUN_0207f5bc
// address: 0x207f5bc
// body: available
// range: 0x207f5bc-0x207f98d inclusive
// range: 0x207f99c-0x207fb6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: ee07897cf0d8c1f32e8434e3e0eb5f18c1cf8a29342632ece9fdf7c42dcbeda6
// limitations: This session opens a caller-selected existing Ghidra project through a private copy, without import, auto-analysis or repair scripts. Original analysis completeness and settings are unknown.; The original project is never opened by Ghidra or modified. The private copy is read-only to bridge operations and deleted on close; original executable bytes are never written.; The analysis profile records the selected project content fingerprint and program name. The imported program SHA-256 must match the admitted target; the project may contain caller annotations or earlier edits, which are not fresh REA discoveries.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0207f5bc(int param_1,byte *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int *piVar5;
  char extraout_r1;
  char extraout_r1_00;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  byte *pbVar12;
  int local_a8;
  uint local_a4;
  byte local_99 [11];
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_7f;
  undefined1 local_7e;
  byte local_79 [32];
  byte local_59 [8];
  byte local_51;
  byte local_50 [4];
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  uint local_34;
  int local_30;
  int local_2c;
  
  pbVar12 = param_2 + 0x38;
  iVar2 = thunk_FUN_02083ed0(pbVar12,0x100);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_0207f2d4(pbVar12);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = thunk_FUN_02083a6c(pbVar12);
  iVar7 = iVar2 + -1;
  if ((0 < iVar7) && (param_2[iVar2 + 0x37] == 0x20)) {
    pbVar3 = param_2 + iVar2 + 0x37;
    do {
      iVar7 = iVar7 + -1;
      *pbVar3 = 0;
      if (iVar7 < 1) break;
      pbVar8 = pbVar3 + -1;
      pbVar3 = pbVar3 + -1;
    } while (*pbVar8 == 0x20);
  }
  iVar2 = thunk_FUN_02083a6c(pbVar12);
  for (iVar7 = 0; (iVar7 != iVar2 && (param_2[iVar7 + 0x38] == 0x20)); iVar7 = iVar7 + 1) {
  }
  if (0 < iVar7) {
    uVar4 = thunk_FUN_02083a6c(pbVar12 + iVar7);
    thunk_FUN_02082f5c(pbVar12,pbVar12 + iVar7,uVar4);
  }
  iVar2 = thunk_FUN_02083a6c(pbVar12);
  thunk_FUN_02083058(pbVar12 + iVar2,0,0x100 - iVar2);
  iVar2 = FUN_0207efe4(param_1,pbVar12,param_3);
  if (iVar2 != 0) {
    return 0;
  }
  thunk_FUN_02083058(param_2,0x20,0xb);
  iVar2 = thunk_FUN_02083c80(pbVar12,&DAT_0208f224,0x100);
  local_4c = param_3;
  local_40 = param_3;
  if (iVar2 == 0) {
    *param_2 = 0x2e;
  }
  else {
    iVar2 = thunk_FUN_02083c80(pbVar12,&DAT_0208f254,0x100);
    if (iVar2 != 0) {
      iVar2 = FUN_0207f238(pbVar12);
      if (iVar2 != 0) {
        thunk_FUN_02083fb8(pbVar12);
        iVar2 = 0;
        do {
          pbVar3 = param_2 + iVar2;
          bVar6 = pbVar3[0x38];
          pbVar12 = pbVar3;
          iVar7 = iVar2;
          if ((bVar6 == 0x2e) || (bVar6 == 0)) goto joined_r0x0207faf0;
          iVar2 = iVar2 + 1;
          *pbVar3 = bVar6;
        } while (iVar2 != 8);
        iVar7 = 8;
        pbVar3 = param_2 + 8;
        goto LAB_0207f944;
      }
      iVar2 = thunk_FUN_02083ed0(pbVar12,0x100);
      pbVar3 = (byte *)thunk_FUN_02083f68(pbVar12,0x2e);
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)thunk_FUN_020836d4(pbVar12,0);
      }
      iVar9 = 0;
      for (iVar7 = 0; pbVar12 + iVar7 < pbVar3; iVar7 = iVar7 + 1) {
        if (((&DAT_0208ee85)[param_2[iVar7 + 0x38]] & 7) != 0) {
          local_59[iVar9] = param_2[iVar7 + 0x38];
          iVar9 = iVar9 + 1;
        }
        if (5 < iVar9) break;
      }
      if (iVar9 < 8) {
        pbVar3 = local_59 + iVar9;
        do {
          *pbVar3 = 0x5f;
          pbVar3 = pbVar3 + 1;
        } while (pbVar3 != &local_51);
        iVar9 = 8;
      }
      pbVar12 = (byte *)thunk_FUN_02083f68(pbVar12,0x2e);
      if (pbVar12 == (byte *)0x0) {
        local_51 = 0;
        local_50[0] = local_51;
        local_50[1] = local_51;
        local_50[2] = local_51;
        local_50[3] = local_51;
      }
      else {
        local_51 = 0x2e;
        if (iVar9 < 0xc) {
          pbVar3 = pbVar12 + 1;
          local_59[iVar9] = *pbVar12;
          iVar9 = iVar9 + 1;
          if (pbVar3 != (byte *)0x0) {
            pbVar12 = local_59 + iVar9;
            do {
              if (iVar9 == 0xc) break;
              bVar6 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              *pbVar12 = bVar6;
              iVar9 = iVar9 + 1;
              pbVar12 = pbVar12 + 1;
            } while (pbVar3 != (byte *)0x0);
          }
        }
        local_59[iVar9] = 0;
      }
      local_59[5] = 0x7e;
      iVar7 = 0;
      while( true ) {
        iVar7 = iVar7 + 1;
        uVar4 = thunk_FUN_02080494(iVar7,10);
        thunk_FUN_020805c0(uVar4,10);
        local_59[6] = extraout_r1 + '0';
        thunk_FUN_020805c0(iVar7,10);
        local_59[7] = extraout_r1_00 + '0';
        iVar9 = FUN_0207efe4(param_1,local_59,param_3);
        if (iVar9 == 0) break;
        if (iVar7 == 100) {
          return 0;
        }
      }
      if (iVar7 == 100) {
        return 0;
      }
      thunk_FUN_02083fb8(local_59);
      thunk_FUN_02082ec0(param_2,local_59,8);
      thunk_FUN_02082ec0(param_2 + 8,local_50,3);
      iVar7 = 0;
      do {
        if (param_2[iVar7] < 0x20) {
          param_2[iVar7] = 0x20;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 10);
      local_a4 = (uint)*param_2;
      iVar7 = 1;
      do {
        if ((int)(local_a4 << 0x1f) < 0) {
          iVar9 = 0x80;
        }
        else {
          iVar9 = 0;
        }
        pbVar12 = param_2 + iVar7;
        iVar7 = iVar7 + 1;
        local_a4 = iVar9 + (local_a4 >> 1) + (uint)*pbVar12 & 0xff;
      } while (iVar7 != 0xb);
      local_a8 = thunk_FUN_02080380(iVar2 + 0xc,0xd);
      local_a8 = local_a8 + 1;
      local_44 = 0;
      local_48 = 0;
      iStack_3c = 0;
      iStack_38 = 0;
      if (local_a8 == 0) goto LAB_0207f7b0;
      goto LAB_0207f6c4;
    }
    *param_2 = 0x2e;
    param_2[1] = 0x2e;
  }
LAB_0207f6a6:
  local_a8 = 1;
  local_a4 = 0;
LAB_0207f6c4:
  iStack_38 = 0;
  iStack_3c = 0;
  local_44 = 0;
  local_48 = 0;
  iVar7 = 1;
  iVar2 = local_a8;
  do {
    if (local_4c < 2) {
      iVar9 = *(int *)(param_1 + 0x10);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x24) * (local_4c - 2) + *(int *)(param_1 + 0x1c);
    }
    FUN_0207d06c(*(undefined4 *)(param_1 + 4),local_79,iVar9 + local_48,local_44 << 5,0x20);
    puVar10 = (uint *)(uint)local_79[0];
    if (puVar10 == (uint *)0x0) {
      local_40 = local_4c;
      iStack_3c = local_48;
      iStack_38 = local_44;
      iVar9 = iVar2 + -1;
      bVar1 = true;
    }
    else {
      iVar9 = local_a8;
      if (puVar10 == (uint *)0xe5) {
        if (local_a8 == iVar2) {
          local_40 = local_4c;
          iStack_3c = local_48;
          iStack_38 = local_44;
          puVar10 = &local_40;
        }
        iVar9 = iVar2 + -1;
        if (iVar9 == 0) {
          bVar1 = false;
          goto LAB_0207f6dc;
        }
      }
      iVar7 = FUN_0207ed90(param_1,&local_4c,1,puVar10);
      bVar1 = false;
    }
LAB_0207f6dc:
    if (iVar7 == 0) {
      return 0;
    }
    if (bVar1) {
      *(uint *)(param_2 + 0x20) = local_40;
      *(int *)(param_2 + 0x24) = iStack_3c;
      *(int *)(param_2 + 0x28) = iStack_38;
      iVar9 = iVar9 + 1;
      thunk_FUN_02083058(local_79,0,0x20);
      if (iVar9 != 0) {
        while( true ) {
          *(uint *)(param_2 + 0x2c) = local_4c;
          *(int *)(param_2 + 0x30) = local_48;
          *(int *)(param_2 + 0x34) = local_44;
          iVar2 = FUN_0207ed90(param_1,&local_4c,1,&local_40);
          iVar9 = iVar9 + -1;
          if (local_4c < 2) {
            iVar7 = *(int *)(param_1 + 0x10);
          }
          else {
            iVar7 = *(int *)(param_1 + 0x24) * (local_4c - 2) + *(int *)(param_1 + 0x1c);
          }
          FUN_0207d020(*(undefined4 *)(param_1 + 4),local_79,iVar7 + local_48,local_44 << 5,0x20);
          if (iVar9 == 0) break;
          if (iVar2 == 0) {
            return 0;
          }
        }
        if (iVar2 == 0) {
          return 0;
        }
      }
      goto LAB_0207f7c6;
    }
    iVar2 = iVar9;
  } while (iVar9 != 0);
LAB_0207f7b0:
  *(uint *)(param_2 + 0x20) = local_40;
  *(int *)(param_2 + 0x24) = iStack_3c;
  *(int *)(param_2 + 0x28) = iStack_38;
  *(uint *)(param_2 + 0x2c) = local_4c;
  *(int *)(param_2 + 0x30) = local_48;
  *(int *)(param_2 + 0x34) = local_44;
LAB_0207f7c6:
  local_34 = *(uint *)(param_2 + 0x20);
  local_30 = *(int *)(param_2 + 0x24);
  local_2c = *(int *)(param_2 + 0x28);
  if (0 < local_a8) {
    iVar7 = local_a8 * 0xd + -0x1a;
    iVar2 = local_a8;
    do {
      if (iVar2 == 1) {
        if (local_34 < 2) {
          iVar9 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
        }
        FUN_0207d020(*(undefined4 *)(param_1 + 4),param_2,iVar9 + local_30,local_2c << 5,0x20);
      }
      else {
        if (iVar2 == local_a8) {
          local_99[0] = 0x40;
        }
        else {
          local_99[0] = 0;
        }
        local_99[0] = (char)iVar2 - 1U | local_99[0];
        pbVar12 = param_2 + iVar7 + 0x38;
        iVar9 = 0;
        piVar5 = &DAT_0208ee48;
        do {
          while (*pbVar12 == 0) {
            if ((iVar9 < 2) || (pbVar12[-1] != 0)) {
              iVar11 = *piVar5;
              local_99[iVar11] = 0;
              local_99[iVar11 + 1] = 0;
            }
            else {
              iVar11 = *piVar5;
              local_99[iVar11] = 0xff;
              local_99[iVar11 + 1] = 0xff;
            }
            iVar9 = iVar9 + 1;
            pbVar12 = pbVar12 + 1;
            piVar5 = piVar5 + 1;
            if (iVar9 == 0xd) goto LAB_0207f84c;
          }
          iVar11 = *piVar5;
          iVar9 = iVar9 + 1;
          local_99[iVar11] = *pbVar12;
          local_99[iVar11 + 1] = 0;
          pbVar12 = pbVar12 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar9 != 0xd);
LAB_0207f84c:
        local_8c = (undefined1)local_a4;
        local_8e = 0xf;
        local_8d = 0;
        local_7f = 0;
        local_7e = 0;
        if (local_34 < 2) {
          iVar9 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar9 = *(int *)(param_1 + 0x24) * (local_34 - 2) + *(int *)(param_1 + 0x1c);
        }
        FUN_0207d020(*(undefined4 *)(param_1 + 4),local_99,iVar9 + local_30,local_2c << 5,0x20);
      }
      iVar9 = FUN_0207ed90(param_1,&local_34,0);
      if (iVar9 == 0) {
        return 1;
      }
      iVar2 = iVar2 + -1;
      iVar7 = iVar7 + -0xd;
    } while (iVar2 != 0);
  }
  return 1;
joined_r0x0207faf0:
  for (; iVar7 < 8; iVar7 = iVar7 + 1) {
    *pbVar12 = 0x20;
    pbVar12 = pbVar12 + 1;
  }
LAB_0207f944:
  if ((pbVar3[0x38] != 0x2e) || (bVar6 = pbVar3[0x39], bVar6 == 0)) {
LAB_0207f950:
    if (iVar7 < 0xb) {
      pbVar12 = param_2 + iVar7;
      do {
        iVar7 = iVar7 + 1;
        *pbVar12 = 0x20;
        pbVar12 = pbVar12 + 1;
      } while (iVar7 != 0xb);
    }
    goto LAB_0207f6a6;
  }
  if (iVar7 < 0xb) {
    pbVar12 = param_2 + iVar7;
    pbVar3 = param_2 + iVar2 + 0x3a;
    do {
      *pbVar12 = bVar6;
      bVar6 = *pbVar3;
      iVar7 = iVar7 + 1;
      if (bVar6 == 0) goto LAB_0207f950;
      pbVar12 = pbVar12 + 1;
      pbVar3 = pbVar3 + 1;
    } while (iVar7 != 0xb);
  }
  local_a8 = 1;
  local_a4 = 0;
  goto LAB_0207f6c4;
}

