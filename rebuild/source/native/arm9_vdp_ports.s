/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_vdp_interrupt_ack, "ax", %progbits
.include "native/arm9/vdp_ports/vdp_interrupt_ack.inc"

.section .native.arm9_vdp_port_reads, "ax", %progbits
.include "native/arm9/vdp_ports/vdp_port_reads.inc"

.section .native.arm9_vdp_registers, "ax", %progbits
.include "native/arm9/vdp_ports/vdp_registers.inc"

.section .native.arm9_vdp_dma_and_port_writes, "ax", %progbits
.include "native/arm9/vdp_ports/vdp_dma_and_port_writes.inc"
.include "native/arm9/vdp_ports/dma_command.inc"
.include "native/arm9/vdp_ports/address_and_data_writes.inc"
