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
		int j =0;

		for (j = 0; j <= 14; j++)
		{		
			_putchar('0' + i);
			
		}
		i++;
		_putchar('\n');
	}
}
