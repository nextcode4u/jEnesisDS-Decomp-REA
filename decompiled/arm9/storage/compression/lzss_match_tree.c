/* ARM9 lzss match tree — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x0200c5d8  initialize_lzss_match_trees

void initialize_lzss_match_trees(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_023eaef4;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0x1000;
    puVar2 = puVar1;
  } while (puVar1 != (undefined4 *)0x23eb2f4);
  puVar2 = &DAT_023e2eec;
  do {
    puVar1 = puVar2 + 1;
    *puVar2 = 0x1000;
    puVar2 = puVar1;
  } while (puVar1 != (undefined4 *)0x23e6eec);
  return;
}


// 0x0200c610  insert_lzss_match_tree_node

void insert_lzss_match_tree_node(int param_1)

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


// 0x0200c75c  remove_lzss_match_tree_node

void remove_lzss_match_tree_node(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((&DAT_023e2eec)[param_1] == 0x1000) {
    return;
  }
  iVar4 = *(int *)(&DAT_023e6ef0 + param_1 * 4);
  if (iVar4 == 0x1000) {
    iVar4 = *(int *)(&DAT_023deee4 + param_1 * 4);
  }
  else {
    iVar1 = *(int *)(&DAT_023deee4 + param_1 * 4);
    if (iVar1 != 0x1000) {
      iVar4 = iVar1;
      if (*(int *)(&DAT_023e6ef0 + iVar1 * 4) != 0x1000) {
        do {
          iVar4 = *(int *)(&DAT_023e6ef0 + iVar4 * 4);
        } while (*(int *)(&DAT_023e6ef0 + iVar4 * 4) != 0x1000);
        iVar3 = *(int *)(&DAT_023deee4 + iVar4 * 4);
        *(int *)(&DAT_023deee4 + iVar4 * 4) = iVar1;
        iVar2 = (&DAT_023e2eec)[iVar4];
        iVar1 = *(int *)(&DAT_023deee4 + param_1 * 4);
        (&DAT_023e2eec)[iVar3] = iVar2;
        *(int *)(&DAT_023e6ef0 + iVar2 * 4) = iVar3;
        (&DAT_023e2eec)[iVar1] = iVar4;
      }
      *(undefined4 *)(&DAT_023e6ef0 + iVar4 * 4) = *(undefined4 *)(&DAT_023e6ef0 + param_1 * 4);
      (&DAT_023e2eec)[*(int *)(&DAT_023e6ef0 + param_1 * 4)] = iVar4;
    }
  }
  (&DAT_023e2eec)[iVar4] = (&DAT_023e2eec)[param_1];
  iVar1 = (&DAT_023e2eec)[param_1];
  if (param_1 == *(int *)(&DAT_023e6ef0 + iVar1 * 4)) {
    *(int *)(&DAT_023e6ef0 + iVar1 * 4) = iVar4;
  }
  else {
    *(int *)(&DAT_023deee4 + iVar1 * 4) = iVar4;
  }
  (&DAT_023e2eec)[param_1] = 0x1000;
  return;
}

