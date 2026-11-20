"""Recovered ARM9 regions and the ROM addresses of their external symbols."""
from pathlib import Path
import shutil

from r20 import compile_c
from sdk_source import stage_sdk_for_reference


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
RECOVERED_REGIONS = (
    ("Cartridge region", "cartridge_region.c", "set_genesis_region_and_version_register",
     0x020002E4, 0x0200030C, {"genesis_region": 0x0B000000}),
    ("Cartridge byte order", "cartridge_byte_order.c", "swap_adjacent_bytes_in_backing_buffer",
     0x0200157C, 0x020015C0, {}),
    ("Z80 bank latch save state", "z80_bank_state.c", "get_z80_bank_latch_for_savestate",
     0x02004438, 0x02004458, {"z80_cartridge_bank_base": 0x02099008}),
    ("Z80 work RAM", "z80_work_ram.c", "get_z80_work_ram_buffer",
     0x02004C18, 0x02004C44, {"z80_work_ram": 0x0B00161C}),
    ("Z80 PC and SP save state", "savestate_z80_pointers.c", "encode_z80_pc_and_sp_as_ram_offsets",
     0x02004F70, 0x020050A8, {}),
    ("Sound mirrors", "sound_state.c", "get_ym2612_bank_0_mirror_for_savestate",
     0x02005AAC, 0x02005AD0, {
         "ym2612_bank_0_mirror": 0x0209907C,
         "ym2612_bank_1_mirror": 0x0209917C,
         "psg_register_mirror": 0x0209937C,
     }),
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


def compile_arm9_source(compiler, work, filename):
    # Keep the last stream read in r0 on decoder exit, as in the release.
    flags = ("-fno-tree-vrp",) if filename == "lzss_decode.c" else ()
    return compile_c([*compiler, *flags], work, Path(filename), 9, "-O2", "-marm")


def prepare_reference_arm9(work, compiler, image, base, libnds=None):
    """Generate ROM gaps and link input for rebuilding with matched C objects."""
    shutil.copytree(SOURCE / "source", work, dirs_exist_ok=True)
    regions = []
    objects = []
    assembly = []
    layout = []
    externals = {}

    def add_gap(start, end):
        if start >= end:
            return
        gap = f"rom-gap-{start:08x}"
        (work / f"{gap}.bin").write_bytes(image[start - base:end - base])
        assembly.append(f'.section .text.{gap}, "ax", %progbits')
        if start < 0x02085898 < end:
            veneer_offset = 0x02085898 - start
            assembly.extend([
                f'.incbin "{gap}.bin", 0, {veneer_offset:#x}',
                ".global arm9_call_via_r3",
                ".type arm9_call_via_r3, %function",
                "arm9_call_via_r3:",
                f'.incbin "{gap}.bin", {veneer_offset:#x}',
            ])
        else:
            assembly.append(f'.incbin "{gap}.bin"')
        layout.append(f"*(.text.{gap})")

    for _, filename, _, start, end, symbols in RECOVERED_REGIONS:
        obj = compile_arm9_source(compiler, work, filename).name
        objects.append(obj)
        regions.append((start, end, f'"{obj}"(.text)'))
        externals.update(symbols)

    script = work / "arm9.ld"
    source = script.read_text()
    if libnds:
        keys, irq = stage_sdk_for_reference(compiler, work, libnds)
        objects.extend((keys, irq))
        key_sections = " ".join(f'"{keys}"(.text.{name})'
                                for name in ("keysHeld", "keysDown", "scanKeys"))
        regions.extend((
            (0x0207FB70, 0x0207FC24, key_sections),
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

    offset = base + 0x220
    for start, end, section in sorted(regions):
        add_gap(offset, start)
        layout.append(section)
        offset = end
    add_gap(offset, base + 0x90004)
    (work / "arm9-rom-gaps.s").write_text("\n".join(assembly) + "\n")
    definitions = "".join(f"PROVIDE({name} = {address:#x});\n" for name, address in externals.items())
    script.write_text(source.replace("*(.text.payload)", "\n        ".join(layout)) + definitions)
    return objects
