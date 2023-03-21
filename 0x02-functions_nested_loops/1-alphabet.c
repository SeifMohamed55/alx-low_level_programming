#include <stdio.h>

/**
 * print_alphabet - it prints lower case alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return;

}
