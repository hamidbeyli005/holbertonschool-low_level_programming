#include <stdio.h>
/**
 * main - Write a program that prints the lowercase
 * alphabet in reverse, followed by a new line.
(*
 * Return: 0 on success
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
