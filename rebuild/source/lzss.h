#ifndef JENESIS_LZSS_H
#define JENESIS_LZSS_H

enum { WINDOW_SIZE = 4096, MAX_MATCH = 18, WINDOW_MASK = WINDOW_SIZE - 1 };

typedef struct {
    unsigned char *cursor;
    unsigned char *start;
    unsigned capacity;
    unsigned position;
} BoundedStream;

extern unsigned char lzss_ring_buffer[WINDOW_SIZE + MAX_MATCH - 1];
extern BoundedStream lzss_input, lzss_output;
extern BoundedStream *lzss_input_stream, *lzss_output_stream;
extern int lzss_match_position, lzss_match_length;
extern unsigned lzss_bytes_read, lzss_bytes_written;

int read_bounded_stream_byte(BoundedStream *stream);
void write_bounded_stream_byte(unsigned char byte, BoundedStream *stream);

void initialize_lzss_match_trees(void);
void insert_lzss_match_tree_node(int node);
void remove_lzss_match_tree_node(int node);
void encode_lzss_stream(void);
void decode_lzss_stream(void);

#endif
