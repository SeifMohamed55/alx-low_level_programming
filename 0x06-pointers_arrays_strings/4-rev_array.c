#include "main.h"
#include <string.h>
/**
 * reverse_array - it reverses an array
 * @a: the array to be reversed
 * @n: the size of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i,j;

	for (i = 0, j = n-1 ; i < n/2 ; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}
}
