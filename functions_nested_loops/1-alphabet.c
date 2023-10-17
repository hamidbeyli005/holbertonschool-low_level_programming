#include "main.h"
/**
 * print_alphabet - wirte the the lower-case alphabet on a line.
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
