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
	char *ptr;
	unsigned int i;
	unsigned int ttsiz;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ttsiz = nmemb * size;
	ptr = malloc(ttsiz);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ttsiz; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
