#include "main.h"
#include <string.h>
/**
 * _strcat - concatinate a destination string into source
 * @dest: the str to be concatinated
 * @src: the src string
 *
 * Return: char* a pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);

}
