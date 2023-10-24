#include "main.h"
/**
 * rev_string - function that prints a string,
 * in reverse, followed by a new line.
 * @s:  char
 *
 * Return: always 0.
 */

void rev_string(char *s)
{
	int len, i;
	char temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < l len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
