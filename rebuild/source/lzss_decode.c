/* Stream decoder for the ARM9 LZSS format. */
#include "lzss.h"

void decode_lzss_stream(void)
{
    int i;
    unsigned ring_position = WINDOW_SIZE - MAX_MATCH;
    unsigned flags = 0;

    for (i = 0; i < WINDOW_SIZE - MAX_MATCH; ++i)
        lzss_ring_buffer[i] = ' ';

    for (;;) {
        int byte, offset_low, offset_and_length, index, last_match_index;
        unsigned match_position;

        /* Bit 8 tracks whether a selector byte still has unused bits. */
        flags >>= 1;
        if (!(flags & 0x100)) {
            byte = read_bounded_stream_byte(lzss_input_stream);
            if (byte == -1)
                return;
            flags = byte | 0xff00;
        }
        if (flags & 1) {
            byte = read_bounded_stream_byte(lzss_input_stream);
            if (byte == -1)
                return;
            write_bounded_stream_byte(byte, lzss_output_stream);
            lzss_ring_buffer[ring_position] = byte;
            ring_position = (ring_position + 1) & WINDOW_MASK;
        } else {
            offset_low = read_bounded_stream_byte(lzss_input_stream);
            if (offset_low == -1)
                return;
            offset_and_length = read_bounded_stream_byte(lzss_input_stream);
            if (offset_and_length == -1)
                return;
            match_position = offset_low | ((offset_and_length & 0xf0) << 4);
            last_match_index = (offset_and_length & 0xf) + 2;
            index = 0;
            do {
                unsigned char value = lzss_ring_buffer[(match_position + index) & WINDOW_MASK];
                write_bounded_stream_byte(value, lzss_output_stream);
                ++index;
                lzss_ring_buffer[ring_position] = value;
                ring_position = (ring_position + 1) & WINDOW_MASK;
            } while (index <= last_match_index);
        }
    }
}
