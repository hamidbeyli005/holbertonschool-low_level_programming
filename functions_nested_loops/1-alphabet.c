#include "main.h"
/**
 * main - make the alphabet , print alphabet
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
