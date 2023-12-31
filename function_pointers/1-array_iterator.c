#include "function_pointers.h"
/**
 * array_iterator - Executes the provided action on each element of the array
 * @array: Pointer to the integer array
 * @size: Size of the array
 * @action: Pointer to the function to be executed on each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
