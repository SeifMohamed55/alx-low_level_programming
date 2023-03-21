#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - checks if letter is an alphabet
 * @c : the letter to be checked
 *
 * Return: 0 if not a letter and 1 if a letter
 */
int _isalpha(int c)
{
	int x;

	x = isalpha(c);
	if (x)
		return (1);
	else
		return (0);

}
