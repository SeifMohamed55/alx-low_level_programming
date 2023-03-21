#include <stdio.h>
/**
 * _islower - checks if lowercase
 * @c : the charachter to be compared
 *
 * Return: 0 if not lowercase 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);


}
