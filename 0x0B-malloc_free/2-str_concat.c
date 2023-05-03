#include "main.h"
#include <stdlib.h>

/**
 * str_concat - joins two strings
 * @s1: thefirst string
 * @s2: the second string
 *
 * Return: the pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strit;
	unsigned int i, j, k, lim;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strit = malloc(sizeof(char) * (i + j + 1));

	if (strit == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strit[k] = s1[k];

	lim = j;
	for (j = 0; j <= lim; k++, j++)
		strit[k] = s2[j];

	return (strit);
}
