#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	(void)argc;
	
	printf("%s\n", *argv);
	return (0);
}
