#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint – program that converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one
 * or more chars in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int z;
	unsigned int basenum = 0;

	if (b == NULL)
		return (0);
	for (z = 0; b[z]; z++)
	{
		if (b[z] == '1')
			basenum = (basenum << 1) | 1;
		else if (b[z] == '0')
			basenum <<= 1;
		else
			return (0);
	}
	return (basenum);
}
