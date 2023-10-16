#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a!='q' && a!='e')
		{
                	putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
