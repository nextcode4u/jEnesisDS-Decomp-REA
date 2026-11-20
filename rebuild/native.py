"""Assembler inputs for recovered native emulator code."""
from dataclasses import dataclass

from r20 import run, tool


@dataclass(frozen=True)
class NativeRegion:
    name: str
    start: int
    end: int
    source: str = ""
    load_address: int | None = None

    @property
    def rom_address(self):
        return self.start if self.load_address is None else self.load_address

    @property
    def section(self):
        return f".native.{self.name}"

    @property
    def object(self):
        return f"{self.source or self.name}.o"


ARM7_BASE = 0x037F8000
ARM7_IMAGE_SIZE = 0xED94
ARM9_BASE = 0x02000000
ARM9_IMAGE_SIZE = 0x98F70
ARM9_ITCM = NativeRegion("arm9_itcm", 0x01000000, 0x010056E0, load_address=0x020936F0)
NATIVE_REGIONS = {
    7: (
        NativeRegion("arm7_audio_service", 0x037F81F0, 0x037F8504, "arm7_service"),
        NativeRegion("arm7_psg", 0x037F86F4, 0x037F8A30, "arm7_service"),
        NativeRegion("arm7_audio_bridge", 0x037F93D0, 0x037F93D8, "arm7_service"),
        NativeRegion("arm7_dac_service", 0x037FBC68, 0x037FBF44, "arm7_service"),
        NativeRegion("arm7_audio_clocks", 0x037FBF5C, 0x037FC0CC, "arm7_service"),
        NativeRegion("arm7_audio_ipc_commands", 0x037FC218, 0x037FC468, "arm7_service"),
        NativeRegion("arm7_veneers", 0x037F80F0, 0x037F8144, "arm7_service"),
        NativeRegion("arm7_ym2612_operators", 0x037F8A88, 0x037F9394),
        NativeRegion("arm7_ym2612_mixer", 0x037F93E8, 0x037FBC10),
        NativeRegion("arm7_ym2612", 0x037FC590, 0x03800E50),
    ),
    9: (
        NativeRegion("arm9_frontend_main", 0x020011b0, 0x02001530, "arm9_frontend"),
        NativeRegion("arm9_frontend_panels", 0x020023dc, 0x0200311c, "arm9_frontend"),
        NativeRegion("arm9_frontend_rom_browser", 0x020034b0, 0x020037b4, "arm9_frontend"),
        NativeRegion("arm9_frontend_indicators", 0x02006730, 0x02006a44, "arm9_frontend"),
        NativeRegion("arm9_frontend_graphics", 0x02006b78, 0x02006f2c, "arm9_frontend"),
        NativeRegion("arm9_frontend_text", 0x0200d8c4, 0x0200db8c, "arm9_frontend"),
        NativeRegion("arm9_frontend_hex_tiles", 0x0200dc64, 0x0200dd20, "arm9_frontend"),
        NativeRegion("arm9_empty_callback", 0x0200030c, 0x02000310, "arm9_platform"),
        NativeRegion("arm9_cp15_accessors", 0x02072c28, 0x02072c50, "arm9_platform"),
        NativeRegion("arm9_sdk_veneers", 0x02085898, 0x02085988, "arm9_platform"),
        NativeRegion("arm9_storage_veneers", 0x02085990, 0x020859f0, "arm9_platform"),
        NativeRegion("arm9_gameplay_irq", 0x02000fdc, 0x02001118, "arm9_callbacks"),
        NativeRegion("arm9_bios_wait_wrapper", 0x02001180, 0x020011b0, "arm9_callbacks"),
        NativeRegion("arm9_menu_irq", 0x02001118, 0x02001180, "arm9_callbacks"),
        NativeRegion("arm9_browser_page_and_settings_state", 0x02002088, 0x02002150, "arm9_browser_model"),
        NativeRegion("arm9_paused_viewport", 0x02002150, 0x020021cc, "arm9_viewport"),
        NativeRegion("arm9_browser_entries_and_cartridge_selection", 0x0200311c, 0x020034b0, "arm9_browser_model"),
        NativeRegion("arm9_viewport_coordinates", 0x02006a44, 0x02006b78, "arm9_viewport"),
        NativeRegion("arm9_format_hexadecimal", 0x0200db8c, 0x0200dc64, "arm9_callbacks"),
        NativeRegion("arm9_frame_without_h_interrupts", 0x02000868, 0x02000A2C, "arm9_machine"),
        NativeRegion("arm9_shared_audio_startup", 0x02000DAC, 0x02000F3C, "arm9_machine"),
        NativeRegion("arm9_cartridge_checksum", 0x02001530, 0x0200157C, "arm9_cartridge"),
        NativeRegion("arm9_cartridge_storage", 0x020015C0, 0x02002088, "arm9_cartridge"),
        NativeRegion("arm9_controller_polling", 0x020021CC, 0x020023DC, "arm9_machine"),
        NativeRegion("arm9_controller_inputs", 0x02003828, 0x02003A48, "arm9_machine"),
        NativeRegion("arm9_m68k_rom_long_read", 0x02003C58, 0x02003C88, "arm9_machine"),
        NativeRegion("arm9_m68k_bus_writes", 0x02003CF8, 0x02003D98, "arm9_machine"),
        NativeRegion("arm9_m68k_page_reads", 0x02003E38, 0x0200412C, "arm9_machine"),
        NativeRegion("arm9_z80_bus_status", 0x020043CC, 0x02004438, "arm9_machine"),
        NativeRegion("arm9_m68k_external_bus", 0x020045C8, 0x020046C0, "arm9_machine"),
        NativeRegion("arm9_z80_write_and_read_window", 0x02004908, 0x02004AA8, "arm9_machine"),
        NativeRegion("arm9_z80_memory_stubs", 0x02004C44, 0x02004C50, "arm9_machine"),
        NativeRegion("arm9_z80_reset", 0x02004DCC, 0x02004EF4, "arm9_machine"),
        NativeRegion("arm9_m68k_restore_pc", 0x02005164, 0x0200526C, "arm9_machine"),
        NativeRegion("arm9_m68k_reset_and_loop_detection", 0x020052EC, 0x02005AAC, "arm9_machine"),
        NativeRegion("arm9_ym2612_queue", 0x02005B94, 0x020061A8, "arm9_audio"),
        NativeRegion("arm9_audio_submit", 0x02006228, 0x020062C4, "arm9_audio"),
        NativeRegion("arm9_arm7_audio_reset", 0x02006308, 0x020063DC, "arm9_audio"),
        NativeRegion("arm9_arm7_audio_restart", 0x020063E8, 0x02006730, "arm9_audio"),
        NativeRegion("arm9_tile_and_sprite_rendering", 0x02006F2C, 0x020090E8, "arm9_renderer"),
        NativeRegion("arm9_vdp_interrupt_ack", 0x02009214, 0x02009274, "arm9_vdp_ports"),
        NativeRegion("arm9_vdp_port_reads", 0x020092E0, 0x02009570, "arm9_vdp_ports"),
        NativeRegion("arm9_vdp_registers", 0x02009614, 0x02009CB0, "arm9_vdp_ports"),
        NativeRegion("arm9_vdp_dma_and_port_writes", 0x02009CF0, 0x0200B284, "arm9_vdp_ports"),
        NativeRegion("arm9_lzss_encode_stream", 0x0200C87C, 0x0200CB78, "arm9_codec"),
        NativeRegion("arm9_lzss_file_io", 0x0200CDA4, 0x0200D03C, "arm9_codec"),
        NativeRegion("arm9_savestate_io", 0x0200D13C, 0x0200D8C4, "arm9_cartridge"),
        NativeRegion("arm9_z80_opcode_bridges", 0x0200DF20, 0x0200DF50, "arm9_machine"),
        NativeRegion("arm9_vdp", 0x0200B438, 0x0200C4A8),
        NativeRegion("arm9_z80", 0x0200DF50, 0x020153F0),
        NativeRegion("arm9_m68k", 0x02016A70, 0x02032C28),
        ARM9_ITCM,
    ),
}


def assemble_native(work, prefix, cpu, regions=None):
    assembler = tool(prefix, "as")
    processor = "arm946e-s" if cpu == 9 else "arm7tdmi"
    regions = NATIVE_REGIONS[cpu] if regions is None else regions
    objects = {region.object: region.source or region.name for region in regions}
    for target, name in objects.items():
        run(work, assembler, f"-mcpu={processor}", "-o", target, f"native/{name}.s")
    return list(objects)


def native_imports(work, cpu):
    bindings = work / "native" / f"arm{cpu}_imports.ld"
    return bindings.read_text(encoding="ascii") if bindings.is_file() else ""


def selector(region):
    return f'"{region.object}"({region.section})'
