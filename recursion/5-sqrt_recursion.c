#include "main.h"
/**
 * actual_sqrt - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (actual_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: number.
 * Return: the resulting square root
*/

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (actual_sqrt(n, 1));
}
