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
	char x[64];
	int i = 0;

	if(n == 0)
	{
		_putchar('0');
		return;
	}
	while (n != 0)
	{
		x[i++] = (n % 2) + '0' ;
		n /= 2;

	}
	i--;
	while (i>=0)
	{
		_putchar(x[i]);
		i--;
	}
}
