#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size of square
*/
void print_square(int size)
{
	int a, b;

	b = 0;
	if (size > 0)
	{
		while (b < size)
		{
			a = 0;
			while (a < size)
			{
				_putchar ('#');
				a++;
			}
			_putchar ('\n');
			b++;
		}
	}
	else
	_putchar ('\n');
}
