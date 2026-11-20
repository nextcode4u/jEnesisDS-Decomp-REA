/* Route Genesis data and direction register writes to the two controller ports. */
#include "genesis_io.h"

void write_genesis_io_register_byte(unsigned offset, unsigned value)
{
    switch (offset & 0xfe) {
    case 0x02:
        write_genesis_controller_port_pins(genesis_io.port1, value);
        break;
    case 0x04:
        write_genesis_controller_port_pins(genesis_io.port2, value);
        break;
    case 0x08:
        write_genesis_controller_direction(genesis_io.port1, value);
        break;
    case 0x0a:
        write_genesis_controller_direction(genesis_io.port2, value);
        break;
    }
}

void write_genesis_io_register_word(unsigned offset, unsigned value)
{
    write_genesis_io_register_byte(offset, (unsigned char)value);
}
