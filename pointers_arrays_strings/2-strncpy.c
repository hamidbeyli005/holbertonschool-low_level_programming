#include "main.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: char string to concatenate to
 * @src: char string
 * @n: number
 * Return: pointer to resulting string `dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; src[c] != '\0' && n > c; c++)
	{
		dest[c] = src[c];
	}
	for (; n > c; c++)
		dest[c] = '\0';
	return (dest);
}
