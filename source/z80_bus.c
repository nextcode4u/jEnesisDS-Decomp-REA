#include "z80_bus.h"
#include "megadrive.h"

enum { M68K_DIVIDER = 7, Z80_DIVIDER = 15, Z80_IRQ_DURATION = 32 };

static uint8_t read_byte(void *context, uint16_t address)
{
    struct megadrive *md = context;
    if (address < 0x4000)
        return md->z80_ram[address & 0x1fff];
    if (address < 0x6000)
        return megadrive_ym_status(md);
    if (address >= 0x8000) {
        // jEnesisDS masks the shifted cartridge bank to the 4 MiB ROM window.
        uint32_t mapped = ((uint32_t)md->z80_bank << 15 | (address & 0x7fff)) & 0x3fffff;
        return mapped < md->rom_size ? md->rom[mapped] : 0xff;
    }
    return (address & 0xff00) == 0x7f00 ? 0 : 0xff;
}

static void write_byte(void *context, uint16_t address, uint8_t data)
{
    struct megadrive *md = context;
    if (address < 0x4000)
        md->z80_ram[address & 0x1fff] = data;
    else if (address < 0x6000) {
        unsigned cycle = md->z80_slice_start +
                         (md->sound_cpu.cyc - md->z80_slice_clocks) * Z80_DIVIDER / M68K_DIVIDER;
        if (cycle > md->z80_synced_cycle)
            cycle = md->z80_synced_cycle;
        megadrive_ym_write_at(md, address & 3, data, cycle);
    }
    else if (address < 0x6100)
        md->z80_bank = md->z80_bank >> 1 | (data & 1) << 8;
    else if ((address & 0xfff9) == 0x7f11)
        megadrive_write_byte(md, 0xc00000 | (address & 0x1f), data);
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
    md->sound_cpu.mirrored_ram = md->z80_ram;
    md->sound_cpu.ram_limit = 0x4000;
    md->sound_cpu.ram_mask = sizeof(md->z80_ram) - 1;
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

static unsigned run_local_delay(struct megadrive *md, unsigned budget)
{
    z80 *cpu = &md->sound_cpu;
    if (cpu->int_pending || cpu->nmi_pending || cpu->iff_delay || md->ym_busy_cycles ||
        cpu->pc >= 0x4000)
        return 0;

    const uint8_t *ram = md->z80_ram;
    unsigned offset = cpu->pc & 0x1fff;
    if (offset <= 0x1ffe && ram[offset] == 0x10 && ram[offset + 1] == 0xfe) {
        // DJNZ to itself. Leave the last, untaken iteration to the interpreter.
        unsigned iterations = budget / 13;
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
        ram[offset] == 0x7a && ram[offset + 1] == 0xb3 &&
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
    if (budget < 21 || hl >= 0x4000 || offset > 0x1ffb ||
        ram[offset] != 0x7e || ram[offset + 1] != 0xb7 || ram[offset + 2] != 0xf2 ||
        ram[offset + 3] != (uint8_t)cpu->pc || ram[offset + 4] != cpu->pc >> 8)
        return 0;

    unsigned value = ram[hl & 0x1fff];
    if (value & 0x80)
        return 0;
    unsigned iterations = budget / 21;
    finish_poll(cpu, value, iterations);
    return iterations * 21;
}

void genesis_z80_sync(struct megadrive *md, unsigned m68k_cycle)
{
    if (m68k_cycle > md->frame_cycles)
        m68k_cycle = md->frame_cycles;
    if (m68k_cycle <= md->z80_synced_cycle)
        return;

    unsigned elapsed_m68k = m68k_cycle - md->z80_synced_cycle;
    unsigned master_clocks = elapsed_m68k * M68K_DIVIDER + md->z80_clock_phase;
    unsigned budget = master_clocks / Z80_DIVIDER;
    md->z80_clock_phase = master_clocks % Z80_DIVIDER;
    md->z80_slice_start = md->z80_synced_cycle;
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
    md->z80_slice_start += debt * Z80_DIVIDER / M68K_DIVIDER;
    md->z80_slice_clocks = cpu->cyc;
    unsigned elapsed = 0;
    while (elapsed < budget) {
        // The pulse expires even if the driver keeps interrupts masked.
        cpu->int_pending = md->z80_irq_clocks != 0;
        unsigned clocks = 0;
        if (cpu->halted && !cpu->int_pending && !cpu->nmi_pending && !cpu->iff_delay) {
            unsigned refreshes = (budget - elapsed + 3) / 4;
            advance_refresh(cpu, refreshes);
            clocks = refreshes * 4;
        } else if (!cpu->halted && budget - elapsed >= 13) {
            clocks = run_local_delay(md, budget - elapsed);
        }
        if (clocks) {
            cpu->cyc += clocks;
        } else {
            unsigned long before = cpu->cyc;
            z80_step(cpu);
            clocks = cpu->cyc - before;
        }
        md->z80_irq_clocks = cpu->int_pending && clocks < md->z80_irq_clocks
                                 ? md->z80_irq_clocks - clocks : 0;
        if (md->ym_busy_cycles || (md->ym_registers[0][0x27] & 3))
            megadrive_ym_advance(md, clocks * Z80_DIVIDER);
        elapsed += clocks;
    }
    md->z80_instruction_debt = elapsed - budget;
}

void genesis_z80_vblank(struct megadrive *md, unsigned m68k_cycle)
{
    genesis_z80_sync(md, m68k_cycle);
    md->sound_cpu.int_data = 0xff; // Interrupt acknowledge returns an open-bus byte.
    md->z80_irq_clocks = Z80_IRQ_DURATION;
}
