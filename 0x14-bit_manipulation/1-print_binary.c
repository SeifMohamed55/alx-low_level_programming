#include "main.h"
#include <stdlib.h>
/**
 * print_binary - prjkfabuba
 * @n: decimal num
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int c = 0;
	unsigned long int x = n, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (x != 0)
	{
		x = x >> 1;
		c++;
	}
	for (i = 1 << (c - 1) ; i > 0 ; i = i >> 1)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
	}

}
