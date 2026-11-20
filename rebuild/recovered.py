"""Recovered sections and the ROM addresses of their external symbols."""
import os
from pathlib import Path
import shutil
import subprocess

from generate_m68k_operand_dispatch import (
    OPERAND_CLASSES, OUTPUT_NAME as M68K_OPERAND_SOURCE, read_handler_index,
    write_source as write_m68k_operand_dispatch,
)
from generate_ym2612_dispatch import (
    OUTPUT_NAME as YM2612_DISPATCH_SOURCE, read_handlers as read_ym2612_handlers,
    write_source as write_ym2612_dispatch,
)
from generate_ym2612_tables import OUTPUT_NAME as YM2612_TABLE_SOURCE, write_source as write_ym2612_tables
from generate_z80_dispatch import (
    OUTPUT_NAME as Z80_DISPATCH_SOURCE, PAGES as Z80_PAGES, dispatch_pages,
    write_source as write_z80_dispatch,
)
from generate_vdp_timing_tables import (
    OUTPUT_NAME as VDP_TIMING_SOURCE, TABLES as VDP_TIMING_TABLES, write_source as write_vdp_timing_tables,
)
from r20 import check_match, compile_c, run, tool
from sdk_arm7 import (ARM7_IRQ_TABLE, ARM7_SDK_EXTERNALS, ARM7_SDK_REGIONS, DIVISION_OBJECTS, TOUCH_BSS,
                      stage_arm7_sdk)
from sdk_arm9 import (
    ARM9_NEWLIB_BSS, ARM9_SDK_EXTERNALS, ARM9_SDK_REGIONS, ARM9_SYSBASE_BSS, stage_arm9_sdk,
)
from sdk_libfat import LIBFAT_BSS, LIBFAT_DATA_SYMBOLS, LIBFAT_REGIONS, stage_libfat
from sdk_source import irq_setup_sections, stage_sdk_bios, stage_sdk_for_reference, stage_sdk_irq_setup


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


def alignment_fill(size, pattern=0xffffffff):
    return f"FILL({pattern:#010x}); . += {size:#x}; FILL(0);"


ARM7_ALIGNMENT = (
    # The original linker aligned the following Thumb object with Thumb NOPs.
    (0x03801054, 0x03801060, alignment_fill(12, 0xc046c046)),
    (0x03801778, 0x03801780, alignment_fill(8)),
    (0x03806D48, 0x03806D4C, alignment_fill(4)),
)
ARM9_ALIGNMENT = (
    (0x02074D84, 0x02074DC0, alignment_fill(60)),
    (0x02080308, 0x02080310, alignment_fill(8)),
    (0x0208EF85, 0x0208EF88, alignment_fill(3)),
    (0x0208F322, 0x0208F324, alignment_fill(2)),
    (0x0208F393, 0x0208F394, alignment_fill(1)),
)

Z80_DISPATCH_SYMBOLS = dispatch_pages()[1]


# Function entries used by the four recovered opcode classes. The C table
# describes which slot selects which entry, independent of its link address.
M68K_OPERAND_SYMBOLS = read_handler_index()[-1]
M68K_DISPATCH_SYMBOLS = {
    "m68k_moveq": 0x01003D0C,
    "m68k_shared_opcode_decode_020329a0": 0x020329A0,
    "m68k_bsr_word": 0x01003CB4,
    "m68k_bsr_byte": 0x01003C6C,
}
for mnemonic, word, forward, backward in (
    ("bra", 0x01003C54, 0x01003C1C, 0x01003C34),
    ("bhi", 0x0100312C, 0x010030F4, 0x01003114),
    ("bls", 0x010031C0, 0x01003150, 0x01003170),
    ("bcc", 0x01003254, 0x010031E4, 0x01003204),
    ("bcs", 0x010032E8, 0x01003278, 0x01003298),
    ("bne", 0x0100337C, 0x0100330C, 0x0100332C),
    ("beq", 0x01003410, 0x010033A0, 0x010033C0),
    ("bvc", 0x0100346C, 0x01003434, 0x01003454),
    ("bvs", 0x010034C8, 0x01003490, 0x010034B0),
    ("bpl", 0x0100355C, 0x010034EC, 0x0100350C),
    ("bmi", 0x010035B8, 0x01003580, 0x010035A0),
    ("bge", 0x0100365C, 0x010035DC, 0x01003600),
    ("blt", 0x010036C4, 0x01003684, 0x010036A8),
    ("bgt", 0x01003734, 0x010036EC, 0x01003714),
    ("ble", 0x010037A8, 0x01003760, 0x01003788),
):
    M68K_DISPATCH_SYMBOLS.update({
        f"m68k_{mnemonic}_word": word,
        f"m68k_{mnemonic}_forward": forward,
        f"m68k_{mnemonic}_backward": backward,
    })


def region_section(entry):
    if entry is None:
        return ".rodata"
    return entry if entry.startswith(".") else ".text"


def arm9_region_layout(obj, filename, entry, end_offset):
    if filename == DLDI_SOURCE:
        return f'"{obj}"(.rodata) "{obj}"(.text) . = {end_offset:#x};'
    return f'"{obj}"({region_section(entry)})'


VDP_LINE_CYCLE_SYMBOLS = {
    "vdp_line_cycle_position": 0x0B003624,
    "vdp_h_interrupt_serviced_this_line": 0x0B003628,
    "vdp_v_interrupt_enabled": 0x0B00362C,
    "vdp_h_interrupt_pending": 0x0B00362D,
    "vdp_v_interrupt_pending": 0x0B00362E,
    "vdp_h_interrupt_enabled": 0x0B003644,
    "queue_m68k_interrupt_level": 0x020004E0,
}


RECOVERED_REGIONS = (
    ("Cartridge region", "cartridge_region.c", "set_genesis_region_and_version_register",
     0x020002E4, 0x0200030C, {"genesis_region": 0x0B000000}),
    ("68000 guest PC", "m68k_program_counter.c", "read_m68k_program_counter",
     0x02000310, 0x0200037C, {"m68k_context": 0x0B0000AC}),
    ("Genesis I/O writes", "controller_io_write.c", "write_genesis_io_register_byte",
     0x0200037C, 0x020003F4, {
         "genesis_io": 0x0B000000,
         "write_genesis_controller_port_pins": 0x02003A68,
         "write_genesis_controller_direction": 0x02003820,
     }),
    ("Genesis I/O reads", "controller_io.c", "read_genesis_io_register_byte",
     0x020003F4, 0x020004E0, {
         "genesis_io": 0x0B000000,
         "read_genesis_controller_port_pins": 0x02003828,
         "read_genesis_controller_direction": 0x02003A48,
     }),
    ("Controller reset and direction write", "controller_reset.c", "reset_genesis_controller_port",
     0x020037B4, 0x02003828, {}),
    ("Controller direction and input mode", "controller_settings.c", "read_genesis_controller_direction",
     0x02003A48, 0x02003A68, {}),
    ("Controller handshake write and allocation", "controller_write.c", "write_genesis_controller_port_pins",
     0x02003A68, 0x02003AF0, {
         "read_m68k_cycle_counter": 0x0200052C,
         "malloc": 0x02082724,
         "reset_genesis_controller_port": 0x020037B4,
     }),
    ("68000 interrupt and cycle wrappers", "m68k_timing.c", "queue_m68k_interrupt_level",
     0x020004E0, 0x02000538, {
         "__aeabi_uidiv": 0x02080380,
         "frame_timing": 0x0B000000,
         "get_m68k_cycle_counter_field": 0x02005144,
         "m68k_context": 0x0B0000AC,
         "set_m68k_interrupt_level": 0x020050CC,
     }),
    ("68000 execution wrappers", "m68k_execute.c", "update_vdp_timing_and_run_m68k_scanline",
     0x02000538, 0x02000588, {
         "m68k_context": 0x0B0000AC,
         "update_vdp_line_cycles_and_queue_m68k_interrupts": 0x0200B284,
         "run_m68k": 0x01002F60,
     }),
    ("Z80 cycle scheduler", "z80_cycle_driver.c", "run_remaining_z80_cycles",
     0x02000588, 0x02000868, {
         "frame_timing": 0x0B000000,
         "z80_context": 0x0B000158,
         "z80_scheduled_cycles": 0x02098F90,
         "z80_accounted_cycles": 0x02098F98,
         "emulator_option_flags": 0x023CB610,
         "z80_reset_released": 0x02099001,
         "z80_bus_request_asserted": 0x02099000,
         "run_z80_cycle_budget": 0x0200DF50,
     }),
    ("H-INT frame timing", "frame_h_int_on.c", "run_frame_h_int_on",
     0x02000A2C, 0x02000BBC, {
         "frame_timing": 0x0B000000,
         "z80_context": 0x0B000158,
         "record_vdp_scanline_state": 0x023DCEA8,
         "begin_vdp_frame_and_refresh_backgrounds": 0x0200B438,
         "tick_vdp_horizontal_interrupt_counter": 0x020090E8,
         "begin_vdp_vertical_blanking": 0x02009144,
         "reload_vdp_counter_during_vertical_blanking": 0x020091EC,
         "update_vdp_timing_and_run_m68k_configured": 0x02000568,
         "update_vdp_timing_and_run_m68k_scanline": 0x02000538,
         "accrue_z80_cycles_for_scanline": 0x020006B8,
         "set_or_clear_z80_pending_interrupt_bits": 0x02004EF4,
         "run_remaining_z80_cycles": 0x02000588,
         "submit_arm7_dac_sample_buffer": 0x020061A8,
     }),
    ("Frame driver selection", "frame_callback_select.c", "run_frame_with_current_h_int",
     0x02000BBC, 0x02000BFC, {
         "frame_timing": 0x0B000000,
         "vdp_h_interrupt_enabled": 0x0B003644,
         "run_m68k_cycles": 0x02000558,
         "update_vdp_timing_and_run_m68k_configured": 0x02000568,
         "run_frame_h_int_off": 0x02000868,
         "run_frame_h_int_on": 0x02000A2C,
     }),
    ("Frame timing callbacks", "frame_callback_setup.c", "configure_frame_timing_callbacks",
     0x02000D10, 0x02000DAC, {
         "frame_timing": 0x0B000000,
         "emulator_option_flags": 0x023CB610,
         "run_m68k_cycles": 0x02000558,
         "update_vdp_timing_and_run_m68k_configured": 0x02000568,
         "run_frame_h_int_off": 0x02000868,
         "run_frame_h_int_on": 0x02000A2C,
         "run_frame_with_current_h_int": 0x02000BBC,
         "update_display_offset_for_current_viewport": 0x02006A58,
         "mark_background_tile_cache_for_refresh": 0x020075BC,
         "select_vdp_scanline_render_callback": 0x02009570,
         "invalidate_viewport_mode_cache": 0x02006A44,
     }),
    ("Z80 reset line", "z80_reset_line.c", "reset_z80_core_state",
     0x02000BFC, 0x02000C08, {
         "z80_context": 0x0B000158,
         "reset_z80_cpu_registers_and_latches": 0x02004DCC,
     }),
    ("Cartridge byte order", "cartridge_byte_order.c", "swap_adjacent_bytes_in_backing_buffer",
     0x0200157C, 0x020015C0, {}),
    ("68000 default page handlers", "m68k_page_defaults.c", "m68k_read_cartridge_sram_byte",
     0x02003DE0, 0x02003E38, {"cartridge_rom_bytes": 0x020B4CEC}),
    ("68000 cartridge page refresh", "m68k_refresh_pages.c", "refresh_m68k_cartridge_read_pages",
     0x0200412C, 0x0200416C, {
         "m68k_byte_read_handlers": 0x0B00061C,
         "m68k_word_read_handlers": 0x0B000A1C,
         "select_m68k_byte_read_handler": 0x02003F30,
         "select_m68k_word_read_handler": 0x0200402C,
     }),
    ("68000 bus page setup", "m68k_bus_pages.c", "select_m68k_byte_write_handler",
     0x0200416C, 0x02004368, {
         "m68k_byte_read_handlers": 0x0B00061C,
         "m68k_word_read_handlers": 0x0B000A1C,
         "m68k_byte_write_handlers": 0x0B000E1C,
         "m68k_word_write_handlers": 0x0B00121C,
         "select_m68k_byte_read_handler": 0x02003F30,
         "select_m68k_word_read_handler": 0x0200402C,
         "m68k_write_cartridge_byte": 0x02003E38,
         "m68k_write_z80_window_byte": 0x02004784,
         "m68k_write_io_or_mapper_byte": 0x020047F0,
         "m68k_write_vdp_byte": 0x020044A4,
         "m68k_write_work_ram_byte": 0x02003EB8,
         "ignore_m68k_unmapped_byte_page_write": 0x02003E30,
         "m68k_write_cartridge_word": 0x02003ED4,
         "m68k_write_z80_window_word": 0x02004714,
         "m68k_write_io_or_mapper_word": 0x020046C0,
         "m68k_write_vdp_word": 0x02004484,
         "m68k_write_work_ram_word": 0x01000000,
         "ignore_m68k_unmapped_word_page_write": 0x02003E34,
     }),
    ("Unmapped bus reads and writes", "m68k_default_bus.c", "read_default_m68k_bus_byte",
     0x02004368, 0x020043CC, {}),
    ("Z80 cartridge bank", "z80_bank_state.c", "get_z80_bank_latch_for_savestate",
     0x02004438, 0x02004484, {
         "z80_cartridge_bank_base": 0x02099008,
         "cartridge_rom_bytes": 0x020B4CEC,
     }),
    ("68000 VDP writes", "m68k_vdp_write.c", "m68k_write_vdp_word",
     0x02004484, 0x020044C8, {
         "queue_psg_register_write": 0x02005AD0,
         "write_vdp_word_port": 0x0200B26C,
     }),
    ("Z80 reset and bus request", "z80_bus_lines.c", "set_z80_reset_line",
     0x020044C8, 0x020045C8, {
         "frame_timing": 0x0B000000,
         "z80_bus_request_asserted": 0x02099000,
         "z80_reset_released": 0x02099001,
         "z80_bus_blocked_for_m68k": 0x0208F349,
         "z80_bus_poll_count": 0x02099004,
         "emulator_option_flags": 0x023CB610,
         "reset_fm_and_clear_queued_sound_writes": 0x020062D0,
         "reset_z80_core_state": 0x02000BFC,
         "run_z80_if_enabled_and_bus_released": 0x0200081C,
     }),
    ("68000 Genesis I/O and mapper writes", "m68k_io_write.c", "m68k_write_io_or_mapper_word",
     0x020046C0, 0x020048D4, {
         "write_genesis_io_register_word": 0x020003EC,
         "write_genesis_io_register_byte": 0x0200037C,
         "set_z80_bus_request": 0x02004538,
         "set_z80_reset_line": 0x020044C8,
         "write_z80_work_ram_byte": 0x02004C34,
         "queue_ym2612_register_or_dac_write": 0x02005BA0,
         "shift_z80_cartridge_bank_latch": 0x0200440C,
         "update_cartridge_sram_mapping": 0x020015C0,
         "z80_bus_blocked_for_m68k": 0x0208F349,
         "sram_control": 0x0208F34A,
         "ssf2_mapper_pages": 0x02099014,
         "tmss_register_latch": 0x0209900C,
     }),
    ("68000 VDP word read", "m68k_vdp_word_read.c", "read_vdp_word_from_m68k",
     0x020048D4, 0x02004908, {
         "read_vdp_word_port": 0x0200944C,
         "return_zero_for_unhandled_z80_vdp_access": 0x020043BC,
     }),
    ("68000 VDP and mapper reads", "m68k_io_read.c", "read_vdp_byte_from_m68k",
     0x02004AA8, 0x02004B7C, {
         "read_vdp_byte_port": 0x020094B4,
         "return_zero_for_unhandled_z80_vdp_access": 0x020043BC,
         "read_genesis_io_register_byte": 0x020003F4,
         "read_z80_bus_request_status": 0x020043CC,
         "read_default_m68k_bus_byte": 0x02004368,
         "sram_control": 0x0208F34A,
         "ssf2_mapper_pages": 0x02099014,
     }),
    ("68000 bus reset", "m68k_bus_reset.c", "clear_work_ram_and_bus_state",
     0x02004B7C, 0x02004C18, {
         "memset": 0x02083058,
         "genesis_work_ram_bytes": 0x023CB634,
         "z80_cartridge_bank_base": 0x02099008,
         "sram_control": 0x0208F34A,
         "cartridge_mapper_reset_word": 0x02099010,
         "z80_reset_released": 0x02099001,
         "z80_bus_request_asserted": 0x02099000,
         "z80_bus_blocked_for_m68k": 0x0208F349,
         "use_ssf2_mapper": 0x0209900E,
         "initialize_m68k_bus_dispatch_tables": 0x020042F0,
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
    ("Z80 pending interrupts", "z80_interrupt.c", "set_or_clear_z80_pending_interrupt_bits",
     0x02004EF4, 0x02004F70, {}),
    ("Z80 PC and SP save state", "savestate_z80_pointers.c", "encode_z80_pc_and_sp_as_ram_offsets",
     0x02004F70, 0x020050A8, {}),
    *(
        (f"Z80 {prefix} dispatch", Z80_DISPATCH_SOURCE, f".rodata.z80_{name}",
         start, start + count * 4, Z80_DISPATCH_SYMBOLS)
        for prefix, name, start, count in Z80_PAGES
    ),
    ("Z80 context initialization", "z80_context.c", "initialize_z80_state_and_dispatch_pointers",
     0x020050A8, 0x020050CC, {
         "memset": 0x02083058,
         "install_z80_dispatch_tables": 0x0200DF20,
     }),
    ("68000 packed state", "m68k_context.c", "set_m68k_interrupt_level",
     0x020050CC, 0x02005164, {}),
    ("68000 PC save state", "savestate_m68k_encode.c", "encode_m68k_program_counter_for_savestate",
     0x0200526C, 0x020052EC, {}),
    ("Sound mirrors", "sound_state.c", "get_ym2612_bank_0_mirror_for_savestate",
     0x02005AAC, 0x02005AD0, {
         "ym2612_bank_0_mirror": 0x0209907C,
         "ym2612_bank_1_mirror": 0x0209917C,
         "psg_register_mirror": 0x0209937C,
     }),
    ("ARM9 PSG write queue", "psg_queue.c", "queue_psg_register_write",
     0x02005AD0, 0x02005B7C, {
         "psg_queue_bytes": 0x02099058,
         "psg_write_buffer": 0x023DB658,
         "psg_register_mirror": 0x0209937C,
         "psg_latched_register": 0x0209939C,
     }),
    ("YM2612 timer status", "ym2612_status.c", "read_ym2612_timer_status",
     0x02005B7C, 0x02005B94, {"sound_context": 0x0B000000}),
    ("ARM9 DAC buffer submission", "arm9_dac_submit.c", "submit_arm7_dac_sample_buffer",
     0x020061A8, 0x02006228, {
         "dac_queue_bytes": 0x02099048,
         "dac_buffer_ready": 0x0209904C,
         "DC_FlushRange": 0x020802C4,
         "send_arm9_fifo_command_and_payload": 0x0200C55C,
     }),
    ("ARM9 audio controls", "arm9_audio_controls.c", "request_arm7_audio_stop",
     0x020062C4, 0x02006308, {
         "send_arm9_fifo_command_and_payload": 0x0200C55C,
         "clear_sound_mirrors_before_state_load": 0x020059F0,
     }),
    ("ARM9 audio start", "arm9_audio_start.c", "request_arm7_audio_start",
     0x020063DC, 0x020063E8, {"send_arm9_fifo_command_and_payload": 0x0200C55C}),
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
    ("VDP cycle-position interrupt scheduling", "vdp_line_cycles.c",
     "update_vdp_line_cycles_and_queue_m68k_interrupts", 0x0200B284, 0x0200B354,
     VDP_LINE_CYCLE_SYMBOLS),
    ("VDP immediate interrupt callbacks", "vdp_line_cycles_immediate.c",
     "update_vdp_line_cycles_and_queue_pending_interrupts", 0x0200B354, 0x0200B438,
     VDP_LINE_CYCLE_SYMBOLS),
    ("VDP sprite and background layout", "vdp_render_layout.c", None,
     0x0208E528, 0x0208E5E0, {}),
    *(
        (name.replace("_", " "), VDP_TIMING_SOURCE, f".rodata.{name}", start, start + size, {})
        for name, start, size in VDP_TIMING_TABLES
    ),
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
    ("Cartridge and work RAM mapping", "cartridge_mapping.c",
     "initialize_cartridge_and_work_ram_mapping", 0x02003AF0, 0x02003B34, {
         "cartridge_mapping": 0x023CB624,
         "genesis_work_ram_mapping": 0x023CB62C,
         "cartridge_rom_bytes": 0x020B4CEC,
         "genesis_work_ram_bytes": 0x023CB634,
     }),
    ("68000 memory reads", "m68k_loads.c", "read_m68k_byte_from_page",
     0x02003B34, 0x02003C58, {
         "m68k_byte_read_handlers": 0x0B00061C,
         "m68k_word_read_handlers": 0x0B000A1C,
         "cartridge_rom_bytes": 0x020B4CEC,
     }),
    ("68000 instruction fetch page", "m68k_fetch_mapping.c", "get_m68k_fetch_mapping",
     0x02003C88, 0x02003CA4, {
         "cartridge_mapping": 0x023CB624,
         "genesis_work_ram_mapping": 0x023CB62C,
     }),
    ("68000 longword predecrement write", "m68k_predecrement_write.c",
     "write_m68k_bus_long_for_predecrement", 0x02003D98, 0x02003DE0, {
         "m68k_word_write_handlers": 0x0B00121C,
     }),
    ("Cartridge bus", "cartridge_bus.c", "get_cartridge_rom_buffer",
     0x02003CA4, 0x02003CF8, {
         "cartridge_rom_bytes": 0x020B4CEC,
         "genesis_work_ram_bytes": 0x023CB634,
         "z80_cartridge_bank_base": 0x02099008,
     }),
    *(
        (f"68000 {label} dispatch", "m68k_dispatch.c", f".rodata.m68k_{section}",
         0x02032C28 + opcode * 4, 0x02032C28 + (opcode + 0x1000) * 4,
         M68K_DISPATCH_SYMBOLS)
        for label, section, opcode in (
            ("branch", "branch", 0x6000), ("MOVEQ", "moveq", 0x7000),
            ("line-A", "line_a", 0xA000), ("line-F", "line_f", 0xF000),
        )
    ),
    *(
        (f"68000 {name.replace('_', ' ')} dispatch", M68K_OPERAND_SOURCE, f".rodata.m68k_{name}",
         0x02032C28 + (line << 14), 0x02032C28 + ((line + 1) << 14), M68K_OPERAND_SYMBOLS)
        for line, name in OPERAND_CLASSES
    ),
    ("68000 condition and rotate counts", "m68k_condition_tables.c", None,
     0x020168B0, 0x02016A70, {}),
    ("Hexadecimal digits", "hex_digits.c", None, 0x0208EC90, 0x0208ECA0, {}),
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
    ("ARM7 PSG register batch", "arm7_psg_batch.c", "apply_psg_latch_and_data_bytes",
     0x037F8504, 0x037F8614, {"psg": 0x03806DBC}),
    ("ARM7 PSG register write", "arm7_psg_write.c", "write_psg_register_byte",
     0x037F8614, 0x037F86F4, {"psg_single_write_state": 0x03806DBC}),
    ("ARM7 PSG clock and ring setup", "arm7_psg_clock.c", "initialize_psg_clock_and_state",
     0x037F8A30, 0x037F8A88, {
         "__aeabi_idiv": 0x038019EC,
         "psg_ticks_per_sample_q12": 0x03806DBC,
         "psg_ring_samples": 0x03806DB8,
         "reset_psg_channel_state": 0x037F89BC,
     }),
    ("ARM7 YM2612 bank 1 packet", "arm7_ym2612_bank1.c", "apply_ym2612_bank1_writes",
     0x037F9394, 0x037F93D0, {
         "write_ym2612_channel_or_operator_register": 0x037F8E1C,
     }),
    ("ARM7 YM2612 DAC enable", "arm7_dac_enable.c", "read_ym2612_dac_enable",
     0x037F93D8, 0x037F93E8, {"ym2612_state": 0x03806EA8}),
    ("ARM7 DAC resampling cursor", "arm7_dac_cursor.c", "reset_dac_sample_cursor",
     0x037FBC10, 0x037FBC68, {
         "dac_source_index": 0x0380B878,
         "dac_source_fraction_q16": 0x0380B87C,
         "dac_source_step_q16": 0x0380B880,
         "dac_staged_byte_count": 0x0380B8A0,
         "__aeabi_uidiv": 0x038018D8,
     }),
    ("ARM7 FM reset entry", "arm7_fm_reset.c", "reset_fm_register_state",
     0x037FBF44, 0x037FBF5C, {"reset_ym2612_registers": 0x037F9238}),
    ("ARM7 audio FIFO setup", "arm7_ipc_init.c", "initialize_sound_message_handler",
     0x037FC0CC, 0x037FC0F0, {
         "enable_fifo_receive_interrupt": 0x037FC544,
         "set_fifo_message_callback": 0x037FC504,
         "handle_arm9_audio_command": 0x037FC218,
     }),
    ("ARM7 PCM and chip reset", "arm7_audio_reset.c", "clear_audio_pcm_buffers",
     0x037FC0F0, 0x037FC218, {
         "pcm_rings": 0x0380BDB8,
         "fm_pcm_vram_base": 0x03806D8C,
         "dac_pcm_vram_base": 0x03806D90,
         "psg_chip_clock_hz": 0x0380BAFC,
         "dac_staged_byte_count": 0x0380B8A0,
         "reset_psg_channel_state": 0x037F89BC,
         "reset_ym2612_registers": 0x037F9238,
         "send_fifo_command_and_payload": 0x037FC514,
     }),
    ("ARM7 audio FIFO", "arm7_ipc_fifo.c", "dispatch_fifo_receive_interrupt",
     0x037FC468, 0x037FC590, {
         "arm7_ipc_receive_callback": 0x0380BE00,
         "arm7_ipc_received_command": 0x0380BB04,
         "arm7_ipc_received_payload": 0x0380BB08,
         "irqSet": 0x037F8114,
         "irqEnable": 0x037F8120,
     }),
    ("ARM7 YM2612 sample loop dispatch", YM2612_DISPATCH_SOURCE, None,
     0x03800E50, 0x03801054, dict(read_ym2612_handlers().values())),
    ("ARM7 YM2612 lookup tables", YM2612_TABLE_SOURCE, None,
     0x038026F8, 0x03806D34, {}),
    ("ARM7 PSG attenuation table", "arm7_psg_attenuation.c", None,
     0x03806D4C, 0x03806D8C, {}),
    ("ARM7 PCM VRAM bases", "arm7_pcm_bases.c", ".data", 0x03806D8C, 0x03806D94, {}),
)


def with_libnds_headers(compiler, r20):
    libnds = Path(os.environ.get("LIBNDS") or r20.parent / "libnds").expanduser().resolve()
    include = libnds / "include"
    if not (include / "nds" / "ipc.h").is_file():
        raise FileNotFoundError(f"Cannot find period libnds headers in {include}. Set LIBNDS to its installation.")
    path = str(include)
    if compiler[0].endswith(".exe") and os.name != "nt":
        path = subprocess.check_output(["wslpath", "-w", path], text=True).strip()
    return [*compiler, "-isystem", path]


def compile_arm9_source(compiler, work, filename):
    if filename == M68K_OPERAND_SOURCE:
        write_m68k_operand_dispatch(work / filename)
    elif filename == Z80_DISPATCH_SOURCE:
        write_z80_dispatch(work / filename)
    elif filename == VDP_TIMING_SOURCE:
        write_vdp_timing_tables(work / filename)
    flags = {
        # Keep the last stream read in r0 on decoder exit.
        "lzss_decode.c": ("-fno-tree-vrp",),
        "arm9_dac_submit.c": ("-fno-unit-at-a-time",),
        "vdp_line_cycles.c": ("-fno-unit-at-a-time",),
        "vdp_line_cycles_immediate.c": ("-fno-unit-at-a-time",),
        "arm9_audio_controls.c": ("-fno-unit-at-a-time",),
        "controller_io_write.c": ("-fno-unit-at-a-time",),
        "controller_write.c": ("-fno-unit-at-a-time",),
        # Preserve the wrapper calls and their original function order.
        "m68k_default_bus.c": ("-fno-unit-at-a-time", "-fno-optimize-sibling-calls"),
        "m68k_io_read.c": ("-fno-unit-at-a-time", "-fno-optimize-sibling-calls"),
        "m68k_io_write.c": ("-fno-unit-at-a-time",),
        # The scanline and configured wrappers have identical instructions.
        # The callbacks still need their distinct release entry addresses.
        "m68k_execute.c": ("-fno-unit-at-a-time",),
        "m68k_fetch_mapping.c": ("-fno-schedule-insns",),
        "m68k_loads.c": ("-fno-unit-at-a-time",),
        "m68k_vdp_word_read.c": ("-fno-optimize-sibling-calls",),
        "m68k_vdp_write.c": ("-fno-unit-at-a-time",),
        "m68k_bus_pages.c": ("-fno-unit-at-a-time",),
        "m68k_page_defaults.c": ("-fno-unit-at-a-time",),
        # Keep ARM post-indexed stores for the cartridge page refresh.
        "m68k_refresh_pages.c": ("-fno-tree-loop-optimize",),
        "psg_queue.c": ("-fno-strict-aliasing",),
        # Preserve the original write-then-read function order.
        "z80_bus_lines.c": ("-fno-unit-at-a-time",),
        "z80_cycle_driver.c": ("-fno-unit-at-a-time",),
        "z80_memory.c": ("-fno-unit-at-a-time",),
    }.get(filename, ())
    # The page table contains ARM-only entries. The original uses LDR pc
    # instead of an interworking call for accesses through those pointers.
    arm_only = ("frame_h_int_on.c", "m68k_loads.c", "m68k_predecrement_write.c")
    # The immediate callbacks match the release with GCC's ARM926EJ-S scheduler.
    tune = "arm926ej-s" if filename == "vdp_line_cycles_immediate.c" else None
    return compile_c([*compiler, *flags], work, Path(filename), 9, "-O2", "-marm",
                     interwork=filename not in arm_only, tune=tune)


def compile_arm7_source(compiler, work, filename):
    if filename == YM2612_TABLE_SOURCE:
        write_ym2612_tables(work / filename)
    elif filename == YM2612_DISPATCH_SOURCE:
        write_ym2612_dispatch(work / filename)
    # Keep the empty-packet branch aimed at the shared return.
    flags = {
        "arm7_ym2612_bank1.c": ("-fno-reorder-blocks",),
        # The PCM clear also appears inline in the chip reset entry.
        "arm7_audio_reset.c": ("-finline-functions", "-fno-optimize-sibling-calls"),
        "arm7_fm_reset.c": ("-fno-optimize-sibling-calls",),
        "arm7_ipc_init.c": ("-fno-optimize-sibling-calls",),
        "arm7_ipc_fifo.c": ("-fno-unit-at-a-time",),
        "arm7_pcm_bases.c": ("-fno-unit-at-a-time",),
    }.get(filename, ())
    return compile_c([*compiler, *flags], work, Path(filename), 7, "-O2", "-marm")


def stage_c_runtime_sections(work, r20, objcopy):
    lib = r20 / "lib/gcc/arm-eabi/4.1.1"
    objects = []
    for part in ("crti", "crtn"):
        source = f"{part}.o"
        output = f"{part}-runtime.o"
        shutil.copyfile(lib / source, work / source)
        run(work, objcopy, "--only-section=.init", "--only-section=.fini", source, output)
        objects.append(output)
    for name in ("crtbegin.o", "crtend.o"):
        shutil.copyfile(lib / name, work / name)
        objects.append(name)
    shutil.copyfile(r20 / "arm-eabi/lib/libc.a", work / "libc.a")
    run(work, tool(r20 / "bin/arm-eabi-", "ar"), "x", "libc.a", "lib_a-init.o")
    return [*objects, "lib_a-init.o"]


def runtime_layout(base, init, fini, crtbegin, libc_init, init_array):
    init_sections = "crti-runtime.o(.init) crtn-runtime.o(.init)"
    fini_sections = "crti-runtime.o(.fini) crtn-runtime.o(.fini)"
    regions = [
        (init, init + 0x20, f"{init_sections} . = {init + 0x20 - base:#x};"),
        (fini, fini + 0x18, fini_sections),
        (crtbegin, crtbegin + 0xA4, "crtbegin.o(.text)"),
        (libc_init, libc_init + 0xD4, "lib_a-init.o(.text)"),
        (init_array, init_array + 0x14, "crtbegin.o(.init_array) crtbegin.o(.fini_array) "
         "crtbegin.o(.eh_frame) crtend.o(.eh_frame) crtbegin.o(.jcr) crtend.o(.jcr) crtbegin.o(.data)"),
    ]
    externals = {
        "__preinit_array_start": init_array,
        "__preinit_array_end": init_array,
        "__init_array_start": init_array,
        "__init_array_end": init_array + 4,
        "__fini_array_start": init_array + 4,
        "__fini_array_end": init_array + 8,
    }
    return regions, externals


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
    regions, externals = runtime_layout(
        base, 0x037F80D0, 0x038026E0, 0x037F814C, 0x038024D8, 0x03806D34)
    regions.extend(ARM7_ALIGNMENT)
    objects = list(runtime)
    recovered_compiler = with_libnds_headers(compiler, r20)
    for _, filename, entry, start, end, symbols in ARM7_REGIONS:
        obj = compile_arm7_source(recovered_compiler, work, filename).name
        objects.append(obj)
        section = region_section(entry)
        regions.append((start, end, f'"{obj}"({section})'))
        externals.update(symbols)
    script = work / "arm7.ld"
    source = script.read_text()
    if libnds:
        objects.extend(stage_arm7_sdk(work, compiler, r20, libnds))
        regions.extend((start, end, selectors) for start, end, _, selectors in ARM7_SDK_REGIONS)
        externals.update(ARM7_SDK_EXTERNALS)
        source = source.replace(". = 0x0380becc - 0x03806d94;",
                                f". = {TOUCH_BSS:#x} - 0x03806d94;\n"
                                "        arm7-touch.o(.bss)\n"
                                f"        . = {ARM7_IRQ_TABLE:#x} - 0x03806d94;\n"
                                "        irq-setup-arm7.o(COMMON)\n"
                                "        . = 0x0380becc - 0x03806d94;")
        source = source.replace("    arm7_main =", "    /DISCARD/ : { irq-setup-arm7.o(.text.irqDummy) }\n    arm7_main =")
    layout = write_payload_layout(work, "arm7", image, base, 0xd0, len(image), 0x037f80f0, regions)
    definitions = "".join(f"PROVIDE({name} = {address:#x});\n" for name, address in externals.items())
    script.write_text(source.replace("*(.text.payload)", layout) + definitions)
    return objects


def prepare_reference_arm9(work, compiler, image, base, runtime, r20, libnds=None, *,
                           libfat=None, replace_codec=False):
    """Generate ROM gaps and link input for rebuilding with matched C objects."""
    regions, externals = runtime_layout(
        base, 0x02000220, 0x020859F0, 0x02000240, 0x02082324, 0x0208F330)
    regions.extend(ARM9_ALIGNMENT)
    objects = list(runtime)
    assembly = []

    compiled = {}
    for _, filename, entry, start, end, symbols in RECOVERED_REGIONS:
        if filename not in compiled:
            compiled[filename] = compile_arm9_source(compiler, work, filename).name
            objects.append(compiled[filename])
        obj = compiled[filename]
        regions.append((start, end, arm9_region_layout(obj, filename, entry, end - base)))
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
        objects.extend(stage_sdk_irq_setup(work, compiler, r20, libnds, 9))
        regions.extend(ARM9_SDK_REGIONS)
        externals.update(ARM9_SDK_EXTERNALS)
        if libfat:
            objects.extend(stage_libfat(work, r20, libfat))
            regions.extend(LIBFAT_REGIONS)
            externals.update(LIBFAT_DATA_SYMBOLS)
        key_sections = " ".join(f'"{keys}"(.text.{name})'
                                for name in ("keysHeld", "keysDown", "scanKeys",
                                             "keysDownRepeat", "keysSetRepeat", "keysUp"))
        regions.extend((
            (0x0207FB70, 0x0207FC70, key_sections),
            (0x02080094, 0x02080298, irq_setup_sections(9)),
            (0x02080310, 0x02080380, f'"{bios}"(.text)'),
            (0x02080380, 0x020805DC, " ".join(f'"{obj}"(.text)' for obj in DIVISION_OBJECTS)),
            (0x0208F390, 0x0208F393, f'"{keys}"(.data)'),
        ))
        # IntrMain runs in ITCM, whose load image begins at 0x020936f0.
        itcm = image[0x936F0:]
        (work / "itcm-before-irq.bin").write_bytes(itcm[:0x56E0])
        (work / "itcm-after-irq.bin").write_bytes(itcm[0x5880:])
        for side in ("before", "after"):
            assembly.extend([f'.section .itcm.{side}, "ax", %progbits',
                             f'.incbin "itcm-{side}-irq.bin"'])
        source = source.replace("*(.itcm)", f'*(.itcm.before) irq-setup-arm9.o(.itcm) "{irq}"(.itcm) *(.itcm.after)')
        fat_bss = "".join(f". = {address:#x} - 0x02098f70;\n        fat-{member}.o(.bss)\n        "
                          for address, member in LIBFAT_BSS) if libfat else ""
        source = source.replace(". = 0x023eb350 - 0x02098f70;",
                                fat_bss + f'. = 0x020b4ca0 - 0x02098f70;\n        "{keys}"(.bss)\n'
                                f"        . = {ARM9_NEWLIB_BSS:#x} - 0x02098f70;\n"
                                "        lib_a-mallocr.o(.bss)\n"
                                f"        . = {ARM9_SYSBASE_BSS:#x} - 0x02098f70;\n"
                                "        sbrk.o(.bss) malloc_vars.o(.bss)\n"
                                "        . = 0x023eb34c - 0x02098f70;\n"
                                "        lib_a-reent.o(COMMON)\n"
                                "        . = 0x023eb350 - 0x02098f70;")
        source = source.replace("    arm9_main =", f'    /DISCARD/ : {{ "{keys}"(.text.*) irq-setup-arm9.o(.text.irqDummy) }}\n    arm9_main =')
        externals.update(__irq_flags=0x0B003FF8, __irq_vector=0x0B003FFC)

    layout = write_payload_layout(work, "arm9", image, base, 0x220, 0x90004,
                                  0x02085898, regions, assembly=assembly)
    definitions = "".join(f"PROVIDE({name} = {address:#x});\n" for name, address in externals.items())
    script.write_text(source.replace("*(.text.payload)", layout) + definitions)
    return objects
