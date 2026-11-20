/* ARM7 YM2612 algorithm 4 — grouped REA pseudocode.
 * Sample loops keyed by the dispatch mask, including masks that produce silence.
 */

// 0x037fe918  ym2612_silence_algorithm_4_mask_00

undefined1 * ym2612_silence_algorithm_4_mask_00(void)

{
  bool bVar1;
  undefined2 *in_r12;
  int in_lr;
  int iVar2;
  
  do {
    *in_r12 = 0;
    iVar2 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar2;
  } while (iVar2 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe958  ym2612_silence_algorithm_4_mask_08

undefined4 * ym2612_silence_algorithm_4_mask_08(void)

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
    unaff_r10 = uVar2 | unaff_r10 << 0x10;
    unaff_r4 = unaff_r4 + in_stack_00000030;
    *in_r12 = 0;
    uVar2 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar2;
  } while (uVar2 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fe9cc  ym2612_render_algorithm_4_mask_01

undefined1 * ym2612_render_algorithm_4_mask_01(void)

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

undefined4 * ym2612_render_algorithm_4_mask_09(void)

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

undefined1 * ym2612_render_algorithm_4_mask_02(void)

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

undefined4 * ym2612_render_algorithm_4_mask_0a(void)

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

undefined1 * ym2612_render_algorithm_4_mask_03(void)

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

undefined4 * ym2612_render_algorithm_4_mask_0b(void)

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


// 0x037fed20  ym2612_silence_algorithm_4_mask_04

undefined1 * ym2612_silence_algorithm_4_mask_04(void)

{
  bool bVar1;
  undefined2 *in_r12;
  int in_lr;
  int iVar2;
  
  do {
    *in_r12 = 0;
    iVar2 = in_lr + -0x100;
    bVar1 = 0xff < in_lr;
    in_r12 = in_r12 + 1;
    in_lr = iVar2;
  } while (iVar2 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fed60  ym2612_silence_algorithm_4_mask_0c

undefined4 * ym2612_silence_algorithm_4_mask_0c(void)

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
    unaff_r10 = uVar2 | unaff_r10 << 0x10;
    unaff_r4 = unaff_r4 + in_stack_00000030;
    *in_r12 = 0;
    uVar2 = in_lr - 0x100;
    bVar1 = 0xff < (int)in_lr;
    in_r12 = in_r12 + 1;
    in_lr = uVar2;
  } while (uVar2 != 0 && bVar1);
  return &stack0x00000020;
}


// 0x037fedd4  ym2612_render_algorithm_4_mask_05

undefined1 * ym2612_render_algorithm_4_mask_05(void)

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

undefined4 * ym2612_render_algorithm_4_mask_0d(void)

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

undefined1 * ym2612_render_algorithm_4_mask_06(void)

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

undefined4 * ym2612_render_algorithm_4_mask_0e(void)

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

undefined1 * ym2612_render_algorithm_4_mask_07(void)

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

undefined4 * ym2612_render_algorithm_4_mask_0f(void)

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

