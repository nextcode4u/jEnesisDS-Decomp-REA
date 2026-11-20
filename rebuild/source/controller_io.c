/* Narrow the Genesis controller bus read to its byte-wide value. */
unsigned read_genesis_io_register_byte(unsigned address);

unsigned read_genesis_io_as_u8(unsigned address)
{
    return (unsigned char)read_genesis_io_register_byte(address);
}
