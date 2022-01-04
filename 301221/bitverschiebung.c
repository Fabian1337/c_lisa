#include <stdio.h>

int main()
{
    // Bit Verschiebung

    int a = 5, b, c; // 5 dezimal = 0101 binär 1 2 4 8 16 32 64 128 256 512 1024 2048
    // 23 = 10111 // 36 100100

    /* Zahl in binär umwandeln und in
    mit >> oder << angegebene richtung um X stellen verschieben */
    b = a << 1; // linksverschiebung -- 0101 -> 01010
    c = a >> 1; // rechtsverschiebung -- 0101 -> 010

    printf("b: %i, c: %i", b, c);
}