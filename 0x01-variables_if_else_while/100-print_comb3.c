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
		while (y <= 1)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x == 9)
				break;
			putchar(',');
			putchar(' ');
			x++;
			y++;

		}
	}
	putchar('\n');
	return (0);

}
