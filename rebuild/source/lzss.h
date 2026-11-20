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

int read_bounded_stream_byte(BoundedStream *stream);
void write_bounded_stream_byte(unsigned char byte, BoundedStream *stream);

#endif
