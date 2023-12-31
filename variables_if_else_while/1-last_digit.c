#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if the last digit of a random number is
 * greater than or less than 5, or is zero..
(*
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and ", n, n % 10);

	if (n % 10 > 5)
	{
		printf("is greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("is 0\n");
	}
	else
	{
		printf("is less than 6 and not 0\n");
	}
	return (0);
}
