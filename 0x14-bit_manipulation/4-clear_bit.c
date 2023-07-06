#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * clear_bit - prjkfabuba
 * @n: decimal num
 * @index: index
 *
 * Return: 1  and -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 31)
		return (-1);
	i = ULONG_MAX - (1 << index);
	*n = *n & i;
	return (1);
}
