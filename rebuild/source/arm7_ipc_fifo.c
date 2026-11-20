/* Receive ARM9 audio commands and send replies through the DS FIFO. */
#include <nds/ipc.h>
#include <nds/interrupts.h>

#include "arm7_ipc.h"

extern AudioMessageHandler arm7_ipc_receive_callback;
extern unsigned arm7_ipc_received_command;
extern unsigned arm7_ipc_received_payload;

void dispatch_fifo_receive_interrupt(void)
{
    REG_IPC_SYNC = 0;
    while (!(REG_IPC_FIFO_CR & IPC_FIFO_RECV_EMPTY)) {
        /* FIFO reads consume a word. Both fields come from this one read. */
        unsigned word = REG_IPC_FIFO_RX;
        arm7_ipc_received_command = word >> 24;
        arm7_ipc_received_payload = word & 0xffffff;
        if (arm7_ipc_receive_callback)
            arm7_ipc_receive_callback(arm7_ipc_received_command, &arm7_ipc_received_payload);
    }
    REG_IPC_SYNC = 0x100;
}

void set_fifo_message_callback(AudioMessageHandler callback)
{
    arm7_ipc_receive_callback = callback;
}

int send_fifo_command_and_payload(unsigned command, unsigned payload)
{
    int full;
    do {
        full = REG_IPC_FIFO_CR & IPC_FIFO_SEND_FULL;
    } while (full);
    REG_IPC_FIFO_TX = (command << 24) | (payload & 0xffffff);
    return full;
}

void send_arm7_audio_reply(unsigned command, unsigned payload)
{
    send_fifo_command_and_payload(command, payload);
}

void enable_fifo_receive_interrupt(void)
{
    REG_IPC_FIFO_CR = IPC_FIFO_ENABLE | IPC_FIFO_SEND_CLEAR;
    irqSet(IRQ_FIFO_NOT_EMPTY, dispatch_fifo_receive_interrupt);
    irqEnable(IRQ_FIFO_NOT_EMPTY);
    REG_IPC_FIFO_CR = IPC_FIFO_ENABLE | IPC_FIFO_RECV_IRQ | IPC_FIFO_SEND_CLEAR;
    REG_IPC_SYNC = 0;
}
