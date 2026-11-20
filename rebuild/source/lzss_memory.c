/* Decode an LZSS buffer with a literal prefix. */
#include "lzss_prefix.h"

void decode_lzss_from_memory_with_prefix(unsigned char *input, unsigned char *output,
                                        unsigned input_size, unsigned output_capacity,
                                        unsigned prefix_length)
{
    int empty;

    if (!(input && output))
        return;
    empty = !input_size || !output_capacity;
    if (empty)
        return;
    if (prefix_length >= input_size)
        return;

    lzss_input_stream = &lzss_input;
    lzss_output_stream = &lzss_output;
    lzss_input.capacity = input_size;
    if (input_size > output_capacity)
        return;
    lzss_input.cursor = input;
    lzss_input.start = input;
    lzss_output.cursor = output;
    lzss_input.position = empty;
    lzss_output.capacity = output_capacity;
    lzss_output.start = output;
    lzss_output.position = empty;
    if (prefix_length)
        copy_prefix(output, input, prefix_length);
    decode_lzss_stream();
}
