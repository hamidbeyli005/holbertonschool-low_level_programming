#include "main.h"

/**
 * string_toupper - Change all lowercase letters to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		if (*c > 96 && *c < 123)
		{
			*c -= 32;
		}
		c++;
	}
	return (c);
}
