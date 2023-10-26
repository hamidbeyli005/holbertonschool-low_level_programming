#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int capitalizeNext = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == ',' || str[i] == ';' ||
			str[i] == '.' || str[i] == '!' || str[i] == '?'
			|| str[i] == '"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalizeNext = 1;
		}
		else
		{
			if (capitalizeNext && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
			capitalizeNext = 0;
		}
	}
	return (str);
}
