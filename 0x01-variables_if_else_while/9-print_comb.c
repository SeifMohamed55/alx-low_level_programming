#include <stdio.h>
/**
 * main - describtion
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		if (x == 9)
			break;
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);

}
