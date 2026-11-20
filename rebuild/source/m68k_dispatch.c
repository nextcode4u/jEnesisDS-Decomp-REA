/* Entries in the release's 68000 opcode dispatch table.
 * These symbols use the core's register convention. C does not call them.
 */
typedef void (*M68kOpcodeEntry)(void);

extern void m68k_moveq(void);
extern void m68k_shared_opcode_decode_020329a0(void);

#define M68K_BRANCH_CONDITIONS(apply) \
    apply(0x0, bra) apply(0x2, bhi) apply(0x3, bls) apply(0x4, bcc) \
    apply(0x5, bcs) apply(0x6, bne) apply(0x7, beq) apply(0x8, bvc) \
    apply(0x9, bvs) apply(0xa, bpl) apply(0xb, bmi) apply(0xc, bge) \
    apply(0xd, blt) apply(0xe, bgt) apply(0xf, ble)

#define DECLARE_BRANCH(condition, mnemonic) \
    extern void m68k_##mnemonic##_word(void); \
    extern void m68k_##mnemonic##_forward(void); \
    extern void m68k_##mnemonic##_backward(void);

M68K_BRANCH_CONDITIONS(DECLARE_BRANCH)
extern void m68k_bsr_word(void);
extern void m68k_bsr_byte(void);

/* A zero byte denotes a word extension. Other byte displacements are signed. */
#define BRANCH_SLOTS(condition, mnemonic) \
    [(condition) * 256] = m68k_##mnemonic##_word, \
    [(condition) * 256 + 1 ... (condition) * 256 + 0x7f] = m68k_##mnemonic##_forward, \
    [(condition) * 256 + 0x80 ... (condition) * 256 + 0xff] = m68k_##mnemonic##_backward,

const M68kOpcodeEntry m68k_branch_dispatch[4096]
    __attribute__((section(".rodata.m68k_branch"))) = {
    M68K_BRANCH_CONDITIONS(BRANCH_SLOTS)
    [0x100] = m68k_bsr_word,
    [0x101 ... 0x1ff] = m68k_bsr_byte,
};

/* The release routes the entire 0x7xxx line through MOVEQ, including bit 8. */
const M68kOpcodeEntry m68k_moveq_dispatch[4096]
    __attribute__((section(".rodata.m68k_moveq"))) = {
    [0 ... 4095] = m68k_moveq,
};

const M68kOpcodeEntry m68k_line_a_dispatch[4096]
    __attribute__((section(".rodata.m68k_line_a"))) = {
    [0 ... 4095] = m68k_shared_opcode_decode_020329a0,
};

const M68kOpcodeEntry m68k_line_f_dispatch[4096]
    __attribute__((section(".rodata.m68k_line_f"))) = {
    [0 ... 4095] = m68k_shared_opcode_decode_020329a0,
};
