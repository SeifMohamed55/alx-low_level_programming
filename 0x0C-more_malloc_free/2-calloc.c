#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of bytes
 * @size: size of each bytes
 *
 * Return: ptr to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (x == NULL)
		return (NULL);
	x = malloc(nmemb * size);
	memset(x, 0, size * nmemb);
	return (x);
}
