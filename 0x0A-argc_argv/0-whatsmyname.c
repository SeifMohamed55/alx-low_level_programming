#include "main.h"
#include <stdio.h>
/**
 * main - prints its name
 * @argc: number of params
 * @argv: the string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
