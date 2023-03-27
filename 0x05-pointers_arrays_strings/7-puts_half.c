#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, sum = 0, n;

	while (str[i] != '\0')
	{
		sum++;
		i++;
	}
	i = 0;
	if (sum % 2 == 0)
	{
		n = (sum / 2);
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
	else
	{
		n = (sum - 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}

}
