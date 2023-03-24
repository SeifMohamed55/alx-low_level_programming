#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: number
 *
 * Return: void
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		n--;
	
	}
	_putchar('\n');
}
