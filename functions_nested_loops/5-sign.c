#include "main.h"
/**
 * print_sign - function that prints the sign of a number..
 * @c: The character to be checked.
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero , -1 and prints - if n is less than zero
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
