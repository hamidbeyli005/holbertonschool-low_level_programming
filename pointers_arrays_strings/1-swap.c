/**
 * swap_int - function that swaps the values of two integers.
 * @n: An integer to swap
 * @b: Another integer to swap
 *
 * Return: Always 0.
 */

void swap_int(int *n, int *b)
{
	int c = *n;

	*n = *b;
	*b = c;
}
