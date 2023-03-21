#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char x = 'a';

	for (i = 0 ; i < 10 ; i++)
	{
		x = 'a';
		while (x <= 'z')
		{
			putchar(x);
			x++;
		}
		putchar('\n');
	}
	return;

}
