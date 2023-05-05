#include "main.h"

/**
 * get_bit - program that returns the value
 * of a bit at a given index.
 * @n: no. to search
 * @index: idx of the bit
 *
 * Return: the value of the bit at index,
 * index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	else if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
