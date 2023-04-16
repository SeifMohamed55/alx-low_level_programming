#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two number
 * @argc: number of args
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[argc - 1]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("%d\n", atoi(argv[1]));
	}
	return (0);
}
