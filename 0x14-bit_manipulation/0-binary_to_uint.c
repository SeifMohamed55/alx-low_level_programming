#include "main.h"
#include <stdlib.h>
/**
 * pow - power
 * @a: the num
 * @b: the power
 *
 * Return: power
 */
unsigned int power(int a, int b)
{
	unsigned int pow = 1;
	int i;

	for (i = 0; i < b ; i++)
	{
		pow *= a;
	}
	return (pow);
}
/**
 * binary_to_uint - bto i
 * @b: the string
 *
 * Return: number in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int c = 0;
	unsigned int fin = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			c++;
		else
			return (0);
		i++;
	}
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			fin += power(2, c);
		c--;
		i++;
	}
	return (fin/2);
}
