#include "main.h"
/**
 * swap_int - swaps two numbers
 * @a: first num
 * @b: sec num
 *
 * return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
