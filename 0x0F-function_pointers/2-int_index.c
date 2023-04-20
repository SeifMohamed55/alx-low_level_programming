#include "function_pointer.h"
#include <stdlib.h>
/**
 * int_index - search
 * @array: the array
 * @size: size
 * @cmp: the fuction to compare
 *
 * Return: the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
