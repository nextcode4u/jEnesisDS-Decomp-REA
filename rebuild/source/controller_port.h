#ifndef JENESIS_CONTROLLER_PORT_H
#define JENESIS_CONTROLLER_PORT_H

typedef struct {
    unsigned cycles_since_handshake;
    unsigned sampled_cycle;
    unsigned previous_cycle;
    unsigned handshake_phase;
    unsigned reserved[2];
    unsigned char six_button_mode;
    unsigned char output_latch;
    unsigned char direction_mask;
    unsigned char serial_state[3];
    union {
        unsigned short pair;
        struct {
            unsigned char current;
            unsigned char previous;
        } th;
    } handshake;
    unsigned char button_inputs[12];
} GenesisControllerPort;

void reset_genesis_controller_port(volatile GenesisControllerPort *port);
void set_controller_six_button_mode(GenesisControllerPort *port, unsigned char enabled);
unsigned read_genesis_controller_port_pins(GenesisControllerPort *port);
unsigned read_genesis_controller_direction(const GenesisControllerPort *port);
void write_genesis_controller_port_pins(GenesisControllerPort *port, unsigned value);
void write_genesis_controller_direction(GenesisControllerPort *port, unsigned mask);

#endif
