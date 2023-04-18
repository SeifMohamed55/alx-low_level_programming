#include "main.h"
/**
 * pr - try
 * @n: num
 * @i: the iterat
 *
 * Return: 0,1
 */

int pr(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	return (pr(n, i + 1));

}
/**
 * is_prime_number - faslk
 * @n: the num
 *
 * Return: 1 if prime , 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	return (pr(n, 2));
}
