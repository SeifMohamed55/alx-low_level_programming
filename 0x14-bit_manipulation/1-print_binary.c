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
	int c = 0, i;
	unsigned long int x = n;

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
	c--;
	x = n;
	for (i = 1 << c ; i > 0 ; i = i >> 1)
	{
		if (i & n)
			_putchar('1');
		else
			_putchar('0');
	}

}
