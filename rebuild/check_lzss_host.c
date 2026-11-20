/* Tests the recovered codec with its own storage and the host C library. */
#include <stdio.h>
#include <string.h>
#include "lzss.h"

static int check_literal(void)
{
    unsigned char input[] = { 'A' };
    unsigned char output[2];
    const unsigned char expected[] = { 1, 'A' };
    BoundedStream source = { input, input, sizeof(input), 0 };
    BoundedStream destination = { output, output, sizeof(output), 0 };

    lzss_input_stream = &source;
    lzss_output_stream = &destination;
    encode_lzss_stream();
    return destination.position == sizeof(expected) &&
           memcmp(output, expected, sizeof(expected)) == 0;
}

static int check_overlapping_match(void)
{
    /* One literal at ring offset 0xfee, then an 18-byte back-reference to it. */
    unsigned char input[] = { 'D', 'S', 1, 'A', 0xee, 0xff };
    unsigned char output[21];
    unsigned i;

    decode_lzss_from_memory_with_prefix(input, output, sizeof(input), sizeof(output), 2);
    if (lzss_output.position != sizeof(output) || memcmp(output, "DS", 2) != 0)
        return 0;
    for (i = 2; i < sizeof(output); ++i)
        if (output[i] != 'A')
            return 0;
    return 1;
}

static int check_file_round_trip(const char *path)
{
    unsigned char input[8192], work[8192], output[8192];
    unsigned i;

    memcpy(input, "HEAD", 4);
    for (i = 4; i < sizeof(input); ++i)
        input[i] = (unsigned char)(i % 11);
    if (write_file_and_encode_lzss_with_prefix(input, work, path, sizeof(input), 4) != 0)
        return 0;
    if (load_file_and_decode_lzss_with_prefix(work, output, path, sizeof(output), 4) != -1)
        return 0;
    return lzss_output.position == sizeof(input) && memcmp(input, output, sizeof(input)) == 0;
}

int main(int argc, char **argv)
{
    if (argc != 2 || !check_literal() || !check_overlapping_match() ||
        !check_file_round_trip(argv[1])) {
        fputs("Standalone LZSS check failed\n", stderr);
        return 1;
    }
    puts("Standalone LZSS literal, overlapping match, and file round trip passed.");
    return 0;
}
