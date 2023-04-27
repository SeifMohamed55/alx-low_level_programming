#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints anything
 * @format: list
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list list;
	char *sep;
	char v;

	va_start(list, format);
	while(format[i] != '\0' && i <(int)strlen(format))
	{
		v = format[i];
		switch (v)
		{
			case 'c':
				printf("%c%s", va_arg(list, int), sep);
				sep = ", ";
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), sep);
				sep = ", ";
				break;
			case 's':
				if (va_arg(list, char*) == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s%s", va_arg(list, char*), sep);
				sep = ", ";
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), sep);
				sep = ", ";
				break;
			default:
				break;
		}
		i++;
		 if (i == (int)(strlen(format) - 1))
			 sep = "";
	}
	va_end(list);
	printf("\n");
}
