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
	if (n == 0)
	{
		return;
	}
	print_binary(n / 2);
	_putchar('0' + (n % 2));
}
