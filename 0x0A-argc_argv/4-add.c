#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * num - check if argument isnum
 * @str: tje string to be checked
 *
 * Return: 0 if not and 1 if true
 */
int num(char *str)
{
	int i = 0, len;

	len = strlen(str);
	while (i < len)
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		i++;
	}
	return (1);
}


/**
 * main - adds postitive numbers
 * @argc: num of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc ; i++)
	{
		if (num(argv[i]) == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
