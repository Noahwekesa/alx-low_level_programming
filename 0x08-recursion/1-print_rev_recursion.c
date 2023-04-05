#include "main.h"
/**
 * _print_rev_recursion - program that Prints a string in reverse.
 * @s: s is the string to be printed.
 */
void _print_rev_recursion(char*s)
{
    if (*s)
    
    _print_rev_recursion(s+1);
    _putchar(*s);
}