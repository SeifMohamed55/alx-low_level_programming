#include "main.h"
#include <string.h>
/**
 * _strspn - returns the number of bytes in the initial segment of s have inptr
 * @s: the string
 * @accept: the prefix
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
