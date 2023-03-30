#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitalize all words of a string
 * @x: the string to be capitalized
 *
 * Return: the new string
 */
char *cap_string(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[i] == ' ' || x[i] == '\n' || x[i] == '\t'
				|| x[i] == ',' || x[i] == ';' || x[i] == '.'
				|| x[i] == '!' || x[i] == '?' || x[i] == '"'
				|| x[i] == '(' || x[i] == ')' || x[i] == '{'
				|| x[i] == '}')
		{
			x[i + 1] = toupper(x[i + 1]);
			i++;
		}
	}
}
