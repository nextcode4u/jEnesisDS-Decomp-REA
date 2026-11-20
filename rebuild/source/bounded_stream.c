/* Bounded byte streams used by the ARM9 LZSS encoder and decoder. */
#include "lzss.h"

int read_bounded_stream_byte(BoundedStream *stream)
{
    int byte = -1;
    unsigned position = stream->position;

    if (position < stream->capacity) {
        stream->position = position + 1;
        byte = *stream->cursor++;
    }
    return byte;
}

void write_bounded_stream_byte(unsigned char byte, BoundedStream *stream)
{
    unsigned position = stream->position;

    if (position < stream->capacity) {
        stream->position = position + 1;
        *stream->cursor++ = byte;
    }
}
