#include "main.h"
/**
 * puts2 - print every other charachrer
 * @str: the string to be reversed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, sum = 0;

	while (str[i] != '\0')
	{
		sum++;
		i++;
	}

	i = 0;
	while (str[i] != '\0')
	{
		if(i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_purchar('\0');

}
