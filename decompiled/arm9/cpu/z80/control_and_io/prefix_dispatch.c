/* ARM9 prefix dispatch — grouped REA pseudocode.
 * Use the processor functions.tsv for addresses, names and analysis notes.
 */

// 0x010021e0  z80_dispatch_cb

void z80_dispatch_010021e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte *unaff_r11;
  
                    /* WARNING: Could not recover jumptable at 0x010021e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x400 + (uint)*unaff_r11 * 4))();
  return;
}


// 0x01002590  z80_dispatch_dd

void z80_dispatch_01002590(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte *unaff_r11;
  undefined4 in_stack_0000002c;
  
                    /* WARNING: Could not recover jumptable at 0x010025a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc00 + (uint)*unaff_r11 * 4))(in_stack_0000002c);
  return;
}


// 0x01002890  z80_dispatch_ed

void z80_dispatch_01002890(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte *unaff_r11;
  
                    /* WARNING: Could not recover jumptable at 0x01002898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x800 + (uint)*unaff_r11 * 4))();
  return;
}


// 0x01002b70  z80_dispatch_fd

void z80_dispatch_01002b70(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte *unaff_r11;
  undefined4 in_stack_00000030;
  
                    /* WARNING: Could not recover jumptable at 0x01002b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0xc00 + (uint)*unaff_r11 * 4))(in_stack_00000030);
  return;
}


// 0x01002d6c  z80_alternate_decode

void z80_dispatch_01002d6c(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int in_lr;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 4U & 0xfffffffc))
            (*(undefined1 *)(param_4 + (param_1 & 0xffffbfff)),param_2,in_stack_00000094);
  return;
}


// 0x01002d7c  z80_alternate_decode

void z80_dispatch_01002d7c(undefined4 param_1,undefined4 param_2)

{
  int in_lr;
  uint in_stack_00000080;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 4U & 0xfffffffc))(in_stack_00000080 & 3,param_2,in_stack_00000094);
  return;
}


// 0x01002d8c  z80_alternate_decode

void z80_dispatch_01002d8c(undefined4 param_1,undefined4 param_2)

{
  int in_lr;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 4U & 0xfffffffc))(0xff,param_2,in_stack_00000094);
  return;
}


// 0x01002d98  z80_alternate_decode

uint z80_dispatch_01002d98(uint param_1)

{
  if ((int)param_1 < 0x7f00) {
    return 0;
  }
  if ((param_1 & 0xe0) == 0) {
    return param_1 & 0x1f;
  }
  return 0;
}


// 0x01002dc0  z80_alternate_decode

void z80_dispatch_01002dc0(uint param_1)

{
  uint uVar1;
  int in_lr;
  undefined4 in_stack_00000094;
  uint *in_stack_000000ac;
  int in_stack_000000b0;
  
  uVar1 = param_1 & 0xffff7fff | *in_stack_000000ac;
  if ((int)uVar1 < 0x400000) {
                    /* WARNING: Could not recover jumptable at 0x01002de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(in_lr + 4U & 0xfffffffc))
              (*(undefined1 *)(in_stack_000000b0 + (uVar1 ^ 1)),in_stack_000000b0,in_stack_00000094)
    ;
    return;
  }
  switchD_02004d20::default();
  return;
}


// 0x01002e00  z80_alternate_decode

void z80_dispatch_01002e00(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int in_lr;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 4U & 0xfffffffc))
            (*(undefined1 *)(param_4 + (param_1 & 0xffffbfff)),in_stack_00000068,in_stack_00000094);
  return;
}


// 0x01002e14  z80_alternate_decode

void z80_dispatch_01002e14(void)

{
  int in_lr;
  undefined4 in_stack_00000068;
  uint in_stack_00000080;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 4U & 0xfffffffc))(in_stack_00000080 & 3,in_stack_00000068,in_stack_00000094);
  return;
}


// 0x01002e28  z80_alternate_decode

void z80_dispatch_01002e28(void)

{
  int in_lr;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 4U & 0xfffffffc))(0xff,in_stack_00000068,in_stack_00000094);
  return;
}


// 0x01002e38  z80_alternate_decode

void z80_dispatch_01002e38(uint param_1)

{
  int in_lr;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000094;
  
  if ((int)param_1 < 0x7f00) {
    return;
  }
  if ((param_1 & 0xe0) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01002e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(in_lr + 4U & 0xfffffffc))(param_1 & 0x1f,in_stack_00000068,in_stack_00000094);
    return;
  }
  return;
}


// 0x01002e60  z80_alternate_decode

void z80_dispatch_01002e60(uint param_1)

{
  uint uVar1;
  int in_lr;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000094;
  uint *in_stack_000000ac;
  int in_stack_000000b0;
  
  uVar1 = param_1 & 0xffff7fff | *in_stack_000000ac;
  if ((int)uVar1 < 0x400000) {
                    /* WARNING: Could not recover jumptable at 0x01002e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(in_lr + 4U & 0xfffffffc))
              (*(undefined1 *)(in_stack_000000b0 + (uVar1 ^ 1)),in_stack_00000068,in_stack_00000094)
    ;
    return;
  }
  switchD_02004d20::default();
  return;
}


// 0x01002ea8  z80_alternate_decode

void z80_dispatch_01002ea8(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int in_lr;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 0x10U & 0xfffffffc))
            (*(undefined2 *)(param_4 + (param_1 & 0xffffbfff)),param_2,in_stack_00000094);
  return;
}


// 0x01002ec4  z80_alternate_decode

void z80_dispatch_01002ec4(undefined4 param_1,undefined4 param_2)

{
  int in_lr;
  undefined4 in_stack_00000094;
  int in_stack_000000a8;
  
                    /* WARNING: Could not recover jumptable at 0x01002ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 0x10U & 0xfffffffc))
            (CONCAT11(*(undefined1 *)(in_stack_000000a8 + 0x1c),
                      *(undefined1 *)(in_stack_000000a8 + 0x1c)),param_2,in_stack_00000094);
  return;
}


// 0x01002ed8  z80_alternate_decode

void z80_dispatch_01002ed8(undefined4 param_1,undefined4 param_2)

{
  int in_lr;
  undefined4 in_stack_00000094;
  
                    /* WARNING: Could not recover jumptable at 0x01002ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_lr + 0x10U & 0xfffffffc))(0xffff,param_2,in_stack_00000094);
  return;
}


// 0x01002ee8  z80_alternate_decode

uint z80_dispatch_01002ee8(uint param_1)

{
  if ((int)param_1 < 0x7f00) {
    return 0xffff;
  }
  if ((param_1 & 0xe0) == 0) {
    return param_1 & 0x1f;
  }
  return 0xffff;
}


// 0x01002f14  z80_alternate_decode

void z80_dispatch_01002f14(uint param_1)

{
  int in_lr;
  uint in_stack_00000094;
  uint *in_stack_000000ac;
  int in_stack_000000b0;
  
  if ((int)*in_stack_000000ac < 0x400000) {
                    /* WARNING: Could not recover jumptable at 0x01002f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(in_lr + 0x10U & 0xfffffffc))
              (in_stack_00000094 |
               (uint)*(byte *)(in_stack_000000b0 + (param_1 & 0xffff7fff | *in_stack_000000ac)) << 8
              );
    return;
  }
  FUN_02004d68();
  return;
}

