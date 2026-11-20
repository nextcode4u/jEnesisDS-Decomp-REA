/* ARM9 transmit and receive routines for the emulator’s two-CPU protocol. */

#include <nds/ipc.h>
#include <nds/interrupts.h>

#include "arm9_fifo.h"

void dispatch_arm9_fifo_receive_interrupt(void)
{
    while (!(REG_IPC_FIFO_CR & IPC_FIFO_RECV_EMPTY)) {
        /* Reading RX consumes one word. Split both fields from the same read. */
        unsigned word = REG_IPC_FIFO_RX;
        ipc_received_command = word >> 24;
        ipc_received_payload = word & 0xffffff;
        if (ipc_receive_callback)
            ipc_receive_callback(ipc_received_command, &ipc_received_payload);
    }
}

void set_arm9_fifo_receive_callback(ReceiveCallback callback)
{
    ipc_receive_callback = callback;
}

int send_arm9_fifo_command_and_payload_waiting(unsigned command, unsigned payload)
{
    int full;
    do {
        full = REG_IPC_FIFO_CR & IPC_FIFO_SEND_FULL;
    } while (full);
    REG_IPC_FIFO_TX = (command << 24) | (payload & 0xffffff);
    return full;
}

int send_arm9_fifo_command_and_payload(unsigned command, unsigned payload)
{
    unsigned word = (command << 24) | (payload & 0xffffff);

    if (REG_IPC_FIFO_CR & IPC_FIFO_SEND_FULL) {
        REG_IPC_FIFO_CR = IPC_FIFO_ENABLE | IPC_FIFO_RECV_IRQ | IPC_FIFO_SEND_CLEAR;
        return 0;
    }
    REG_IPC_FIFO_TX = word;
    return 1;
}

void initialize_arm9_fifo_receive_interrupt(void)
{
    irqSet(IRQ_FIFO_NOT_EMPTY, dispatch_arm9_fifo_receive_interrupt);
    irqEnable(IRQ_FIFO_NOT_EMPTY);
    REG_IPC_FIFO_CR = IPC_FIFO_ENABLE | IPC_FIFO_RECV_IRQ | IPC_FIFO_SEND_CLEAR;
}
