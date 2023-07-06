#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - prjkfabuba
 * @n: decimal num
 * @m: num
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned long int x = 1 << 32;
	int c = 0;

	while (x > 0)
	{
		if (i & x)
			c++;
		x = x >> 1;
	}
	return (c);
}
