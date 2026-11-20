"""Build the identified libnds source revisions without modifying either checkout."""
import io
import shutil
import subprocess
import tarfile
from pathlib import Path

from r20 import compile_c, run, tool


LIBNDS_APR_2006 = "79e4f563e2ed88f404b72e0d8a4f8b079b2abe2a"
LIBNDS_ITCM_APR_2006 = "544a72e71ac59ef7a593d72096a8d62d12d464dd"
LIBNDS_OCT_2007 = "8ea06b95fe716cfceff0bce34232217a61e0e6c9"


def snapshot(repository, revision, directory, paths):
    directory.mkdir()
    archive = subprocess.check_output(["git", "-C", str(repository), "archive", revision, *paths])
    with tarfile.open(fileobj=io.BytesIO(archive)) as tree:
        tree.extractall(directory, filter="data")


def compile_sdk_keys(compiler, sdk):
    header = sdk / "include/nds/ipc.h"
    contents = header.read_bytes()
    buttons = b"\tuint16 buttons;"
    if contents.count(buttons) != 1:
        raise ValueError("Expected one buttons field in the October 2007 IPC header")
    header.write_bytes(contents.replace(buttons, b"\tuint32 reserved_before_buttons;\n" + buttons))
    return compile_c([*compiler, "-ffunction-sections"], sdk,
                     Path("source/arm9/keys.c"), 9, "-O2", "-mthumb")


def assemble_sdk_irq(compiler, sdk, cpu=9):
    processor = "arm946e-s" if cpu == 9 else "arm7tdmi"
    run(sdk, *compiler, f"-DARM{cpu}", f"-mcpu={processor}", "-x", "assembler-with-cpp",
        "-c", "source/common/interruptDispatcher.s", "-o", "intr-main.o")
    return sdk / "intr-main.o"


def stage_sdk_bios(work, compiler, repository, cpu):
    sdk = work / f"arm{cpu}-bios"
    snapshot(repository, LIBNDS_OCT_2007, sdk, ("source/common/biosCalls.s",))
    processor = "arm946e-s" if cpu == 9 else "arm7tdmi"
    name = f"arm{cpu}-bios.o"
    # ARM9 reset calls the original ARM veneer instead of the Thumb entry.
    arm9_bios_exports = ["-DswiWaitForVBlank=arm9_thumb_swiWaitForVBlank"] if cpu == 9 else []
    run(sdk, *compiler, f"-DARM{cpu}", f"-mcpu={processor}", *arm9_bios_exports,
        "-x", "assembler-with-cpp", "-c", "source/common/biosCalls.s", "-o", name)
    shutil.copyfile(sdk / name, work / name)
    return name


def stage_sdk_for_reference(compiler, work, repository):
    keys = work / "libnds-keys"
    irq = work / "libnds-irq"
    snapshot(repository, LIBNDS_OCT_2007, keys, ("include", "source/arm9/keys.c"))
    snapshot(repository, LIBNDS_ITCM_APR_2006, irq, ("source/common/interruptDispatcher.s",))
    for obj in (compile_sdk_keys(compiler, keys), assemble_sdk_irq(compiler, irq)):
        shutil.copyfile(obj, work / obj.name)
        yield obj.name


def irq_setup_sections(cpu):
    setup = f"irq-setup-arm{cpu}.o"
    names = ("irqSet", "irqInit", "irqClear", "irqInitHandler")
    return " ".join([f"irq-dummy-arm{cpu}.o(.text.irqDummy)",
                     *(f"{setup}(.text.{name})" for name in names),
                     f"irq-enable-arm{cpu}.o(.text.irqEnable)", f"{setup}(.text.irqDisable)"])


def stage_sdk_irq_setup(work, compiler, r20, repository, cpu):
    sdk = work / f"irq-setup-arm{cpu}"
    source = Path("source/common/interrupts.c")
    snapshot(repository, LIBNDS_OCT_2007, sdk, ("include", source))
    prefix = r20 / "bin/arm-eabi-"
    objcopy = tool(prefix, "objcopy")
    opts = [*compiler, "-ffunction-sections"]
    setup = compile_c(opts, sdk, source, cpu, "-O2", "-mthumb")
    enable = compile_c(opts, sdk, source, cpu, "-Os", "-mthumb")
    setup_name, enable_name = f"irq-setup-arm{cpu}.o", f"irq-enable-arm{cpu}.o"
    run(sdk, objcopy, "--remove-section=.text.irqEnable", "--weaken-symbol=irqDummy",
        "--redefine-sym", f"irqSet=arm{cpu}_thumb_irqSet",
        "--redefine-sym", f"irqDisable=arm{cpu}_thumb_irqDisable",
        setup.name, setup_name)
    run(sdk, objcopy, "--only-section=.text.irqEnable",
        "--redefine-sym", f"irqEnable=arm{cpu}_thumb_irqEnable",
        enable.name, enable_name)
    for output in (setup_name, enable_name):
        shutil.copyfile(sdk / output, work / output)
    dummy_name = f"irq-dummy-arm{cpu}.o"
    shutil.copyfile(Path(__file__).with_name("irq_dummy.s"), sdk / "irq_dummy.s")
    processor = "arm946e-s" if cpu == 9 else "arm7tdmi"
    run(sdk, tool(prefix, "as"), f"-mcpu={processor}", "-o", dummy_name, "irq_dummy.s")
    shutil.copyfile(sdk / dummy_name, work / dummy_name)
    return setup_name, enable_name, dummy_name
