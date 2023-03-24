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
		int j = 0;

		for (j = 0; j <= 14; j++)
		{	if (j <= 9)
			{
				_putchar('0' + j);
				continue;
			}
			_putchar('1');
			_putchar('0' + j - 10);
		}
		i++;
		_putchar('\n');
	}
}
