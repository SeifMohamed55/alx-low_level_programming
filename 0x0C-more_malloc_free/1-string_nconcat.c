#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate first n bytes
 * @s1: first str
 * @s2: sec str
 * @n: number of bytes
 *
 * Return: ptr to the new allocated str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x1 = strlen(s1), x2 = strlen(s2), i = 0, j = 0;
	char *new;
	int t1 = 1, t2 = 1;

	if (n >= x2)
		n = x2;
	new = malloc((x1 + n + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	if (s1 == NULL)
		t1 = 0;
	if (s2 == NULL)
		t2 = 0;
	if (t1)
	{
		while (s1[i] != '\0')
		{
			new[i] = s1[i];
			i++;
		}
	}
	if (t2)
	{
		while ((s2[j] != '\0') && (n > j))
		{
			new[j + i] = s2[j];
			j++;
		}
	}
	new[j + i] = '\0';
	return (new);
}
