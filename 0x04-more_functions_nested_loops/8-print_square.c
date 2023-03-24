#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: number
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int l;
	int size = n;

	while (n > 0)
	{
		for (l = 0 ; l < size ; l++)
		{
			_putchar('#');
		}
		_putchar('\n');
		n--;
	}
	if (size <= 0)
		_putchar('\n');
}
