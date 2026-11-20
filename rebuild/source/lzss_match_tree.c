/* Binary search trees for the ARM9 LZSS encoder’s sliding window. */
#include "lzss.h"

enum { ALPHABET_SIZE = 256, NO_NODE = WINDOW_SIZE };

/* The comparison linker binds these arrays and results to their ARM9 addresses. */
extern int lzss_parent[WINDOW_SIZE + 1];
extern int lzss_left_child[WINDOW_SIZE + 1];
extern int lzss_right_child[WINDOW_SIZE + 1 + ALPHABET_SIZE];

void initialize_lzss_match_trees(void)
{
    int i;

    /* One root for each possible first byte. */
    for (i = WINDOW_SIZE + 1; i <= WINDOW_SIZE + ALPHABET_SIZE; ++i)
        lzss_right_child[i] = NO_NODE;
    for (i = 0; i < WINDOW_SIZE; ++i)
        lzss_parent[i] = NO_NODE;
}

void insert_lzss_match_tree_node(int node)
{
    int length;
    int comparison = 1;
    unsigned char *key = &lzss_ring_buffer[node];
    int parent = WINDOW_SIZE + 1 + key[0];

    lzss_left_child[node] = NO_NODE;
    lzss_right_child[node] = NO_NODE;
    lzss_match_length = 0;

    for (;;) {
        if (comparison >= 0) {
            if (lzss_right_child[parent] != NO_NODE)
                parent = lzss_right_child[parent];
            else {
                lzss_right_child[parent] = node;
                lzss_parent[node] = parent;
                return;
            }
        } else {
            if (lzss_left_child[parent] != NO_NODE)
                parent = lzss_left_child[parent];
            else {
                lzss_left_child[parent] = node;
                lzss_parent[node] = parent;
                return;
            }
        }

        for (length = 1; length < MAX_MATCH; ++length) {
            comparison = key[length] - lzss_ring_buffer[parent + length];
            if (comparison != 0)
                break;
        }
        if (length > lzss_match_length) {
            lzss_match_position = parent;
            lzss_match_length = length;
            if (length >= MAX_MATCH)
                break;
        }
    }
    /* Replace the older entry when the full match is identical. */
    lzss_parent[node] = lzss_parent[parent];
    lzss_left_child[node] = lzss_left_child[parent];
    lzss_right_child[node] = lzss_right_child[parent];
    lzss_parent[lzss_left_child[parent]] = node;
    lzss_parent[lzss_right_child[parent]] = node;
    if (lzss_right_child[lzss_parent[parent]] == parent)
        lzss_right_child[lzss_parent[parent]] = node;
    else
        lzss_left_child[lzss_parent[parent]] = node;
    lzss_parent[parent] = NO_NODE;
}

void remove_lzss_match_tree_node(int node)
{
    int replacement;

    if (lzss_parent[node] == NO_NODE)
        return;
    if (lzss_right_child[node] == NO_NODE)
        replacement = lzss_left_child[node];
    else if (lzss_left_child[node] == NO_NODE)
        replacement = lzss_right_child[node];
    else {
        replacement = lzss_left_child[node];
        if (lzss_right_child[replacement] != NO_NODE) {
            do {
                replacement = lzss_right_child[replacement];
            } while (lzss_right_child[replacement] != NO_NODE);
            lzss_right_child[lzss_parent[replacement]] = lzss_left_child[replacement];
            lzss_parent[lzss_left_child[replacement]] = lzss_parent[replacement];
            lzss_left_child[replacement] = lzss_left_child[node];
            lzss_parent[lzss_left_child[node]] = replacement;
        }
        lzss_right_child[replacement] = lzss_right_child[node];
        lzss_parent[lzss_right_child[node]] = replacement;
    }
    lzss_parent[replacement] = lzss_parent[node];
    if (lzss_right_child[lzss_parent[node]] == node)
        lzss_right_child[lzss_parent[node]] = replacement;
    else
        lzss_left_child[lzss_parent[node]] = replacement;
    lzss_parent[node] = NO_NODE;
}
