#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)	
{
	int **nnn;		
	int x, y;
	if (width <= 0 || height <= 0)
		return (NULL);
	nnn = malloc(sizeof(int *) * height);
	if (nnn == NULL)
		return (NULL);
	for (x = 0; x < height; x++)	
	{
		nnn[x] = malloc(sizeof(int) * width);
        if (nnn[x] == NULL)
		{
			for (; x >= 0; x--)
				free(nnn[x]);
			free(nnn);
			return (NULL);
		}
	}	
	for (x = 0; x < height; x++)	
	{
		for (y = 0; y < width; y++)
			nnn[x][y] = 0;	
	}
	return (nnn);
}