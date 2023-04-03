#include "main.h"
#include <string.h>
/**
 * _strpbrk - first occurence of the sring s of any of the bytes in accept
 * @s: the string
 * @accept: the string to be accepted as compare
 *
 * Return: the first byte of the found string
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
