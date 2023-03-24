#include "main.h"
/**
 * print_square - prints diagonal
 * @n: number
 *
 * Return: void
 */
void print_square(int n)
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
