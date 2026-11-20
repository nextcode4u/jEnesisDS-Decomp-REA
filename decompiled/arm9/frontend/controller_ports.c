/* ARM9 controller ports — grouped REA pseudocode.
 * Use functions.tsv for addresses, names and analysis notes.
 */

// 0x020037b4  reset_genesis_controller_port

void reset_genesis_controller_port(undefined4 *port_state)

{
  *(undefined1 *)((int)port_state + 0x2b) = 1;
  *(undefined1 *)((int)port_state + 0x19) = 0x7f;
  *(undefined1 *)((int)port_state + 0x1b) = 0xff;
  *(undefined1 *)((int)port_state + 0x1e) = 0;
  port_state[2] = 0;
  *port_state = 0;
  port_state[3] = 0;
  *(undefined1 *)((int)port_state + 0x1a) = 0;
  *(undefined1 *)(port_state + 7) = 0;
  *(undefined1 *)((int)port_state + 0x1d) = 0;
  *(undefined1 *)((int)port_state + 0x1f) = 0;
  *(undefined1 *)(port_state + 8) = 1;
  *(undefined1 *)((int)port_state + 0x21) = 1;
  *(undefined1 *)((int)port_state + 0x22) = 1;
  *(undefined1 *)((int)port_state + 0x23) = 1;
  *(undefined1 *)(port_state + 9) = 1;
  *(undefined1 *)((int)port_state + 0x25) = 1;
  *(undefined1 *)((int)port_state + 0x26) = 1;
  *(undefined1 *)((int)port_state + 0x27) = 1;
  *(undefined1 *)(port_state + 10) = 1;
  *(undefined1 *)((int)port_state + 0x29) = 1;
  *(undefined1 *)((int)port_state + 0x2a) = 1;
  return;
}


// 0x02003828  read_genesis_controller_port_pins

uint read_genesis_controller_port_pins(int port_state)

{
  byte pin_4_in;
  byte pin_2_in;
  byte pin_3_in;
  byte pin_5_in;
  byte pin_0_in;
  byte pin_1_in;
  
  if (*(char *)(port_state + 0x1e) != '\0') {
    if (*(char *)(port_state + 0x18) != '\0') {
      if (*(int *)(port_state + 0xc) == 3) {
        pin_4_in = *(byte *)(port_state + 0x21);
        pin_2_in = *(byte *)(port_state + 0x27);
        pin_3_in = *(byte *)(port_state + 0x2b);
        pin_5_in = *(byte *)(port_state + 0x22);
        pin_0_in = *(byte *)(port_state + 0x28);
        pin_1_in = *(byte *)(port_state + 0x29);
      }
      else {
        pin_4_in = *(byte *)(port_state + 0x21);
        pin_2_in = *(byte *)(port_state + 0x25);
        pin_3_in = *(byte *)(port_state + 0x26);
        pin_5_in = *(byte *)(port_state + 0x22);
        pin_0_in = *(byte *)(port_state + 0x23);
        pin_1_in = *(byte *)(port_state + 0x24);
      }
      controller_port_read_latch = (uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
                     ((uint)pin_4_in << 4 | (uint)pin_5_in << 5 | (uint)pin_1_in << 1 |
                     (uint)pin_2_in << 2 | (uint)pin_3_in << 3 | (uint)pin_0_in) &
                     ~(uint)*(byte *)(port_state + 0x1a);
      return controller_port_read_latch;
    }
    return (uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
           ((uint)*(byte *)(port_state + 0x21) << 4 | (uint)*(byte *)(port_state + 0x22) << 5 |
            (uint)*(byte *)(port_state + 0x24) << 1 |
           (uint)*(byte *)(port_state + 0x25) << 2 | (uint)*(byte *)(port_state + 0x26) << 3 |
           (uint)*(byte *)(port_state + 0x23)) & ~(uint)*(byte *)(port_state + 0x1a);
  }
  if (*(char *)(port_state + 0x18) != '\0') {
    if (*(int *)(port_state + 0xc) == 3) {
      controller_port_read_latch = ((uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
                     ((uint)*(byte *)(port_state + 0x20) << 4 | (uint)*(byte *)(port_state + 0x2a) << 5) &
                     ~(uint)*(byte *)(port_state + 0x1a)) & 0xf0;
    }
    else if (*(int *)(port_state + 0xc) == 4) {
      controller_port_read_latch = ((uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
                     ((uint)*(byte *)(port_state + 0x20) << 4 | (uint)*(byte *)(port_state + 0x2a) << 5) &
                     ~(uint)*(byte *)(port_state + 0x1a)) & 0xf0 | 0xf;
    }
    else {
      controller_port_read_latch = (uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
                     ((uint)*(byte *)(port_state + 0x20) << 4 | (uint)*(byte *)(port_state + 0x2a) << 5 |
                      (uint)*(byte *)(port_state + 0x23) | (uint)*(byte *)(port_state + 0x24) << 1) &
                     ~(uint)*(byte *)(port_state + 0x1a) & 0xff;
    }
    return controller_port_read_latch;
  }
  return (uint)(*(byte *)(port_state + 0x1a) & *(byte *)(port_state + 0x19)) |
         ((uint)*(byte *)(port_state + 0x20) << 4 | (uint)*(byte *)(port_state + 0x2a) << 5 |
          (uint)*(byte *)(port_state + 0x23) | (uint)*(byte *)(port_state + 0x24) << 1) &
         ~(uint)*(byte *)(port_state + 0x1a) & 0xff;
}


// 0x02003a50  set_controller_six_button_mode

void set_controller_six_button_mode(int port_state,undefined1 six_button_enabled)

{
  *(undefined1 *)(port_state + 0x18) = six_button_enabled;
  return;
}


// 0x02003ad4  allocate_genesis_controller_port

undefined4 allocate_genesis_controller_port(void)

{
  undefined4 port_state;
  
  port_state = newlib_malloc_global_reent_wrapper(0x2c);
  reset_genesis_controller_port();
  return port_state;
}

