"""Assembler inputs for the recovered native CPU and audio code."""
from dataclasses import dataclass

from r20 import run, tool


@dataclass(frozen=True)
class NativeRegion:
    name: str
    start: int
    end: int
    rom_address: int

    @property
    def section(self):
        return f".native.{self.name}"

    @property
    def object(self):
        return f"{self.name}.o"


ARM9_ITCM = NativeRegion("arm9_itcm", 0x01000000, 0x010056E0, 0x020936F0)
NATIVE_REGIONS = {
    7: (
        NativeRegion("arm7_ym2612_operators", 0x037F8A88, 0x037F9394, 0x037F8A88),
        NativeRegion("arm7_ym2612_mixer", 0x037F93E8, 0x037FBC10, 0x037F93E8),
        NativeRegion("arm7_ym2612", 0x037FC590, 0x03800E50, 0x037FC590),
    ),
    9: (
        NativeRegion("arm9_vdp", 0x0200B438, 0x0200C4A8, 0x0200B438),
        NativeRegion("arm9_z80", 0x0200DF50, 0x020153F0, 0x0200DF50),
        NativeRegion("arm9_m68k", 0x02016A70, 0x02032C28, 0x02016A70),
        ARM9_ITCM,
    ),
}


def assemble_native(work, prefix, cpu):
    assembler = tool(prefix, "as")
    processor = "arm946e-s" if cpu == 9 else "arm7tdmi"
    for region in NATIVE_REGIONS[cpu]:
        run(work, assembler, f"-mcpu={processor}", "-o", region.object, f"native/{region.name}.s")
    return [region.object for region in NATIVE_REGIONS[cpu]]


def native_imports(work, cpu):
    bindings = work / "native" / f"arm{cpu}_imports.ld"
    return bindings.read_text(encoding="ascii") if bindings.is_file() else ""


def selector(region):
    return f'"{region.object}"({region.section})'
