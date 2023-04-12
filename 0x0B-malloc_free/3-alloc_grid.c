#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - makes a 2d matrix
 * @width: no of cols
 * @heigt: no of rows
 *
 * Return: ptr to the matrinx
 */
int **alloc_grid(int width, int height)
{
	int **x;

	if (width <= 0 || height <=0)
		return (NULL);
	x[height] = malloc(sizeof(int[height][width]));
	if (x == NULL)
		return (NULL);
	return (x);
}
