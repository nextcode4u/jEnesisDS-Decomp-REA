/* Record controller bus writes and advance the six-button TH handshake. */
#include <stdlib.h>
#include "controller_port.h"

unsigned read_m68k_cycle_counter(void);

void write_genesis_controller_port_pins(GenesisControllerPort *port, unsigned value)
{
    unsigned current_cycle;
    unsigned elapsed_cycles;
    value &= 0xff;
    port->handshake.th.previous = port->handshake.th.current;
    port->handshake.th.current = (value >> 6) & 1;
    port->output_latch = value;
    if (!port->six_button_mode)
        return;
    current_cycle = read_m68k_cycle_counter();
    port->sampled_cycle = current_cycle;
    elapsed_cycles = current_cycle - port->previous_cycle;
    port->cycles_since_handshake = elapsed_cycles;
    if (elapsed_cycles >= 0x2000) {
        port->handshake_phase = 0;
        port->previous_cycle = current_cycle;
    }
    /* TH fell from one to zero. The DS stores current TH in the low byte. */
    if (port->handshake.pair == 0x100)
        ++port->handshake_phase;
}

GenesisControllerPort *allocate_genesis_controller_port(void)
{
    GenesisControllerPort *port = malloc(sizeof(*port));
    reset_genesis_controller_port(port);
    return port;
}
