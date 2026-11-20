#ifndef JENESIS_ARM7_IPC_H
#define JENESIS_ARM7_IPC_H

typedef void (*AudioMessageHandler)(unsigned command, unsigned *payload);

void enable_fifo_receive_interrupt(void);
void set_fifo_message_callback(AudioMessageHandler callback);

#endif
