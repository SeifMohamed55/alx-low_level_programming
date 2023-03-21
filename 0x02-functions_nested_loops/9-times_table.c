#include <stdio.h>
/**
 * times_table - print time table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (((i * (1 + j) % 10) == i * (j + 1)))
			{
				printf("%d", i * j);
				if (j != 9)
				{
				putchar(',');
				putchar(' ');
				putchar(' ');
				}
			}
			else
			{
				printf("%d", i * j);
				if (j != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
		putchar('\n');
	}

}
