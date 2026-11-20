"""Recovered sections and the ROM addresses of their external symbols."""
from pathlib import Path
import shutil

from r20 import check_match, compile_c, run
from sdk_arm7 import (ARM7_SDK_EXTERNALS, ARM7_SDK_REGIONS, DIVISION_OBJECTS, TOUCH_BSS,
                      stage_arm7_sdk)
from sdk_arm9 import ARM9_SDK_REGIONS, stage_arm9_sdk
from sdk_source import stage_sdk_bios, stage_sdk_for_reference


SOURCE = Path(__file__).resolve().parent

STREAM_FUNCTIONS = {
    "read_bounded_stream_byte": 0x0200C82C,
    "write_bounded_stream_byte": 0x0200C858,
}
LZSS_RING = 0x023DDEC0
LZSS_TREES = {
    "lzss_ring_buffer": LZSS_RING,
    "lzss_left_child": 0x023DEEE4,
    "lzss_parent": 0x023E2EEC,
    "lzss_right_child": 0x023E6EF0,
    "lzss_match_position": 0x023EB30C,
    "lzss_match_length": 0x023EB310,
}
LZSS_STREAMS = {
    "lzss_input": 0x023DEED4,
    "lzss_input_stream": 0x023DDEBC,
    "lzss_output": 0x023EB2FC,
    "lzss_output_stream": 0x023EB2F8,
}
LZSS_ENCODER_GLOBALS = {
    "lzss_bytes_read": 0x020B4C40,
    "lzss_bytes_written": 0x020B4C44,
}
LZSS_STDIO = {
    "fclose": 0x02081020,
    "fopen": 0x02081588,
    "fread": 0x02081788,
    "fseek": 0x02081FF0,
    "ftell": 0x0208212C,
    "fwrite": 0x020822E0,
    "memcpy": 0x02082EC0,
}
LZSS_OPEN_MODES = {
    "binary_read_mode": 0x0208F074,
    "binary_write_mode": 0x0208F070,
}
CODEC_REPLACEMENTS = (
    (0x0200C87C, 0x0200CB78, "encode_lzss_stream", "lzss_encode.c"),
    (0x0200CDA4, 0x0200CF28, "load_file_and_decode_lzss_with_prefix", "lzss_buffers.c"),
    (0x0200CF28, 0x0200D03C, "write_file_and_encode_lzss_with_prefix", "lzss_buffers.c"),
)


def check_codec_image(original, rebuilt, base):
    if len(rebuilt) != len(original):
        raise ValueError("Codec ROM has an unexpected ARM9 image length")
    unchanged = bytearray(rebuilt)
    for start, end, name, _ in CODEC_REPLACEMENTS:
        first, stop = start - base, end - base
        if not 0 <= first < stop <= len(original):
            raise ValueError(f"Codec region for {name} is outside the ARM9 image")
        if rebuilt[first:stop] == original[first:stop]:
            raise ValueError(f"Expected replacement instructions for {name}")
        unchanged[first:stop] = original[first:stop]
    check_match(original, unchanged, "ARM9 image outside codec replacements")


DLDI_SOURCE = "dldi_placeholder.c"


def arm9_region_layout(obj, filename, end_offset):
    if filename == DLDI_SOURCE:
        return f'"{obj}"(.rodata) "{obj}"(.text) . = {end_offset:#x};'
    return f'"{obj}"(.text)'


RECOVERED_REGIONS = (
    ("Cartridge region", "cartridge_region.c", "set_genesis_region_and_version_register",
     0x020002E4, 0x0200030C, {"genesis_region": 0x0B000000}),
    ("68000 guest PC", "m68k_program_counter.c", "read_m68k_program_counter",
     0x02000310, 0x0200037C, {"m68k_context": 0x0B0000AC}),
    ("68000 interrupt and cycle wrappers", "m68k_timing.c", "queue_m68k_interrupt_level",
     0x020004E0, 0x02000538, {
         "__aeabi_uidiv": 0x02080380,
         "frame_timing": 0x0B000000,
         "get_m68k_cycle_counter_field": 0x02005144,
         "m68k_context": 0x0B0000AC,
         "set_m68k_interrupt_level": 0x020050CC,
     }),
    ("Cartridge byte order", "cartridge_byte_order.c", "swap_adjacent_bytes_in_backing_buffer",
     0x0200157C, 0x020015C0, {}),
    ("Z80 cartridge bank", "z80_bank_state.c", "get_z80_bank_latch_for_savestate",
     0x02004438, 0x02004484, {
         "z80_cartridge_bank_base": 0x02099008,
         "cartridge_rom_bytes": 0x020B4CEC,
     }),
    ("Z80 work RAM", "z80_work_ram.c", "get_z80_work_ram_buffer",
     0x02004C18, 0x02004C44, {"z80_work_ram": 0x0B00161C}),
    ("Z80 mapped memory", "z80_memory.c", "write_z80_mapped_byte",
     0x02004C50, 0x02004D94, {
         "z80_work_ram": 0x0B00161C,
         "write_z80_banked_byte": 0x020045C8,
         "queue_ym2612_register_or_dac_write": 0x02005BA0,
         "queue_psg_register_write": 0x02005AD0,
         "shift_z80_cartridge_bank_latch": 0x0200440C,
         "read_z80_banked_cartridge_byte": 0x02004458,
         "read_ym2612_timer_status": 0x02005B7C,
     }),
    ("Z80 RAM reset", "z80_clear.c", "clear_z80_work_ram",
     0x02004D94, 0x02004DCC, {
         "z80_work_ram": 0x0B00161C,
         "z80_reset_word_0": 0x02099034,
         "z80_reset_word_1": 0x02099038,
         "memset": 0x02083058,
     }),
    ("Z80 PC and SP save state", "savestate_z80_pointers.c", "encode_z80_pc_and_sp_as_ram_offsets",
     0x02004F70, 0x020050A8, {}),
    ("Z80 context initialization", "z80_context.c", "initialize_z80_state_and_dispatch_pointers",
     0x020050A8, 0x020050CC, {
         "memset": 0x02083058,
         "install_z80_dispatch_tables": 0x0200DF20,
     }),
    ("68000 packed state", "m68k_context.c", "set_m68k_interrupt_level",
     0x020050CC, 0x02005164, {}),
    ("Sound mirrors", "sound_state.c", "get_ym2612_bank_0_mirror_for_savestate",
     0x02005AAC, 0x02005AD0, {
         "ym2612_bank_0_mirror": 0x0209907C,
         "ym2612_bank_1_mirror": 0x0209917C,
         "psg_register_mirror": 0x0209937C,
     }),
    ("YM2612 timer status", "ym2612_status.c", "read_ym2612_timer_status",
     0x02005B7C, 0x02005B94, {"sound_context": 0x0B000000}),
    ("VDP interrupts", "vdp_interrupts.c", "tick_vdp_horizontal_interrupt_counter",
     0x020090E8, 0x02009214, {
         "vdp_timing": 0x0B000000,
         "vdp_scanline": 0x020B4BEC,
         "vdp_h_interrupt_counter": 0x0B003620,
         "vdp_h_interrupt_reload": 0x020B4BF8,
         "vdp_h_interrupt_serviced_this_line": 0x0B003628,
         "vdp_h_interrupt_pending": 0x0B00362D,
         "vdp_v_interrupt_pending": 0x0B00362E,
     }),
    ("VDP save-state regions", "savestate_vdp.c", "bind_vdp_memory_regions_for_savestate",
     0x02009CB0, 0x02009CF0, {
         "savestate_region_table": 0x023EB348,
         "vdp_registers": 0x020B4C18,
         "vdp_vsram": 0x0B00364C,
         "vdp_vram": 0x0209CBEC,
         "vdp_cram": 0x023DC6B0,
     }),
    ("ARM9 IPC FIFO", "arm9_fifo.c", "dispatch_arm9_fifo_receive_interrupt",
     0x0200C4A8, 0x0200C5D8, {
         "ipc_receive_callback": 0x023DDEB8,
         "ipc_received_command": 0x020B4C38,
         "ipc_received_payload": 0x020B4C3C,
         "irqEnable": 0x020858BC,
         "irqSet": 0x020858C8,
     }),
    ("LZSS match tree", "lzss_match_tree.c", "initialize_lzss_match_trees",
     0x0200C5D8, 0x0200C82C, LZSS_TREES),
    ("Bounded LZSS streams", "bounded_stream.c", "read_bounded_stream_byte",
     0x0200C82C, 0x0200C87C, {}),
    ("LZSS stream decoder", "lzss_decode.c", "decode_lzss_stream",
     0x0200CB78, 0x0200CCB4, {
         **STREAM_FUNCTIONS,
         "lzss_ring_buffer": LZSS_RING,
         **LZSS_STREAMS,
     }),
    ("LZSS memory decoder", "lzss_memory.c", "decode_lzss_from_memory_with_prefix",
     0x0200CCB4, 0x0200CDA4, {
         **LZSS_STREAMS,
         "decode_lzss_stream": 0x0200CB78,
         "memcpy": 0x02082EC0,
     }),
    ("Cartridge bus", "cartridge_bus.c", "get_cartridge_rom_buffer",
     0x02003CA4, 0x02003CF8, {
         "cartridge_rom_bytes": 0x020B4CEC,
         "genesis_work_ram_bytes": 0x023CB634,
         "z80_cartridge_bank_base": 0x02099008,
     }),
    ("Default DLDI interface and reserved storage", DLDI_SOURCE, "dldi_placeholder",
     0x02074DC0, 0x0207CDC0, {"dldi_reservation_end": 0x0207CDC0}),
    ("Save-state layout and slot path", "savestate_layout.c", "prepare_savestate_header_and_regions",
     0x0200D03C, 0x0200D13C, {
         "emulator_cpu_pointers": 0x0B000000,
         "genesis_work_ram_bytes": 0x023CB634,
         "savestate_regions": 0x023EB314,
         "savestate_region_table": 0x023EB348,
         "savestate_regions_initialized": 0x020B4C4C,
         "loaded_cartridge_metadata": 0x02098FC8,
         "get_z80_work_ram_buffer": 0x02004C18,
         "get_ym2612_bank_0_mirror_for_savestate": 0x02005AAC,
         "get_ym2612_bank_1_mirror_for_savestate": 0x02005AB8,
         "get_psg_mirror_for_savestate": 0x02005AC4,
         "bind_vdp_memory_regions_for_savestate": 0x02009CB0,
         "malloc": 0x02082724,
         "strlen": 0x02083A6C,
         "strncpy": 0x02083DBC,
     }),
)


ARM7_REGIONS = (
    ("ARM7 PSG clock and ring setup", "arm7_psg_clock.c", "initialize_psg_clock_and_state",
     0x037F8A30, 0x037F8A88, {
         "__aeabi_idiv": 0x038019EC,
         "psg_ticks_per_sample_q12": 0x03806DBC,
         "psg_ring_samples": 0x03806DB8,
         "reset_psg_channel_state": 0x037F89BC,
     }),
    ("ARM7 PSG attenuation table", "arm7_psg_attenuation.c", None,
     0x03806D4C, 0x03806D8C, {}),
)


def compile_arm9_source(compiler, work, filename):
    flags = {
        # Keep the last stream read in r0 on decoder exit.
        "lzss_decode.c": ("-fno-tree-vrp",),
        # Preserve the original write-then-read function order.
        "z80_memory.c": ("-fno-unit-at-a-time",),
    }.get(filename, ())
    return compile_c([*compiler, *flags], work, Path(filename), 9, "-O2", "-marm")


def stage_c_runtime_init(work, r20, objcopy):
    lib = r20 / "lib/gcc/arm-eabi/4.1.1"
    objects = []
    for part in ("crti", "crtn"):
        source = f"{part}.o"
        output = f"{part}-init.o"
        shutil.copyfile(lib / source, work / source)
        run(work, objcopy, "--only-section=.init", source, output)
        objects.append(output)
    return objects


def init_region(base, offset, runtime):
    sections = " ".join(f'"{obj}"(.init)' for obj in runtime)
    return base + offset, base + offset + 0x20, f"{sections} . = {offset + 0x20:#x};"


def write_payload_layout(work, core, image, base, begin, end, veneer, regions, *, assembly=None):
    if assembly is None:
        assembly = []
    layout = []
    veneer_name = f"{core}_call_via_r3"

    def add_gap(start, end):
        if start >= end:
            return
        gap = f"rom-gap-{start:08x}"
        (work / f"{gap}.bin").write_bytes(image[start - base:end - base])
        assembly.append(f'.section .text.{gap}, "ax", %progbits')
        if start <= veneer < end:
            veneer_offset = veneer - start
            if veneer_offset:
                assembly.append(f'.incbin "{gap}.bin", 0, {veneer_offset:#x}')
            assembly.extend([
                f".global {veneer_name}",
                f".type {veneer_name}, %function",
                f"{veneer_name}:",
                f'.incbin "{gap}.bin", {veneer_offset:#x}',
            ])
        else:
            assembly.append(f'.incbin "{gap}.bin"')
        layout.append(f"*(.text.{gap})")

    offset = base + begin
    for start, stop, section in sorted(regions):
        if not offset <= start < stop <= base + end:
            raise ValueError(f"{core} replacement {start:#x}–{stop:#x} overlaps or is out of range")
        add_gap(offset, start)
        layout.append(section)
        offset = stop
    add_gap(offset, base + end)
    (work / f"{core}-rom-gaps.s").write_text("\n".join(assembly) + "\n")
    return "\n        ".join(layout)


def prepare_reference_arm7(work, compiler, image, base, runtime, r20, libnds=None):
    regions = [init_region(base, 0xd0, runtime)]
    objects = list(runtime)
    externals = {}
    for _, filename, entry, start, end, symbols in ARM7_REGIONS:
        obj = compile_c(compiler, work, Path(filename), 7, "-O2", "-marm").name
        objects.append(obj)
        section = ".text" if entry else ".rodata"
        regions.append((start, end, f'"{obj}"({section})'))
        externals.update(symbols)
    script = work / "arm7.ld"
    source = script.read_text()
    if libnds:
        objects.extend(stage_arm7_sdk(work, compiler, r20, libnds))
        regions.extend((start, end, selectors) for start, end, _, selectors in ARM7_SDK_REGIONS)
        externals.update(ARM7_SDK_EXTERNALS)
        source = source.replace(". += 0x0380becc - 0x03806d94;",
                                f". = {TOUCH_BSS:#x} - 0x03806d94;\n"
                                "        arm7-touch.o(.bss)\n"
                                "        . = 0x0380becc - 0x03806d94;")
    layout = write_payload_layout(work, "arm7", image, base, 0xd0, len(image), 0x037f80f0, regions)
    definitions = "".join(f"PROVIDE({name} = {address:#x});\n" for name, address in externals.items())
    script.write_text(source.replace("*(.text.payload)", layout) + definitions)
    return objects


def prepare_reference_arm9(work, compiler, image, base, runtime, r20, libnds=None, *, replace_codec=False):
    """Generate ROM gaps and link input for rebuilding with matched C objects."""
    regions = [init_region(base, 0x220, runtime)]
    objects = list(runtime)
    assembly = []
    externals = {}

    for _, filename, _, start, end, symbols in RECOVERED_REGIONS:
        obj = compile_arm9_source(compiler, work, filename).name
        objects.append(obj)
        regions.append((start, end, arm9_region_layout(obj, filename, end - base)))
        externals.update(symbols)

    if replace_codec:
        codec_objects = {}
        for start, end, entry, filename in CODEC_REPLACEMENTS:
            if filename not in codec_objects:
                options = [*compiler, "-ffunction-sections"]
                obj = compile_c(options, work, Path(filename), 9, "-Os", "-marm").name
                codec_objects[filename] = obj
                objects.append(obj)
            section = f'"{codec_objects[filename]}"(.text.{entry}) . = {end - base:#x};'
            regions.append((start, end, section))
        externals.update(LZSS_ENCODER_GLOBALS)
        externals.update(LZSS_STDIO)
        externals.update(LZSS_OPEN_MODES)

    script = work / "arm9.ld"
    source = script.read_text()
    if libnds:
        keys, irq = stage_sdk_for_reference(compiler, work, libnds)
        bios = stage_sdk_bios(work, compiler, libnds, 9)
        objects.extend((keys, irq, bios, *DIVISION_OBJECTS))
        objects.extend(stage_arm9_sdk(work, compiler, r20, libnds))
        regions.extend(ARM9_SDK_REGIONS)
        key_sections = " ".join(f'"{keys}"(.text.{name})'
                                for name in ("keysHeld", "keysDown", "scanKeys"))
        regions.extend((
            (0x0207FB70, 0x0207FC24, key_sections),
            (0x02080310, 0x02080380, f'"{bios}"(.text)'),
            (0x02080380, 0x020805DC, " ".join(f'"{obj}"(.text)' for obj in DIVISION_OBJECTS)),
            (0x0208F390, 0x0208F393, f'"{keys}"(.data)'),
        ))
        # IntrMain runs in ITCM, whose load image begins at 0x020936f0.
        itcm = image[0x936F0:]
        (work / "itcm-before-irq.bin").write_bytes(itcm[:0x57A8])
        (work / "itcm-after-irq.bin").write_bytes(itcm[0x5880:])
        for side in ("before", "after"):
            assembly.extend([f'.section .itcm.{side}, "ax", %progbits',
                             f'.incbin "itcm-{side}-irq.bin"'])
        source = source.replace("*(.itcm)", f'*(.itcm.before) "{irq}"(.itcm) *(.itcm.after)')
        source = source.replace(". += 0x023eb350 - 0x02098f70;",
                                f'. = 0x020b4ca0 - 0x02098f70;\n        "{keys}"(.bss)\n'
                                "        . = 0x023eb350 - 0x02098f70;")
        source = source.replace("    arm9_main =", f'    /DISCARD/ : {{ "{keys}"(.text.*) }}\n    arm9_main =')
        externals.update(irqTable=0x010056E0, __irq_flags=0x0B003FF8)

    layout = write_payload_layout(work, "arm9", image, base, 0x220, 0x90004,
                                  0x02085898, regions, assembly=assembly)
    definitions = "".join(f"PROVIDE({name} = {address:#x});\n" for name, address in externals.items())
    script.write_text(source.replace("*(.text.payload)", layout) + definitions)
    return objects
