#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elemnts
 * @n: number of elements
 * @a: the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", *(a + i));
		if (i == n - 1)
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');

}
