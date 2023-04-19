#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator.c - function that executes a function given as
 * * a parameter on each element of an array.
 * @array: array
 * @size: element to print
 * @action: pointer to print in regular or hex
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL)
{
if (action == NULL)
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
