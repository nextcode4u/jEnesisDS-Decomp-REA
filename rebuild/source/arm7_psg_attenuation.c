/* Rounded 6553 * 10^(-level/10), with level 15 reserved for silence. */
const int psg_attenuation_table[16] = {
    6553, 5205, 4135, 3284, 2609, 2072, 1646, 1307,
    1039, 825, 655, 521, 413, 328, 261, 0,
};
