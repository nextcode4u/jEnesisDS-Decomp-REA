"""Generate the logarithmic sine and attenuation values used by the FM mixer."""

from math import log2, pi, sin
from pathlib import Path
import sys


with Path(sys.argv[1]).open("w", encoding="ascii") as output:
    output.write('#include "fm.h"\n\n')
    magnitude = [(((int(2 ** (16 - (i + 1) / 256)) >> 4) + 1) >> 1) << 2
                 for i in range(256)]
    tables = [
        ("uint16_t", "fm_log_sine",
         [4 * round(-256 * log2(abs(sin((i + 0.5) * pi / 512)))) + 2 * (i >= 512)
          for i in range(1024)]),
        ("int16_t", "fm_levels",
         [sign * (level >> shift) for shift in range(13)
          for level in magnitude for sign in (1, -1)]),
    ]
    for c_type, name, values in tables:
        output.write(f"const {c_type} {name}[{len(values)}] = {{\n")
        for index in range(0, len(values), 12):
            output.write("    " + ", ".join(str(value) for value in values[index:index + 12]) + ",\n")
        output.write("};\n")
