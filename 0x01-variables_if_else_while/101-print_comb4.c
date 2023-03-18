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
	int z = 2;

	while (x <= 9)
	{
		y = 1;
		while (y <= 9)
		{
			if (x >= y)
			{
				y++;
				continue;
			}
			while (z <= 9)
			{
				if (y >= z)
				{
					z++;
					continue;
				}
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				if (x == 7 && y == 8 && z == 9)
					break;
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);

}
