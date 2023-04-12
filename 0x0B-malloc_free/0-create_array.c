#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: the character
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *trn;
	unsigned int i;

	trn = malloc(sizeof(char) * size);
	if (size == 0 || trn == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		trn[i] = c;
	}
	return (trn);
}
