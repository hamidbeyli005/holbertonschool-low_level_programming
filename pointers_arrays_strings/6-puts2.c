#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 *starting with the first character, followed by a new line.
 * @str: char
 *
 * Return: always 0.
 */

void puts2(char *str)
{
	int i = 0;
	int index;

	while (str[i] != '\0')
	{
		i++;
	}
	for (index = 0; index < i; index += 2)
	{
		_putchar (str[index]);
	}
	_putchar ('\n');
}
