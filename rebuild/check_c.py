#!/usr/bin/env python3
"""Build recovered C with devkitARM r20 and optionally compare ROM bytes."""
import argparse
from hashlib import sha256
import shutil
from pathlib import Path
import struct
import subprocess
from tempfile import TemporaryDirectory

from r20 import EXPECTED_ROM_SHA256, check_match, compile_c, compiler_command, run, tool
from recovered import (ARM7_REGIONS, DLDI_SOURCE, RECOVERED_REGIONS, SOURCE,
                       arm9_region_layout, compile_arm9_source)
from sdk_source import (LIBNDS_APR_2006, LIBNDS_ITCM_APR_2006, LIBNDS_OCT_2007, assemble_sdk_irq,
                        compile_sdk_keys, snapshot)


REGIONS_BY_CPU = {9: RECOVERED_REGIONS, 7: ARM7_REGIONS}

NDSLIB_2005 = "eafb2703db6e2b6b414a2fa15107212522666bff"

TOUCH_FUNCTIONS = {
    "touchRead": 0x03801244,
    "readTouchValue": 0x03801310,
    "touchReadXY": 0x03801360,
    "touchReadTemperature": 0x0380152C,
}
RTC_FUNCTIONS = {
    "BCDToInteger": 0x03801060,
    "integerToBCD": 0x0380108C,
    "rtcTransaction": 0x038010C8,
    "rtcReset": 0x03801200,
}
CARD_FUNCTIONS = {
    "cardWriteCommand": 0x0207FDA8,
    "cardPolledTransfer": 0x0207FDCC,
    "cardStartTransfer": 0x0207FE0C,
}
KEY_FUNCTIONS = {
    "keysHeld": 0x0207FB70,
    "keysDown": 0x0207FB7C,
    "scanKeys": 0x0207FB90,
}
IRQ_FUNCTIONS = {
    "irqSet": 0x02080098,
    "irqInit": 0x02080100,
    "irqClear": 0x0208014C,
    "irqInitHandler": 0x020801CC,
    "irqEnable": 0x020801FC,
    "irqDisable": 0x0208024C,
}
ARM7_IRQ_FUNCTIONS = {
    "irqSet": 0x03801564,
    "irqInit": 0x038015D0,
    "irqClear": 0x03801620,
    "irqInitHandler": 0x038016A4,
    "irqEnable": 0x038016D8,
}


def rom_images(path, *, verify_release=True):
    rom = path.read_bytes()
    if verify_release and sha256(rom).hexdigest() != EXPECTED_ROM_SHA256:
        raise ValueError("Expected the original jEnesisDS 0.7.4 ROM")
    images = {}
    for cpu, header in ((9, 0x20), (7, 0x30)):
        offset, _, base, size = struct.unpack_from("<4I", rom, header)
        images[cpu] = base, rom[offset:offset + size]
    return images


def functions_in_object(path):
    """Read sized functions and their relocation-byte ranges from an ELF32 ARM object."""
    data = path.read_bytes()
    if data[:6] != b"\x7fELF\x01\x01" or struct.unpack_from("<HH", data, 16) != (1, 40):
        raise ValueError(f"Expected a little-endian ARM ELF32 object: {path}")
    section_offset, = struct.unpack_from("<I", data, 32)
    section_stride, section_count = struct.unpack_from("<HH", data, 46)
    sections = [struct.unpack_from("<10I", data, section_offset + idx * section_stride)
                for idx in range(section_count)]
    relocations = {}
    for header in sections:
        if header[1] in (4, 9):
            offsets = relocations.setdefault(header[7], [])
            for pos in range(header[4], header[4] + header[5], header[9]):
                offsets.append(struct.unpack_from("<I", data, pos)[0])
    for table in sections:
        if table[1] != 2:
            continue
        strings = sections[table[6]][4]
        for pos in range(table[4], table[4] + table[5], table[9]):
            name, value, size, info, _, section = struct.unpack_from("<IIIBBH", data, pos)
            if info & 15 != 2 or not size or not 0 < section < section_count:
                continue
            label = data[strings + name:data.index(0, strings + name)].decode("ascii")
            start = value & ~1
            code_offset = sections[section][4] + start
            masked = {offset + byte - start for offset in relocations.get(section, ())
                      for byte in range(4) if start <= offset + byte < start + size}
            yield label, data[code_offset:code_offset + size], masked


def compare(object_path, symbols, image):
    base, memory = image
    functions = {name: (code, masked) for name, code, masked in functions_in_object(object_path)}
    exact = set()
    for name, address in symbols.items():
        if name not in functions:
            print(f"  {address:#010x} {name:25} absent")
            continue
        code, masked = functions[name]
        start = address - base
        expected = memory[start:start + len(code)]
        if start < 0 or len(expected) != len(code):
            raise ValueError(f"{name} at {address:#x} does not fit in its processor image")
        checked = len(code) - len(masked)
        matching = sum(actual == expected[i] for i, actual in enumerate(code) if i not in masked)
        if matching == checked and checked:
            exact.add(name)
        print(f"  {address:#010x} {name:25} {matching}/{checked} bytes"
              f" ({len(masked)} relocation bytes skipped)")
    return exact


def recovered_artifacts(directory, cpu):
    for label, _, _, start, end, _ in REGIONS_BY_CPU[cpu]:
        stem = f"arm{cpu}-{start:08x}"
        yield label, start, end, directory / f"{stem}.elf", directory / f"{stem}.bin"


def build_recovered_regions(compiler, prefix, work, cpu):
    linker, objcopy = (tool(prefix, name) for name in ("ld", "objcopy"))
    for region, artifact in zip(REGIONS_BY_CPU[cpu], recovered_artifacts(work, cpu)):
        _, filename, entry, _, _, symbols = region
        label, start, end, elf, binary = artifact
        if cpu == 9:
            obj = compile_arm9_source(compiler, work, filename)
        else:
            obj = compile_c(compiler, work, Path(filename), cpu, "-O2", "-marm")
        definitions = [f"--defsym={name}={address:#x}" for name, address in symbols.items()]
        section = ".text" if entry else ".rodata"
        entry_option = ["-e", entry] if entry else ["-e", f"{start:#x}"]
        if filename == DLDI_SOURCE:
            section = ".dldi"
            script = work / "dldi.ld"
            layout = arm9_region_layout(obj.name, filename, end - start)
            script.write_text(f"SECTIONS {{ {section} {start:#x} : {{ {layout} }} }}\n")
            position = ["-T", script.name]
        else:
            position = [f"--section-start={section}={start:#x}"]
        run(work, linker, *position, *entry_option, *definitions, "-o", elf.name, obj.name)
        run(work, objcopy, "-O", "binary", f"--only-section={section}", elf.name, binary.name)
        if binary.stat().st_size != end - start:
            raise ValueError(f"{label} must occupy {end - start} bytes, built {binary.stat().st_size}")


def compare_recovered_regions(images, directory):
    for cpu in REGIONS_BY_CPU:
        base, memory = images[cpu]
        print(f"Reconstructed C / ARM{cpu} -O2")
        for label, start, end, _, binary in recovered_artifacts(directory, cpu):
            if not base <= start < end <= base + len(memory):
                raise ValueError(f"{label} lies outside the ARM{cpu} image")
            expected = memory[start - base:end - base]
            check_match(expected, binary.read_bytes(), label)
            print(f"  {start:#010x}–{end - 1:#010x} {label}"
                  f" {len(expected)}/{len(expected)} bytes (including linked addresses)")


def check_sdk_keys(compiler, linker, objcopy, sdk, arm9):
    obj = compile_sdk_keys(compiler, sdk)
    shutil.copyfile(SOURCE / "sdk_keys.ld", sdk / "sdk_keys.ld")
    run(sdk, linker, "-T", "sdk_keys.ld", "-o", "keys.elf", obj.name)
    base, memory = arm9
    for section, address, length in ((".text", 0x0207FB70, 180), (".data", 0x0208F390, 3)):
        run(sdk, objcopy, "-O", "binary", f"--only-section={section}", "keys.elf", "keys.bin")
        start = address - base
        check_match(memory[start:start + length], (sdk / "keys.bin").read_bytes(),
                    f"linked libnds key routines {section}")
    print("  0x0207fb70 keysHeld, keysDown, scanKeys: 180/180 linked code bytes and 3/3 data bytes")


def check_sdk_irq(compiler, linker, objcopy, sdk, arm9):
    obj = assemble_sdk_irq(compiler, sdk)
    run(sdk, linker, "--section-start=.itcm=0x010057a8", "-e", "IntrMain",
        "--defsym=irqTable=0x010056e0", "--defsym=__irq_flags=0x0b003ff8",
        "-o", "intr-main.elf", obj.name)
    run(sdk, objcopy, "-O", "binary", "--only-section=.itcm", "intr-main.elf", "intr-main.bin")
    base, memory = arm9
    start = 0x020936F0 - base + 0x57A8
    check_match(memory[start:start + 216], (sdk / "intr-main.bin").read_bytes(), "linked libnds IntrMain")
    print("  0x010057a8 IntrMain: 216/216 linked ITCM bytes")


def check_sdk(compiler, prefix, work, images, libnds, ndslib):
    sdk_2005 = work / "ndslib-2005"
    sdk_2006 = work / "libnds-2006"
    sdk_2007 = work / "libnds-2007"
    sdk_irq = work / "libnds-itcm-apr-2006"
    for root, repository, revision, paths in (
        (sdk_2005, ndslib, NDSLIB_2005, ("include", "lib")),
        (sdk_2006, libnds, LIBNDS_APR_2006, ("include", "source")),
        (sdk_2007, libnds, LIBNDS_OCT_2007, ("include", "source")),
        (sdk_irq, libnds, LIBNDS_ITCM_APR_2006, ("source/common/interruptDispatcher.s",)),
    ):
        snapshot(repository, revision, root, paths)
    for root, path, cpu, opt, symbols, required in (
        (sdk_2005, "lib/ARM7/touch.c", 7, "-O2", TOUCH_FUNCTIONS, set()),
        (sdk_2005, "lib/ARM9/keys.c", 9, "-O2", KEY_FUNCTIONS, set()),
        (sdk_2005, "lib/common/interrupts.c", 9, "-O2", IRQ_FUNCTIONS, set()),
        (sdk_2006, "source/arm7/touch.c", 7, "-O2", TOUCH_FUNCTIONS, set(TOUCH_FUNCTIONS)),
        (sdk_2006, "source/arm7/clock.c", 7, "-O2", RTC_FUNCTIONS, set(RTC_FUNCTIONS)),
        (sdk_2006, "source/common/card.c", 9, "-O2", CARD_FUNCTIONS, set(CARD_FUNCTIONS)),
        (sdk_2007, "source/arm7/touch.c", 7, "-O2", TOUCH_FUNCTIONS, {"touchRead", "touchReadTemperature"}),
        (sdk_2007, "source/arm9/keys.c", 9, "-O2", KEY_FUNCTIONS, {"keysHeld", "keysDown"}),
        (sdk_2007, "source/common/interrupts.c", 7, "-O2", ARM7_IRQ_FUNCTIONS,
         set(ARM7_IRQ_FUNCTIONS) - {"irqEnable"}),
        (sdk_2007, "source/common/interrupts.c", 7, "-Os",
         {"irqEnable": ARM7_IRQ_FUNCTIONS["irqEnable"]}, {"irqEnable"}),
        (sdk_2007, "source/common/interrupts.c", 9, "-O2", IRQ_FUNCTIONS, set(IRQ_FUNCTIONS) - {"irqEnable"}),
        (sdk_2007, "source/common/interrupts.c", 9, "-Os", {"irqEnable": IRQ_FUNCTIONS["irqEnable"]}, {"irqEnable"}),
    ):
        print(f"{root.name} / {path} / ARM{cpu} {opt}")
        obj = compile_c(compiler, root, Path(path), cpu, opt, "-mthumb")
        exact = compare(obj, symbols, images[cpu])
        if not required <= exact:
            raise ValueError(f"Expected matches missing: {', '.join(sorted(required - exact))}")
    linker, objcopy = (tool(prefix, name) for name in ("ld", "objcopy"))
    print("libnds-2007 / ARM9 key routines with the jEnesisDS IPC field offset")
    check_sdk_keys(compiler, linker, objcopy, sdk_2007, images[9])
    print("libnds-itcm-apr-2006 / ARM9 IntrMain")
    check_sdk_irq(compiler, linker, objcopy, sdk_irq, images[9])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--r20-root", default="", help="Complete devkitARM r20 installation")
    parser.add_argument("--build-dir", type=Path, default=Path("build"))
    mode = parser.add_mutually_exclusive_group()
    mode.add_argument("--build-only", action="store_true",
                      help="Write recovered ELF and binary regions without a ROM input")
    mode.add_argument("--compare-only", action="store_true",
                      help="Compare previously built binary regions without compiling")
    parser.add_argument("--rom", type=Path, default=Path("input/jEnesisDS.nds"))
    parser.add_argument("--libnds-repo", type=Path)
    parser.add_argument("--ndslib-repo", type=Path)
    args = parser.parse_args()
    if not (args.r20_root or args.compare_only):
        parser.error("set R20_ROOT to the extracted devkitARM r20 directory")
    if (args.build_only or args.compare_only) and (args.libnds_repo or args.ndslib_repo):
        parser.error("SDK source comparisons require compiling and comparing in the same command")
    if bool(args.libnds_repo) != bool(args.ndslib_repo):
        parser.error("supply both SDK repositories for the SDK comparison")
    try:
        build = args.build_dir.resolve()
        output = build / "recovered-c"
        if args.compare_only:
            compare_recovered_regions(rom_images(args.rom), output)
            return
        r20 = Path(args.r20_root).expanduser().resolve()
        compiler = compiler_command(r20)
        prefix = r20 / "bin/arm-eabi-"
        build.mkdir(parents=True, exist_ok=True)
        with TemporaryDirectory(prefix="r20-c-", dir=build) as directory:
            work = Path(directory)
            shutil.copytree(SOURCE / "source", work, dirs_exist_ok=True)
            for cpu in REGIONS_BY_CPU:
                build_recovered_regions(compiler, prefix, work, cpu)
            if args.build_only:
                output.mkdir(exist_ok=True)
                for cpu in REGIONS_BY_CPU:
                    for _, _, _, elf, binary in recovered_artifacts(work, cpu):
                        shutil.copyfile(elf, output / elf.name)
                        shutil.copyfile(binary, output / binary.name)
                print(f"Built {sum(map(len, REGIONS_BY_CPU.values()))} recovered regions in {output}")
                return
            images = rom_images(args.rom)
            compare_recovered_regions(images, work)
            if args.libnds_repo:
                check_sdk(compiler, prefix, work, images, args.libnds_repo, args.ndslib_repo)
    except (OSError, ValueError, subprocess.CalledProcessError) as error:
        parser.exit(1, f"{error}\n")


if __name__ == "__main__":
    main()
