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
	int z = 0;
	int q = 0;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			q = 0;
			while (q <= 9)
			{
				z = 0;
				while (z <= 9)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(' ');
					putchar(q + '0');
					putchar(z + '0');
					if (x == 9 && y == 9 && q == 9 && z == 9)
						break;
					putchar(',');
					putchar(' ');
					z++;
				}
				q++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);

}
