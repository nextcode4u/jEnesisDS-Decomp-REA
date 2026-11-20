/* Pairwise byte swapping used by cartridge and save-RAM storage. */
unsigned swap_adjacent_bytes_in_backing_buffer(unsigned char *bytes, unsigned size)
{
    unsigned even_size;
    unsigned char *position;

    if (!bytes || size <= 1)
        return 0;
    even_size = size & ~1U;
    if (even_size) {
        position = bytes;
        do {
            unsigned char first = position[0];
            unsigned char second = position[1];
            position[0] = second;
            position[1] = first;
            position += 2;
        } while ((unsigned)(position - bytes) < even_size);
    }
    return even_size;
}
