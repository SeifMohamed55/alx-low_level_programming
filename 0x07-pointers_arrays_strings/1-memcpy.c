#include <string.h>
#include "main.h"
/**
 * _memcpy - copies n bytes form sourc to dest
 * @dest: destination
 * @src: source
 * @n: n bytes memory
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
