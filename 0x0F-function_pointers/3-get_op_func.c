#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - gets the operator
 * @s: the operator
 *
 * Return: the operation
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL,NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f(a, b));
		}
	}
	return (NULL);
}
