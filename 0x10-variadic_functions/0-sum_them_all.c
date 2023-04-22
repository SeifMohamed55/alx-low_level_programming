#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all of its parameters
 * @n: the number of parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list lis;
	unsigned int i;
	int k;

	va_start(lis, n);
	k = 0;
	for (i = 0; i < n; i++)
	{
		k += va_arg(lis, int);
	}
	va_end(lis);
	return (k);
}
