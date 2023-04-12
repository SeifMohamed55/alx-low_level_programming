#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional 
 * @grid: the array to be freed
 * @height: first dimension
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i, *x;

	for (i = 0 ; i < height ; i++)
	{
		x = grid[i];
		free(x);
	}
	free(grid);
}
