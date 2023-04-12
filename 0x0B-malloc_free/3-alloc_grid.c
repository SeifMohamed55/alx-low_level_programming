#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - makes a 2d matrix
 * @width: no of cols
 * @height: no of rows
 *
 * Return: ptr to the matrinx
 */
int **alloc_grid(int width, int height)
{
	int **x, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		x[i] = malloc(sizeof(int) * height);
		if (x[i] == NULL)
			free(x);
	}
	for (i = 0 ; i < width ; i++)
	{
		for (j = 0 ; j < height ; j++)
		{
			x[i][j] = 0;
		}
	}
	return (x);
}
