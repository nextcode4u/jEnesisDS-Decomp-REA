/* Recovered native routines in release link order. */
.syntax unified
.arm

.section .native.arm9_lzss_encode_stream, "ax", %progbits
.include "native/arm9/codec/lzss_encode_stream.inc"

.section .native.arm9_lzss_file_io, "ax", %progbits
.include "native/arm9/codec/lzss_file_io.inc"
