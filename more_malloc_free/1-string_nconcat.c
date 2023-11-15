#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings using n amount of s2
 * @s1: First string
 * @s2: String to add to end of s1
 * @n: Amount of s2 to add to s1
 *
 * Return: pointer to new area in memory, NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int len = 0, size, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
	{
		len++;
	}
	size = (len + n) * sizeof(char);
	ptr = malloc(size + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0' && i < size)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && i < size)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}

	ptr[i] = '\0';
	return (ptr);
}
