#include "main.h"
#include <stdlib.h>
/**
 * get_bit - prjkfabuba
 * @n: decimal num
 * @index: index
 *
 * Return: 1 if on 0 if off and -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 31)
		return (-1);
	i = 1 << (index);
	if (n & i)
		return (1);
	else
		return (0);
}
