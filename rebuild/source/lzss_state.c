/* Storage for a standalone build of the recovered codec. */
#include "lzss.h"

unsigned char lzss_ring_buffer[WINDOW_SIZE + MAX_MATCH - 1];
BoundedStream lzss_input, lzss_output;
BoundedStream *lzss_input_stream, *lzss_output_stream;
int lzss_match_position, lzss_match_length;
unsigned lzss_bytes_read, lzss_bytes_written;
int lzss_parent[WINDOW_SIZE + 1];
int lzss_left_child[WINDOW_SIZE + 1];
int lzss_right_child[WINDOW_SIZE + 1 + ALPHABET_SIZE];

const char binary_read_mode[] = "rb";
const char binary_write_mode[] = "wb";
