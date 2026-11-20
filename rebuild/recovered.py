"""Recovered ARM9 regions and the ROM addresses of their external symbols."""
from pathlib import Path
import shutil

from r20 import compile_c


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


def prepare_reference_arm9(work, compiler, image, base):
    """Generate ROM gaps and link input for rebuilding with matched C objects."""
    shutil.copytree(SOURCE / "source", work, dirs_exist_ok=True)
    regions = [
        (start, end, filename, symbols)
        for _, filename, _, start, end, symbols in RECOVERED_REGIONS
    ]
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

    offset = base + 0x220
    for start, end, filename, symbols in sorted(regions):
        add_gap(offset, start)
        obj = compile_c(compiler, work, Path(filename), 9, "-O2", "-marm").name
        objects.append(obj)
        layout.append(f'"{obj}"(.text)')
        externals.update(symbols)
        offset = end
    add_gap(offset, base + 0x90004)
    (work / "arm9-rom-gaps.s").write_text("\n".join(assembly) + "\n")
    script = work / "arm9.ld"
    source = script.read_text()
    definitions = "".join(f"PROVIDE({name} = {address:#x});\n" for name, address in externals.items())
    script.write_text(source.replace("*(.text.payload)", "\n        ".join(layout)) + definitions)
    return objects
