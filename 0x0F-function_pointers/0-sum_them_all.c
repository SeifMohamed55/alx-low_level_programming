#include <stdio.h>
#include <stdarg.h>
int sum (int no,...)
{
	va_list lis;
	int i, n;

	va_start(lis, no);
	n = 0;
	for (i = 0; i < no; i++)
	{
		n += va_arg(lis, int);
	}
	va_end(lis);
	return (n);
}
