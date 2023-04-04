#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the array
 * @size: size of the array
 *
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i = 0, j = 0, k = 0;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
			{
				sum1 += a[k];
			}
			if (j + i = size - 1 )
			{
				sum2 += a[k];
			}
			k++;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
