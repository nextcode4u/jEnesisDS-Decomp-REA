/* Clear the full execution context before installing opcode dispatch tables. */
#include <string.h>

typedef struct Z80Context Z80Context;

void install_z80_dispatch_tables(Z80Context *state);

void initialize_z80_state_and_dispatch_pointers(Z80Context *state)
{
    memset(state, 0, 0x4c4);
    install_z80_dispatch_tables(state);
}
