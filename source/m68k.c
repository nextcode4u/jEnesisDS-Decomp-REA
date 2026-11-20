#include "m68k.h"
#include "megadrive.h"

enum {
    CCR_C = 1, CCR_V = 2, CCR_Z = 4, CCR_N = 8, CCR_X = 16,
    SR_SUPERVISOR = 0x2000, RESET_STATUS = 0x2700,
};

static void set_status(struct m68k *cpu, uint16_t value)
{
    if ((cpu->sr ^ value) & SR_SUPERVISOR) {
        uint32_t previous_sp = cpu->a[7];
        cpu->a[7] = cpu->inactive_sp;
        cpu->inactive_sp = previous_sp;
    }
    cpu->sr = value & 0xa71f;
}

static uint32_t read_memory(struct megadrive *md, uint32_t address, unsigned size)
{
    if (size == 1)
        return megadrive_read_byte(md, address);
    uint32_t value = megadrive_read_word(md, address);
    if (size == 4)
        value = (value << 16) | megadrive_read_word(md, address + 2);
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

static uint32_t fetch(struct m68k *cpu, struct megadrive *md, unsigned size)
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

static bool address_operand(struct m68k *cpu, struct megadrive *md,
                            unsigned mode, unsigned reg, unsigned size, uint32_t *address)
{
    unsigned increment = size == 1 && reg == 7 ? 2 : size;
    if (mode == 2)
        *address = cpu->a[reg];
    else if (mode == 3 && size) {
        *address = cpu->a[reg];
        cpu->a[reg] += increment;
    } else if (mode == 4 && size) {
        cpu->a[reg] -= increment;
        *address = cpu->a[reg];
    }
    else if (mode == 5)
        *address = cpu->a[reg] + (int16_t)fetch(cpu, md, 2);
    else if (mode == 6 || (mode == 7 && reg == 3)) {
        uint32_t base = mode == 6 ? cpu->a[reg] : cpu->pc;
        uint16_t extension = fetch(cpu, md, 2);
        unsigned index = (extension >> 12) & 7;
        uint32_t value = (extension & 0x8000) ? cpu->a[index] : cpu->d[index];
        if (!(extension & 0x0800))
            value = (int16_t)value;
        *address = base + value + (int8_t)extension;
    } else if (mode == 7 && reg == 0)
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
    unsigned overhead = mode == 4 ? 2 : 0;
    if (mode == 5 || (mode == 7 && reg == 0) || (mode == 7 && reg == 2))
        overhead = 4;
    if (mode == 6 || (mode == 7 && reg == 3))
        overhead = 6;
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
        if (!address_operand(cpu, md, source, src_reg, size, &address) ||
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
            !address_operand(cpu, md, target, dst_reg, size, &address) ||
            !write_memory(md, address, size, value))
            return 0;
        cycles += memory_cycles(target, dst_reg, size);
    }
    set_logic_flags(cpu, size, value);
    return cycles;
}

static unsigned test_operand(struct m68k *cpu, struct megadrive *md, uint16_t op)
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
    if (!address_operand(cpu, md, mode, reg, size, &address) ||
        (size != 1 && (address & 1)))
        return 0;
    set_logic_flags(cpu, size, read_memory(md, address, size));
    return 4 + memory_cycles(mode, reg, size);
}

static uint32_t unary_result(struct m68k *cpu, unsigned size, uint16_t op, uint32_t operand)
{
    unsigned kind = op & 0xff00;
    uint32_t mask = size_mask(size);
    operand &= mask;
    uint32_t result = kind == 0x4200 ? 0 : kind == 0x4400 ? -operand : ~operand;
    set_logic_flags(cpu, size, result);
    if (kind == 0x4400) {
        if (operand == (mask >> 1) + 1)
            cpu->sr |= CCR_V;
        cpu->sr = (cpu->sr & ~CCR_X) | (operand ? CCR_C | CCR_X : 0);
    }
    return result;
}

static unsigned unary_operand(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned encoding = (op >> 6) & 3;
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    if (encoding == 3 || (mode == 7 && reg > 1))
        return 0;
    unsigned size = 1U << encoding;
    unsigned cycles = size == 4 ? 6 : 4;
    if (mode == 0) {
        uint32_t result = unary_result(cpu, size, op, cpu->d[reg]);
        set_data(cpu, reg, size, result);
    } else {
        uint32_t address;
        if (!address_operand(cpu, md, mode, reg, size, &address) || (size != 1 && (address & 1)))
            return 0;
        uint32_t value = read_memory(md, address, size); // The 68000 reads even for CLR.
        if (!write_memory(md, address, size, unary_result(cpu, size, op, value)))
            return 0;
        cycles = (size == 4 ? 12 : 8) + memory_cycles(mode, reg, size);
    }
    return cycles;
}

static unsigned load_multiple(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    unsigned size = (op & 0x40) ? 4 : 2;
    uint16_t list = fetch(cpu, md, 2);
    uint32_t address;
    if (mode == 3)
        address = cpu->a[reg];
    else if (!address_operand(cpu, md, mode, reg, 0, &address))
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

static unsigned store_multiple(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    unsigned size = (op & 0x40) ? 4 : 2;
    bool predecrement = mode == 4;
    uint16_t list = fetch(cpu, md, 2);
    uint32_t address;
    if (predecrement)
        address = cpu->a[reg];
    else if ((mode == 7 && reg > 1) || !address_operand(cpu, md, mode, reg, 0, &address))
        return 0;
    if (address & 1)
        return 0;
    unsigned cycles = 8 + (predecrement ? 0 : memory_cycles(mode, reg, 2) - 4);
    for (unsigned bit = 0; bit < 16; ++bit) {
        if (!(list & (1U << bit)))
            continue;
        unsigned index = predecrement ? 15 - bit : bit;
        uint32_t value = index < 8 ? cpu->d[index] : cpu->a[index - 8];
        if (predecrement)
            address -= size;
        if (!write_memory(md, address, size, value))
            return 0;
        if (!predecrement)
            address += size;
        cycles += size * 2;
    }
    if (predecrement)
        cpu->a[reg] = address;
    return cycles;
}

static unsigned immediate_logic(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned encoding = (op >> 6) & 3, mode = (op >> 3) & 7, reg = op & 7;
    if (encoding == 3 || mode == 1 || (mode == 7 && reg > 1))
        return 0;
    unsigned size = 1U << encoding;
    uint32_t operand = fetch(cpu, md, size == 4 ? 4 : 2);
    uint32_t address = 0, previous = cpu->d[reg];
    if (mode != 0) {
        if (!address_operand(cpu, md, mode, reg, size, &address) || (size != 1 && (address & 1)))
            return 0;
        previous = read_memory(md, address, size);
    }
    uint32_t result;
    switch (op & 0xff00) {
    case 0x0000: result = previous | operand; break;
    case 0x0200: result = previous & operand; break;
    default: result = previous ^ operand; break;
    }
    if (mode == 0)
        set_data(cpu, reg, size, result);
    else if (!write_memory(md, address, size, result))
        return 0;
    set_logic_flags(cpu, size, result);
    if (mode != 0)
        return (size == 4 ? 20 : 12) + memory_cycles(mode, reg, size);
    return size == 4 ? 16 : 8;
}

static uint32_t arithmetic_flags(struct m68k *cpu, unsigned size, uint32_t left,
                                 uint32_t right, bool subtract, bool preserve_x)
{
    uint32_t mask = size_mask(size), sign = (mask >> 1) + 1;
    left &= mask;
    right &= mask;
    uint32_t result = (subtract ? left - right : left + right) & mask;
    bool carry = subtract ? left < right : result < left;
    uint32_t overflow = subtract ? (left ^ right) : ~(left ^ right);
    set_logic_flags(cpu, size, result);
    if ((overflow & (left ^ result) & sign) != 0)
        cpu->sr |= CCR_V;
    if (carry)
        cpu->sr |= CCR_C;
    if (!preserve_x)
        cpu->sr = (cpu->sr & ~CCR_X) | (carry ? CCR_X : 0);
    return result;
}

static unsigned quick_arithmetic(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    unsigned size = 1U << ((op >> 6) & 3);
    unsigned count = (op >> 9) & 7;
    if (!count)
        count = 8;
    bool subtract = (op & 0x100) != 0;
    if (mode == 1) {
        if (size == 1)
            return 0;
        cpu->a[reg] = subtract ? cpu->a[reg] - count : cpu->a[reg] + count;
        return 8;
    }
    if (mode == 0) {
        set_data(cpu, reg, size, arithmetic_flags(cpu, size, cpu->d[reg], count, subtract, false));
        return size == 4 ? 8 : 4;
    }
    uint32_t address;
    if ((mode == 7 && reg > 1) || !address_operand(cpu, md, mode, reg, size, &address) ||
        (size != 1 && (address & 1)))
        return 0;
    uint32_t value = read_memory(md, address, size);
    uint32_t result = arithmetic_flags(cpu, size, value, count, subtract, false);
    if (!write_memory(md, address, size, result))
        return 0;
    return (size == 4 ? 12 : 8) + memory_cycles(mode, reg, size);
}

static unsigned immediate_arithmetic(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned encoding = (op >> 6) & 3;
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    if (encoding == 3 || mode == 1 || (mode == 7 && reg > 1))
        return 0;
    unsigned size = 1U << encoding;
    uint32_t operand = fetch(cpu, md, size == 4 ? 4 : 2);
    bool compare = (op & 0xff00) == 0x0c00, subtract = (op & 0xff00) != 0x0600;
    if (mode == 0) {
        uint32_t result = arithmetic_flags(cpu, size, cpu->d[reg], operand, subtract, compare);
        if (!compare)
            set_data(cpu, reg, size, result);
        return size < 4 ? 8 : compare ? 14 : 16;
    }
    uint32_t address;
    if (!address_operand(cpu, md, mode, reg, size, &address) || (size != 1 && (address & 1)))
        return 0;
    uint32_t value = read_memory(md, address, size);
    uint32_t result = arithmetic_flags(cpu, size, value, operand, subtract, compare);
    if (!compare && !write_memory(md, address, size, result))
        return 0;
    return (size == 4 ? (compare ? 12 : 20) : (compare ? 8 : 12)) + memory_cycles(mode, reg, size);
}

static unsigned data_alu(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned kind = op >> 12, operation = (op >> 6) & 7;
    unsigned mode = (op >> 3) & 7, reg = op & 7, dest = (op >> 9) & 7;
    bool logic = kind == 8 || kind == 0xc;
    bool compare = kind == 0xb;
    bool to_address = operation == 3 || operation == 7;
    bool to_memory = operation >= 4 && !to_address;
    if ((logic && (to_address || mode == 1)) ||
        (to_memory && (compare || mode < 2 || (mode == 7 && reg > 1))))
        return 0;
    unsigned size = to_address ? (operation == 3 ? 2 : 4) : 1U << (operation & 3);
    unsigned extra = 0;
    uint32_t operand, address = 0;
    if (mode == 0) {
        operand = cpu->d[reg];
    } else if (mode == 1 && size != 1) {
        operand = cpu->a[reg];
    } else if (mode == 7 && reg == 4) {
        operand = fetch(cpu, md, size == 4 ? 4 : 2);
        extra = size == 4 ? 8 : 4;
    } else {
        if (!address_operand(cpu, md, mode, reg, size, &address) ||
            (size != 1 && (address & 1)))
            return 0;
        operand = read_memory(md, address, size);
        extra = memory_cycles(mode, reg, size);
    }
    if (to_address) {
        if (size == 2)
            operand = (int16_t)operand;
        if (compare)
            arithmetic_flags(cpu, 4, cpu->a[dest], operand, true, true);
        else
            cpu->a[dest] = kind == 9 ? cpu->a[dest] - operand : cpu->a[dest] + operand;
        return (compare ? 6 : size == 2 || !extra ? 8 : 6) + extra;
    }
    uint32_t left = to_memory ? operand : cpu->d[dest];
    uint32_t right = to_memory ? cpu->d[dest] : operand;
    uint32_t result;
    if (logic) {
        result = kind == 8 ? left | right : left & right;
        set_logic_flags(cpu, size, result);
    } else {
        result = arithmetic_flags(cpu, size, left, right, kind != 0xd, compare);
    }
    if (to_memory)
        return write_memory(md, address, size, result) ? (size == 4 ? 12 : 8) + extra : 0;
    if (!compare)
        set_data(cpu, dest, size, result);
    return (size != 4 ? 4 : compare || (extra && mode != 7) ? 6 : 8) + extra;
}

static unsigned exclusive_or(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned size = 1U << ((op >> 6) & 3);
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    uint32_t value = cpu->d[(op >> 9) & 7];
    unsigned cycles = size == 4 ? 8 : 4;
    if (mode == 0) {
        value ^= cpu->d[reg];
        set_data(cpu, reg, size, value);
    } else {
        uint32_t address;
        if ((mode == 7 && reg > 1) || !address_operand(cpu, md, mode, reg, size, &address) ||
            (size != 1 && (address & 1)))
            return 0;
        value ^= read_memory(md, address, size);
        if (!write_memory(md, address, size, value))
            return 0;
        cycles = (size == 4 ? 12 : 8) + memory_cycles(mode, reg, size);
    }
    set_logic_flags(cpu, size, value);
    return cycles;
}

static unsigned bit_operation(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    bool immediate = (op & 0xff00) == 0x0800;
    unsigned bit = immediate ? fetch(cpu, md, 2) : cpu->d[(op >> 9) & 7];
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    unsigned operation = (op >> 6) & 3;
    uint32_t value, address = 0;
    unsigned cycles;
    if (mode == 0) {
        value = cpu->d[reg];
        bit &= 31;
        cycles = 6;
    } else {
        if ((operation && mode == 7 && reg > 1) ||
            !address_operand(cpu, md, mode, reg, 1, &address))
            return 0;
        value = megadrive_read_byte(md, address);
        bit &= 7;
        cycles = 4 + memory_cycles(mode, reg, 1);
    }
    uint32_t mask = UINT32_C(1) << bit;
    cpu->sr = (cpu->sr & ~CCR_Z) | ((value & mask) ? 0 : CCR_Z);
    if (operation) {
        uint32_t result = operation == 1 ? value ^ mask :
                          operation == 2 ? value & ~mask : value | mask;
        if (mode == 0) {
            cpu->d[reg] = result;
            cycles += operation == 2 ? 4 : 2;
        } else {
            if (!megadrive_write_byte(md, address, result))
                return 0;
            cycles += 4;
        }
    }
    return cycles + (immediate ? 4 : 0);
}

static unsigned shift_register(struct m68k *cpu, uint16_t op)
{
    unsigned size = 1U << ((op >> 6) & 3), reg = op & 7;
    unsigned kind = (op >> 3) & 3, count_field = (op >> 9) & 7;
    unsigned count = (op & 0x20) ? cpu->d[count_field] & 63 : count_field ? count_field : 8;
    uint32_t mask = size_mask(size), sign = (mask >> 1) + 1;
    uint32_t value = cpu->d[reg] & mask;
    bool left = (op & 0x100) != 0, extend = (cpu->sr & CCR_X) != 0;
    bool carry = kind == 2 && extend, overflow = false;
    for (unsigned i = 0; i < count; ++i) {
        bool old_sign = (value & sign) != 0;
        carry = left ? old_sign : (value & 1) != 0;
        if (left)
            value = (value << 1) & mask;
        else
            value >>= 1;
        bool incoming = kind == 2 ? extend : kind == 3 ? carry : kind == 0 && !left && old_sign;
        if (incoming)
            value |= left ? 1 : sign;
        if (kind != 3)
            extend = carry;
        if (kind == 0 && left)
            overflow |= old_sign != ((value & sign) != 0);
    }
    set_data(cpu, reg, size, value);
    set_logic_flags(cpu, size, value);
    cpu->sr = (cpu->sr & ~CCR_X) | (extend ? CCR_X : 0) |
              (carry ? CCR_C : 0) | (overflow ? CCR_V : 0);
    return (size == 4 ? 8 : 6) + count * 2;
}

static unsigned execute(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    if (op >= 0x1000 && op < 0x4000)
        return move(cpu, md, op);
    unsigned top = op >> 12;
    if (top == 0xb && (op & 0x100) && (op & 0xc0) != 0xc0)
        return exclusive_or(cpu, md, op);
    if (top == 8 || top == 9 || top == 0xb || top == 0xc || top == 0xd)
        return data_alu(cpu, md, op);
    if ((op & 0xf100) == 0x0100 || (op & 0xff00) == 0x0800)
        return bit_operation(cpu, md, op);
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
    if ((op & 0xf000) == 0x5000 && (op & 0xc0) != 0xc0)
        return quick_arithmetic(cpu, md, op);
    if ((op & 0xf000) == 0xe000 && (op & 0xc0) != 0xc0)
        return shift_register(cpu, op);
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
        if (!address_operand(cpu, md, mode, reg, 0, &address))
            return 0;
        cpu->a[(op >> 9) & 7] = address;
        return mode == 6 || (mode == 7 && reg == 3) ? 12 : memory_cycles(mode, reg, 2);
    }
    if ((op & 0xff80) == 0x4e80) {
        unsigned mode = (op >> 3) & 7, reg = op & 7;
        uint32_t address;
        if (!address_operand(cpu, md, mode, reg, 0, &address))
            return 0;
        bool call = !(op & 0x40);
        if (call) {
            cpu->a[7] -= 4;
            if (!write_memory(md, cpu->a[7], 4, cpu->pc))
                return 0;
        }
        cpu->pc = address;
        unsigned cycles = mode == 2 ? 8 : mode == 6 || (mode == 7 && reg == 3) ? 14 :
                          mode == 7 && reg == 1 ? 12 : 10;
        return cycles + (call ? 8 : 0);
    }
    if ((op & 0xff00) == 0 || (op & 0xff00) == 0x0200 || (op & 0xff00) == 0x0a00)
        return immediate_logic(cpu, md, op);
    if ((op & 0xff00) == 0x0400 || (op & 0xff00) == 0x0600 || (op & 0xff00) == 0x0c00)
        return immediate_arithmetic(cpu, md, op);
    if ((op & 0xff00) == 0x4a00)
        return test_operand(cpu, md, op);
    if (((op & 0xff00) == 0x4200 || (op & 0xff00) == 0x4400 ||
         (op & 0xff00) == 0x4600) && (op & 0xc0) != 0xc0)
        return unary_operand(cpu, md, op);
    if ((op & 0xff80) == 0x4c80)
        return load_multiple(cpu, md, op);
    if ((op & 0xff80) == 0x4880 && ((op >> 3) & 7) >= 2)
        return store_multiple(cpu, md, op);
    if ((op & 0xffb8) == 0x4880) {
        unsigned reg = op & 7, size = (op & 0x40) ? 4 : 2;
        uint32_t value = size == 4 ? (int16_t)cpu->d[reg] : (int8_t)cpu->d[reg];
        set_data(cpu, reg, size, value);
        set_logic_flags(cpu, size, value);
        return 4;
    }
    if ((op & 0xfff8) == 0x4840) {
        unsigned reg = op & 7;
        uint32_t value = cpu->d[reg];
        cpu->d[reg] = (value << 16) | (value >> 16);
        set_logic_flags(cpu, 4, cpu->d[reg]);
        return 4;
    }
    if ((op & 0xfff8) == 0x40c0) {
        set_data(cpu, op & 7, 2, cpu->sr);
        return 6;
    }
    if ((op & 0xfff8) == 0x44c0) {
        cpu->sr = (cpu->sr & ~31) | (cpu->d[op & 7] & 31);
        return 12;
    }
    if ((op & 0xfff0) == 0x4e60) {
        if (!(cpu->sr & SR_SUPERVISOR))
            return 0;
        if (op & 8)
            cpu->a[op & 7] = cpu->inactive_sp;
        else
            cpu->inactive_sp = cpu->a[op & 7];
        return 4;
    }
    switch (op) {
    case 0x46fc:
        if (!(cpu->sr & SR_SUPERVISOR))
            return 0;
        set_status(cpu, fetch(cpu, md, 2));
        return 16;
    case 0x4e71:
        return 4;
    case 0x4e73: {
        if (!(cpu->sr & SR_SUPERVISOR) || (cpu->a[7] & 1))
            return 0;
        uint16_t status = read_memory(md, cpu->a[7], 2);
        cpu->pc = read_memory(md, cpu->a[7] + 2, 4);
        cpu->a[7] += 6;
        set_status(cpu, status);
        return 20;
    }
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

unsigned m68k_interrupt(struct m68k *cpu, struct megadrive *md, unsigned level)
{
    uint16_t old_status = cpu->sr;
    if (level == 0 || level > 7 || (level != 7 && level <= ((old_status >> 8) & 7)))
        return 0;
    set_status(cpu, (old_status & 31) | SR_SUPERVISOR | (level << 8));
    cpu->a[7] -= 6;
    if (!write_memory(md, cpu->a[7], 2, old_status) ||
        !write_memory(md, cpu->a[7] + 2, 4, cpu->pc)) {
        cpu->stopped = true;
        return 0;
    }
    cpu->pc = read_memory(md, (24 + level) * 4, 4);
    return 44;
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
