#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks digit or not
 * @c: the char to be checked
 *
 * Return: 0 if false 1 if true
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
