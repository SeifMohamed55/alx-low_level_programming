#include <math.h>
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
	return (pow((double)x, (double)y));
}
