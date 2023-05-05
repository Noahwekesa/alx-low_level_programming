#include "main.h"

/**
 * set_bit - program that sets the
 * value of a bit to 1 at a given index.
 * @n: points to the no. to change
 * @index: is the idx, of the bit set
 *
 * Return: 1 if it worked,
 * or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z = 1 << index;

	if (index < 64)
	{
		*n = (*n & ~z) | ((1 << index) & z);
		return (1);
	}
	return (-1);
}
