#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array and fills it with right nums
 * @min: min num
 * @max: max num
 *
 * Return: ptr to an array
 */
int *array_range(int min, int max)
{
	int *x;
	int i, j;

	if (min > max)
		return (NULL);
	x = malloc((max - min + 1) * sizeof(int));
	if (x == NULL)
		return (NULL);
	for (i = 0, j = min; i <= max - min ; i++, j++)
	{
		x[i] = j;
	}
	return (x);
}
