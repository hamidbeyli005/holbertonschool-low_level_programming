#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: the name of the array
 * @size: the size of the array
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, primary_diag_sum = 0, secondary_diag_sum = 0;

	for (i = 0; i < size; i++)
	{
		primary_diag_sum += a[i * size + i];
		secondary_diag_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", primary_diag_sum, secondary_diag_sum);
}
