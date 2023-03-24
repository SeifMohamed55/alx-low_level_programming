#include "main.h"
/**
 * print_line - it prints
 * @n: number of lines
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('#');
		n--;
	}
	_putchar('\n');
}
