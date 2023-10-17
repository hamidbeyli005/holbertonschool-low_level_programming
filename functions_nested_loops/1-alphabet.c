#include "main.h"
/**
 * main - make the alphabet
 * return - 0
 */

void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
