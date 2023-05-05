#include "main.h"

/**
 * flip_bits - program that returns the number of bits you 
 * would need to flip to get from one number to another.
 * @n: the first value
 * @m: the second value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int cur_bits = n ^ m;
    unsigned int numbits = 0;

    while (cur_bits > 0)
    {
        if (cur_bits & 1)
        numbits++;

        cur_bits >>= 1;
    }

    return (numbits);
}