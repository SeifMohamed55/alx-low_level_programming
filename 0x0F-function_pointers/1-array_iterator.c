#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - executes for each elment of the array
 * @array: the array
 * @size: the size of array
 * @action: ptr to function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}
