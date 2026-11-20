#ifndef JENESIS_ARM9_FIFO_H
#define JENESIS_ARM9_FIFO_H

typedef void (*ReceiveCallback)(unsigned command, unsigned *payload);

extern ReceiveCallback ipc_receive_callback;
extern unsigned ipc_received_command, ipc_received_payload;

void set_arm9_fifo_receive_callback(ReceiveCallback callback);
void initialize_arm9_fifo_receive_interrupt(void);
int send_arm9_fifo_command_and_payload(unsigned command, unsigned payload);

#endif
