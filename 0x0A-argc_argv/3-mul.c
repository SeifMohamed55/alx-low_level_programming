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

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);
	return (0);
}
