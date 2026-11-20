#ifndef JENESIS_LZSS_PREFIX_H
#define JENESIS_LZSS_PREFIX_H

#include <string.h>
#include "lzss.h"

static inline void copy_prefix(unsigned char *output, const unsigned char *input, unsigned prefix_length)
{
    BoundedStream *input_stream, *output_stream;

    memcpy(output, input, prefix_length);
    input_stream = lzss_input_stream;
    output_stream = lzss_output_stream;
    input_stream->cursor += prefix_length;
    input_stream->position += prefix_length;
    output_stream->cursor += prefix_length;
    output_stream->position += prefix_length;
}

#endif
