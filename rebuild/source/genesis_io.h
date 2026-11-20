#ifndef JENESIS_GENESIS_IO_H
#define JENESIS_GENESIS_IO_H

#include "controller_port.h"

typedef struct {
    unsigned reserved0[7];
    unsigned version_register;
    unsigned reserved1[4];
    GenesisControllerPort *port1;
    GenesisControllerPort *port2;
} GenesisIo;

extern GenesisIo genesis_io;

#endif
