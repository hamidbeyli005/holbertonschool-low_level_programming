#include "main.h"
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s:  char
 *
 * Return: always 0.
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar (s[j]);
		j--;
	}
	_putchar ('\n');
}
