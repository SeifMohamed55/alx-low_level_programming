#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatinate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: ptr to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0, j = 0, st = 1 , nd = 1;
	char *x;

	if (s1 == NULL)
		st = 0;
	if (s2 == NULL)
		nd = 0;
	if (st)
	{
		while (s1[len1] != '\0')
		{

			len1++;
		}
	}
	if (nd)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
		len2++;
	}
	x = malloc(sizeof(char) * (len1 + len2));
	if (x == NULL)
		return (NULL);
	for (i = 0 ; i < len1 ; i++)
	{
		x[i] = s1[i];
	}
	for (i = len1 ; i < len1 + len2 ; i++, j++)
	{
		x[i] = s2[j];
	}
	return (x);

}
