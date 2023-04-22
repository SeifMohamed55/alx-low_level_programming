#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - orints
 * @separator: str
 * @n: number of args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(list, char*);
		if (x == NULL)
			printf("(nil)");
		printf("%s", x);
		if (separator == NULL)
			continue;
		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	printf("\n");
}
