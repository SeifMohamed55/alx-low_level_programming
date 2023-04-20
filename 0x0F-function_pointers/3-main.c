#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - the application
 * @argc: number of param
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '*' || argv[2][0] != '/' || argv[2][0] != '+' || argv[2][0] != '%' || argv[2][0] != '-')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(a[3]) == 0 && (a[2][0] == '/' || a[2][0] == '%'))
	{
		printf("Error");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);

}