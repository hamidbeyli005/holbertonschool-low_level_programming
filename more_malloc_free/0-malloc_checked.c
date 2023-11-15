#include <stdlib.h>
/**
* malloc_checked: function that allocates memory using malloc
* return: a pointer to the allocated memory
* @b: malloc size
*/

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
