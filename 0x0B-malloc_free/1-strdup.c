#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer to a new string
 * @str: old string
 *
 * Return: ptr to new string
 */
char *_strdup(char *str)
{
	int i;
	char *new;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	new = malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);

	for (i = 0 ; i < len ; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
