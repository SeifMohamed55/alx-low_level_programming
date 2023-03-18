#include <stdio.h>
/**
 * main - describtion
 *
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 122)
	{
		if (x == 'q' || x == 'e' )
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);

}
