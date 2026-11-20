/* Reset the controller handshake and release all active-low input pins. */
#include "controller_port.h"

void reset_genesis_controller_port(volatile GenesisControllerPort *port)
{
    port->button_inputs[11] = 1;
    port->output_latch = 0x7f;
    port->serial_state[0] = 0xff;
    port->handshake.th.current = 0;
    port->previous_cycle = 0;
    port->cycles_since_handshake = 0;
    port->handshake_phase = 0;
    port->direction_mask = 0;
    port->serial_state[1] = 0;
    port->serial_state[2] = 0;
    port->handshake.th.previous = 0;
    port->button_inputs[0] = 1;
    port->button_inputs[1] = 1;
    port->button_inputs[2] = 1;
    port->button_inputs[3] = 1;
    port->button_inputs[4] = 1;
    port->button_inputs[5] = 1;
    port->button_inputs[6] = 1;
    port->button_inputs[7] = 1;
    port->button_inputs[8] = 1;
    port->button_inputs[9] = 1;
    port->button_inputs[10] = 1;
}

void write_genesis_controller_direction(GenesisControllerPort *port, unsigned char mask)
{
    port->direction_mask = mask;
}
