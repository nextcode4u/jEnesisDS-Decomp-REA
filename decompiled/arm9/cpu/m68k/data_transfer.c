/* ARM9 data transfer — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
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


// 0x0202e934  m68k_movem_word

int m68k_dispatch_0202e934(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar9;
  
  uVar1 = *unaff_r10;
  puVar4 = unaff_r6 + 0x10;
  uVar6 = *(uint *)(puVar4 + (unaff_r11 & 7) * 2);
  uVar2 = uVar6 << 0x10;
  puVar5 = (undefined2 *)(unaff_r8 + (uVar6 & 0xffff));
  if (uVar2 == 0) {
    puVar5 = puVar5 + 0x8000;
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar9 = (uVar1 & 1) != 0;
    if (bVar9) {
      uVar2 = (uint)(ushort)unaff_r6[0x1e];
    }
    uVar3 = (uint)bVar9;
    if (bVar9) {
      puVar5 = puVar5 + -1;
      *puVar5 = (short)uVar2;
    }
    if ((uVar1 & 2) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x1c];
    }
    if ((uVar1 & 4) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x1a];
    }
    if ((uVar1 & 8) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x18];
    }
    if ((uVar1 & 0x10) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x16];
    }
    if ((uVar1 & 0x20) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x14];
    }
    if ((uVar1 & 0x40) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = unaff_r6[0x12];
    }
    if ((uVar1 & 0x80) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar4;
    }
  }
  if ((uVar1 & 0x100) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[0xe];
  }
  if ((uVar1 & 0x200) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[0xc];
  }
  if ((uVar1 & 0x400) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[10];
  }
  if ((uVar1 & 0x800) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[8];
  }
  if ((uVar1 & 0x1000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[6];
  }
  if ((uVar1 & 0x2000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[4];
  }
  if ((uVar1 & 0x4000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5 = puVar5 + -1;
    *puVar5 = unaff_r6[2];
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    puVar5[-1] = *unaff_r6;
  }
  *(uint *)(puVar4 + (unaff_r11 & 7) * 2) = uVar6 + uVar3 * -2;
  iVar7 = unaff_r7 + uVar3 * -0x40000;
  iVar8 = iVar7 + -0x80000;
  if (iVar8 == 0 || iVar7 < 0x80000) {
    *(int *)(unaff_r6 + 0x26) = iVar8;
    *(ushort **)(unaff_r6 + 0x22) = unaff_r10 + 1;
    return iVar8 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202ea78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar7 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar7;
}


// 0x0202ea7c  m68k_movem_word

int m68k_dispatch_0202ea7c(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar9;
  uint unaff_r11;
  bool bVar10;
  undefined1 uVar11;
  
  puVar9 = unaff_r10 + 1;
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  uVar3 = *(uint *)(unaff_r6 + 0x10 + (unaff_r11 & 7) * 2);
  iVar7 = unaff_r7 + -0x80000;
  if ((uVar3 & 0xe00000) == 0xe00000) {
    uVar2 = 0;
    puVar4 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    uVar3 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar10 = (uVar1 & 1) != 0;
      if (bVar10) {
        uVar2 = *unaff_r6;
      }
      uVar3 = (uint)bVar10;
      puVar5 = puVar4;
      if (bVar10) {
        puVar5 = puVar4 + 1;
        *puVar4 = uVar2;
      }
      puVar4 = puVar5;
      if ((uVar1 & 2) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[2];
      }
      puVar5 = puVar4;
      if ((uVar1 & 4) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[4];
      }
      puVar4 = puVar5;
      if ((uVar1 & 8) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[6];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x10) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[8];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x20) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[10];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x40) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[0xc];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x80) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[0xe];
      }
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x100) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x10];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x200) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x12];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x400) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x14];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x800) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x16];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x1000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x18];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x2000) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x1a];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x4000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x1c];
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar3 = uVar3 + 1;
      *puVar5 = unaff_r6[0x1e];
    }
    iVar8 = iVar7 + uVar3 * -0x40000;
    if (iVar8 != 0 && (int)(uVar3 * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar11 = (uVar1 & 1) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,*unaff_r6);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 2) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[2]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 4) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[4]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 8) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[6]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[8]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[10]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xc]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xe]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar11 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x10]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x12]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x14]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x16]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x18]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1a]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1c]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1e]);
    }
    if (!(bool)uVar11) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar8 = iVar7 + (uVar6 >> 0x10) * -0x40000;
    if (iVar8 != 0 && (int)((uVar6 >> 0x10) * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar8;
  *(ushort **)(unaff_r6 + 0x22) = puVar9;
  return iVar8 >> 0x10;
}


// 0x0202ea94  m68k_movem_word

int m68k_dispatch_0202ea94(void)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar9;
  uint unaff_r11;
  bool bVar10;
  undefined1 uVar11;
  
  uVar2 = *unaff_r10;
  uVar6 = (uint)uVar2;
  puVar9 = unaff_r10 + 2;
  iVar7 = unaff_r7 + -0xc0000;
  uVar3 = *(int *)(unaff_r6 + 0x10 + (unaff_r11 & 7) * 2) + (int)(short)unaff_r10[1];
  if ((uVar3 & 0xe00000) == 0xe00000) {
    uVar1 = 0;
    puVar4 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    uVar3 = 0;
    if ((uVar2 & 0xff) != 0) {
      bVar10 = (uVar2 & 1) != 0;
      if (bVar10) {
        uVar1 = *unaff_r6;
      }
      uVar3 = (uint)bVar10;
      puVar5 = puVar4;
      if (bVar10) {
        puVar5 = puVar4 + 1;
        *puVar4 = uVar1;
      }
      puVar4 = puVar5;
      if ((uVar2 & 2) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[2];
      }
      puVar5 = puVar4;
      if ((uVar2 & 4) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[4];
      }
      puVar4 = puVar5;
      if ((uVar2 & 8) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[6];
      }
      puVar5 = puVar4;
      if ((uVar2 & 0x10) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[8];
      }
      puVar4 = puVar5;
      if ((uVar2 & 0x20) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[10];
      }
      puVar5 = puVar4;
      if ((uVar2 & 0x40) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[0xc];
      }
      puVar4 = puVar5;
      if ((uVar2 & 0x80) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[0xe];
      }
    }
    puVar5 = puVar4;
    if ((uVar2 & 0x100) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x10];
    }
    puVar4 = puVar5;
    if ((uVar2 & 0x200) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x12];
    }
    puVar5 = puVar4;
    if ((uVar2 & 0x400) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x14];
    }
    puVar4 = puVar5;
    if ((uVar2 & 0x800) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x16];
    }
    puVar5 = puVar4;
    if ((uVar2 & 0x1000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x18];
    }
    puVar4 = puVar5;
    if ((uVar2 & 0x2000) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x1a];
    }
    puVar5 = puVar4;
    if ((uVar2 & 0x4000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x1c];
    }
    if ((uVar2 & 0x8000) != 0) {
      uVar3 = uVar3 + 1;
      *puVar5 = unaff_r6[0x1e];
    }
    iVar8 = iVar7 + uVar3 * -0x40000;
    if (iVar8 != 0 && (int)(uVar3 * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar2 & 0xff) != 0) {
      uVar11 = (uVar2 & 1) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,*unaff_r6);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 2) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[2]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 4) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[4]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 8) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[6]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[8]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[10]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xc]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xe]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar11 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x10]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x12]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x14]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x16]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x18]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1a]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1c]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1e]);
    }
    if (!(bool)uVar11) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar8 = iVar7 + (uVar6 >> 0x10) * -0x40000;
    if (iVar8 != 0 && (int)((uVar6 >> 0x10) * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar8;
  *(ushort **)(unaff_r6 + 0x22) = puVar9;
  return iVar8 >> 0x10;
}


// 0x0202eab4  m68k_movem_word

int m68k_dispatch_0202eab4(void)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar9;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar10;
  uint unaff_r11;
  bool bVar11;
  undefined1 uVar12;
  
  uVar2 = *unaff_r10;
  uVar8 = (uint)uVar2;
  puVar10 = unaff_r10 + 2;
  uVar3 = unaff_r10[1];
  puVar6 = unaff_r6 + 0x10;
  if ((uVar3 & 0x8000) == 0) {
    puVar6 = unaff_r6;
  }
  uVar4 = (uVar3 & 0x7000) >> 10;
  if ((uVar3 & 0x800) == 0) {
    iVar5 = (int)*(short *)((int)puVar6 + uVar4);
  }
  else {
    iVar5 = *(int *)((int)puVar6 + uVar4);
  }
  iVar9 = unaff_r7 + -0xe0000;
  uVar4 = *(int *)(unaff_r6 + 0x10 + (unaff_r11 & 7) * 2) + (int)(char)uVar3 + iVar5;
  if ((uVar4 & 0xe00000) == 0xe00000) {
    uVar1 = 0;
    puVar6 = (undefined2 *)(unaff_r8 + (uVar4 & 0xffff));
    uVar8 = 0;
    if ((uVar2 & 0xff) != 0) {
      bVar11 = (uVar2 & 1) != 0;
      if (bVar11) {
        uVar1 = *unaff_r6;
      }
      uVar8 = (uint)bVar11;
      puVar7 = puVar6;
      if (bVar11) {
        puVar7 = puVar6 + 1;
        *puVar6 = uVar1;
      }
      puVar6 = puVar7;
      if ((uVar2 & 2) != 0) {
        uVar8 = uVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = unaff_r6[2];
      }
      puVar7 = puVar6;
      if ((uVar2 & 4) != 0) {
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = unaff_r6[4];
      }
      puVar6 = puVar7;
      if ((uVar2 & 8) != 0) {
        uVar8 = uVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = unaff_r6[6];
      }
      puVar7 = puVar6;
      if ((uVar2 & 0x10) != 0) {
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = unaff_r6[8];
      }
      puVar6 = puVar7;
      if ((uVar2 & 0x20) != 0) {
        uVar8 = uVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = unaff_r6[10];
      }
      puVar7 = puVar6;
      if ((uVar2 & 0x40) != 0) {
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = unaff_r6[0xc];
      }
      puVar6 = puVar7;
      if ((uVar2 & 0x80) != 0) {
        uVar8 = uVar8 + 1;
        puVar6 = puVar7 + 1;
        *puVar7 = unaff_r6[0xe];
      }
    }
    puVar7 = puVar6;
    if ((uVar2 & 0x100) != 0) {
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = unaff_r6[0x10];
    }
    puVar6 = puVar7;
    if ((uVar2 & 0x200) != 0) {
      uVar8 = uVar8 + 1;
      puVar6 = puVar7 + 1;
      *puVar7 = unaff_r6[0x12];
    }
    puVar7 = puVar6;
    if ((uVar2 & 0x400) != 0) {
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = unaff_r6[0x14];
    }
    puVar6 = puVar7;
    if ((uVar2 & 0x800) != 0) {
      uVar8 = uVar8 + 1;
      puVar6 = puVar7 + 1;
      *puVar7 = unaff_r6[0x16];
    }
    puVar7 = puVar6;
    if ((uVar2 & 0x1000) != 0) {
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = unaff_r6[0x18];
    }
    puVar6 = puVar7;
    if ((uVar2 & 0x2000) != 0) {
      uVar8 = uVar8 + 1;
      puVar6 = puVar7 + 1;
      *puVar7 = unaff_r6[0x1a];
    }
    puVar7 = puVar6;
    if ((uVar2 & 0x4000) != 0) {
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = unaff_r6[0x1c];
    }
    if ((uVar2 & 0x8000) != 0) {
      uVar8 = uVar8 + 1;
      *puVar7 = unaff_r6[0x1e];
    }
    iVar5 = iVar9 + uVar8 * -0x40000;
    if (iVar5 != 0 && (int)(uVar8 * 0x40000) <= iVar9) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar5 = (**(code **)(unaff_r9 + (uint)*puVar10 * 4))();
      return iVar5;
    }
  }
  else {
    if ((uVar2 & 0xff) != 0) {
      uVar12 = (uVar2 & 1) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,*unaff_r6);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 2) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[2]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 4) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[4]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 8) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[6]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x10) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[8]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x20) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[10]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x40) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[0xc]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x80) == 0;
      if (!(bool)uVar12) {
        FUN_01004160(uVar4,unaff_r6[0xe]);
      }
      if (!(bool)uVar12) {
        uVar4 = uVar4 + 2;
        uVar8 = uVar8 + 0x10000;
      }
    }
    uVar12 = (uVar8 & 0x100) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x10]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x200) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x12]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x400) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x14]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x800) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x16]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x1000) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x18]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x2000) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x1a]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x4000) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x1c]);
    }
    if (!(bool)uVar12) {
      uVar4 = uVar4 + 2;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x8000) == 0;
    if (!(bool)uVar12) {
      FUN_01004160(uVar4,unaff_r6[0x1e]);
    }
    if (!(bool)uVar12) {
      uVar8 = uVar8 + 0x10000;
    }
    iVar5 = iVar9 + (uVar8 >> 0x10) * -0x40000;
    if (iVar5 != 0 && (int)((uVar8 >> 0x10) * 0x40000) <= iVar9) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar5 = (**(code **)(unaff_r9 + (uint)*puVar10 * 4))();
      return iVar5;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar5;
  *(ushort **)(unaff_r6 + 0x22) = puVar10;
  return iVar5 >> 0x10;
}


// 0x0202eafc  m68k_movem_word

int m68k_dispatch_0202eafc(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar9;
  bool bVar10;
  undefined1 uVar11;
  
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  iVar7 = unaff_r7 + -0xc0000;
  puVar9 = unaff_r10 + 2;
  uVar3 = (uint)(short)unaff_r10[1];
  if ((uVar3 & 0xe00000) == 0xe00000) {
    uVar2 = 0;
    puVar4 = (undefined2 *)(unaff_r8 + (uint)unaff_r10[1]);
    uVar3 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar10 = (uVar1 & 1) != 0;
      if (bVar10) {
        uVar2 = *unaff_r6;
      }
      uVar3 = (uint)bVar10;
      puVar5 = puVar4;
      if (bVar10) {
        puVar5 = puVar4 + 1;
        *puVar4 = uVar2;
      }
      puVar4 = puVar5;
      if ((uVar1 & 2) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[2];
      }
      puVar5 = puVar4;
      if ((uVar1 & 4) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[4];
      }
      puVar4 = puVar5;
      if ((uVar1 & 8) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[6];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x10) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[8];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x20) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[10];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x40) != 0) {
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[0xc];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x80) != 0) {
        uVar3 = uVar3 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[0xe];
      }
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x100) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x10];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x200) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x12];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x400) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x14];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x800) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x16];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x1000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x18];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x2000) != 0) {
      uVar3 = uVar3 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x1a];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x4000) != 0) {
      uVar3 = uVar3 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x1c];
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar3 = uVar3 + 1;
      *puVar5 = unaff_r6[0x1e];
    }
    iVar8 = iVar7 + uVar3 * -0x40000;
    if (iVar8 != 0 && (int)(uVar3 * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar11 = (uVar1 & 1) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,*unaff_r6);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 2) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[2]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 4) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[4]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 8) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[6]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[8]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[10]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xc]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar11 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar11) {
        FUN_01004160(uVar3,unaff_r6[0xe]);
      }
      if (!(bool)uVar11) {
        uVar3 = uVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar11 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x10]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x12]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x14]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x16]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x18]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1a]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1c]);
    }
    if (!(bool)uVar11) {
      uVar3 = uVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar11 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar11) {
      FUN_01004160(uVar3,unaff_r6[0x1e]);
    }
    if (!(bool)uVar11) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar8 = iVar7 + (uVar6 >> 0x10) * -0x40000;
    if (iVar8 != 0 && (int)((uVar6 >> 0x10) * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar9 * 4))();
      return iVar7;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar8;
  *(ushort **)(unaff_r6 + 0x22) = puVar9;
  return iVar8 >> 0x10;
}


// 0x0202eb10  m68k_movem_word

int m68k_dispatch_0202eb10(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar8;
  bool bVar9;
  undefined1 uVar10;
  
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  iVar7 = unaff_r7 + -0x100000;
  puVar8 = unaff_r10 + 3;
  iVar3 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xe0) == 0xe0) {
    uVar2 = 0;
    puVar4 = (undefined2 *)(unaff_r8 + (uint)unaff_r10[2]);
    uVar6 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        uVar2 = *unaff_r6;
      }
      uVar6 = (uint)bVar9;
      puVar5 = puVar4;
      if (bVar9) {
        puVar5 = puVar4 + 1;
        *puVar4 = uVar2;
      }
      puVar4 = puVar5;
      if ((uVar1 & 2) != 0) {
        uVar6 = uVar6 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[2];
      }
      puVar5 = puVar4;
      if ((uVar1 & 4) != 0) {
        uVar6 = uVar6 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[4];
      }
      puVar4 = puVar5;
      if ((uVar1 & 8) != 0) {
        uVar6 = uVar6 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[6];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x10) != 0) {
        uVar6 = uVar6 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[8];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x20) != 0) {
        uVar6 = uVar6 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[10];
      }
      puVar5 = puVar4;
      if ((uVar1 & 0x40) != 0) {
        uVar6 = uVar6 + 1;
        puVar5 = puVar4 + 1;
        *puVar4 = unaff_r6[0xc];
      }
      puVar4 = puVar5;
      if ((uVar1 & 0x80) != 0) {
        uVar6 = uVar6 + 1;
        puVar4 = puVar5 + 1;
        *puVar5 = unaff_r6[0xe];
      }
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x100) != 0) {
      uVar6 = uVar6 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x10];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x200) != 0) {
      uVar6 = uVar6 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x12];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x400) != 0) {
      uVar6 = uVar6 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x14];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x800) != 0) {
      uVar6 = uVar6 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x16];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x1000) != 0) {
      uVar6 = uVar6 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x18];
    }
    puVar4 = puVar5;
    if ((uVar1 & 0x2000) != 0) {
      uVar6 = uVar6 + 1;
      puVar4 = puVar5 + 1;
      *puVar5 = unaff_r6[0x1a];
    }
    puVar5 = puVar4;
    if ((uVar1 & 0x4000) != 0) {
      uVar6 = uVar6 + 1;
      puVar5 = puVar4 + 1;
      *puVar4 = unaff_r6[0x1c];
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar6 = uVar6 + 1;
      *puVar5 = unaff_r6[0x1e];
    }
    iVar3 = iVar7 + uVar6 * -0x40000;
    if (iVar3 != 0 && (int)(uVar6 * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202ec54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar3;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar10 = (uVar1 & 1) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,*unaff_r6);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 2) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[2]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 4) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[4]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 8) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[6]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[8]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[10]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[0xc]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar10) {
        FUN_01004160(iVar3,unaff_r6[0xe]);
      }
      if (!(bool)uVar10) {
        iVar3 = iVar3 + 2;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar10 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x10]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x12]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x14]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x16]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x18]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x1a]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x1c]);
    }
    if (!(bool)uVar10) {
      iVar3 = iVar3 + 2;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar10) {
      FUN_01004160(iVar3,unaff_r6[0x1e]);
    }
    if (!(bool)uVar10) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar3 = iVar7 + (uVar6 >> 0x10) * -0x40000;
    if (iVar3 != 0 && (int)((uVar6 >> 0x10) * 0x40000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar3;
    }
  }
  *(int *)(unaff_r6 + 0x26) = iVar3;
  *(ushort **)(unaff_r6 + 0x22) = puVar8;
  return iVar3 >> 0x10;
}


// 0x0202edf8  m68k_movem_word

int m68k_dispatch_0202edf8(void)

{
  ushort uVar1;
  int *piVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int *unaff_r6;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  piVar2 = unaff_r6 + 8;
  uVar5 = piVar2[unaff_r11 & 7];
  if ((uVar5 & 0xc00000) == 0) {
    psVar3 = (short *)(unaff_r6[0x18] + (uVar5 & 0x3fffff));
  }
  else {
    psVar3 = (short *)(unaff_r8 + (uVar5 & 0xffff));
  }
  if ((uVar1 & 0xff) != 0) {
    psVar4 = psVar3;
    if ((uVar1 & 1) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      *unaff_r6 = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 2) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[1] = (int)*psVar4;
    }
    psVar4 = psVar3;
    if ((uVar1 & 4) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[2] = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 8) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[3] = (int)*psVar4;
    }
    psVar4 = psVar3;
    if ((uVar1 & 0x10) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[4] = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 0x20) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[5] = (int)*psVar4;
    }
    psVar4 = psVar3;
    if ((uVar1 & 0x40) != 0) {
      psVar4 = psVar3 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[6] = (int)*psVar3;
    }
    psVar3 = psVar4;
    if ((uVar1 & 0x80) != 0) {
      psVar3 = psVar4 + 1;
      uVar5 = uVar5 + 2;
      unaff_r7 = unaff_r7 + -0x40000;
      unaff_r6[7] = (int)*psVar4;
    }
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x100) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    *piVar2 = (int)*psVar3;
  }
  psVar3 = psVar4;
  if ((uVar1 & 0x200) != 0) {
    psVar3 = psVar4 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[9] = (int)*psVar4;
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x400) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[10] = (int)*psVar3;
  }
  psVar3 = psVar4;
  if ((uVar1 & 0x800) != 0) {
    psVar3 = psVar4 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xb] = (int)*psVar4;
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x1000) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xc] = (int)*psVar3;
  }
  psVar3 = psVar4;
  if ((uVar1 & 0x2000) != 0) {
    psVar3 = psVar4 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xd] = (int)*psVar4;
  }
  psVar4 = psVar3;
  if ((uVar1 & 0x4000) != 0) {
    psVar4 = psVar3 + 1;
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xe] = (int)*psVar3;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar5 = uVar5 + 2;
    unaff_r7 = unaff_r7 + -0x40000;
    unaff_r6[0xf] = (int)*psVar4;
  }
  piVar2[unaff_r11 & 7] = uVar5;
  iVar6 = unaff_r7 + -0xc0000;
  if (iVar6 == 0 || unaff_r7 < 0xc0000) {
    unaff_r6[0x13] = iVar6;
    unaff_r6[0x11] = (int)(unaff_r10 + 1);
    return iVar6 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar6 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar6;
}


// 0x0202ef80  m68k_movem_word

int m68k_dispatch_0202ef80(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = (unaff_r6 + 8)[unaff_r11 & 7];
  if ((uVar2 & 0xc00000) == 0) {
    iVar3 = uVar2 << 10;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 << 0x10;
    psVar4 = (short *)(unaff_r8 + (uVar2 & 0xffff));
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0xc0000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0xc0000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 1);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar3;
}


// 0x0202ef98  m68k_movem_word

int m68k_dispatch_0202ef98(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(short)unaff_r10[1];
  if ((uVar2 & 0xc00000) == 0) {
    iVar3 = uVar2 * 0x400;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 * 0x10000;
    psVar4 = (short *)(unaff_r8 + (uVar2 & 0xffff));
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0x100000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0x100000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 2);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar3;
}


// 0x0202efb8  m68k_movem_word

int m68k_dispatch_0202efb8(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  short *psVar7;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  piVar5 = unaff_r6 + 8;
  if ((uVar2 & 0x8000) == 0) {
    piVar5 = unaff_r6;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)((int)piVar5 + uVar3);
  }
  else {
    iVar4 = *(int *)((int)piVar5 + uVar3);
  }
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(char)uVar2 + iVar4;
  if ((uVar3 & 0xc00000) == 0) {
    iVar4 = uVar3 * 0x400;
    psVar6 = (short *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    iVar4 = uVar3 * 0x10000;
    psVar6 = (short *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    psVar7 = psVar6;
    if (bVar8) {
      psVar7 = psVar6 + 1;
      iVar4 = (int)*psVar6;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = iVar4;
    }
    psVar6 = psVar7;
    if ((uVar1 & 2) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 4) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 8) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x10) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x20) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x40) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x80) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = (int)*psVar7;
    }
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x100) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x200) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x400) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x800) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x1000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x2000) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x4000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = (int)*psVar6;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = (int)*psVar7;
  }
  iVar4 = unaff_r7 + -0x120000 + uVar3 * -0x40000;
  if (iVar4 == 0 || unaff_r7 + -0x120000 < (int)(uVar3 * 0x40000)) {
    unaff_r6[0x13] = iVar4;
    unaff_r6[0x11] = (int)(unaff_r10 + 2);
    return iVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar4;
}


// 0x0202f000  m68k_movem_word

int m68k_dispatch_0202f000(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = (uint)(short)unaff_r10[1];
  if ((uVar2 & 0xc00000) == 0) {
    iVar3 = uVar2 << 10;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 << 0x10;
    psVar4 = (short *)(unaff_r8 + (uint)unaff_r10[1]);
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0x100000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0x100000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 2);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar3;
}


// 0x0202f014  m68k_movem_word

int m68k_dispatch_0202f014(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xc0) == 0) {
    iVar3 = uVar2 << 10;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 << 0x10;
    psVar4 = (short *)(unaff_r8 + (uint)unaff_r10[2]);
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0x140000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0x140000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 3);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[3] * 4))();
  return iVar3;
}


// 0x0202f030  m68k_movem_word

int m68k_dispatch_0202f030(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar6;
  
  uVar1 = *unaff_r10;
  uVar2 = ((int)(unaff_r10 + 1) - unaff_r6[0x15] | unaff_r6[0x27]) + (int)(short)unaff_r10[1];
  if ((uVar2 & 0xc00000) == 0) {
    iVar3 = uVar2 * 0x400;
    psVar4 = (short *)(unaff_r6[0x18] + (uVar2 & 0x3fffff));
  }
  else {
    iVar3 = uVar2 * 0x10000;
    psVar4 = (short *)(unaff_r8 + (uVar2 & 0xffff));
  }
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar6 = (uVar1 & 1) != 0;
    psVar5 = psVar4;
    if (bVar6) {
      psVar5 = psVar4 + 1;
      iVar3 = (int)*psVar4;
    }
    uVar2 = (uint)bVar6;
    if (bVar6) {
      *unaff_r6 = iVar3;
    }
    psVar4 = psVar5;
    if ((uVar1 & 2) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[1] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 4) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[2] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 8) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[3] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x10) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[4] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x20) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[5] = (int)*psVar5;
    }
    psVar5 = psVar4;
    if ((uVar1 & 0x40) != 0) {
      psVar5 = psVar4 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[6] = (int)*psVar4;
    }
    psVar4 = psVar5;
    if ((uVar1 & 0x80) != 0) {
      psVar4 = psVar5 + 1;
      uVar2 = uVar2 + 1;
      unaff_r6[7] = (int)*psVar5;
    }
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x100) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[8] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x200) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[9] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x400) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[10] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x800) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xb] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x1000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xc] = (int)*psVar4;
  }
  psVar4 = psVar5;
  if ((uVar1 & 0x2000) != 0) {
    psVar4 = psVar5 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xd] = (int)*psVar5;
  }
  psVar5 = psVar4;
  if ((uVar1 & 0x4000) != 0) {
    psVar5 = psVar4 + 1;
    uVar2 = uVar2 + 1;
    unaff_r6[0xe] = (int)*psVar4;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar2 = uVar2 + 1;
    unaff_r6[0xf] = (int)*psVar5;
  }
  iVar3 = unaff_r7 + -0x100000 + uVar2 * -0x40000;
  if (iVar3 == 0 || unaff_r7 + -0x100000 < (int)(uVar2 * 0x40000)) {
    unaff_r6[0x13] = iVar3;
    unaff_r6[0x11] = (int)(unaff_r10 + 2);
    return iVar3 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar3;
}


// 0x0202f058  m68k_movem_word

int m68k_dispatch_0202f058(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  short *psVar7;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  piVar5 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    piVar5 = unaff_r6 + 8;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)((int)piVar5 + uVar3);
  }
  else {
    iVar4 = *(int *)((int)piVar5 + uVar3);
  }
  uVar3 = ((int)(unaff_r10 + 1) - unaff_r6[0x15] | unaff_r6[0x27]) + (int)(char)uVar2 + iVar4;
  if ((uVar3 & 0xc00000) == 0) {
    iVar4 = uVar3 * 0x400;
    psVar6 = (short *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    iVar4 = uVar3 * 0x10000;
    psVar6 = (short *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    psVar7 = psVar6;
    if (bVar8) {
      psVar7 = psVar6 + 1;
      iVar4 = (int)*psVar6;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = iVar4;
    }
    psVar6 = psVar7;
    if ((uVar1 & 2) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 4) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 8) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x10) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x20) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = (int)*psVar7;
    }
    psVar7 = psVar6;
    if ((uVar1 & 0x40) != 0) {
      psVar7 = psVar6 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = (int)*psVar6;
    }
    psVar6 = psVar7;
    if ((uVar1 & 0x80) != 0) {
      psVar6 = psVar7 + 1;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = (int)*psVar7;
    }
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x100) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x200) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x400) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x800) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x1000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = (int)*psVar6;
  }
  psVar6 = psVar7;
  if ((uVar1 & 0x2000) != 0) {
    psVar6 = psVar7 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = (int)*psVar7;
  }
  psVar7 = psVar6;
  if ((uVar1 & 0x4000) != 0) {
    psVar7 = psVar6 + 1;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = (int)*psVar6;
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = (int)*psVar7;
  }
  iVar4 = unaff_r7 + -0x120000 + uVar3 * -0x40000;
  if (iVar4 != 0 && (int)(uVar3 * 0x40000) <= unaff_r7 + -0x120000) {
                    /* WARNING: Could not recover jumptable at 0x0202f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
    return iVar4;
  }
  unaff_r6[0x13] = iVar4;
  unaff_r6[0x11] = (int)(unaff_r10 + 2);
  return iVar4 >> 0x10;
}


// 0x0202f1dc  m68k_movem_long

int m68k_dispatch_0202f1dc(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar8;
  uint unaff_r11;
  bool bVar9;
  
  puVar8 = unaff_r10 + 1;
  uVar1 = *unaff_r10;
  puVar4 = unaff_r6 + 8;
  uVar6 = puVar4[unaff_r11 & 7];
  if ((uVar6 & 0xe00000) == 0xe00000) {
    iVar2 = uVar6 << 0x10;
    puVar5 = (undefined2 *)(unaff_r8 + (uVar6 & 0xffff));
    if (iVar2 == 0) {
      puVar5 = puVar5 + 0x8000;
    }
    uVar6 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        iVar2 = unaff_r6[0xf];
      }
      uVar6 = (uint)bVar9;
      if (bVar9) {
        puVar5[-1] = (short)iVar2;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)iVar2 >> 0x10);
      }
      if ((uVar1 & 2) != 0) {
        uVar3 = unaff_r6[0xe];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 4) != 0) {
        uVar3 = unaff_r6[0xd];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 8) != 0) {
        uVar3 = unaff_r6[0xc];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 0x10) != 0) {
        uVar3 = unaff_r6[0xb];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 0x20) != 0) {
        uVar3 = unaff_r6[10];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 0x40) != 0) {
        uVar3 = unaff_r6[9];
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
      if ((uVar1 & 0x80) != 0) {
        uVar3 = *puVar4;
        uVar6 = uVar6 + 1;
        puVar5[-1] = (short)uVar3;
        puVar5 = puVar5 + -2;
        *puVar5 = (short)((uint)uVar3 >> 0x10);
      }
    }
    if ((uVar1 & 0x100) != 0) {
      uVar3 = unaff_r6[7];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x200) != 0) {
      uVar3 = unaff_r6[6];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x400) != 0) {
      uVar3 = unaff_r6[5];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x800) != 0) {
      uVar3 = unaff_r6[4];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar3 = unaff_r6[3];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x2000) != 0) {
      uVar3 = unaff_r6[2];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x4000) != 0) {
      uVar3 = unaff_r6[1];
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5 = puVar5 + -2;
      *puVar5 = (short)((uint)uVar3 >> 0x10);
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar3 = *unaff_r6;
      uVar6 = uVar6 + 1;
      puVar5[-1] = (short)uVar3;
      puVar5[-2] = (short)((uint)uVar3 >> 0x10);
    }
    puVar4[unaff_r11 & 7] = puVar4[unaff_r11 & 7] + uVar6 * -4;
    iVar7 = unaff_r7 + uVar6 * -0x80000;
    iVar2 = iVar7 + -0x80000;
    if (iVar2 != 0 && 0x7ffff < iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar2;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      if ((uVar1 & 1) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[0xf]);
      }
      if ((uVar1 & 2) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[0xe]);
      }
      if ((uVar1 & 4) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[0xd]);
      }
      if ((uVar1 & 8) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[0xc]);
      }
      if ((uVar1 & 0x10) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[0xb]);
      }
      if ((uVar1 & 0x20) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[10]);
      }
      if ((uVar1 & 0x40) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[9]);
      }
      if ((uVar1 & 0x80) != 0) {
        uVar6 = uVar6 - 4;
        FUN_010041d0(uVar6,unaff_r6[8]);
      }
    }
    if ((uVar1 & 0x100) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[7]);
    }
    if ((uVar1 & 0x200) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[6]);
    }
    if ((uVar1 & 0x400) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[5]);
    }
    if ((uVar1 & 0x800) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[4]);
    }
    if ((uVar1 & 0x1000) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[3]);
    }
    if ((uVar1 & 0x2000) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[2]);
    }
    if ((uVar1 & 0x4000) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,unaff_r6[1]);
    }
    if ((uVar1 & 0x8000) != 0) {
      uVar6 = uVar6 - 4;
      FUN_010041d0(uVar6,*unaff_r6);
    }
    unaff_r6[(unaff_r11 & 7) + 8] = uVar6;
    iVar2 = unaff_r7 + -0x80000;
    if (iVar2 != 0 && 0x7ffff < unaff_r7) {
                    /* WARNING: Could not recover jumptable at 0x0202f560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar2;
    }
  }
  unaff_r6[0x13] = iVar2;
  unaff_r6[0x11] = puVar8;
  return iVar2 >> 0x10;
}


// 0x0202f564  m68k_movem_long

int m68k_dispatch_0202f564(void)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar8;
  uint unaff_r11;
  bool bVar9;
  undefined1 uVar10;
  
  puVar8 = unaff_r10 + 1;
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  uVar2 = (unaff_r6 + 8)[unaff_r11 & 7];
  iVar7 = unaff_r7 + -0x80000;
  if ((uVar2 & 0xe00000) == 0xe00000) {
    iVar5 = uVar2 << 0x10;
    puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    uVar2 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        iVar5 = *unaff_r6;
      }
      uVar2 = (uint)bVar9;
      if (bVar9) {
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 2) != 0) {
        iVar5 = unaff_r6[1];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 4) != 0) {
        iVar5 = unaff_r6[2];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 8) != 0) {
        iVar5 = unaff_r6[3];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar5 = unaff_r6[4];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar5 = unaff_r6[5];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar5 = unaff_r6[6];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar5 = unaff_r6[7];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar5 = unaff_r6[8];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar5 = unaff_r6[9];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar5 = unaff_r6[10];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar5 = unaff_r6[0xb];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar5 = unaff_r6[0xc];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar5 = unaff_r6[0xd];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar5 = unaff_r6[0xe];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar5 = unaff_r6[0xf];
      uVar2 = uVar2 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3[1] = (short)iVar5;
    }
    iVar5 = iVar7 + uVar2 * -0x80000;
    if (iVar5 != 0 && (int)(uVar2 * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar10 = (uVar1 & 1) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,*unaff_r6);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 2) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[1]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 4) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[2]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 8) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[3]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[4]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[5]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[6]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[7]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar10 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[8]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[9]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[10]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xf]);
    }
    if (!(bool)uVar10) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar5 = iVar7 + (uVar6 >> 0x10) * -0x80000;
    if (iVar5 != 0 && (int)((uVar6 >> 0x10) * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  unaff_r6[0x13] = iVar5;
  unaff_r6[0x11] = (int)puVar8;
  return iVar5 >> 0x10;
}


// 0x0202f57c  m68k_movem_long

int m68k_dispatch_0202f57c(void)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar8;
  uint unaff_r11;
  bool bVar9;
  undefined1 uVar10;
  
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  puVar8 = unaff_r10 + 2;
  iVar7 = unaff_r7 + -0xc0000;
  uVar2 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(short)unaff_r10[1];
  if ((uVar2 & 0xe00000) == 0xe00000) {
    iVar5 = uVar2 * 0x10000;
    puVar3 = (undefined2 *)(unaff_r8 + (uVar2 & 0xffff));
    uVar2 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        iVar5 = *unaff_r6;
      }
      uVar2 = (uint)bVar9;
      if (bVar9) {
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 2) != 0) {
        iVar5 = unaff_r6[1];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 4) != 0) {
        iVar5 = unaff_r6[2];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 8) != 0) {
        iVar5 = unaff_r6[3];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar5 = unaff_r6[4];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar5 = unaff_r6[5];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar5 = unaff_r6[6];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar5 = unaff_r6[7];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar5 = unaff_r6[8];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar5 = unaff_r6[9];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar5 = unaff_r6[10];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar5 = unaff_r6[0xb];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar5 = unaff_r6[0xc];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar5 = unaff_r6[0xd];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar5 = unaff_r6[0xe];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar5 = unaff_r6[0xf];
      uVar2 = uVar2 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3[1] = (short)iVar5;
    }
    iVar5 = iVar7 + uVar2 * -0x80000;
    if (iVar5 != 0 && (int)(uVar2 * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar10 = (uVar1 & 1) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,*unaff_r6);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 2) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[1]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 4) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[2]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 8) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[3]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[4]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[5]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[6]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[7]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar10 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[8]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[9]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[10]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xf]);
    }
    if (!(bool)uVar10) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar5 = iVar7 + (uVar6 >> 0x10) * -0x80000;
    if (iVar5 != 0 && (int)((uVar6 >> 0x10) * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  unaff_r6[0x13] = iVar5;
  unaff_r6[0x11] = (int)puVar8;
  return iVar5 >> 0x10;
}


// 0x0202f59c  m68k_movem_long

int m68k_dispatch_0202f59c(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  int *unaff_r6;
  int unaff_r7;
  int iVar9;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar10;
  uint unaff_r11;
  bool bVar11;
  undefined1 uVar12;
  
  uVar1 = *unaff_r10;
  uVar8 = (uint)uVar1;
  puVar10 = unaff_r10 + 2;
  uVar2 = unaff_r10[1];
  piVar5 = unaff_r6 + 8;
  if ((uVar2 & 0x8000) == 0) {
    piVar5 = unaff_r6;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar4 = (int)*(short *)((int)piVar5 + uVar3);
  }
  else {
    iVar4 = *(int *)((int)piVar5 + uVar3);
  }
  iVar9 = unaff_r7 + -0xe0000;
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(char)uVar2 + iVar4;
  if ((uVar3 & 0xe00000) == 0xe00000) {
    iVar4 = uVar3 * 0x10000;
    puVar6 = (undefined2 *)(unaff_r8 + (uVar3 & 0xffff));
    uVar8 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar11 = (uVar1 & 1) != 0;
      if (bVar11) {
        iVar4 = *unaff_r6;
      }
      uVar8 = (uint)bVar11;
      if (bVar11) {
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 2) != 0) {
        iVar4 = unaff_r6[1];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 4) != 0) {
        iVar4 = unaff_r6[2];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 8) != 0) {
        iVar4 = unaff_r6[3];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar4 = unaff_r6[4];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar4 = unaff_r6[5];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar4 = unaff_r6[6];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar4 = unaff_r6[7];
        uVar8 = uVar8 + 1;
        puVar7 = puVar6 + 1;
        *puVar6 = (short)((uint)iVar4 >> 0x10);
        puVar6 = puVar6 + 2;
        *puVar7 = (short)iVar4;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar4 = unaff_r6[8];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar4 = unaff_r6[9];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar4 = unaff_r6[10];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar4 = unaff_r6[0xb];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar4 = unaff_r6[0xc];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar4 = unaff_r6[0xd];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar4 = unaff_r6[0xe];
      uVar8 = uVar8 + 1;
      puVar7 = puVar6 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6 = puVar6 + 2;
      *puVar7 = (short)iVar4;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar4 = unaff_r6[0xf];
      uVar8 = uVar8 + 1;
      *puVar6 = (short)((uint)iVar4 >> 0x10);
      puVar6[1] = (short)iVar4;
    }
    iVar4 = iVar9 + uVar8 * -0x80000;
    if (iVar4 != 0 && (int)(uVar8 * 0x80000) <= iVar9) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar10 * 4))();
      return iVar4;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar12 = (uVar1 & 1) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,*unaff_r6);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 2) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[1]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 4) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[2]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 8) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[3]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x10) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[4]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x20) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[5]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x40) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[6]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
      uVar12 = (uVar8 & 0x80) == 0;
      if (!(bool)uVar12) {
        FUN_01004194(uVar3,unaff_r6[7]);
      }
      if (!(bool)uVar12) {
        uVar3 = uVar3 + 4;
        uVar8 = uVar8 + 0x10000;
      }
    }
    uVar12 = (uVar8 & 0x100) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[8]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x200) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[9]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x400) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[10]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x800) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xb]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x1000) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xc]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x2000) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xd]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x4000) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xe]);
    }
    if (!(bool)uVar12) {
      uVar3 = uVar3 + 4;
      uVar8 = uVar8 + 0x10000;
    }
    uVar12 = (uVar8 & 0x8000) == 0;
    if (!(bool)uVar12) {
      FUN_01004194(uVar3,unaff_r6[0xf]);
    }
    if (!(bool)uVar12) {
      uVar8 = uVar8 + 0x10000;
    }
    iVar4 = iVar9 + (uVar8 >> 0x10) * -0x80000;
    if (iVar4 != 0 && (int)((uVar8 >> 0x10) * 0x80000) <= iVar9) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (**(code **)(unaff_r9 + (uint)*puVar10 * 4))();
      return iVar4;
    }
  }
  unaff_r6[0x13] = iVar4;
  unaff_r6[0x11] = (int)puVar10;
  return iVar4 >> 0x10;
}


// 0x0202f5e4  m68k_movem_long

int m68k_dispatch_0202f5e4(void)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  int *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar8;
  bool bVar9;
  undefined1 uVar10;
  
  uVar1 = *unaff_r10;
  uVar6 = (uint)uVar1;
  iVar7 = unaff_r7 + -0xc0000;
  puVar8 = unaff_r10 + 2;
  uVar2 = (uint)(short)unaff_r10[1];
  if ((uVar2 & 0xe00000) == 0xe00000) {
    iVar5 = uVar2 << 0x10;
    puVar3 = (undefined2 *)(unaff_r8 + (uint)unaff_r10[1]);
    uVar2 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar9 = (uVar1 & 1) != 0;
      if (bVar9) {
        iVar5 = *unaff_r6;
      }
      uVar2 = (uint)bVar9;
      if (bVar9) {
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 2) != 0) {
        iVar5 = unaff_r6[1];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 4) != 0) {
        iVar5 = unaff_r6[2];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 8) != 0) {
        iVar5 = unaff_r6[3];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar5 = unaff_r6[4];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar5 = unaff_r6[5];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar5 = unaff_r6[6];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar5 = unaff_r6[7];
        uVar2 = uVar2 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar5 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar5;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar5 = unaff_r6[8];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar5 = unaff_r6[9];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar5 = unaff_r6[10];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar5 = unaff_r6[0xb];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar5 = unaff_r6[0xc];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar5 = unaff_r6[0xd];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar5 = unaff_r6[0xe];
      uVar2 = uVar2 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar5;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar5 = unaff_r6[0xf];
      uVar2 = uVar2 + 1;
      *puVar3 = (short)((uint)iVar5 >> 0x10);
      puVar3[1] = (short)iVar5;
    }
    iVar5 = iVar7 + uVar2 * -0x80000;
    if (iVar5 != 0 && (int)(uVar2 * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar10 = (uVar1 & 1) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,*unaff_r6);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 2) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[1]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 4) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[2]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 8) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[3]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x10) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[4]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x20) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[5]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x40) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[6]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
      uVar10 = (uVar6 & 0x80) == 0;
      if (!(bool)uVar10) {
        FUN_01004194(uVar2,unaff_r6[7]);
      }
      if (!(bool)uVar10) {
        uVar2 = uVar2 + 4;
        uVar6 = uVar6 + 0x10000;
      }
    }
    uVar10 = (uVar6 & 0x100) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[8]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x200) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[9]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x400) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[10]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x800) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x1000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x2000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x4000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar10) {
      uVar2 = uVar2 + 4;
      uVar6 = uVar6 + 0x10000;
    }
    uVar10 = (uVar6 & 0x8000) == 0;
    if (!(bool)uVar10) {
      FUN_01004194(uVar2,unaff_r6[0xf]);
    }
    if (!(bool)uVar10) {
      uVar6 = uVar6 + 0x10000;
    }
    iVar5 = iVar7 + (uVar6 >> 0x10) * -0x80000;
    if (iVar5 != 0 && (int)((uVar6 >> 0x10) * 0x80000) <= iVar7) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar7 = (**(code **)(unaff_r9 + (uint)*puVar8 * 4))();
      return iVar7;
    }
  }
  unaff_r6[0x13] = iVar5;
  unaff_r6[0x11] = (int)puVar8;
  return iVar5 >> 0x10;
}


// 0x0202f5f8  m68k_movem_long

int m68k_dispatch_0202f5f8(void)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int *unaff_r6;
  int unaff_r7;
  int iVar6;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  ushort *puVar7;
  bool bVar8;
  undefined1 uVar9;
  
  uVar1 = *unaff_r10;
  uVar5 = (uint)uVar1;
  iVar6 = unaff_r7 + -0x100000;
  puVar7 = unaff_r10 + 3;
  iVar2 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xe0) == 0xe0) {
    iVar2 = iVar2 << 0x10;
    puVar3 = (undefined2 *)(unaff_r8 + (uint)unaff_r10[2]);
    uVar5 = 0;
    if ((uVar1 & 0xff) != 0) {
      bVar8 = (uVar1 & 1) != 0;
      if (bVar8) {
        iVar2 = *unaff_r6;
      }
      uVar5 = (uint)bVar8;
      if (bVar8) {
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 2) != 0) {
        iVar2 = unaff_r6[1];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 4) != 0) {
        iVar2 = unaff_r6[2];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 8) != 0) {
        iVar2 = unaff_r6[3];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 0x10) != 0) {
        iVar2 = unaff_r6[4];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 0x20) != 0) {
        iVar2 = unaff_r6[5];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 0x40) != 0) {
        iVar2 = unaff_r6[6];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
      if ((uVar1 & 0x80) != 0) {
        iVar2 = unaff_r6[7];
        uVar5 = uVar5 + 1;
        puVar4 = puVar3 + 1;
        *puVar3 = (short)((uint)iVar2 >> 0x10);
        puVar3 = puVar3 + 2;
        *puVar4 = (short)iVar2;
      }
    }
    if ((uVar1 & 0x100) != 0) {
      iVar2 = unaff_r6[8];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x200) != 0) {
      iVar2 = unaff_r6[9];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x400) != 0) {
      iVar2 = unaff_r6[10];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x800) != 0) {
      iVar2 = unaff_r6[0xb];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x1000) != 0) {
      iVar2 = unaff_r6[0xc];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x2000) != 0) {
      iVar2 = unaff_r6[0xd];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x4000) != 0) {
      iVar2 = unaff_r6[0xe];
      uVar5 = uVar5 + 1;
      puVar4 = puVar3 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3 = puVar3 + 2;
      *puVar4 = (short)iVar2;
    }
    if ((uVar1 & 0x8000) != 0) {
      iVar2 = unaff_r6[0xf];
      uVar5 = uVar5 + 1;
      *puVar3 = (short)((uint)iVar2 >> 0x10);
      puVar3[1] = (short)iVar2;
    }
    iVar2 = iVar6 + uVar5 * -0x80000;
    if (iVar2 != 0 && (int)(uVar5 * 0x80000) <= iVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202f7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar2;
    }
  }
  else {
    if ((uVar1 & 0xff) != 0) {
      uVar9 = (uVar1 & 1) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,*unaff_r6);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 2) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[1]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 4) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[2]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 8) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[3]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x10) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[4]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x20) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[5]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x40) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[6]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
      uVar9 = (uVar5 & 0x80) == 0;
      if (!(bool)uVar9) {
        FUN_01004194(iVar2,unaff_r6[7]);
      }
      if (!(bool)uVar9) {
        iVar2 = iVar2 + 4;
        uVar5 = uVar5 + 0x10000;
      }
    }
    uVar9 = (uVar5 & 0x100) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[8]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x200) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[9]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x400) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[10]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x800) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xb]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x1000) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xc]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x2000) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xd]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x4000) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xe]);
    }
    if (!(bool)uVar9) {
      iVar2 = iVar2 + 4;
      uVar5 = uVar5 + 0x10000;
    }
    uVar9 = (uVar5 & 0x8000) == 0;
    if (!(bool)uVar9) {
      FUN_01004194(iVar2,unaff_r6[0xf]);
    }
    if (!(bool)uVar9) {
      uVar5 = uVar5 + 0x10000;
    }
    iVar2 = iVar6 + (uVar5 >> 0x10) * -0x80000;
    if (iVar2 != 0 && (int)((uVar5 >> 0x10) * 0x80000) <= iVar6) {
                    /* WARNING: Could not recover jumptable at 0x0202f958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (**(code **)(unaff_r9 + (uint)*puVar7 * 4))();
      return iVar2;
    }
  }
  unaff_r6[0x13] = iVar2;
  unaff_r6[0x11] = (int)puVar7;
  return iVar2 >> 0x10;
}


// 0x0202f960  m68k_movem_long

int m68k_dispatch_0202f960(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined4 *unaff_r6;
  int unaff_r7;
  int iVar7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  
  uVar1 = *unaff_r10;
  puVar3 = unaff_r6 + 8;
  uVar6 = puVar3[unaff_r11 & 7];
  if ((uVar6 & 0xc00000) == 0) {
    puVar4 = (undefined2 *)(unaff_r6[0x18] + (uVar6 & 0x3fffff));
  }
  else {
    puVar4 = (undefined2 *)(unaff_r8 + (uVar6 & 0xffff));
  }
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      *unaff_r6 = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 2) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[1] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 4) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[2] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 8) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[3] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[4] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[5] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[6] = CONCAT22(uVar2,*puVar5);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar5 = puVar4 + 1;
      uVar2 = *puVar4;
      unaff_r7 = unaff_r7 + -0x80000;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 + 4;
      unaff_r6[7] = CONCAT22(uVar2,*puVar5);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    *puVar3 = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[9] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[10] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar5 = puVar4 + 1;
    uVar2 = *puVar4;
    unaff_r7 = unaff_r7 + -0x80000;
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 4;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar5);
  }
  if ((uVar1 & 0x8000) != 0) {
    unaff_r7 = unaff_r7 + -0x80000;
    uVar6 = uVar6 + 4;
    unaff_r6[0xf] = CONCAT22(*puVar4,puVar4[1]);
  }
  puVar3[unaff_r11 & 7] = uVar6;
  iVar7 = unaff_r7 + -0xc0000;
  if (iVar7 == 0 || unaff_r7 < 0xc0000) {
    unaff_r6[0x13] = iVar7;
    unaff_r6[0x11] = unaff_r10 + 1;
    return iVar7 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar7 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar7;
}


// 0x0202fb6c  m68k_movem_long

int m68k_dispatch_0202fb6c(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar8;
  
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7];
  uVar1 = *unaff_r10;
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 << 10;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0xc0000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0xc0000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 1);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[1] * 4))();
  return iVar5;
}


// 0x0202fb84  m68k_movem_long

int m68k_dispatch_0202fb84(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(short)unaff_r10[1];
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 * 0x400;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0x100000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x100000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 2);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar5;
}


// 0x0202fba4  m68k_movem_long

int m68k_dispatch_0202fba4(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  uint unaff_r11;
  bool bVar9;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  puVar6 = unaff_r6 + 8;
  if ((uVar2 & 0x8000) == 0) {
    puVar6 = unaff_r6;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar5 = (int)*(short *)((int)puVar6 + uVar3);
  }
  else {
    iVar5 = *(int *)((int)puVar6 + uVar3);
  }
  uVar3 = (unaff_r6 + 8)[unaff_r11 & 7] + (int)(char)uVar2 + iVar5;
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 * 0x400;
    puVar7 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar7 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar9 = (uVar1 & 1) != 0;
    if (bVar9) {
      puVar8 = puVar7 + 1;
      uVar4 = (uint)*puVar7;
      puVar7 = puVar7 + 2;
      unaff_r4 = (uint)*puVar8;
    }
    uVar3 = (uint)bVar9;
    if (bVar9) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 4) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 8) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar8);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar7,puVar7[1]);
  }
  uVar4 = unaff_r7 + -0x120000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x120000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 2);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar5;
}


// 0x0202fbec  m68k_movem_long

int m68k_dispatch_0202fbec(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar3 = (uint)(short)unaff_r10[1];
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 << 10;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uint)unaff_r10[1]);
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0x100000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x100000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 2);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar5;
}


// 0x0202fc00  m68k_movem_long

int m68k_dispatch_0202fc00(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar3 = CONCAT22(unaff_r10[1],unaff_r10[2]);
  if ((unaff_r10[1] & 0xc0) == 0) {
    uVar4 = uVar3 << 10;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uint)unaff_r10[2]);
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0x140000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x140000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 3);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[3] * 4))();
  return iVar5;
}


// 0x0202fc1c  m68k_movem_long

int m68k_dispatch_0202fc1c(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar8;
  
  uVar1 = *unaff_r10;
  uVar3 = ((int)(unaff_r10 + 1) - unaff_r6[0x15] | unaff_r6[0x27]) + (int)(short)unaff_r10[1];
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 * 0x400;
    puVar6 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar6 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar8 = (uVar1 & 1) != 0;
    if (bVar8) {
      puVar7 = puVar6 + 1;
      uVar4 = (uint)*puVar6;
      puVar6 = puVar6 + 2;
      unaff_r4 = (uint)*puVar7;
    }
    uVar3 = (uint)bVar8;
    if (bVar8) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 4) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 8) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar7);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar7 = puVar6 + 1;
      uVar2 = *puVar6;
      puVar6 = puVar6 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar7);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar7 = puVar6 + 1;
    uVar2 = *puVar6;
    puVar6 = puVar6 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar7);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar6,puVar6[1]);
  }
  uVar4 = unaff_r7 + -0x100000 + uVar3 * -0x80000;
  if (uVar4 == 0 || unaff_r7 + -0x100000 < (int)(uVar3 * 0x80000)) {
    unaff_r6[0x13] = uVar4;
    unaff_r6[0x11] = (uint)(unaff_r10 + 2);
    return (int)uVar4 >> 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
  return iVar5;
}


// 0x0202fc44  m68k_movem_long

int m68k_dispatch_0202fc44(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint unaff_r4;
  uint *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  ushort *unaff_r10;
  bool bVar9;
  
  uVar1 = *unaff_r10;
  uVar2 = unaff_r10[1];
  puVar6 = unaff_r6;
  if ((uVar2 & 0x8000) != 0) {
    puVar6 = unaff_r6 + 8;
  }
  uVar3 = (uVar2 & 0x7000) >> 10;
  if ((uVar2 & 0x800) == 0) {
    iVar5 = (int)*(short *)((int)puVar6 + uVar3);
  }
  else {
    iVar5 = *(int *)((int)puVar6 + uVar3);
  }
  uVar3 = ((int)(unaff_r10 + 1) - unaff_r6[0x15] | unaff_r6[0x27]) + (int)(char)uVar2 + iVar5;
  if ((uVar3 & 0xc00000) == 0) {
    uVar4 = uVar3 * 0x400;
    puVar7 = (ushort *)(unaff_r6[0x18] + (uVar3 & 0x3fffff));
  }
  else {
    uVar4 = 0;
    puVar7 = (ushort *)(unaff_r8 + (uVar3 & 0xffff));
  }
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    bVar9 = (uVar1 & 1) != 0;
    if (bVar9) {
      puVar8 = puVar7 + 1;
      uVar4 = (uint)*puVar7;
      puVar7 = puVar7 + 2;
      unaff_r4 = (uint)*puVar8;
    }
    uVar3 = (uint)bVar9;
    if (bVar9) {
      *unaff_r6 = unaff_r4 | uVar4 << 0x10;
    }
    if ((uVar1 & 2) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[1] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 4) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[2] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 8) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[3] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x10) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[4] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x20) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[5] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x40) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[6] = CONCAT22(uVar2,*puVar8);
    }
    if ((uVar1 & 0x80) != 0) {
      puVar8 = puVar7 + 1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 2;
      uVar3 = uVar3 + 1;
      unaff_r6[7] = CONCAT22(uVar2,*puVar8);
    }
  }
  if ((uVar1 & 0x100) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[8] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x200) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[9] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x400) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[10] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x800) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xb] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x1000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xc] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x2000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xd] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x4000) != 0) {
    puVar8 = puVar7 + 1;
    uVar2 = *puVar7;
    puVar7 = puVar7 + 2;
    uVar3 = uVar3 + 1;
    unaff_r6[0xe] = CONCAT22(uVar2,*puVar8);
  }
  if ((uVar1 & 0x8000) != 0) {
    uVar3 = uVar3 + 1;
    unaff_r6[0xf] = CONCAT22(*puVar7,puVar7[1]);
  }
  uVar4 = unaff_r7 + -0x120000 + uVar3 * -0x80000;
  if (uVar4 != 0 && (int)(uVar3 * 0x80000) <= unaff_r7 + -0x120000) {
                    /* WARNING: Could not recover jumptable at 0x0202fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar5 = (**(code **)(unaff_r9 + (uint)unaff_r10[2] * 4))();
    return iVar5;
  }
  unaff_r6[0x13] = uVar4;
  unaff_r6[0x11] = (uint)(unaff_r10 + 2);
  return (int)uVar4 >> 0x10;
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

