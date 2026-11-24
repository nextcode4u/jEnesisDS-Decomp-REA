#include "z80_bus.h"
#include "megadrive.h"
#include "profile.h"

enum { M68K_DIVIDER = 7, Z80_DIVIDER = 15, Z80_IRQ_DURATION = 32 };

static uint8_t read_byte(void *context, uint16_t address)
{
    struct megadrive *md = context;
    if (address < 0x4000)
        return md->memory->z80_ram[address & 0x1fff];
    if (address < 0x6000)
        return megadrive_ym_status(md);
    if (address >= 0x8000) {
        // jEnesisDS masks the shifted cartridge bank to the 4 MiB ROM window.
        uint32_t mapped = ((uint32_t)md->z80_bank << 15 | (address & 0x7fff)) & 0x3fffff;
        return mapped < md->rom_size ? cartridge_byte(md->rom, mapped) : 0xff;
    }
    return (address & 0xff00) == 0x7f00 ? 0 : 0xff;
}

static void write_byte(void *context, uint16_t address, uint8_t data)
{
    struct megadrive *md = context;
    if (address < 0x4000)
        md->memory->z80_ram[address & 0x1fff] = data;
    else if (address < 0x6000) {
        unsigned port = address & 3;
        if (!(port & 1)) {
            md->ym_address[port >> 1] = data;
            return;
        }
        // The Z80 clock grid continues across scheduler slices. Keep the
        // write time on that grid even if execution crosses the slice end.
        int clocks = md->z80_slice_master +
                     (int)((md->sound_cpu.cyc - md->z80_slice_clocks) * Z80_DIVIDER);
        unsigned cycle = clocks > 0 ? (unsigned)clocks / M68K_DIVIDER : 0;
        megadrive_ym_write_at(md, port, data, cycle);
    }
    else if (address < 0x6100)
        md->z80_bank = md->z80_bank >> 1 | (data & 1) << 8;
    else if ((address & 0xfff9) == 0x7f11)
        megadrive_psg_write(md, data);
}

static uint8_t port_read(z80 *cpu, uint8_t port)
{
    (void)cpu;
    (void)port;
    return 0xff;
}

static void port_write(z80 *cpu, uint8_t port, uint8_t data)
{
    (void)cpu;
    (void)port;
    (void)data;
}

void genesis_z80_bind(struct megadrive *md)
{
    md->sound_cpu.read_byte = read_byte;
    md->sound_cpu.write_byte = write_byte;
    md->sound_cpu.port_in = port_read;
    md->sound_cpu.port_out = port_write;
    md->sound_cpu.userdata = md;
    md->sound_cpu.mirrored_ram = md->memory->z80_ram;
    md->sound_cpu.ram_limit = 0x4000;
    md->sound_cpu.ram_mask = Z80_RAM_SIZE - 1;
}

void genesis_z80_reset(struct megadrive *md)
{
    z80_init(&md->sound_cpu);
    genesis_z80_bind(md);
    md->z80_bank = 0;
    md->z80_clock_phase = 0;
    md->z80_instruction_debt = 0;
    md->z80_irq_clocks = 0;
}

static void advance_refresh(z80 *cpu, unsigned instructions)
{
    cpu->r = (cpu->r & 0x80) | ((cpu->r + instructions) & 0x7f);
}

static void finish_poll(z80 *cpu, unsigned value, unsigned iterations)
{
    cpu->a = value;
    cpu->hf = cpu->nf = cpu->cf = 0;
    cpu->sf = (value >> 7) & 1;
    cpu->zf = value == 0;
    cpu->yf = (value >> 5) & 1;
    cpu->xf = (value >> 3) & 1;
    cpu->pf = !__builtin_parity(value);
    advance_refresh(cpu, iterations * 3);
}

static __attribute__((noinline)) unsigned run_four_rotates(
    struct megadrive *md, unsigned budget, const uint8_t *ram, unsigned offset)
{
    z80 *cpu = &md->sound_cpu;
    // At most 32 busy cycles expire either way. A longer busy period needs
    // the interpreter's separate clock conversion after each instruction.
    if (budget >= 16 && offset <= 0x1ffc &&
        !cpu->int_pending && !cpu->nmi_pending && !cpu->iff_delay &&
        md->ym_busy_cycles <= 32 && ram[offset + 1] == 0x07 &&
        ram[offset + 2] == 0x07 && ram[offset + 3] == 0x07) {
        // Four consecutive RLCA instructions swap the accumulator nibbles.
        unsigned a = cpu->a;
        unsigned result = ((a << 4) | (a >> 4)) & 0xff;
        cpu->a = result;
        cpu->cf = (a >> 4) & 1;
        cpu->hf = cpu->nf = 0;
        cpu->xf = (result >> 3) & 1;
        cpu->yf = (result >> 5) & 1;
        cpu->pc += 4;
        advance_refresh(cpu, 4);
        return 16;
    }
    return 0;
}

static __attribute__((noinline)) unsigned run_indexed_dac_write(
    struct megadrive *md, unsigned budget, const uint8_t *ram, unsigned offset)
{
    // EX AF,AF'; ADD A,(IX/IY+d); LD (nn),A; EX AF,AF'.
    enum { STORE_CYCLE = 36, SEQUENCE_CYCLES = 40 };
    z80 *cpu = &md->sound_cpu;
    if (budget <= STORE_CYCLE || offset > 0x1ff8 ||
        cpu->int_pending || cpu->nmi_pending || cpu->iff_delay ||
        md->ym_busy_cycles || (md->ym_registers[0][0x27] & 3) ||
        md->ym_address[0] != 0x2a)
        return 0;
    const uint8_t *code = ram + offset;
    if ((code[1] & 0xdf) != 0xdd || code[2] != 0x86 ||
        code[4] != 0x32 || code[7] != 0x08)
        return 0;

    unsigned port = code[5] | code[6] << 8;
    if ((port & 0xe003) != 0x4001)
        return 0;
    uint16_t operand = ((code[1] & 0x20) ? cpu->iy : cpu->ix) + (int8_t)code[3];
    if (operand >= 0x4000)
        return 0;

    uint8_t sample = z80_add_alternate(cpu, ram[operand & 0x1fff]);
    cpu->mem_ptr = (sample << 8) | ((port + 1) & 0xff);
    cpu->pc += 8;
    unsigned cycles = SEQUENCE_CYCLES;
    unsigned refreshes = 5;
    if (budget > SEQUENCE_CYCLES + 4 && offset <= 0x1ff6 &&
        code[8] == 0x41 && code[9] == 0xfb) {
        // LD B,C; EI.
        cpu->b = cpu->c;
        cpu->iff1 = cpu->iff2 = 1;
        cpu->pc += 2;
        refreshes += 2;
        cycles += 8;
    } else if (budget > SEQUENCE_CYCLES + 4 && offset <= 0x1ff4 &&
               code[8] == 0xfb && code[9] == 0xc3) {
        // EI; JP nn. This slice has no pending interrupt to acknowledge.
        cpu->iff1 = cpu->iff2 = 1;
        cpu->pc = cpu->mem_ptr = code[10] | code[11] << 8;
        refreshes += 2;
        cycles += 14;
    }
    advance_refresh(cpu, refreshes);

    int master = md->z80_slice_master +
        (int)((cpu->cyc - md->z80_slice_clocks + STORE_CYCLE) * Z80_DIVIDER);
    unsigned cycle = master > 0 ? (unsigned)master / M68K_DIVIDER : 0;
    dac_write_sample(md, sample, cycle);
    // The store and final exchange consume enough cycles to clear any DAC busy time.
    return cycles;
}

static __attribute__((noinline)) unsigned run_ym_status_poll(
    struct megadrive *md, unsigned budget, const uint8_t *ram, unsigned offset)
{
    // LD A,(IX/IY+d); RRCA; JP NC back to the load.
    enum { POLL_CYCLES = 33, BRANCH_START = 23 };
    z80 *cpu = &md->sound_cpu;
    if (budget <= BRANCH_START || offset > 0x1ff9 ||
        cpu->int_pending || cpu->nmi_pending || cpu->iff_delay)
        return 0;
    const uint8_t *code = ram + offset;
    if (code[1] != 0x7e || code[3] != 0x0f || code[4] != 0xd2 ||
        (code[5] | code[6] << 8) != cpu->pc)
        return 0;
    uint16_t address = ((code[0] & 0x20) ? cpu->iy : cpu->ix) + (int8_t)code[2];
    if (address < 0x4000 || address >= 0x6000)
        return 0;

    // The load sees the state before this iteration. Even with BUSY set,
    // the load alone consumes enough clocks to clear it before the branch.
    unsigned status = megadrive_ym_status(md);
    cpu->a = (status >> 1) | ((status & 1) << 7);
    cpu->cf = status & 1;
    cpu->nf = cpu->hf = 0;
    cpu->xf = (cpu->a >> 3) & 1;
    cpu->yf = (cpu->a >> 5) & 1;
    cpu->mem_ptr = cpu->pc;
    if (cpu->cf)
        cpu->pc += 7;
    advance_refresh(cpu, 4);
    return POLL_CYCLES;
}

enum { Z80_TIMERS_ADVANCED = 1u << 30 };

static inline unsigned slice_write_cycle(const struct megadrive *md, unsigned clocks)
{
    int master = md->z80_slice_master +
        (int)((md->sound_cpu.cyc - md->z80_slice_clocks + clocks) * Z80_DIVIDER);
    return master > 0 ? (unsigned)master / M68K_DIVIDER : 0;
}

static inline void set_increment_flags(z80 *cpu, uint8_t previous, uint8_t value)
{
    cpu->sf = value >> 7;
    cpu->zf = value == 0;
    cpu->yf = (value >> 5) & 1;
    cpu->hf = (value & 15) == 0;
    cpu->xf = (value >> 3) & 1;
    cpu->pf = previous == 0x7f;
    cpu->nf = 0;
}

static __attribute__((noinline)) unsigned run_ym_sample(struct megadrive *md,
                                      unsigned budget, const uint8_t *code, unsigned preceding)
{
    // Two indexed timer writes, a ROM byte + terminator check, two DAC
    // writes, and a pointer increment and branch. Check the operands before
    // touching either CPU or YM state. The normal decoder handles each edge.
    enum { INDEXED_WRITE = 19, MODE_WRITE = 38, END_TEST = 49,
           EMPTY_END = 61, DAC_WRITE = 94, LOOP_BRANCH = 98 };
    z80 *cpu = &md->sound_cpu;
    if (md->ym_busy_cycles || cpu->nmi_pending || cpu->int_pending || cpu->iff_delay ||
        budget <= END_TEST || code[3] != 0x27 || code[4] != code[0] ||
        code[5] != 0x36 || code[8] != 0x1a || code[9] != 0x3c || code[10] != 0x28)
        return 0;
    unsigned source = (unsigned)cpu->d << 8 | cpu->e;
    if (source < 0x8000)
        return 0;

    unsigned base = code[0] == 0xdd ? cpu->ix : cpu->iy;
    uint16_t select_port = base + (int8_t)code[2];
    uint16_t data_port = base + (int8_t)code[6];
    if ((select_port & 0xe003) != 0x4000 || (data_port & 0xe003) != 0x4001)
        return 0;

    uint8_t raw = read_byte(md, source);
    uint8_t sample = raw + 1;
    unsigned branch = code[20];
    uint16_t dac_port = base + (int8_t)code[18];
    if (sample && (budget <= LOOP_BRANCH || code[12] != code[0] ||
        code[13] != 0x36 || code[14] != code[2] || code[15] != 0x2a ||
        code[16] != code[0] || code[17] != 0x77 || code[19] != 0x1c ||
        (branch != 0xc2 && branch != 0x20) || (dac_port & 0xe003) != 0x4001))
        return 0;

    md->ym_address[0] = 0x27;
    megadrive_ym_advance(md, INDEXED_WRITE * Z80_DIVIDER);
    unsigned control = code[7];
    if ((control & 3) == 3 && md->ym_registers[0][0x27] == control) {
        // With both timers already running, the write only clears flags
        // and asserts BUSY. The 19-clock store itself exhausts BUSY.
        md->ym_timer_flags &= ~(control >> 4 & 3);
    } else {
        megadrive_ym_write_at(md, 1, control, slice_write_cycle(md, MODE_WRITE + preceding));
    }
    cpu->a = sample;
    if (!sample) {
        megadrive_ym_advance(md, (EMPTY_END - INDEXED_WRITE) * Z80_DIVIDER);
        set_increment_flags(cpu, raw, sample);
        cpu->pc += 12 + (int8_t)code[11];
        cpu->mem_ptr = cpu->pc;
        advance_refresh(cpu, 7);
        return EMPTY_END | Z80_TIMERS_ADVANCED;
    }

    megadrive_ym_advance(md, (DAC_WRITE - 2 * INDEXED_WRITE) * Z80_DIVIDER);
    md->ym_address[0] = 0x2a;
    // The indexed DAC store also exhausts BUSY before the next read.
    dac_write_sample(md, sample, slice_write_cycle(md, DAC_WRITE + preceding));
    uint8_t previous = cpu->e++;
    set_increment_flags(cpu, previous, cpu->e);
    cpu->mem_ptr = dac_port;
    unsigned clocks;
    if (branch == 0xc2) {
        uint16_t dest = code[21] | code[22] << 8;
        cpu->mem_ptr = dest;
        cpu->pc = cpu->e ? dest : (uint16_t)(cpu->pc + 23);
        clocks = LOOP_BRANCH + 10;
    } else {
        cpu->pc += 22;
        if (cpu->e) {
            cpu->pc += (int8_t)code[21];
            cpu->mem_ptr = cpu->pc;
        }
        clocks = LOOP_BRANCH + (cpu->e ? 12 : 7);
    }
    megadrive_ym_advance(md, (clocks - DAC_WRITE + INDEXED_WRITE) * Z80_DIVIDER);
    advance_refresh(cpu, 13);
    return clocks | Z80_TIMERS_ADVANCED;
}

static __attribute__((noinline)) unsigned run_ym_stream(
    struct megadrive *md, unsigned budget, const uint8_t *ram, unsigned offset)
{
    enum { A_POLL = 33, B_POLL = 31, A_MASTER = A_POLL * Z80_DIVIDER };
    z80 *cpu = &md->sound_cpu;
    if (budget <= 23 || offset > 0x1fe2 ||
        cpu->int_pending || cpu->nmi_pending || cpu->iff_delay || md->ym_busy_cycles)
        return 0;

    // The PCM driver polls timer A, writes the next DAC sample, and branches
    // back while timer B remains clear. Verify the code in the guest's RAM.
    const uint8_t *poll = ram + offset;
    unsigned entry = cpu->pc;
    if (poll[1] != 0x7e || poll[3] != 0x0f || poll[4] != 0xd2 ||
        (poll[5] | (unsigned)poll[6] << 8) != entry)
        return 0;
    const uint8_t *sample = poll + 7;
    if ((sample[0] & 0xdf) != 0xdd || sample[1] != 0x36 || sample[3] != 0x27 ||
        sample[20] != 0xc2)
        return 0;
    unsigned check_pc = sample[21] | sample[22] << 8;
    unsigned check_off = check_pc & 0x1fff;
    if (check_pc >= 0x4000 || check_off > 0x1ff8)
        return 0;
    const uint8_t *check = ram + check_off;
    if (check[0] != 0x3a || (check[2] & 0xe0) != 0x40 ||
        check[3] != 0xcb || check[4] != 0x4f || check[5] != 0xca ||
        (check[6] | (unsigned)check[7] << 8) != entry)
        return 0;
    uint16_t status_port = ((poll[0] & 0x20) ? cpu->iy : cpu->ix) + (int8_t)poll[2];
    if (status_port < 0x4000 || status_port >= 0x6000)
        return 0;

    unsigned clocks = 0;
    do {
        // The last complete poll may run past the slice's guest clock limit.
        unsigned fit = (budget - clocks + 9) / A_POLL;
        unsigned status = megadrive_ym_status(md);
        if (!(status & 1) && (md->ym_registers[0][0x27] & 5) != 5)
            break;
        unsigned waiting = status & 1 ? 0 :
            (md->ym_timer_clocks[0] + A_MASTER - 1) / A_MASTER;
        unsigned polls = waiting < fit ? waiting + 1 : fit;
        if (polls > 1) {
            megadrive_ym_advance(md, (polls - 1) * A_MASTER);
            status = megadrive_ym_status(md);
        }
        cpu->a = (status >> 1) | ((status & 1) << 7);
        cpu->cf = status & 1;
        cpu->nf = cpu->hf = 0;
        cpu->xf = (cpu->a >> 3) & 1;
        cpu->yf = (cpu->a >> 5) & 1;
        cpu->mem_ptr = entry;
        advance_refresh(cpu, polls * 4);
        megadrive_ym_advance(md, A_MASTER);
        clocks += polls * A_POLL;
        if (!cpu->cf)
            break;
        cpu->pc = entry + 7;
        if (clocks >= budget)
            break;

        unsigned work = run_ym_sample(md, budget - clocks, sample, clocks);
        if (!work)
            break;
        clocks += work & ~Z80_TIMERS_ADVANCED;
        if (cpu->pc != check_pc || clocks + 21 >= budget)
            break;

        // LD A,(nn); BIT 1,A; JP Z. No instruction here writes the timers.
        status = megadrive_ym_status(md);
        bool finished = status & 2;
        cpu->a = status;
        cpu->sf = cpu->nf = 0;
        cpu->xf = (status >> 3) & 1;
        cpu->yf = (status >> 5) & 1;
        cpu->hf = 1;
        cpu->zf = cpu->pf = !finished;
        cpu->mem_ptr = entry;
        cpu->pc = finished ? check_pc + 8 : entry;
        advance_refresh(cpu, 4);
        megadrive_ym_advance(md, B_POLL * Z80_DIVIDER);
        clocks += B_POLL;
        if (finished)
            break;
    } while (clocks + 23 < budget);
    return clocks ? clocks | Z80_TIMERS_ADVANCED : 0;
}

static __attribute__((noinline)) unsigned run_local_delay(struct megadrive *md, unsigned budget,
                                const uint8_t *ram, unsigned offset, unsigned op)
{
    z80 *cpu = &md->sound_cpu;
    if ((op & 0xdf) == 0xdd) {
        if (offset <= 0x1fe9 && ram[offset + 1] == 0x36)
            return run_ym_sample(md, budget, ram + offset, 0);
        if (offset <= 0x1fe2 && ram[offset + 1] == 0x7e) {
            unsigned clocks = run_ym_stream(md, budget, ram, offset);
            if (clocks)
                return clocks;
        }
        return run_ym_status_poll(md, budget, ram, offset);
    }
    if (op == 0x08)
        return run_indexed_dac_write(md, budget, ram, offset);
    if (op == 0x07)
        return run_four_rotates(md, budget, ram, offset);
    if (op != 0x10 && op != 0x7a && op != 0x7e)
        return 0;
    if (cpu->int_pending || cpu->nmi_pending || cpu->iff_delay || md->ym_busy_cycles)
        return 0;
    if (offset <= 0x1ffe && op == 0x10 && ram[offset + 1] == 0xfe) {
        // Include the final untaken DJNZ when it starts within this slice.
        unsigned iterations = (uint8_t)(cpu->b - 1);
        unsigned clocks = iterations * 13;
        if (iterations)
            cpu->mem_ptr = cpu->pc;
        if (budget > clocks) {
            cpu->b = 0;
            cpu->pc += 2;
            advance_refresh(cpu, iterations + 1);
            return clocks + 8;
        }
        if (clocks > budget + 12)
            iterations = (budget + 12) / 13;
        cpu->b -= iterations;
        advance_refresh(cpu, iterations);
        return iterations * 13;
    }

    // LD A,D; OR E; JR Z back to the load. DE can change in an interrupt,
    // so leave any slice with a pending interrupt to the interpreter.
    if (offset <= 0x1ffc && op == 0x7a && ram[offset + 1] == 0xb3 &&
        ram[offset + 2] == 0x28 && ram[offset + 3] == 0xfc) {
        unsigned value = cpu->d | cpu->e;
        if (value) {
            finish_poll(cpu, value, 1);
            cpu->pc += 4;
            return 15;
        }
        // The branch may cross the slice boundary once its first eight clocks
        // have elapsed. The caller carries any resulting debt to the next slice.
        unsigned iterations = (budget + 11) / 20;
        finish_poll(cpu, 0, iterations);
        cpu->mem_ptr = cpu->pc;
        return iterations * 20;
    }

    // LD A,(HL); OR A; JP P back to the load. Neither processor writes
    // this RAM within the Z80 slice, so a clear sign bit remains clear.
    unsigned hl = (unsigned)cpu->h << 8 | cpu->l;
    if (budget <= 11 || op != 0x7e || hl >= 0x4000 || offset > 0x1ffb ||
        ram[offset + 1] != 0xb7 || ram[offset + 2] != 0xf2 ||
        ram[offset + 3] != (uint8_t)cpu->pc || ram[offset + 4] != cpu->pc >> 8)
        return 0;

    unsigned value = ram[hl & 0x1fff];
    cpu->mem_ptr = cpu->pc;
    if (value & 0x80) {
        finish_poll(cpu, value, 1);
        cpu->pc += 5;
        return 21;
    }
    // The jump executes whenever the slice reaches its first clock.
    unsigned iterations = (budget + 9) / 21;
    finish_poll(cpu, value, iterations);
    return iterations * 21;
}

#ifdef JENESIS_PROFILE
static ARM9_ITCM __attribute__((noinline)) void sync_sound_cpu(struct megadrive *md, unsigned m68k_cycle)
#else
ARM9_ITCM void genesis_z80_sync(struct megadrive *md, unsigned m68k_cycle)
#endif
{
    if (m68k_cycle > md->frame_cycles)
        m68k_cycle = md->frame_cycles;
    if (m68k_cycle <= md->z80_synced_cycle)
        return;

    unsigned elapsed_m68k = m68k_cycle - md->z80_synced_cycle;
    unsigned old_phase = md->z80_clock_phase;
    unsigned master_clocks = elapsed_m68k * M68K_DIVIDER + old_phase;
    unsigned budget = master_clocks / Z80_DIVIDER;
    md->z80_clock_phase = master_clocks % Z80_DIVIDER;
    int slice_master = (int)(md->z80_synced_cycle * M68K_DIVIDER) - (int)old_phase;
    md->z80_synced_cycle = m68k_cycle;
    unsigned debt = md->z80_instruction_debt;
    md->z80_instruction_debt = debt > budget ? debt - budget : 0;
    if (md->z80_bus_requested || md->z80_reset) {
        md->z80_irq_clocks = budget < md->z80_irq_clocks ? md->z80_irq_clocks - budget : 0;
        megadrive_ym_advance(md, elapsed_m68k * M68K_DIVIDER);
        return;
    }
    if (budget <= debt)
        return;
    budget -= debt;

    z80 *cpu = &md->sound_cpu;
    md->z80_slice_master = slice_master + (int)(debt * Z80_DIVIDER);
    unsigned long previous = cpu->cyc;
    md->z80_slice_clocks = previous;
    const uint8_t *ram = md->memory->z80_ram;
    int remaining = budget;
    unsigned irq_clocks = md->z80_irq_clocks;
    cpu->int_pending = irq_clocks != 0;
    do {
        bool timers_advanced = false;
        if (!cpu->halted && cpu->pc < 0x4000) {
            unsigned offset = cpu->pc & 0x1fff;
            uint8_t opcode = ram[offset];
            static const uint8_t delay_opcode[256] = {
                [0x07] = 1, [0x08] = 1, [0x10] = 1, [0x7a] = 1, [0x7e] = 1,
                [0xdd] = 1, [0xfd] = 1,
            };
            unsigned clocks = remaining >= 13 && delay_opcode[opcode] ?
                run_local_delay(md, remaining, ram, offset, opcode) : 0;
            if (clocks) {
                timers_advanced = (clocks & Z80_TIMERS_ADVANCED) != 0;
                cpu->cyc = previous + (clocks & ~Z80_TIMERS_ADVANCED);
            } else
                z80_step_ram(cpu, opcode);
        } else if (cpu->halted && !cpu->int_pending && !cpu->nmi_pending && !cpu->iff_delay) {
            unsigned refreshes = ((unsigned)remaining + 3) / 4;
            advance_refresh(cpu, refreshes);
            cpu->cyc += refreshes * 4;
        } else {
            z80_step(cpu);
        }
        unsigned long now = cpu->cyc;
        unsigned clocks = now - previous;
        previous = now;
        remaining -= (int)clocks;
        // Outside the VBlank pulse, the interrupt line remains clear for
        // the whole slice. During the pulse the core can also acknowledge it.
        if (irq_clocks) {
            irq_clocks = cpu->int_pending && clocks < irq_clocks ? irq_clocks - clocks : 0;
            // Keep the final pin state for save states taken between slices.
            if (remaining > 0)
                cpu->int_pending = irq_clocks != 0;
        }
        if (timers_advanced)
            continue;
        // Handle the common countdown here. Expiry still uses the full
        // timer update so flag changes and reloads stay on the guest clock.
        unsigned running = md->ym_registers[0][0x27] & 3;
        if (running) {
            unsigned master = clocks * Z80_DIVIDER;
            unsigned a = md->ym_timer_clocks[0], b = md->ym_timer_clocks[1];
            if (running != 3 || master >= a || master >= b) {
                megadrive_ym_advance(md, master);
                continue;
            }
            md->ym_timer_clocks[0] = a - master;
            md->ym_timer_clocks[1] = b - master;
        }
        if (md->ym_busy_cycles) {
            unsigned elapsed_m68k = clocks * Z80_DIVIDER / M68K_DIVIDER;
            md->ym_busy_cycles = elapsed_m68k < md->ym_busy_cycles ?
                                 md->ym_busy_cycles - elapsed_m68k : 0;
        }
    } while (remaining > 0);
    md->z80_irq_clocks = irq_clocks;
    md->z80_instruction_debt = -remaining;
}

#ifdef JENESIS_PROFILE
unsigned profile_z80_ticks;

void genesis_z80_sync(struct megadrive *md, unsigned m68k_cycle)
{
    if (m68k_cycle <= md->z80_synced_cycle)
        return;
    uint16_t start = timerTick(PROFILE_FRAME_TIMER);
    sync_sound_cpu(md, m68k_cycle);
    profile_z80_ticks += (uint16_t)(timerTick(PROFILE_FRAME_TIMER) - start);
}
#endif

void genesis_z80_vblank(struct megadrive *md, unsigned m68k_cycle)
{
    genesis_z80_sync(md, m68k_cycle);
    md->sound_cpu.int_data = 0xff; // Interrupt acknowledge returns an open-bus byte.
    md->z80_irq_clocks = Z80_IRQ_DURATION;
}
