/* ARM7 pcm output — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x037fc590  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fc590(void)

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


// 0x037fc638  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fc638(void)

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


// 0x037fc748  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fc748(void)

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


// 0x037fc844  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fc844(void)

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


// 0x037fc9a8  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fc9a8(void)

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


// 0x037fca84  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fca84(void)

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


// 0x037fcbc8  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fcbc8(void)

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


// 0x037fccf4  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fccf4(void)

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


// 0x037fce88  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fce88(void)

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


// 0x037fcf34  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fcf34(void)

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


// 0x037fd048  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fd048(void)

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


// 0x037fd134  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fd134(void)

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


// 0x037fd288  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fd288(void)

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


// 0x037fd364  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fd364(void)

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


// 0x037fd4a8  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fd4a8(void)

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


// 0x037fd5c4  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fd5c4(void)

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


// 0x037fd748  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fd748(void)

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


// 0x037fd7fc  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fd7fc(void)

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


// 0x037fd918  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fd918(void)

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


// 0x037fda08  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fda08(void)

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


// 0x037fdb60  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fdb60(void)

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


// 0x037fdc3c  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fdc3c(void)

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


// 0x037fdd80  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fdd80(void)

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


// 0x037fde98  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fde98(void)

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


// 0x037fe018  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fe018(void)

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


// 0x037fe0c8  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fe0c8(void)

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


// 0x037fe1e0  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fe1e0(void)

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


// 0x037fe2e4  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fe2e4(void)

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


// 0x037fe450  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fe450(void)

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


// 0x037fe524  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fe524(void)

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


// 0x037fe660  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fe660(void)

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


// 0x037fe788  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fe788(void)

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


// 0x037fe918  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fe918(void)

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


// 0x037fe958  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fe958(void)

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


// 0x037fed20  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037fed20(void)

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


// 0x037fed60  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037fed60(void)

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


// 0x037ff1d0  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037ff1d0(void)

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


// 0x037ff214  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037ff214(void)

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


// 0x037ffb98  ym2612_write_silent_pcm

undefined1 * arm7_dispatch_037ffb98(void)

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


// 0x037ffbd8  ym2612_write_silent_pcm

undefined4 * arm7_dispatch_037ffbd8(void)

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

