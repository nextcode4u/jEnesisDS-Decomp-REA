/* ARM9 data transfer — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x01003d0c  m68k_moveq

void m68k_dispatch_01003d0c(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = (int)(char)unaff_r11;
                    /* WARNING: Could not recover jumptable at 0x01003d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x01003ddc  m68k_movea_long

void m68k_dispatch_01003ddc(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040fc(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x01003e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x01003e04  m68k_movea_long

void m68k_dispatch_01003e04(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) =
       *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + 4;
  uVar1 = FUN_010040fc();
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x01003e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x01003e34  m68k_lea_long

void m68k_dispatch_01003e34(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)*unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x01003e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x01003e50  m68k_lea_long

void m68k_dispatch_01003e50(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x01003e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x01004030  m68k_move

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_01004030(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar7;
  
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) != 0) {
    uVar1 = *unaff_r10;
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x01004054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)uVar1 * 4))();
    return iVar3;
  }
  iVar3 = unaff_r7 + -0x22;
  uVar4 = *(uint *)(unaff_r6 + 0x50);
  iVar7 = *(int *)(unaff_r6 + 0x54);
  if ((uVar4 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar4 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar4 | (ushort)iVar3 & 0x1f;
  uVar4 = (int)unaff_r10 - iVar7 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar4 >> 0x10);
  puVar6[2] = (ushort)uVar4;
  iVar7 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar7 + 0x20);
  uVar2 = *(undefined2 *)(iVar7 + 0x22);
  if ((uVar1 & 0xc0) == 0) {
    uVar4 = 0xffc00000;
    unaff_r8 = iVar7;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar4;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar6 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar4));
  if (iVar3 >> 0x10 < 1) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar6;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
  return iVar3;
}


// 0x01004058  m68k_move

/* WARNING: Removing unreachable block (ram,0x02016cd4) */
/* WARNING: Removing unreachable block (ram,0x02016cdc) */
/* WARNING: Removing unreachable block (ram,0x02016ce0) */

int m68k_dispatch_01004058(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  int iVar7;
  
  if ((*(uint *)(unaff_r6 + 0x50) & 0x2000) != 0) {
    uVar1 = *unaff_r10;
    *(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) = *(undefined4 *)(unaff_r6 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x0100407c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(unaff_r9 + (uint)uVar1 * 4))();
    return iVar3;
  }
  iVar3 = unaff_r7 + -0x22;
  uVar4 = *(uint *)(unaff_r6 + 0x50);
  iVar7 = *(int *)(unaff_r6 + 0x54);
  if ((uVar4 & 0x2000) == 0) {
    iVar5 = *(int *)(unaff_r6 + 0x48);
    *(undefined4 *)(unaff_r6 + 0x48) = *(undefined4 *)(unaff_r6 + 0x3c);
  }
  else {
    iVar5 = *(int *)(unaff_r6 + 0x3c);
  }
  *(uint *)(unaff_r6 + 0x3c) = iVar5 - 6U;
  *(uint *)(unaff_r6 + 0x50) = uVar4 & 0xff00 | 0x2000;
  puVar6 = (ushort *)(unaff_r8 + (iVar5 - 6U & 0xffff));
  *puVar6 = (ushort)uVar4 | (ushort)iVar3 & 0x1f;
  uVar4 = (int)unaff_r10 - iVar7 | *(uint *)(unaff_r6 + 0x9c);
  puVar6[1] = (ushort)(uVar4 >> 0x10);
  puVar6[2] = (ushort)uVar4;
  iVar7 = *(int *)(unaff_r6 + 0x60);
  uVar1 = *(ushort *)(iVar7 + 0x20);
  uVar2 = *(undefined2 *)(iVar7 + 0x22);
  if ((uVar1 & 0xc0) == 0) {
    uVar4 = 0xffc00000;
    unaff_r8 = iVar7;
  }
  else {
    uVar4 = 0xffff0000;
  }
  *(uint *)(unaff_r6 + 0x9c) = (uint)uVar1 << 0x10 & uVar4;
  *(int *)(unaff_r6 + 0x54) = unaff_r8;
  puVar6 = (ushort *)(unaff_r8 + (CONCAT22(uVar1,uVar2) & ~uVar4));
  if (iVar3 >> 0x10 < 1) {
    *(int *)(unaff_r6 + 0x4c) = iVar3;
    *(ushort **)(unaff_r6 + 0x44) = puVar6;
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x02016cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)*puVar6 * 4))();
  return iVar3;
}


// 0x0201c280  m68k_movea_word

void m68k_dispatch_0201c280(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)*(short *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0201c2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c2a4  m68k_movea_long

void m68k_dispatch_0201c2a4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(undefined4 *)(unaff_r6 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0201c2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c2c4  m68k_movea_word

void m68k_dispatch_0201c2c4(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       (int)*(short *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0201c2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c2ec  m68k_movea_long

void m68k_dispatch_0201c2ec(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0201c30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c310  m68k_movea_word

void m68k_dispatch_0201c310(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(*(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c340  m68k_movea_word

void m68k_dispatch_0201c340(void)

{
  short sVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + 2;
  sVar1 = FUN_010040c4();
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c37c  m68k_movea_word

void m68k_dispatch_0201c37c(void)

{
  short sVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + -2;
  sVar1 = FUN_010040c4();
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c3b8  m68k_movea_long

void m68k_dispatch_0201c3b8(void)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  piVar2 = (int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *piVar2 = *piVar2 + -4;
  uVar1 = FUN_010040fc();
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c3ec  m68k_movea_word

void m68k_dispatch_0201c3ec(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c424  m68k_movea_long

void m68k_dispatch_0201c424(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10);
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c454  m68k_movea_word

void m68k_dispatch_0201c454(void)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar1);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar1);
  }
  sVar3 = FUN_010040c4(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)sVar3;
                    /* WARNING: Could not recover jumptable at 0x0201c4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201c4b0  m68k_movea_long

void m68k_dispatch_0201c4b0(void)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar4 = unaff_r6;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar1);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar1);
  }
  uVar3 = FUN_010040fc(*(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar4);
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0201c500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201c504  m68k_movea_word

void m68k_dispatch_0201c504(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4((int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c52c  m68k_movea_long

void m68k_dispatch_0201c52c(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040fc((int)*unaff_r10);
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c54c  m68k_movea_word

void m68k_dispatch_0201c54c(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201c57c  m68k_movea_long

void m68k_dispatch_0201c57c(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040fc(CONCAT22(*unaff_r10,unaff_r10[1]));
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201c5a4  m68k_movea_word

void m68k_dispatch_0201c5a4(void)

{
  short sVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  sVar1 = FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)sVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c5e0  m68k_movea_long

void m68k_dispatch_0201c5e0(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)*unaff_r10);
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c614  m68k_movea_word

void m68k_dispatch_0201c614(void)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar1);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar1);
  }
  sVar3 = FUN_010040c4(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar4);
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)sVar3;
                    /* WARNING: Could not recover jumptable at 0x0201c674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201c678  m68k_movea_long

void m68k_dispatch_0201c678(void)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar4 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar4 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)(iVar4 + uVar1);
  }
  else {
    iVar4 = *(int *)(iVar4 + uVar1);
  }
  uVar3 = FUN_010040fc(((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
                       (int)(char)uVar2 + iVar4);
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0201c6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201c6d4  m68k_movea_word

void m68k_dispatch_0201c6d4(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = (int)*unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0201c6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c6f0  m68k_movea_long

void m68k_dispatch_0201c6f0(void)

{
  int unaff_r6;
  int unaff_r9;
  undefined2 *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) = CONCAT22(*unaff_r10,unaff_r10[1]);
                    /* WARNING: Could not recover jumptable at 0x0201c710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201c714  m68k_lea_long

void m68k_dispatch_0201c714(void)

{
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  *(undefined4 *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
                    /* WARNING: Could not recover jumptable at 0x0201c734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c738  m68k_lea_long

void m68k_dispatch_0201c738(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0201c760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c764  m68k_lea_long

void m68k_dispatch_0201c764(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6 + 0x20;
  if ((uVar2 & 0x8000) == 0) {
    iVar3 = unaff_r6;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar1);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar1);
  }
  *(int *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar2 + iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201c7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201c7b4  m68k_lea_long

void m68k_dispatch_0201c7b4(void)

{
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) + (int)*unaff_r10;
                    /* WARNING: Could not recover jumptable at 0x0201c7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c7e4  m68k_lea_long

void m68k_dispatch_0201c7e4(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar2 = *unaff_r10;
  iVar3 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    iVar3 = unaff_r6 + 0x20;
  }
  uVar1 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar3 = (int)*(short *)(iVar3 + uVar1);
  }
  else {
    iVar3 = *(int *)(iVar3 + uVar1);
  }
  *(uint *)(unaff_r6 + 0x20 + ((unaff_r11 & 0xe00) >> 7)) =
       ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) + (int)(char)uVar2
       + iVar3;
                    /* WARNING: Could not recover jumptable at 0x0201c838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201c83c  m68k_pea_long

void m68k_dispatch_0201c83c(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  puVar2 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  *puVar2 = (short)((uint)uVar1 >> 0x10);
  puVar2[1] = (short)uVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0201c874  m68k_pea_long

void m68k_dispatch_0201c874(void)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar1 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  puVar2 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  *puVar2 = (short)((uint)iVar1 >> 0x10);
  puVar2[1] = (short)iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c8b4  m68k_pea_long

void m68k_dispatch_0201c8b4(void)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  iVar2 = unaff_r6 + 0x20;
  if ((uVar1 & 0x8000) == 0) {
    iVar2 = unaff_r6;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar2 = (int)*(short *)(iVar2 + uVar4);
  }
  else {
    iVar2 = *(int *)(iVar2 + uVar4);
  }
  iVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)(char)uVar1 + iVar2;
  uVar4 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar4;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
  *puVar3 = (short)((uint)iVar2 >> 0x10);
  puVar3[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201c914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0201c918  m68k_pea_long

void m68k_dispatch_0201c918(void)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  
  sVar1 = *unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  psVar2 = (short *)(unaff_r8 + (uVar3 & 0xffff));
  *psVar2 = sVar1 >> 0xf;
  psVar2[1] = sVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c948  m68k_pea_long

void m68k_dispatch_0201c948(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r10;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  uVar4 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar4;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0201c97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[2] * 4))();
  return;
}


// 0x0201c980  m68k_pea_long

void m68k_dispatch_0201c980(void)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short *unaff_r10;
  
  iVar1 = ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
          (int)*unaff_r10;
  uVar3 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar3;
  puVar2 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
  *puVar2 = (short)((uint)iVar1 >> 0x10);
  puVar2[1] = (short)iVar1;
                    /* WARNING: Could not recover jumptable at 0x0201c9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0201c9c4  m68k_pea_long

void m68k_dispatch_0201c9c4(void)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  int unaff_r6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  
  uVar1 = *unaff_r10;
  iVar2 = unaff_r6;
  if ((uVar1 & 0x8000) != 0) {
    iVar2 = unaff_r6 + 0x20;
  }
  uVar4 = (uVar1 & 0x7000) >> 10;
  if ((uVar1 & 0x800) == 0) {
    iVar2 = (int)*(short *)(iVar2 + uVar4);
  }
  else {
    iVar2 = *(int *)(iVar2 + uVar4);
  }
  iVar2 = ((int)unaff_r10 - *(int *)(unaff_r6 + 0x54) | *(uint *)(unaff_r6 + 0x9c)) +
          (int)(char)uVar1 + iVar2;
  uVar4 = *(int *)(unaff_r6 + 0x3c) - 4;
  *(uint *)(unaff_r6 + 0x3c) = uVar4;
  puVar3 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
  *puVar3 = (short)((uint)iVar2 >> 0x10);
  puVar3[1] = (short)iVar2;
                    /* WARNING: Could not recover jumptable at 0x0201ca2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return;
}


// 0x0202fe48  m68k_movep_word

void m68k_dispatch_0202fe48(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar3 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  sVar1 = FUN_0100408c(iVar3);
  uVar2 = FUN_0100408c(iVar3 + 2);
  *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar2 & 0xff | sVar1 << 8;
                    /* WARNING: Could not recover jumptable at 0x0202fe8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202fe90  m68k_movep_long

void m68k_dispatch_0202fe90(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  iVar5 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  iVar1 = FUN_0100408c(iVar5);
  uVar2 = FUN_0100408c(iVar5 + 2);
  uVar3 = FUN_0100408c(iVar5 + 4);
  uVar4 = FUN_0100408c(iVar5 + 6);
  *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) =
       iVar1 << 0x18 | (uVar2 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4 & 0xff;
                    /* WARNING: Could not recover jumptable at 0x0202fef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202fef4  m68k_movep_word

void m68k_dispatch_0202fef4(void)

{
  ushort uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(ushort *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  FUN_01004144(iVar2,uVar1 >> 8);
  FUN_01004144(iVar2 + 2,uVar1 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x0202ff34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202ff38  m68k_movep_long

void m68k_dispatch_0202ff38(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  short *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  iVar2 = *(int *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) + (int)*unaff_r10;
  FUN_01004144(iVar2,uVar1 >> 0x18);
  FUN_01004144(iVar2 + 2,uVar1 >> 0x10 & 0xff);
  FUN_01004144(iVar2 + 4,uVar1 >> 8 & 0xff);
  FUN_01004144(iVar2 + 6,uVar1 & 0xff);
                    /* WARNING: Could not recover jumptable at 0x0202ff94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)(ushort)unaff_r10[1] * 4))();
  return;
}


// 0x0202ff98  m68k_exg_long

void m68k_dispatch_0202ff98(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(undefined4 *)(unaff_r6 + (unaff_r11 & 7) * 4);
  *(undefined4 *)(unaff_r6 + (unaff_r11 & 7) * 4) =
       *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0202ffb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202ffbc  m68k_exg_long

void m68k_dispatch_0202ffbc(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  iVar2 = unaff_r6 + 0x20;
  uVar1 = *(undefined4 *)(iVar2 + (unaff_r11 & 7) * 4);
  *(undefined4 *)(iVar2 + (unaff_r11 & 7) * 4) = *(undefined4 *)(iVar2 + ((unaff_r11 & 0xe00) >> 7))
  ;
  *(undefined4 *)(iVar2 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0202ffe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x0202ffe4  m68k_exg_long

void m68k_dispatch_0202ffe4(void)

{
  undefined4 uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4);
  *(undefined4 *)(unaff_r6 + 0x20 + (unaff_r11 & 7) * 4) =
       *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7));
  *(undefined4 *)(unaff_r6 + ((unaff_r11 & 0xe00) >> 7)) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x02030008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}


// 0x02030f7c  m68k_swap

void m68k_dispatch_02030f7c(void)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4);
  *(uint *)(unaff_r6 + (unaff_r11 & 7) * 4) = uVar1 << 0x10 | uVar1 >> 0x10;
                    /* WARNING: Could not recover jumptable at 0x02030fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_r9 + (uint)*unaff_r10 * 4))();
  return;
}

