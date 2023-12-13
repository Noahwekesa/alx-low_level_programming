#include "search_algos.h"
/*
 * binary_search - searches for a value in a sorted array
 * of intergers using the binary search
 */
int binary_search(int *array, size_t size, int value)
{
  if (array == NULL) {
    return -1;
  }
  size_t low = 0;
  size_t high = size - 1;

  printf("Searching in array: ");
  for (size_t i = 0; i < size; i++)
  {
    printf("%d", array[i]);
  }
  printf("\n");
  while (low <= high) {
    size_t mid = low + (high - low) / 2;
    
    if (array[mid] == value){
      return mid;
    }
    if (array[mid] > value){
      high = mid- 1;
    }
    else {
      low = mid + 1;

    }
  }
  return -1;
}

