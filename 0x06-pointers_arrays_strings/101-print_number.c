#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * print_number - print an integer
 * @n: the integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	char x;
	while (n)
	{
		x = n % 10;
		_putchar(x + '0');
		n = n / 10;
	}
}
