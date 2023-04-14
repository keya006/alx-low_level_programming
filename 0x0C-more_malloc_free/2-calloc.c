#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size
 *
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	ptr = malloc(nmemb * sizeof(size));

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
