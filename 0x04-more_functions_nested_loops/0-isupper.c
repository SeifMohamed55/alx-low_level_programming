#include <main.h>
#include <ctype.h>
/**
 * _isupper - retuns if the char is upper or not
 * @c: the char
 *
 * Return: true if upper and false otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
