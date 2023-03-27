#include "main.h"
/**
 * print_rev - print a sting backwards
 * @s: the string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, sum = 0;

	while (s[i] != '\0')
	{
		sum++;
		i++;
	}
	for (i = sum-1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');


}
