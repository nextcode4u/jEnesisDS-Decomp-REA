#!/usr/bin/env python3
"""Generate the release's operand-based 68000 opcode slots from decoded addressing modes."""

import argparse
import csv
from itertools import groupby
from pathlib import Path
import re


OUTPUT_NAME = "m68k_operand_dispatch.c"
OPCODE_INDEX = Path(__file__).resolve().parents[1] / "decompiled/arm9/functions.tsv"
SHARED_HANDLER = "m68k_shared_opcode_decode_020329a0"
MOVE_CLASSES = ((1, "move_byte"), (2, "move_long"), (3, "move_word"))
ALU_CLASSES = ((8, "or_divide"), (9, "subtract"), (11, "compare_xor"),
               (12, "and_multiply"), (13, "add"))
MISC_CLASSES = ((0, "immediate_bit"), (4, "miscellaneous"),
                (5, "quick_conditional"), (14, "shift_rotate"))
OPERAND_CLASSES = MOVE_CLASSES + ALU_CLASSES + MISC_CLASSES
MISC_LINES = {line for line, _ in MISC_CLASSES}
MOVE_LINES = {line for line, _ in MOVE_CLASSES}
OR_ADDRESS_REGISTER = "m68k_sbcd"
OR_REGISTER_DESTINATION = "m68k_sbcd_byte"


def address_mode(mode, register, *, byte, source):
    if mode < 7:
        # The emulator sometimes selects a separate A7 handler for byte
        # postincrement and predecrement. Other register numbers are generic.
        return (mode, 7 if byte and mode in (3, 4) and register == 7 else None)
    if register <= (4 if source else 1):
        return (mode, register)
    return (-1, None)


def move_form(opcode):
    size = opcode >> 12
    source = address_mode(opcode >> 3 & 7, opcode & 7, byte=size == 1, source=True)
    destination = address_mode(opcode >> 6 & 7, opcode >> 9 & 7, byte=size == 1, source=False)
    return size, source, destination


def alu_forms(opcode):
    line = opcode >> 12
    opmode, mode, register = opcode >> 6 & 7, opcode >> 3 & 7, opcode & 7
    # Register seven can have a dedicated stack-pointer entry for the low
    # effective address or the high register operand of predecrement forms.
    low = register if mode == 7 or (mode in (1, 3, 4) and register == 7) else None
    high_is_a7 = (opcode >> 9 & 7) == 7
    yield line, opmode, mode, low, high_is_a7
    yield line, opmode, mode, low, False
    if low == 7 and mode in (1, 3, 4):
        yield line, opmode, mode, None, high_is_a7
        yield line, opmode, mode, None, False


def miscellaneous_form(opcode):
    line = opcode >> 12
    high, opmode = opcode >> 9 & 7, opcode >> 6 & 7
    mode, register = opcode >> 3 & 7, opcode & 7
    if line == 0 and high == 7 and opmode < 4:
        # The release aliases the 0x0e00 immediate group to 0x0800.
        high = 4
    if line == 4:
        if opcode & 0xfff0 == 0x4e40:
            mode = 0  # TRAP vectors share one dispatch entry.
        elif opcode == 0x4e74 or opcode & 0xfff8 == 0x4e78:
            return miscellaneous_form(0x4e60 if opcode == 0x4e74 else 0x4e68)
        if opmode == 6:
            opmode = 4  # Both CHK encodings select the word handler.
    if line == 5:
        if mode != 1 and opmode == 7:
            opmode = 3  # Scc shares the same entry for either condition group.
        elif mode == 1 and opmode not in (3, 7):
            opmode &= 4  # ADDQ/SUBQ share the address-register widths.
    if line == 14 and opmode in (3, 7):
        high &= 3  # Memory shifts ignore the high operation bit in 0.7.4.

    high_is_register = (
        line in (0, 4) and opmode >= 4
        or line == 5 and not (opmode in (3, 7) and mode == 1)
        or line == 14 and opmode not in (3, 7)
    )
    if high_is_register:
        high = 7 if high == 7 else None
    if line == 14 and opmode not in (3, 7):
        register = None
    elif (mode != 7 and not (mode in (1, 3, 4) and register == 7)
          and opcode & 0xfff8 not in (0x4e70, 0x51c8)):
        # The 0x4e70 system instructions and DBF have register-specific slots.
        register = None
    return line, high, opmode, mode, register


def miscellaneous_forms(opcode):
    form = miscellaneous_form(opcode)
    yield form
    line, high, opmode, mode, register = form
    if high == 7:
        yield line, None, opmode, mode, register
    if register == 7 and mode in (1, 3, 4):
        yield line, high, opmode, mode, None
        if high == 7:
            yield line, None, opmode, mode, None


def read_handler_index():
    """Read each known handler's representative opcode and its link address."""
    move = {}
    alu = {}
    miscellaneous = {}
    addresses = {}
    with OPCODE_INDEX.open(encoding="utf-8", newline="") as table:
        for row in csv.DictReader(table, delimiter="\t"):
            symbol = row["symbol"]
            address = int(row["address"], 16)
            if symbol == SHARED_HANDLER:
                addresses[symbol] = address
                continue
            _, _, examples = row["description"].partition("Example opcode words")
            for word in re.findall(r"0x[01234589BbCcDdEe][0-9a-fA-F]{3}\b", examples):
                opcode = int(word, 16)
                if opcode >> 12 in MOVE_LINES:
                    table, form = move, move_form(opcode)
                elif opcode >> 12 in MISC_LINES:
                    table, form = miscellaneous, miscellaneous_form(opcode)
                else:
                    table, form = alu, next(alu_forms(opcode))
                if form in table and table[form] != symbol:
                    raise ValueError(f"Opcode {word} has conflicting handler names")
                table[form] = symbol
                addresses[symbol] = address
    if len(move) != 312 or SHARED_HANDLER not in addresses:
        raise ValueError("Expected the 0.7.4 operand handler index")
    return move, alu, miscellaneous, addresses


def select_handler(opcode, move, alu, miscellaneous):
    if opcode >> 12 in MOVE_LINES:
        form = move_form(opcode)
        if form in move:
            return move[form]
        size, source, destination = form
        ordinary_source = (source[0], None) if source in ((3, 7), (4, 7)) else source
        ordinary_destination = (destination[0], None) if destination in ((3, 7), (4, 7)) else destination
        return move.get((size, ordinary_source, ordinary_destination), SHARED_HANDLER)

    if opcode >> 12 in MISC_LINES:
        return next((miscellaneous[form] for form in miscellaneous_forms(opcode)
                     if form in miscellaneous), SHARED_HANDLER)

    for form in alu_forms(opcode):
        if form in alu:
            return alu[form]
    if opcode >> 12 == 8:
        mode, opmode = opcode >> 3 & 7, opcode >> 6 & 7
        if mode == 1 and opmode in (1, 2, 4, 5, 6):
            return OR_ADDRESS_REGISTER
        if mode == 0 and opmode in (5, 6):
            return OR_REGISTER_DESTINATION
    return SHARED_HANDLER


def write_source(output):
    move, alu, miscellaneous, addresses = read_handler_index()
    with output.open("w", encoding="ascii", newline="\n") as source:
        source.write("/* Generated by generate_m68k_operand_dispatch.py. */\n")
        source.write("typedef void (*M68kOpcodeEntry)(void);\n\n")
        for symbol in sorted(addresses):
            source.write(f"extern void {symbol}(void);\n")
        for line, name in OPERAND_CLASSES:
            source.write(
                f"\nconst M68kOpcodeEntry m68k_{name}_dispatch[4096]\n"
                f'    __attribute__((section(".rodata.m68k_{name}"))) = {{\n'
            )
            slots = (select_handler(line << 12 | index, move, alu, miscellaneous) for index in range(4096))
            first = 0
            for symbol, group in groupby(slots):
                last = first + sum(1 for _ in group) - 1
                indices = f"{first:#05x}" if first == last else f"{first:#05x} ... {last:#05x}"
                source.write(f"    [{indices}] = {symbol},\n")
                first = last + 1
            source.write("};\n")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("output", type=Path)
    write_source(parser.parse_args().output)
