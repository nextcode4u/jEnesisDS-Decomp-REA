/* ARM7 render — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x037fc5d4  ym2612_render_algorithm_0_mask_01

undefined1 * arm7_dispatch_037fc5d4(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fc6b0  ym2612_render_algorithm_0_mask_09

undefined4 * arm7_dispatch_037fc6b0(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fc7b8  ym2612_render_algorithm_0_mask_03

undefined1 * arm7_dispatch_037fc7b8(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fc8e8  ym2612_render_algorithm_0_mask_0b

undefined4 * arm7_dispatch_037fc8e8(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fc9f0  ym2612_render_algorithm_0_mask_05

undefined1 * arm7_dispatch_037fc9f0(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    unaff_r11 = 0;
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar3 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fcb00  ym2612_render_algorithm_0_mask_0d

undefined4 * arm7_dispatch_037fcb00(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    iVar4 = 0;
    iVar5 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    unaff_r11 = 0;
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar4 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fcc38  ym2612_render_algorithm_0_mask_07

undefined1 * arm7_dispatch_037fcc38(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    unaff_r11 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar5 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar4 < 0x3400) {
      unaff_r11 = (int)*(short *)(unaff_r8 + iVar4);
    }
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar3 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fcd98  ym2612_render_algorithm_0_mask_0f

undefined4 * arm7_dispatch_037fcd98(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    iVar4 = 0;
    iVar5 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    unaff_r11 = 0;
    iVar5 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      unaff_r11 = (int)*(short *)(unaff_r8 + iVar5);
    }
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar4 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fced0  ym2612_render_algorithm_1_mask_01

undefined1 * arm7_dispatch_037fced0(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fcfb0  ym2612_render_algorithm_1_mask_09

undefined4 * arm7_dispatch_037fcfb0(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fd0b0  ym2612_render_algorithm_1_mask_03

undefined1 * arm7_dispatch_037fd0b0(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fd1d0  ym2612_render_algorithm_1_mask_0b

undefined4 * arm7_dispatch_037fd1d0(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fd2d0  ym2612_render_algorithm_1_mask_05

undefined1 * arm7_dispatch_037fd2d0(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar3 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r11 = iVar5 >> 0x10;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fd3e0  ym2612_render_algorithm_1_mask_0d

undefined4 * arm7_dispatch_037fd3e0(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    iVar4 = 0;
    iVar5 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar4 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r11 = (int)unaff_r10 >> 0x10;
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fd510  ym2612_render_algorithm_1_mask_07

undefined1 * arm7_dispatch_037fd510(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar3 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    iVar4 = 0;
    iVar3 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar3);
    }
    unaff_r11 = iVar4 + (iVar5 >> 0x10);
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fd660  ym2612_render_algorithm_1_mask_0f

undefined4 * arm7_dispatch_037fd660(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    iVar4 = 0;
    iVar5 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar4 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    iVar5 = 0;
    iVar4 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar5 = (int)*(short *)(unaff_r8 + iVar4);
    }
    unaff_r11 = iVar5 + ((int)unaff_r10 >> 0x10);
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fd78c  ym2612_render_algorithm_2_mask_01

undefined1 * arm7_dispatch_037fd78c(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar4 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fd874  ym2612_render_algorithm_2_mask_09

undefined4 * arm7_dispatch_037fd874(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fd97c  ym2612_render_algorithm_2_mask_03

undefined1 * arm7_dispatch_037fd97c(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar4 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fdaa0  ym2612_render_algorithm_2_mask_0b

undefined4 * arm7_dispatch_037fdaa0(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fdba4  ym2612_render_algorithm_2_mask_05

undefined1 * arm7_dispatch_037fdba4(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    unaff_r11 = 0;
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar3 + (iVar5 >> 0x10)) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fdcb4  ym2612_render_algorithm_2_mask_0d

undefined4 * arm7_dispatch_037fdcb4(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    iVar4 = 0;
    iVar5 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    unaff_r11 = 0;
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar4 + ((int)unaff_r10 >> 0x10)) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fdde4  ym2612_render_algorithm_2_mask_07

undefined1 * arm7_dispatch_037fdde4(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    unaff_r11 = 0;
    iVar4 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      unaff_r11 = (int)*(short *)(unaff_r8 + iVar4);
    }
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar3 + (iVar5 >> 0x10)) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fdf30  ym2612_render_algorithm_2_mask_0f

undefined4 * arm7_dispatch_037fdf30(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    iVar4 = 0;
    iVar5 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    unaff_r11 = 0;
    iVar5 = in_stack_00000024 + *(int *)(unaff_r9 + (unaff_r5 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      unaff_r11 = (int)*(short *)(unaff_r8 + iVar5);
    }
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar4 + ((int)unaff_r10 >> 0x10)) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe05c  ym2612_render_algorithm_3_mask_01

undefined1 * arm7_dispatch_037fe05c(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r11 = 0;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe140  ym2612_render_algorithm_3_mask_09

undefined4 * arm7_dispatch_037fe140(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r11 = 0;
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe250  ym2612_render_algorithm_3_mask_03

undefined1 * arm7_dispatch_037fe250(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_0000003c;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r11 = 0;
    iVar3 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar4 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      unaff_r11 = (int)*(short *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe388  ym2612_render_algorithm_3_mask_0b

undefined4 * arm7_dispatch_037fe388(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r11 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      unaff_r11 = (int)*(short *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe494  ym2612_render_algorithm_3_mask_05

undefined1 * arm7_dispatch_037fe494(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar3 + unaff_r11) * 0x8000 >> 0x10 & 0xffff03ff) *
                    4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r11 = 0;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe59c  ym2612_render_algorithm_3_mask_0d

undefined4 * arm7_dispatch_037fe59c(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    iVar4 = 0;
    iVar5 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar4 + unaff_r11) * 0x8000 >> 0x10 & 0xffff03ff) *
                    4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r11 = 0;
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe6d0  ym2612_render_algorithm_3_mask_07

undefined1 * arm7_dispatch_037fe6d0(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar3 + unaff_r11) * 0x8000 >> 0x10 & 0xffff03ff) *
                    4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r11 = 0;
    iVar3 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar5 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      unaff_r11 = (int)*(short *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe82c  ym2612_render_algorithm_3_mask_0f

undefined4 * arm7_dispatch_037fe82c(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    iVar4 = 0;
    iVar5 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar4 + unaff_r11) * 0x8000 >> 0x10 & 0xffff03ff) *
                    4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r11 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      unaff_r11 = (int)*(short *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe9cc  ym2612_render_algorithm_4_mask_01

undefined1 * arm7_dispatch_037fe9cc(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fea2c  ym2612_render_algorithm_4_mask_09

undefined4 * arm7_dispatch_037fea2c(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037feac0  ym2612_render_algorithm_4_mask_02

undefined1 * arm7_dispatch_037feac0(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000034;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar4 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037feb2c  ym2612_render_algorithm_4_mask_0a

undefined4 * arm7_dispatch_037feb2c(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037febcc  ym2612_render_algorithm_4_mask_03

undefined1 * arm7_dispatch_037febcc(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar5 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
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
    *in_r12 = sVar2 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fec5c  ym2612_render_algorithm_4_mask_0b

undefined4 * arm7_dispatch_037fec5c(void)

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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    sVar2 = 0;
    iVar5 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
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
    *in_r12 = sVar2 + sVar4;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fedd4  ym2612_render_algorithm_4_mask_05

undefined1 * arm7_dispatch_037fedd4(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  do {
    iVar3 = 0;
    iVar4 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      iVar3 = (int)*(short *)(unaff_r8 + iVar4);
    }
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar3 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fee5c  ym2612_render_algorithm_4_mask_0d

undefined4 * arm7_dispatch_037fee5c(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_r4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
  int in_stack_00000020;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000038;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    iVar4 = 0;
    iVar5 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar4 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fef18  ym2612_render_algorithm_4_mask_06

undefined1 * arm7_dispatch_037fef18(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000034;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar4 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fef84  ym2612_render_algorithm_4_mask_0e

undefined4 * arm7_dispatch_037fef84(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff024  ym2612_render_algorithm_4_mask_07

undefined1 * arm7_dispatch_037ff024(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar6;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar6 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar6 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar6 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    iVar4 = 0;
    iVar5 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      iVar4 = (int)*(short *)(unaff_r8 + iVar5);
    }
    sVar3 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar4 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff0e0  ym2612_render_algorithm_4_mask_0f

undefined4 * arm7_dispatch_037ff0e0(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
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
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    sVar2 = 0;
    iVar5 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    iVar5 = 0;
    iVar6 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      iVar5 = (int)*(short *)(unaff_r8 + iVar6);
    }
    sVar4 = 0;
    iVar5 = in_stack_0000002c +
            *(int *)(unaff_r9 + ((unaff_r7 & 0xffff7fff) + iVar5 * 0x8000 >> 0x10 & 0xffff03ff) * 4)
            * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar4;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff28c  ym2612_render_algorithm_5_mask_01

undefined1 * arm7_dispatch_037ff28c(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar4 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff2f8  ym2612_render_algorithm_5_mask_09

undefined4 * arm7_dispatch_037ff2f8(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff398  ym2612_render_algorithm_5_mask_02

undefined1 * arm7_dispatch_037ff398(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000034;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar4 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff404  ym2612_render_algorithm_5_mask_0a

undefined4 * arm7_dispatch_037ff404(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff4a4  ym2612_render_algorithm_5_mask_03

undefined1 * arm7_dispatch_037ff4a4(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    sVar3 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar5 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    sVar2 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + (iVar5 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff53c  ym2612_render_algorithm_5_mask_0b

undefined4 * arm7_dispatch_037ff53c(void)

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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    sVar4 = 0;
    iVar5 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    sVar2 = 0;
    iVar5 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar4;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff608  ym2612_render_algorithm_5_mask_04

undefined1 * arm7_dispatch_037ff608(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  int unaff_r11;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_00000038;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r11 = iVar4 >> 0x10;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff674  ym2612_render_algorithm_5_mask_0c

undefined4 * arm7_dispatch_037ff674(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  int unaff_r11;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r11 = (int)unaff_r10 >> 0x10;
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff714  ym2612_render_algorithm_5_mask_05

undefined1 * arm7_dispatch_037ff714(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  int unaff_r11;
  short *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r11 = iVar5 >> 0x10;
    sVar3 = 0;
    iVar4 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff7ac  ym2612_render_algorithm_5_mask_0d

undefined4 * arm7_dispatch_037ff7ac(void)

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
  int unaff_r11;
  short *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    sVar2 = 0;
    iVar5 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r11 = (int)unaff_r10 >> 0x10;
    sVar4 = 0;
    iVar5 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar4;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff878  ym2612_render_algorithm_5_mask_06

undefined1 * arm7_dispatch_037ff878(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  int unaff_r11;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000034;
  int in_stack_00000038;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r11 = iVar5 >> 0x10;
    sVar3 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = sVar2 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff910  ym2612_render_algorithm_5_mask_0e

undefined4 * arm7_dispatch_037ff910(void)

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
  int unaff_r11;
  short *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    sVar2 = 0;
    iVar5 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r11 = (int)unaff_r10 >> 0x10;
    sVar4 = 0;
    iVar5 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = sVar2 + sVar4;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ff9dc  ym2612_render_algorithm_5_mask_07

undefined1 * arm7_dispatch_037ff9dc(void)

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
  int unaff_r10;
  int iVar6;
  int unaff_r11;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar6 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar6 = 0;
  }
  do {
    sVar2 = 0;
    iVar5 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r11 = iVar6 >> 0x10;
    sVar3 = 0;
    iVar5 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar5);
    }
    sVar4 = 0;
    iVar5 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar3 + sVar4;
    iVar5 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar5;
  } while (iVar5 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ffaa0  ym2612_render_algorithm_5_mask_0f

undefined4 * arm7_dispatch_037ffaa0(void)

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
  int unaff_r11;
  short *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    sVar2 = 0;
    iVar6 = in_stack_00000028 +
            *(int *)(unaff_r9 +
                    ((unaff_r6 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar6);
    }
    unaff_r11 = (int)unaff_r10 >> 0x10;
    sVar4 = 0;
    iVar6 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar6);
    }
    sVar5 = 0;
    iVar6 = in_stack_0000002c +
            *(int *)(unaff_r9 +
                    ((unaff_r7 & 0xffff7fff) + unaff_r11 * 0x8000 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      sVar5 = *(short *)(unaff_r8 + iVar6);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar4 + sVar5;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ffc4c  ym2612_render_algorithm_6_mask_01

undefined1 * arm7_dispatch_037ffc4c(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_0000002c;
  int in_stack_0000003c;
  
  do {
    uVar2 = 0;
    iVar3 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ffcac  ym2612_render_algorithm_6_mask_09

undefined4 * arm7_dispatch_037ffcac(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ffd40  ym2612_render_algorithm_6_mask_02

undefined1 * arm7_dispatch_037ffd40(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar4;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000034;
  
  iVar4 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar4 = 0;
  }
  do {
    uVar2 = 0;
    iVar3 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar4 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ffdac  ym2612_render_algorithm_6_mask_0a

undefined4 * arm7_dispatch_037ffdac(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r5;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ffe4c  ym2612_render_algorithm_6_mask_03

undefined1 * arm7_dispatch_037ffe4c(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_0000003c;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    sVar3 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar5 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037ffedc  ym2612_render_algorithm_6_mask_0b

undefined4 * arm7_dispatch_037ffedc(void)

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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    sVar2 = 0;
    iVar5 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    sVar4 = 0;
    iVar5 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar4;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fffa0  ym2612_render_algorithm_6_mask_04

undefined1 * arm7_dispatch_037fffa0(void)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  undefined2 *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_00000038;
  
  do {
    uVar2 = 0;
    iVar3 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar3 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar3);
    }
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = uVar2;
    iVar3 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar3;
  } while (iVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800000  ym2612_render_algorithm_6_mask_0c

undefined4 * arm7_dispatch_03800000(void)

{
  bool bVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_r4;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  uint unaff_r10;
  undefined2 *in_r12;
  uint in_lr;
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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    uVar2 = 0;
    iVar4 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      uVar2 = *(undefined2 *)(unaff_r8 + iVar4);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = uVar2;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800094  ym2612_render_algorithm_6_mask_05

undefined1 * arm7_dispatch_03800094(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  int unaff_r9;
  short *in_r12;
  int in_lr;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000038;
  int in_stack_0000003c;
  
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
    *in_r12 = sVar2 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800118  ym2612_render_algorithm_6_mask_0d

undefined4 * arm7_dispatch_03800118(void)

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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
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
    *in_r12 = sVar2 + sVar4;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x038001d0  ym2612_render_algorithm_6_mask_06

undefined1 * arm7_dispatch_038001d0(void)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint unaff_r5;
  uint unaff_r6;
  int unaff_r8;
  int unaff_r9;
  int unaff_r10;
  int iVar5;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000034;
  int in_stack_00000038;
  
  iVar5 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar5 = 0;
  }
  do {
    sVar2 = 0;
    iVar4 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar4 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar4);
    }
    sVar3 = 0;
    iVar4 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar5 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar4 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar4);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = sVar2 + sVar3;
    iVar4 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar4;
  } while (iVar4 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800260  ym2612_render_algorithm_6_mask_0e

undefined4 * arm7_dispatch_03800260(void)

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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    sVar2 = 0;
    iVar5 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    sVar4 = 0;
    iVar5 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    *in_r12 = sVar2 + sVar4;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x03800324  ym2612_render_algorithm_6_mask_07

undefined1 * arm7_dispatch_03800324(void)

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
  int unaff_r10;
  int iVar6;
  short *in_r12;
  int in_lr;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  iVar6 = unaff_r10 << 0x10;
  if (0x1ff < in_lr) {
    iVar6 = 0;
  }
  do {
    sVar2 = 0;
    iVar5 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar5);
    }
    sVar3 = 0;
    iVar5 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar5 < 0x3400) {
      sVar3 = *(short *)(unaff_r8 + iVar5);
    }
    sVar4 = 0;
    iVar5 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + (iVar6 >> 0x10) * 0x8000 >> 0x10 & 0xffff03ff) * 4) *
            2;
    if (iVar5 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar5);
    }
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar3 + sVar4;
    iVar5 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar5;
  } while (iVar5 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x038003d8  ym2612_render_algorithm_6_mask_0f

undefined4 * arm7_dispatch_038003d8(void)

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
    unaff_r10 = uVar3 | unaff_r10 << 0x10;
    sVar2 = 0;
    iVar6 = in_stack_00000028 + *(int *)(unaff_r9 + (unaff_r6 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      sVar2 = *(short *)(unaff_r8 + iVar6);
    }
    sVar4 = 0;
    iVar6 = in_stack_0000002c + *(int *)(unaff_r9 + (unaff_r7 >> 0x10 & 0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      sVar4 = *(short *)(unaff_r8 + iVar6);
    }
    sVar5 = 0;
    iVar6 = in_stack_00000024 +
            *(int *)(unaff_r9 +
                    ((unaff_r5 & 0xffff7fff) + ((int)unaff_r10 >> 0x10) * 0x8000 >> 0x10 &
                    0xffff03ff) * 4) * 2;
    if (iVar6 < 0x3400) {
      sVar5 = *(short *)(unaff_r8 + iVar6);
    }
    unaff_r4 = unaff_r4 + in_stack_00000030;
    unaff_r5 = unaff_r5 + in_stack_00000034;
    unaff_r6 = unaff_r6 + in_stack_00000038;
    unaff_r7 = unaff_r7 + in_stack_0000003c;
    *in_r12 = sVar2 + sVar4 + sVar5;
    uVar3 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar3;
  } while (uVar3 != 0 && bVar1);
  return &stack0x00000020;
}


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

