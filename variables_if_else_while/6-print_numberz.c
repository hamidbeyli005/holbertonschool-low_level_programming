#include <stdio.h>
/**
 * main - Write a program that prints all single digit
 * numbers of base 10 starting from 0,
 * followed by a new line.
(*
 * Return: 0 on success
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
