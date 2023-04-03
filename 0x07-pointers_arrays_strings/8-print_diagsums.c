#include "main.h"
#include <string.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix 
 * @a: the array
 * @size: size of the array;
 *
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int i = 0; int j = 0; long long sum1 = 0, sum2 = 0;

	for (i = 0 ; i < 2 ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == 0)
			{
				sum1 += a[0][j];
			}
			if (i == 1)
			{
				sum += a[size - 1][j];
			}
		}
	}
	printf("%lld, %lld", sum1, sum2);
}
