#include <stdio.h>
/**
 * main - describtion
 *
 * Return: 0
 */
int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}

	x = 'a';

	while (x <= 'f')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);

}
