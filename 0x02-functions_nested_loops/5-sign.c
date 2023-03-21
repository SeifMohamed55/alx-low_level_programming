#include <stdio.h>

/**
 * print_sign - print the sign of a number
 * @n: the number to be compared
 *
 * Return: 0 if 0, -1 if negative and 1 if positive
 */
int print_sign(int n)
{

	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else 
	{
	putchar('0');
	return (0);
	}
}
