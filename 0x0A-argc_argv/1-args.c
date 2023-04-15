#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of args
 * @argc: number of args
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argv[0] = "sad";
	printf("%d\n", argc - 1);
	return (0);
}
