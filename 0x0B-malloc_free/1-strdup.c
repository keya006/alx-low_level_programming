#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - pointer to new space in mem
 * @str: the string
 *
 * Return: as above
 */

char *_strdup(char *str)
{
	char *was;
	int i;
	int t;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	was = malloc(sizeof(char) * (i + 1));
	if (was == NULL)
	{ return (NULL);
	}
	for (t = 0; str[t]; t++)
	{
		was[t] = str[t];
	}
	return (was);
