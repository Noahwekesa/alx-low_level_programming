#include "main.h"

/**
 * print_binary - program that prints the
 * binary representation of a number.
 * @n: no. to print in binary
 */
void print_binary(unsigned long int n)
{
	int z = n, x, nums = 0;

	while (z > 0)
	{
		z = z >> 1;
		nums++;
	}
	for (x = nums - 1; x >= 0; x--)
	{
		_putchar('0' + ((n >> x) & 1));
	}
}
