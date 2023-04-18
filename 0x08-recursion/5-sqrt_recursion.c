#include "main.h"
#include <math.h>
/**
 * sqr - sqrt
 * @n: the num
 * @c: counter
 *
 * Return: sqrt , -1
 */
int _sqrt(int n , int c)
{
	if (c * c == n)
		return (c);
	if (c * c > n)
		return (-1);
	return (_sqrt(n, c + 1));
}

/**
 * _sqrt_recursion - sqrt of a number
 * @n: the num
 *
 * Return: sqrt of number
 */
int _sqrt_recursion(int n)
{
	

	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
