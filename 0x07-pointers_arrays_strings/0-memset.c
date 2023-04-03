#include "main.h"
#include <string.h>
/**
 * _memset - sets the first n bytes of a memory
 * @s: the variable that allocates
 * @n: the first n bytes of memory
 * @b: the constant byte b
 *
 * Return: return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
