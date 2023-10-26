#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * @n: number
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; n--, c++)
	{
		dest[i] = src[c];
		i++;
	}
	return (dest);
}
