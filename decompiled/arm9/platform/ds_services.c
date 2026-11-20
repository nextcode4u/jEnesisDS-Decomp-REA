/* ARM9 ds services — grouped REA pseudocode.
 * Use the processor functions.tsv for names, descriptions and source hashes.
 */

// 0x02000c08  helper_calls_nds_swiwaitforvblank

void FUN_02000c08(void)

{
  DAT_0b000000 = 0x106;
  if (DAT_0b000020 == 0) {
    DAT_0b000000 = 0x138;
  }
  DAT_0b000004 = 0xe0;
  DAT_0b000014 = 0x1e7;
  DAT_0b000018 = 0xe3;
  DAT_0b000010 = 0x19d;
  DAT_0b00000c = 0;
  DAT_0b000008 = 0;
  DAT_0b000024 = 0;
  DAT_0b0000a8 = 0;
  FUN_020054d4(&DAT_0b0000ac);
  FUN_02004dcc(&DAT_0b000158);
  if ((DAT_023cb610 & 1) == 0) {
    FUN_02003a50(DAT_0b000030,0);
    FUN_02003a50(DAT_0b000034,0);
  }
  else {
    FUN_02003a50(DAT_0b000030);
    FUN_02003a50(DAT_0b000034,1);
  }
  FUN_020037b4(DAT_0b000030);
  FUN_020037b4(DAT_0b000034);
  FUN_02004bf0();
  FUN_02004d94();
  FUN_0200b6a8();
  FUN_020062c4();
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_02006308(1);
  thunk_FUN_0208031c();
  thunk_FUN_0208031c();
  FUN_020063dc();
  if ((DAT_023cb610 & 4) == 0) {
    DAT_023dcea8 = FUN_0200c280;
  }
  else {
    switch(DAT_023dcdb0) {
    case 0:
      DAT_023dcea8 = (code *)&LAB_0200bbd0;
      return;
    case 1:
      DAT_023dcea8 = (code *)&LAB_0200c0cc;
      return;
    case 2:
      DAT_023dcea8 = (code *)&LAB_0200bf18;
      return;
    case 3:
      DAT_023dcea8 = (code *)&LAB_0200bd6c;
      return;
    }
  }
  return;
}


// 0x02001180  helper_calls_nds_swiwaitforvblank

void FUN_02001180(int param_1)

{
  int iVar1;
  
  if (param_1 * 6 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      thunk_FUN_0208031c();
    } while (iVar1 != param_1 * 6);
  }
  return;
}


// 0x0207fb7c  nds_support_transform_bit_fields

ushort FUN_0207fb7c(void)

{
  return DAT_020b4ca0 & ~DAT_020b4ca2;
}


// 0x0207fc98  nds_vramsetmainbanks

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0207fc98(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_04000240;
  _DAT_04000240 = CONCAT13(param_4,CONCAT12(param_3,CONCAT11(param_2,param_1))) | 0x80808080;
  return uVar1;
}


// 0x0207fd44  nds_vramsetbanke

void FUN_0207fd44(byte param_1)

{
  DAT_04000244 = param_1 | 0x80;
  return;
}


// 0x0207fe0c  nds_support_access_shared_state

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0207fe0c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  FUN_0207fda8();
  param_3 = param_3 * 0xc;
  *(undefined1 **)(param_3 + 0x40000b0) = &DAT_04100010;
  *(undefined4 *)(param_3 + 0x40000b4) = param_2;
  *(undefined4 *)(param_3 + 0x40000b8) = 0xaf000001;
  _DAT_040001a4 = param_4;
  return;
}


// 0x02080100  write_interrupt_master_enable_and_interrupt_enable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02080100(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_010056e0;
  do {
    *puVar1 = &DAT_02080095;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  } while (puVar1 != (undefined4 *)&DAT_010057a8);
  _DAT_0b003ffc = &DAT_010057a8;
  _DAT_04000210 = 0;
  _DAT_04000214 = 0xffffffff;
  _DAT_04000208 = 1;
  return;
}


// 0x020801cc  write_interrupt_master_enable_and_interrupt_enable

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020801cc(undefined4 param_1)

{
  _DAT_04000214 = 0xffffffff;
  _DAT_04000210 = 0;
  _DAT_0b003ffc = param_1;
  _DAT_04000208 = 1;
  return;
}


// 0x020802c4  nds_support_loop_over_state

void FUN_020802c4(uint param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xffffffe0;
  do {
    coproc_moveto_Invalidate_Data_Cache_by_MVA(uVar1);
    uVar1 = uVar1 + 0x20;
  } while ((int)uVar1 < (int)(param_2 + param_1));
  return;
}


// 0x0208031c  nds_swiwaitforvblank

void FUN_0208031c(void)

{
  software_interrupt(5);
  return;
}


// 0x0208033e  nds_swicopy

void FUN_0208033e(void)

{
  software_interrupt(0xb);
  return;
}


// 0x020858a4  veneer_to_nds_swiwaitforvblank

void thunk_FUN_0208031c(void)

{
  software_interrupt(5);
  return;
}


// 0x0208591c  veneer_to_nds_swicopy

void thunk_FUN_0208033e(void)

{
  software_interrupt(0xb);
  return;
}


// 0x02085928  veneer_to_nds_vramsetmainbanks

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
thunk_FUN_0207fc98(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_04000240;
  _DAT_04000240 = CONCAT13(param_4,CONCAT12(param_3,CONCAT11(param_2,param_1))) | 0x80808080;
  return uVar1;
}


// 0x02085934  veneer_to_nds_vramsetbanke

void thunk_FUN_0207fd44(byte param_1)

{
  DAT_04000244 = param_1 | 0x80;
  return;
}

