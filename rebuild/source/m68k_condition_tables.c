/* Precomputed 68000 conditions and rotate-through-extend counts. */
#include <stdint.h>

#define C(flags) ((flags) & 1)
#define V(flags) ((flags) & 2)
#define Z(flags) ((flags) & 4)
#define N(flags) ((flags) & 8)
#define ALWAYS(flags) 1
#define NEVER(flags) 0
#define HIGHER(flags) (!C(flags) && !Z(flags))
#define LOWER_OR_SAME(flags) (C(flags) || Z(flags))
#define CARRY_CLEAR(flags) (!C(flags))
#define NOT_EQUAL(flags) (!Z(flags))
#define OVERFLOW_CLEAR(flags) (!V(flags))
#define PLUS(flags) (!N(flags))
#define GREATER_OR_EQUAL(flags) (!N(flags) == !V(flags))
#define LESS_THAN(flags) (!N(flags) != !V(flags))
#define GREATER_THAN(flags) (!Z(flags) && GREATER_OR_EQUAL(flags))
#define LESS_OR_EQUAL(flags) (Z(flags) || LESS_THAN(flags))
#define CONDITION(test, flags) (test(flags) ? 0xff : 0)

/* Rows index the condition selector. Columns index the NZVC flags. */
#define CONDITION_ROW(test) { \
    CONDITION(test, 0), CONDITION(test, 1), CONDITION(test, 2), CONDITION(test, 3), \
    CONDITION(test, 4), CONDITION(test, 5), CONDITION(test, 6), CONDITION(test, 7), \
    CONDITION(test, 8), CONDITION(test, 9), CONDITION(test, 10), CONDITION(test, 11), \
    CONDITION(test, 12), CONDITION(test, 13), CONDITION(test, 14), CONDITION(test, 15) \
}

/* Rotate the operand and extend bit together, with a six-bit count. */
#define COUNTS_8(start, period) \
    ((start) + 0) % (period), ((start) + 1) % (period), \
    ((start) + 2) % (period), ((start) + 3) % (period), \
    ((start) + 4) % (period), ((start) + 5) % (period), \
    ((start) + 6) % (period), ((start) + 7) % (period)
#define ROTATE_COUNTS(period) { \
    COUNTS_8(0, period), COUNTS_8(8, period), COUNTS_8(16, period), COUNTS_8(24, period), \
    COUNTS_8(32, period), COUNTS_8(40, period), COUNTS_8(48, period), COUNTS_8(56, period) \
}

const struct {
    uint8_t condition[16][16];
    uint8_t rotate_extend_byte[64];
    uint8_t rotate_extend_word[64];
    uint8_t rotate_extend_long[64];
} m68k_condition_and_rotate_tables = {
    {
        CONDITION_ROW(ALWAYS), CONDITION_ROW(NEVER),
        CONDITION_ROW(HIGHER), CONDITION_ROW(LOWER_OR_SAME),
        CONDITION_ROW(CARRY_CLEAR), CONDITION_ROW(C),
        CONDITION_ROW(NOT_EQUAL), CONDITION_ROW(Z),
        CONDITION_ROW(OVERFLOW_CLEAR), CONDITION_ROW(V),
        CONDITION_ROW(PLUS), CONDITION_ROW(N),
        CONDITION_ROW(GREATER_OR_EQUAL), CONDITION_ROW(LESS_THAN),
        CONDITION_ROW(GREATER_THAN), CONDITION_ROW(LESS_OR_EQUAL),
    },
    ROTATE_COUNTS(9),
    ROTATE_COUNTS(17),
    ROTATE_COUNTS(33),
};
