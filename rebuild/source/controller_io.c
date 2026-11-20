/* Decode the Genesis controller I/O register window. */
#include "controller_port.h"

typedef struct {
    unsigned reserved0[7];
    unsigned version_register;
    unsigned reserved1[4];
    GenesisControllerPort *port1;
    GenesisControllerPort *port2;
} GenesisIo;

extern GenesisIo genesis_io;

unsigned read_genesis_io_register_byte(unsigned address)
{
    switch (address & 0xfe) {
    case 0x00:
        return genesis_io.version_register;
    case 0x02:
        return read_genesis_controller_port_pins(genesis_io.port1);
    case 0x04:
        return read_genesis_controller_port_pins(genesis_io.port2);
    case 0x06:
        return 0x7f;
    case 0x08:
        return read_genesis_controller_direction(genesis_io.port1);
    case 0x0a:
        return read_genesis_controller_direction(genesis_io.port2);
    case 0x0e:
    case 0x14:
    case 0x1a:
        return 0xff;
    default:
        return 0;
    }
}

unsigned read_genesis_io_as_u8(unsigned address)
{
    return (unsigned char)read_genesis_io_register_byte(address);
}
