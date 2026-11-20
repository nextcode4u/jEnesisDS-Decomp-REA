#include "m68k.h"
#include "megadrive.h"

enum {
    CCR_C = 1, CCR_V = 2, CCR_Z = 4, CCR_N = 8,
    SR_SUPERVISOR = 0x2000, RESET_STATUS = 0x2700,
};

static uint32_t read_memory(const struct megadrive *md, uint32_t address, unsigned size)
{
    uint32_t value = 0;
    for (unsigned i = 0; i < size; ++i)
        value = (value << 8) | megadrive_read_byte(md, address + i);
    return value;
}

static bool write_memory(struct megadrive *md, uint32_t address, unsigned size, uint32_t value)
{
    if (size == 1)
        return megadrive_write_byte(md, address, value);
    if (address & 1)
        return false;
    if (size == 4 && !megadrive_write_word(md, address, value >> 16))
        return false;
    return megadrive_write_word(md, address + size - 2, value);
}

static uint32_t fetch(struct m68k *cpu, const struct megadrive *md, unsigned size)
{
    uint32_t value = read_memory(md, cpu->pc, size);
    cpu->pc += size;
    return value;
}

static uint32_t size_mask(unsigned size)
{
    return UINT32_MAX >> (32 - size * 8);
}

static void set_data(struct m68k *cpu, unsigned reg, unsigned size, uint32_t value)
{
    uint32_t mask = size_mask(size);
    cpu->d[reg] = (cpu->d[reg] & ~mask) | (value & mask);
}

static void set_logic_flags(struct m68k *cpu, unsigned size, uint32_t value)
{
    cpu->sr &= ~(CCR_N | CCR_Z | CCR_V | CCR_C);
    if (!(value & size_mask(size)))
        cpu->sr |= CCR_Z;
    if (value & (UINT32_C(1) << (size * 8 - 1)))
        cpu->sr |= CCR_N;
}

static bool condition_true(uint16_t sr, unsigned condition)
{
    bool c = (sr & CCR_C) != 0, v = (sr & CCR_V) != 0;
    bool z = (sr & CCR_Z) != 0, n = (sr & CCR_N) != 0;
    bool base;
    switch (condition >> 1) {
    case 0: base = true; break;
    case 1: base = !c && !z; break;
    case 2: base = !c; break;
    case 3: base = !z; break;
    case 4: base = !v; break;
    case 5: base = !n; break;
    case 6: base = n == v; break;
    default: base = !z && n == v; break;
    }
    return base != (bool)(condition & 1);
}

static bool address_operand(struct m68k *cpu, const struct megadrive *md,
                            unsigned mode, unsigned reg, uint32_t *address)
{
    if (mode == 2)
        *address = cpu->a[reg];
    else if (mode == 5)
        *address = cpu->a[reg] + (int16_t)fetch(cpu, md, 2);
    else if (mode == 7 && reg == 0)
        *address = (int16_t)fetch(cpu, md, 2);
    else if (mode == 7 && reg == 1)
        *address = fetch(cpu, md, 4);
    else if (mode == 7 && reg == 2) {
        uint32_t base = cpu->pc;
        *address = base + (int16_t)fetch(cpu, md, 2);
    } else
        return false;
    return true;
}

static unsigned memory_cycles(unsigned mode, unsigned reg, unsigned size)
{
    unsigned overhead = mode == 5 || (mode == 7 && reg != 1) ? 4 : 0;
    if (mode == 7 && reg == 1)
        overhead = 8;
    return overhead + (size == 4 ? 8 : 4);
}

static unsigned move(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned type = op >> 12;
    unsigned size = type == 1 ? 1 : type == 2 ? 4 : 2;
    unsigned source = (op >> 3) & 7, src_reg = op & 7;
    unsigned target = (op >> 6) & 7, dst_reg = (op >> 9) & 7;
    unsigned cycles = 4;
    uint32_t value, address;

    if (source == 0) {
        value = cpu->d[src_reg];
    } else if (source == 1 && size != 1) {
        value = cpu->a[src_reg];
    } else if (source == 7 && src_reg == 4) {
        value = fetch(cpu, md, size == 4 ? 4 : 2);
        cycles += size == 4 ? 8 : 4;
    } else {
        if (!address_operand(cpu, md, source, src_reg, &address) ||
            (size != 1 && (address & 1)))
            return 0;
        value = read_memory(md, address, size);
        cycles += memory_cycles(source, src_reg, size);
    }
    if (target == 1 && size != 1) {
        cpu->a[dst_reg] = size == 2 ? (uint32_t)(int16_t)value : value;
        return cycles;
    }
    if (target == 0) {
        set_data(cpu, dst_reg, size, value);
    } else {
        if ((target == 7 && dst_reg > 1) ||
            !address_operand(cpu, md, target, dst_reg, &address) ||
            !write_memory(md, address, size, value))
            return 0;
        cycles += memory_cycles(target, dst_reg, size);
    }
    set_logic_flags(cpu, size, value);
    return cycles;
}

static unsigned test_operand(struct m68k *cpu, const struct megadrive *md, uint16_t op)
{
    unsigned encoding = (op >> 6) & 3;
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    if (encoding == 3 || (mode == 7 && reg > 1))
        return 0;
    unsigned size = 1U << encoding;
    if (mode == 0) {
        set_logic_flags(cpu, size, cpu->d[reg]);
        return 4;
    }
    uint32_t address;
    if (!address_operand(cpu, md, mode, reg, &address) ||
        (size != 1 && (address & 1)))
        return 0;
    set_logic_flags(cpu, size, read_memory(md, address, size));
    return 4 + memory_cycles(mode, reg, size);
}

static unsigned load_multiple(struct m68k *cpu, const struct megadrive *md, uint16_t op)
{
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    unsigned size = (op & 0x40) ? 4 : 2;
    uint16_t list = fetch(cpu, md, 2);
    uint32_t address;
    if (mode == 3)
        address = cpu->a[reg];
    else if (!address_operand(cpu, md, mode, reg, &address))
        return 0;
    if (address & 1)
        return 0;
    unsigned cycles = 12 + (mode == 3 ? 0 : memory_cycles(mode, reg, 2) - 4);
    for (unsigned bit = 0; bit < 16; ++bit) {
        if (!(list & (1U << bit)))
            continue;
        uint32_t value = read_memory(md, address, size);
        if (size == 2)
            value = (int16_t)value;
        if (bit < 8)
            cpu->d[bit] = value;
        else
            cpu->a[bit - 8] = value;
        address += size;
        cycles += size * 2;
    }
    // In postincrement mode the final address takes precedence over a loaded An.
    if (mode == 3)
        cpu->a[reg] = address;
    return cycles;
}

static unsigned immediate_logic(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned encoding = (op >> 6) & 3, reg = op & 7;
    if (encoding == 3)
        return 0;
    unsigned size = 1U << encoding;
    uint32_t operand = fetch(cpu, md, size == 4 ? 4 : 2);
    uint32_t result;
    switch (op & 0xff00) {
    case 0x0000: result = cpu->d[reg] | operand; break;
    case 0x0200: result = cpu->d[reg] & operand; break;
    default: result = cpu->d[reg] ^ operand; break;
    }
    set_data(cpu, reg, size, result);
    set_logic_flags(cpu, size, result);
    return size == 4 ? 16 : 8;
}

static unsigned execute(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    if (op >= 0x1000 && op < 0x4000)
        return move(cpu, md, op);
    if ((op & 0xf100) == 0x7000) {
        unsigned reg = (op >> 9) & 7;
        cpu->d[reg] = (int8_t)op;
        set_logic_flags(cpu, 4, cpu->d[reg]);
        return 4;
    }
    if ((op & 0xf0f8) == 0x50c8) {
        uint32_t base = cpu->pc;
        int16_t displacement = fetch(cpu, md, 2);
        if (condition_true(cpu->sr, (op >> 8) & 15))
            return 12;
        unsigned reg = op & 7;
        uint16_t count = cpu->d[reg] - 1;
        set_data(cpu, reg, 2, count);
        if (count == 0xffff)
            return 14;
        cpu->pc = base + displacement;
        return 10;
    }
    if ((op & 0xf000) == 0x6000) {
        unsigned condition = (op >> 8) & 15;
        uint32_t base = cpu->pc;
        int32_t displacement = (int8_t)op;
        if (!displacement)
            displacement = (int16_t)fetch(cpu, md, 2);
        if (condition == 1) {
            cpu->a[7] -= 4;
            if (!write_memory(md, cpu->a[7], 4, cpu->pc))
                return 0;
        } else if (!condition_true(cpu->sr, condition)) {
            return (op & 255) ? 8 : 12;
        }
        cpu->pc = base + displacement;
        return condition == 1 ? 18 : 10;
    }
    if ((op & 0xf1c0) == 0x41c0) {
        unsigned mode = (op >> 3) & 7, reg = op & 7;
        uint32_t address;
        if (!address_operand(cpu, md, mode, reg, &address))
            return 0;
        cpu->a[(op >> 9) & 7] = address;
        return memory_cycles(mode, reg, 2);
    }
    if ((op & 0xf038) == 0 && ((op & 0xf00) == 0 ||
        (op & 0xf00) == 0x200 || (op & 0xf00) == 0xa00))
        return immediate_logic(cpu, md, op);
    if ((op & 0xff00) == 0x4a00)
        return test_operand(cpu, md, op);
    if ((op & 0xff80) == 0x4c80)
        return load_multiple(cpu, md, op);
    switch (op) {
    case 0x46fc:
        if (!(cpu->sr & SR_SUPERVISOR))
            return 0;
        cpu->sr = fetch(cpu, md, 2) & 0xa71f;
        return 16;
    case 0x4e71:
        return 4;
    case 0x4e75:
        if (cpu->a[7] & 1)
            return 0;
        cpu->pc = read_memory(md, cpu->a[7], 4);
        cpu->a[7] += 4;
        return 16;
    default:
        return 0;
    }
}

void m68k_reset(struct m68k *cpu, struct megadrive *md)
{
    *cpu = (struct m68k){0};
    cpu->sr = RESET_STATUS;
    cpu->a[7] = read_memory(md, 0, 4);
    cpu->pc = read_memory(md, 4, 4);
}

unsigned m68k_step(struct m68k *cpu, struct megadrive *md)
{
    cpu->instruction_address = cpu->pc;
    if (cpu->pc & 1) {
        cpu->stopped = true;
        return 0;
    }
    cpu->opcode = fetch(cpu, md, 2);
    unsigned cycles = execute(cpu, md, cpu->opcode);
    if (!cycles)
        cpu->stopped = true;
    return cycles;
}
