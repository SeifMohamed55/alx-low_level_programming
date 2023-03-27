#include "main.h"
/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int sum = 0, i = 0, j = 0;

	while (s[i] != '\0')
	{
		sum++;
		i++;
	}
	for (i = sum - 1, j = 0 ; i >= sum / 2 ; i--, j++)
	{
		int temp = a[j];

		a[j] = a[i];
		a[i] = temp;
	}
}
