/* Assert the Genesis Z80 reset line using the shared execution context. */
typedef struct Z80Context Z80Context;
extern Z80Context z80_context;
void reset_z80_cpu_registers_and_latches(Z80Context *state);

void reset_z80_core_state(void)
{
    reset_z80_cpu_registers_and_latches(&z80_context);
}
