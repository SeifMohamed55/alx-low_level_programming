#include <stdio.h>
/**
 * main - describtion
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y = 1;

	while (x <= 9)
	{
		y = 1;
		while (y <= 9)
		{
			putchar(x + '0');
			putchar(y + '0');
			putchar(',');
			putchar(' ');
			y++;

		}
		x++;
	}
	putchar('\n');
	return (0);

}
