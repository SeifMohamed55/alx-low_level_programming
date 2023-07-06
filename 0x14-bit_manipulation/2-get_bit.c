#include "main.h"
#include <stdlib.h>
/**
 * print_binary - prjkfabuba
 * @n: decimal num
 * @index: index
 *
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	i = 1 << (index);
	if (n & i)
		return (1);
	else
		return (0);
}
