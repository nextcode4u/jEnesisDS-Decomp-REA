"""Build the identified libnds source revisions without modifying either checkout."""
import io
import shutil
import subprocess
import tarfile
from pathlib import Path

from r20 import compile_c, run


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


def assemble_sdk_irq(compiler, sdk):
    run(sdk, *compiler, "-DARM9", "-mcpu=arm946e-s", "-x", "assembler-with-cpp",
        "-c", "source/common/interruptDispatcher.s", "-o", "intr-main.o")
    return sdk / "intr-main.o"


def stage_sdk_for_reference(compiler, work, repository):
    keys = work / "libnds-keys"
    irq = work / "libnds-irq"
    snapshot(repository, LIBNDS_OCT_2007, keys, ("include", "source/arm9/keys.c"))
    snapshot(repository, LIBNDS_ITCM_APR_2006, irq, ("source/common/interruptDispatcher.s",))
    for obj in (compile_sdk_keys(compiler, keys), assemble_sdk_irq(compiler, irq)):
        shutil.copyfile(obj, work / obj.name)
        yield obj.name
