#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - followed by string
 * @separator: the string
 * @n: number of parameters
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	unsigned int i;
	int k;

	va_start(lis, n);
	for (i = 0; i < n ; i++)
	{
		k = va_arg(lis, int);
		printf("%d", k);
		if (separator == NULL)
			continue;
		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");
}
