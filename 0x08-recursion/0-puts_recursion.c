#include "main.h"

/**
 * function name: _puts_recursion - prints a string followed by new line  
 * @s:string
 * Return: always 0
 * 
 */

void _puts_recursion(char *s)
{
        if (*s)
        {
            _putchar(*s);
            _puts_recursion(s + 1);
            
        }


        else
            _putchar('\n');
}