#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of anumber
 * @x: the number to print its last digit
 *
 * Return: the last digit of the number
 */

int print_last_digit(int x)
{
	int y = abs(x % 10);

	_putchar(y + '0');
	return (y);

}
