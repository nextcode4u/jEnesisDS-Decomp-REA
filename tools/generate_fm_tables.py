"""Generate the logarithmic sine and attenuation values used by the FM mixer."""

from math import log2, pi, sin
from pathlib import Path
import sys


with Path(sys.argv[1]).open("w", encoding="ascii") as output:
    output.write('#include "fm.h"\n\n')
    tables = {
        "fm_sine": [round(-256 * log2(sin((i + 0.5) * pi / 512))) for i in range(512)],
        "fm_exponent": [(((int(2 ** (16 - (i + 1) / 256)) >> 4) + 1) >> 1) << 2
                        for i in range(256)],
    }
    for name, values in tables.items():
        output.write(f"const uint16_t {name}[{len(values)}] = {{\n")
        for index in range(0, len(values), 12):
            output.write("    " + ", ".join(str(value) for value in values[index:index + 12]) + ",\n")
        output.write("};\n")
