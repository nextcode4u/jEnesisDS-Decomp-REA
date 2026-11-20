/* Update the packed pending interrupt word shared by the Z80 scheduler and engine. */
typedef struct __attribute__((packed)) Z80Context {
    unsigned char state_before_pending_interrupt_bits[0x4a4];
    unsigned pending_interrupt_bits;
} Z80Context;

void set_or_clear_z80_pending_interrupt_bits(
    Z80Context *state, unsigned interrupt_bits, int assert_interrupt)
{
    if (assert_interrupt)
        state->pending_interrupt_bits |= interrupt_bits;
    else
        state->pending_interrupt_bits &= ~interrupt_bits;
}
