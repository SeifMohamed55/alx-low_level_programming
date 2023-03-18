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
		if(x == 9)
			break;
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar('\n');
	return (0);

}
