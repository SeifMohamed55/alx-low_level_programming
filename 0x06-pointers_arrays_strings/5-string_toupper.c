#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - changes all lower cases letters to upper case
 * @x: the string to be turned
 *
 * Return: void
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		x[i] = toupper(x[i]);
		i++;
	}
	return (x);
}
