#include "main.h"
#include <stdlib.h>
/**
 * create_array - it creates an array of size size
 * @size: size of the array
 * @c: a char
 *
 * Return: NULL if size = 0 , pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *x = malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0 ; i < size ; i++)
	{
		x[i] = c;
	}

	return (x);
}
