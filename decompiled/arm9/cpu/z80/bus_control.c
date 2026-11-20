/* ARM9 bus control — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x01002cdc  read_z80_mapped_byte_preserving_r1

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


// 0x02000bfc  reset_z80_core_state

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


// 0x02003cbc  get_z80_bank_latch_address

undefined4 * FUN_02003cbc(void)

{
  return &DAT_02099008;
}


// 0x020043bc  return_zero_for_unhandled_z80_vdp_access

undefined4 FUN_020043bc(void)

{
  return 0;
}


// 0x020043cc  read_z80_bus_request_status

byte FUN_020043cc(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = DAT_02099004;
  DAT_02099004 = DAT_02099004 + 1;
  bVar2 = DAT_0208f349 & 1;
  if (10 < uVar1) {
    bVar2 = bVar2 ^ 1;
  }
  DAT_0b0000a8 = 1;
  return bVar2;
}


// 0x02004458  read_z80_banked_cartridge_byte

undefined1 switchD_02004d20::default(uint param_1)

{
  return (&DAT_020b4cec)[(param_1 | DAT_02099008) & 0x3fffff ^ 1];
}


// 0x02004a1c  read_z80_window_from_m68k

uint FUN_02004a1c(uint param_1)

{
  uint uVar1;
  
  if (DAT_0208f349 != '\x01') {
    uVar1 = param_1 & 0x6000;
    if (uVar1 == 0x2000) {
LAB_02004a70:
      uVar1 = FUN_02004c24(param_1 & 0x1fff);
      return uVar1;
    }
    if (uVar1 < 0x2001) {
      if (uVar1 == 0) goto LAB_02004a70;
    }
    else {
      if (uVar1 == 0x4000) {
        uVar1 = FUN_02005b7c();
        return uVar1 & 0xff;
      }
      if (uVar1 == 0x6000) {
        if ((param_1 & 0xff00) == 0x7f00) {
          uVar1 = FUN_020043bc(param_1);
          return uVar1;
        }
        return 0xff;
      }
    }
  }
  uVar1 = FUN_02004368(param_1);
  return uVar1;
}


// 0x02004c18  get_z80_work_ram_buffer

undefined * FUN_02004c18(void)

{
  return &DAT_0b00161c;
}


// 0x02004c24  read_z80_work_ram_byte

undefined1 FUN_02004c24(int param_1)

{
  return (&DAT_0b00161c)[param_1];
}


// 0x02004d94  clear_z80_work_ram

/* WARNING: Removing unreachable block (ram,0x02083074) */
/* WARNING: Removing unreachable block (ram,0x02083070) */

void FUN_02004d94(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)&DAT_0b00161c;
  uVar2 = 0x2000;
  DAT_02099034 = 0;
  DAT_02099038 = 0;
  do {
    uVar2 = uVar2 - 0x10;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
  } while (0xf < uVar2);
  for (; 3 < uVar2; uVar2 = uVar2 - 4) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  if (uVar2 == 0) {
    return;
  }
  uVar3 = 0;
  do {
    *(undefined1 *)(uVar3 + (int)puVar1) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 != uVar2);
  return;
}


// 0x02004dcc  reset_z80_cpu_registers_and_latches

void FUN_02004dcc(int param_1)

{
  undefined3 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined3 *)(param_1 + 0x400);
  uVar2 = (undefined1)((uint3)uVar1 >> 8);
  uVar3 = (undefined1)((uint3)uVar1 >> 0x10);
  *(undefined1 *)(param_1 + 0x409) = 0;
  *(undefined1 *)(param_1 + 0x40a) = 0;
  *(undefined1 *)(param_1 + 0x40b) = 0;
  *(char *)(param_1 + 0x424) = (char)uVar1;
  *(undefined1 *)(param_1 + 0x425) = uVar2;
  *(undefined1 *)(param_1 + 0x426) = uVar3;
  *(undefined1 *)(param_1 + 0x427) = *(undefined1 *)(param_1 + 0x403);
  *(undefined1 *)(param_1 + 0x438) = 0;
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined1 *)(param_1 + 0x43a) = 0;
  *(undefined1 *)(param_1 + 0x43b) = 0;
  *(undefined1 *)(param_1 + 0x43c) = 0;
  *(undefined1 *)(param_1 + 0x43d) = 0;
  *(undefined1 *)(param_1 + 0x43e) = 0;
  *(undefined1 *)(param_1 + 0x43f) = 0;
  *(undefined1 *)(param_1 + 0x444) = 0;
  *(undefined1 *)(param_1 + 0x445) = 0;
  *(undefined1 *)(param_1 + 0x446) = 0;
  *(undefined1 *)(param_1 + 0x447) = 0;
  *(undefined1 *)(param_1 + 0x408) = *(undefined1 *)(param_1 + 0x408);
  *(undefined1 *)(param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x4a5) = 0;
  *(undefined1 *)(param_1 + 0x4a6) = 0;
  *(undefined1 *)(param_1 + 0x4a7) = 0;
  *(char *)(param_1 + 0x420) = (char)uVar1;
  *(undefined1 *)(param_1 + 0x421) = uVar2;
  *(undefined1 *)(param_1 + 0x422) = uVar3;
  *(undefined1 *)(param_1 + 0x423) = *(undefined1 *)(param_1 + 0x403);
  *(undefined1 *)(param_1 + 0x474) = 0;
  *(undefined1 *)(param_1 + 0x483) = 0;
  *(undefined1 *)(param_1 + 0x475) = 0;
  *(undefined1 *)(param_1 + 0x476) = 0;
  *(undefined1 *)(param_1 + 0x477) = 0;
  *(undefined1 *)(param_1 + 0x484) = 0;
  *(undefined1 *)(param_1 + 0x485) = 0;
  *(undefined1 *)(param_1 + 0x486) = 0;
  *(undefined1 *)(param_1 + 0x487) = 0;
  *(undefined1 *)(param_1 + 0x488) = 0;
  *(undefined1 *)(param_1 + 0x489) = 0;
  *(undefined1 *)(param_1 + 0x48a) = 0;
  *(undefined1 *)(param_1 + 0x48b) = 0;
  *(undefined1 *)(param_1 + 0x48c) = 0;
  *(undefined1 *)(param_1 + 0x48d) = 0;
  *(undefined1 *)(param_1 + 0x48e) = 0;
  *(undefined1 *)(param_1 + 0x48f) = 0;
  *(undefined1 *)(param_1 + 0x490) = 0;
  *(undefined1 *)(param_1 + 0x491) = 0;
  *(undefined1 *)(param_1 + 0x492) = 0;
  *(undefined1 *)(param_1 + 0x493) = 0;
  *(undefined1 *)(param_1 + 0x47c) = 0;
  *(undefined1 *)(param_1 + 0x47d) = 0;
  *(undefined1 *)(param_1 + 0x47e) = 0;
  *(undefined1 *)(param_1 + 0x47f) = 0;
  *(undefined1 *)(param_1 + 0x480) = 0;
  *(undefined1 *)(param_1 + 0x481) = 0;
  *(undefined1 *)(param_1 + 0x482) = 0;
  return;
}


// 0x02004ef4  set_or_clear_z80_pending_interrupt_bits

void FUN_02004ef4(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *(uint *)(param_1 + 0x4a4) & ~param_2;
  }
  else {
    param_2 = param_2 | *(uint *)(param_1 + 0x4a4);
  }
  *(char *)(param_1 + 0x4a7) = (char)(param_2 >> 0x18);
  *(char *)(param_1 + 0x4a5) = (char)(param_2 >> 8);
  *(char *)(param_1 + 0x4a6) = (char)(param_2 >> 0x10);
  *(char *)(param_1 + 0x4a4) = (char)param_2;
  return;
}

