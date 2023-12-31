#include "main.h"
/**
 * actual_is_prime - recurses to find the natural
 * is prime number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_is_prime(int n, int i)
{
	if (i * i == n)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (actual_is_prime(n, i + 1));
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: number.
 *
 * Return: 1 if n is a prime number, 0 if not
*/

int is_prime_number(int n)
{
	if (n < 1)
	{
		return (0);
	}
	return (actual_is_prime(n, 1));
}
