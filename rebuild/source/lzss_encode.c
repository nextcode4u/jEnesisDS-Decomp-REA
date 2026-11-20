/* Stream encoder for the ARM9 LZSS format. */
#include "lzss.h"

enum { THRESHOLD = 2 };

void encode_lzss_stream(void)
{
    int i, byte, remaining, group_size, previous_match;
    unsigned lookahead_position, outgoing_position;
    unsigned char group[17], selector;

    initialize_lzss_match_trees();
    for (i = 0; i < WINDOW_SIZE - MAX_MATCH; ++i)
        lzss_ring_buffer[i] = ' ';
    for (remaining = 0; remaining < MAX_MATCH &&
         (byte = read_bounded_stream_byte(lzss_input_stream)) != -1; ++remaining)
        lzss_ring_buffer[WINDOW_SIZE - MAX_MATCH + remaining] = byte;
    lzss_bytes_read = remaining;
    if (!remaining)
        return;
    for (i = WINDOW_SIZE - MAX_MATCH - 1; i >= WINDOW_SIZE - 2 * MAX_MATCH; --i)
        insert_lzss_match_tree_node(i);

    /* Each group stores eight selector bits followed by their literals or matches. */
    group[0] = 0;
    group_size = 1;
    lookahead_position = WINDOW_SIZE - MAX_MATCH;
    outgoing_position = 0;
    insert_lzss_match_tree_node(lookahead_position);
    selector = 1;
    do {
        if (lzss_match_length > remaining)
            lzss_match_length = remaining;
        if (lzss_match_length <= THRESHOLD) {
            lzss_match_length = 1;
            group[0] |= selector;
            group[group_size++] = lzss_ring_buffer[lookahead_position];
        } else {
            group[group_size++] = lzss_match_position;
            group[group_size++] = ((lzss_match_position >> 4) & 0xf0) | (lzss_match_length - THRESHOLD - 1);
        }
        if ((selector <<= 1) == 0) {
            for (i = 0; i < group_size; ++i)
                write_bounded_stream_byte(group[i], lzss_output_stream);
            group[0] = 0;
            lzss_bytes_written += group_size;
            group_size = 1;
            selector = 1;
        }

        previous_match = lzss_match_length;
        for (i = 0; i < previous_match &&
             (byte = read_bounded_stream_byte(lzss_input_stream)) != -1; ++i) {
            remove_lzss_match_tree_node(outgoing_position);
            lzss_ring_buffer[outgoing_position] = byte;
            /* Mirror the start of the ring so matches can span the wrap. */
            if (outgoing_position < MAX_MATCH - 1)
                lzss_ring_buffer[outgoing_position + WINDOW_SIZE] = byte;
            lookahead_position = (lookahead_position + 1) & WINDOW_MASK;
            insert_lzss_match_tree_node(lookahead_position);
            outgoing_position = (outgoing_position + 1) & WINDOW_MASK;
        }
        lzss_bytes_read += i;
        while (i++ < previous_match) {
            remove_lzss_match_tree_node(outgoing_position);
            lookahead_position = (lookahead_position + 1) & WINDOW_MASK;
            if (--remaining)
                insert_lzss_match_tree_node(lookahead_position);
            outgoing_position = (outgoing_position + 1) & WINDOW_MASK;
        }
    } while (remaining > 0);
    if (group_size > 1) {
        for (i = 0; i < group_size; ++i)
            write_bounded_stream_byte(group[i], lzss_output_stream);
        lzss_bytes_written += group_size;
    }
}
