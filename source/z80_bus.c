#include "z80_bus.h"
#include "megadrive.h"

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
    md->sound_cpu.ram_mask = sizeof(md->memory->z80_ram) - 1;
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
    cpu->sf = cpu->hf = cpu->nf = cpu->cf = 0;
    cpu->zf = value == 0;
    cpu->yf = (value >> 5) & 1;
    cpu->xf = (value >> 3) & 1;
    cpu->pf = !__builtin_parity(value);
    cpu->mem_ptr = cpu->pc;
    advance_refresh(cpu, iterations * 3);
}

static __attribute__((noinline)) unsigned run_four_rotates(
    struct megadrive *md, unsigned budget, unsigned offset)
{
    z80 *cpu = &md->sound_cpu;
    const uint8_t *ram = md->memory->z80_ram;
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

static unsigned run_local_delay(struct megadrive *md, unsigned budget,
                                unsigned offset, unsigned op)
{
    z80 *cpu = &md->sound_cpu;
    const uint8_t *ram = md->memory->z80_ram;
    if (op == 0x07)
        return run_four_rotates(md, budget, offset);
    if (op != 0x10 && op != 0x7a && op != 0x7e)
        return 0;
    if (cpu->int_pending || cpu->nmi_pending || cpu->iff_delay || md->ym_busy_cycles)
        return 0;
    if (offset <= 0x1ffe && op == 0x10 && ram[offset + 1] == 0xfe) {
        // DJNZ to itself. Leave the last, untaken iteration to the interpreter.
        // The normal path also executes the complete DJNZ if the slice
        // expires within its 13 clocks.
        unsigned iterations = (budget + 12) / 13;
        unsigned taken = (uint8_t)(cpu->b - 1);
        if (iterations > taken)
            iterations = taken;
        if (iterations) {
            cpu->b -= iterations;
            cpu->mem_ptr = cpu->pc;
            advance_refresh(cpu, iterations);
            return iterations * 13;
        }
    }

    // LD A,D; OR E; JR Z back to the load. DE can change in an interrupt,
    // so leave any slice with a pending interrupt to the interpreter.
    if (offset <= 0x1ffc && !(cpu->d | cpu->e) &&
        op == 0x7a && ram[offset + 1] == 0xb3 &&
        ram[offset + 2] == 0x28 && ram[offset + 3] == 0xfc) {
        // The branch may cross the slice boundary once its first eight clocks
        // have elapsed. The caller carries any resulting debt to the next slice.
        unsigned iterations = (budget + 11) / 20;
        finish_poll(cpu, 0, iterations);
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
    if (value & 0x80)
        return 0;
    // The jump executes whenever the slice reaches its first clock.
    unsigned iterations = (budget + 9) / 21;
    finish_poll(cpu, value, iterations);
    return iterations * 21;
}

ARM9_ITCM void genesis_z80_sync(struct megadrive *md, unsigned m68k_cycle)
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
    md->z80_slice_clocks = cpu->cyc;
    unsigned elapsed = 0;
    unsigned irq_clocks = md->z80_irq_clocks;
    cpu->int_pending = irq_clocks != 0;
    while (elapsed < budget) {
        unsigned long before = cpu->cyc;
        if (!cpu->halted && cpu->pc < 0x4000) {
            unsigned offset = cpu->pc & 0x1fff;
            uint8_t opcode = md->memory->z80_ram[offset];
            unsigned clocks = budget - elapsed >= 13 ?
                run_local_delay(md, budget - elapsed, offset, opcode) : 0;
            if (clocks)
                cpu->cyc += clocks;
            else
                z80_step_ram(cpu, opcode);
        } else if (cpu->halted && !cpu->int_pending && !cpu->nmi_pending && !cpu->iff_delay) {
            unsigned refreshes = (budget - elapsed + 3) / 4;
            advance_refresh(cpu, refreshes);
            cpu->cyc += refreshes * 4;
        } else {
            z80_step(cpu);
        }
        unsigned clocks = cpu->cyc - before;
        // Outside the VBlank pulse, the interrupt line remains clear for
        // the whole slice. During the pulse the core can also acknowledge it.
        if (irq_clocks) {
            irq_clocks = cpu->int_pending && clocks < irq_clocks ? irq_clocks - clocks : 0;
            // Keep the final pin state for save states taken between slices.
            if (elapsed + clocks < budget)
                cpu->int_pending = irq_clocks != 0;
        }
        if (md->ym_registers[0][0x27] & 3) {
            megadrive_ym_advance(md, clocks * Z80_DIVIDER);
        } else if (md->ym_busy_cycles) {
            unsigned elapsed_m68k = clocks * Z80_DIVIDER / M68K_DIVIDER;
            md->ym_busy_cycles = elapsed_m68k < md->ym_busy_cycles ?
                                 md->ym_busy_cycles - elapsed_m68k : 0;
        }
        elapsed += clocks;
    }
    md->z80_irq_clocks = irq_clocks;
    md->z80_instruction_debt = elapsed - budget;
}

void genesis_z80_vblank(struct megadrive *md, unsigned m68k_cycle)
{
    genesis_z80_sync(md, m68k_cycle);
    md->sound_cpu.int_data = 0xff; // Interrupt acknowledge returns an open-bus byte.
    md->z80_irq_clocks = Z80_IRQ_DURATION;
}
