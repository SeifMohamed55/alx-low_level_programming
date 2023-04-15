#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory with specific value
 * @b: number of memory blocks to allocate
 *
 * Return: pointer of Void
 */
void *malloc_checked(unsigned int b)
{
	void *x =  malloc(b);

	if ( x == NULL)
		exit(98);
	return (x);
}
