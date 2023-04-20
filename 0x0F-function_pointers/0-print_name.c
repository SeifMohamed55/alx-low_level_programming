#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: the name
 * @f: the function it takes to print a name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
