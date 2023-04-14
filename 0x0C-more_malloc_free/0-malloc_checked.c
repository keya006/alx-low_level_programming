#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - it allocates memory using malloc
 * @b: the size of mem
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
