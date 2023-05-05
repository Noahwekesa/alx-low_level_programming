#include "main.h"

/**
 * get_endianness - that checks the endianness.
 * 
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int z;
	char *s;

	z = 1;
	s = (char *) &z;

	return ((int)*s);
}