/* Convert between host pointers and serialized offsets in the packed Z80 context. */
typedef struct __attribute__((packed)) {
    unsigned char state_before_base[0x400];
    unsigned memory_base;
    unsigned char state_before_registers[0x1c];
    unsigned pc;
    unsigned sp;
} Z80AddressState;

void encode_z80_pc_and_sp_as_ram_offsets(Z80AddressState *state)
{
    state->pc -= state->memory_base;
    state->sp -= state->memory_base;
}

void rebase_z80_pc_and_sp_into_work_ram(Z80AddressState *state)
{
    state->pc += state->memory_base;
    state->sp += state->memory_base;
}
