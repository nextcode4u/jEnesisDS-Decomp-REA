/* ARM9 routines — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x01002cdc  transform_bit_fields

void FUN_01002cdc(uint param_1,undefined4 param_2)

{
  undefined4 uStack00000068;
  int in_stack_0000009c;
  
                    /* WARNING: Could not recover jumptable at 0x01002ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uStack00000068 = param_2;
  (**(code **)(in_stack_0000009c + ((param_1 & 0xf000) >> 10)))();
  return;
}


// 0x0100408c  call_computed_target

uint FUN_0100408c(uint param_1)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  
  if (0xdfffff < (param_1 & 0xf00000)) {
    return (uint)*(byte *)(unaff_r8 + ((param_1 ^ 1) & 0xffff));
  }
  if ((param_1 & 0xc00000) == 0) {
    return (uint)*(byte *)(*(int *)(unaff_r6 + 0x60) + ((param_1 ^ 1) & 0x3fffff));
  }
  uVar1 = (*(code *)(&DAT_0b00061c)[(param_1 & 0xffffff) >> 0x10])(param_1 & 0xffffff);
  return uVar1;
}


// 0x010040c4  call_computed_target

uint FUN_010040c4(uint param_1)

{
  uint uVar1;
  int unaff_r6;
  int unaff_r8;
  
  if (0xdfffff < (param_1 & 0xf00000)) {
    return (uint)*(ushort *)(unaff_r8 + (param_1 & 0xffff));
  }
  if ((param_1 & 0xc00000) == 0) {
    return (uint)*(ushort *)(*(int *)(unaff_r6 + 0x60) + (param_1 & 0x3fffff));
  }
  uVar1 = (*(code *)(&DAT_0b000a1c)[(param_1 & 0xffffff) >> 0x10])(param_1 & 0xffffff);
  return uVar1;
}


// 0x010040fc  call_computed_target

uint FUN_010040fc(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  int unaff_r6;
  int unaff_r8;
  
  if (0xdfffff < (param_1 & 0xf00000)) {
    puVar3 = (undefined2 *)(unaff_r8 + (param_1 & 0xffff));
    return CONCAT22(*puVar3,puVar3[1]);
  }
  if ((param_1 & 0xc00000) == 0) {
    puVar3 = (undefined2 *)(*(int *)(unaff_r6 + 0x60) + (param_1 & 0x3fffff));
    return CONCAT22(*puVar3,puVar3[1]);
  }
  param_1 = param_1 & 0xffffff;
  iVar1 = (*(code *)(&DAT_0b000a1c)[param_1 >> 0x10])(param_1);
  uVar2 = (*(code *)(&DAT_0b000a1c)[param_1 >> 0x10])(param_1 + 2);
  return uVar2 | iVar1 << 0x10;
}


// 0x01004144  call_computed_target

void FUN_01004144(uint param_1,undefined1 param_2)

{
  int unaff_r8;
  
  if (0xdfffff < (param_1 & 0xf00000)) {
    *(undefined1 *)(unaff_r8 + ((param_1 ^ 1) & 0xffff)) = param_2;
    return;
  }
  (*(code *)(&DAT_0b000e1c)[(param_1 & 0xffffff) >> 0x10])(param_1 & 0xffffff);
  return;
}


// 0x010041d0  call_computed_target

void FUN_010041d0(uint param_1,uint param_2)

{
  undefined2 *puVar1;
  int unaff_r8;
  
  if (0xdfffff < (param_1 & 0xf00000)) {
    puVar1 = (undefined2 *)(unaff_r8 + (param_1 & 0xffff));
    *puVar1 = (short)(param_2 >> 0x10);
    puVar1[1] = (short)param_2;
    return;
  }
  param_1 = param_1 & 0xffffff;
  (*(code *)(&DAT_0b00121c)[param_1 >> 0x10])(param_1 + 2,param_2 & 0xffff);
  (*(code *)(&DAT_0b00121c)[param_1 >> 0x10])(param_1,param_2 >> 0x10);
  return;
}


// 0x010042c0  transform_bit_fields

void FUN_010042c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *param_2 = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01004300  transform_bit_fields

void FUN_01004300(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  *param_2 = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[8] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01004360  transform_bit_fields

void FUN_01004360(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[8] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x10] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[0x18] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01004410  transform_bit_fields

void FUN_01004410(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  *param_2 = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[8] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x10] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[0x18] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x010044d0  transform_bit_fields

void FUN_010044d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *param_2 = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[8] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01004530  transform_bit_fields

void FUN_01004530(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  *param_2 = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[8] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  param_2[0x10] = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x18] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x010045f0  transform_bit_fields

void FUN_010045f0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar1 = param_1[0x21];
  uVar2 = param_1[0x22];
  uVar3 = param_1[0x23];
  uVar4 = param_1[0x24];
  uVar5 = param_1[0x25];
  uVar6 = param_1[0x26];
  uVar7 = param_1[0x27];
  param_2[8] = param_1[0x20] >> 0x10 | param_1[0x20] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x10] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[0x18] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  uVar1 = param_1[0x29];
  uVar2 = param_1[0x2a];
  uVar3 = param_1[0x2b];
  uVar4 = param_1[0x2c];
  uVar5 = param_1[0x2d];
  uVar6 = param_1[0x2e];
  uVar7 = param_1[0x2f];
  param_2[0x28] = param_1[0x28] >> 0x10 | param_1[0x28] << 0x10;
  param_2[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  param_2[0x30] = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[0x31] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x32] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x33] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x34] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x35] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x36] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x37] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x38] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x39] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x3a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x3b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x3c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x3d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x3e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x3f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01004750  transform_bit_fields

void FUN_01004750(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[0x31];
  uVar2 = param_1[0x32];
  uVar3 = param_1[0x33];
  uVar4 = param_1[0x34];
  uVar5 = param_1[0x35];
  uVar6 = param_1[0x36];
  uVar7 = param_1[0x37];
  *param_2 = param_1[0x30] >> 0x10 | param_1[0x30] << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x21];
  uVar2 = param_1[0x22];
  uVar3 = param_1[0x23];
  uVar4 = param_1[0x24];
  uVar5 = param_1[0x25];
  uVar6 = param_1[0x26];
  uVar7 = param_1[0x27];
  param_2[8] = param_1[0x20] >> 0x10 | param_1[0x20] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x10] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[0x18] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x39];
  uVar2 = param_1[0x3a];
  uVar3 = param_1[0x3b];
  uVar4 = param_1[0x3c];
  uVar5 = param_1[0x3d];
  uVar6 = param_1[0x3e];
  uVar7 = param_1[0x3f];
  param_2[0x20] = param_1[0x38] >> 0x10 | param_1[0x38] << 0x10;
  param_2[0x21] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x22] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x23] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x24] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x25] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x26] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x27] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x29];
  uVar2 = param_1[0x2a];
  uVar3 = param_1[0x2b];
  uVar4 = param_1[0x2c];
  uVar5 = param_1[0x2d];
  uVar6 = param_1[0x2e];
  uVar7 = param_1[0x2f];
  param_2[0x28] = param_1[0x28] >> 0x10 | param_1[0x28] << 0x10;
  param_2[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  param_2[0x30] = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[0x31] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x32] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x33] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x34] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x35] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x36] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x37] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x38] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x39] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x3a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x3b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x3c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x3d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x3e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x3f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x010048c0  transform_bit_fields

void FUN_010048c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *param_2 = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[8] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x10] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  return;
}


// 0x01004970  transform_bit_fields

void FUN_01004970(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  *param_2 = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[8] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x21];
  uVar2 = param_1[0x22];
  uVar3 = param_1[0x23];
  uVar4 = param_1[0x24];
  uVar5 = param_1[0x25];
  uVar6 = param_1[0x26];
  uVar7 = param_1[0x27];
  param_2[0x10] = param_1[0x20] >> 0x10 | param_1[0x20] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x18] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x29];
  uVar2 = param_1[0x2a];
  uVar3 = param_1[0x2b];
  uVar4 = param_1[0x2c];
  uVar5 = param_1[0x2d];
  uVar6 = param_1[0x2e];
  uVar7 = param_1[0x2f];
  param_2[0x20] = param_1[0x28] >> 0x10 | param_1[0x28] << 0x10;
  param_2[0x21] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x22] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x23] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x24] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x25] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x26] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x27] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x28] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x3c] = 0;
  param_2[0x3d] = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  return;
}


// 0x01004ab0  transform_bit_fields

void FUN_01004ab0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar1 = param_1[0x31];
  uVar2 = param_1[0x32];
  uVar3 = param_1[0x33];
  uVar4 = param_1[0x34];
  uVar5 = param_1[0x35];
  uVar6 = param_1[0x36];
  uVar7 = param_1[0x37];
  param_2[8] = param_1[0x30] >> 0x10 | param_1[0x30] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  param_2[0x10] = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[0x18] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  uVar1 = param_1[0x39];
  uVar2 = param_1[0x3a];
  uVar3 = param_1[0x3b];
  uVar4 = param_1[0x3c];
  uVar5 = param_1[0x3d];
  uVar6 = param_1[0x3e];
  uVar7 = param_1[0x3f];
  param_2[0x28] = param_1[0x38] >> 0x10 | param_1[0x38] << 0x10;
  param_2[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x21];
  uVar2 = param_1[0x22];
  uVar3 = param_1[0x23];
  uVar4 = param_1[0x24];
  uVar5 = param_1[0x25];
  uVar6 = param_1[0x26];
  uVar7 = param_1[0x27];
  param_2[0x30] = param_1[0x20] >> 0x10 | param_1[0x20] << 0x10;
  param_2[0x31] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x32] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x33] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x34] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x35] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x36] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x37] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x38] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x39] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x3a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x3b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x3c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x3d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x3e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x3f] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  uVar1 = param_1[0x41];
  uVar2 = param_1[0x42];
  uVar3 = param_1[0x43];
  uVar4 = param_1[0x44];
  uVar5 = param_1[0x45];
  uVar6 = param_1[0x46];
  uVar7 = param_1[0x47];
  param_2[0x48] = param_1[0x40] >> 0x10 | param_1[0x40] << 0x10;
  param_2[0x49] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x4a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x4b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x4c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x4d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x4e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x4f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x29];
  uVar2 = param_1[0x2a];
  uVar3 = param_1[0x2b];
  uVar4 = param_1[0x2c];
  uVar5 = param_1[0x2d];
  uVar6 = param_1[0x2e];
  uVar7 = param_1[0x2f];
  param_2[0x50] = param_1[0x28] >> 0x10 | param_1[0x28] << 0x10;
  param_2[0x51] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x52] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x53] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x54] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x55] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x56] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x57] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x58] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x59] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x5a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x5b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x5c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x5d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x5e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x5f] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  param_2[0x6b] = 0;
  param_2[0x6c] = 0;
  param_2[0x6d] = 0;
  param_2[0x6e] = 0;
  param_2[0x6f] = 0;
  param_2[0x70] = 0;
  param_2[0x71] = 0;
  param_2[0x72] = 0;
  param_2[0x73] = 0;
  param_2[0x74] = 0;
  param_2[0x75] = 0;
  param_2[0x76] = 0;
  param_2[0x77] = 0;
  param_2[0x78] = 0;
  param_2[0x79] = 0;
  param_2[0x7a] = 0;
  param_2[0x7b] = 0;
  param_2[0x7c] = 0;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  return;
}


// 0x01004ce0  transform_bit_fields

void FUN_01004ce0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[0x49];
  uVar2 = param_1[0x4a];
  uVar3 = param_1[0x4b];
  uVar4 = param_1[0x4c];
  uVar5 = param_1[0x4d];
  uVar6 = param_1[0x4e];
  uVar7 = param_1[0x4f];
  *param_2 = param_1[0x48] >> 0x10 | param_1[0x48] << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x31];
  uVar2 = param_1[0x32];
  uVar3 = param_1[0x33];
  uVar4 = param_1[0x34];
  uVar5 = param_1[0x35];
  uVar6 = param_1[0x36];
  uVar7 = param_1[0x37];
  param_2[8] = param_1[0x30] >> 0x10 | param_1[0x30] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  param_2[0x10] = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[0x18] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x51];
  uVar2 = param_1[0x52];
  uVar3 = param_1[0x53];
  uVar4 = param_1[0x54];
  uVar5 = param_1[0x55];
  uVar6 = param_1[0x56];
  uVar7 = param_1[0x57];
  param_2[0x20] = param_1[0x50] >> 0x10 | param_1[0x50] << 0x10;
  param_2[0x21] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x22] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x23] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x24] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x25] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x26] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x27] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x39];
  uVar2 = param_1[0x3a];
  uVar3 = param_1[0x3b];
  uVar4 = param_1[0x3c];
  uVar5 = param_1[0x3d];
  uVar6 = param_1[0x3e];
  uVar7 = param_1[0x3f];
  param_2[0x28] = param_1[0x38] >> 0x10 | param_1[0x38] << 0x10;
  param_2[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x21];
  uVar2 = param_1[0x22];
  uVar3 = param_1[0x23];
  uVar4 = param_1[0x24];
  uVar5 = param_1[0x25];
  uVar6 = param_1[0x26];
  uVar7 = param_1[0x27];
  param_2[0x30] = param_1[0x20] >> 0x10 | param_1[0x20] << 0x10;
  param_2[0x31] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x32] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x33] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x34] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x35] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x36] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x37] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x38] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x39] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x3a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x3b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x3c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x3d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x3e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x3f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x59];
  uVar2 = param_1[0x5a];
  uVar3 = param_1[0x5b];
  uVar4 = param_1[0x5c];
  uVar5 = param_1[0x5d];
  uVar6 = param_1[0x5e];
  uVar7 = param_1[0x5f];
  param_2[0x40] = param_1[0x58] >> 0x10 | param_1[0x58] << 0x10;
  param_2[0x41] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x42] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x43] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x44] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x45] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x46] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x47] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x41];
  uVar2 = param_1[0x42];
  uVar3 = param_1[0x43];
  uVar4 = param_1[0x44];
  uVar5 = param_1[0x45];
  uVar6 = param_1[0x46];
  uVar7 = param_1[0x47];
  param_2[0x48] = param_1[0x40] >> 0x10 | param_1[0x40] << 0x10;
  param_2[0x49] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x4a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x4b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x4c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x4d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x4e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x4f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x29];
  uVar2 = param_1[0x2a];
  uVar3 = param_1[0x2b];
  uVar4 = param_1[0x2c];
  uVar5 = param_1[0x2d];
  uVar6 = param_1[0x2e];
  uVar7 = param_1[0x2f];
  param_2[0x50] = param_1[0x28] >> 0x10 | param_1[0x28] << 0x10;
  param_2[0x51] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x52] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x53] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x54] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x55] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x56] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x57] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x58] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x59] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x5a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x5b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x5c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x5d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x5e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x5f] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  param_2[0x68] = 0;
  param_2[0x69] = 0;
  param_2[0x6a] = 0;
  param_2[0x6b] = 0;
  param_2[0x6c] = 0;
  param_2[0x6d] = 0;
  param_2[0x6e] = 0;
  param_2[0x6f] = 0;
  param_2[0x70] = 0;
  param_2[0x71] = 0;
  param_2[0x72] = 0;
  param_2[0x73] = 0;
  param_2[0x74] = 0;
  param_2[0x75] = 0;
  param_2[0x76] = 0;
  param_2[0x77] = 0;
  param_2[0x78] = 0;
  param_2[0x79] = 0;
  param_2[0x7a] = 0;
  param_2[0x7b] = 0;
  param_2[0x7c] = 0;
  param_2[0x7d] = 0;
  param_2[0x7e] = 0;
  param_2[0x7f] = 0;
  return;
}


// 0x01004f30  transform_bit_fields

void FUN_01004f30(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  *param_2 = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[8] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x10] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  param_2[0x18] = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01004ff0  transform_bit_fields

void FUN_01004ff0(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[0x21];
  uVar2 = param_1[0x22];
  uVar3 = param_1[0x23];
  uVar4 = param_1[0x24];
  uVar5 = param_1[0x25];
  uVar6 = param_1[0x26];
  uVar7 = param_1[0x27];
  *param_2 = param_1[0x20] >> 0x10 | param_1[0x20] << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[8] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x29];
  uVar2 = param_1[0x2a];
  uVar3 = param_1[0x2b];
  uVar4 = param_1[0x2c];
  uVar5 = param_1[0x2d];
  uVar6 = param_1[0x2e];
  uVar7 = param_1[0x2f];
  param_2[0x10] = param_1[0x28] >> 0x10 | param_1[0x28] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x18] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x31];
  uVar2 = param_1[0x32];
  uVar3 = param_1[0x33];
  uVar4 = param_1[0x34];
  uVar5 = param_1[0x35];
  uVar6 = param_1[0x36];
  uVar7 = param_1[0x37];
  param_2[0x20] = param_1[0x30] >> 0x10 | param_1[0x30] << 0x10;
  param_2[0x21] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x22] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x23] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x24] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x25] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x26] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x27] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x28] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x39];
  uVar2 = param_1[0x3a];
  uVar3 = param_1[0x3b];
  uVar4 = param_1[0x3c];
  uVar5 = param_1[0x3d];
  uVar6 = param_1[0x3e];
  uVar7 = param_1[0x3f];
  param_2[0x30] = param_1[0x38] >> 0x10 | param_1[0x38] << 0x10;
  param_2[0x31] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x32] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x33] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x34] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x35] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x36] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x37] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  param_2[0x38] = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[0x39] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x3a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x3b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x3c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x3d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x3e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x3f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01005160  transform_bit_fields

void FUN_01005160(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  uVar1 = param_1[0x41];
  uVar2 = param_1[0x42];
  uVar3 = param_1[0x43];
  uVar4 = param_1[0x44];
  uVar5 = param_1[0x45];
  uVar6 = param_1[0x46];
  uVar7 = param_1[0x47];
  param_2[8] = param_1[0x40] >> 0x10 | param_1[0x40] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x21];
  uVar2 = param_1[0x22];
  uVar3 = param_1[0x23];
  uVar4 = param_1[0x24];
  uVar5 = param_1[0x25];
  uVar6 = param_1[0x26];
  uVar7 = param_1[0x27];
  param_2[0x10] = param_1[0x20] >> 0x10 | param_1[0x20] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[0x18] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  uVar1 = param_1[0x49];
  uVar2 = param_1[0x4a];
  uVar3 = param_1[0x4b];
  uVar4 = param_1[0x4c];
  uVar5 = param_1[0x4d];
  uVar6 = param_1[0x4e];
  uVar7 = param_1[0x4f];
  param_2[0x28] = param_1[0x48] >> 0x10 | param_1[0x48] << 0x10;
  param_2[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x29];
  uVar2 = param_1[0x2a];
  uVar3 = param_1[0x2b];
  uVar4 = param_1[0x2c];
  uVar5 = param_1[0x2d];
  uVar6 = param_1[0x2e];
  uVar7 = param_1[0x2f];
  param_2[0x30] = param_1[0x28] >> 0x10 | param_1[0x28] << 0x10;
  param_2[0x31] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x32] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x33] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x34] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x35] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x36] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x37] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x38] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x39] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x3a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x3b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x3c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x3d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x3e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x3f] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  param_2[0x44] = 0;
  param_2[0x45] = 0;
  param_2[0x46] = 0;
  param_2[0x47] = 0;
  uVar1 = param_1[0x51];
  uVar2 = param_1[0x52];
  uVar3 = param_1[0x53];
  uVar4 = param_1[0x54];
  uVar5 = param_1[0x55];
  uVar6 = param_1[0x56];
  uVar7 = param_1[0x57];
  param_2[0x48] = param_1[0x50] >> 0x10 | param_1[0x50] << 0x10;
  param_2[0x49] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x4a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x4b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x4c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x4d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x4e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x4f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x31];
  uVar2 = param_1[0x32];
  uVar3 = param_1[0x33];
  uVar4 = param_1[0x34];
  uVar5 = param_1[0x35];
  uVar6 = param_1[0x36];
  uVar7 = param_1[0x37];
  param_2[0x50] = param_1[0x30] >> 0x10 | param_1[0x30] << 0x10;
  param_2[0x51] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x52] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x53] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x54] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x55] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x56] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x57] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x58] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x59] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x5a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x5b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x5c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x5d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x5e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x5f] = uVar7 >> 0x10 | uVar7 << 0x10;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0;
  param_2[99] = 0;
  param_2[100] = 0;
  param_2[0x65] = 0;
  param_2[0x66] = 0;
  param_2[0x67] = 0;
  uVar1 = param_1[0x59];
  uVar2 = param_1[0x5a];
  uVar3 = param_1[0x5b];
  uVar4 = param_1[0x5c];
  uVar5 = param_1[0x5d];
  uVar6 = param_1[0x5e];
  uVar7 = param_1[0x5f];
  param_2[0x68] = param_1[0x58] >> 0x10 | param_1[0x58] << 0x10;
  param_2[0x69] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x6a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x6b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x6c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x6d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x6e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x6f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x39];
  uVar2 = param_1[0x3a];
  uVar3 = param_1[0x3b];
  uVar4 = param_1[0x3c];
  uVar5 = param_1[0x3d];
  uVar6 = param_1[0x3e];
  uVar7 = param_1[0x3f];
  param_2[0x70] = param_1[0x38] >> 0x10 | param_1[0x38] << 0x10;
  param_2[0x71] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x72] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x73] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x74] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x75] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x76] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x77] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  param_2[0x78] = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[0x79] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x7a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x7b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x7c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x7d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x7e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x7f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x01005410  transform_bit_fields

void FUN_01005410(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = param_1[0x61];
  uVar2 = param_1[0x62];
  uVar3 = param_1[99];
  uVar4 = param_1[100];
  uVar5 = param_1[0x65];
  uVar6 = param_1[0x66];
  uVar7 = param_1[0x67];
  *param_2 = param_1[0x60] >> 0x10 | param_1[0x60] << 0x10;
  param_2[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[4] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[5] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[6] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[7] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x41];
  uVar2 = param_1[0x42];
  uVar3 = param_1[0x43];
  uVar4 = param_1[0x44];
  uVar5 = param_1[0x45];
  uVar6 = param_1[0x46];
  uVar7 = param_1[0x47];
  param_2[8] = param_1[0x40] >> 0x10 | param_1[0x40] << 0x10;
  param_2[9] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[10] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0xb] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0xc] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0xd] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0xe] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0xf] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x21];
  uVar2 = param_1[0x22];
  uVar3 = param_1[0x23];
  uVar4 = param_1[0x24];
  uVar5 = param_1[0x25];
  uVar6 = param_1[0x26];
  uVar7 = param_1[0x27];
  param_2[0x10] = param_1[0x20] >> 0x10 | param_1[0x20] << 0x10;
  param_2[0x11] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x12] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x14] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x15] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x16] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x17] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  param_2[0x18] = *param_1 >> 0x10 | *param_1 << 0x10;
  param_2[0x19] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x1a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x1b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x1c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x1d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x1e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x1f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x69];
  uVar2 = param_1[0x6a];
  uVar3 = param_1[0x6b];
  uVar4 = param_1[0x6c];
  uVar5 = param_1[0x6d];
  uVar6 = param_1[0x6e];
  uVar7 = param_1[0x6f];
  param_2[0x20] = param_1[0x68] >> 0x10 | param_1[0x68] << 0x10;
  param_2[0x21] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x22] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x23] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x24] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x25] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x26] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x27] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x49];
  uVar2 = param_1[0x4a];
  uVar3 = param_1[0x4b];
  uVar4 = param_1[0x4c];
  uVar5 = param_1[0x4d];
  uVar6 = param_1[0x4e];
  uVar7 = param_1[0x4f];
  param_2[0x28] = param_1[0x48] >> 0x10 | param_1[0x48] << 0x10;
  param_2[0x29] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x2a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x2b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x2c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x2d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x2e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x2f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x29];
  uVar2 = param_1[0x2a];
  uVar3 = param_1[0x2b];
  uVar4 = param_1[0x2c];
  uVar5 = param_1[0x2d];
  uVar6 = param_1[0x2e];
  uVar7 = param_1[0x2f];
  param_2[0x30] = param_1[0x28] >> 0x10 | param_1[0x28] << 0x10;
  param_2[0x31] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x32] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x33] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x34] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x35] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x36] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x37] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  uVar4 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar6 = param_1[0xe];
  uVar7 = param_1[0xf];
  param_2[0x38] = param_1[8] >> 0x10 | param_1[8] << 0x10;
  param_2[0x39] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x3a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x3b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x3c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x3d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x3e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x3f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x71];
  uVar2 = param_1[0x72];
  uVar3 = param_1[0x73];
  uVar4 = param_1[0x74];
  uVar5 = param_1[0x75];
  uVar6 = param_1[0x76];
  uVar7 = param_1[0x77];
  param_2[0x40] = param_1[0x70] >> 0x10 | param_1[0x70] << 0x10;
  param_2[0x41] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x42] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x43] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x44] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x45] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x46] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x47] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x51];
  uVar2 = param_1[0x52];
  uVar3 = param_1[0x53];
  uVar4 = param_1[0x54];
  uVar5 = param_1[0x55];
  uVar6 = param_1[0x56];
  uVar7 = param_1[0x57];
  param_2[0x48] = param_1[0x50] >> 0x10 | param_1[0x50] << 0x10;
  param_2[0x49] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x4a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x4b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x4c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x4d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x4e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x4f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x31];
  uVar2 = param_1[0x32];
  uVar3 = param_1[0x33];
  uVar4 = param_1[0x34];
  uVar5 = param_1[0x35];
  uVar6 = param_1[0x36];
  uVar7 = param_1[0x37];
  param_2[0x50] = param_1[0x30] >> 0x10 | param_1[0x30] << 0x10;
  param_2[0x51] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x52] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x53] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x54] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x55] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x56] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x57] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x11];
  uVar2 = param_1[0x12];
  uVar3 = param_1[0x13];
  uVar4 = param_1[0x14];
  uVar5 = param_1[0x15];
  uVar6 = param_1[0x16];
  uVar7 = param_1[0x17];
  param_2[0x58] = param_1[0x10] >> 0x10 | param_1[0x10] << 0x10;
  param_2[0x59] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x5a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x5b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x5c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x5d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x5e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x5f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x79];
  uVar2 = param_1[0x7a];
  uVar3 = param_1[0x7b];
  uVar4 = param_1[0x7c];
  uVar5 = param_1[0x7d];
  uVar6 = param_1[0x7e];
  uVar7 = param_1[0x7f];
  param_2[0x60] = param_1[0x78] >> 0x10 | param_1[0x78] << 0x10;
  param_2[0x61] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x62] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[99] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[100] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x65] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x66] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x67] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x59];
  uVar2 = param_1[0x5a];
  uVar3 = param_1[0x5b];
  uVar4 = param_1[0x5c];
  uVar5 = param_1[0x5d];
  uVar6 = param_1[0x5e];
  uVar7 = param_1[0x5f];
  param_2[0x68] = param_1[0x58] >> 0x10 | param_1[0x58] << 0x10;
  param_2[0x69] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x6a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x6b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x6c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x6d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x6e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x6f] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x39];
  uVar2 = param_1[0x3a];
  uVar3 = param_1[0x3b];
  uVar4 = param_1[0x3c];
  uVar5 = param_1[0x3d];
  uVar6 = param_1[0x3e];
  uVar7 = param_1[0x3f];
  param_2[0x70] = param_1[0x38] >> 0x10 | param_1[0x38] << 0x10;
  param_2[0x71] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x72] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x73] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x74] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x75] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x76] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x77] = uVar7 >> 0x10 | uVar7 << 0x10;
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x1a];
  uVar3 = param_1[0x1b];
  uVar4 = param_1[0x1c];
  uVar5 = param_1[0x1d];
  uVar6 = param_1[0x1e];
  uVar7 = param_1[0x1f];
  param_2[0x78] = param_1[0x18] >> 0x10 | param_1[0x18] << 0x10;
  param_2[0x79] = uVar1 >> 0x10 | uVar1 << 0x10;
  param_2[0x7a] = uVar2 >> 0x10 | uVar2 << 0x10;
  param_2[0x7b] = uVar3 >> 0x10 | uVar3 << 0x10;
  param_2[0x7c] = uVar4 >> 0x10 | uVar4 << 0x10;
  param_2[0x7d] = uVar5 >> 0x10 | uVar5 << 0x10;
  param_2[0x7e] = uVar6 >> 0x10 | uVar6 << 0x10;
  param_2[0x7f] = uVar7 >> 0x10 | uVar7 << 0x10;
  return;
}


// 0x02000240  access_shared_state

/* WARNING: Removing unreachable block (ram,0x02000260) */

void FUN_02000240(void)

{
  if (DAT_02098f70 == '\0') {
    DAT_02098f70 = '\x01';
  }
  return;
}


// 0x02000284  return_only_stub

/* WARNING: Removing unreachable block (ram,0x0200029c) */
/* WARNING: Removing unreachable block (ram,0x020002bc) */
/* WARNING: Removing unreachable block (ram,0x020002b8) */

void FUN_02000284(void)

{
  return;
}


// 0x02000310  transform_bit_fields

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02000310(void)

{
  return _DAT_0b0000f0 - _DAT_0b000100 | _DAT_0b000148;
}


// 0x020004e0  transform_bit_fields

void FUN_020004e0(int param_1)

{
  int iVar1;
  
  DAT_0b00014c = (undefined1)param_1;
  if (param_1 == 0) {
    DAT_0b00014c = 0;
  }
  DAT_0b00014d = param_1 != 0;
  iVar1 = CONCAT13(DAT_0b000143,CONCAT12(DAT_0b000142,CONCAT11(DAT_0b000141,DAT_0b000140))) + -4;
  DAT_0b000143 = (char)((uint)iVar1 >> 0x18);
  DAT_0b000141 = (char)((uint)iVar1 >> 8);
  DAT_0b000142 = (char)((uint)iVar1 >> 0x10);
  DAT_0b000140 = (char)iVar1;
  return;
}


// 0x0200052c  return_computed_value

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0200052c(void)

{
  return _DAT_0b000140;
}


// 0x02000538  transform_bit_fields

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000538(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  bool bVar8;
  bool bVar9;
  
  FUN_0200b284();
  iVar2 = DAT_0b000110;
  iVar4 = DAT_0b0000f4;
  puVar3 = _DAT_0b0000f0;
  _DAT_0b000140 = _DAT_0b000140 + param_1;
  if (DAT_0b00014d != '\0') {
    uVar5 = (uint)DAT_0b00014c;
    uVar6 = DAT_0b0000fc >> 8 & 7;
    bVar9 = SBORROW4(uVar5,6);
    iVar1 = uVar5 - 6;
    bVar8 = uVar5 == 6;
    if (uVar5 < 7) {
      bVar9 = SBORROW4(uVar5,uVar6);
      iVar1 = uVar5 - uVar6;
      bVar8 = uVar5 == uVar6;
    }
    if (!bVar8 && iVar1 < 0 == bVar9) {
      uVar6 = DAT_0b0000fc | DAT_0b0000f8;
      if ((uVar6 & 0x2000) == 0) {
        DAT_0b0000f4 = DAT_0b0000e8;
        DAT_0b0000e8 = iVar4;
      }
      DAT_0b0000e8 = DAT_0b0000e8 - 6;
      DAT_0b0000fc = uVar5 << 8 | 0x2000;
      puVar7 = (undefined2 *)(DAT_0b000110 + (DAT_0b0000e8 & 0xffff));
      *puVar7 = (short)uVar6;
      _DAT_0b000148 = (int)puVar3 - _DAT_0b000100 | _DAT_0b000148;
      puVar7[1] = (short)(_DAT_0b000148 >> 0x10);
      puVar7[2] = (short)_DAT_0b000148;
      _DAT_0b000148 = *(int *)(DAT_0b00010c + (uVar5 + 0x18) * 4) << 0x10;
      if ((_DAT_0b000148 & 0xc00000) == 0) {
        uVar5 = 0xffc00000;
        iVar2 = DAT_0b00010c;
      }
      else {
        uVar5 = 0xffff0000;
      }
      _DAT_0b000148 = _DAT_0b000148 & uVar5;
      DAT_0b00014d = 0;
      DAT_0b00014e = 0;
      DAT_0b00014f = 0;
      _DAT_0b000100 = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0100306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0b000130)();
      return;
    }
  }
  if (DAT_0b00014e == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01003080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_010030ac + (uint)*_DAT_0b0000f0 * 4))();
    return;
  }
  DAT_0b0000f8 = DAT_0b0000f8 & 0x1f | 0xfffa0000;
  return;
}


// 0x02000568  transform_bit_fields

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000568(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  bool bVar8;
  bool bVar9;
  
  FUN_0200b284();
  iVar2 = DAT_0b000110;
  iVar4 = DAT_0b0000f4;
  puVar3 = _DAT_0b0000f0;
  _DAT_0b000140 = _DAT_0b000140 + param_1;
  if (DAT_0b00014d != '\0') {
    uVar5 = (uint)DAT_0b00014c;
    uVar6 = DAT_0b0000fc >> 8 & 7;
    bVar9 = SBORROW4(uVar5,6);
    iVar1 = uVar5 - 6;
    bVar8 = uVar5 == 6;
    if (uVar5 < 7) {
      bVar9 = SBORROW4(uVar5,uVar6);
      iVar1 = uVar5 - uVar6;
      bVar8 = uVar5 == uVar6;
    }
    if (!bVar8 && iVar1 < 0 == bVar9) {
      uVar6 = DAT_0b0000fc | DAT_0b0000f8;
      if ((uVar6 & 0x2000) == 0) {
        DAT_0b0000f4 = DAT_0b0000e8;
        DAT_0b0000e8 = iVar4;
      }
      DAT_0b0000e8 = DAT_0b0000e8 - 6;
      DAT_0b0000fc = uVar5 << 8 | 0x2000;
      puVar7 = (undefined2 *)(DAT_0b000110 + (DAT_0b0000e8 & 0xffff));
      *puVar7 = (short)uVar6;
      _DAT_0b000148 = (int)puVar3 - _DAT_0b000100 | _DAT_0b000148;
      puVar7[1] = (short)(_DAT_0b000148 >> 0x10);
      puVar7[2] = (short)_DAT_0b000148;
      _DAT_0b000148 = *(int *)(DAT_0b00010c + (uVar5 + 0x18) * 4) << 0x10;
      if ((_DAT_0b000148 & 0xc00000) == 0) {
        uVar5 = 0xffc00000;
        iVar2 = DAT_0b00010c;
      }
      else {
        uVar5 = 0xffff0000;
      }
      _DAT_0b000148 = _DAT_0b000148 & uVar5;
      DAT_0b00014d = 0;
      DAT_0b00014e = 0;
      DAT_0b00014f = 0;
      _DAT_0b000100 = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0100306c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0b000130)();
      return;
    }
  }
  if (DAT_0b00014e == '\0') {
                    /* WARNING: Could not recover jumptable at 0x01003080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_010030ac + (uint)*_DAT_0b0000f0 * 4))();
    return;
  }
  DAT_0b0000f8 = DAT_0b0000f8 & 0x1f | 0xfffa0000;
  return;
}


// 0x0200081c  dispatch_selector_cases

/* WARNING: Removing unreachable block (ram,0x01001fbc) */
/* WARNING: Removing unreachable block (ram,0x0100179c) */
/* WARNING: Removing unreachable block (ram,0x01001fc4) */
/* WARNING: Removing unreachable block (ram,0x010017a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0200081c(int param_1,undefined4 param_2)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  byte extraout_r1;
  byte bVar5;
  byte extraout_r1_00;
  byte extraout_r1_01;
  byte extraout_r1_02;
  byte extraout_r1_03;
  byte extraout_r1_04;
  byte extraout_r1_05;
  byte bVar6;
  byte extraout_r1_06;
  byte bVar7;
  byte extraout_r1_07;
  byte bVar8;
  byte extraout_r1_08;
  byte bVar9;
  byte extraout_r1_09;
  byte bVar10;
  byte extraout_r1_10;
  byte extraout_r1_11;
  int iVar11;
  undefined **ppuVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  ushort *puVar26;
  byte *pbVar27;
  ushort *puVar28;
  ushort *puVar29;
  int iVar30;
  bool bVar31;
  bool bVar32;
  undefined1 uVar33;
  bool bVar34;
  undefined8 uVar35;
  
  if ((DAT_023cb610 & 2) != 0) {
    return CONCAT44(param_2,param_1);
  }
  if (DAT_02099001 != '\x01') {
    return CONCAT44(param_2,param_1);
  }
  if (DAT_02099000 != '\0') {
    return CONCAT44(param_1,&DAT_0b000158);
  }
  puRam0b0005b8 = &stack0xffffffd8;
  bVar31 = false;
  iRam0b0005d0 = param_1;
  if ((uRam0b0005d8 & 0x100) != 0) {
    bVar32 = iRam0b0005e0 == 0;
    iVar30 = iRam0b0005e0;
    if (0 < iRam0b0005e0) {
      iVar30 = param_1 - iRam0b0005e0;
      bVar32 = param_1 == iRam0b0005e0;
    }
    bVar31 = 0 < iRam0b0005e0 && SBORROW4(param_1,iRam0b0005e0);
    if (!bVar32 && iVar30 < 0 == bVar31) {
      iRam0b0005d0 = iRam0b0005e0;
    }
  }
  if ((uRam0b0005d8 & 0x200) != 0) {
    bVar32 = iRam0b0005e8 == 0;
    iVar30 = iRam0b0005e8;
    if (0 < iRam0b0005e8) {
      iVar30 = iRam0b0005d0 - iRam0b0005e8;
      bVar32 = iRam0b0005d0 == iRam0b0005e8;
    }
    bVar31 = 0 < iRam0b0005e8 && SBORROW4(iRam0b0005d0,iRam0b0005e8);
    if (!bVar32 && iVar30 < 0 == bVar31) {
      iRam0b0005d0 = iRam0b0005e8;
    }
  }
  uVar18 = uRam0b000560 + iRam0b0005d0 * 0x10000;
  ppuVar12 = &switchD_0200e01c::switchdataD_020154b0;
  pbVar13 = _DAT_0b000558;
  uVar4 = uRam0b00055c;
  uVar20 = uRam0b000564;
  uVar21 = uRam0b000568;
  uVar22 = uRam0b00056c;
  uVar23 = uRam0b000570;
  uVar16 = uRam0b000574;
  pbVar27 = pbRam0b000578;
  puVar29 = puRam0b00057c;
  iRam0b0005cc = param_1;
  do {
    uVar19 = uVar18;
    if ((iRam0b0005fc != 0) && ((uRam0b00059c & 8) != 0)) {
      iRam0b0005fc = 0;
      if (*pbVar27 == 0x76) {
        pbVar27 = pbVar27 + 1;
      }
      bVar31 = SBORROW4(uRam0b00059c & 3,2);
      if ((uRam0b00059c & 3) == 2) {
        uRam0b00059c = uRam0b00059c & 0xfffffff3;
        *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)pbVar27 - (int)pbVar13) >> 8);
        puVar29 = puVar29 + -1;
        *(byte *)puVar29 = (byte)((int)pbVar27 - (int)pbVar13);
        uVar19 = uVar18 - 0x130000;
      }
      else {
        uRam0b00059c = uRam0b00059c & 0xfffffff3;
        *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)pbVar27 - (int)pbVar13) >> 8);
        puVar29 = puVar29 + -1;
        *(byte *)puVar29 = (byte)((int)pbVar27 - (int)pbVar13);
        uVar19 = uVar18 - 0xd0000;
        pbVar27 = pbVar13 + 0x38;
      }
    }
    puVar28 = (ushort *)(pbVar27 + 1);
    bVar3 = (byte)(uVar16 >> 0x10);
    bVar10 = (byte)(uVar16 >> 0x18);
    bVar5 = (byte)(uVar4 >> 0x18);
    bVar1 = (byte)uVar19;
    bVar6 = (byte)(uVar20 >> 0x18);
    bVar7 = (byte)(uVar21 >> 0x18);
    bVar8 = (byte)(uVar22 >> 0x18);
    bVar9 = (byte)(uVar23 >> 0x18);
    uVar14 = uVar4;
    uVar24 = uVar16;
    switch((uint)ppuVar12[*pbVar27] & 0xfffffffe) {
    case 0x1000020:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000030:
      uVar21 = (uint)*puVar28 << 0x18;
      uVar20 = (*puVar28 & 0xff00) << 0x10;
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000060:
      uVar16 = (uVar20 | uVar21 >> 8) >> 0x10;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002d10();
        bVar5 = extraout_r1;
      }
      pbVar13[uVar16] = bVar5;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000090:
      bVar31 = 0xfeffffff < uVar21;
      uVar21 = uVar21 + 0x1000000;
      if (bVar31) {
        uVar20 = uVar20 + 0x1000000;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010000a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10000b0:
      uVar19 = uVar19 & 0xffffff29;
      bVar31 = SCARRY4(uVar20,0x1000000);
      uVar20 = uVar20 + 0x1000000;
      if ((int)uVar20 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (bVar31) {
        uVar19 = uVar19 | 4;
      }
      if (uVar20 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010000cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10000e0:
      bVar31 = SBORROW4(uVar20,0x1000000);
      uVar20 = uVar20 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar20 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar20 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (bVar31) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000110:
      uVar20 = (uint)(byte)*puVar28 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000130:
      uVar14 = uVar4 << 1;
      if ((bool)(bVar5 >> 7)) {
        uVar14 = uVar14 | 0x1000000;
      }
      uVar19 = uVar19 & 0xffffffec;
      if ((bool)(bVar5 >> 7)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000150:
      uVar16 = uVar19 & 0xffffff28 | uRam0b0005a4 & 0xff;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uRam0b0005a0;
      uRam0b0005a0 = uVar4;
      uRam0b0005a4 = uVar19;
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000180:
      uVar4 = uVar20 | uVar21 >> 8;
      uVar19 = uVar19 & 0xffffffec;
      if (CARRY4(uVar16,uVar4)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + uVar4;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10001a0:
      uVar16 = (uVar20 | uVar21 >> 8) >> 0x10;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002cd0();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010001c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)pbVar13[uVar16] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10001d0:
      bVar31 = uVar21 < 0x1000000;
      uVar21 = uVar21 - 0x1000000;
      if (bVar31) {
        uVar20 = uVar20 - 0x1000000;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010001e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10001f0:
      uVar19 = uVar19 & 0xffffff29;
      bVar31 = SCARRY4(uVar21,0x1000000);
      uVar21 = uVar21 + 0x1000000;
      if ((int)uVar21 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (bVar31) {
        uVar19 = uVar19 | 4;
      }
      if (uVar21 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100020c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000220:
      bVar31 = SBORROW4(uVar21,0x1000000);
      uVar21 = uVar21 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar21 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar21 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (bVar31) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000250:
      uVar21 = (uint)(byte)*puVar28 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000270:
      uVar4 = uVar4 >> 0x19;
      if ((bool)(bVar5 & 1)) {
        uVar4 = uVar4 | 0x80;
      }
      uVar19 = uVar19 & 0xffffffec;
      if ((bool)(bVar5 & 1)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 << 0x18;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10002a0:
      uVar20 = uVar20 - 0x1000000;
      if (uVar20 == 0) {
        iVar30 = 0;
        pbVar25 = pbVar27 + 2;
      }
      else {
        iVar30 = (int)(char)(byte)*puVar28;
        uVar19 = uVar19 - 0x50000;
        pbVar25 = pbVar27 + iVar30 + 2;
      }
      if (iVar30 == -2) {
        bVar3 = 0x27;
      }
      else {
        bVar3 = 0xd3;
      }
      *pbVar27 = bVar3;
      puVar26 = (ushort *)(pbVar25 + 1);
      uVar18 = uVar19 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x010002d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x7ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar25])();
        return uVar35;
      }
      break;
    case 0x10002e0:
      uVar23 = (uint)*puVar28 << 0x18;
      uVar22 = (*puVar28 & 0xff00) << 0x10;
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000310:
      uVar16 = (uVar22 | uVar23 >> 8) >> 0x10;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002d10();
        bVar5 = extraout_r1_00;
      }
      pbVar13[uVar16] = bVar5;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000340:
      bVar31 = 0xfeffffff < uVar23;
      uVar23 = uVar23 + 0x1000000;
      if (bVar31) {
        uVar22 = uVar22 + 0x1000000;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000360:
      uVar19 = uVar19 & 0xffffff29;
      bVar31 = SCARRY4(uVar22,0x1000000);
      uVar22 = uVar22 + 0x1000000;
      if ((int)uVar22 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (bVar31) {
        uVar19 = uVar19 | 4;
      }
      if (uVar22 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100037c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000390:
      bVar31 = SBORROW4(uVar22,0x1000000);
      uVar22 = uVar22 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar22 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar22 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (bVar31) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010003b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10003c0:
      uVar22 = (uint)(byte)*puVar28 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010003d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x10003e0:
      uVar16 = uVar19 & 0xffffffec;
      if ((bool)(bVar5 >> 7)) {
        uVar16 = uVar16 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 << 1 | (uVar19 & 1) << 0x18;
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000410:
      puVar26 = (ushort *)(pbVar27 + (char)(byte)*puVar28 + 2 + 1);
      uVar18 = uVar19 - 0xc0000;
                    /* WARNING: Could not recover jumptable at 0x01000420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xbffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[(char)(byte)*puVar28 + 2]])();
        return uVar35;
      }
      break;
    case 0x1000430:
      uVar4 = uVar22 | uVar23 >> 8;
      uVar19 = uVar19 & 0xffffffec;
      if (CARRY4(uVar16,uVar4)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + uVar4;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000450:
      uVar16 = (uVar22 | uVar23 >> 8) >> 0x10;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002cd0();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)pbVar13[uVar16] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000480:
      bVar31 = uVar23 < 0x1000000;
      uVar23 = uVar23 - 0x1000000;
      if (bVar31) {
        uVar22 = uVar22 - 0x1000000;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10004a0:
      uVar19 = uVar19 & 0xffffff29;
      bVar31 = SCARRY4(uVar23,0x1000000);
      uVar23 = uVar23 + 0x1000000;
      if ((int)uVar23 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (bVar31) {
        uVar19 = uVar19 | 4;
      }
      if (uVar23 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010004bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10004d0:
      bVar31 = SBORROW4(uVar23,0x1000000);
      uVar23 = uVar23 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar23 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar23 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (bVar31) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010004f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000500:
      uVar23 = (uint)(byte)*puVar28 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000520:
      uVar16 = uVar19 & 0xffffffec;
      if ((bool)(bVar5 & 1)) {
        uVar16 = uVar16 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100053c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar19 << 0x1f | (uVar4 >> 0x19) << 0x18;
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000550:
      if ((uVar19 & 0x40) == 0) {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      else {
        pbVar27 = pbVar27 + 2;
      }
      puVar26 = (ushort *)(pbVar27 + 1);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x1000580:
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (uint)*puVar28 << 0x10;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x10005a0:
      uVar2 = *puVar28;
      pbVar13[uVar2] = bVar3;
      pbVar13[uVar2 + 1] = bVar10;
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0x100000;
                    /* WARNING: Could not recover jumptable at 0x010005c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xfffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x10005d0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x010005dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + 0x10000;
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10005f0:
      uVar4 = uVar16 & 0xff000000;
      uVar19 = uVar19 & 0xffffff29;
      if ((int)(uVar4 + 0x1000000) < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (SCARRY4(uVar4,0x1000000)) {
        uVar19 = uVar19 | 4;
      }
      if (uVar4 == 0xff000000) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + 0x1000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000620:
      uVar4 = uVar16 & 0xff000000;
      uVar17 = uVar19 & 0xffffff29 | 2;
      if ((int)(uVar4 - 0x1000000) < 0) {
        uVar17 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar4 == 0x1000000) {
        uVar17 = uVar17 | 0x40;
      }
      if (SBORROW4(uVar4,0x1000000)) {
        uVar17 = uVar17 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 - 0x1000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000650:
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | (uint)(byte)*puVar28 << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000670:
      uVar20 = uVar20 - 0x1000000;
      iVar30 = ((uVar19 - (uVar20 >> 8)) - (uVar20 >> 6)) - (uVar20 >> 5);
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar20 = 0;
      uVar18 = iVar30 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x01000690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x7ffff < iVar30) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x10006a0:
      if ((uVar19 & 0x40) == 0) {
        pbVar27 = pbVar27 + 2;
      }
      else {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      puVar26 = (ushort *)(pbVar27 + 1);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010006bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x10006d0:
      uVar19 = uVar19 & 0xffffffec;
      if (CARRY4(uVar16,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010006e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 * 2;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10006f0:
      uVar16 = (uint)*puVar28;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002cfc();
      }
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0x100000;
                    /* WARNING: Could not recover jumptable at 0x01000720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (uint)CONCAT11(pbVar13[uVar16 + 1],pbVar13[uVar16]) << 0x10;
      if (uVar18 != 0 && 0xfffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000730:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x0100073c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 - 0x10000;
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000750:
      uVar19 = uVar19 & 0xffffff29;
      uVar4 = uVar16 * 0x100 + 0x1000000;
      if ((int)uVar4 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (SCARRY4(uVar16 * 0x100,0x1000000)) {
        uVar19 = uVar19 | 4;
      }
      if (uVar4 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar4 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000780:
      uVar4 = uVar16 * 0x100 - 0x1000000;
      uVar17 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar4 < 0) {
        uVar17 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar4 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (SBORROW4(uVar16 * 0x100,0x1000000)) {
        uVar17 = uVar17 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010007ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar4 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10007c0:
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010007d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | (uint)(byte)*puVar28 << 0x10;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x10007e0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = (uVar19 | 0x12) - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010007f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)(uVar19 | 0x12)) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000800:
      if ((uVar19 & 1) == 0) {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      else {
        pbVar27 = pbVar27 + 2;
      }
      puVar26 = (ushort *)(pbVar27 + 1);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100081c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x1000830:
      puVar29 = (ushort *)(pbVar13 + *puVar28);
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000850:
      uVar16 = (uint)*puVar28;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002d10();
        bVar5 = extraout_r1_01;
      }
      pbVar13[uVar16] = bVar5;
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xd0000;
                    /* WARNING: Could not recover jumptable at 0x01000874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xcffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000880:
      puVar29 = (ushort *)((int)puVar29 + 1);
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x0100088c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10008a0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar19 = uVar19 & 0xffffff29;
      iVar30 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000 + 0x1000000;
      if (iVar30 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (SCARRY4((uint)pbVar13[uVar16 >> 0x10] * 0x1000000,0x1000000)) {
        uVar19 = uVar19 | 4;
      }
      if (iVar30 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      bVar3 = (byte)((uint)iVar30 >> 0x18);
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar3 = extraout_r1_02;
      }
      pbVar13[uVar16 >> 0x10] = bVar3;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010008e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10008f0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      iVar30 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000 + -0x1000000;
      uVar4 = uVar19 & 0xffffff29 | 2;
      if (iVar30 == 0) {
        uVar4 = uVar19 & 0xffffff29 | 0x42;
      }
      if (iVar30 < 0) {
        uVar4 = uVar4 | 0x80;
      }
      if (SBORROW4((uint)pbVar13[uVar16 >> 0x10] * 0x1000000,0x1000000)) {
        uVar4 = uVar4 | 4;
      }
      bVar3 = (byte)((uint)iVar30 >> 0x18);
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar3 = extraout_r1_03;
      }
      pbVar13[uVar16 >> 0x10] = bVar3;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar4 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01000934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0xaffff < (int)uVar4) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000940:
      bVar3 = (byte)*puVar28;
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar3 = extraout_r1_04;
      }
      pbVar13[uVar16 >> 0x10] = bVar3;
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01000958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000960:
      uVar16 = uVar19 & 0xffffffed | 1;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000980:
      if ((uVar19 & 1) == 0) {
        pbVar27 = pbVar27 + 2;
      }
      else {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      puVar26 = (ushort *)(pbVar27 + 1);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100099c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x10009b0:
      uVar19 = uVar19 & 0xffffffec;
      uVar4 = ((int)puVar29 - (int)pbVar13) * 0x10000;
      if (CARRY4(uVar16,uVar4)) {
        uVar19 = uVar19 | 1;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010009c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 + uVar4;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10009d0:
      uVar16 = (uint)*puVar28;
      if (0x1fff < uVar16) {
        uVar16 = FUN_01002cd0();
      }
      puVar26 = (ushort *)(pbVar27 + 4);
      uVar18 = uVar19 - 0xd0000;
                    /* WARNING: Could not recover jumptable at 0x010009f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)pbVar13[uVar16] << 0x18;
      if (uVar18 != 0 && 0xcffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
        return uVar35;
      }
      break;
    case 0x1000a00:
      puVar29 = (ushort *)((int)puVar29 + -1);
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01000a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000a20:
      uVar19 = uVar19 & 0xffffff29;
      uVar14 = uVar4 + 0x1000000;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (SCARRY4(uVar4,0x1000000)) {
        uVar19 = uVar19 | 4;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000a50:
      uVar14 = uVar4 - 0x1000000;
      uVar16 = uVar19 & 0xffffff29 | 2;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff29 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (SBORROW4(uVar4,0x1000000)) {
        uVar16 = uVar16 | 4;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000a80:
      puVar26 = (ushort *)(pbVar27 + 3);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)(byte)*puVar28 << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1000aa0:
      if ((uVar19 & 1) == 0) {
        uVar16 = uVar19 & 0xffffffed | 1;
      }
      else {
        uVar16 = uVar19 & 0xfffffffc | 0x10;
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ad0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ae0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar21;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b00:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar22;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b20:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar23;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b40:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar16 & 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b60:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar16 << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000b80:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ba0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000bc0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar20;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000be0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000bf0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar22;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c10:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar23;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c30:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar16 & 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c50:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar16 << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c70:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000c90:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar21 = uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000cb0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar20;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000cd0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar21;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000cf0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d00:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar23;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d20:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar16 & 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d40:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar16 << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d60:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000d80:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000da0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar20;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000dc0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar21;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000de0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar22;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e00:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e10:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar16 & 0xff000000;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e30:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar16 << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e50:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e70:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000e90:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar20;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000eb0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar21;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ed0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar22;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ef0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar23;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f10:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f20:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | (uVar16 & 0xff0000) << 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f40:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01000f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f70:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff0000 | uVar4;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000f90:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar20 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000fb0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar21 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000fd0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01000fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar22 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1000ff0:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar23 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001010:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | (uVar16 & 0xff000000) >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001030:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001040:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100105c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | (uint)pbVar13[uVar16 >> 0x10] << 0x10;
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001070:
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = uVar16 & 0xff000000 | uVar4 >> 8;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001090:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar6 = extraout_r1_05;
      }
      pbVar13[uVar16 >> 0x10] = bVar6;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10010b0:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar7 = extraout_r1_06;
      }
      pbVar13[uVar16 >> 0x10] = bVar7;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10010d0:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar8 = extraout_r1_07;
      }
      pbVar13[uVar16 >> 0x10] = bVar8;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010010e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10010f0:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar9 = extraout_r1_08;
      }
      pbVar13[uVar16 >> 0x10] = bVar9;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001110:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar10 = extraout_r1_09;
      }
      pbVar13[uVar16 >> 0x10] = bVar10;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001130:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar3 = extraout_r1_10;
      }
      pbVar13[uVar16 >> 0x10] = bVar3;
      puVar26 = (ushort *)(pbVar27 + 2);
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001160:
      uVar18 = (uVar19 & 0xff) - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = puVar28;
      if (uVar18 != 0 && 0x3ffff < (uVar19 & 0xff)) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x1001180:
      if (0x1fffffff < uVar16) {
        FUN_01002d2c();
        bVar5 = extraout_r1_11;
      }
      pbVar13[uVar16 >> 0x10] = bVar5;
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10011a0:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar20;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10011c0:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar21;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10011e0:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010011ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar22;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001200:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar23;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001220:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar16 & 0xff000000;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001240:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100124c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar16 << 8;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001260:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001280:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001290:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar20;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar20)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar20)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010012b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10012c0:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar21;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar21)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar21)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010012e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10012f0:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar22;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar22)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar22)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001320:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar23;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar23)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar23)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001350:
      uVar16 = uVar16 & 0xff000000;
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar16;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001380:
      uVar16 = uVar16 * 0x100;
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar16;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010013a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10013b0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar19 = uVar19 & 0xffffff28;
      uVar16 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar14 = uVar4 + uVar16;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010013dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10013f0:
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 * 2;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar4)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar4)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001420:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar20;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar20)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar20)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x1001460:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar21;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar21)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar21)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10014a0:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar22;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar22)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar22)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010014d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10014e0:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar23;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar23)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar23)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x1001520:
      uVar16 = uVar16 & 0xff000000;
      uVar17 = uVar19 & 0xffffff28;
      uVar18 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar18 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 + uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x1001560:
      uVar16 = uVar16 * 0x100;
      uVar17 = uVar19 & 0xffffff28;
      uVar18 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar18 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 + uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10015a0:
      uVar33 = SBORROW4(uVar16,0x20000000);
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar17 = uVar19 & 0xffffff28;
      uVar18 = uVar4;
      if ((bool)(bVar1 & 1)) {
        uVar33 = SCARRY4(uVar4,0x1000000);
        uVar18 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if ((bool)uVar33) {
        uVar17 = uVar17 | 4;
      }
      uVar16 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar14 = uVar18 + uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010015dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10015f0:
      uVar17 = uVar19 & 0xffffff28;
      uVar16 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar16 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar16 + uVar4;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar16,uVar4)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar16,uVar4)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])((uint)(byte)*puVar28,uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x1001630:
      uVar16 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar20;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar20) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar20)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001660:
      uVar16 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar21;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar21) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar21)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001690:
      uVar16 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar22;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar22) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar22)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10016c0:
      uVar16 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar23;
      if ((int)uVar14 < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar23) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar23)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010016e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10016f0:
      uVar16 = uVar16 & 0xff000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 - uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001720:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 + uVar16 * -0x100;
      if ((int)uVar14 < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16 * 0x100) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16 * 0x100)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001750:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar14 = uVar4 + (uint)pbVar13[uVar16 >> 0x10] * -0x1000000;
      if ((int)uVar14 < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001790:
      uVar16 = uVar19 & 0xffffff28 | 0x42;
      if (SBORROW4(uVar4,uVar4)) {
        uVar16 = uVar19 & 0xffffff28 | 0x46;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = 0;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10017c0:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar20;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar20) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar20)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010017f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001800:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar21;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar21) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar21)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001840:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar22;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar22) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar22)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001880:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar23;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar23) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar23)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010018b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10018c0:
      uVar16 = uVar16 & 0xff000000;
      uVar15 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uVar19 & 1) * 0x1000000;
      uVar17 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar18) {
        uVar15 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar15 = uVar15 | 4;
      }
      uVar14 = uVar17 - uVar16;
      if ((int)uVar14 < 0) {
        uVar15 = uVar15 | 0x80;
      }
      if (uVar14 == 0) {
        uVar15 = uVar15 | 0x40;
      }
      if (uVar17 < uVar16) {
        uVar15 = uVar15 | 1;
      }
      if (SBORROW4(uVar17,uVar16)) {
        uVar15 = uVar15 ^ 4;
      }
      uVar18 = uVar15 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010018f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar15) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001900:
      uVar15 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uVar19 & 1) * 0x1000000;
      uVar17 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar18) {
        uVar15 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar15 = uVar15 | 4;
      }
      uVar14 = uVar17 + uVar16 * -0x100;
      if ((int)uVar14 < 0) {
        uVar15 = uVar15 | 0x80;
      }
      if (uVar14 == 0) {
        uVar15 = uVar15 | 0x40;
      }
      if (uVar17 < uVar16 * 0x100) {
        uVar15 = uVar15 | 1;
      }
      if (SBORROW4(uVar17,uVar16 * 0x100)) {
        uVar15 = uVar15 ^ 4;
      }
      uVar18 = uVar15 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar15) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001940:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar15 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uVar19 & 1) * 0x1000000;
      uVar17 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar18) {
        uVar15 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar15 = uVar15 | 4;
      }
      uVar4 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar14 = uVar17 + (uint)pbVar13[uVar16 >> 0x10] * -0x1000000;
      if ((int)uVar14 < 0) {
        uVar15 = uVar15 | 0x80;
      }
      if (uVar14 == 0) {
        uVar15 = uVar15 | 0x40;
      }
      if (uVar17 < uVar4) {
        uVar15 = uVar15 | 1;
      }
      if (SBORROW4(uVar17,uVar4)) {
        uVar15 = uVar15 ^ 4;
      }
      uVar18 = uVar15 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar15) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001990:
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar16 = (uVar19 & 1) * 0x1000000;
      uVar18 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar16) {
        uVar17 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 - uVar4;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar18 < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar18,uVar4)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010019c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10019d0:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 & uVar20) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010019ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 & uVar20;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001a00:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 & uVar21) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 & uVar21;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001a30:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 & uVar22) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 & uVar22;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001a60:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 & uVar23) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 & uVar23;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001a90:
      uVar14 = uVar4 & uVar16 & 0xff000000;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001ac0:
      uVar14 = uVar4 & uVar16 << 8;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001af0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar14 = uVar4 & (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001b20:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar4 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001b50:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 ^ uVar20) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ uVar20;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001b80:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 ^ uVar21) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ uVar21;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001bb0:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 ^ uVar22) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ uVar22;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001be0:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 ^ uVar23) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 ^ uVar23;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001c10:
      uVar14 = uVar4 ^ uVar16 & 0xff000000;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001c40:
      uVar14 = uVar4 ^ uVar16 << 8;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001c70:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar14 = uVar4 ^ (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001ca0:
      uVar16 = uVar19 & 0xffffff28 | (uint)*DAT_01001e44;
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = 0;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001cd0:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 | uVar20) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 | uVar20;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001d00:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 | uVar21) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 | uVar21;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001d30:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 | uVar22) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 | uVar22;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001d60:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[(uVar4 | uVar23) >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = uVar4 | uVar23;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001d90:
      uVar14 = uVar4 | uVar16 & 0xff000000;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001dc0:
      uVar14 = uVar4 | uVar16 << 8;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001df0:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar14 = uVar4 | (uint)pbVar13[uVar16 >> 0x10] << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar14 >> 0x18];
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001e20:
      uVar16 = uVar19 & 0xffffff28 | (uint)DAT_01001e44[uVar4 >> 0x18];
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001e50:
      uVar16 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar20) < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar20) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar20) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar20)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001e80:
      uVar16 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar21) < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar21) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar21) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar21)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001eb0:
      uVar16 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar22) < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar22) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar22) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar22)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001ee0:
      uVar16 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar23) < 0) {
        uVar16 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar23) {
        uVar16 = uVar16 | 0x40;
      }
      if (uVar4 < uVar23) {
        uVar16 = uVar16 | 1;
      }
      if (SBORROW4(uVar4,uVar23)) {
        uVar16 = uVar16 | 4;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001f10:
      uVar16 = uVar16 & 0xff000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 - uVar16) < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar16) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001f40:
      uVar18 = uVar16 * 0x100;
      uVar17 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 + uVar16 * -0x100) < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar18) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001f70:
      if (0x1fffffff < uVar16) {
        FUN_01002cec();
      }
      uVar18 = (uint)pbVar13[uVar16 >> 0x10] * 0x1000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 + (uint)pbVar13[uVar16 >> 0x10] * -0x1000000) < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar18) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar18) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01001fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001fb0:
      uVar16 = uVar19 & 0xffffff28 | 0x42;
      if (SBORROW4(uVar4,uVar4)) {
        uVar16 = uVar19 & 0xffffff28 | 0x46;
      }
      uVar18 = uVar16 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x01001fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1001fe0:
      if ((uVar19 & 0x40) == 0) {
        pbVar27 = (byte *)((int)puVar29 + 1);
        uVar2 = *puVar29;
        puVar29 = puVar29 + 1;
        uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
        if (uVar18 != 0 && 0xaffff < (int)uVar19) {
          uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
          return uVar35;
        }
      }
      else {
LAB_01002c20:
        uVar18 = uVar19 - 0x50000;
                    /* WARNING: Could not recover jumptable at 0x01002c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar26 = (ushort *)(pbVar27 + 2);
        if (uVar18 != 0 && 0x4ffff < (int)uVar19) {
          uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
          return uVar35;
        }
      }
      break;
    case 0x1002010:
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = (*puVar29 & 0xff00) << 0x10;
      uVar21 = (uint)*puVar29 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002040:
      if ((uVar19 & 0x40) == 0) {
        uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
        if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
          uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
          return uVar35;
        }
      }
      else {
LAB_01002c00:
        uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar26 = (ushort *)(pbVar27 + 4);
        if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
          uVar35 = (*(code *)ppuVar12[pbVar27[3]])();
          return uVar35;
        }
      }
      break;
    case 0x1002070:
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002090:
      if ((uVar19 & 0x40) != 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010020c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10020d0:
      *(byte *)((int)puVar29 + -1) = bVar6;
      *(byte *)(puVar29 + -1) = (byte)(uVar20 >> 0x10) | bVar7;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010020ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002100:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar19 = uVar19 & 0xffffff28;
      uVar14 = uVar4 + uVar16;
      if ((int)uVar14 < 0) {
        uVar19 = uVar19 | 0x80;
      }
      if (uVar14 == 0) {
        uVar19 = uVar19 | 0x40;
      }
      if (CARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 1;
      }
      if (SCARRY4(uVar4,uVar16)) {
        uVar19 = uVar19 | 4;
      }
      uVar18 = uVar19 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002130:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar13])();
        return uVar35;
      }
      break;
    case 0x1002160:
      if ((uVar19 & 0x40) == 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002190:
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010021a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x10021b0:
      if ((uVar19 & 0x40) == 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010021d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10021e0:
                    /* WARNING: Could not recover jumptable at 0x010021e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28 + 0x100])();
      return uVar35;
    case 0x10021f0:
      if ((uVar19 & 0x40) == 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002230:
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x0100225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002270:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar17 = uVar19 & 0xffffff28;
      uVar18 = uVar4;
      if ((bool)(bVar1 & 1)) {
        bVar31 = SCARRY4(uVar4,0x1000000);
        uVar18 = uVar4 + 0x1000000;
      }
      if ((bool)(bVar1 & 1) && 0xfeffffff < uVar4) {
        uVar17 = uVar17 | 1;
      }
      if (bVar31) {
        uVar17 = uVar17 | 4;
      }
      uVar14 = uVar18 + uVar16;
      if ((int)uVar14 < 0) {
        uVar17 = uVar17 | 0x80;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (CARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 | 1;
      }
      if (SCARRY4(uVar18,uVar16)) {
        uVar17 = uVar17 ^ 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010022a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])((uint)pbVar27[2],uVar19 >> 1);
        return uVar35;
      }
      break;
    case 0x10022b0:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010022d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 9);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[8]])();
        return uVar35;
      }
      break;
    case 0x10022e0:
      if ((uVar19 & 1) != 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002310:
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = (*puVar29 & 0xff00) << 0x10;
      uVar23 = (uint)*puVar29 << 0x18;
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002340:
      if ((uVar19 & 1) != 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002370:
      if (uVar20 - 0x1000000 == 0) {
        pbVar27 = pbVar27 + 2;
      }
      else {
        uVar19 = uVar19 - 0x50000;
        pbVar27 = pbVar27 + (char)(byte)*puVar28 + 2;
      }
      uVar18 = uVar19 - 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0100238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uVar20 - 0x1000000;
      puVar26 = (ushort *)(pbVar27 + 1);
      if (uVar18 != 0 && 0x7ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[*pbVar27])();
        return uVar35;
      }
      break;
    case 0x10023a0:
      if ((uVar19 & 1) != 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010023d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10023e0:
      *(byte *)((int)puVar29 + -1) = bVar8;
      *(byte *)(puVar29 + -1) = (byte)(uVar22 >> 0x10) | bVar9;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010023fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002410:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      uVar14 = uVar4 + (uint)(byte)*puVar28 * -0x1000000;
      if ((int)uVar14 < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar14 == 0) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x0100243c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002450:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100246c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x11);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x10]])();
        return uVar35;
      }
      break;
    case 0x1002480:
      if ((uVar19 & 1) == 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010024a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x10024b0:
      uVar4 = uVar20 | uVar21 >> 8;
      uVar17 = uVar22 | uVar23 >> 8;
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010024ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar20 = uRam0b0005a8 & 0xff000000;
      uVar21 = uRam0b0005a8 << 8;
      uVar22 = uRam0b0005ac & 0xff000000;
      uVar23 = uRam0b0005ac << 8;
      uVar24 = uRam0b0005b0;
      puVar26 = (ushort *)(pbVar27 + 2);
      uRam0b0005a8 = uVar4;
      uRam0b0005ac = uVar17;
      uRam0b0005b0 = uVar16;
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002500:
      if ((uVar19 & 1) == 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002530:
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = 0xff000000;
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002550:
      if ((uVar19 & 1) == 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002590:
                    /* WARNING: Could not recover jumptable at 0x010025a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28 + 0x300])(uRam0b000584);
      return uVar35;
    case 0x10025b0:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar15 = uVar19 & 0xffffff28 | 2;
      uVar18 = (uVar19 & 1) * 0x1000000;
      uVar17 = uVar4 + (uVar19 & 1) * -0x1000000;
      if (uVar4 < uVar18) {
        uVar15 = uVar19 & 0xffffff28 | 3;
      }
      if (SBORROW4(uVar4,uVar18)) {
        uVar15 = uVar15 | 4;
      }
      uVar14 = uVar17 + (uint)(byte)*puVar28 * -0x1000000;
      if ((int)uVar14 < 0) {
        uVar15 = uVar15 | 0x80;
      }
      if (uVar14 == 0) {
        uVar15 = uVar15 | 0x40;
      }
      if (uVar17 < uVar16) {
        uVar15 = uVar15 | 1;
      }
      if (SBORROW4(uVar17,uVar16)) {
        uVar15 = uVar15 ^ 4;
      }
      uVar18 = uVar15 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010025ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar15) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002600:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100261c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x19);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x18]])();
        return uVar35;
      }
      break;
    case 0x1002630:
      if ((uVar19 & 4) != 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002660:
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (uint)*puVar29 << 0x10;
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002680:
      if ((uVar19 & 4) != 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x010026a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10026b0:
      uVar2 = *puVar29;
      *(byte *)puVar29 = bVar3;
      bVar3 = *(byte *)((int)puVar29 + 1);
      *(byte *)((int)puVar29 + 1) = bVar10;
      uVar18 = uVar19 - 0x130000;
                    /* WARNING: Could not recover jumptable at 0x010026d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar24 = (uint)CONCAT11(bVar3,(byte)uVar2) << 0x10;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x12ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10026e0:
      if ((uVar19 & 4) != 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002720:
      *(byte *)((int)puVar29 + -1) = bVar10;
      *(byte *)(puVar29 + -1) = bVar3;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002740:
      uVar14 = uVar4 & (uint)(byte)*puVar28 << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (uVar14 >> 0x18));
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002770:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x0100278c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x21);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x20]])();
        return uVar35;
      }
      break;
    case 0x10027a0:
      if ((uVar19 & 4) == 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010027c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x10027d0:
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010027dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uVar16 >> 0x10) + 1);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[uVar16 >> 0x10]])();
        return uVar35;
      }
      break;
    case 0x10027f0:
      if ((uVar19 & 4) == 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002820:
      uVar24 = uVar22 | uVar23 >> 8;
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0100283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar22 = uVar16 & 0xff000000;
      uVar23 = uVar16 << 8;
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002850:
      if ((uVar19 & 4) == 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002890:
                    /* WARNING: Could not recover jumptable at 0x01002898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28 + 0x200])();
      return uVar35;
    case 0x10028a0:
      uVar14 = uVar4 ^ (uint)(byte)*puVar28 << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (uVar14 >> 0x18));
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x010028c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x10028d0:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x010028ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x29);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x28]])();
        return uVar35;
      }
      break;
    case 0x1002900:
      if ((uVar19 & 0x80) != 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002930:
      uVar16 = uVar19 & 0xffffff28 | *puVar29 & 0xff;
      uVar18 = uVar16 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (uint)(*puVar29 >> 8) << 0x18;
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0x9ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002960:
      if ((uVar19 & 0x80) != 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002990:
      uRam0b00059c = uRam0b00059c & 0xfffffff3;
      uVar18 = uVar19 - 0x40000;
                    /* WARNING: Could not recover jumptable at 0x010029a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      if (uVar18 != 0 && 0x3ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x10029b0:
      if ((uVar19 & 0x80) != 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x010029e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x10029f0:
      *(byte *)((int)puVar29 + -1) = bVar5;
      *(byte *)(puVar29 + -1) = bVar1 | (byte)(uVar4 >> 0x10);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002a20:
      uVar14 = uVar4 | (uint)(byte)*puVar28 << 0x18;
      uVar16 = uVar19 & 0xffffff28 | (uint)*(byte *)(DAT_01002bf4 + (uVar14 >> 0x18));
      uVar18 = uVar16 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar16) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002a50:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x31);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x30]])();
        return uVar35;
      }
      break;
    case 0x1002a80:
      if ((uVar19 & 0x80) == 0) goto LAB_01002c20;
      pbVar27 = (byte *)((int)puVar29 + 1);
      uVar2 = *puVar29;
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + (uint)*pbVar27 * 0x100 + (uint)(byte)uVar2 + 1);
      puVar29 = puVar29 + 1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[(uint)*pbVar27 * 0x100 + (uint)(byte)uVar2]])();
        return uVar35;
      }
      break;
    case 0x1002ab0:
      uVar18 = uVar19 - 0x60000;
                    /* WARNING: Could not recover jumptable at 0x01002abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 2);
      puVar29 = (ushort *)(pbVar13 + (uVar16 >> 0x10));
      if (uVar18 != 0 && 0x5ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
        return uVar35;
      }
      break;
    case 0x1002ad0:
      if ((uVar19 & 0x80) == 0) goto LAB_01002c00;
      uVar18 = uVar19 - 0xa0000;
                    /* WARNING: Could not recover jumptable at 0x01002af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      if (uVar18 != 0 && 0x9ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002b00:
      uRam0b00059c = uRam0b00059c | 0xc;
      uRam0b000580 = (int)uVar19 >> 0x10;
                    /* WARNING: Could not recover jumptable at 0x01002b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28])();
      return uVar35;
    case 0x1002b30:
      if ((uVar19 & 0x80) == 0) goto LAB_01002c00;
      pbVar27 = (byte *)((int)puVar28 + (2 - (int)pbVar13));
      *(byte *)((int)puVar29 + -1) = (byte)((uint)pbVar27 >> 8);
      *(byte *)(puVar29 + -1) = (byte)pbVar27;
      uVar18 = uVar19 - 0x110000;
                    /* WARNING: Could not recover jumptable at 0x01002b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + *puVar28 + 1);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0x10ffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[*puVar28]])();
        return uVar35;
      }
      break;
    case 0x1002b70:
                    /* WARNING: Could not recover jumptable at 0x01002b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar35 = (*(code *)ppuVar12[(byte)*puVar28 + 0x300])(uRam0b000588);
      return uVar35;
    case 0x1002b90:
      uVar16 = (uint)(byte)*puVar28 * 0x1000000;
      uVar17 = uVar19 & 0xffffff28 | 2;
      if ((int)(uVar4 + (uint)(byte)*puVar28 * -0x1000000) < 0) {
        uVar17 = uVar19 & 0xffffff28 | 0x82;
      }
      if (uVar4 == uVar16) {
        uVar17 = uVar17 | 0x40;
      }
      if (uVar4 < uVar16) {
        uVar17 = uVar17 | 1;
      }
      if (SBORROW4(uVar4,uVar16)) {
        uVar17 = uVar17 | 4;
      }
      uVar18 = uVar17 - 0x70000;
                    /* WARNING: Could not recover jumptable at 0x01002bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar27 + 3);
      if (uVar18 != 0 && 0x6ffff < (int)uVar17) {
        uVar35 = (*(code *)ppuVar12[pbVar27[2]])();
        return uVar35;
      }
      break;
    case 0x1002bd0:
      *(byte *)((int)puVar29 + -1) = (byte)((uint)((int)puVar28 - (int)pbVar13) >> 8);
      *(byte *)(puVar29 + -1) = (byte)((int)puVar28 - (int)pbVar13);
      uVar18 = uVar19 - 0xb0000;
                    /* WARNING: Could not recover jumptable at 0x01002bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar26 = (ushort *)(pbVar13 + 0x39);
      puVar29 = puVar29 + -1;
      if (uVar18 != 0 && 0xaffff < (int)uVar19) {
        uVar35 = (*(code *)ppuVar12[pbVar13[0x38]])();
        return uVar35;
      }
    }
    uVar16 = uRam0b000580;
    pbVar27 = (byte *)((int)puVar26 + -1);
    bVar31 = false;
    uVar19 = uRam0b000580;
    if (0 < (int)uRam0b000580) {
      uRam0b000580 = 0;
      bVar31 = SCARRY4(uVar18,uVar16 * 0x10000);
      uVar18 = uVar18 + uVar16 * 0x10000;
      uVar19 = uVar18;
    }
    uVar4 = uVar14;
    uVar16 = uVar24;
    if (uVar19 == 0 || (int)uVar19 < 0 != bVar31) {
      if ((uRam0b0005d8 & 0x300) == 0) {
        iVar30 = iRam0b0005cc - iRam0b0005d0;
        if (iVar30 != 0 && iRam0b0005d0 <= iRam0b0005cc) {
          if (iVar30 < iRam0b0005d0) {
            iRam0b0005d0 = iVar30;
          }
                    /* WARNING: Could not recover jumptable at 0x0200e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iRam0b0005cc = iVar30;
          uVar35 = (*(code *)ppuVar12[*pbVar27])();
          return uVar35;
        }
      }
      else {
        if ((uRam0b0005d8 & 0x100) != 0) {
          iVar30 = iRam0b0005dc;
          if (iRam0b0005dc < 1) {
            iVar30 = iRam0b0005d0;
          }
          bVar34 = SBORROW4(iRam0b0005e0,iRam0b0005d0);
          iVar11 = iRam0b0005e0 - iRam0b0005d0;
          bVar31 = iVar11 < 0;
          bVar32 = iVar11 == 0;
          if (bVar32 || iRam0b0005e0 < iRam0b0005d0) {
            uRam0b0005d8 = uRam0b0005d8 | 1;
          }
          do {
            if (bVar32 || bVar31 != bVar34) {
              bVar34 = SCARRY4(iVar11,iVar30);
              iVar11 = iVar11 + iVar30;
              bVar31 = iVar11 < 0;
              bVar32 = iVar11 == 0;
            }
            iRam0b0005e0 = iVar11;
          } while (bVar31 != bVar34);
        }
        if ((uRam0b0005d8 & 0x200) != 0) {
          iVar30 = iRam0b0005e4;
          if (iRam0b0005e4 < 1) {
            iVar30 = iRam0b0005d0;
          }
          bVar34 = SBORROW4(iRam0b0005e8,iRam0b0005d0);
          iVar11 = iRam0b0005e8 - iRam0b0005d0;
          bVar31 = iVar11 < 0;
          bVar32 = iVar11 == 0;
          if (bVar32 || iRam0b0005e8 < iRam0b0005d0) {
            uRam0b0005d8 = uRam0b0005d8 | 2;
          }
          do {
            if (bVar32 || bVar31 != bVar34) {
              bVar34 = SCARRY4(iVar11,iVar30);
              iVar11 = iVar11 + iVar30;
              bVar31 = iVar11 < 0;
              bVar32 = iVar11 == 0;
            }
            iRam0b0005e8 = iVar11;
          } while (bVar31 != bVar34);
        }
        iVar30 = iRam0b0005cc - iRam0b0005d0;
        if (iVar30 != 0 && iRam0b0005d0 <= iRam0b0005cc) {
          iRam0b0005d0 = iVar30;
          if ((uRam0b0005d8 & 0x100) != 0) {
            bVar31 = iRam0b0005e0 == 0;
            iVar11 = iRam0b0005e0;
            if (0 < iRam0b0005e0) {
              iVar11 = iVar30 - iRam0b0005e0;
              bVar31 = iVar30 == iRam0b0005e0;
            }
            if (!bVar31 && iVar11 < 0 == (0 < iRam0b0005e0 && SBORROW4(iVar30,iRam0b0005e0))) {
              iRam0b0005d0 = iRam0b0005e0;
            }
          }
          if ((uRam0b0005d8 & 0x200) != 0) {
            bVar31 = iRam0b0005e8 == 0;
            iVar11 = iRam0b0005e8;
            if (0 < iRam0b0005e8) {
              iVar11 = iRam0b0005d0 - iRam0b0005e8;
              bVar31 = iRam0b0005d0 == iRam0b0005e8;
            }
            if (!bVar31 && iVar11 < 0 == (0 < iRam0b0005e8 && SBORROW4(iRam0b0005d0,iRam0b0005e8)))
            {
              iRam0b0005d0 = iRam0b0005e8;
            }
          }
                    /* WARNING: Could not recover jumptable at 0x0200e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iRam0b0005cc = iVar30;
          uVar35 = (**(code **)(iRam0b0005ec + (uint)*pbVar27 * 4))();
          return uVar35;
        }
      }
      _DAT_0b000558 = pbVar13;
      uRam0b00055c = uVar14;
      uRam0b000560 = uVar18;
      uRam0b000564 = uVar20;
      uRam0b000568 = uVar21;
      uRam0b00056c = uVar22;
      uRam0b000570 = uVar23;
      uRam0b000574 = uVar24;
      pbRam0b000578 = pbVar27;
      puRam0b00057c = puVar29;
      return CONCAT44(0xb000580,(int)uVar18 >> 0x10);
    }
  } while( true );
}


// 0x02000a2c  loop_over_state

void FUN_02000a2c(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_0200b438();
  uVar2 = DAT_0b000010;
  uVar4 = DAT_0b000004;
  uVar1 = DAT_0b000000;
  FUN_020090e8();
  DAT_0b000080 = 4;
  FUN_02000568(0x22);
  DAT_0b000080 = 0;
  (*DAT_023dcea8)(0);
  FUN_02000538(uVar2);
  FUN_020006b8(0);
  FUN_02004ef4(&DAT_0b000158,1,0);
  if (uVar4 < 2) {
    uVar5 = 2;
    uVar4 = (uint)(uVar4 < 2);
  }
  else {
    uVar5 = 1;
    do {
      FUN_020090e8(uVar5);
      DAT_0b000080 = 4;
      FUN_02000568(0x22);
      DAT_0b000080 = 0;
      (*DAT_023dcea8)(uVar5);
      FUN_02000538(uVar2);
      uVar3 = uVar5 + 1;
      FUN_020006b8(uVar5);
      uVar5 = uVar3;
    } while (uVar4 != uVar3);
    uVar5 = uVar4 + 1;
  }
  FUN_02009144(uVar4);
  DAT_0b00007c = 8;
  DAT_0b000080 = 4;
  FUN_02000538(0x4a);
  FUN_02004ef4(&DAT_0b000158,1,1);
  DAT_0b000080 = 0;
  FUN_02000538(uVar2);
  FUN_020006b8(uVar4);
  if (uVar5 < uVar1) {
    do {
      FUN_020091ec(uVar5);
      DAT_0b000080 = 4;
      FUN_02000568(0x22);
      DAT_0b000080 = 0;
      FUN_02000538(uVar2);
      FUN_020006b8(uVar5);
      DAT_0b000080 = 4;
      uVar5 = uVar5 + 1;
      FUN_02000538(0x26);
      DAT_0b000080 = 0;
    } while (uVar1 != uVar5);
  }
  FUN_02000588();
  FUN_020061a8();
  DAT_0b000008 = DAT_0b000008 + 1;
  return;
}


// 0x02000bfc  transform_bit_fields

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02000bfc(void)

{
  uRam0b00057d = (undefined1)((uint3)_DAT_0b000558 >> 8);
  uRam0b00057e = (undefined1)((uint3)_DAT_0b000558 >> 0x10);
  uRam0b000561 = 0;
  uRam0b000562 = 0;
  uRam0b000563 = 0;
  uRam0b00057c = (char)_DAT_0b000558;
  uRam0b00057f = DAT_0b00055b;
  uRam0b000590 = 0;
  uRam0b000591 = 0;
  uRam0b000592 = 0;
  uRam0b000593 = 0;
  uRam0b000594 = 0;
  uRam0b000595 = 0;
  uRam0b000596 = 0;
  uRam0b000597 = 0;
  uRam0b00059c = 0;
  uRam0b00059d = 0;
  uRam0b00059e = 0;
  uRam0b00059f = 0;
  uRam0b0005fc = 0;
  uRam0b0005fd = 0;
  uRam0b0005fe = 0;
  uRam0b0005ff = 0;
  uRam0b000578 = (char)_DAT_0b000558;
  uRam0b000579 = uRam0b00057d;
  uRam0b00057a = uRam0b00057e;
  uRam0b00057b = DAT_0b00055b;
  uRam0b0005cc = 0;
  uRam0b0005db = 0;
  uRam0b0005cd = 0;
  uRam0b0005ce = 0;
  uRam0b0005cf = 0;
  uRam0b0005dc = 0;
  uRam0b0005dd = 0;
  uRam0b0005de = 0;
  uRam0b0005df = 0;
  uRam0b0005e0 = 0;
  uRam0b0005e1 = 0;
  uRam0b0005e2 = 0;
  uRam0b0005e3 = 0;
  uRam0b0005e4 = 0;
  uRam0b0005e5 = 0;
  uRam0b0005e6 = 0;
  uRam0b0005e7 = 0;
  uRam0b0005e8 = 0;
  uRam0b0005e9 = 0;
  uRam0b0005ea = 0;
  uRam0b0005eb = 0;
  uRam0b0005d4 = 0;
  uRam0b0005d5 = 0;
  uRam0b0005d6 = 0;
  uRam0b0005d7 = 0;
  uRam0b0005d8 = 0;
  uRam0b0005d9 = 0;
  uRam0b0005da = 0;
  return;
}


// 0x020043bc  return_constant_0

undefined4 FUN_020043bc(void)

{
  return 0;
}


// 0x020062d0  loop_over_state

void FUN_020062d0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  FUN_0200c55c(2,0);
  DAT_02099048 = 0;
  puVar3 = &DAT_0209917c;
  DAT_02099054 = 0;
  DAT_023db788 = 0;
  DAT_02099050 = 0;
  DAT_02099230 = 0xc0;
  DAT_023db778 = 0;
  DAT_023db784 = 0;
  DAT_023db77c = 0;
  DAT_023db790 = 0;
  DAT_02099132 = 0xc0;
  DAT_02099232 = 0xc0;
  DAT_02099131 = 0xc0;
  DAT_02099231 = 0xc0;
  DAT_02099130 = 0xc0;
  puVar1 = &DAT_0209907c;
  do {
    puVar2 = puVar1;
    puVar2[0xb2] = 0;
    puVar3[0xb2] = 0;
    puVar3 = puVar3 + -1;
    puVar1 = puVar2 + -1;
  } while (puVar2 + -1 != (undefined1 *)0x2098ff9);
  puVar2[0xad] = 0;
  puVar2[0xa8] = 0;
  puVar2[0xa7] = 0;
  puVar2[0xa6] = 0;
  puVar2[0xa5] = 0;
  puVar2[0xa4] = 0;
  puVar2[0xa3] = 0;
  puVar2[0xa2] = 0;
  return;
}


// 0x02006a44  access_shared_state

void FUN_02006a44(void)

{
  DAT_020993a0 = 0xff;
  return;
}


// 0x0200c520  access_shared_state

void FUN_0200c520(undefined4 param_1)

{
  DAT_023ddeb8 = param_1;
  return;
}


// 0x0200c5d8  loop_over_state

void FUN_0200c5d8(void)

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


// 0x0200c610  iterate_and_store_values

void FUN_0200c610(int param_1)

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


// 0x0200c75c  iterate_and_store_values

void FUN_0200c75c(int param_1)

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


// 0x02074e40  return_constant_0

undefined4 FUN_02074e40(void)

{
  return 0;
}

