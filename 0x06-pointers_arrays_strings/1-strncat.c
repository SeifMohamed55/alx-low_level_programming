#include "main.h"
#include <string.h>
/**
 * _strncat - concatinate two string with at most n bytes from source
 * @src: the src string
 * @dest: destinationn string to be concatinated
 * @n: the number of bytes to be taken at most form
 *
 * Return: *dest the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);	
}
