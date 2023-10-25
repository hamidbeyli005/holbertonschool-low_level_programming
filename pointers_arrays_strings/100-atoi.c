#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the input string.
 *
 * Return: Converted integer. If no valid integer is found, return 0.
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;
	short found_digit = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			digit = *s - '0';
			result = result * 10 - digit;
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}
