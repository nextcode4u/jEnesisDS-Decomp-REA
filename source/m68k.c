#include "m68k.h"
#include "megadrive.h"
#include "z80_bus.h"

#ifdef __NDS__
#include <nds/ndstypes.h>
#else
#define DTCM_DATA
#endif
enum {
    CCR_C = 1, CCR_V = 2, CCR_Z = 4, CCR_N = 8, CCR_X = 16,
    SR_SUPERVISOR = 0x2000, RESET_STATUS = 0x2700,
};

static void set_status(struct m68k *cpu, struct megadrive *md, uint16_t value)
{
    if ((cpu->sr ^ value) & SR_SUPERVISOR) {
        uint32_t previous_sp = cpu->a[7];
        cpu->a[7] = cpu->inactive_sp;
        cpu->inactive_sp = previous_sp;
    }
    if ((cpu->sr & ~value & 0x0400) && (md->vdp_registers[0] & 0x10))
        m68k_end_slice_for_hinterrupt(md);
    cpu->sr = value & 0xa71f;
}

static inline bool rom_visible(const struct megadrive *md, uint32_t address, unsigned size)
{
    return address + size <= md->rom_fetch_limit ||
           (address < md->rom_size && md->rom_size - address >= size &&
            (!(md->sram_control & 1) || address + size <= md->sram_start ||
             address >= md->sram_start + md->sram_size));
}

static uint32_t read_cartridge(const struct megadrive *md, unsigned address, unsigned size)
{
    const uint8_t *rom = md->rom;
    if (size == 1)
        return cartridge_byte(rom, address);
    if (M68K_NATIVE_WORDS && (address & 1)) {
        uint32_t value = 0;
        for (unsigned i = 0; i < size; ++i)
            value = (value << 8) | cartridge_byte(rom, address + i);
        return value;
    }
    uint32_t value = cartridge_aligned_word(rom, address);
    return size == 2 ? value : (value << 16) | cartridge_aligned_word(rom, address + 2);
}

static ARM9_ITCM __attribute__((noinline)) uint32_t read_other_memory(
    struct megadrive *md, uint32_t address, unsigned size)
{
    if (rom_visible(md, address, size))
        return read_cartridge(md, address, size);
    if (size == 1)
        return megadrive_read_byte(md, address);
    uint32_t value = megadrive_read_word(md, address);
    if (size == 4)
        value = (value << 16) | megadrive_read_word(md, address + 2);
    return value;
}

static __attribute__((noinline)) bool write_other_memory(
    struct megadrive *md, uint32_t address, unsigned size, uint32_t value)
{
    if (size == 1)
        return megadrive_write_byte(md, address, value);
    if (size == 4 && !megadrive_write_word(md, address, value >> 16))
        return false;
    return megadrive_write_word(md, address + size - 2, value);
}

static inline __attribute__((always_inline)) uint32_t read_memory_fast(struct megadrive *md, uint32_t address, unsigned size)
{
    address &= 0xffffff;
    if (address >= 0xe00000 && (address & 0xffff) <= 0x10000 - size) {
        if (size == 1)
            return work_ram_byte(md, address);
        if (M68K_NATIVE_WORDS && size == 4 && !(address & 3)) {
            // The first guest word occupies the low half of the ARM word.
            uint32_t pair;
            __builtin_memcpy(&pair, __builtin_assume_aligned(md->memory->ram + (uint16_t)address, 4), sizeof(pair));
            return (pair << 16) | (pair >> 16);
        }
        uint32_t word = work_ram_word(md, address);
        return size == 2 ? word : (word << 16) | work_ram_word(md, address + 2);
    }
    return read_other_memory(md, address, size);
}

static inline __attribute__((always_inline)) bool write_memory_fast(struct megadrive *md, uint32_t address, unsigned size, uint32_t value)
{
    address &= 0xffffff;
    if (size != 1 && (address & 1))
        return false;
    if (address >= 0xe00000 && (address & 0xffff) <= 0x10000 - size) {
        if (size == 1) {
            work_ram_store_byte(md, address, value);
        } else {
            if (M68K_NATIVE_WORDS && size == 4 && !(address & 3)) {
                uint32_t pair = (value << 16) | (value >> 16);
                __builtin_memcpy(__builtin_assume_aligned(md->memory->ram + (uint16_t)address, 4), &pair, sizeof(pair));
                return true;
            }
            if (size == 4) {
                work_ram_store_word(md, address, value >> 16);
                address += 2;
            }
            work_ram_store_word(md, address, value);
        }
        return true;
    }
    return write_other_memory(md, address, size, value);
}

static ARM9_ITCM uint32_t read_memory(struct megadrive *md, uint32_t address, unsigned size)
{
    return read_memory_fast(md, address, size);
}

static ARM9_ITCM bool write_memory(struct megadrive *md, uint32_t address, unsigned size, uint32_t value)
{
    return write_memory_fast(md, address, size, value);
}

static inline __attribute__((always_inline)) uint32_t fetch(
    struct m68k *cpu, struct megadrive *md, unsigned size)
{
    uint32_t address = cpu->pc & 0xffffff;
    cpu->pc += size;
    if (__builtin_expect(address + size <= md->rom_fetch_limit, 1)) {
        const uint8_t *rom = md->rom;
        uint32_t word = cartridge_aligned_word(rom, address);
        return size == 2 ? word : (word << 16) | cartridge_aligned_word(rom, address + 2);
    }
    return read_memory(md, address, size);
}

static bool enter_exception(struct m68k *cpu, struct megadrive *md, unsigned vector,
                            uint16_t status)
{
    uint16_t old_status = cpu->sr;
    set_status(cpu, md, (status & ~0x8000) | SR_SUPERVISOR);
    cpu->a[7] -= 6;
    if (!write_memory(md, cpu->a[7], 2, old_status) ||
        !write_memory(md, cpu->a[7] + 2, 4, cpu->pc)) {
        cpu->stopped = true;
        return false;
    }
    cpu->pc = read_memory(md, vector * 4, 4);
    return true;
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
    // Normalize the active operand so one shift supplies both N and Z.
    uint32_t normalized = value << (32 - size * 8);
    uint16_t nz = normalized == 0 ? CCR_Z : (normalized >> 31) * CCR_N;
    cpu->sr = (cpu->sr & ~(CCR_N | CCR_Z | CCR_V | CCR_C)) | nz;
}

static bool condition_true(uint16_t sr, unsigned condition)
{
    // A bit per NZVC state, indexed by the instruction's condition field.
    static const uint16_t masks[16] DTCM_DATA = {
        0xffff, 0x0000, // T, F
        0x0505, 0xfafa, // HI, LS
        0x5555, 0xaaaa, // CC, CS
        0x0f0f, 0xf0f0, // NE, EQ
        0x3333, 0xcccc, // VC, VS
        0x00ff, 0xff00, // PL, MI
        0xcc33, 0x33cc, // GE, LT
        0x0c03, 0xf3fc, // GT, LE
    };
    return (masks[condition] >> (sr & 15)) & 1;
}

static ARM9_ITCM __attribute__((noinline)) bool address_operand_other(
    struct m68k *cpu, struct megadrive *md, unsigned mode, unsigned reg, uint32_t *address)
{
    if (mode == 5)
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

static inline bool address_operand(struct m68k *cpu, struct megadrive *md,
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
    else
        return address_operand_other(cpu, md, mode, reg, address);
    return true;
}

static unsigned memory_cycles(unsigned mode, unsigned reg, unsigned size)
{
    static const uint8_t mode_cost[8] DTCM_DATA = {0, 0, 0, 0, 2, 4, 6, 0};
    static const uint8_t extended_cost[8] DTCM_DATA = {4, 8, 4, 6, 0, 0, 0, 0};
    unsigned overhead = mode == 7 ? extended_cost[reg] : mode_cost[mode];
    return overhead + (size == 4 ? 8 : 4);
}

static ARM9_ITCM __attribute__((noinline)) unsigned move(struct m68k *cpu, struct megadrive *md, uint16_t op)
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

// Fast paths for MOVE forms using data registers, stack or ordinary memory.
static inline __attribute__((always_inline)) unsigned move_common(
    struct m68k *cpu, struct megadrive *md, uint16_t op, unsigned size)
{
    unsigned src_reg = op & 7, dst_reg = (op >> 9) & 7;
    // The six mode bits identify both operands without decoding the register numbers.
    unsigned modes = op & 0x01f8;
    const unsigned access_cycles = size == 4 ? 8 : 4;
    uint32_t value, address;
    unsigned cycles = 4;
    if (modes == 0x0000) {
        value = cpu->d[src_reg];
    } else if (modes == 0x0028 || (size != 2 && modes == 0x0018) || modes == 0x0010) {
        address = cpu->a[src_reg];
        if (modes == 0x0028) {
            address += (int16_t)fetch(cpu, md, 2);
            cycles += 4;
        } else if (modes == 0x0018) {
            cpu->a[src_reg] += size == 1 && src_reg == 7 ? 2 : size;
        }
        if (size != 1 && (address & 1))
            return 0;
        value = read_memory_fast(md, address, size);
        cycles += access_cycles;
    } else if ((op & 0x01ff) == 0x003c) {
        value = fetch(cpu, md, size == 4 ? 4 : 2);
        cycles += access_cycles;
    } else if (modes == 0x00c0 || modes == 0x0080 || modes == 0x0100 || modes == 0x0140) {
        address = cpu->a[dst_reg];
        unsigned increment = size == 1 && dst_reg == 7 ? 2 : size;
        if (modes == 0x00c0) {
            cpu->a[dst_reg] += increment;
        } else if (modes == 0x0100) {
            address = cpu->a[dst_reg] -= increment;
            cycles += 2;
        } else if (modes == 0x0140) {
            address += (int16_t)fetch(cpu, md, 2);
            cycles += 4;
        }
        value = cpu->d[src_reg];
        if (!write_memory_fast(md, address, size, value))
            return 0;
        set_logic_flags(cpu, size, value);
        return cycles + access_cycles;
    } else {
        return move(cpu, md, op);
    }
    set_data(cpu, dst_reg, size, value);
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
    if (kind == 0x4000) {
        uint32_t sign = (mask >> 1) + 1;
        bool extend = (cpu->sr & CCR_X) != 0;
        uint32_t result = (-operand - extend) & mask;
        uint16_t flags = (result & sign ? CCR_N : 0) |
                         (result ? 0 : cpu->sr & CCR_Z) |
                         (operand & result & sign ? CCR_V : 0) |
                         ((operand || extend) ? CCR_X | CCR_C : 0);
        cpu->sr = (cpu->sr & ~31) | flags;
        return result;
    }
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

static unsigned immediate_status(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    bool whole_status = (op & 0x40) != 0;
    if (whole_status && !(cpu->sr & SR_SUPERVISOR)) {
        cpu->pc -= 2; // Stack the faulting opcode address.
        return enter_exception(cpu, md, 8, cpu->sr) ? 34 : 0;
    }

    uint16_t operand = fetch(cpu, md, 2);
    uint16_t changed;
    switch (op & 0xff00) {
    case 0x0000: changed = cpu->sr | operand; break;
    case 0x0200: changed = cpu->sr & operand; break;
    default: changed = cpu->sr ^ operand; break;
    }
    if (whole_status)
        set_status(cpu, md, changed);
    else
        cpu->sr = (cpu->sr & ~31) | (changed & 31);
    return 20;
}

static unsigned immediate_logic(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    if ((op & 0xbf) == 0x3c)
        return immediate_status(cpu, md, op);
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
    unsigned shift = 32 - size * 8;
    left <<= shift;
    right <<= shift;
    uint32_t result;
    bool carry;
    uint32_t overflow;
    if (subtract) {
        carry = __builtin_sub_overflow(left, right, &result);
        overflow = left ^ right;
    } else {
        carry = __builtin_add_overflow(left, right, &result);
        overflow = ~(left ^ right);
    }
    unsigned flags = (result == 0 ? CCR_Z : (result >> 31) * CCR_N) |
                     ((overflow & (left ^ result)) >> 31) * CCR_V;
    if (carry)
        flags |= CCR_C | (preserve_x ? 0 : CCR_X);
    unsigned keep = preserve_x ? ~15U : ~31U;
    cpu->sr = (cpu->sr & keep) | flags;
    return result >> shift;
}

static __attribute__((noinline)) unsigned extend_arithmetic(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned size = 1U << ((op >> 6) & 3);
    unsigned src = op & 7, dst = (op >> 9) & 7;
    bool memory = (op & 8) != 0, subtract = !(op & 0x4000);
    uint32_t left = cpu->d[dst], right = cpu->d[src], address = 0;
    if (memory) {
        uint32_t source_address;
        address_operand(cpu, md, 4, src, size, &source_address);
        if (size != 1 && (source_address & 1))
            return 0;
        right = read_memory(md, source_address, size);
        address_operand(cpu, md, 4, dst, size, &address);
        if (size != 1 && (address & 1))
            return 0;
        left = read_memory(md, address, size);
    }

    unsigned extend = (cpu->sr & CCR_X) != 0;
    uint32_t mask = size_mask(size), sign = (mask >> 1) + 1;
    left &= mask;
    right &= mask;
    uint32_t result = (subtract ? left - right - extend : left + right + extend) & mask;
    bool carry = subtract ? left < right || (extend && left == right) :
                            result < left || (extend && result == left);
    uint32_t overflow = (subtract ? left ^ right : ~(left ^ right)) & (left ^ result);
    if (memory) {
        if (!write_memory(md, address, size, result))
            return 0;
    } else {
        set_data(cpu, dst, size, result);
    }

    uint16_t flags = (result & sign ? CCR_N : 0) |
                     (result ? 0 : cpu->sr & CCR_Z) |
                     (overflow & sign ? CCR_V : 0) |
                     (carry ? CCR_X | CCR_C : 0);
    cpu->sr = (cpu->sr & ~31) | flags;
    return memory ? (size == 4 ? 30 : 18) : (size == 4 ? 8 : 4);
}

static ARM9_ITCM __attribute__((noinline)) unsigned quick_arithmetic(struct m68k *cpu, struct megadrive *md, uint16_t op)
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

static inline __attribute__((always_inline)) unsigned register_arithmetic(
    struct m68k *cpu, uint16_t op, unsigned size, bool subtract)
{
    unsigned dest = (op >> 9) & 7;
    const uint32_t *source = (op & 8) ? cpu->a : cpu->d;
    uint32_t result = arithmetic_flags(cpu, size, cpu->d[dest], source[op & 7], subtract, false);
    set_data(cpu, dest, size, result);
    return size == 4 ? 8 : 4;
}

static ARM9_ITCM unsigned data_alu(struct m68k *cpu, struct megadrive *md, uint16_t op)
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

static __attribute__((noinline)) unsigned exclusive_or(struct m68k *cpu, struct megadrive *md, uint16_t op)
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

static __attribute__((noinline)) unsigned multiply_or_divide(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned mode = (op >> 3) & 7, reg = op & 7, dest = (op >> 9) & 7;
    unsigned extra = 0;
    bool signed_operand = (op & 0x100) != 0;
    uint16_t source;
    if (mode == 0) {
        source = cpu->d[reg];
    } else if (mode == 7 && reg == 4) {
        source = fetch(cpu, md, 2);
        extra = 4;
    } else {
        uint32_t address;
        if (!address_operand(cpu, md, mode, reg, 2, &address) || (address & 1))
            return 0;
        source = read_memory(md, address, 2);
        extra = memory_cycles(mode, reg, 2);
    }
    if (op >> 12 == 0xc) {
        cpu->d[dest] = signed_operand ? (uint32_t)((int16_t)source * (int16_t)cpu->d[dest]) :
                       (uint32_t)source * (uint16_t)cpu->d[dest];
        set_logic_flags(cpu, 4, cpu->d[dest]);
        uint16_t transitions = signed_operand ? source ^ (source << 1) : source;
        return 38 + 2 * __builtin_popcount((unsigned)transitions) + extra;
    }
    if (!source)
        return enter_exception(cpu, md, 5, cpu->sr) ? 38 + extra : 0;

    uint32_t dividend = cpu->d[dest];
    uint32_t quotient = 0, remainder = 0;
    bool overflow;
    if (signed_operand) {
        int32_t d = (int32_t)dividend;
        int16_t s = (int16_t)source;
        overflow = d == INT32_MIN && s == -1;
        if (!overflow) {
            int32_t q = d / s;
            overflow = q < INT16_MIN || q > INT16_MAX;
            quotient = q;
            remainder = d % s;
        }
    } else {
        quotient = dividend / source;
        remainder = dividend % source;
        overflow = quotient > UINT16_MAX;
    }
    if (overflow) {
        cpu->sr = (cpu->sr & ~CCR_C) | CCR_V;
    } else {
        cpu->d[dest] = (remainder << 16) | (quotient & 0xffff);
        set_logic_flags(cpu, 2, quotient);
    }
    // The 68000's divider has data-dependent timing.
    return (signed_operand ? 158 : 140) + extra;
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

static uint32_t shift_value(struct m68k *cpu, uint32_t value, unsigned size,
                            unsigned kind, unsigned count, bool left)
{
    unsigned bits = size * 8;
    uint32_t mask = size_mask(size), sign = (mask >> 1) + 1;
    value &= mask;
    bool extend = (cpu->sr & CCR_X) != 0;
    bool carry = kind == 2 && extend, overflow = false;
    if (count && kind < 2) {
        if (left) {
            carry = count <= bits && ((value >> (bits - count)) & 1);
            if (kind == 0) {
                // ASL overflows if the old sign and the bits that move into
                // that position are a mixture of zeros and ones.
                if (count >= bits) {
                    overflow = value != 0;
                } else {
                    uint32_t prefix = value >> (bits - count - 1);
                    overflow = prefix && prefix != (UINT32_MAX >> (31 - count));
                }
            }
            value = count < bits ? (value << count) & mask : 0;
        } else {
            bool negative = kind == 0 && (value & sign);
            carry = count <= bits ? (value >> (count - 1)) & 1 : negative;
            if (count < bits)
                value = (value >> count) | (negative ? mask ^ (mask >> count) : 0);
            else
                value = negative ? mask : 0;
        }
        extend = carry;
    } else if (count && kind == 3) {
        unsigned rotation = count & (bits - 1);
        if (rotation) {
            unsigned distance = left ? rotation : bits - rotation;
            value = ((value << distance) | (value >> (bits - distance))) & mask;
        }
        carry = (value & (left ? 1 : sign)) != 0;
    } else if (kind == 2 && count) {
        // Rotate on a ring containing the operand and one additional X bit.
        unsigned width = bits + 1;
        while (count >= width)
            count -= width;
        if (count) {
            unsigned distance = left ? count : width - count;
            uint32_t shifted = distance < bits ? (value << distance) & mask : 0;
            uint32_t wrapped = distance > 1 ? value >> (width - distance) : 0;
            carry = (value >> (bits - distance)) & 1;
            value = shifted | wrapped | (uint32_t)extend << (distance - 1);
            extend = carry;
        }
    }
    set_logic_flags(cpu, size, value);
    cpu->sr = (cpu->sr & ~CCR_X) | (extend ? CCR_X : 0) |
              (carry ? CCR_C : 0) | (overflow ? CCR_V : 0);
    return value;
}

static __attribute__((noinline)) unsigned shift_register(struct m68k *cpu, uint16_t op)
{
    unsigned size = 1U << ((op >> 6) & 3), reg = op & 7;
    unsigned kind = (op >> 3) & 3, count_field = (op >> 9) & 7;
    unsigned count = (op & 0x20) ? cpu->d[count_field] & 63 : count_field ? count_field : 8;
    uint32_t result = shift_value(cpu, cpu->d[reg], size, kind, count, (op & 0x100) != 0);
    set_data(cpu, reg, size, result);
    return (size == 4 ? 8 : 6) + count * 2;
}

static __attribute__((noinline)) unsigned shift_memory(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned mode = (op >> 3) & 7, reg = op & 7;
    uint32_t address;
    if ((op & 0x0800) || (mode == 7 && reg > 1) ||
        !address_operand(cpu, md, mode, reg, 2, &address) || (address & 1))
        return 0;
    uint32_t value = read_memory(md, address, 2);
    uint32_t result = shift_value(cpu, value, 2, (op >> 9) & 3, 1, (op & 0x100) != 0);
    return write_memory(md, address, 2, result) ? 8 + memory_cycles(mode, reg, 2) : 0;
}

static ARM9_ITCM __attribute__((noinline)) unsigned execute_misc(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
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
    if ((op & 0xff00) == 0x4a00)
        return test_operand(cpu, md, op);
    if ((op & 0xf900) == 0x4000 && (op & 0xc0) != 0xc0)
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
    if ((op & 0xffc0) == 0x4840) {
        unsigned mode = (op >> 3) & 7, reg = op & 7;
        uint32_t address;
        if (mode == 0 || mode == 1 || mode == 3 || mode == 4 ||
            (mode == 7 && reg > 3) || !address_operand(cpu, md, mode, reg, 0, &address))
            return 0;
        cpu->a[7] -= 4;
        if (!write_memory(md, cpu->a[7], 4, address))
            return 0;
        if (mode == 2)
            return 12;
        return (mode == 5 || (mode == 7 && (reg == 0 || reg == 2))) ? 16 : 20;
    }
    if ((op & 0xffc0) == 0x40c0) {
        unsigned mode = (op >> 3) & 7, reg = op & 7;
        if (mode == 0) {
            set_data(cpu, reg, 2, cpu->sr);
            return 6;
        }
        uint32_t address;
        if ((mode == 7 && reg > 1) || !address_operand(cpu, md, mode, reg, 2, &address) ||
            !write_memory(md, address, 2, cpu->sr))
            return 0;
        return 8 + memory_cycles(mode, reg, 2);
    }
    if ((op & 0xffc0) == 0x44c0 || (op & 0xffc0) == 0x46c0) {
        bool whole_status = (op & 0x200) != 0;
        if (whole_status && !(cpu->sr & SR_SUPERVISOR))
            return 0;
        unsigned mode = (op >> 3) & 7, reg = op & 7;
        unsigned cycles = 12;
        uint16_t value;
        if (mode == 0) {
            value = cpu->d[reg];
        } else if (mode == 7 && reg == 4) {
            value = fetch(cpu, md, 2);
            cycles += 4;
        } else {
            uint32_t address;
            if (!address_operand(cpu, md, mode, reg, 2, &address) || (address & 1))
                return 0;
            value = read_memory(md, address, 2);
            cycles += memory_cycles(mode, reg, 2);
        }
        if (whole_status)
            set_status(cpu, md, value);
        else
            cpu->sr = (cpu->sr & ~31) | (value & 31);
        return cycles;
    }
    if ((op & 0xfff8) == 0x4e50) {
        unsigned frame = op & 7;
        int16_t displacement = fetch(cpu, md, 2);
        cpu->a[7] -= 4;
        if (!write_memory(md, cpu->a[7], 4, cpu->a[frame]))
            return 0;
        cpu->a[frame] = cpu->a[7];
        cpu->a[7] += displacement;
        return 16;
    }
    if ((op & 0xfff8) == 0x4e58) {
        unsigned frame = op & 7;
        uint32_t stack = cpu->a[frame];
        if (stack & 1)
            return 0;
        cpu->a[7] = stack + 4;
        cpu->a[frame] = read_memory(md, stack, 4);
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
    if ((op & 0xfff0) == 0x4e40)
        return enter_exception(cpu, md, 32 + (op & 15), cpu->sr) ? 34 : 0;
    switch (op) {
    case 0x4e71:
        return 4;
    case 0x4e73: {
        if (!(cpu->sr & SR_SUPERVISOR) || (cpu->a[7] & 1))
            return 0;
        uint16_t status = read_memory(md, cpu->a[7], 2);
        cpu->pc = read_memory(md, cpu->a[7] + 2, 4);
        cpu->a[7] += 6;
        set_status(cpu, md, status);
        return 20;
    }
    case 0x4e77: {
        uint32_t stack = cpu->a[7];
        if (stack & 1)
            return 0;
        uint16_t flags = read_memory(md, stack, 2);
        cpu->pc = read_memory(md, stack + 2, 4);
        cpu->a[7] = stack + 6;
        cpu->sr = (cpu->sr & ~31) | (flags & 31);
        return 20;
    }
    default:
        return 0;
    }
}

static unsigned move_peripheral(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned reg = (op >> 9) & 7;
    unsigned count = (op & 0x40) ? 4 : 2;
    uint32_t address = cpu->a[op & 7] + (int16_t)fetch(cpu, md, 2);
    if (op & 0x80) {
        for (unsigned i = 0; i < count; ++i) {
            uint8_t byte = cpu->d[reg] >> ((count - i - 1) * 8);
            if (!megadrive_write_byte(md, address + i * 2, byte))
                return 0;
        }
    } else {
        uint32_t value = 0;
        for (unsigned i = 0; i < count; ++i)
            value = value << 8 | megadrive_read_byte(md, address + i * 2);
        set_data(cpu, reg, count, value);
    }
    return count == 4 ? 24 : 16;
}

static unsigned compare_memory(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned size = 1U << ((op >> 6) & 3);
    uint32_t source, destination;
    address_operand(cpu, md, 3, op & 7, size, &source);
    if (size != 1 && (source & 1))
        return 0;
    uint32_t right = read_memory(md, source, size);
    address_operand(cpu, md, 3, (op >> 9) & 7, size, &destination);
    if (size != 1 && (destination & 1))
        return 0;
    arithmetic_flags(cpu, size, read_memory(md, destination, size), right, true, true);
    return size == 4 ? 20 : 12;
}

static ARM9_ITCM __attribute__((noinline)) unsigned execute_immediate(struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    if ((op & 0xf138) == 0x0108)
        return move_peripheral(cpu, md, op);
    if ((op & 0x100) || (op & 0xff00) == 0x0800)
        return bit_operation(cpu, md, op);
    if ((op & 0xff00) == 0 || (op & 0xff00) == 0x0200 || (op & 0xff00) == 0x0a00)
        return immediate_logic(cpu, md, op);
    if ((op & 0xff00) == 0x0400 || (op & 0xff00) == 0x0600 || (op & 0xff00) == 0x0c00)
        return immediate_arithmetic(cpu, md, op);
    return 0;
}

static ARM9_ITCM __attribute__((noinline)) bool call_subroutine(
    struct m68k *cpu, struct megadrive *md, uint32_t address)
{
    cpu->a[7] -= 4;
    if (!write_memory_fast(md, cpu->a[7], 4, cpu->pc))
        return false;
    cpu->pc = address;
    return true;
}

static inline __attribute__((always_inline)) unsigned execute_branch(
    struct m68k *cpu, struct megadrive *md, uint16_t op)
{
    unsigned condition = (op >> 8) & 15;
    uint32_t base = cpu->pc;
    int32_t displacement = (int8_t)op;
    if (!displacement)
        displacement = (int16_t)fetch(cpu, md, 2);
    if (condition == 1)
        return call_subroutine(cpu, md, base + displacement) ? 18 : 0;
    if (!condition_true(cpu->sr, condition))
        return (op & 255) ? 8 : 12;
    cpu->pc = base + displacement;
    return 10;
}

unsigned m68k_interrupt(struct m68k *cpu, struct megadrive *md, unsigned level)
{
    uint16_t old_status = cpu->sr;
    if (level == 0 || level > 7 || (level != 7 && level <= ((old_status >> 8) & 7)))
        return 0;
    return enter_exception(cpu, md, 24 + level, (old_status & 31) | (level << 8)) ? 44 : 0;
}

static __attribute__((noinline)) unsigned skip_ram_store_loop(struct m68k *cpu, struct megadrive *md, unsigned budget,
                                    uint16_t move_op)
{
    unsigned reg = cpu->opcode & 7;
    unsigned data = move_op & 7, addr = (move_op >> 9) & 7;
    if ((move_op & 0xf1f8) != 0x20c0 || data == reg)
        return 0;
    uint32_t address = cpu->a[addr] & 0xffffff;
    if (address < 0xe00000 || (address & 1))
        return 0;
    unsigned iterations = budget / 22;
    unsigned counter = (uint16_t)cpu->d[reg];
    unsigned room = (0x10000 - (address & 0xffff)) / 4;
    if (iterations > counter)
        iterations = counter;
    if (iterations > room)
        iterations = room;
    uint8_t *dest = md->memory->ram + (address & 0xffff);
    uint32_t value = cpu->d[data];
    for (unsigned i = 0; i < iterations; ++i) {
        dest[0 ^ M68K_NATIVE_WORDS] = value >> 24;
        dest[1 ^ M68K_NATIVE_WORDS] = value >> 16;
        dest[2 ^ M68K_NATIVE_WORDS] = value >> 8;
        dest[3 ^ M68K_NATIVE_WORDS] = value;
        dest += 4;
    }
    if (iterations)
        set_logic_flags(cpu, 4, value);
    cpu->a[addr] += iterations * 4;
    set_data(cpu, reg, 2, counter - iterations);
    return iterations * 22;
}

static __attribute__((noinline)) unsigned skip_signed_byte_copy(struct m68k *cpu, struct megadrive *md,
                                      unsigned budget, const uint8_t *rom)
{
    // MOVE.B (An)+,Dn; EXT.W Dn; ADD.W Dr,Dn; MOVE.L Dn,(Am)+; DBRA.
    uint16_t load = cartridge_aligned_word(rom, 0), extend = cartridge_aligned_word(rom, 2);
    uint16_t add = cartridge_aligned_word(rom, 4), store = cartridge_aligned_word(rom, 6);
    unsigned source = load & 7, data = (load >> 9) & 7;
    unsigned increment = add & 7, target = (store >> 9) & 7, counter = cpu->opcode & 7;
    if ((load & 0xf1f8) != 0x1018 || extend != (0x4880 | data) ||
        (add & 0xfff8) != (0xd040 | data << 9) || (store & 0xf1ff) != (0x20c0 | data) ||
        source == target || data == counter || increment == data || increment == counter)
        return 0;

    unsigned src = cpu->a[source] & 0xffffff, dst = cpu->a[target] & 0xffffff;
    bool source_in_ram = src >= 0xe00000;
    if ((!source_in_ram && !rom_visible(md, src, 1)) || dst < 0xe00000 || (dst & 1))
        return 0;
    enum { ITERATION_CYCLES = 38 };
    unsigned step = source == 7 ? 2 : 1;
    unsigned iterations = budget / ITERATION_CYCLES;
    unsigned remaining = (uint16_t)cpu->d[counter];
    unsigned src_bytes = source_in_ram ? 0x10000 - (src & 0xffff) : md->rom_size - src;
    unsigned src_room = (src_bytes + step - 1) / step;
    unsigned dst_room = (0x10000 - (dst & 0xffff)) / 4;
    if (iterations > remaining)
        iterations = remaining;
    if (iterations > src_room)
        iterations = src_room;
    if (iterations > dst_room)
        iterations = dst_room;
    if (!iterations)
        return 0;

    if (!source_in_ram && !rom_visible(md, src, (iterations - 1) * step + 1))
        return 0;
    uint8_t *output = md->memory->ram + (dst & 0xffff);
    uint32_t upper = cpu->d[data] & 0xffff0000;
    uint16_t bias = cpu->d[increment], word = 0;
    for (unsigned i = 0; i < iterations; ++i) {
        unsigned address = src + i * step;
        int8_t value = source_in_ram ? work_ram_byte(md, address) :
                       cartridge_byte(md->rom, address);
        word = value + bias;
        output[0 ^ M68K_NATIVE_WORDS] = upper >> 24;
        output[1 ^ M68K_NATIVE_WORDS] = upper >> 16;
        output[2 ^ M68K_NATIVE_WORDS] = word >> 8;
        output[3 ^ M68K_NATIVE_WORDS] = word;
        output += 4;
    }
    cpu->d[data] = upper | word;
    cpu->sr = (cpu->sr & ~CCR_X) | (word < bias ? CCR_X : 0);
    set_logic_flags(cpu, 4, cpu->d[data]);
    cpu->a[source] += iterations * step;
    cpu->a[target] += iterations * 4;
    set_data(cpu, counter, 2, remaining - iterations);
    return iterations * ITERATION_CYCLES;
}

static __attribute__((noinline)) unsigned skip_interleaved_word_stores(struct m68k *cpu, struct megadrive *md,
                                             unsigned budget, const uint8_t *rom)
{
    // Two MOVE.W stores through the same postincrement address register,
    // followed by SWAP, ADD, SWAP and the taken DBRA.
    uint16_t first = cartridge_aligned_word(rom, 0), second = cartridge_aligned_word(rom, 2);
    uint16_t swap = cartridge_aligned_word(rom, 4), add = cartridge_aligned_word(rom, 6);
    unsigned data = first & 7, accumulator = second & 7, increment = add & 7;
    unsigned size = (add >> 6) & 3;
    unsigned address_reg = (first >> 9) & 7, counter = cpu->opcode & 7;
    if ((first & 0xf1f8) != 0x30c0 || (second & 0xf1f8) != 0x30c0 ||
        ((second >> 9) & 7) != address_reg || swap != (0x4840 | accumulator) ||
        (add & 0xff38) != (0xd000 | accumulator << 9) || (size != 1 && size != 2) ||
        cartridge_aligned_word(rom, 8) != swap ||
        accumulator == counter || data == counter || increment == counter ||
        accumulator == data || accumulator == increment)
        return 0;

    uint32_t address = cpu->a[address_reg] & 0xffffff;
    if (address < 0xe00000 || (address & 1))
        return 0;
    unsigned cost = size == 2 ? 42 : 38;
    unsigned iterations = budget / cost;
    unsigned left = (uint16_t)cpu->d[counter];
    unsigned room = (0x10000 - (address & 0xffff)) / 4;
    if (iterations > left)
        iterations = left;
    if (iterations > room)
        iterations = room;
    if (!iterations)
        return 0;

    uint8_t *dest = md->memory->ram + (address & 0xffff);
    uint16_t first_word = cpu->d[data];
    uint32_t mask = size == 2 ? UINT32_MAX : UINT16_MAX;
    uint32_t stride = cpu->d[increment] & mask;
    uint32_t value = cpu->d[accumulator];
    // Work in swapped order across iterations. The high half is the second
    // output word and can change when a long add carries out of the low half.
    value = (value << 16) | (value >> 16);
    bool carry = false;
    for (unsigned i = 0; i < iterations; ++i) {
        dest[0 ^ M68K_NATIVE_WORDS] = first_word >> 8;
        dest[1 ^ M68K_NATIVE_WORDS] = first_word;
        dest[2 ^ M68K_NATIVE_WORDS] = value >> 24;
        dest[3 ^ M68K_NATIVE_WORDS] = value >> 16;
        dest += 4;
        uint32_t sum = ((value & mask) + stride) & mask;
        carry = sum < stride;
        value = (value & ~mask) | sum;
    }
    cpu->d[accumulator] = (value << 16) | (value >> 16);
    // The last ADD sets X. The final SWAP supplies NZVC and preserves X.
    cpu->sr = (cpu->sr & ~CCR_X) | (carry ? CCR_X : 0);
    set_logic_flags(cpu, 4, cpu->d[accumulator]);
    cpu->a[address_reg] += iterations * 4;
    set_data(cpu, counter, 2, left - iterations);
    return iterations * cost;
}

static unsigned skip_inactive_objects(struct m68k *cpu, const struct megadrive *md,
                                      unsigned budget, uint32_t pc)
{
    unsigned length = cpu->instruction_address - cpu->pc;
    if (length != 20 && length != 16 && length != 12)
        return 0;
    if (!rom_visible(md, pc, length))
        return 0;
    const uint8_t *rom = md->rom + pc;
    bool move_byte = length != 16;
    bool displaced = length == 12;
    unsigned prefix = displaced || !move_byte ? 4 : 2;
    uint16_t first = cartridge_aligned_word(rom, 0);
    uint16_t branch = cartridge_aligned_word(rom, prefix);
    uint16_t lea = cartridge_aligned_word(rom, length - 4);
    unsigned areg = first & 7, dreg = (first >> 9) & 7, counter_reg = cpu->opcode & 7;
    if ((lea & 0xf1f8) != 0x41e8 || ((lea >> 9) & 7) != areg || (lea & 7) != areg)
        return 0;
    if (displaced) {
        if ((first & 0xf1f8) != 0x1028 || branch != 0x6600 || dreg == counter_reg)
            return 0;
    } else {
        if ((int8_t)branch + (int)prefix + 2 != (int)length - 4)
            return 0;
        if (move_byte) {
            if ((first & 0xf1f8) != 0x1010 || (branch >> 8) != 0x67 || dreg == counter_reg)
                return 0;
        } else if ((first & 0xfff8) != 0x4a28 || (branch >> 8) != 0x6a) {
            return 0;
        }
    }
    int16_t step = cartridge_aligned_word(rom, length - 2);
    int16_t offset = !move_byte || displaced ? (int16_t)cartridge_aligned_word(rom, 2) : 0;
    unsigned cost = displaced ? 42 : move_byte ? 36 : 40;
    unsigned counter = (uint16_t)cpu->d[counter_reg], iterations = budget / cost;
    if (iterations > counter)
        iterations = counter;
    unsigned done = 0;
    while (done < iterations) {
        uint32_t address = (cpu->a[areg] + offset) & 0xffffff;
        if (address < 0xe00000)
            break;
        uint8_t flags = work_ram_byte(md, address);
        if (move_byte ? flags != 0 : (flags & 0x80) != 0)
            break;
        set_logic_flags(cpu, 1, flags);
        if (move_byte)
            set_data(cpu, dreg, 1, 0);
        cpu->a[areg] += step;
        ++done;
    }
    set_data(cpu, counter_reg, 2, counter - done);
    return done * cost;
}

static bool decode_sprite_record_loop(struct m68k_sprite_record_loop *loop,
                                      const uint8_t *rom, uint32_t entry)
{
    // This loop copies eight-byte records, applying two register biases,
    // an indexed ROM byte lookup, a sequence number, and a nonzero word mask.
    // Decode its operands from the cartridge. Any other form uses the interpreter.
    uint16_t load_byte = cartridge_aligned_word(rom, 0);
    uint16_t add_first = cartridge_aligned_word(rom, 4);
    uint16_t store_word = cartridge_aligned_word(rom, 6);
    uint16_t load_index = cartridge_aligned_word(rom, 8);
    uint16_t lookup = cartridge_aligned_word(rom, 12);
    uint16_t add_sequence = cartridge_aligned_word(rom, 14);
    uint16_t add_second = cartridge_aligned_word(rom, 22);
    uint16_t add_last = cartridge_aligned_word(rom, 28);
    unsigned source = load_byte & 7, output = (store_word >> 9) & 7;
    unsigned data = (load_byte >> 9) & 7, index = (load_index >> 9) & 7;
    unsigned first_bias = add_first & 7, last_bias = add_last & 7;
    unsigned address_bias = add_second & 7, sequence = add_sequence & 7;
    uint16_t dbra = cartridge_aligned_word(rom, 40);
    unsigned counter = dbra & 7;

    if (source == 7 || output == 7 || source == output ||
        address_bias == source || address_bias == output ||
        data == index || data == sequence || index == sequence ||
        counter == data || counter == index || counter == sequence ||
        first_bias == data || first_bias == index || first_bias == sequence || first_bias == counter ||
        last_bias == data || last_bias == index || last_bias == sequence || last_bias == counter)
        return false;

    uint16_t load_word = 0x3018 | (data << 9) | source;
    if ((load_byte & 0xf1f8) != 0x1018 ||
        cartridge_aligned_word(rom, 2) != (0x4880 | data) ||
        add_first != (0xd040 | (data << 9) | first_bias) ||
        store_word != (0x30c0 | (output << 9) | data) ||
        load_index != (0x1018 | (index << 9) | source) ||
        cartridge_aligned_word(rom, 10) != (0x10fb | (output << 9)) ||
        (lookup & 0xff00) != index << 12 ||
        add_sequence != (0x5200 | sequence) ||
        cartridge_aligned_word(rom, 16) != (0x10c0 | (output << 9) | sequence) ||
        cartridge_aligned_word(rom, 18) != (0x5448 | source) ||
        cartridge_aligned_word(rom, 20) != load_word ||
        add_second != (0xd048 | (data << 9) | address_bias) ||
        cartridge_aligned_word(rom, 24) != store_word ||
        cartridge_aligned_word(rom, 26) != load_word ||
        add_last != (0xd040 | (data << 9) | last_bias) ||
        cartridge_aligned_word(rom, 30) != (0x0240 | data) ||
        cartridge_aligned_word(rom, 34) != 0x6602 ||
        cartridge_aligned_word(rom, 36) != (0x5240 | data) ||
        cartridge_aligned_word(rom, 38) != store_word ||
        (dbra & 0xfff8) != 0x51c8 || cartridge_aligned_word(rom, 42) != 0xffd6)
        return false;

    *loop = (struct m68k_sprite_record_loop){
        .start = entry + 1,
        .lookup_base = (entry & 0xffffff) + 12 + (int8_t)lookup,
        .mask = cartridge_aligned_word(rom, 32),
        .source = source, .output = output, .data = data, .index = index,
        .first_bias = first_bias, .last_bias = last_bias, .address_bias = address_bias,
        .sequence = sequence, .counter = counter,
    };
    return true;
}

static __attribute__((noinline)) unsigned skip_sprite_record_loop(
    struct m68k *cpu, struct megadrive *md, unsigned budget, uint32_t entry, bool complete)
{
    enum { RECORD_BYTES = 8, TAKEN_CYCLES = 138, ZERO_CYCLES = 140 };
    unsigned pc = entry & 0xffffff;
    struct m68k_sprite_record_loop *loop = &md->sprite_record_loop;
    if (!rom_visible(md, pc, 44) ||
        (loop->start != entry + 1 && !decode_sprite_record_loop(loop, md->rom + pc, entry)))
        return 0;

    unsigned source = loop->source, output = loop->output, counter = loop->counter;
    unsigned data = loop->data, index = loop->index, sequence = loop->sequence;

    uint32_t src = cpu->a[source] & 0xffffff, dst = cpu->a[output] & 0xffffff;
    bool source_in_ram = src >= 0xe00000;
    if ((src | dst) & 1 || dst < 0xe00000 ||
        (!source_in_ram && !rom_visible(md, src, RECORD_BYTES)))
        return 0;
    unsigned remaining = (uint16_t)cpu->d[counter];
    unsigned limit = budget / TAKEN_CYCLES;
    unsigned src_room = (source_in_ram ? 0x10000 - (src & 0xffff) : md->rom_size - src)
                        / RECORD_BYTES;
    unsigned dst_room = (0x10000 - (dst & 0xffff)) / RECORD_BYTES;
    if (limit > remaining + complete)
        limit = remaining + complete;
    if (limit > src_room)
        limit = src_room;
    if (limit > dst_room)
        limit = dst_room;
    if (!limit)
        return 0;
    unsigned bytes = limit * RECORD_BYTES;
    if (source_in_ram) {
        unsigned from = src & 0xffff, to = dst & 0xffff;
        if (from < to + bytes && to < from + bytes)
            return 0;
    } else if (!rom_visible(md, src, bytes)) {
        return 0;
    }

    const uint8_t *input = source_in_ram ? md->memory->ram + (src & 0xffff) : md->rom + src;
    uint16_t mask = loop->mask;
    uint16_t index_base = cpu->d[index] & 0xff00;
    uint32_t lookup_base = (loop->lookup_base + (int16_t)index_base) & 0xffffff;
    bool lookup_in_rom = rom_visible(md, lookup_base, 256);
    uint8_t *destination = md->memory->ram + (dst & 0xffff);
    bool aligned_words = (dst & 3) == 0;
    unsigned used = 0, done = 0;
    uint8_t index_byte = 0, sequence_byte = cpu->d[sequence];
    uint16_t result = 0;
    uint16_t bias1 = cpu->d[loop->first_bias], bias2 = cpu->a[loop->address_bias], bias3 = cpu->d[loop->last_bias];
    bool extend = false;

    while (done < limit && budget - used >= TAKEN_CYCLES) {
        uint8_t next_index = cartridge_byte(input, 1);
        unsigned lookup_address = (lookup_base + next_index) & 0xffffff;
        if (!lookup_in_rom && !rom_visible(md, lookup_address, 1))
            break;
        uint16_t sum = cartridge_aligned_word(input, 6) + bias3;
        uint16_t last = sum & mask;
        unsigned cost = (last ? TAKEN_CYCLES : ZERO_CYCLES) + (done == remaining ? 4 : 0);
        if (budget - used < cost)
            break;

        uint16_t first_word = (int8_t)cartridge_byte(input, 0) + bias1;
        uint16_t second_word = (uint16_t)cartridge_byte(md->rom, lookup_address) << 8;
        second_word |= ++sequence_byte;
        uint16_t third_word = cartridge_aligned_word(input, 4) + bias2;
        result = last ? last : 1;
        if (M68K_NATIVE_WORDS && aligned_words) {
            uint32_t first_pair = first_word | (uint32_t)second_word << 16;
            uint32_t second_pair = third_word | (uint32_t)result << 16;
            __builtin_memcpy(__builtin_assume_aligned(destination, 4), &first_pair, sizeof(first_pair));
            __builtin_memcpy(__builtin_assume_aligned(destination + 4, 4), &second_pair, sizeof(second_pair));
        } else {
            work_ram_store_word(md, dst, first_word);
            work_ram_store_word(md, dst + 2, second_word);
            work_ram_store_word(md, dst + 4, third_word);
            work_ram_store_word(md, dst + 6, result);
        }
        extend = last && sum < bias3; // ADDQ clears X when the masked sum was zero.
        index_byte = next_index;
        input += RECORD_BYTES;
        destination += RECORD_BYTES;
        dst += RECORD_BYTES;
        used += cost;
        ++done;
    }
    if (done) {
        set_data(cpu, data, 2, result);
        set_data(cpu, index, 1, index_byte);
        set_data(cpu, sequence, 1, sequence_byte);
        set_data(cpu, counter, 2, remaining - done);
        cpu->sr = (cpu->sr & ~CCR_X) | (extend ? CCR_X : 0);
        set_logic_flags(cpu, 2, result);
        cpu->a[source] += done * RECORD_BYTES;
        cpu->a[output] += done * RECORD_BYTES;
        if (complete)
            cpu->pc = entry + (done > remaining ? 44 : 0);
    }
    return used;
}

ARM9_ITCM unsigned m68k_skip_idle(struct m68k *cpu, struct megadrive *md, unsigned budget)
{
    uint16_t op = cpu->opcode;
    uint32_t pc = cpu->pc & 0xffffff;
    if ((op & 0xfff8) == 0x51c8) {
        unsigned loop_cycles = 10;
        if (cpu->pc != cpu->instruction_address) {
            if (cpu->pc + 8 == cpu->instruction_address && rom_visible(md, pc, 8))
                return skip_signed_byte_copy(cpu, md, budget, md->rom + pc);
            if (cpu->pc + 10 == cpu->instruction_address && rom_visible(md, pc, 10))
                return skip_interleaved_word_stores(cpu, md, budget, md->rom + pc);
            if (cpu->pc + 40 == cpu->instruction_address)
                return skip_sprite_record_loop(cpu, md, budget, cpu->pc, false);
            if (cpu->pc + 2 != cpu->instruction_address)
                return skip_inactive_objects(cpu, md, budget, pc);
            if (!rom_visible(md, pc, 2))
                return 0;
            uint16_t first = cartridge_aligned_word(md->rom, pc);
            if (first != 0x4e71)
                return skip_ram_store_loop(cpu, md, budget, first);
            loop_cycles += 4; // NOP immediately before the DBRA.
        }
        unsigned reg = op & 7, counter = (uint16_t)cpu->d[reg];
        unsigned iterations = budget / loop_cycles;
        if (iterations > counter)
            iterations = counter;
        set_data(cpu, reg, 2, counter - iterations);
        return iterations * loop_cycles;
    }
    unsigned displacement = (uint8_t)op;
    if ((op >> 8 != 0x66 && op >> 8 != 0x67) ||
        (displacement != 0xfa && displacement != 0xf8))
        return 0;
    bool full_address = displacement == 0xf8;
    unsigned length = full_address ? 6 : 4;
    if (cpu->pc + length != cpu->instruction_address || !rom_visible(md, pc, length))
        return 0;
    uint16_t test = cartridge_aligned_word(md->rom, pc);
    uint16_t byte_test = full_address ? 0x4a39 : 0x4a38;
    if (test != byte_test && test != (byte_test | 0x40))
        return 0;

    // Only work-RAM polling can skip instructions. The Z80 cannot observe
    // these reads or write to the address between 68000 instructions.
    uint32_t address = cartridge_aligned_word(md->rom, pc + 2);
    if (full_address)
        address = address << 16 | cartridge_aligned_word(md->rom, pc + 4);
    else
        address = (int16_t)address;
    address &= 0xffffff;
    bool word = (test & 0x40) != 0;
    if (address < 0xe00000 || (word && (address & 1)))
        return 0;
    uint16_t offset = address;
    uint8_t value = work_ram_byte(md, offset);
    if (word && work_ram_byte(md, offset + 1))
        value |= 1;
    unsigned flags = value == 0 ? CCR_Z : (value & 0x80) ? CCR_N : 0;
    if ((cpu->sr & 15) != flags || (value == 0) != (op >> 8 == 0x67))
        return 0;
    unsigned loop_cycles = full_address ? 26 : 22;
    return budget / loop_cycles * loop_cycles;
}

void m68k_reset(struct m68k *cpu, struct megadrive *md)
{
    *cpu = (struct m68k){0};
    cpu->sr = RESET_STATUS;
    cpu->a[7] = read_memory(md, 0, 4);
    cpu->pc = read_memory(md, 4, 4);
}

static inline uint16_t fetch_opcode(struct m68k *cpu, struct megadrive *md,
                                    const uint8_t *rom, unsigned rom_limit)
{
    // The general fetch handles aliases and addresses outside the ROM prefix.
    uint32_t address = cpu->pc;
    if (__builtin_expect(address < rom_limit, 1)) {
        cpu->pc += 2;
        return cartridge_aligned_word(rom, address);
    }
    return fetch(cpu, md, 2);
}

struct opcode_shortcut {
    uint16_t mask, value;
    const void *handler;
};

static __attribute__((noinline)) void initialize_opcode_table(
    const void **table, const void *const *families,
    const struct opcode_shortcut *shortcuts, unsigned shortcut_count)
{
    for (unsigned opcode = 0; opcode <= UINT16_MAX; ++opcode) {
        unsigned family = opcode >> 12;
        const void *handler = families[family];
        if ((family != 2 && family <= 6) || family == 9 || family == 13) {
            for (unsigned i = 0; i < shortcut_count; ++i) {
                if ((opcode & shortcuts[i].mask) == shortcuts[i].value) {
                    handler = shortcuts[i].handler;
                    break;
                }
            }
        }
        table[opcode] = handler;
    }
}

// Synchronize sooner when a bus access or interrupt needs the sound CPU.
enum { Z80_SYNC_CYCLES = 32768 };

static unsigned advance_ram_poll(struct megadrive *md, struct m68k *cpu,
                                 unsigned cycles, unsigned end, unsigned *next_sync)
{
    unsigned skipped = m68k_skip_idle(cpu, md, end - cycles);
    if (!skipped)
        return cycles;
    unsigned stop = cycles + skipped;
    // Keep Z80 checkpoints at the original instruction boundaries.
    enum { TEST_CYCLES = 16, BRANCH_CYCLES = 10, LOOP_CYCLES = TEST_CYCLES + BRANCH_CYCLES };
    while (*next_sync <= stop) {
        unsigned iteration = (*next_sync - cycles - 1) / LOOP_CYCLES;
        unsigned test_start = cycles + iteration * LOOP_CYCLES;
        unsigned test_end = test_start + TEST_CYCLES;
        bool after_test = *next_sync <= test_end;
        md->frame_cycle = after_test ? test_start : test_end;
        genesis_z80_sync(md, after_test ? test_end : test_start + LOOP_CYCLES);
        *next_sync = md->z80_synced_cycle + Z80_SYNC_CYCLES;
    }
    md->frame_cycle = stop - BRANCH_CYCLES;
    return stop;
}

// Use the fetched word to select a handler, as the r20 reference does.
// Keep scheduling and single-step execution at the same instruction boundary.
static ARM9_ITCM unsigned execute_until(struct megadrive *md, unsigned cycles,
                                        unsigned end, struct m68k *step_cpu)
{
    static const void *const families[] = {
        &&op_immediate, &&op_move_byte, &&op_move_long, &&op_move_word,
        &&op_miscellaneous, &&op_quick, &&op_branch, &&op_move_quick,
        &&op_or_divide, &&op_add_subtract, &&op_invalid_a, &&op_compare,
        &&op_and_multiply, &&op_add_subtract, &&op_shift, &&op_invalid_f,
    };
    static const struct opcode_shortcut shortcuts[] = {
        {0xfff8, 0x0240, &&op_andi_word},
        {0xfff8, 0x0800, &&op_btst_immediate},
        {0xfff8, 0x0640, &&op_addi_word},
        {0xfff8, 0x0c40, &&op_cmpi_word},
        {0xffff, 0x4e75, &&op_rts},
        {0xf1ff, 0x41f8, &&op_lea_word},
        {0xffff, 0x4eb9, &&op_jsr_long},
        {0xffbf, 0x4a38, &&op_tst_absolute},
        {0xf1f8, 0x30c0, &&op_store_word_postincrement},
        {0xf1f8, 0x3018, &&op_load_word_postincrement},
        {0xf1f8, 0x1028, &&op_load_byte_displacement},
        {0xfff8, 0x51c8, &&op_dbra},
        {0xfefd, 0x66f8, &&op_poll_branch},
        {0xb1f8, 0x9000, &&op_byte_register_arithmetic},
        {0xb1f0, 0x9040, &&op_word_register_arithmetic},
        {0xb1f0, 0x9080, &&op_long_register_arithmetic},
        {0xb1f0, 0x90c0, &&op_address_word_arithmetic},
    };
    // The ARM9 interpreter initializes this 256 KiB table on first use.
    static const void *opcode_table[UINT16_MAX + 1];
    if (!opcode_table[0])
        initialize_opcode_table(opcode_table, families, shortcuts,
                                sizeof(shortcuts) / sizeof(shortcuts[0]));

    bool single_step = step_cpu != NULL;
    struct m68k *cpu = single_step ? step_cpu : &md->cpu;

    // This prefix of the ROM stays visible if the guest toggles SRAM mid-slice.
    const uint8_t *rom = md->rom;
    unsigned rom_limit = md->rom_size;
    if (md->sram_size && md->sram_start < rom_limit)
        rom_limit = md->sram_start;
    rom_limit &= ~1U;

    unsigned next_sync = md->z80_synced_cycle + Z80_SYNC_CYCLES;
    bool hint_pending = md->hint_pending;
    md->m68k_slice_end = 0;
    bool long_poll = false;
    uint16_t op;
    uint32_t instruction;

    if (single_step)
        goto run_slice;
    while (cycles < end && !cpu->stopped) {
        if (hint_pending && (md->vdp_registers[0] & 0x10) && (cpu->sr & 0x0700) < 0x0400) {
            unsigned elapsed = m68k_interrupt(cpu, md, 4);
            if (elapsed) {
                hint_pending = md->hint_pending = false;
                cycles += elapsed;
                continue;
            }
            if (cpu->stopped)
                break;
        }
        md->m68k_slice_end = next_sync < end ? next_sync : end;
        long_poll = false;
run_slice:
        op = cpu->opcode;
        do {
            md->frame_cycle = cycles;
            instruction = cpu->pc;
            if (__builtin_expect(instruction & 1, 0)) {
                cpu->stopped = true;
                break;
            }
            op = fetch_opcode(cpu, md, rom, rom_limit);
            unsigned elapsed;
#define FINISH_INSTRUCTION(timing) do { elapsed = (timing); goto completed; } while (0)
            goto *opcode_table[op];
op_immediate:
            FINISH_INSTRUCTION(execute_immediate(cpu, md, op));
op_move_byte:
            if (instruction + 1 == md->sprite_record_loop.start && cycles < md->m68k_slice_end) {
                unsigned taken = skip_sprite_record_loop(cpu, md, md->m68k_slice_end - cycles,
                                                         instruction, true);
                if (taken) {
                    bool finished = cpu->pc != instruction;
                    instruction += 40;
                    op = cartridge_aligned_word(rom, (instruction & 0xffffff));
                    md->frame_cycle = cycles + taken - (finished ? 14 : 10);
                    FINISH_INSTRUCTION(taken);
                }
            }
            FINISH_INSTRUCTION(move_common(cpu, md, op, 1));
op_move_long:
            FINISH_INSTRUCTION(move_common(cpu, md, op, 4));
op_move_word:
            FINISH_INSTRUCTION(move_common(cpu, md, op, 2));
op_store_word_postincrement: { // MOVE.W Dn,(An)+
                unsigned reg = (op >> 9) & 7;
                uint32_t address = cpu->a[reg];
                uint32_t value = cpu->d[op & 7];
                cpu->a[reg] += 2;
                if (!write_memory_fast(md, address, 2, value))
                    FINISH_INSTRUCTION(0);
                set_logic_flags(cpu, 2, value);
                FINISH_INSTRUCTION(8);
            }
op_load_word_postincrement: { // MOVE.W (An)+,Dn
                unsigned reg = op & 7;
                uint32_t address = cpu->a[reg];
                cpu->a[reg] += 2;
                if (address & 1)
                    FINISH_INSTRUCTION(0);
                uint32_t value = read_memory_fast(md, address, 2);
                set_data(cpu, (op >> 9) & 7, 2, value);
                set_logic_flags(cpu, 2, value);
                FINISH_INSTRUCTION(8);
            }
op_load_byte_displacement: { // MOVE.B (d16,An),Dn
                int16_t displacement = fetch(cpu, md, 2);
                uint32_t address = cpu->a[op & 7] + displacement;
                uint32_t value = read_memory_fast(md, address, 1);
                set_data(cpu, (op >> 9) & 7, 1, value);
                set_logic_flags(cpu, 1, value);
                FINISH_INSTRUCTION(12);
            }
op_miscellaneous:
            FINISH_INSTRUCTION(execute_misc(cpu, md, op));
op_quick: {
            if ((op & 0x00f8) == 0x00c8) {
                uint32_t base = cpu->pc;
                int16_t displacement = fetch(cpu, md, 2);
                if (condition_true(cpu->sr, (op >> 8) & 15))
                    FINISH_INSTRUCTION(12);
                unsigned reg = op & 7;
                uint16_t count = cpu->d[reg] - 1;
                set_data(cpu, reg, 2, count);
                if (count == 0xffff)
                    FINISH_INSTRUCTION(14);
                cpu->pc = base + displacement;
                FINISH_INSTRUCTION(10);
            }
            if ((op & 0xc0) != 0xc0)
                FINISH_INSTRUCTION(quick_arithmetic(cpu, md, op));
            unsigned mode = (op >> 3) & 7, reg = op & 7;
            uint8_t value = condition_true(cpu->sr, (op >> 8) & 15) ? 0xff : 0;
            if (mode == 0) {
                set_data(cpu, reg, 1, value);
                FINISH_INSTRUCTION(value ? 6 : 4);
            }
            uint32_t address;
            if ((mode == 7 && reg > 1) || !address_operand(cpu, md, mode, reg, 1, &address) ||
                !write_memory(md, address, 1, value))
                FINISH_INSTRUCTION(0);
            FINISH_INSTRUCTION(8 + memory_cycles(mode, reg, 1));
        }
op_dbra: {
                uint32_t base = cpu->pc;
                int16_t displacement = fetch(cpu, md, 2);
                unsigned reg = op & 7;
                uint16_t count = cpu->d[reg] - 1;
                set_data(cpu, reg, 2, count);
                if (count == 0xffff)
                    FINISH_INSTRUCTION(14);
                cpu->pc = base + displacement;
                goto skip_idle_loop;
            }
op_poll_branch: // BNE/BEQ with displacement -6 or -8.
            if ((cpu->sr & CCR_Z) != ((op >> 6) & CCR_Z))
                FINISH_INSTRUCTION(8);
            cpu->pc += (int8_t)op;
            if (op & 2)
                goto skip_idle_loop;
            cycles += 10;
            long_poll = true;
            break;
op_branch:
            FINISH_INSTRUCTION(execute_branch(cpu, md, op));
op_move_quick:
            if (!(op & 0x100)) {
                unsigned reg = (op >> 9) & 7;
                cpu->d[reg] = (int8_t)op;
                set_logic_flags(cpu, 4, cpu->d[reg]);
                FINISH_INSTRUCTION(4);
            }
            FINISH_INSTRUCTION(0);
op_or_divide:
            if ((op & 0xc0) == 0xc0)
                FINISH_INSTRUCTION(multiply_or_divide(cpu, md, op));
            FINISH_INSTRUCTION(data_alu(cpu, md, op));
op_and_multiply:
            if ((op & 0xf1f8) == 0xc140 || (op & 0xf1f8) == 0xc148 ||
                (op & 0xf1f8) == 0xc188) {
                unsigned source = (op >> 9) & 7, target = op & 7;
                uint32_t *left = ((op & 0xf1f8) == 0xc148 ? cpu->a : cpu->d) + source;
                uint32_t *right = ((op & 0xf1f8) == 0xc140 ? cpu->d : cpu->a) + target;
                uint32_t value = *left;
                *left = *right;
                *right = value;
                FINISH_INSTRUCTION(6);
            }
            if ((op & 0xc0) == 0xc0)
                FINISH_INSTRUCTION(multiply_or_divide(cpu, md, op));
            FINISH_INSTRUCTION(data_alu(cpu, md, op));
op_compare:
            if ((op & 0xf138) == 0xb108 && (op & 0xc0) != 0xc0)
                FINISH_INSTRUCTION(compare_memory(cpu, md, op));
            if ((op & 0x100) && (op & 0xc0) != 0xc0)
                FINISH_INSTRUCTION(exclusive_or(cpu, md, op));
            FINISH_INSTRUCTION(data_alu(cpu, md, op));
op_byte_register_arithmetic:
            FINISH_INSTRUCTION(register_arithmetic(cpu, op, 1, !(op & 0x4000)));
op_word_register_arithmetic:
            FINISH_INSTRUCTION(register_arithmetic(cpu, op, 2, !(op & 0x4000)));
op_long_register_arithmetic:
            FINISH_INSTRUCTION(register_arithmetic(cpu, op, 4, !(op & 0x4000)));
op_address_word_arithmetic: {
                unsigned dest = (op >> 9) & 7;
                const uint32_t *source = (op & 8) ? cpu->a : cpu->d;
                int16_t operand = source[op & 7];
                cpu->a[dest] += (op & 0x4000) ? operand : -operand;
                FINISH_INSTRUCTION(8);
            }
op_add_subtract:
            if ((op & 0x130) == 0x100 && (op & 0xc0) != 0xc0)
                FINISH_INSTRUCTION(extend_arithmetic(cpu, md, op));
            FINISH_INSTRUCTION(data_alu(cpu, md, op));
op_shift:
            FINISH_INSTRUCTION((op & 0xc0) != 0xc0 ? shift_register(cpu, op) : shift_memory(cpu, md, op));
op_invalid_a:
op_invalid_f:
            FINISH_INSTRUCTION(0);
op_andi_word: { // ANDI.W #value,Dn
                unsigned reg = op & 7;
                uint32_t value = cpu->d[reg] & fetch(cpu, md, 2);
                set_data(cpu, reg, 2, value);
                set_logic_flags(cpu, 2, value);
                FINISH_INSTRUCTION(8);
            }
op_btst_immediate: { // BTST #bit,Dn
                unsigned bit = fetch(cpu, md, 2) & 31;
                bool set = (cpu->d[op & 7] >> bit) & 1;
                cpu->sr = (cpu->sr & ~CCR_Z) | (set ? 0 : CCR_Z);
                FINISH_INSTRUCTION(10);
            }
op_addi_word: { // ADDI.W #value,Dn
                unsigned reg = op & 7;
                uint32_t operand = fetch(cpu, md, 2);
                set_data(cpu, reg, 2, arithmetic_flags(cpu, 2, cpu->d[reg], operand, false, false));
                FINISH_INSTRUCTION(8);
            }
op_cmpi_word: { // CMPI.W #value,Dn
                uint32_t operand = fetch(cpu, md, 2);
                arithmetic_flags(cpu, 2, cpu->d[op & 7], operand, true, true);
                FINISH_INSTRUCTION(8);
            }
op_rts: { // RTS
                if (cpu->a[7] & 1)
                    FINISH_INSTRUCTION(0);
                cpu->pc = read_memory_fast(md, cpu->a[7], 4);
                cpu->a[7] += 4;
                FINISH_INSTRUCTION(16);
            }
op_lea_word: { // LEA with an absolute word address
                cpu->a[(op >> 9) & 7] = (int16_t)fetch(cpu, md, 2);
                FINISH_INSTRUCTION(8);
            }
op_jsr_long: { // JSR with an absolute long address
                uint32_t address = fetch(cpu, md, 4);
                FINISH_INSTRUCTION(call_subroutine(cpu, md, address) ? 20 : 0);
            }
op_tst_absolute: { // TST.B/W with an absolute word address
                uint32_t address = (int16_t)fetch(cpu, md, 2);
                if (op & 0x40) {
                    if (address & 1)
                        FINISH_INSTRUCTION(0);
                    set_logic_flags(cpu, 2, read_memory_fast(md, address, 2));
                } else {
                    set_logic_flags(cpu, 1, read_memory_fast(md, address, 1));
                }
                FINISH_INSTRUCTION(12);
            }
#undef FINISH_INSTRUCTION
skip_idle_loop:
            elapsed = 10;
            if (cpu->pc <= instruction && cycles + elapsed < end) {
                cpu->instruction_address = instruction;
                cpu->opcode = op;
                elapsed += m68k_skip_idle(cpu, md, end - cycles - elapsed);
            }
completed:
            if (__builtin_expect(!elapsed, 0)) {
                cpu->stopped = true;
                break;
            }
            cycles += elapsed;
        } while (cycles < md->m68k_slice_end);
        cpu->instruction_address = instruction;
        cpu->opcode = op;
        if (single_step)
            return cycles;
        if (cycles >= next_sync) {
            // I/O can have synchronized the sound CPU inside an instruction.
            if (cycles - md->z80_synced_cycle >= Z80_SYNC_CYCLES)
                genesis_z80_sync(md, cycles);
            next_sync = md->z80_synced_cycle + Z80_SYNC_CYCLES;
        }
        if (long_poll && cycles < end)
            cycles = advance_ram_poll(md, cpu, cycles, end, &next_sync);
    }
    genesis_z80_sync(md, cycles < end ? end : cycles);
    return cycles;
}

unsigned m68k_run_until(struct megadrive *md, unsigned cycles, unsigned end)
{
    return execute_until(md, cycles, end, NULL);
}

unsigned m68k_step(struct m68k *cpu, struct megadrive *md)
{
    unsigned start = md->frame_cycle;
    return execute_until(md, start, 0, cpu) - start;
}
