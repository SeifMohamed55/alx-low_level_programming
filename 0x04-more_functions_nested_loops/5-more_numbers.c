#include "main.h"

/**
 * more_numbers - prints from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 0, k = 0;

		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				if (j == 10)
					k = 10;
				_putchar('1');
			}
			_putchar('0' + j - k);
		}
		i++;
		_putchar('\n');
	}
}
