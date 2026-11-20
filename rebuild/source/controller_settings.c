/* Access the controller direction mask and input mode. */
#include "controller_port.h"

unsigned read_genesis_controller_direction(const GenesisControllerPort *port)
{
    return port->direction_mask;
}

void set_controller_six_button_mode(GenesisControllerPort *port, unsigned char enabled)
{
    port->six_button_mode = enabled;
}

unsigned is_genesis_mode_button_pressed(const GenesisControllerPort *port)
{
    return port->button_inputs[11] == 0;
}
