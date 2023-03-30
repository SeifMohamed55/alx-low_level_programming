#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string into other string
 * @src: the src to be copied
 * @dest: the dest str to be copied into
 *
 * Return: char* pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
