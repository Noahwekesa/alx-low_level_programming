#include "main.h"

/**
 * file: 0-puts_recursion.c - prints a string followed by new line  
 * @x:string
 * Return: always 0
 * 
 */

void _puts_recursion(char *x)
{
    if (*x)
    {
        _putchar(*x);
        _puts_recursion(x + 1);
    }
    else
    {
        _putchar('\n');
    }
}