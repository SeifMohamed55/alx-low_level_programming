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
		putchar(x);
		x++;
	}
	x = 'A';
	while (x <= 'Z')
	{
		putchar(x);
		x++;
	
	}
	putchar('\n');
	return (0);

}
