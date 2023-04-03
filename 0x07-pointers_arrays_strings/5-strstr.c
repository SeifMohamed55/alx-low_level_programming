#include "main.h"
#include <string.h>
/**
 * _strstr - inds the first occurrence of the substring needle in the string haystack
 * @haystack: the big string
 * @needle: the small substring
 *
 * Return: pointer to the beginning of substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
