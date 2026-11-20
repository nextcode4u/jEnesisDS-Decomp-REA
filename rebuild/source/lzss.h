#ifndef JENESIS_LZSS_H
#define JENESIS_LZSS_H

enum { WINDOW_SIZE = 4096, MAX_MATCH = 18, WINDOW_MASK = WINDOW_SIZE - 1, ALPHABET_SIZE = 256 };

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
extern int lzss_parent[WINDOW_SIZE + 1];
extern int lzss_left_child[WINDOW_SIZE + 1];
extern int lzss_right_child[WINDOW_SIZE + 1 + ALPHABET_SIZE];

int read_bounded_stream_byte(BoundedStream *stream);
void write_bounded_stream_byte(unsigned char byte, BoundedStream *stream);

void initialize_lzss_match_trees(void);
void insert_lzss_match_tree_node(int node);
void remove_lzss_match_tree_node(int node);
void encode_lzss_stream(void);
int decode_lzss_stream(void);
void decode_lzss_from_memory_with_prefix(unsigned char *input, unsigned char *output,
                                        unsigned input_size, unsigned output_capacity,
                                        unsigned prefix_length);
int load_file_and_decode_lzss_with_prefix(unsigned char *input, unsigned char *output,
                                         const char *path, unsigned capacity,
                                         unsigned prefix_length);
int write_file_and_encode_lzss_with_prefix(unsigned char *input, unsigned char *output,
                                         const char *path, unsigned capacity,
                                         unsigned prefix_length);

#endif
