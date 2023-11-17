#include <stdlib.h>

/**
 * *array_range - make  memory for an array
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int len = 0;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) *  (max - min + 1));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[len] = min;
		len++;
		min++;
	}
	return (arr);
}
