#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char c;
	int count = 0;

	while (count++ < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
