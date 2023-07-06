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
	unsigned long int i = n ^ m, ni = n, mi = m;
	unsigned long int x;
	int c = 0, len = 0;

	while (ni > 0 || mi > 0)
	{
		ni = ni >> 1;
		mi = mi >> 1;
		len++;
	}
	x = 1 << len;
	while (x > 0)
	{
		if (i & x)
			c++;
		x = x >> 1;
	}
	return (c);
}

