/* ARM7 YM2612 algorithm 7 — grouped REA pseudocode.
 * Sample loops keyed by the dispatch mask, including masks that produce silence.
 */

// 0x038004c0  ym2612_render_algorithm_7_mask_00

undefined1 * arm7_dispatch_038004c0(void)

{
  bool bVar1;
  undefined2 unaff_r10;
  undefined2 *in_r12;
  int in_lr;
  int iVar2;
  
  if (0x1ff < in_lr) {
    unaff_r10 = 0;
  }
  do {
    *in_r12 = unaff_r10;
    iVar2 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar2;
  } while (iVar2 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800504  ym2612_render_algorithm_7_mask_08

undefined4 * arm7_dispatch_03800504(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r4;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
  uint uVar4;
  int in_stack_00000020;
  int in_stack_00000030;
  
  do {
    iVar3 = 0;
    if ((in_lr & 0xf) != 0) {
      iVar3 = (int)((unaff_r10 + ((int)unaff_r10 >> 0x10)) * 0x10000) >>
              (0x10 - (in_lr & 0xf) & 0xff);
    }
    uVar2 = 0;
    iVar3 = in_stack_00000020 +
            *(int *)(unaff_r9 + ((unaff_r4 & 0xffff7fff) + iVar3 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = (uint)*(ushort *)(unaff_r8 + iVar3);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    *in_r12 = (short)unaff_r10;
    uVar4 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    unaff_r10 = uVar2 | unaff_r10 << 0x10;
    in_r12 = in_r12 + 1;
    in_lr = uVar4;
  } while (uVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x0380057c  ym2612_render_algorithm_7_mask_01

undefined1 * arm7_dispatch_0380057c(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short unaff_r10;
  short *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  if (0x1ff < in_lr) {
    unaff_r10 = 0;
  }
  do {
    sVar2 = 0;
    iVar3 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + unaff_r10;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x038005e0  ym2612_render_algorithm_7_mask_09

undefined4 * arm7_dispatch_038005e0(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  short *in_r12;
  uint in_lr;
  uint uVar5;
  int in_stack_00000020;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_0000003c;
  
  do {
    iVar4 = 0;
    if ((in_lr & 0xf) != 0) {
      iVar4 = (int)((unaff_r10 + ((int)unaff_r10 >> 0x10)) * 0x10000) >>
              (0x10 - (in_lr & 0xf) & 0xff);
    }
    uVar3 = 0;
    iVar4 = in_stack_00000020 +
            *(int *)(unaff_r9 + ((unaff_r4 & 0xffff7fff) + iVar4 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar3 = (uint)*(ushort *)(unaff_r8 + iVar4);
    }
    sVar2 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + (short)unaff_r10;
    uVar5 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    in_r12 = in_r12 + 1;
    in_lr = uVar5;
  } while (uVar5 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800678  ym2612_render_algorithm_7_mask_02

undefined1 * arm7_dispatch_03800678(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  short unaff_r10;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000034;
  
  if (0x1ff < in_lr) {
    unaff_r10 = 0;
  }
  do {
    sVar2 = 0;
    iVar3 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = sVar2 + unaff_r10;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x038006dc  ym2612_render_algorithm_7_mask_0a

undefined4 * arm7_dispatch_038006dc(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  short *in_r12;
  uint in_lr;
  uint uVar5;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000030;
  int in_stack_00000034;
  
  do {
    iVar4 = 0;
    if ((in_lr & 0xf) != 0) {
      iVar4 = (int)((unaff_r10 + ((int)unaff_r10 >> 0x10)) * 0x10000) >>
              (0x10 - (in_lr & 0xf) & 0xff);
    }
    uVar3 = 0;
    iVar4 = in_stack_00000020 +
            *(int *)(unaff_r9 + ((unaff_r4 & 0xffff7fff) + iVar4 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar3 = (uint)*(ushort *)(unaff_r8 + iVar4);
    }
    sVar2 = 0;
    iVar4 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = sVar2 + (short)unaff_r10;
    uVar5 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    in_r12 = in_r12 + 1;
    in_lr = uVar5;
  } while (uVar5 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800774  ym2612_render_algorithm_7_mask_03

undefined1 * arm7_dispatch_03800774(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short unaff_r10;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_0000003c;
  
  if (0x1ff < in_lr) {
    unaff_r10 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    sVar3 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + unaff_r10 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x038007fc  ym2612_render_algorithm_7_mask_0b

undefined4 * arm7_dispatch_038007fc(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  short *in_r12;
  uint in_lr;
  uint uVar6;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_0000003c;
  
  do {
    iVar5 = 0;
    if ((in_lr & 0xf) != 0) {
      iVar5 = (int)((unaff_r10 + ((int)unaff_r10 >> 0x10)) * 0x10000) >>
              (0x10 - (in_lr & 0xf) & 0xff);
    }
    uVar3 = 0;
    iVar5 = in_stack_00000020 +
            *(int *)(unaff_r9 + ((unaff_r4 & 0xffff7fff) + iVar5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      uVar3 = (uint)*(ushort *)(unaff_r8 + iVar5);
    }
    sVar2 = 0;
    iVar5 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    sVar4 = 0;
    iVar5 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + (short)unaff_r10 + sVar4;
    uVar6 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    in_r12 = in_r12 + 1;
    in_lr = uVar6;
  } while (uVar6 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x038008b8  ym2612_render_algorithm_7_mask_04

undefined1 * arm7_dispatch_038008b8(void)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short unaff_r10;
  short *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_00000038;
  
  if (0x1ff < in_lr) {
    unaff_r10 = 0;
  }
  do {
    sVar2 = 0;
    iVar3 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar3);
    }
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = sVar2 + unaff_r10;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x0380091c  ym2612_render_algorithm_7_mask_0c

undefined4 * arm7_dispatch_0380091c(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  short *in_r12;
  uint in_lr;
  uint uVar5;
  int in_stack_00000020;
  int in_stack_00000028;
  int in_stack_00000030;
  int in_stack_00000038;
  
  do {
    iVar4 = 0;
    if ((in_lr & 0xf) != 0) {
      iVar4 = (int)((unaff_r10 + ((int)unaff_r10 >> 0x10)) * 0x10000) >>
              (0x10 - (in_lr & 0xf) & 0xff);
    }
    uVar3 = 0;
    iVar4 = in_stack_00000020 +
            *(int *)(unaff_r9 + ((unaff_r4 & 0xffff7fff) + iVar4 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar3 = (uint)*(ushort *)(unaff_r8 + iVar4);
    }
    sVar2 = 0;
    iVar4 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = sVar2 + (short)unaff_r10;
    uVar5 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    in_r12 = in_r12 + 1;
    in_lr = uVar5;
  } while (uVar5 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x038009b4  ym2612_render_algorithm_7_mask_05

undefined1 * arm7_dispatch_038009b4(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short unaff_r10;
  short *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  if (0x1ff < in_lr) {
    unaff_r10 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    sVar3 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + unaff_r10 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800a3c  ym2612_render_algorithm_7_mask_0d

undefined4 * arm7_dispatch_03800a3c(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  short *in_r12;
  uint in_lr;
  uint uVar6;
  int in_stack_00000020;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  do {
    iVar5 = 0;
    if ((in_lr & 0xf) != 0) {
      iVar5 = (int)((unaff_r10 + ((int)unaff_r10 >> 0x10)) * 0x10000) >>
              (0x10 - (in_lr & 0xf) & 0xff);
    }
    uVar3 = 0;
    iVar5 = in_stack_00000020 +
            *(int *)(unaff_r9 + ((unaff_r4 & 0xffff7fff) + iVar5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      uVar3 = (uint)*(ushort *)(unaff_r8 + iVar5);
    }
    sVar2 = 0;
    iVar5 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    sVar4 = 0;
    iVar5 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + (short)unaff_r10 + sVar4;
    uVar6 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    in_r12 = in_r12 + 1;
    in_lr = uVar6;
  } while (uVar6 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800af8  ym2612_render_algorithm_7_mask_06

undefined1 * arm7_dispatch_03800af8(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  short unaff_r10;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000034;
  int in_stack_00000038;
  
  if (0x1ff < in_lr) {
    unaff_r10 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    sVar3 = 0;
    iVar4 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = sVar2 + unaff_r10 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800b80  ym2612_render_algorithm_7_mask_0e

undefined4 * arm7_dispatch_03800b80(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  short *in_r12;
  uint in_lr;
  uint uVar6;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  
  do {
    iVar5 = 0;
    if ((in_lr & 0xf) != 0) {
      iVar5 = (int)((unaff_r10 + ((int)unaff_r10 >> 0x10)) * 0x10000) >>
              (0x10 - (in_lr & 0xf) & 0xff);
    }
    uVar3 = 0;
    iVar5 = in_stack_00000020 +
            *(int *)(unaff_r9 + ((unaff_r4 & 0xffff7fff) + iVar5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      uVar3 = (uint)*(ushort *)(unaff_r8 + iVar5);
    }
    sVar2 = 0;
    iVar5 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    sVar4 = 0;
    iVar5 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = sVar2 + (short)unaff_r10 + sVar4;
    uVar6 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    in_r12 = in_r12 + 1;
    in_lr = uVar6;
  } while (uVar6 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800c3c  ym2612_render_algorithm_7_mask_07

undefined1 * arm7_dispatch_03800c3c(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short unaff_r10;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  if (0x1ff < in_lr) {
    unaff_r10 = 0;
  }
  do {
    sVar2 = 0;
    iVar5 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    sVar3 = 0;
    iVar5 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar5);
    }
    sVar4 = 0;
    iVar5 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + unaff_r10 + sVar3 + sVar4;
    iVar5 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar5;
  } while (iVar5 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800ce8  ym2612_render_algorithm_7_mask_0f

undefined4 * arm7_dispatch_03800ce8(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  short *in_r12;
  uint in_lr;
  uint uVar7;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  do {
    iVar6 = 0;
    if ((in_lr & 0xf) != 0) {
      iVar6 = (int)((unaff_r10 + ((int)unaff_r10 >> 0x10)) * 0x10000) >>
              (0x10 - (in_lr & 0xf) & 0xff);
    }
    uVar3 = 0;
    iVar6 = in_stack_00000020 +
            *(int *)(unaff_r9 + ((unaff_r4 & 0xffff7fff) + iVar6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      uVar3 = (uint)*(ushort *)(unaff_r8 + iVar6);
    }
    sVar2 = 0;
    iVar6 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar6);
    }
    sVar4 = 0;
    iVar6 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar6);
    }
    sVar5 = 0;
    iVar6 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      sVar5 = *(short *)(unaff_r8 + iVar6);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + (short)unaff_r10 + sVar4 + sVar5;
    uVar7 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    in_r12 = in_r12 + 1;
    in_lr = uVar7;
  } while (uVar7 != 0 && bVar1);
  return &stack0x00000020;
}

