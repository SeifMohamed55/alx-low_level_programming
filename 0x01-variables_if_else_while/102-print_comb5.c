#include <stdio.h>
/**
 * main - describtion
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y = 0;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x == 9)
				break;
			putchar(',');
			putchar(' ');
			y++;

		}
		x++;
	}
	putchar('\n');
	return (0);

}
