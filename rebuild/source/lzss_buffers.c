/* File entry points around the ARM9 LZSS streams. */
#include <stdint.h>
#include <stdio.h>
#include "lzss_prefix.h"

extern const char binary_read_mode[];
extern const char binary_write_mode[];

int load_file_and_decode_lzss_with_prefix(unsigned char *input, unsigned char *output,
                                         const char *path, unsigned capacity,
                                         unsigned prefix_length)
{
    FILE *file;
    BoundedStream *input_stream, *output_stream;
    size_t bytes_read;

    /* The original leaves the path argument in the return register on this path. */
    if (!output || !input || !capacity || !path || prefix_length >= capacity)
        return (int)(uintptr_t)path;

    lzss_input_stream = &lzss_input;
    lzss_output_stream = &lzss_output;
    file = fopen(path, binary_read_mode);
    if (!file)
        return 0;

    fseek(file, 0, SEEK_END);
    input_stream = lzss_input_stream;
    input_stream->capacity = ftell(file);
    fseek(file, 0, SEEK_SET);
    if (capacity < lzss_input_stream->capacity || lzss_input_stream->capacity < prefix_length)
        return fclose(file);

    bytes_read = fread(input, 1, capacity, file);
    /* The original uses the size from ftell even after a short read. */
    (void)bytes_read;
    fclose(file);
    output_stream = lzss_output_stream;
    input_stream = lzss_input_stream;
    output_stream->capacity = capacity;
    input_stream->start = input;
    input_stream->cursor = input;
    input_stream->position = 0;
    output_stream->cursor = output;
    output_stream->position = 0;
    output_stream->start = output;
    if (prefix_length)
        copy_prefix(output, input_stream->start, prefix_length);
    return decode_lzss_stream();
}

/* The file-writing counterpart at 0x0200cf28. */
int write_file_and_encode_lzss_with_prefix(unsigned char *input, unsigned char *output,
                                          const char *path, unsigned capacity,
                                          unsigned prefix_length)
{
    FILE *file;

    /* The original leaves the input argument in the return register on this path. */
    if (!output || !input || !capacity || !path || prefix_length >= capacity)
        return (int)(uintptr_t)input;

    lzss_output.position = 0;
    lzss_input.position = 0;
    lzss_output.capacity = capacity;
    lzss_input_stream = &lzss_input;
    lzss_output_stream = &lzss_output;
    lzss_input.cursor = input;
    lzss_input.start = input;
    lzss_input.capacity = capacity;
    lzss_output.cursor = output;
    lzss_output.start = output;
    if (prefix_length)
        copy_prefix(output, input, prefix_length);
    encode_lzss_stream();

    file = fopen(path, binary_write_mode);
    if (!file)
        return 0;
    fwrite(lzss_output_stream->start, 1, lzss_output_stream->position, file);
    return fclose(file);
}
