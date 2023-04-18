#include <math.h>
#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - a number to power of another number
 * @x: base
 * @y: power
 *
 * Return: -1 if y < 1  and the power otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
