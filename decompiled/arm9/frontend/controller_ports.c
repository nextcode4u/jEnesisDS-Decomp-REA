/* ARM9 controller ports — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020037b4  reset_genesis_controller_port

void FUN_020037b4(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x2b) = 1;
  *(undefined1 *)((int)param_1 + 0x19) = 0x7f;
  *(undefined1 *)((int)param_1 + 0x1b) = 0xff;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)((int)param_1 + 0x21) = 1;
  *(undefined1 *)((int)param_1 + 0x22) = 1;
  *(undefined1 *)((int)param_1 + 0x23) = 1;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  *(undefined1 *)((int)param_1 + 0x26) = 1;
  *(undefined1 *)((int)param_1 + 0x27) = 1;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  return;
}


// 0x02003828  read_genesis_controller_port_pins

uint FUN_02003828(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  if (*(char *)(param_1 + 0x1e) != '\0') {
    if (*(char *)(param_1 + 0x18) != '\0') {
      if (*(int *)(param_1 + 0xc) == 3) {
        bVar1 = *(byte *)(param_1 + 0x21);
        bVar2 = *(byte *)(param_1 + 0x27);
        bVar3 = *(byte *)(param_1 + 0x2b);
        bVar4 = *(byte *)(param_1 + 0x22);
        bVar5 = *(byte *)(param_1 + 0x28);
        bVar6 = *(byte *)(param_1 + 0x29);
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x21);
        bVar2 = *(byte *)(param_1 + 0x25);
        bVar3 = *(byte *)(param_1 + 0x26);
        bVar4 = *(byte *)(param_1 + 0x22);
        bVar5 = *(byte *)(param_1 + 0x23);
        bVar6 = *(byte *)(param_1 + 0x24);
      }
      DAT_02098ffc = (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)bVar1 << 4 | (uint)bVar4 << 5 | (uint)bVar6 << 1 |
                     (uint)bVar2 << 2 | (uint)bVar3 << 3 | (uint)bVar5) &
                     ~(uint)*(byte *)(param_1 + 0x1a);
      return DAT_02098ffc;
    }
    return (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
           ((uint)*(byte *)(param_1 + 0x21) << 4 | (uint)*(byte *)(param_1 + 0x22) << 5 |
            (uint)*(byte *)(param_1 + 0x24) << 1 |
           (uint)*(byte *)(param_1 + 0x25) << 2 | (uint)*(byte *)(param_1 + 0x26) << 3 |
           (uint)*(byte *)(param_1 + 0x23)) & ~(uint)*(byte *)(param_1 + 0x1a);
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (*(int *)(param_1 + 0xc) == 3) {
      DAT_02098ffc = ((uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5) &
                     ~(uint)*(byte *)(param_1 + 0x1a)) & 0xf0;
    }
    else if (*(int *)(param_1 + 0xc) == 4) {
      DAT_02098ffc = ((uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5) &
                     ~(uint)*(byte *)(param_1 + 0x1a)) & 0xf0 | 0xf;
    }
    else {
      DAT_02098ffc = (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
                     ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5 |
                      (uint)*(byte *)(param_1 + 0x23) | (uint)*(byte *)(param_1 + 0x24) << 1) &
                     ~(uint)*(byte *)(param_1 + 0x1a) & 0xff;
    }
    return DAT_02098ffc;
  }
  return (uint)(*(byte *)(param_1 + 0x1a) & *(byte *)(param_1 + 0x19)) |
         ((uint)*(byte *)(param_1 + 0x20) << 4 | (uint)*(byte *)(param_1 + 0x2a) << 5 |
          (uint)*(byte *)(param_1 + 0x23) | (uint)*(byte *)(param_1 + 0x24) << 1) &
         ~(uint)*(byte *)(param_1 + 0x1a) & 0xff;
}


// 0x02003a50  set_controller_six_button_mode

void FUN_02003a50(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}


// 0x02003ad4  allocate_genesis_controller_port

undefined4 FUN_02003ad4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_02082724(0x2c);
  FUN_020037b4();
  return uVar1;
}

