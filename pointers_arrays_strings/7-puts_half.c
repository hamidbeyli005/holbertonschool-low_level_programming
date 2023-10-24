#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: char
 *
 * Return: always 0.
 */

void puts_half(char *str)
{
	int i = 0;
	int index;

	while (str[i] != '\0')
	{
		i++;
	}
	for (index = (i + 1) / 2 ; index < i ; index++)
	{
		_putchar (str[index]);
	}
	_putchar ('\n');
}
