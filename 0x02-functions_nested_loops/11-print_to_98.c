#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: start printing from n
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
			n--;
		}
		putchar('\n');
	}

	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			putchar(',');
			putchar(' ');
			n++;
		}
		putchar('\n');
	}

	else
	{
		printf("%d\n", 98);
	}

}
