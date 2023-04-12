#include "main.h"
#include <stdlib>
/**
 * _strdup - return a pointer to a new string which is a duplicate of old string
 * @str: old string
 *
 * Return: ptr to new string
 */
char *_strdup(char *str)
{
	int i;
	char *new;
	int len = 0;

	if(str == NULL)
		retun (NULL);
	while(str[len] != '\0')
	{
		len++;
	}
	new = malloc(sizeof(char) * len);
	for (i = 0 ; i < len ; i++)
	{
		new[i] = str[i];
	}
	return (new);

}
