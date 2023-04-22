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
	char *sep = "";

	va_start(list, format);
	while(format[i] != '\0' && i < strlen(format))
	{
		if (i == strlen - 1)
			sep = "";
		swtich (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(list, char), sep);
				sep = ", ";
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), sep);
				sep = ", ";
				break;
			case 's':
				if (format[i] == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s%s", va_arg(list, char*), sep);
				sep = ", ";
				break;
			case 'f':
				printf("%f%s", va_arg(list, float), sep);
				sep = ", ";
				break;
			default
				break;
		}
		i++;
	}
	va_end(ls);
	printf("\n");
}
