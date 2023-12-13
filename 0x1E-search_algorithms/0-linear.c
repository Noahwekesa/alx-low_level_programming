#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an arrary
 * of intergers using the linear search
 * @array: A pointer to the first element of the array to search 
 * @size: number of eleements in the array.
 * @value: value to search for.
 *
 * Return: the first index where value is located.
 * if value is not present in array is null your function must return -1
 *
 * Description: every time you compare a value in the array to the value you are seaching
 *
 */
int linear_search(int *array, size_t size, int value)
{
  if (array == NULL)
    return (-1);

  for (size_t i = 0; i< size; i++)
  {
    printf("value checked array[%d] = [%d]\n", i, array[i]);
    if (array[i] == value)
      return (i);
  }
  return (-1);
}
