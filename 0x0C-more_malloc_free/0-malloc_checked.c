#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory with specific value
 * @b: number of memory blocks to allocate
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *b =  malloc(b);

	if ( b == NULL)
		exit(98);
	return (b);
}
